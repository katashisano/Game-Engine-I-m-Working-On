#include <hxcpp.h>

#ifndef INCLUDED_Behaviour
#include <Behaviour.h>
#endif
#ifndef INCLUDED_Collider
#include <Collider.h>
#endif
#ifndef INCLUDED_Component
#include <Component.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fcc66a4397cf771b_7_new,"Collider","new",0x0b557646,"Collider.new","Collider.hx",7,0xb69473ea)

void Collider_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_fcc66a4397cf771b_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic Collider_obj::__CreateEmpty() { return new Collider_obj; }

void *Collider_obj::_hx_vtable = 0;

Dynamic Collider_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Collider_obj > _hx_result = new Collider_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Collider_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x55fa7378) {
				return inClassId==(int)0x4af7dd8e || inClassId==(int)0x55fa7378;
			} else {
				return inClassId==(int)0x6b353933;
			}
		} else {
			return inClassId==(int)0x746a45dd;
		}
	}
}


::hx::ObjectPtr< Collider_obj > Collider_obj::__new() {
	::hx::ObjectPtr< Collider_obj > __this = new Collider_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Collider_obj > Collider_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Collider_obj *__this = (Collider_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Collider_obj), true, "Collider"));
	*(void **)__this = Collider_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Collider_obj::Collider_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Collider_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Collider_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Collider_obj::__mClass;

void Collider_obj::__register()
{
	Collider_obj _hx_dummy;
	Collider_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Collider",54,9b,87,a3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Collider_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Collider_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Collider_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

