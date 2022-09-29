#ifndef INCLUDED_ImageBackgroundMoveType
#define INCLUDED_ImageBackgroundMoveType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ImageBackgroundMoveType)


class ImageBackgroundMoveType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ImageBackgroundMoveType_obj OBJ_;

	public:
		ImageBackgroundMoveType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("ImageBackgroundMoveType",94,6a,36,ea); }
		::String __ToString() const { return HX_("ImageBackgroundMoveType.",1a,d7,66,05) + _hx_tag; }

		static ::ImageBackgroundMoveType BOTH;
		static inline ::ImageBackgroundMoveType BOTH_dyn() { return BOTH; }
		static ::ImageBackgroundMoveType HORIZONTAL;
		static inline ::ImageBackgroundMoveType HORIZONTAL_dyn() { return HORIZONTAL; }
		static ::ImageBackgroundMoveType VERTICAL;
		static inline ::ImageBackgroundMoveType VERTICAL_dyn() { return VERTICAL; }
};


#endif /* INCLUDED_ImageBackgroundMoveType */ 
