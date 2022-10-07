#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_program_binary
#define INCLUDED_lime_graphics_opengl_ext_IMG_program_binary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_ad90b26c872a9ef8_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,IMG_program_binary)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES IMG_program_binary_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef IMG_program_binary_obj OBJ_;
		IMG_program_binary_obj();

	public:
		enum { _hx_ClassId = 0x66322462 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.IMG_program_binary")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.IMG_program_binary"); }

		inline static ::hx::ObjectPtr< IMG_program_binary_obj > __new() {
			::hx::ObjectPtr< IMG_program_binary_obj > __this = new IMG_program_binary_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< IMG_program_binary_obj > __alloc(::hx::Ctx *_hx_ctx) {
			IMG_program_binary_obj *__this = (IMG_program_binary_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IMG_program_binary_obj), false, "lime.graphics.opengl.ext.IMG_program_binary"));
			*(void **)__this = IMG_program_binary_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_ad90b26c872a9ef8_6_new)
HXDLIN(   6)		( ( ::lime::graphics::opengl::ext::IMG_program_binary)(__this) )->SGX_PROGRAM_BINARY_IMG = 37168;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IMG_program_binary_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IMG_program_binary",b8,93,3a,05); }

		int SGX_PROGRAM_BINARY_IMG;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_IMG_program_binary */ 