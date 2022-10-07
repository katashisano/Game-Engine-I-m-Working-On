#ifndef INCLUDED_Component
#define INCLUDED_Component

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Behaviour
#include <Behaviour.h>
#endif
HX_DECLARE_CLASS0(Behaviour)
HX_DECLARE_CLASS0(Component)
HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)



class HXCPP_CLASS_ATTRIBUTES Component_obj : public  ::Behaviour_obj
{
	public:
		typedef  ::Behaviour_obj super;
		typedef Component_obj OBJ_;
		Component_obj();

	public:
		enum { _hx_ClassId = 0x746a45dd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Component")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Component"); }
		static ::hx::ObjectPtr< Component_obj > __new();
		static ::hx::ObjectPtr< Component_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Component_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Component",9d,d0,26,b1); }

		bool enabled;
		 ::GameObject parentObject;
		::String type;
};


#endif /* INCLUDED_Component */ 
