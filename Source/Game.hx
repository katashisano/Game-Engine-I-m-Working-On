package;

import openfl.geom.Rectangle;
import openfl.system.Capabilities;
import openfl.system.System;
import openfl.display.StageDisplayState;
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
    public function initGame(fullScreen:Bool, _worldScale:Int, xres:Int = 1280, yres:Int = 720):Void {
        
        if (fullScreen) {
            
            Lib.current.stage.fullScreenSourceRect = new Rectangle(0, 0, 1920, 1080);

            //Lib.current.stage.window.borderless = true;
            //Lib.current.stage.window.x = 0;
            //Lib.current.stage.window.y = 0;
            //Lib.current.stage.window.resize(Math.round(Capabilities.screenResolutionX), Math.round(Capabilities.screenResolutionY));
            
            Lib.current.stage.displayState = FULL_SCREEN;
            Lib.current.stage.window.onFocusIn.add(onWindowFocusIn);
            Lib.current.stage.window.onFocusOut.add(onWindowFocusOut);
            //Lib.current.stage.addEventListener
            
        } else {

            Lib.current.stage.window.resize(xres, yres); 
            Lib.current.stage.window.x = Math.round((Capabilities.screenResolutionX - xres) / 2); 
            Lib.current.stage.window.y = Math.round((Capabilities.screenResolutionY - yres) / 2); 

        }
        //Lib.current.stage.scaleMode = EXACT_FIT;
        
        worldScale = _worldScale;

        player = new GameObject("player", true, "assets/images/player/Malo.png");
        player.worldSize = new Point(1, 1);
        player.renderLayer = 1;
        player.addToActiveObjects();

        var physicsBody = new PhysicsBody();
        physicsBody.enabled = true;
        player.addComponent(physicsBody);
        player.pBody = physicsBody;
        
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
        
        
    }

    function onWindowFocusIn() {
        
    }
    
    function onWindowFocusOut() {
        
    }

    var frameUpdates:Int = 0;
    var frameRate:Float = 0;
    var t:Float = 0;

    var pressed:Bool = false;
    override function update(event:Event) {

        //trace(Lib.current.stage.width + " " + Lib.current.stage.height);
        //trace(player.worldPosition);
        
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

        if (Main.input.checkKey(37))
            Lib.current.stage.window.x -= 1;
        if (Main.input.checkKey(39))
            Lib.current.stage.window.x += 1;
        if (Main.input.checkKey(38))
            Lib.current.stage.window.y -= 1;
        if (Main.input.checkKey(40))
            Lib.current.stage.window.y += 1;

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