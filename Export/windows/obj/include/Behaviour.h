#ifndef INCLUDED_Behaviour
#define INCLUDED_Behaviour

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Behaviour)
HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)



class HXCPP_CLASS_ATTRIBUTES Behaviour_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef Behaviour_obj OBJ_;
		Behaviour_obj();

	public:
		enum { _hx_ClassId = 0x49891979 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Behaviour")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Behaviour"); }
		static ::hx::ObjectPtr< Behaviour_obj > __new();
		static ::hx::ObjectPtr< Behaviour_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Behaviour_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Behaviour",1d,d2,7e,d7); }

		virtual void update( ::openfl::events::Event e);
		::Dynamic update_dyn();

		 ::openfl::geom::Point point(::hx::Null< Float >  x,::hx::Null< Float >  y);
		::Dynamic point_dyn();

		 ::GameObject getObjectByName(::Array< ::Dynamic> a,::String n);
		::Dynamic getObjectByName_dyn();

		 ::GameObject getChildObjectByName( ::GameObject o,::String n);
		::Dynamic getChildObjectByName_dyn();

};


#endif /* INCLUDED_Behaviour */ 
