#ifndef INCLUDED_GameObject
#define INCLUDED_GameObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Component)
HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)



class HXCPP_CLASS_ATTRIBUTES GameObject_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef GameObject_obj OBJ_;
		GameObject_obj();

	public:
		enum { _hx_ClassId = 0x66298f31 };

		void __construct(::hx::Null< bool >  __o__enabled);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="GameObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"GameObject"); }
		static ::hx::ObjectPtr< GameObject_obj > __new(::hx::Null< bool >  __o__enabled);
		static ::hx::ObjectPtr< GameObject_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o__enabled);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GameObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GameObject",71,6c,66,4e); }

		bool enabled;
		 ::openfl::geom::Point worldPosition;
		 ::openfl::geom::Point worldScale;
		Float zRot;
		Float worldWidth;
		Float worldHeight;
		 ::openfl::display::Bitmap bitmap;
		::Array< ::Dynamic> components;
		void Translate(Float deltaX,Float deltaY);
		::Dynamic Translate_dyn();

		void MoveTo(Float x,Float y);
		::Dynamic MoveTo_dyn();

};


#endif /* INCLUDED_GameObject */ 
