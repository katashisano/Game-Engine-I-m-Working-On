#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_BackgroundType
#include <BackgroundType.h>
#endif
#ifndef INCLUDED_Behaviour
#include <Behaviour.h>
#endif
#ifndef INCLUDED_Camera
#include <Camera.h>
#endif
#ifndef INCLUDED_Component
#include <Component.h>
#endif
#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
#ifndef INCLUDED_ImageBackgroundMoveType
#include <ImageBackgroundMoveType.h>
#endif
#ifndef INCLUDED_Input
#include <Input.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_PlayerController
#include <PlayerController.h>
#endif
#ifndef INCLUDED_TextObject
#include <TextObject.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_system_Capabilities
#include <openfl/system/Capabilities.h>
#endif
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_69efd8c9269cf369_8_new,"Game","new",0x79ba3204,"Game.new","Game.hx",8,0x56a4f9ec)
HX_LOCAL_STACK_FRAME(_hx_pos_69efd8c9269cf369_28_initGame,"Game","initGame",0x2e774efe,"Game.initGame","Game.hx",28,0x56a4f9ec)
static const ::String _hx_array_data_2f382012_2[] = {
	HX_("assets/images/backgrounds/background_1-1.png",34,2a,81,31),HX_("assets/images/backgrounds/background_1-2.png",b5,be,e7,c4),HX_("assets/images/backgrounds/background_1-3.png",36,53,4e,58),
};
static const Float _hx_array_data_2f382012_3[] = {
	0.7,0.4,0.1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_69efd8c9269cf369_86_update,"Game","update",0xfb78c2e5,"Game.update","Game.hx",86,0x56a4f9ec)
HX_LOCAL_STACK_FRAME(_hx_pos_69efd8c9269cf369_140_getDeltaTime,"Game","getDeltaTime",0x95ad228b,"Game.getDeltaTime","Game.hx",140,0x56a4f9ec)

void Game_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_69efd8c9269cf369_8_new)
HXLINE( 139)		this->lastFrameTime = 0;
HXLINE( 138)		this->timeElapsed = 0;
HXLINE( 137)		this->deltaTime = ((Float)0);
HXLINE(  85)		this->pressed = false;
HXLINE(  83)		this->t = ((Float)0);
HXLINE(  82)		this->frameRate = ((Float)0);
HXLINE(  81)		this->frameUpdates = 0;
HXLINE(  17)		this->lowestRenderLayer = 0;
HXLINE(  16)		this->highestRenderLayer = 0;
HXLINE(  10)		this->activeObjects = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  21)		super::__construct();
            	}

Dynamic Game_obj::__CreateEmpty() { return new Game_obj; }

void *Game_obj::_hx_vtable = 0;

Dynamic Game_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Game_obj > _hx_result = new Game_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Game_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x038b1636) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x038b1636;
			}
		} else {
			return inClassId==(int)0x0c89e854 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x49891979 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Game_obj::initGame(bool fullScreen,int _worldScale){
            	HX_GC_STACKFRAME(&_hx_pos_69efd8c9269cf369_28_initGame)
HXLINE(  30)		if (fullScreen) {
HXLINE(  32)			::openfl::Lib_obj::get_current()->stage->window->set_borderless(true);
HXLINE(  33)			::openfl::Lib_obj::get_current()->stage->window->set_x(0);
HXLINE(  34)			::openfl::Lib_obj::get_current()->stage->window->set_y(0);
HXLINE(  35)			 ::lime::ui::Window _hx_tmp = ::openfl::Lib_obj::get_current()->stage->window;
HXDLIN(  35)			int _hx_tmp1 = ::Math_obj::round(::openfl::_hx_system::Capabilities_obj::get_screenResolutionX());
HXDLIN(  35)			_hx_tmp->resize(_hx_tmp1,::Math_obj::round(::openfl::_hx_system::Capabilities_obj::get_screenResolutionY()));
            		}
            		else {
HXLINE(  37)			::openfl::Lib_obj::get_current()->stage->window->resize(1280,720);
            		}
HXLINE(  39)		this->worldScale = _worldScale;
HXLINE(  41)		this->player =  ::GameObject_obj::__alloc( HX_CTX ,HX_("player",61,eb,b8,37),true,HX_("assets/images/player/Malo.png",15,54,94,75));
HXLINE(  42)		this->player->worldSize =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,1,1);
HXLINE(  43)		this->player->renderLayer = 1;
HXLINE(  44)		this->player->addToActiveObjects();
HXLINE(  56)		 ::PlayerController controller =  ::PlayerController_obj::__alloc( HX_CTX );
HXLINE(  57)		controller->enabled = true;
HXLINE(  58)		this->player->addComponent(controller);
HXLINE(  60)		this->mainCamera =  ::Camera_obj::__alloc( HX_CTX ,( (Float)(16) ),( (Float)(9) ),true,HX_("Main Camera",ac,5b,9e,d6),::BackgroundType_obj::IMAGE_dyn());
HXLINE(  61)		this->mainCamera->bgImage = ::Array_obj< ::String >::fromData( _hx_array_data_2f382012_2,3);
HXLINE(  64)		this->mainCamera->imageParallax = ::Array_obj< Float >::fromData( _hx_array_data_2f382012_3,3);
HXLINE(  65)		this->mainCamera->ibmType = ::ImageBackgroundMoveType_obj::HORIZONTAL_dyn();
HXLINE(  66)		this->mainCamera->worldPosition =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0);
HXLINE(  67)		this->mainCamera->addToActiveObjects();
HXLINE(  69)		this->player->addChildObject(::Array_obj< ::Dynamic>::__new(1)->init(0,this->mainCamera));
HXLINE(  71)		this->fpsCounter =  ::TextObject_obj::__alloc( HX_CTX ,HX_("Fps Counter",85,0b,d1,30),true,HX_("FPS: ",af,da,2c,83),HX_("Bahnschrift",98,82,1e,cc),25,1,0);
HXLINE(  72)		this->fpsCounter->renderLayer = 2;
HXLINE(  73)		this->mainCamera->addChildObject(::Array_obj< ::Dynamic>::__new(1)->init(0,this->fpsCounter));
HXLINE(  74)		this->fpsCounter->addToActiveObjects();
HXLINE(  75)		this->fpsCounter->moveTo(((Float)-15.5),((Float)8.5));
HXLINE(  77)		::openfl::Lib_obj::get_current()->stage->set_scaleMode(0);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,initGame,(void))

