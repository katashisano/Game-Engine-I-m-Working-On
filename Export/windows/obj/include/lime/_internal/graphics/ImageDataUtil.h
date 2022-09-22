#ifndef INCLUDED_lime__internal_graphics_ImageDataUtil
#define INCLUDED_lime__internal_graphics_ImageDataUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,_internal,graphics,ImageDataUtil)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,ImageChannel)
HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS2(lime,math,Vector4)
HX_DECLARE_CLASS2(lime,_hx_system,Endian)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,BytePointerData)

namespace lime{
namespace _internal{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES ImageDataUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ImageDataUtil_obj OBJ_;
		ImageDataUtil_obj();

	public:
		enum { _hx_ClassId = 0x173c18b5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.graphics.ImageDataUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime._internal.graphics.ImageDataUtil"); }

		inline static ::hx::ObjectPtr< ImageDataUtil_obj > __new() {
			::hx::ObjectPtr< ImageDataUtil_obj > __this = new ImageDataUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ImageDataUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ImageDataUtil_obj *__this = (ImageDataUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageDataUtil_obj), false, "lime._internal.graphics.ImageDataUtil"));
			*(void **)__this = ImageDataUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImageDataUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImageDataUtil",a7,b5,b4,b4); }

		static void displaceMap( ::lime::graphics::Image target, ::lime::graphics::Image source, ::lime::graphics::Image map, ::lime::math::Vector2 mapPoint, ::lime::math::Vector4 componentX, ::lime::math::Vector4 componentY,bool smooth);
		static ::Dynamic displaceMap_dyn();

		static int bilinear(int s1,int s2,int s3,int s4,Float su,Float sv);
		static ::Dynamic bilinear_dyn();

		static int lerpRGBA(int v0,int v1,Float x);
		static ::Dynamic lerpRGBA_dyn();

		static  ::lime::math::Vector4 lerp4f( ::lime::math::Vector4 v0, ::lime::math::Vector4 v1,Float x);
		static ::Dynamic lerp4f_dyn();

		static Float lerp(Float v0,Float v1,Float x);
		static ::Dynamic lerp_dyn();

		static void colorTransform( ::lime::graphics::Image image, ::lime::math::Rectangle rect, ::lime::utils::ArrayBufferView colorMatrix);
		static ::Dynamic colorTransform_dyn();

		static void copyChannel( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint, ::lime::graphics::ImageChannel sourceChannel, ::lime::graphics::ImageChannel destChannel);
		static ::Dynamic copyChannel_dyn();

		static void copyPixels( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint, ::lime::graphics::Image alphaImage, ::lime::math::Vector2 alphaPoint,::hx::Null< bool >  mergeAlpha);
		static ::Dynamic copyPixels_dyn();

		static void fillRect( ::lime::graphics::Image image, ::lime::math::Rectangle rect,int color,int format);
		static ::Dynamic fillRect_dyn();

		static void floodFill( ::lime::graphics::Image image,int x,int y,int color,int format);
		static ::Dynamic floodFill_dyn();

		static  ::lime::graphics::Image gaussianBlur( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,::hx::Null< Float >  blurX,::hx::Null< Float >  blurY,::hx::Null< int >  quality,::hx::Null< Float >  strength, ::Dynamic color);
		static ::Dynamic gaussianBlur_dyn();

		static  ::lime::math::Rectangle getColorBoundsRect( ::lime::graphics::Image image,int mask,int color,bool findColor,int format);
		static ::Dynamic getColorBoundsRect_dyn();

		static int getPixel( ::lime::graphics::Image image,int x,int y,int format);
		static ::Dynamic getPixel_dyn();

		static int getPixel32( ::lime::graphics::Image image,int x,int y,int format);
		static ::Dynamic getPixel32_dyn();

		static  ::haxe::io::Bytes getPixels( ::lime::graphics::Image image, ::lime::math::Rectangle rect,int format);
		static ::Dynamic getPixels_dyn();

		static void merge( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier);
		static ::Dynamic merge_dyn();

		static void multiplyAlpha( ::lime::graphics::Image image);
		static ::Dynamic multiplyAlpha_dyn();

		static void resize( ::lime::graphics::Image image,int newWidth,int newHeight);
		static ::Dynamic resize_dyn();

		static void resizeBuffer( ::lime::graphics::Image image,int newWidth,int newHeight);
		static ::Dynamic resizeBuffer_dyn();

		static void setFormat( ::lime::graphics::Image image,int format);
		static ::Dynamic setFormat_dyn();

		static void setPixel( ::lime::graphics::Image image,int x,int y,int color,int format);
		static ::Dynamic setPixel_dyn();

		static void setPixel32( ::lime::graphics::Image image,int x,int y,int color,int format);
		static ::Dynamic setPixel32_dyn();

		static void setPixels( ::lime::graphics::Image image, ::lime::math::Rectangle rect, ::lime::utils::BytePointerData bytePointer,int format, ::lime::_hx_system::Endian endian);
		static ::Dynamic setPixels_dyn();

		static int threshold( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,::String operation,int threshold,int color,int mask,bool copySource,int format);
		static ::Dynamic threshold_dyn();

		static void unmultiplyAlpha( ::lime::graphics::Image image);
		static ::Dynamic unmultiplyAlpha_dyn();

		static void _hx___boxBlur( ::lime::utils::ArrayBufferView imgA, ::lime::utils::ArrayBufferView imgB,int w,int h,Float bx,Float by);
		static ::Dynamic _hx___boxBlur_dyn();

		static void _hx___boxBlurH( ::lime::utils::ArrayBufferView imgA, ::lime::utils::ArrayBufferView imgB,int w,int h,int r,int off);
		static ::Dynamic _hx___boxBlurH_dyn();

		static void _hx___boxBlurT( ::lime::utils::ArrayBufferView imgA, ::lime::utils::ArrayBufferView imgB,int w,int h,int r,int off);
		static ::Dynamic _hx___boxBlurT_dyn();

		static int _hx___calculateSourceOffset( ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,int destX,int destY);
		static ::Dynamic _hx___calculateSourceOffset_dyn();

		static ::Array< Float > _hx___getBoxesForGaussianBlur(Float sigma,int n);
		static ::Dynamic _hx___getBoxesForGaussianBlur_dyn();

		static int _hx___pixelCompare(int n1,int n2);
		static ::Dynamic _hx___pixelCompare_dyn();

		static void _hx___translatePixel( ::lime::utils::ArrayBufferView imgB, ::lime::math::Rectangle sourceRect, ::lime::math::Rectangle destRect, ::lime::math::Vector2 destPoint,int destX,int destY,Float strength);
		static ::Dynamic _hx___translatePixel_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace graphics

#endif /* INCLUDED_lime__internal_graphics_ImageDataUtil */ 