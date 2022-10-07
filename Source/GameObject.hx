package;

import openfl.Assets;
import openfl.Lib;
import openfl.display.Bitmap;
import openfl.events.Event;
import openfl.geom.Point;

class GameObject extends Behaviour {

    public var enabled:Bool = true;
    public var isVisible:Bool = true;
    
    public var lastPosition:Point = new Point(0, 0);
    public var worldPosition:Point = new Point(0, 0);
    public var positionDelta:Point = new Point(0, 0);
    public var worldSize:Point = new Point(1, 1);
    public var zRot:Float = 0;
    
    public var localPosition:Point = new Point(0, 0);
    public var localScale:Point = new Point(1, 1);
    public var localZRot:Float = 0;
    

    public var _name:String = null;

    private var worldWidth:Float = 0;
    private var worldHeight:Float = 0;

    public var spriteImg:Bitmap = null;
    public var renderLayer:Int = 0;
    public var flipX:Bool = false;
    public var flipY:Bool = false;

    public var parentObject:GameObject = null;
    public var children:Array<GameObject> = [];
    public var moveWithParent:Bool = true;

    public var components:Array<Component> = [];

    public var objectType:ObjectType;


    //Temporal** will be changed in the future for something like unity's GetComponent<>();
    public var pBody:PhysicsBody = null;
    public var collider:Collider = null;

    public function new(__name:String = "", _isVisible:Bool = true, img:String = null) {

        super();

        _name = __name;

        isVisible = _isVisible;
        if (_isVisible) {

            try { 

                spriteImg = new Bitmap(Assets.getBitmapData(img)); 
                this.addChild(spriteImg);
            
            }
            catch(e) trace("No such image path or no image assigned yet.");

        }

        objectType = SIMPLE;

        updatePosDelta();
        
    }

    public function addToActiveObjects() {
        
        Main.game.activeObjects.push(this);
            
        addEventListener(Event.ENTER_FRAME, updateObject);

    }

    private function updateObject(event:Event) {

        if (isVisible) {

            if (spriteImg != null) {

                if (spriteImg.bitmapData != null) {
        
                    worldWidth = (spriteImg.bitmapData.width / Main.game.worldScale) * worldSize.x * localScale.x;
                    worldHeight = (spriteImg.bitmapData.height / Main.game.worldScale) * worldSize.y * localScale.y;
        
                }

            }

            if (renderLayer > Main.game.highestRenderLayer) {

                if (renderLayer - Main.game.highestRenderLayer > 1) renderLayer = Main.game.highestRenderLayer + 1;
                Main.game.highestRenderLayer = renderLayer;

            }

            if (renderLayer < Main.game.lowestRenderLayer) {

                if (renderLayer - Main.game.lowestRenderLayer > 1) renderLayer = Main.game.lowestRenderLayer - 1;
                Main.game.lowestRenderLayer = renderLayer;

            }

        }

        if (parentObject != null) {

            if (moveWithParent) {

                worldPosition = pointAdd(parentObject.worldPosition, localPosition);

            }
            
        } else {

            this.localScale = new Point(1, 1);
            this.localPosition = new Point(0, 0);
            this.localZRot = 0;

        }

    }

    public function addChildObject(o:Array<GameObject>) {
        
        for (i in 0...o.length) {

            this.children.push(o[i]);
            o[i].parentObject = this;

            o[i].localPosition = pointMultiply(pointSubstract(this.worldPosition, o[i].worldPosition), -1);

        }

    }

    public function removeChildObject(o:GameObject) {
        
        if (this.children.contains(o)) {

            for (i in 0...children.length) {

                if (children[i] == o) {
    
                    children.remove(children[i]);
                    o.parentObject = null;
    
                }

            }

        } else return;

    }

    public function translate(delta:Point, applyDeltaTime:Bool = false) {

        if (delta.x == 0 && delta.y == 0) return;

        
        if (applyDeltaTime) {

            updatePosDelta(worldPosition, pointAdd(worldPosition, pointMultiply(delta, Main.game.deltaTime)));

            if (this.parentObject != null && moveWithParent) {

                this.localPosition.x += delta.x * Main.game.deltaTime;
                this.localPosition.y += delta.y * Main.game.deltaTime;
                
            } else {
                
                this.worldPosition.x += delta.x * Main.game.deltaTime;
                this.worldPosition.y += delta.y * Main.game.deltaTime;
                
            }

        } else {

            updatePosDelta(worldPosition, pointAdd(worldPosition, delta));
            
            if (this.parentObject != null && moveWithParent) {

                this.localPosition.x += delta.x;
                this.localPosition.y += delta.y;
                
            } else {
                
                this.worldPosition.x += delta.x;
                this.worldPosition.y += delta.y;
                
            }

        }

        //trace(this._name + " " + delta + " " + worldPosition);
        
    }

    overload extern inline private function updatePosDelta(lastPos, currentPos) {
        
        positionDelta = pointSubstract(currentPos, lastPos);

    }

    overload extern inline private function updatePosDelta() {
        
        positionDelta = point();

    }

    public function moveTo(x:Float, y:Float) {
        
        updatePosDelta(worldPosition, point(x, y));

        if (this.parentObject != null && moveWithParent) {

            this.localPosition.x = x;
            this.localPosition.y = y;
            
        } else {
            
            this.worldPosition.x = x;
            this.worldPosition.y = y;
            
        }

    }

    public function addComponent(c:Component) {
        
        c.parentObject = this;
        this.components.push(c);
        
    }
    
    /**
    public function getComponent(type:I) {
        
        var c:Component = null;
        for (i in 0...components.length) {
            
            if (components[i] is Component)
                c = components[i];
            
        }
        
        return c;
        
    }
    **/
    
}

enum ObjectType {
    SIMPLE;
    TEXT;
}