void Game_obj::update( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_69efd8c9269cf369_86_update)
HXLINE(  88)		this->frameUpdates++;
HXLINE(  89)		this->getDeltaTime();
HXLINE(  90)		 ::Game _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  90)		_hx_tmp->t = (_hx_tmp->t + this->deltaTime);
HXLINE(  92)		if ((this->t > ((Float)0.75))) {
HXLINE(  94)			this->frameRate = (( (Float)(this->frameUpdates) ) * (( (Float)(1) ) / this->t));
HXLINE(  95)			this->frameRate = ::Math_obj::ffloor(this->frameRate);
HXLINE(  96)			this->frameUpdates = 0;
HXLINE(  97)			this->t = ( (Float)(0) );
            		}
HXLINE( 101)		this->fpsCounter->setText((HX_("FPS: ",af,da,2c,83) + this->frameRate));
HXLINE( 103)		if (::Main_obj::input->checkKey(27)) {
HXLINE( 104)			::openfl::_hx_system::System_obj::exit(0);
            		}
HXLINE( 106)		 ::Dynamic _hx_tmp1 = ::haxe::Log_obj::trace;
HXDLIN( 106)		::String _hx_tmp2 = (::openfl::Lib_obj::get_current()->stage->window->_hx___width + HX_(" ",20,00,00,00));
HXDLIN( 106)		::String _hx_tmp3 = (_hx_tmp2 + ::openfl::Lib_obj::get_current()->stage->window->_hx___height);
HXDLIN( 106)		_hx_tmp1(_hx_tmp3,::hx::SourceInfo(HX_("Source/Game.hx",98,05,24,39),106,HX_("Game",12,20,38,2f),HX_("update",09,86,05,87)));
HXLINE( 108)		if (::Main_obj::input->checkKey(37)) {
HXLINE( 109)			 ::lime::ui::Window fh = ::openfl::Lib_obj::get_current()->stage->window;
HXDLIN( 109)			fh->set_x((fh->_hx___x - 1));
            		}
HXLINE( 110)		if (::Main_obj::input->checkKey(39)) {
HXLINE( 111)			 ::lime::ui::Window fh = ::openfl::Lib_obj::get_current()->stage->window;
HXDLIN( 111)			fh->set_x((fh->_hx___x + 1));
            		}
HXLINE( 112)		if (::Main_obj::input->checkKey(38)) {
HXLINE( 113)			 ::lime::ui::Window fh = ::openfl::Lib_obj::get_current()->stage->window;
HXDLIN( 113)			fh->set_y((fh->_hx___y - 1));
            		}
HXLINE( 114)		if (::Main_obj::input->checkKey(40)) {
HXLINE( 115)			 ::lime::ui::Window fh = ::openfl::Lib_obj::get_current()->stage->window;
HXDLIN( 115)			fh->set_y((fh->_hx___y + 1));
            		}
