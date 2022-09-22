package;

import openfl.events.Event;
import openfl.geom.Point;

class Collider extends Component {

    public var colliderSize:Point = new Point(0, 0);

    public var trigger:Bool = false;

    public function new() {
        
        super();

        type = "Collider";

    }

    override function update(event:Event) {

        if (parentObject.worldPosition.y < -100)
            parentObject.pBody.canGoDown = false;
        
    }

}