package;

import openfl.events.Event;
import openfl.display.Sprite;

// not in use (will probably never be used tbh, imagine copying unity lol)

class Behaviour extends Sprite {

    public function new() {
        
        super();
        this.addEventListener(Event.ENTER_FRAME, update);

    }

    function update(e:Event) {}

}