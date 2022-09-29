#include <hxcpp.h>

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

HX_DEFINE_STACK_FRAME(_hx_pos_d3480d47d549fab9_6_new,"PhysicsBody","new",0xad35b05b,"PhysicsBody.new","PhysicsBody.hx",6,0x45a7d375)
HX_LOCAL_STACK_FRAME(_hx_pos_d3480d47d549fab9_29_update,"PhysicsBody","update",0x694194ee,"PhysicsBody.update","PhysicsBody.hx",29,0x45a7d375)

void PhysicsBody_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_d3480d47d549fab9_6_new)
HXLINE(  26)		this->startTime = ((Float)0);
HXLINE(  16)		this->canGoRight = true;
HXLINE(  15)		this->canGoLeft = true;
HXLINE(  14)		this->canGoUp = true;
HXLINE(  13)		this->canGoDown = true;
HXLINE(  11)		this->maxGravityVelocity = ((Float)50);
HXLINE(   9)		this->gravity =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,-35);
HXLINE(   8)		this->velocity =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0);
HXLINE(  20)		super::__construct();
HXLINE(  22)		this->type = HX_("Physics Body",db,18,22,aa);
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
            	HX_GC_STACKFRAME(&_hx_pos_d3480d47d549fab9_29_update)
HXDLIN(  29)		if (this->enabled) {
HXLINE(  31)			if ((this->startTime > ((Float)1.5))) {
HXLINE(  33)				bool _hx_tmp;
HXDLIN(  33)				if ((this->velocity->x > -(this->maxGravityVelocity))) {
HXLINE(  33)					_hx_tmp = (this->velocity->x < this->maxGravityVelocity);
            				}
            				else {
HXLINE(  33)					_hx_tmp = false;
            				}
HXDLIN(  33)				if (_hx_tmp) {
HXLINE(  34)					 ::openfl::geom::Point fh = this->velocity;
HXDLIN(  34)					fh->x = (fh->x + (this->gravity->x * ::Main_obj::game->deltaTime));
            				}
HXLINE(  36)				bool _hx_tmp1;
HXDLIN(  36)				if ((this->velocity->y > -(this->maxGravityVelocity))) {
HXLINE(  36)					_hx_tmp1 = (this->velocity->y < this->maxGravityVelocity);
            				}
            				else {
HXLINE(  36)					_hx_tmp1 = false;
            				}
HXDLIN(  36)				if (_hx_tmp1) {
HXLINE(  37)					 ::openfl::geom::Point fh = this->velocity;
HXDLIN(  37)					fh->y = (fh->y + (this->gravity->y * ::Main_obj::game->deltaTime));
            				}
HXLINE(  39)				if ((this->velocity->y < 0)) {
HXLINE(  41)					if (this->canGoDown) {
HXLINE(  42)						 ::GameObject _hx_tmp = this->parentObject;
HXDLIN(  42)						_hx_tmp->translate( ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,this->velocity->y),true);
            					}
            				}
HXLINE(  45)				if ((this->velocity->y > 0)) {
HXLINE(  47)					if (this->canGoUp) {
HXLINE(  48)						 ::GameObject _hx_tmp = this->parentObject;
HXDLIN(  48)						_hx_tmp->translate( ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,this->velocity->y),true);
            					}
            				}
HXLINE(  51)				if ((this->velocity->x < 0)) {
HXLINE(  53)					if (this->canGoLeft) {
HXLINE(  54)						 ::GameObject _hx_tmp = this->parentObject;
HXDLIN(  54)						_hx_tmp->translate( ::openfl::geom::Point_obj::__alloc( HX_CTX ,this->velocity->x,0),true);
            					}
            				}
HXLINE(  57)				if ((this->velocity->x > 0)) {
HXLINE(  59)					if (this->canGoRight) {
HXLINE(  60)						 ::GameObject _hx_tmp = this->parentObject;
HXDLIN(  60)						_hx_tmp->translate( ::openfl::geom::Point_obj::__alloc( HX_CTX ,this->velocity->x,0),true);
            					}
            				}
            			}
