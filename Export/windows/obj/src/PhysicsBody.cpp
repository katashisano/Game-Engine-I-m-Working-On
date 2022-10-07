#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Behaviour
#include <Behaviour.h>
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
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_PhysicsBody
#include <PhysicsBody.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d3480d47d549fab9_7_new,"PhysicsBody","new",0xad35b05b,"PhysicsBody.new","PhysicsBody.hx",7,0x45a7d375)
HX_LOCAL_STACK_FRAME(_hx_pos_d3480d47d549fab9_21_update,"PhysicsBody","update",0x694194ee,"PhysicsBody.update","PhysicsBody.hx",21,0x45a7d375)
HX_LOCAL_STACK_FRAME(_hx_pos_d3480d47d549fab9_32_updatePosition,"PhysicsBody","updatePosition",0x64118fb7,"PhysicsBody.updatePosition","PhysicsBody.hx",32,0x45a7d375)
HX_LOCAL_STACK_FRAME(_hx_pos_d3480d47d549fab9_65_applyGravity,"PhysicsBody","applyGravity",0x4dda8325,"PhysicsBody.applyGravity","PhysicsBody.hx",65,0x45a7d375)

void PhysicsBody_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_d3480d47d549fab9_7_new)
HXLINE(  61)		this->gravity =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,-5);
HXLINE(  19)		this->affectedByGravity = true;
HXLINE(  17)		this->acc =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0);
HXLINE(  16)		this->vel =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0);
HXLINE(  14)		this->position =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0);
HXLINE(  13)		this->lastPosition =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0);
HXLINE(   7)		super::__construct();
            	}

Dynamic PhysicsBody_obj::__CreateEmpty() { return new PhysicsBody_obj; }

void *PhysicsBody_obj::_hx_vtable = 0;

Dynamic PhysicsBody_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PhysicsBody_obj > _hx_result = new PhysicsBody_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PhysicsBody_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x03ef685d) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x03ef685d;
			}
		} else {
			return inClassId==(int)0x0c89e854 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x49891979 || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x6b353933;
			}
		} else {
			return inClassId==(int)0x746a45dd;
		}
	}
}

void PhysicsBody_obj::update( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_d3480d47d549fab9_21_update)
HXLINE(  23)		this->applyGravity();
HXLINE(  24)		this->updatePosition();
HXLINE(  26)		this->parentObject->worldPosition = this->position;
            	}


void PhysicsBody_obj::updatePosition(){
            	HX_GC_STACKFRAME(&_hx_pos_d3480d47d549fab9_32_updatePosition)
HXLINE(  34)		 ::openfl::geom::Point p1 = this->position;
HXDLIN(  34)		 ::openfl::geom::Point p2 = this->lastPosition;
HXDLIN(  34)		this->vel =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(( (Float)(::Math_obj::round(((p1->x - p2->x) * ( (Float)(100) )))) ) / ( (Float)(100) )),(( (Float)(::Math_obj::round(((p1->y - p2->y) * ( (Float)(100) )))) ) / ( (Float)(100) )));
HXLINE(  37)		this->lastPosition = this->position;
HXLINE(  39)		this->position = this->point(((this->parentObject->worldPosition->x + this->vel->x) + (this->acc->x * ::Main_obj::game->deltaTime)),(this->parentObject->worldPosition->y + (this->acc->y * ::Main_obj::game->deltaTime)));
HXLINE(  42)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  42)		::String _hx_tmp1 = (::Std_obj::string(this->point((( (Float)(::Math_obj::round((((this->parentObject->worldPosition->x + this->vel->x) + (this->acc->x * ::Main_obj::game->deltaTime)) * ( (Float)(100) )))) ) / ( (Float)(100) )),(( (Float)(::Math_obj::round(((this->parentObject->worldPosition->y + (this->acc->y * ::Main_obj::game->deltaTime)) * ( (Float)(100) )))) ) / ( (Float)(100) )))) + HX_(" ",20,00,00,00));
HXDLIN(  42)		::String _hx_tmp2 = ((_hx_tmp1 + ::Std_obj::string(this->parentObject->worldPosition)) + HX_(" ",20,00,00,00));
HXLINE(  43)		Float _hx_tmp3 = this->parentObject->get_x();
HXLINE(  42)		::String _hx_tmp4 = (_hx_tmp2 + ::Std_obj::string(this->point(_hx_tmp3,this->parentObject->get_y())));
HXDLIN(  42)		_hx_tmp(_hx_tmp4,::hx::SourceInfo(HX_("Source/PhysicsBody.hx",49,d5,d4,d9),42,HX_("PhysicsBody",e9,e6,31,d0),HX_("updatePosition",d2,93,24,00)));
HXLINE(  45)		this->acc = this->point(0,0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsBody_obj,updatePosition,(void))

