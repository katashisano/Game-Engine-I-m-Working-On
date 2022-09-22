#include <hxcpp.h>

#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_15_new,"Player","new",0x8d5554f3,"Player.new","Player.hx",15,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_24_Update,"Player","Update",0x268d5376,"Player.Update","Player.hx",24,0xa27fc9dd)

void Player_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_15_new)
HXLINE(  17)		super::__construct(null());
HXLINE(  18)		this->addEventListener(HX_("enterFrame",f5,03,50,02),this->Update_dyn(),null(),null(),null());
            	}

Dynamic Player_obj::__CreateEmpty() { return new Player_obj; }

void *Player_obj::_hx_vtable = 0;

Dynamic Player_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Player_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x33e526a5) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x33e526a5;
		}
	} else {
		if (inClassId<=(int)0x66298f31) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x66298f31;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Player_obj::Update( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_24_Update)
HXLINE(  26)		this->btmpData = ::openfl::utils::Assets_obj::getBitmapData(HX_("assets/images/player/unbrujo.png",e9,48,ca,b7),null());
HXLINE(  27)		this->playerBtmp =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,this->btmpData,null(),null());
HXLINE(  29)		::Main_obj::game->addChild(this->playerBtmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,Update,(void))


::hx::ObjectPtr< Player_obj > Player_obj::__new() {
	::hx::ObjectPtr< Player_obj > __this = new Player_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Player_obj > Player_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Player_obj *__this = (Player_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Player_obj), true, "Player"));
	*(void **)__this = Player_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(btmpData,"btmpData");
	HX_MARK_MEMBER_NAME(playerBtmp,"playerBtmp");
	 ::GameObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(btmpData,"btmpData");
	HX_VISIT_MEMBER_NAME(playerBtmp,"playerBtmp");
	 ::GameObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Player_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"Update") ) { return ::hx::Val( Update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"btmpData") ) { return ::hx::Val( btmpData ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playerBtmp") ) { return ::hx::Val( playerBtmp ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Player_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"btmpData") ) { btmpData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playerBtmp") ) { playerBtmp=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("btmpData",7f,4e,0d,fc));
	outFields->push(HX_("playerBtmp",b6,29,e1,a3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Player_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(Player_obj,btmpData),HX_("btmpData",7f,4e,0d,fc)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(Player_obj,playerBtmp),HX_("playerBtmp",b6,29,e1,a3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Player_obj_sStaticStorageInfo = 0;
#endif

static ::String Player_obj_sMemberFields[] = {
	HX_("btmpData",7f,4e,0d,fc),
	HX_("playerBtmp",b6,29,e1,a3),
	HX_("Update",29,fa,99,bb),
	::String(null()) };

::hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	Player_obj _hx_dummy;
	Player_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Player",81,5f,4d,6c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Player_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Player_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Player_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Player_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

