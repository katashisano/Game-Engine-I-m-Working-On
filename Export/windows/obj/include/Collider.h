#ifndef INCLUDED_Collider
#define INCLUDED_Collider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Component
#include <Component.h>
#endif
HX_DECLARE_CLASS0(Behaviour)
HX_DECLARE_CLASS0(Collider)
HX_DECLARE_CLASS0(Component)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)



class HXCPP_CLASS_ATTRIBUTES Collider_obj : public  ::Component_obj
{
	public:
		typedef  ::Component_obj super;
		typedef Collider_obj OBJ_;
		Collider_obj();

	public:
		enum { _hx_ClassId = 0x55fa7378 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Collider")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Collider"); }
		static ::hx::ObjectPtr< Collider_obj > __new();
		static ::hx::ObjectPtr< Collider_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Collider_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Collider",54,9b,87,a3); }

		 ::openfl::geom::Point colliderSize;
		bool trigger;
		void update( ::openfl::events::Event event);

};


#endif /* INCLUDED_Collider */ 
