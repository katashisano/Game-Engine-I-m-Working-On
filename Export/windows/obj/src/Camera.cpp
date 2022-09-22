#include <hxcpp.h>

#ifndef INCLUDED_Camera
#include <Camera.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7072c536837f8d29_12_new,"Camera","new",0x90b1a237,"Camera.new","Camera.hx",12,0xdbe9d119)
HX_LOCAL_STACK_FRAME(_hx_pos_7072c536837f8d29_22_CheckObjectsInDisplay,"Camera","CheckObjectsInDisplay",0x5de0f1c8,"Camera.CheckObjectsInDisplay","Camera.hx",22,0xdbe9d119)

void Camera_obj::__construct(Float fovX,Float fovY){
            	HX_GC_STACKFRAME(&_hx_pos_7072c536837f8d29_12_new)
HXLINE(  14)		super::__construct(null());
HXLINE(  15)		this->fov =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,fovX,fovY);
            	}

Dynamic Camera_obj::__CreateEmpty() { return new Camera_obj; }

void *Camera_obj::_hx_vtable = 0;

Dynamic Camera_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Camera_obj > _hx_result = new Camera_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Camera_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4af7dd8e) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		}
	} else {
		if (inClassId<=(int)0x66298f31) {
			return inClassId==(int)0x4d6b7d85 || inClassId==(int)0x66298f31;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Camera_obj::CheckObjectsInDisplay(){
            	HX_STACKFRAME(&_hx_pos_7072c536837f8d29_22_CheckObjectsInDisplay)
HXDLIN(  22)		int _g = 0;
HXDLIN(  22)		int _g1 = (::Main_obj::game->activeObjects->length - 1);
HXDLIN(  22)		while((_g < _g1)){
HXDLIN(  22)			_g = (_g + 1);
HXDLIN(  22)			int object = (_g - 1);
HXLINE(  24)			bool left = false;
HXLINE(  25)			bool right = false;
HXLINE(  26)			bool up = false;
HXLINE(  27)			bool down = false;
HXLINE(  29)			if (((::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >()->worldPosition->x + (this->worldWidth / ( (Float)(2) ))) > ((this->worldPosition->x - (this->fov->x / ( (Float)(2) ))) - this->displayEnableDistance))) {
HXLINE(  29)				left = true;
            			}
            			else {
HXLINE(  29)				left = false;
            			}
HXLINE(  30)			if (((::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >()->worldPosition->x - (this->worldWidth / ( (Float)(2) ))) < ((this->worldPosition->x + (this->fov->x / ( (Float)(2) ))) + this->displayEnableDistance))) {
HXLINE(  30)				right = true;
            			}
            			else {
HXLINE(  30)				right = false;
            			}
HXLINE(  31)			if (((::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >()->worldPosition->y - (this->worldHeight / ( (Float)(2) ))) < ((this->worldPosition->y + (this->fov->y / ( (Float)(2) ))) + this->displayEnableDistance))) {
HXLINE(  31)				down = true;
            			}
            			else {
HXLINE(  31)				down = false;
            			}
HXLINE(  32)			if (((::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >()->worldPosition->y + (this->worldHeight / ( (Float)(2) ))) > ((this->worldPosition->y - (this->fov->y / ( (Float)(2) ))) - this->displayEnableDistance))) {
HXLINE(  32)				up = true;
            			}
            			else {
HXLINE(  32)				up = false;
            			}
HXLINE(  34)			bool inCameraView = false;
HXLINE(  36)			bool _hx_tmp;
HXDLIN(  36)			if (left) {
HXLINE(  36)				_hx_tmp = up;
            			}
            			else {
HXLINE(  36)				_hx_tmp = false;
            			}
HXDLIN(  36)			if (_hx_tmp) {
HXLINE(  36)				inCameraView = true;
            			}
            			else {
HXLINE(  37)				bool _hx_tmp;
HXDLIN(  37)				if (right) {
HXLINE(  37)					_hx_tmp = up;
            				}
            				else {
HXLINE(  37)					_hx_tmp = false;
            				}
HXDLIN(  37)				if (_hx_tmp) {
HXLINE(  37)					inCameraView = true;
            				}
            				else {
HXLINE(  38)					bool _hx_tmp;
HXDLIN(  38)					if (left) {
HXLINE(  38)						_hx_tmp = down;
            					}
            					else {
HXLINE(  38)						_hx_tmp = false;
            					}
HXDLIN(  38)					if (_hx_tmp) {
HXLINE(  38)						inCameraView = true;
            					}
            					else {
HXLINE(  39)						bool _hx_tmp;
HXDLIN(  39)						if (right) {
HXLINE(  39)							_hx_tmp = down;
            						}
            						else {
HXLINE(  39)							_hx_tmp = false;
            						}
HXDLIN(  39)						if (_hx_tmp) {
HXLINE(  39)							inCameraView = true;
            						}
            						else {
HXLINE(  40)							inCameraView = false;
            						}
            					}
            				}
            			}
HXLINE(  42)			if (inCameraView) {
HXLINE(  43)				if (!(this->objectsInDisplay->contains(::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >()))) {
HXLINE(  44)					this->objectsInDisplay->push(::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >());
            				}
            			}
HXLINE(  46)			if (!(inCameraView)) {
HXLINE(  48)				this->objectsInDisplay->remove(::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >());
HXLINE(  49)				::Main_obj::game->removeChild(::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >());
            			}
HXLINE(  54)			{
HXLINE(  54)				int _g1 = 0;
HXDLIN(  54)				int _g2 = this->objectsInDisplay->length;
HXDLIN(  54)				while((_g1 < _g2)){
HXLINE(  54)					_g1 = (_g1 + 1);
HXDLIN(  54)					int d = (_g1 - 1);
HXLINE(  56)					if (!(::Main_obj::game->contains(this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()))) {
HXLINE(  57)						::Main_obj::game->addChild(this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >());
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,CheckObjectsInDisplay,(void))


::hx::ObjectPtr< Camera_obj > Camera_obj::__new(Float fovX,Float fovY) {
	::hx::ObjectPtr< Camera_obj > __this = new Camera_obj();
	__this->__construct(fovX,fovY);
	return __this;
}

::hx::ObjectPtr< Camera_obj > Camera_obj::__alloc(::hx::Ctx *_hx_ctx,Float fovX,Float fovY) {
	Camera_obj *__this = (Camera_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Camera_obj), true, "Camera"));
	*(void **)__this = Camera_obj::_hx_vtable;
	__this->__construct(fovX,fovY);
	return __this;
}

Camera_obj::Camera_obj()
{
}

void Camera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Camera);
	HX_MARK_MEMBER_NAME(objectsInDisplay,"objectsInDisplay");
	HX_MARK_MEMBER_NAME(displayEnableDistance,"displayEnableDistance");
	HX_MARK_MEMBER_NAME(fov,"fov");
	 ::GameObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Camera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectsInDisplay,"objectsInDisplay");
	HX_VISIT_MEMBER_NAME(displayEnableDistance,"displayEnableDistance");
	HX_VISIT_MEMBER_NAME(fov,"fov");
	 ::GameObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Camera_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fov") ) { return ::hx::Val( fov ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"objectsInDisplay") ) { return ::hx::Val( objectsInDisplay ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"displayEnableDistance") ) { return ::hx::Val( displayEnableDistance ); }
		if (HX_FIELD_EQ(inName,"CheckObjectsInDisplay") ) { return ::hx::Val( CheckObjectsInDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Camera_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fov") ) { fov=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"objectsInDisplay") ) { objectsInDisplay=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"displayEnableDistance") ) { displayEnableDistance=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Camera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("objectsInDisplay",69,29,4e,fd));
	outFields->push(HX_("displayEnableDistance",ba,26,4e,28));
	outFields->push(HX_("fov",0d,c7,4d,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Camera_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Camera_obj,objectsInDisplay),HX_("objectsInDisplay",69,29,4e,fd)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,displayEnableDistance),HX_("displayEnableDistance",ba,26,4e,28)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(Camera_obj,fov),HX_("fov",0d,c7,4d,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Camera_obj_sStaticStorageInfo = 0;
#endif

static ::String Camera_obj_sMemberFields[] = {
	HX_("objectsInDisplay",69,29,4e,fd),
	HX_("displayEnableDistance",ba,26,4e,28),
	HX_("fov",0d,c7,4d,00),
	HX_("CheckObjectsInDisplay",31,de,be,86),
	::String(null()) };

::hx::Class Camera_obj::__mClass;

void Camera_obj::__register()
{
	Camera_obj _hx_dummy;
	Camera_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Camera",c5,ba,20,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Camera_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Camera_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Camera_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Camera_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

