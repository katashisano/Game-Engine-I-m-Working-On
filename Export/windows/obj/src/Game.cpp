#include <hxcpp.h>

#ifndef INCLUDED_Camera
#include <Camera.h>
#endif
#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_69efd8c9269cf369_16_new,"Game","new",0x79ba3204,"Game.new","Game.hx",16,0x56a4f9ec)
HX_LOCAL_STACK_FRAME(_hx_pos_69efd8c9269cf369_30_initGame,"Game","initGame",0x2e774efe,"Game.initGame","Game.hx",30,0x56a4f9ec)
HX_LOCAL_STACK_FRAME(_hx_pos_69efd8c9269cf369_46_Update,"Game","Update",0x300d3705,"Game.Update","Game.hx",46,0x56a4f9ec)
HX_LOCAL_STACK_FRAME(_hx_pos_69efd8c9269cf369_54_GetDeltaTime,"Game","GetDeltaTime",0x5dbf6eab,"Game.GetDeltaTime","Game.hx",54,0x56a4f9ec)

void Game_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_69efd8c9269cf369_16_new)
HXLINE(  53)		this->lastFrameTime = 0;
HXLINE(  52)		this->timeElapsed = 0;
HXLINE(  51)		this->deltaTime = ((Float)0);
HXLINE(  26)		super::__construct();
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
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x038b1636) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x038b1636;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Game_obj::initGame(bool fullScreen,int _worldScale){
            	HX_GC_STACKFRAME(&_hx_pos_69efd8c9269cf369_30_initGame)
HXLINE(  32)		if (fullScreen) {
HXLINE(  32)			::openfl::Lib_obj::get_current()->stage->set_displayState(1);
            		}
HXLINE(  34)		this->worldScale = _worldScale;
HXLINE(  36)		this->addEventListener(HX_("enterFrame",f5,03,50,02),this->Update_dyn(),null(),null(),null());
HXLINE(  38)		 ::Player_obj::__alloc( HX_CTX );
HXLINE(  39)		this->mainCamera =  ::Camera_obj::__alloc( HX_CTX ,( (Float)(16) ),( (Float)(9) ));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Game_obj,initGame,(void))

void Game_obj::Update( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_69efd8c9269cf369_46_Update)
HXDLIN(  46)		this->GetDeltaTime();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Game_obj,Update,(void))

Float Game_obj::GetDeltaTime(){
            	HX_STACKFRAME(&_hx_pos_69efd8c9269cf369_54_GetDeltaTime)
HXLINE(  56)		this->timeElapsed = ::openfl::Lib_obj::getTimer();
HXLINE(  57)		this->deltaTime = (( (Float)((this->timeElapsed - this->lastFrameTime)) ) / ( (Float)(1000) ));
HXLINE(  58)		this->lastFrameTime = this->timeElapsed;
HXLINE(  60)		return this->deltaTime;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,GetDeltaTime,return )


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
	HX_VISIT_MEMBER_NAME(deltaTime,"deltaTime");
	HX_VISIT_MEMBER_NAME(timeElapsed,"timeElapsed");
	HX_VISIT_MEMBER_NAME(lastFrameTime,"lastFrameTime");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Game_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"Update") ) { return ::hx::Val( Update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"initGame") ) { return ::hx::Val( initGame_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"deltaTime") ) { return ::hx::Val( deltaTime ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"worldScale") ) { return ::hx::Val( worldScale ); }
		if (HX_FIELD_EQ(inName,"mainCamera") ) { return ::hx::Val( mainCamera ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"timeElapsed") ) { return ::hx::Val( timeElapsed ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"GetDeltaTime") ) { return ::hx::Val( GetDeltaTime_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeObjects") ) { return ::hx::Val( activeObjects ); }
		if (HX_FIELD_EQ(inName,"lastFrameTime") ) { return ::hx::Val( lastFrameTime ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Game_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"deltaTime") ) { deltaTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"worldScale") ) { worldScale=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mainCamera") ) { mainCamera=inValue.Cast<  ::Camera >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"timeElapsed") ) { timeElapsed=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeObjects") ) { activeObjects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastFrameTime") ) { lastFrameTime=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Game_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("activeObjects",ae,b3,18,3a));
	outFields->push(HX_("worldScale",d8,7e,7b,e4));
	outFields->push(HX_("mainCamera",be,63,38,0d));
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
	HX_("initGame",22,23,16,49),
	HX_("Update",29,fa,99,bb),
	HX_("deltaTime",25,3c,5c,f5),
	HX_("timeElapsed",af,3f,16,2d),
	HX_("lastFrameTime",a4,65,b6,38),
	HX_("GetDeltaTime",cf,24,c5,cc),
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

