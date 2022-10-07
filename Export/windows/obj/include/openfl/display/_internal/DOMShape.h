#ifndef INCLUDED_openfl_display__internal_DOMShape
#define INCLUDED_openfl_display__internal_DOMShape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DOMRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display,_internal,DOMShape)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES DOMShape_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DOMShape_obj OBJ_;
		DOMShape_obj();

	public:
		enum { _hx_ClassId = 0x27be8a89 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.DOMShape")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.DOMShape"); }

		inline static ::hx::ObjectPtr< DOMShape_obj > __new() {
			::hx::ObjectPtr< DOMShape_obj > __this = new DOMShape_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DOMShape_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DOMShape_obj *__this = (DOMShape_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DOMShape_obj), false, "openfl.display._internal.DOMShape"));
			*(void **)__this = DOMShape_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DOMShape_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DOMShape",5f,11,4b,df); }

		static void __boot();
		static  ::Dynamic __meta__;
		static void clear( ::openfl::display::DisplayObject shape, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic clear_dyn();

		static void render( ::openfl::display::DisplayObject shape, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic render_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_DOMShape */ 
