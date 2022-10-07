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

HX_DEFINE_STACK_FRAME(_hx_pos_fb53a11edd27aff1_3_new,"Component","new",0x1973840f,"Component.new","Component.hx",3,0xeee4f241)

void Component_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_fb53a11edd27aff1_3_new)
HXLINE(   9)		this->type = HX_("Void",74,ef,2c,39);
HXLINE(  13)		super::__construct();
            	}

Dynamic Component_obj::__CreateEmpty() { return new Component_obj; }

void *Component_obj::_hx_vtable = 0;

Dynamic Component_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Component_obj > _hx_result = new Component_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Component_obj::_hx_isInstanceOf(int inClassId) {
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
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
		} else {
			return inClassId==(int)0x746a45dd;
		}
	}
}


::hx::ObjectPtr< Component_obj > Component_obj::__new() {
	::hx::ObjectPtr< Component_obj > __this = new Component_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Component_obj > Component_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Component_obj *__this = (Component_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Component_obj), true, "Component"));
	*(void **)__this = Component_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Component_obj::Component_obj()
{
}

void Component_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Component);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(parentObject,"parentObject");
	HX_MARK_MEMBER_NAME(type,"type");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Component_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(parentObject,"parentObject");
	HX_VISIT_MEMBER_NAME(type,"type");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Component_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return ::hx::Val( enabled ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"parentObject") ) { return ::hx::Val( parentObject ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Component_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"parentObject") ) { parentObject=inValue.Cast<  ::GameObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Component_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("parentObject",89,33,a9,27));
	outFields->push(HX_("type",ba,f2,08,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Component_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Component_obj,enabled),HX_("enabled",81,04,31,7e)},
	{::hx::fsObject /*  ::GameObject */ ,(int)offsetof(Component_obj,parentObject),HX_("parentObject",89,33,a9,27)},
	{::hx::fsString,(int)offsetof(Component_obj,type),HX_("type",ba,f2,08,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Component_obj_sStaticStorageInfo = 0;
#endif

static ::String Component_obj_sMemberFields[] = {
	HX_("enabled",81,04,31,7e),
	HX_("parentObject",89,33,a9,27),
	HX_("type",ba,f2,08,4d),
	::String(null()) };

::hx::Class Component_obj::__mClass;

void Component_obj::__register()
{
	Component_obj _hx_dummy;
	Component_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Component",9d,d0,26,b1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Component_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Component_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Component_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Component_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