HXLINE(  66)			 ::PhysicsBody _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  66)			_hx_tmp->startTime = (_hx_tmp->startTime + ::Main_obj::game->deltaTime);
            		}
            	}



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
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(maxGravityVelocity,"maxGravityVelocity");
	HX_MARK_MEMBER_NAME(canGoDown,"canGoDown");
	HX_MARK_MEMBER_NAME(canGoUp,"canGoUp");
	HX_MARK_MEMBER_NAME(canGoLeft,"canGoLeft");
	HX_MARK_MEMBER_NAME(canGoRight,"canGoRight");
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	 ::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PhysicsBody_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(gravity,"gravity");
	HX_VISIT_MEMBER_NAME(maxGravityVelocity,"maxGravityVelocity");
	HX_VISIT_MEMBER_NAME(canGoDown,"canGoDown");
	HX_VISIT_MEMBER_NAME(canGoUp,"canGoUp");
	HX_VISIT_MEMBER_NAME(canGoLeft,"canGoLeft");
	HX_VISIT_MEMBER_NAME(canGoRight,"canGoRight");
	HX_VISIT_MEMBER_NAME(startTime,"startTime");
	 ::Component_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PhysicsBody_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { return ::hx::Val( gravity ); }
		if (HX_FIELD_EQ(inName,"canGoUp") ) { return ::hx::Val( canGoUp ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return ::hx::Val( velocity ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"canGoDown") ) { return ::hx::Val( canGoDown ); }
		if (HX_FIELD_EQ(inName,"canGoLeft") ) { return ::hx::Val( canGoLeft ); }
		if (HX_FIELD_EQ(inName,"startTime") ) { return ::hx::Val( startTime ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"canGoRight") ) { return ::hx::Val( canGoRight ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"maxGravityVelocity") ) { return ::hx::Val( maxGravityVelocity ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PhysicsBody_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { gravity=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canGoUp") ) { canGoUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"canGoDown") ) { canGoDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canGoLeft") ) { canGoLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"canGoRight") ) { canGoRight=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"maxGravityVelocity") ) { maxGravityVelocity=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PhysicsBody_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("velocity",1d,02,fe,1e));
	outFields->push(HX_("gravity",4e,6e,ff,77));
	outFields->push(HX_("maxGravityVelocity",47,c0,69,3a));
	outFields->push(HX_("canGoDown",da,06,ca,97));
	outFields->push(HX_("canGoUp",d3,66,c1,62));
	outFields->push(HX_("canGoLeft",7f,16,0c,9d));
	outFields->push(HX_("canGoRight",64,a6,94,44));
	outFields->push(HX_("startTime",8f,45,f0,05));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PhysicsBody_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(PhysicsBody_obj,velocity),HX_("velocity",1d,02,fe,1e)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(PhysicsBody_obj,gravity),HX_("gravity",4e,6e,ff,77)},
	{::hx::fsFloat,(int)offsetof(PhysicsBody_obj,maxGravityVelocity),HX_("maxGravityVelocity",47,c0,69,3a)},
	{::hx::fsBool,(int)offsetof(PhysicsBody_obj,canGoDown),HX_("canGoDown",da,06,ca,97)},
	{::hx::fsBool,(int)offsetof(PhysicsBody_obj,canGoUp),HX_("canGoUp",d3,66,c1,62)},
	{::hx::fsBool,(int)offsetof(PhysicsBody_obj,canGoLeft),HX_("canGoLeft",7f,16,0c,9d)},
	{::hx::fsBool,(int)offsetof(PhysicsBody_obj,canGoRight),HX_("canGoRight",64,a6,94,44)},
	{::hx::fsFloat,(int)offsetof(PhysicsBody_obj,startTime),HX_("startTime",8f,45,f0,05)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PhysicsBody_obj_sStaticStorageInfo = 0;
#endif

static ::String PhysicsBody_obj_sMemberFields[] = {
	HX_("velocity",1d,02,fe,1e),
	HX_("gravity",4e,6e,ff,77),
	HX_("maxGravityVelocity",47,c0,69,3a),
	HX_("canGoDown",da,06,ca,97),
	HX_("canGoUp",d3,66,c1,62),
	HX_("canGoLeft",7f,16,0c,9d),
	HX_("canGoRight",64,a6,94,44),
	HX_("startTime",8f,45,f0,05),
	HX_("update",09,86,05,87),
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

