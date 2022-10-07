#include <hxcpp.h>

#ifndef INCLUDED_ObjectType
#include <ObjectType.h>
#endif

::ObjectType ObjectType_obj::SIMPLE;

::ObjectType ObjectType_obj::TEXT;

bool ObjectType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("SIMPLE",32,b0,01,6b)) { outValue = ObjectType_obj::SIMPLE; return true; }
	if (inName==HX_("TEXT",ad,94,ba,37)) { outValue = ObjectType_obj::TEXT; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ObjectType_obj)

int ObjectType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("SIMPLE",32,b0,01,6b)) return 0;
	if (inName==HX_("TEXT",ad,94,ba,37)) return 1;
	return super::__FindIndex(inName);
}

int ObjectType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("SIMPLE",32,b0,01,6b)) return 0;
	if (inName==HX_("TEXT",ad,94,ba,37)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ObjectType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("SIMPLE",32,b0,01,6b)) return SIMPLE;
	if (inName==HX_("TEXT",ad,94,ba,37)) return TEXT;
	return super::__Field(inName,inCallProp);
}

static ::String ObjectType_obj_sStaticFields[] = {
	HX_("SIMPLE",32,b0,01,6b),
	HX_("TEXT",ad,94,ba,37),
	::String(null())
};

::hx::Class ObjectType_obj::__mClass;

Dynamic __Create_ObjectType_obj() { return new ObjectType_obj; }

void ObjectType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("ObjectType",39,6d,f2,c5), ::hx::TCanCast< ObjectType_obj >,ObjectType_obj_sStaticFields,0,
	&__Create_ObjectType_obj, &__Create,
	&super::__SGetClass(), &CreateObjectType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ObjectType_obj::__GetStatic;
}

void ObjectType_obj::__boot()
{
SIMPLE = ::hx::CreateConstEnum< ObjectType_obj >(HX_("SIMPLE",32,b0,01,6b),0);
TEXT = ::hx::CreateConstEnum< ObjectType_obj >(HX_("TEXT",ad,94,ba,37),1);
}