void PhysicsBody_obj::applyGravity(){
            	HX_GC_STACKFRAME(&_hx_pos_d3480d47d549fab9_65_applyGravity)
HXDLIN(  65)		 ::openfl::geom::Point p1 = this->acc;
HXDLIN(  65)		 ::openfl::geom::Point p2 = this->point((this->gravity->x * ::Main_obj::game->deltaTime),(this->gravity->y * ::Main_obj::game->deltaTime));
HXDLIN(  65)		this->acc =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(( (Float)(::Math_obj::round(((p1->x + p2->x) * ( (Float)(100) )))) ) / ( (Float)(100) )),(( (Float)(::Math_obj::round(((p1->y + p2->y) * ( (Float)(100) )))) ) / ( (Float)(100) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PhysicsBody_obj,applyGravity,(void))


::hx::ObjectPtr< PhysicsBody_obj > PhysicsBody_obj::__new() {
	::hx::ObjectPtr< PhysicsBody_obj > __this = new PhysicsBody_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PhysicsBody_obj > PhysicsBody_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PhysicsBody_obj *__this = (PhysicsBody_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PhysicsBody_obj), true, "PhysicsBody"));
	*(void **)__this = PhysicsBody_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PhysicsBody_obj::PhysicsBody_obj()
{
}

void PhysicsBody_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PhysicsBody);
	HX_MARK_MEMBER_NAME(lastPosition,"lastPosition");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(vel,"vel");
	HX_MARK_MEMBER_NAME(acc,"acc");
	HX_MARK_MEMBER_NAME(affectedByGravity,"affectedByGravity");
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	 ::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PhysicsBody_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lastPosition,"lastPosition");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(vel,"vel");
	HX_VISIT_MEMBER_NAME(acc,"acc");
	HX_VISIT_MEMBER_NAME(affectedByGravity,"affectedByGravity");
	HX_VISIT_MEMBER_NAME(gravity,"gravity");
	 ::Component_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PhysicsBody_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"vel") ) { return ::hx::Val( vel ); }
		if (HX_FIELD_EQ(inName,"acc") ) { return ::hx::Val( acc ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { return ::hx::Val( gravity ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return ::hx::Val( position ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastPosition") ) { return ::hx::Val( lastPosition ); }
		if (HX_FIELD_EQ(inName,"applyGravity") ) { return ::hx::Val( applyGravity_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updatePosition") ) { return ::hx::Val( updatePosition_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"affectedByGravity") ) { return ::hx::Val( affectedByGravity ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PhysicsBody_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"vel") ) { vel=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acc") ) { acc=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { gravity=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastPosition") ) { lastPosition=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"affectedByGravity") ) { affectedByGravity=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsBody_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lastPosition",1f,ad,8c,2c));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("vel",5d,e2,59,00));
	outFields->push(HX_("acc",41,f1,49,00));
	outFields->push(HX_("affectedByGravity",e3,71,a1,8f));
	outFields->push(HX_("gravity",4e,6e,ff,77));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PhysicsBody_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(PhysicsBody_obj,lastPosition),HX_("lastPosition",1f,ad,8c,2c)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(PhysicsBody_obj,position),HX_("position",a9,a0,fa,ca)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(PhysicsBody_obj,vel),HX_("vel",5d,e2,59,00)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(PhysicsBody_obj,acc),HX_("acc",41,f1,49,00)},
	{::hx::fsBool,(int)offsetof(PhysicsBody_obj,affectedByGravity),HX_("affectedByGravity",e3,71,a1,8f)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(PhysicsBody_obj,gravity),HX_("gravity",4e,6e,ff,77)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PhysicsBody_obj_sStaticStorageInfo = 0;
#endif

static ::String PhysicsBody_obj_sMemberFields[] = {
	HX_("lastPosition",1f,ad,8c,2c),
	HX_("position",a9,a0,fa,ca),
	HX_("vel",5d,e2,59,00),
	HX_("acc",41,f1,49,00),
	HX_("affectedByGravity",e3,71,a1,8f),
	HX_("update",09,86,05,87),
	HX_("updatePosition",d2,93,24,00),
	HX_("gravity",4e,6e,ff,77),
	HX_("applyGravity",80,ba,6c,b7),
	::String(null()) };

::hx::Class PhysicsBody_obj::__mClass;

void PhysicsBody_obj::__register()
{
	PhysicsBody_obj _hx_dummy;
	PhysicsBody_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PhysicsBody",e9,e6,31,d0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PhysicsBody_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PhysicsBody_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PhysicsBody_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PhysicsBody_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

