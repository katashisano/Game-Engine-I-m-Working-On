#ifndef INCLUDED_Player
#define INCLUDED_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)



class HXCPP_CLASS_ATTRIBUTES Player_obj : public  ::GameObject_obj
{
	public:
		typedef  ::GameObject_obj super;
		typedef Player_obj OBJ_;
		Player_obj();

	public:
		enum { _hx_ClassId = 0x33e526a5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Player")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Player"); }
		static ::hx::ObjectPtr< Player_obj > __new();
		static ::hx::ObjectPtr< Player_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Player",81,5f,4d,6c); }

		 ::openfl::display::BitmapData btmpData;
		 ::openfl::display::Bitmap playerBtmp;
		void Update( ::openfl::events::Event event);
		::Dynamic Update_dyn();

};


#endif /* INCLUDED_Player */ 
