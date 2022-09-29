#ifndef INCLUDED_PlayerController
#define INCLUDED_PlayerController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Component
#include <Component.h>
#endif
HX_DECLARE_CLASS0(Behaviour)
HX_DECLARE_CLASS0(Component)
HX_DECLARE_CLASS0(PlayerController)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)



class HXCPP_CLASS_ATTRIBUTES PlayerController_obj : public  ::Component_obj
{
	public:
		typedef  ::Component_obj super;
		typedef PlayerController_obj OBJ_;
		PlayerController_obj();

	public:
		enum { _hx_ClassId = 0x7db5e345 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PlayerController")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"PlayerController"); }
		static ::hx::ObjectPtr< PlayerController_obj > __new();
		static ::hx::ObjectPtr< PlayerController_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlayerController_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlayerController",7d,c7,dd,23); }

		int state;
		bool pressed;
		void update( ::openfl::events::Event e);

};


#endif /* INCLUDED_PlayerController */ 
