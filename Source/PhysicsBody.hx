package;

import openfl.events.Event;
import openfl.geom.Point;

class PhysicsBody extends Component {

    public var velocity:Point = new Point(0, 0);
    public var gravity:Point = new Point(0, -35);

    public var maxGravityVelocity:Float = 50;

    public var canGoDown:Bool = true;
    public var canGoUp:Bool = true;
    public var canGoLeft:Bool = true;
    public var canGoRight:Bool = true;

    public function new() {

        super();

        type = "Physics Body";

    }

    var startTime:Float = 0;
    private override function update(e:Event):Void {

        if (enabled) {

            if (startTime > 1.5) {

                if (velocity.x > -maxGravityVelocity && velocity.x < maxGravityVelocity)
                    velocity.x += gravity.x * Main.game.deltaTime;

                if (velocity.y > -maxGravityVelocity && velocity.y < maxGravityVelocity)
                    velocity.y += gravity.y * Main.game.deltaTime;

                if (velocity.y < 0) {

                    if (canGoDown)
                        parentObject.translate(new Point(0, velocity.y), true);

                }
                if (velocity.y > 0) {

                    if (canGoUp)
                        parentObject.translate(new Point(0, velocity.y), true);

                }
                if (velocity.x < 0) {

                    if (canGoLeft)
                        parentObject.translate(new Point(velocity.x, 0), true);

                }
                if (velocity.x > 0) {

                    if (canGoRight)
                        parentObject.translate(new Point(velocity.x, 0), true);

                }

            }

            startTime += Main.game.deltaTime;

            //trace(canGoDown + " " + parentObject.worldPosition);

        }

    }

}