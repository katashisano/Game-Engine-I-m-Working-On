#ifndef INCLUDED_openfl_utils__internal_Lib
#define INCLUDED_openfl_utils__internal_Lib

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(openfl,display,Application)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,utils,_internal,Lib)

namespace openfl{
namespace utils{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES Lib_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Lib_obj OBJ_;
		Lib_obj();

	public:
		enum { _hx_ClassId = 0x594c902a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.utils._internal.Lib")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.utils._internal.Lib"); }

		inline static ::hx::ObjectPtr< Lib_obj > __new() {
			::hx::ObjectPtr< Lib_obj > __this = new Lib_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Lib_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Lib_obj *__this = (Lib_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Lib_obj), false, "openfl.utils._internal.Lib"));
			*(void **)__this = Lib_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Lib_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Lib",25,07,3a,00); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::openfl::display::Application application;
		static  ::openfl::display::MovieClip current;
		static  ::haxe::ds::StringMap _hx___sentWarnings;
		static void notImplemented( ::Dynamic posInfo);
		static ::Dynamic notImplemented_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _internal

#endif /* INCLUDED_openfl_utils__internal_Lib */ 
