package;

import openfl.text.TextFieldAutoSize;
import openfl.events.Event;
import openfl.text.TextFormat;
import openfl.text.TextField;
import openfl.Lib;

class TextObject extends GameObject {

    //game object but contains text

    public var textField:TextField = null;
    public var textFormat:TextFormat = null;
    var size:Int = 10;

    public function new(__name:String = "", _isVisible:Bool = true, text:String = "", font:String = "Arial", _size:Int = 10, align:TextFieldAutoSize = LEFT, color:Int = 0x000000) {

        super(__name, _isVisible);

        textField = new TextField();
        textField.text = text;
        size = _size;
        textFormat = new TextFormat(font, size, color);
        textField.setTextFormat(textFormat);
        textField.autoSize = align;

        this.addChild(textField);
        
        objectType = TEXT;
        
    }

    public function setText(text:String) {
        
        textField.text = text;

    }
    
    var displaySize:Int = 0;
    override function update(e:Event) {

        displaySize = Math.round((size / Main.game.mainCamera.fov.y) * Lib.current.stage.window.height/50);
        textFormat.size = displaySize;
        textField.setTextFormat(textFormat);

    }

}
