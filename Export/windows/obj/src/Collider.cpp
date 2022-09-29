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
#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
#ifndef INCLUDED_PhysicsBody
#include <PhysicsBody.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fcc66a4397cf771b_6_new,"Collider","new",0x0b557646,"Collider.new","Collider.hx",6,0xb69473ea)
HX_LOCAL_STACK_FRAME(_hx_pos_fcc66a4397cf771b_22_update,"Collider","update",0x3ae013e3,"Collider.update","Collider.hx",22,0xb69473ea)

void Collider_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_fcc66a4397cf771b_6_new)
HXLINE(  10)		this->trigger = false;
HXLINE(   8)		this->colliderSize =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0);
HXLINE(  14)		super::__construct();
HXLINE(  16)		this->type = HX_("Collider",54,9b,87,a3);
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

void Collider_obj::update( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_fcc66a4397cf771b_22_update)
HXDLIN(  22)		if ((this->parentObject->worldPosition->y < -100)) {
HXLINE(  23)			this->parentObject->pBody->canGoDown = false;
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

void Collider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Collider);
	HX_MARK_MEMBER_NAME(colliderSize,"colliderSize");
	HX_MARK_MEMBER_NAME(trigger,"trigger");
	 ::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Collider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colliderSize,"colliderSize");
	HX_VISIT_MEMBER_NAME(trigger,"trigger");
	 ::Component_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Collider_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"trigger") ) { return ::hx::Val( trigger ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"colliderSize") ) { return ::hx::Val( colliderSize ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Collider_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"trigger") ) { trigger=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"colliderSize") ) { colliderSize=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Collider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("colliderSize",15,56,b4,5b));
	outFields->push(HX_("trigger",38,55,df,25));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Collider_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(Collider_obj,colliderSize),HX_("colliderSize",15,56,b4,5b)},
	{::hx::fsBool,(int)offsetof(Collider_obj,trigger),HX_("trigger",38,55,df,25)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Collider_obj_sStaticStorageInfo = 0;
#endif

static ::String Collider_obj_sMemberFields[] = {
	HX_("colliderSize",15,56,b4,5b),
	HX_("trigger",38,55,df,25),
	HX_("update",09,86,05,87),
	::String(null()) };

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
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Collider_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Collider_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Collider_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Collider_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

