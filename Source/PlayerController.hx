package;

import openfl.geom.Point;
import openfl.events.Event;

class PlayerController extends Component {

    public function new() {

        super();
    
    }
    
    //wip
    
    var flipState:Int = 0;
    var flipSwitchPressed:Bool = false;

    var up:Bool = false;
    var down:Bool = false;
    var left:Bool = false;
    var right:Bool = false;

    var movementSpeed:Float = 5;
    var translateVec:Point = new Point(0, 0);

    override function update(e:Event) {

        if (!flipSwitchPressed) {

            if (Main.input.checkKey(9)) {
            
                if (flipState < 3)
                    flipState++;
                else flipState = 0;
    
                flipSwitchPressed = true;
            
            }

        }
        if (!Main.input.checkKey(9)) {
            
            flipSwitchPressed = false;
        
        }

        switch (flipState) {
            case 0:
                parentObject.flipX = false;
                parentObject.flipY = false;

            case 1:
                parentObject.flipX = true;
                parentObject.flipY = false;

            case 2:
                parentObject.flipX = false;
                parentObject.flipY = true;

            case 3: 
                parentObject.flipX = true;
                parentObject.flipY = true;

        }

        if (Main.input.checkKey(87)) { up = true; } else up = false;
        if (Main.input.checkKey(83)) { down = true; } else down = false;
        if (Main.input.checkKey(68)) { right = true; } else right = false;
        if (Main.input.checkKey(65)) { left = true; } else left = false;

        if (up) translateVec.y += movementSpeed;
        if (down) translateVec.y -= movementSpeed;
        if (right) translateVec.x += movementSpeed;
        if (left) translateVec.x -= movementSpeed;

        if (translateVec.x > movementSpeed) translateVec.x = movementSpeed;
        else if (translateVec.x < -movementSpeed) translateVec.x = -movementSpeed;
        if (translateVec.y > movementSpeed) translateVec.y = movementSpeed;
        else if (translateVec.y < -movementSpeed) translateVec.y = -movementSpeed;

        if (!up && !down) translateVec.y = 0;
        if (!right && !left) translateVec.x = 0;
        
        //trace(translateVec + " " + parentObject.worldPosition);
        parentObject.translate(translateVec, true);
        parentObject.translate(point(1, 0), true);
        
    }

}