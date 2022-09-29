#include <hxcpp.h>

#ifndef INCLUDED_Behaviour
#include <Behaviour.h>
#endif
#ifndef INCLUDED_Input
#include <Input.h>
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
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7fe52dd502b04ee0_7_new,"Input","new",0x9ce011dc,"Input.new","Input.hx",7,0xa045dd14)
HX_LOCAL_STACK_FRAME(_hx_pos_7fe52dd502b04ee0_21_keyDown,"Input","keyDown",0xe038191d,"Input.keyDown","Input.hx",21,0xa045dd14)
HX_LOCAL_STACK_FRAME(_hx_pos_7fe52dd502b04ee0_28_keyUp,"Input","keyUp",0xe83b5256,"Input.keyUp","Input.hx",28,0xa045dd14)
HX_LOCAL_STACK_FRAME(_hx_pos_7fe52dd502b04ee0_35_checkKey,"Input","checkKey",0xdb8d32bb,"Input.checkKey","Input.hx",35,0xa045dd14)

void Input_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7fe52dd502b04ee0_7_new)
HXLINE(  18)		this->keysDown = ::Array_obj< int >::__new(0);
HXLINE(  11)		super::__construct();
HXLINE(  13)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("keyDown",a1,69,47,9c),this->keyDown_dyn(),null(),null(),null());
HXLINE(  14)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("keyUp",da,b9,fe,de),this->keyUp_dyn(),null(),null(),null());
            	}

Dynamic Input_obj::__CreateEmpty() { return new Input_obj; }

void *Input_obj::_hx_vtable = 0;

Dynamic Input_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Input_obj > _hx_result = new Input_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Input_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x458f9d46) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x458f9d46;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x49891979 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Input_obj::keyDown( ::openfl::events::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_7fe52dd502b04ee0_21_keyDown)
HXDLIN(  21)		if (!(this->keysDown->contains(event->keyCode))) {
HXLINE(  22)			this->keysDown->push(event->keyCode);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keyDown,(void))

void Input_obj::keyUp( ::openfl::events::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_7fe52dd502b04ee0_28_keyUp)
HXDLIN(  28)		if (this->keysDown->contains(event->keyCode)) {
HXLINE(  29)			this->keysDown->remove(event->keyCode);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keyUp,(void))

bool Input_obj::checkKey(int code){
            	HX_STACKFRAME(&_hx_pos_7fe52dd502b04ee0_35_checkKey)
HXDLIN(  35)		return this->keysDown->contains(code);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,checkKey,return )


::hx::ObjectPtr< Input_obj > Input_obj::__new() {
	::hx::ObjectPtr< Input_obj > __this = new Input_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Input_obj > Input_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Input_obj *__this = (Input_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Input_obj), true, "Input"));
	*(void **)__this = Input_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Input_obj::Input_obj()
{
}

void Input_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Input);
	HX_MARK_MEMBER_NAME(keysDown,"keysDown");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Input_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keysDown,"keysDown");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Input_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"keyUp") ) { return ::hx::Val( keyUp_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyDown") ) { return ::hx::Val( keyDown_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keysDown") ) { return ::hx::Val( keysDown ); }
		if (HX_FIELD_EQ(inName,"checkKey") ) { return ::hx::Val( checkKey_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Input_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"keysDown") ) { keysDown=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("keysDown",76,10,98,15));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Input_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Input_obj,keysDown),HX_("keysDown",76,10,98,15)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Input_obj_sStaticStorageInfo = 0;
#endif

static ::String Input_obj_sMemberFields[] = {
	HX_("keysDown",76,10,98,15),
	HX_("keyDown",a1,69,47,9c),
	HX_("keyUp",da,b9,fe,de),
	HX_("checkKey",b7,55,e4,ac),
	::String(null()) };

::hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	Input_obj _hx_dummy;
	Input_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Input",ea,33,4b,51);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Input_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Input_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Input_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Input_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

