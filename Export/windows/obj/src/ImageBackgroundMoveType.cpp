#include <hxcpp.h>

#ifndef INCLUDED_ImageBackgroundMoveType
#include <ImageBackgroundMoveType.h>
#endif

::ImageBackgroundMoveType ImageBackgroundMoveType_obj::BOTH;

::ImageBackgroundMoveType ImageBackgroundMoveType_obj::HORIZONTAL;

::ImageBackgroundMoveType ImageBackgroundMoveType_obj::VERTICAL;

bool ImageBackgroundMoveType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOTH",81,50,dc,2b)) { outValue = ImageBackgroundMoveType_obj::BOTH; return true; }
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) { outValue = ImageBackgroundMoveType_obj::HORIZONTAL; return true; }
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) { outValue = ImageBackgroundMoveType_obj::VERTICAL; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ImageBackgroundMoveType_obj)

int ImageBackgroundMoveType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BOTH",81,50,dc,2b)) return 2;
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) return 0;
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) return 1;
	return super::__FindIndex(inName);
}

int ImageBackgroundMoveType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BOTH",81,50,dc,2b)) return 0;
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) return 0;
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ImageBackgroundMoveType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOTH",81,50,dc,2b)) return BOTH;
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) return HORIZONTAL;
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) return VERTICAL;
	return super::__Field(inName,inCallProp);
}

static ::String ImageBackgroundMoveType_obj_sStaticFields[] = {
	HX_("HORIZONTAL",e4,70,cd,07),
	HX_("VERTICAL",76,4c,9b,c3),
	HX_("BOTH",81,50,dc,2b),
	::String(null())
};

::hx::Class ImageBackgroundMoveType_obj::__mClass;

Dynamic __Create_ImageBackgroundMoveType_obj() { return new ImageBackgroundMoveType_obj; }

void ImageBackgroundMoveType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("ImageBackgroundMoveType",94,6a,36,ea), ::hx::TCanCast< ImageBackgroundMoveType_obj >,ImageBackgroundMoveType_obj_sStaticFields,0,
	&__Create_ImageBackgroundMoveType_obj, &__Create,
	&super::__SGetClass(), &CreateImageBackgroundMoveType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ImageBackgroundMoveType_obj::__GetStatic;
}

void ImageBackgroundMoveType_obj::__boot()
{
BOTH = ::hx::CreateConstEnum< ImageBackgroundMoveType_obj >(HX_("BOTH",81,50,dc,2b),2);
HORIZONTAL = ::hx::CreateConstEnum< ImageBackgroundMoveType_obj >(HX_("HORIZONTAL",e4,70,cd,07),0);
VERTICAL = ::hx::CreateConstEnum< ImageBackgroundMoveType_obj >(HX_("VERTICAL",76,4c,9b,c3),1);
}


