package;

import openfl.system.Capabilities;
import openfl.Lib;
import openfl.geom.Point;
import openfl.events.Event;

class Game extends Behaviour {

    public var activeObjects:Array<GameObject> = [];

    public var worldScale:Int;

    public var mainCamera:Camera;

    public var highestRenderLayer:Int = 0;
    public var lowestRenderLayer:Int = 0;
    
    public function new() {
        
        super();
        
    }
    
    var player:GameObject;
    var child:GameObject;
    var fpsCounter:TextObject;
    public function initGame(fullScreen:Bool, _worldScale:Int):Void {
        
        if (fullScreen) {
            
            Lib.current.stage.window.borderless = true;
            Lib.current.stage.window.x = 0;
            Lib.current.stage.window.y = 0;
            Lib.current.stage.window.resize(Math.round(Capabilities.screenResolutionX), Math.round(Capabilities.screenResolutionY));
            
        } else Lib.current.stage.window.resize(1280, 720); 
        
        worldScale = _worldScale;

        player = new GameObject("player", true, "assets/images/player/Malo.png");
        player.worldSize = new Point(1, 1);
        player.renderLayer = 1;
        player.addToActiveObjects();

        //var physicsBody = new PhysicsBody();
        //physicsBody.enabled = true;
        //player.addComponent(physicsBody);
        //player.pBody = physicsBody;
        
        //var col = new Collider();
        //col.enabled = true;
        //player.addComponent(col);
        //player.collider = col;

        var controller = new PlayerController();
        controller.enabled = true;
        player.addComponent(controller);

        mainCamera = new Camera(16, 9, true, "Main Camera", IMAGE);
        mainCamera.bgImage = [ "assets/images/backgrounds/background_1-1.png",
                               "assets/images/backgrounds/background_1-2.png",
                               "assets/images/backgrounds/background_1-3.png" ];
        mainCamera.imageParallax = [ 0.7, 0.4, 0.1 ];
        mainCamera.ibmType = HORIZONTAL;
        mainCamera.worldPosition = new Point(0, 0);
        mainCamera.addToActiveObjects();

        player.addChildObject([mainCamera]);

        fpsCounter = new TextObject("Fps Counter", true, "FPS: ", "Bahnschrift", 25, LEFT, 0x000000);
        fpsCounter.renderLayer = 2;
        mainCamera.addChildObject([fpsCounter]);
        fpsCounter.addToActiveObjects();
        fpsCounter.moveTo(-15.5, 8.5);
        
        Lib.current.stage.scaleMode = EXACT_FIT;
        
    }
    
    var frameUpdates:Int = 0;
    var frameRate:Float = 0;
    var t:Float = 0;

    var pressed:Bool = false;
    override function update(event:Event) {
        
        frameUpdates++;
        getDeltaTime();
        t += deltaTime;

        if (t > 0.75) {

            frameRate = frameUpdates * (1 / t);
            frameRate = Math.ffloor(frameRate);
            frameUpdates = 0;
            t = 0;

        }

        fpsCounter.setText("FPS: " + frameRate);

        if (Main.input.checkKey(27))
            openfl.system.System.exit(0);

        trace(Lib.current.stage.window.width + " " + Lib.current.stage.window.height);

        if (Main.input.checkKey(37))
            Lib.current.stage.window.x -= 1;
        if (Main.input.checkKey(39))
            Lib.current.stage.window.x += 1;
        if (Main.input.checkKey(38))
            Lib.current.stage.window.y -= 1;
        if (Main.input.checkKey(40))
            Lib.current.stage.window.y += 1;
        
        if (!pressed) {
            
            if (Main.input.checkKey(13)) {
                
                Lib.current.stage.window.width += 16;
                Lib.current.stage.window.height += 9;
    
                pressed = true;
            
            }

        }
        if (!Main.input.checkKey(13)) {
            
            pressed = false;
        
        }

    }

    public var deltaTime:Float = 0;
    var timeElapsed:Int = 0;
    var lastFrameTime:Int = 0;
    function getDeltaTime() {
        
        timeElapsed = Lib.getTimer();
        deltaTime = (timeElapsed - lastFrameTime)/1000;
        lastFrameTime = timeElapsed;

    }

}