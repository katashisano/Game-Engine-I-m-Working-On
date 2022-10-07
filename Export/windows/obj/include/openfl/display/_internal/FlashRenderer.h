#ifndef INCLUDED_openfl_display__internal_FlashRenderer
#define INCLUDED_openfl_display__internal_FlashRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS3(openfl,display,_internal,FlashRenderer)
HX_DECLARE_CLASS3(openfl,display,_internal,IDisplayObject)
HX_DECLARE_CLASS2(openfl,events,Event)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES FlashRenderer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlashRenderer_obj OBJ_;
		FlashRenderer_obj();

	public:
		enum { _hx_ClassId = 0x74124589 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.FlashRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.FlashRenderer"); }

		inline static ::hx::ObjectPtr< FlashRenderer_obj > __new() {
			::hx::ObjectPtr< FlashRenderer_obj > __this = new FlashRenderer_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlashRenderer_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlashRenderer_obj *__this = (FlashRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlashRenderer_obj), false, "openfl.display._internal.FlashRenderer"));
			*(void **)__this = FlashRenderer_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlashRenderer_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlashRenderer",f3,36,bf,43); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::haxe::ds::ObjectMap instances;
		static void _hx_register(::Dynamic renderObject);
		static ::Dynamic _hx_register_dyn();

		static void render( ::openfl::events::Event _);
		static ::Dynamic render_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_FlashRenderer */ 
