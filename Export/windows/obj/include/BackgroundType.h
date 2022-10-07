#ifndef INCLUDED_BackgroundType
#define INCLUDED_BackgroundType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(BackgroundType)


class BackgroundType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef BackgroundType_obj OBJ_;

	public:
		BackgroundType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("BackgroundType",e8,d5,78,cb); }
		::String __ToString() const { return HX_("BackgroundType.",46,55,42,3e) + _hx_tag; }

		static ::BackgroundType GRADIENT;
		static inline ::BackgroundType GRADIENT_dyn() { return GRADIENT; }
		static ::BackgroundType IMAGE;
		static inline ::BackgroundType IMAGE_dyn() { return IMAGE; }
		static ::BackgroundType SOLID;
		static inline ::BackgroundType SOLID_dyn() { return SOLID; }
};


#endif /* INCLUDED_BackgroundType */ 
