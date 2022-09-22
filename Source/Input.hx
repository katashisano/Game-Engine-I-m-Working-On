package;

import openfl.Lib;

import openfl.events.KeyboardEvent;

class Input extends Behaviour {

    public function new() {

        super();

        Lib.current.stage.addEventListener(KeyboardEvent.KEY_DOWN, keyDown);
        Lib.current.stage.addEventListener(KeyboardEvent.KEY_UP, keyUp);

    }

    var keysDown:Array<Int> = [];
    function keyDown(event:KeyboardEvent) {
        
        if (!keysDown.contains(event.keyCode))
            keysDown.push(event.keyCode);

    }

    function keyUp(event:KeyboardEvent) {
        
        if (keysDown.contains(event.keyCode))
            keysDown.remove(event.keyCode);

    }

    public function checkKey(code:Int):Bool {
        
        return keysDown.contains(code);

    }

}