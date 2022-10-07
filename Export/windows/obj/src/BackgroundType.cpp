#include <hxcpp.h>

#ifndef INCLUDED_BackgroundType
#include <BackgroundType.h>
#endif

::BackgroundType BackgroundType_obj::GRADIENT;

::BackgroundType BackgroundType_obj::IMAGE;

::BackgroundType BackgroundType_obj::SOLID;

bool BackgroundType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("GRADIENT",f0,c9,c4,83)) { outValue = BackgroundType_obj::GRADIENT; return true; }
	if (inName==HX_("IMAGE",3b,57,57,3b)) { outValue = BackgroundType_obj::IMAGE; return true; }
	if (inName==HX_("SOLID",0b,ec,b3,fe)) { outValue = BackgroundType_obj::SOLID; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(BackgroundType_obj)

int BackgroundType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("GRADIENT",f0,c9,c4,83)) return 2;
	if (inName==HX_("IMAGE",3b,57,57,3b)) return 1;
	if (inName==HX_("SOLID",0b,ec,b3,fe)) return 0;
	return super::__FindIndex(inName);
}

int BackgroundType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("GRADIENT",f0,c9,c4,83)) return 0;
	if (inName==HX_("IMAGE",3b,57,57,3b)) return 0;
	if (inName==HX_("SOLID",0b,ec,b3,fe)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val BackgroundType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("GRADIENT",f0,c9,c4,83)) return GRADIENT;
	if (inName==HX_("IMAGE",3b,57,57,3b)) return IMAGE;
	if (inName==HX_("SOLID",0b,ec,b3,fe)) return SOLID;
	return super::__Field(inName,inCallProp);
}

static ::String BackgroundType_obj_sStaticFields[] = {
	HX_("SOLID",0b,ec,b3,fe),
	HX_("IMAGE",3b,57,57,3b),
	HX_("GRADIENT",f0,c9,c4,83),
	::String(null())
};

::hx::Class BackgroundType_obj::__mClass;

Dynamic __Create_BackgroundType_obj() { return new BackgroundType_obj; }

void BackgroundType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("BackgroundType",e8,d5,78,cb), ::hx::TCanCast< BackgroundType_obj >,BackgroundType_obj_sStaticFields,0,
	&__Create_BackgroundType_obj, &__Create,
	&super::__SGetClass(), &CreateBackgroundType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &BackgroundType_obj::__GetStatic;
}

void BackgroundType_obj::__boot()
{
GRADIENT = ::hx::CreateConstEnum< BackgroundType_obj >(HX_("GRADIENT",f0,c9,c4,83),2);
IMAGE = ::hx::CreateConstEnum< BackgroundType_obj >(HX_("IMAGE",3b,57,57,3b),1);
SOLID = ::hx::CreateConstEnum< BackgroundType_obj >(HX_("SOLID",0b,ec,b3,fe),0);
}


