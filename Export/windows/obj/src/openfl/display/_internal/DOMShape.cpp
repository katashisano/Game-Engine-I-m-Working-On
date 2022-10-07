#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DOMRenderer
#include <openfl/display/DOMRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DOMShape
#include <openfl/display/_internal/DOMShape.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_58c15fcf35b6b9f6_15_clear,"openfl.display._internal.DOMShape","clear",0x2e4d791a,"openfl.display._internal.DOMShape.clear","openfl/display/_internal/DOMShape.hx",15,0x6a8fc2c0)
HX_LOCAL_STACK_FRAME(_hx_pos_58c15fcf35b6b9f6_27_render,"openfl.display._internal.DOMShape","render",0x52fdff29,"openfl.display._internal.DOMShape.render","openfl/display/_internal/DOMShape.hx",27,0x6a8fc2c0)
HX_LOCAL_STACK_FRAME(_hx_pos_58c15fcf35b6b9f6_12_boot,"openfl.display._internal.DOMShape","boot",0x7dd56d45,"openfl.display._internal.DOMShape.boot","openfl/display/_internal/DOMShape.hx",12,0x6a8fc2c0)
namespace openfl{
namespace display{
namespace _internal{

void DOMShape_obj::__construct() { }

Dynamic DOMShape_obj::__CreateEmpty() { return new DOMShape_obj; }

void *DOMShape_obj::_hx_vtable = 0;

Dynamic DOMShape_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DOMShape_obj > _hx_result = new DOMShape_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DOMShape_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x27be8a89;
}

void DOMShape_obj::clear( ::openfl::display::DisplayObject shape, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_58c15fcf35b6b9f6_15_clear)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMShape_obj,clear,(void))

void DOMShape_obj::render( ::openfl::display::DisplayObject shape, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_58c15fcf35b6b9f6_27_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMShape_obj,render,(void))


DOMShape_obj::DOMShape_obj()
{
}

bool DOMShape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DOMShape_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DOMShape_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DOMShape_obj::__mClass;

static ::String DOMShape_obj_sStaticFields[] = {
	HX_("clear",8d,71,5b,48),
	HX_("render",56,6b,29,05),
	::String(null())
};

void DOMShape_obj::__register()
{
	DOMShape_obj _hx_dummy;
	DOMShape_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.DOMShape",3b,10,e9,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMShape_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DOMShape_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DOMShape_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMShape_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMShape_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DOMShape_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_58c15fcf35b6b9f6_12_boot)
HXDLIN(  12)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
