package;

import openfl.system.Capabilities;
import openfl.system.System;
import openfl.Lib;
import openfl.events.Event;
import openfl.geom.Point;

class Camera extends GameObject {

    public var objectsInDisplay:Array<GameObject> = [];

    private var displayEnableDistance:Float = 2;
    public var fov:Point;

    public var bgType:BackgroundType = SOLID;
    public var bgColor1:Int = 0x000000;
    public var bgColor2:Int = 0x000000;
    public var bgImage:Array<String> = [];
    
    public var imageParallax:Array<Float> = [];
    public var ibmType:ImageBackgroundMoveType = BOTH;

    public function new(fovX:Float, fovY:Float, _enabled:Bool, __name:String, _bgType:BackgroundType) {

        super(__name, false);

        this.isVisible = false;

        fov = new Point(fovX, fovY);

        bgType = _bgType;

    }

    private override function update(event:Event) {

        updateObjectsInDisplay();
        updateBackground();

        if (Main.input.checkKey(73))
            translate(point(0, 10), true);
        if (Main.input.checkKey(75))
            translate(point(0, -10), true);
        if (Main.input.checkKey(76))
            translate(point(10, 0), true);
        if (Main.input.checkKey(74))
            translate(point(-10, 0), true);
        
        trace(bg[0].children[1].worldPosition + " " + bg[0].children[1].positionDelta);

        //trace(point(getObjectByName(objectsInDisplay, "player").x, getObjectByName(objectsInDisplay, "player").y));

    }
    
    function updateObjectsInDisplay() {
        
        for (object in 0...Main.game.activeObjects.length) {
            
            if (Main.game.activeObjects[object].isVisible) {
                
                //tells if the visible object is inside of the screen
                var left:Bool = false;
                var right:Bool = false;
                var up:Bool = false;
                var down:Bool = false;

                if (Main.game.activeObjects[object].worldPosition.x + Main.game.activeObjects[object].worldWidth > this.worldPosition.x - fov.x - displayEnableDistance) left = true; else left = false;
                if (Main.game.activeObjects[object].worldPosition.x - Main.game.activeObjects[object].worldWidth < this.worldPosition.x + fov.x + displayEnableDistance) right = true; else right = false;
                if (Main.game.activeObjects[object].worldPosition.y + Main.game.activeObjects[object].worldHeight > this.worldPosition.y - fov.y - displayEnableDistance) down = true; else down = false;
                if (Main.game.activeObjects[object].worldPosition.y - Main.game.activeObjects[object].worldHeight < this.worldPosition.y + fov.y + displayEnableDistance) up = true; else up = false;
    
                var inCameraView:Bool = false;
    
                if (left && right && up && down) inCameraView = true;
    
                //removes or adds the visible object to the array to be rendered
                if (inCameraView)
                    if (!objectsInDisplay.contains(Main.game.activeObjects[object]))
                        objectsInDisplay.push(Main.game.activeObjects[object]);
                
                if (!inCameraView) {
    
                    objectsInDisplay.remove(Main.game.activeObjects[object]);
                    Main.game.removeChild(Main.game.activeObjects[object]);
    
                }

            } else {

                objectsInDisplay.remove(Main.game.activeObjects[object]);
                Main.game.removeChild(Main.game.activeObjects[object]);

            }

        }

        //layer sorting
        for (d in 0...objectsInDisplay.length) {
            
            for (rLayer in Main.game.lowestRenderLayer...Main.game.highestRenderLayer + 1) {
                
                if (!Main.game.contains(objectsInDisplay[d])) {
    
                    if (objectsInDisplay[d].renderLayer == rLayer) Main.game.addChild(objectsInDisplay[d]);
                    
                }
                
                for (_d in 0...objectsInDisplay.length) {

                    if (objectsInDisplay[d].renderLayer > objectsInDisplay[_d].renderLayer && Main.game.getChildIndex(objectsInDisplay[_d]) > Main.game.getChildIndex(objectsInDisplay[d])) 
                        Main.game.removeChild(objectsInDisplay[d]);

                }
                
            }
    
        }

        //sets on-screen position of objects
        for (d in 0...objectsInDisplay.length) {

            if (objectsInDisplay[d].objectType == SIMPLE) {

                if (!objectsInDisplay[d].flipX) {

                    objectsInDisplay[d].x = ((objectsInDisplay[d].worldPosition.x - this.worldPosition.x) / fov.x / 2) * Lib.current.stage.window.width + (Lib.current.stage.window.width / 2 - (objectsInDisplay[d].spriteImg.width * objectsInDisplay[d].scaleX) / 2); 
                    objectsInDisplay[d].spriteImg.width = (objectsInDisplay[d].worldWidth / fov.x) * Lib.current.stage.window.width;
                    
                } else {
                    
                    objectsInDisplay[d].x = ((objectsInDisplay[d].worldPosition.x - this.worldPosition.x) / fov.x / 2) * Lib.current.stage.window.width + (Lib.current.stage.window.width / 2 + (objectsInDisplay[d].spriteImg.width * objectsInDisplay[d].scaleX) / 2);
                    objectsInDisplay[d].spriteImg.width = -((objectsInDisplay[d].worldWidth / fov.x) * Lib.current.stage.window.width);
                    
                }
                
                if (!objectsInDisplay[d].flipY) {

                    objectsInDisplay[d].y = ((objectsInDisplay[d].worldPosition.y - this.worldPosition.y) * -1 / fov.y / 2) * Lib.current.stage.window.height + (Lib.current.stage.window.height / 2 - (objectsInDisplay[d].spriteImg.height * objectsInDisplay[d].scaleY) / 2);
                    objectsInDisplay[d].spriteImg.height = (objectsInDisplay[d].worldHeight / fov.y) * Lib.current.stage.window.height;
                    
                } else {
                    
                    objectsInDisplay[d].y = ((objectsInDisplay[d].worldPosition.y - this.worldPosition.y) * -1 / fov.y / 2) * Lib.current.stage.window.height + (Lib.current.stage.window.height / 2 + (objectsInDisplay[d].spriteImg.height * objectsInDisplay[d].scaleY) / 2);
                    objectsInDisplay[d].spriteImg.height = -((objectsInDisplay[d].worldHeight / fov.y) * Lib.current.stage.window.height);
                
                }

                
            } else if (objectsInDisplay[d].objectType == TEXT) {

                objectsInDisplay[d].x = ((objectsInDisplay[d].worldPosition.x - this.worldPosition.x) / fov.x / 2) * Lib.current.stage.window.width + (Lib.current.stage.window.width / 2);
                objectsInDisplay[d].y = ((objectsInDisplay[d].worldPosition.y - this.worldPosition.y) * -1 / fov.y / 2) * Lib.current.stage.window.height + (Lib.current.stage.window.height / 2);

            }

        }

    }
    
