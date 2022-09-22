#ifndef INCLUDED_Camera
#define INCLUDED_Camera

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
HX_DECLARE_CLASS0(Camera)
HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)



class HXCPP_CLASS_ATTRIBUTES Camera_obj : public  ::GameObject_obj
{
	public:
		typedef  ::GameObject_obj super;
		typedef Camera_obj OBJ_;
		Camera_obj();

	public:
		enum { _hx_ClassId = 0x4d6b7d85 };

		void __construct(Float fovX,Float fovY);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Camera")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Camera"); }
		static ::hx::ObjectPtr< Camera_obj > __new(Float fovX,Float fovY);
		static ::hx::ObjectPtr< Camera_obj > __alloc(::hx::Ctx *_hx_ctx,Float fovX,Float fovY);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Camera_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Camera",c5,ba,20,ec); }

		::Array< ::Dynamic> objectsInDisplay;
		Float displayEnableDistance;
		 ::openfl::geom::Point fov;
		void CheckObjectsInDisplay();
		::Dynamic CheckObjectsInDisplay_dyn();

};


#endif /* INCLUDED_Camera */ 