HXLINE( 117)		if (!(this->pressed)) {
HXLINE( 119)			if (::Main_obj::input->checkKey(13)) {
HXLINE( 121)				 ::lime::ui::Window fh = ::openfl::Lib_obj::get_current()->stage->window;
HXDLIN( 121)				fh->set_width((fh->_hx___width + 16));
HXLINE( 122)				 ::lime::ui::Window fh1 = ::openfl::Lib_obj::get_current()->stage->window;
HXDLIN( 122)				fh1->set_height((fh1->_hx___height + 9));
HXLINE( 124)				this->pressed = true;
            			}
            		}
HXLINE( 129)		if (!(::Main_obj::input->checkKey(13))) {
HXLINE( 131)			this->pressed = false;
            		}
            	}


void Game_obj::getDeltaTime(){
            	HX_STACKFRAME(&_hx_pos_69efd8c9269cf369_140_getDeltaTime)
HXLINE( 142)		this->timeElapsed = ::openfl::Lib_obj::getTimer();
HXLINE( 143)		this->deltaTime = (( (Float)((this->timeElapsed - this->lastFrameTime)) ) / ( (Float)(1000) ));
HXLINE( 144)		this->lastFrameTime = this->timeElapsed;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getDeltaTime,(void))


::hx::ObjectPtr< Game_obj > Game_obj::__new() {
	::hx::ObjectPtr< Game_obj > __this = new Game_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Game_obj > Game_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Game_obj *__this = (Game_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Game_obj), true, "Game"));
	*(void **)__this = Game_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Game_obj::Game_obj()
{
}

