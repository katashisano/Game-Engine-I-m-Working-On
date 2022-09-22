package;

import openfl.display.Sprite;
import openfl.events.Event;
import Game;

class Main extends Sprite {

	var inited:Bool;
	
	public static var game:Game;
	public static var gameResX:Int;
	public static var gameResY:Int;
	public static var input:Input;

	function resize(e) {

		if (!inited) init();	

	}

	function init() {

		if (inited) return;

		inited = true;

		game = new Game();
		game.initGame(false, 16);
		this.addChild(game);

		input = new Input();

	}

	public function new() {

		super();	

		addEventListener(Event.ADDED_TO_STAGE, added);

	}

	function added(e) {

		removeEventListener(Event.ADDED_TO_STAGE, added);

		stage.addEventListener(Event.RESIZE, resize);

		init();

	}

}