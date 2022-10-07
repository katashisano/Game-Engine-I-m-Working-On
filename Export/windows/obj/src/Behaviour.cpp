#include <hxcpp.h>

#ifndef INCLUDED_Behaviour
#include <Behaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_46081228af216aa0_13_new,"Behaviour","new",0x65aa458f,"Behaviour.new","Behaviour.hx",13,0x4d5ee0c1)
HX_LOCAL_STACK_FRAME(_hx_pos_46081228af216aa0_20_update,"Behaviour","update",0x1077383a,"Behaviour.update","Behaviour.hx",20,0x4d5ee0c1)
HX_LOCAL_STACK_FRAME(_hx_pos_46081228af216aa0_22_point,"Behaviour","point",0x0651133f,"Behaviour.point","Behaviour.hx",22,0x4d5ee0c1)
HX_LOCAL_STACK_FRAME(_hx_pos_46081228af216aa0_62_getObjectByName,"Behaviour","getObjectByName",0xe14b8d46,"Behaviour.getObjectByName","Behaviour.hx",62,0x4d5ee0c1)
HX_LOCAL_STACK_FRAME(_hx_pos_46081228af216aa0_76_getChildObjectByName,"Behaviour","getChildObjectByName",0x29ae2418,"Behaviour.getChildObjectByName","Behaviour.hx",76,0x4d5ee0c1)

void Behaviour_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_46081228af216aa0_13_new)
HXLINE(  15)		super::__construct();
HXLINE(  16)		this->addEventListener(HX_("enterFrame",f5,03,50,02),this->update_dyn(),null(),null(),null());
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
            	HX_STACKFRAME(&_hx_pos_46081228af216aa0_20_update)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Behaviour_obj,update,(void))

 ::openfl::geom::Point Behaviour_obj::point(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_46081228af216aa0_22_point)
HXDLIN(  22)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,x,y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Behaviour_obj,point,return )

 ::GameObject Behaviour_obj::getObjectByName(::Array< ::Dynamic> a,::String n){
            	HX_STACKFRAME(&_hx_pos_46081228af216aa0_62_getObjectByName)
HXLINE(  64)		 ::GameObject g = null();
HXLINE(  65)		{
HXLINE(  65)			int _g = 0;
HXDLIN(  65)			int _g1 = a->length;
HXDLIN(  65)			while((_g < _g1)){
HXLINE(  65)				_g = (_g + 1);
HXDLIN(  65)				int i = (_g - 1);
HXLINE(  67)				if ((a->__get(i).StaticCast<  ::GameObject >()->_name == n)) {
HXLINE(  68)					g = a->__get(i).StaticCast<  ::GameObject >();
            				}
            			}
            		}
HXLINE(  72)		return g;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Behaviour_obj,getObjectByName,return )

 ::GameObject Behaviour_obj::getChildObjectByName( ::GameObject o,::String n){
            	HX_STACKFRAME(&_hx_pos_46081228af216aa0_76_getChildObjectByName)
HXLINE(  78)		 ::GameObject g = null();
HXLINE(  79)		{
HXLINE(  79)			int _g = 0;
HXDLIN(  79)			int _g1 = o->children->length;
HXDLIN(  79)			while((_g < _g1)){
HXLINE(  79)				_g = (_g + 1);
HXDLIN(  79)				int i = (_g - 1);
HXLINE(  81)				if ((o->children->__get(i).StaticCast<  ::GameObject >()->_name == n)) {
HXLINE(  82)					g = o->children->__get(i).StaticCast<  ::GameObject >();
            				}
            			}
            		}
HXLINE(  86)		return g;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Behaviour_obj,getChildObjectByName,return )


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
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { return ::hx::Val( point_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getObjectByName") ) { return ::hx::Val( getObjectByName_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getChildObjectByName") ) { return ::hx::Val( getChildObjectByName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Behaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Behaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String Behaviour_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	HX_("point",50,b4,8f,c6),
	HX_("getObjectByName",97,8d,42,0b),
	HX_("getChildObjectByName",27,5e,3f,e3),
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

