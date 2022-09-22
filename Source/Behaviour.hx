package;

import openfl.events.Event;
import openfl.display.Sprite;

class Behaviour extends Sprite {

    public function new() {
        
        super();
        this.addEventListener(Event.ENTER_FRAME, update);

    }

    function update(e:Event) {}

}