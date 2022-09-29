package;

import haxe.io.Bytes;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

#if disable_preloader_assets
@:dox(hide) class ManifestResources {
	public static var preloadLibraries:Array<Dynamic>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;

	public static function init (config:Dynamic):Void {
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
	}
}
#else
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

		data = '{"name":null,"assets":"aoy4:pathy50:assets%2Fimages%2Fbackgrounds%2Fbackground_1-1.pngy4:sizei302y4:typey5:IMAGEy2:idR1y7:preloadtgoR0y50:assets%2Fimages%2Fbackgrounds%2Fbackground_1-2.pngR2i1168R3R4R5R7R6tgoR0y50:assets%2Fimages%2Fbackgrounds%2Fbackground_1-3.pngR2i1120R3R4R5R8R6tgoR0y40:assets%2Fimages%2Fplayer%2FMago.asepriteR2i622R3y6:BINARYR5R9R6tgoR0y40:assets%2Fimages%2Fplayer%2FMalo.asepriteR2i622R3R10R5R11R6tgoR0y35:assets%2Fimages%2Fplayer%2FMalo.pngR2i198R3R4R5R12R6tgoR0y38:assets%2Fimages%2Fplayer%2Funbrujo.pngR2i573R3R4R5R13R6tgoR0y24:assets%2Fmaps%2Festo.txtR2i29R3y4:TEXTR5R14R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
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

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_background_1_1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_background_1_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_background_1_3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_player_mago_aseprite extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_player_malo_aseprite extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_player_malo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_player_unbrujo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_maps_esto_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:image("Assets/images/backgrounds/background_1-1.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_background_1_1_png extends lime.graphics.Image {}
@:keep @:image("Assets/images/backgrounds/background_1-2.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_background_1_2_png extends lime.graphics.Image {}
@:keep @:image("Assets/images/backgrounds/background_1-3.png") @:noCompletion #if display private #end class __ASSET__assets_images_backgrounds_background_1_3_png extends lime.graphics.Image {}
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

#end