void Game_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Game);
	HX_MARK_MEMBER_NAME(activeObjects,"activeObjects");
	HX_MARK_MEMBER_NAME(worldScale,"worldScale");
	HX_MARK_MEMBER_NAME(mainCamera,"mainCamera");
	HX_MARK_MEMBER_NAME(highestRenderLayer,"highestRenderLayer");
	HX_MARK_MEMBER_NAME(lowestRenderLayer,"lowestRenderLayer");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(child,"child");
	HX_MARK_MEMBER_NAME(fpsCounter,"fpsCounter");
	HX_MARK_MEMBER_NAME(frameUpdates,"frameUpdates");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(t,"t");
	HX_MARK_MEMBER_NAME(pressed,"pressed");
	HX_MARK_MEMBER_NAME(deltaTime,"deltaTime");
	HX_MARK_MEMBER_NAME(timeElapsed,"timeElapsed");
	HX_MARK_MEMBER_NAME(lastFrameTime,"lastFrameTime");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Game_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(activeObjects,"activeObjects");
	HX_VISIT_MEMBER_NAME(worldScale,"worldScale");
	HX_VISIT_MEMBER_NAME(mainCamera,"mainCamera");
	HX_VISIT_MEMBER_NAME(highestRenderLayer,"highestRenderLayer");
	HX_VISIT_MEMBER_NAME(lowestRenderLayer,"lowestRenderLayer");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(child,"child");
	HX_VISIT_MEMBER_NAME(fpsCounter,"fpsCounter");
	HX_VISIT_MEMBER_NAME(frameUpdates,"frameUpdates");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(t,"t");
	HX_VISIT_MEMBER_NAME(pressed,"pressed");
	HX_VISIT_MEMBER_NAME(deltaTime,"deltaTime");
	HX_VISIT_MEMBER_NAME(timeElapsed,"timeElapsed");
	HX_VISIT_MEMBER_NAME(lastFrameTime,"lastFrameTime");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Game_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { return ::hx::Val( t ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"child") ) { return ::hx::Val( child ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return ::hx::Val( player ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return ::hx::Val( pressed ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"initGame") ) { return ::hx::Val( initGame_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return ::hx::Val( frameRate ); }
		if (HX_FIELD_EQ(inName,"deltaTime") ) { return ::hx::Val( deltaTime ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"worldScale") ) { return ::hx::Val( worldScale ); }
		if (HX_FIELD_EQ(inName,"mainCamera") ) { return ::hx::Val( mainCamera ); }
		if (HX_FIELD_EQ(inName,"fpsCounter") ) { return ::hx::Val( fpsCounter ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"timeElapsed") ) { return ::hx::Val( timeElapsed ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"frameUpdates") ) { return ::hx::Val( frameUpdates ); }
		if (HX_FIELD_EQ(inName,"getDeltaTime") ) { return ::hx::Val( getDeltaTime_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeObjects") ) { return ::hx::Val( activeObjects ); }
		if (HX_FIELD_EQ(inName,"lastFrameTime") ) { return ::hx::Val( lastFrameTime ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lowestRenderLayer") ) { return ::hx::Val( lowestRenderLayer ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"highestRenderLayer") ) { return ::hx::Val( highestRenderLayer ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Game_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"child") ) { child=inValue.Cast<  ::GameObject >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast<  ::GameObject >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"deltaTime") ) { deltaTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"worldScale") ) { worldScale=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mainCamera") ) { mainCamera=inValue.Cast<  ::Camera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fpsCounter") ) { fpsCounter=inValue.Cast<  ::TextObject >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"timeElapsed") ) { timeElapsed=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"frameUpdates") ) { frameUpdates=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeObjects") ) { activeObjects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastFrameTime") ) { lastFrameTime=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lowestRenderLayer") ) { lowestRenderLayer=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"highestRenderLayer") ) { highestRenderLayer=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Game_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("activeObjects",ae,b3,18,3a));
	outFields->push(HX_("worldScale",d8,7e,7b,e4));
	outFields->push(HX_("mainCamera",be,63,38,0d));
	outFields->push(HX_("highestRenderLayer",d7,d6,6f,e7));
	outFields->push(HX_("lowestRenderLayer",89,e7,f1,eb));
	outFields->push(HX_("player",61,eb,b8,37));
	outFields->push(HX_("child",9c,a9,b9,45));
	outFields->push(HX_("fpsCounter",13,ce,9d,83));
	outFields->push(HX_("frameUpdates",9d,81,5a,3e));
	outFields->push(HX_("frameRate",ad,11,25,39));
	outFields->push(HX_("t",74,00,00,00));
	outFields->push(HX_("pressed",a2,d2,e6,39));
	outFields->push(HX_("deltaTime",25,3c,5c,f5));
	outFields->push(HX_("timeElapsed",af,3f,16,2d));
	outFields->push(HX_("lastFrameTime",a4,65,b6,38));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Game_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Game_obj,activeObjects),HX_("activeObjects",ae,b3,18,3a)},
	{::hx::fsInt,(int)offsetof(Game_obj,worldScale),HX_("worldScale",d8,7e,7b,e4)},
	{::hx::fsObject /*  ::Camera */ ,(int)offsetof(Game_obj,mainCamera),HX_("mainCamera",be,63,38,0d)},
	{::hx::fsInt,(int)offsetof(Game_obj,highestRenderLayer),HX_("highestRenderLayer",d7,d6,6f,e7)},
	{::hx::fsInt,(int)offsetof(Game_obj,lowestRenderLayer),HX_("lowestRenderLayer",89,e7,f1,eb)},
	{::hx::fsObject /*  ::GameObject */ ,(int)offsetof(Game_obj,player),HX_("player",61,eb,b8,37)},
	{::hx::fsObject /*  ::GameObject */ ,(int)offsetof(Game_obj,child),HX_("child",9c,a9,b9,45)},
	{::hx::fsObject /*  ::TextObject */ ,(int)offsetof(Game_obj,fpsCounter),HX_("fpsCounter",13,ce,9d,83)},
	{::hx::fsInt,(int)offsetof(Game_obj,frameUpdates),HX_("frameUpdates",9d,81,5a,3e)},
	{::hx::fsFloat,(int)offsetof(Game_obj,frameRate),HX_("frameRate",ad,11,25,39)},
	{::hx::fsFloat,(int)offsetof(Game_obj,t),HX_("t",74,00,00,00)},
	{::hx::fsBool,(int)offsetof(Game_obj,pressed),HX_("pressed",a2,d2,e6,39)},
	{::hx::fsFloat,(int)offsetof(Game_obj,deltaTime),HX_("deltaTime",25,3c,5c,f5)},
	{::hx::fsInt,(int)offsetof(Game_obj,timeElapsed),HX_("timeElapsed",af,3f,16,2d)},
	{::hx::fsInt,(int)offsetof(Game_obj,lastFrameTime),HX_("lastFrameTime",a4,65,b6,38)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Game_obj_sStaticStorageInfo = 0;
#endif

static ::String Game_obj_sMemberFields[] = {
	HX_("activeObjects",ae,b3,18,3a),
	HX_("worldScale",d8,7e,7b,e4),
	HX_("mainCamera",be,63,38,0d),
	HX_("highestRenderLayer",d7,d6,6f,e7),
	HX_("lowestRenderLayer",89,e7,f1,eb),
	HX_("player",61,eb,b8,37),
	HX_("child",9c,a9,b9,45),
	HX_("fpsCounter",13,ce,9d,83),
	HX_("initGame",22,23,16,49),
	HX_("frameUpdates",9d,81,5a,3e),
	HX_("frameRate",ad,11,25,39),
	HX_("t",74,00,00,00),
	HX_("pressed",a2,d2,e6,39),
	HX_("update",09,86,05,87),
	HX_("deltaTime",25,3c,5c,f5),
	HX_("timeElapsed",af,3f,16,2d),
	HX_("lastFrameTime",a4,65,b6,38),
	HX_("getDeltaTime",af,d8,b2,04),
	::String(null()) };

::hx::Class Game_obj::__mClass;

void Game_obj::__register()
{
	Game_obj _hx_dummy;
	Game_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Game",12,20,38,2f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Game_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Game_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Game_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Game_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

