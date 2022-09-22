package;

import openfl.geom.Point;
import openfl.events.Event;

class PlayerController extends Component {

    public function new() {

        super();
    
    }

    var state:Int = 0;
    var pressed:Bool = false;
    override function update(e:Event) {

        if (!pressed) {

            if (Main.input.checkKey(13)) {
            
                if (state < 3)
                    state++;
                else state = 0;
    
                pressed = true;
            
            }

        }
        if (!Main.input.checkKey(13)) {
            
            pressed = false;
        
        }

        if (state == 0) {
            parentObject.flipX = false;
            parentObject.flipY = false;
        }
        if (state == 1) {
            parentObject.flipX = true;
            parentObject.flipY = false;
        }
        if (state == 2) {
            parentObject.flipX = false;
            parentObject.flipY = true;
        }
        if (state == 3) {
            parentObject.flipX = true;
            parentObject.flipY = true;
        }
        
    }

}