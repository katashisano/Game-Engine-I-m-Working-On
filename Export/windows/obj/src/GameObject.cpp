#include <hxcpp.h>

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
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a8ea8d0ba79b8397_8_new,"GameObject","new",0xef0f99e3,"GameObject.new","GameObject.hx",8,0xe33972ed)
HX_LOCAL_STACK_FRAME(_hx_pos_a8ea8d0ba79b8397_40_Translate,"GameObject","Translate",0xba0704f1,"GameObject.Translate","GameObject.hx",40,0xe33972ed)
HX_LOCAL_STACK_FRAME(_hx_pos_a8ea8d0ba79b8397_47_MoveTo,"GameObject","MoveTo",0xebe01169,"GameObject.MoveTo","GameObject.hx",47,0xe33972ed)

void GameObject_obj::__construct(::hx::Null< bool >  __o__enabled){
            		bool _enabled = __o__enabled.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_a8ea8d0ba79b8397_8_new)
HXLINE(  14)		this->zRot = ((Float)0);
HXLINE(  13)		this->worldScale =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,1,1);
HXLINE(  12)		this->worldPosition =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0);
HXLINE(  25)		super::__construct();
HXLINE(  27)		if (_enabled) {
HXLINE(  29)			::Main_obj::game->activeObjects->push(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  32)		this->enabled = _enabled;
HXLINE(  35)		Float _hx_tmp = this->get_width();
HXDLIN(  35)		this->worldWidth = (_hx_tmp / ( (Float)(::Main_obj::game->worldScale) ));
HXLINE(  36)		Float _hx_tmp1 = this->get_height();
HXDLIN(  36)		this->worldHeight = (_hx_tmp1 / ( (Float)(::Main_obj::game->worldScale) ));
            	}

Dynamic GameObject_obj::__CreateEmpty() { return new GameObject_obj; }

void *GameObject_obj::_hx_vtable = 0;

Dynamic GameObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameObject_obj > _hx_result = new GameObject_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GameObject_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x66298f31) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x66298f31;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void GameObject_obj::Translate(Float deltaX,Float deltaY){
            	HX_STACKFRAME(&_hx_pos_a8ea8d0ba79b8397_40_Translate)
HXLINE(  42)		 ::openfl::geom::Point fh = this->worldPosition;
HXDLIN(  42)		fh->x = (fh->x + deltaX);
HXLINE(  43)		 ::openfl::geom::Point fh1 = this->worldPosition;
HXDLIN(  43)		fh1->y = (fh1->y - deltaY);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GameObject_obj,Translate,(void))

void GameObject_obj::MoveTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_a8ea8d0ba79b8397_47_MoveTo)
HXLINE(  49)		this->worldPosition->x = x;
HXLINE(  50)		this->worldPosition->y = y;
            	}


HX_DEFINE_DYNAMIC_FUNC2(GameObject_obj,MoveTo,(void))


::hx::ObjectPtr< GameObject_obj > GameObject_obj::__new(::hx::Null< bool >  __o__enabled) {
	::hx::ObjectPtr< GameObject_obj > __this = new GameObject_obj();
	__this->__construct(__o__enabled);
	return __this;
}

::hx::ObjectPtr< GameObject_obj > GameObject_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o__enabled) {
	GameObject_obj *__this = (GameObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameObject_obj), true, "GameObject"));
	*(void **)__this = GameObject_obj::_hx_vtable;
	__this->__construct(__o__enabled);
	return __this;
}

GameObject_obj::GameObject_obj()
{
}

void GameObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameObject);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(worldPosition,"worldPosition");
	HX_MARK_MEMBER_NAME(worldScale,"worldScale");
	HX_MARK_MEMBER_NAME(zRot,"zRot");
	HX_MARK_MEMBER_NAME(worldWidth,"worldWidth");
	HX_MARK_MEMBER_NAME(worldHeight,"worldHeight");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(components,"components");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(worldPosition,"worldPosition");
	HX_VISIT_MEMBER_NAME(worldScale,"worldScale");
	HX_VISIT_MEMBER_NAME(zRot,"zRot");
	HX_VISIT_MEMBER_NAME(worldWidth,"worldWidth");
	HX_VISIT_MEMBER_NAME(worldHeight,"worldHeight");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(components,"components");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GameObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zRot") ) { return ::hx::Val( zRot ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return ::hx::Val( bitmap ); }
		if (HX_FIELD_EQ(inName,"MoveTo") ) { return ::hx::Val( MoveTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return ::hx::Val( enabled ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"Translate") ) { return ::hx::Val( Translate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"worldScale") ) { return ::hx::Val( worldScale ); }
		if (HX_FIELD_EQ(inName,"worldWidth") ) { return ::hx::Val( worldWidth ); }
		if (HX_FIELD_EQ(inName,"components") ) { return ::hx::Val( components ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldHeight") ) { return ::hx::Val( worldHeight ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"worldPosition") ) { return ::hx::Val( worldPosition ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GameObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zRot") ) { zRot=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"worldScale") ) { worldScale=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldWidth") ) { worldWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"components") ) { components=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldHeight") ) { worldHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"worldPosition") ) { worldPosition=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("worldPosition",1b,95,ea,7b));
	outFields->push(HX_("worldScale",d8,7e,7b,e4));
	outFields->push(HX_("zRot",bd,a1,e2,50));
	outFields->push(HX_("worldWidth",54,66,0f,36));
	outFields->push(HX_("worldHeight",d9,9b,b9,cd));
	outFields->push(HX_("bitmap",ef,0f,0c,f1));
	outFields->push(HX_("components",16,b5,1e,5a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameObject_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(GameObject_obj,enabled),HX_("enabled",81,04,31,7e)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(GameObject_obj,worldPosition),HX_("worldPosition",1b,95,ea,7b)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(GameObject_obj,worldScale),HX_("worldScale",d8,7e,7b,e4)},
	{::hx::fsFloat,(int)offsetof(GameObject_obj,zRot),HX_("zRot",bd,a1,e2,50)},
	{::hx::fsFloat,(int)offsetof(GameObject_obj,worldWidth),HX_("worldWidth",54,66,0f,36)},
	{::hx::fsFloat,(int)offsetof(GameObject_obj,worldHeight),HX_("worldHeight",d9,9b,b9,cd)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(GameObject_obj,bitmap),HX_("bitmap",ef,0f,0c,f1)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(GameObject_obj,components),HX_("components",16,b5,1e,5a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GameObject_obj_sStaticStorageInfo = 0;
#endif

static ::String GameObject_obj_sMemberFields[] = {
	HX_("enabled",81,04,31,7e),
	HX_("worldPosition",1b,95,ea,7b),
	HX_("worldScale",d8,7e,7b,e4),
	HX_("zRot",bd,a1,e2,50),
	HX_("worldWidth",54,66,0f,36),
	HX_("worldHeight",d9,9b,b9,cd),
	HX_("bitmap",ef,0f,0c,f1),
	HX_("components",16,b5,1e,5a),
	HX_("Translate",2e,b7,52,eb),
	HX_("MoveTo",0c,47,41,01),
	::String(null()) };

::hx::Class GameObject_obj::__mClass;

void GameObject_obj::__register()
{
	GameObject_obj _hx_dummy;
	GameObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GameObject",71,6c,66,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

