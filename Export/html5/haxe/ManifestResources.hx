package;


import haxe.io.Bytes;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		
		#end

		var data, manifest, library, bundle;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		data = '{"name":null,"assets":"aoy4:pathy48:assets%2Fimages%2Fbackgrounds%2Fbackground_1.pngy4:sizei1775y4:typey5:IMAGEy2:idR1y7:preloadtgoR0y40:assets%2Fimages%2Fplayer%2FMago.asepriteR2i622R3y6:BINARYR5R7R6tgoR0y40:assets%2Fimages%2Fplayer%2FMalo.asepriteR2i622R3R8R5R9R6tgoR0y35:assets%2Fimages%2Fplayer%2FMalo.pngR2i198R3R4R5R10R6tgoR0y38:assets%2Fimages%2Fplayer%2Funbrujo.pngR2i573R3R4R5R11R6tgoR0y24:assets%2Fmaps%2Festo.txtR2i29R3y4:TEXTR5R12R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_background_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_player_mago_aseprite extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_player_malo_aseprite extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_player_malo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_player_unbrujo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_maps_esto_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:image("Assets/images/backgrounds/background_1.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_background_1_png extends lime.graphics.Image {}
@:keep @:file("Assets/images/player/Mago.aseprite") @:noCompletion #if display private #end class __ASSET__assets_images_player_mago_aseprite extends haxe.io.Bytes {}
@:keep @:file("Assets/images/player/Malo.aseprite") @:noCompletion #if display private #end class __ASSET__assets_images_player_malo_aseprite extends haxe.io.Bytes {}
@:keep @:image("Assets/images/player/Malo.png") @:noCompletion #if display private #end class __ASSET__assets_images_player_malo_png extends lime.graphics.Image {}
@:keep @:image("Assets/images/player/unbrujo.png") @:noCompletion #if display private #end class __ASSET__assets_images_player_unbrujo_png extends lime.graphics.Image {}
@:keep @:file("Assets/maps/esto.txt") @:noCompletion #if display private #end class __ASSET__assets_maps_esto_txt extends haxe.io.Bytes {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else



#end

#if (openfl && !flash)

#if html5

#else

#end

#end
#end

#end
