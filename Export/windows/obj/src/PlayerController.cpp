#include <hxcpp.h>

#ifndef INCLUDED_Behaviour
#include <Behaviour.h>
#endif
#ifndef INCLUDED_Component
#include <Component.h>
#endif
#ifndef INCLUDED_GameObject
#include <GameObject.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8fd2fd601806e7d5_6_new,"PlayerController","new",0xab9f6aef,"PlayerController.new","PlayerController.hx",6,0xc07b8761)
HX_LOCAL_STACK_FRAME(_hx_pos_8fd2fd601806e7d5_16_update,"PlayerController","update",0xe5fbaeda,"PlayerController.update","PlayerController.hx",16,0xc07b8761)

void PlayerController_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8fd2fd601806e7d5_6_new)
HXLINE(  15)		this->pressed = false;
HXLINE(  14)		this->state = 0;
HXLINE(  10)		super::__construct();
            	}

Dynamic PlayerController_obj::__CreateEmpty() { return new PlayerController_obj; }

void *PlayerController_obj::_hx_vtable = 0;

Dynamic PlayerController_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayerController_obj > _hx_result = new PlayerController_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlayerController_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x49891979) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x49891979;
		}
	} else {
		if (inClassId<=(int)0x746a45dd) {
			if (inClassId<=(int)0x6b353933) {
				return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
			} else {
				return inClassId==(int)0x746a45dd;
			}
		} else {
			return inClassId==(int)0x7db5e345;
		}
	}
}

void PlayerController_obj::update( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_8fd2fd601806e7d5_16_update)
HXLINE(  18)		if (!(this->pressed)) {
HXLINE(  20)			if (::Main_obj::input->checkKey(13)) {
HXLINE(  22)				if ((this->state < 3)) {
HXLINE(  23)					this->state++;
            				}
            				else {
HXLINE(  24)					this->state = 0;
            				}
HXLINE(  26)				this->pressed = true;
            			}
            		}
HXLINE(  31)		if (!(::Main_obj::input->checkKey(13))) {
HXLINE(  33)			this->pressed = false;
            		}
HXLINE(  37)		if ((this->state == 0)) {
HXLINE(  38)			this->parentObject->flipX = false;
HXLINE(  39)			this->parentObject->flipY = false;
            		}
HXLINE(  41)		if ((this->state == 1)) {
HXLINE(  42)			this->parentObject->flipX = true;
HXLINE(  43)			this->parentObject->flipY = false;
            		}
HXLINE(  45)		if ((this->state == 2)) {
HXLINE(  46)			this->parentObject->flipX = false;
HXLINE(  47)			this->parentObject->flipY = true;
            		}
HXLINE(  49)		if ((this->state == 3)) {
HXLINE(  50)			this->parentObject->flipX = true;
HXLINE(  51)			this->parentObject->flipY = true;
            		}
            	}



::hx::ObjectPtr< PlayerController_obj > PlayerController_obj::__new() {
	::hx::ObjectPtr< PlayerController_obj > __this = new PlayerController_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PlayerController_obj > PlayerController_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PlayerController_obj *__this = (PlayerController_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayerController_obj), true, "PlayerController"));
	*(void **)__this = PlayerController_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PlayerController_obj::PlayerController_obj()
{
}

::hx::Val PlayerController_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return ::hx::Val( state ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return ::hx::Val( pressed ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlayerController_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayerController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("state",11,76,0b,84));
	outFields->push(HX_("pressed",a2,d2,e6,39));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayerController_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(PlayerController_obj,state),HX_("state",11,76,0b,84)},
	{::hx::fsBool,(int)offsetof(PlayerController_obj,pressed),HX_("pressed",a2,d2,e6,39)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PlayerController_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayerController_obj_sMemberFields[] = {
	HX_("state",11,76,0b,84),
	HX_("pressed",a2,d2,e6,39),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class PlayerController_obj::__mClass;

void PlayerController_obj::__register()
{
	PlayerController_obj _hx_dummy;
	PlayerController_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayerController",7d,c7,dd,23);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayerController_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayerController_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayerController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayerController_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

