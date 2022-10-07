package;

import openfl.Vector;
import openfl.events.Event;
import openfl.geom.Point;

class PhysicsBody extends Component {

    //
    // wip
    //

    var lastPosition:Point = new Point(0, 0);
    var position:Point = new Point(0, 0);

    var vel:Point = new Point(0, 0);
    var acc:Point = new Point(0, 0);

    var affectedByGravity:Bool = true;

    override function update(e:Event) {

        applyGravity();
        updatePosition();

        parentObject.worldPosition = position;

        //trace(vel + " " + acc + " " + parentObject.worldPosition);

    }

    function updatePosition() {
        
        vel = pointSubstract(position, lastPosition);
        //trace(Math.round(position.y - lastPosition.y));

        lastPosition = position;
        
        position = point(parentObject.worldPosition.x + vel.x + acc.x * Main.game.deltaTime, 
        parentObject.worldPosition.y + acc.y * Main.game.deltaTime);

        trace(point(Math.round((parentObject.worldPosition.x + vel.x + acc.x * Main.game.deltaTime)*100)/100, 
        Math.round((parentObject.worldPosition.y + acc.y * Main.game.deltaTime)*100)/100) + " " + parentObject.worldPosition + " " + point(parentObject.x, parentObject.y));

        acc = point(0, 0);
        
    }

    overload extern inline function accelerate(accel:Point) {

        acc = pointAdd(acc, accel);

    }
    
    overload extern inline function accelerate(accelX:Float, accelY:Float) {
        
        acc = pointAdd(acc, point(accelX, accelY));

    }

    var gravity:Point = new Point(0, -5);

    function applyGravity() {
        
        accelerate(gravity.x * Main.game.deltaTime, gravity.y * Main.game.deltaTime);

    }

}