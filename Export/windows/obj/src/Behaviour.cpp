#include <hxcpp.h>

#ifndef INCLUDED_Behaviour
#include <Behaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_46081228af216aa0_8_new,"Behaviour","new",0x65aa458f,"Behaviour.new","Behaviour.hx",8,0x4d5ee0c1)
HX_LOCAL_STACK_FRAME(_hx_pos_46081228af216aa0_15_update,"Behaviour","update",0x1077383a,"Behaviour.update","Behaviour.hx",15,0x4d5ee0c1)

void Behaviour_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_46081228af216aa0_8_new)
HXLINE(  10)		super::__construct();
HXLINE(  11)		this->addEventListener(HX_("enterFrame",f5,03,50,02),this->update_dyn(),null(),null(),null());
            	}

Dynamic Behaviour_obj::__CreateEmpty() { return new Behaviour_obj; }

void *Behaviour_obj::_hx_vtable = 0;

Dynamic Behaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Behaviour_obj > _hx_result = new Behaviour_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Behaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x49891979 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Behaviour_obj::update( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_46081228af216aa0_15_update)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Behaviour_obj,update,(void))


::hx::ObjectPtr< Behaviour_obj > Behaviour_obj::__new() {
	::hx::ObjectPtr< Behaviour_obj > __this = new Behaviour_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Behaviour_obj > Behaviour_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Behaviour_obj *__this = (Behaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Behaviour_obj), true, "Behaviour"));
	*(void **)__this = Behaviour_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Behaviour_obj::Behaviour_obj()
{
}

::hx::Val Behaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Behaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Behaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String Behaviour_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class Behaviour_obj::__mClass;

void Behaviour_obj::__register()
{
	Behaviour_obj _hx_dummy;
	Behaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Behaviour",1d,d2,7e,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Behaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Behaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Behaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Behaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

