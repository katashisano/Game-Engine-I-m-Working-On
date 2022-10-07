#ifndef INCLUDED_ObjectType
#define INCLUDED_ObjectType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ObjectType)


class ObjectType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ObjectType_obj OBJ_;

	public:
		ObjectType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("ObjectType",39,6d,f2,c5); }
		::String __ToString() const { return HX_("ObjectType.",d5,24,2d,6e) + _hx_tag; }

		static ::ObjectType SIMPLE;
		static inline ::ObjectType SIMPLE_dyn() { return SIMPLE; }
		static ::ObjectType TEXT;
		static inline ::ObjectType TEXT_dyn() { return TEXT; }
};


#endif /* INCLUDED_ObjectType */ 