    //background system
    var bg:Array<GameObject> = [];
    function updateBackground() {
        
        switch (bgType) {

            case SOLID:

                Lib.current.stage.color = bgColor1;
            
            case GRADIENT:

                return; //wip

            case IMAGE:

                if (bg.length < bgImage.length) {

                    for (i in bg.length...bgImage.length) {

                        var bgParent = new GameObject("bgParent" + i, false);
                        
                        var g = new GameObject("bg" + i, true, bgImage[i]);
                        g.translate(new Point(-g.spriteImg.bitmapData.width * 2 / Main.game.worldScale, 0));
                        g.addToActiveObjects();
                        g.renderLayer = -i;

                        var gDuplicate = new GameObject("bg" + i + "_Duplicate", true, bgImage[i]);
                        gDuplicate.addToActiveObjects();
                        gDuplicate.renderLayer = -i;

                        var gDuplicate2 = new GameObject("bg" + i + "_Duplicate2", true, bgImage[i]);
                        gDuplicate2.translate(new Point(gDuplicate2.spriteImg.bitmapData.width * 2 / Main.game.worldScale, 0));
                        gDuplicate2.addToActiveObjects();
                        gDuplicate2.renderLayer = -i;

                        g.moveWithParent = true;
                        gDuplicate.moveWithParent = true;
                        gDuplicate2.moveWithParent = true;

                        bgParent.addChildObject( [ g, gDuplicate, gDuplicate2 ] );
                        bgParent.addToActiveObjects();

                        bg.push(bgParent);

                    }

                }

                for (i in 0...bg.length)
                    this.addChildObject( [ bg[i] ] );

                for (i in 0...bg.length) {

                    for (_i in 0...bg[i].children.length) {

                        if (ibmType == HORIZONTAL || ibmType == BOTH) {
                            
                            bg[i].children[_i].translate(new Point(-positionDelta.x * imageParallax[i], 0));

                            if (bg[i].children[_i].localPosition.x > bg[i].children[_i].spriteImg.bitmapData.width * 2 / Main.game.worldScale)
                                bg[i].children[_i].translate(new Point(-bg[i].children[_i].spriteImg.bitmapData.width * 4 / Main.game.worldScale, 0));
    
                            if (bg[i].children[_i].localPosition.x < -bg[i].children[_i].spriteImg.bitmapData.width * 2 / Main.game.worldScale)
                                bg[i].children[_i].translate(new Point(bg[i].children[_i].spriteImg.bitmapData.width * 4 / Main.game.worldScale, 0));

                        }

                        if (ibmType == VERTICAL || ibmType == BOTH) {

                            bg[i].children[_i].translate(new Point(0, -positionDelta.y * imageParallax[i]));

                            if (bg[i].children[_i].localPosition.y > bg[i].children[_i].spriteImg.bitmapData.width * 2 / Main.game.worldScale)
                                bg[i].children[_i].translate(new Point(0, -bg[i].children[_i].spriteImg.bitmapData.width * 4 / Main.game.worldScale));
    
                            if (bg[i].children[_i].localPosition.y < -bg[i].children[_i].spriteImg.bitmapData.width * 2 / Main.game.worldScale)
                                bg[i].children[_i].translate(new Point(0, bg[i].children[_i].spriteImg.bitmapData.width * 4 / Main.game.worldScale));

                        }

                    }

                }
                
                
        }

    }

}

enum BackgroundType {
    
    SOLID;
    IMAGE;
    GRADIENT;

}

enum ImageBackgroundMoveType {

    HORIZONTAL;
    VERTICAL;
    BOTH;
    
}