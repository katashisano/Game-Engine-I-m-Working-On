#ifndef INCLUDED_Input
#define INCLUDED_Input

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Behaviour
#include <Behaviour.h>
#endif
HX_DECLARE_CLASS0(Behaviour)
HX_DECLARE_CLASS0(Input)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)



class HXCPP_CLASS_ATTRIBUTES Input_obj : public  ::Behaviour_obj
{
	public:
		typedef  ::Behaviour_obj super;
		typedef Input_obj OBJ_;
		Input_obj();

	public:
		enum { _hx_ClassId = 0x458f9d46 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Input")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Input"); }
		static ::hx::ObjectPtr< Input_obj > __new();
		static ::hx::ObjectPtr< Input_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Input_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Input",ea,33,4b,51); }

		::Array< int > keysDown;
		void keyDown( ::openfl::events::KeyboardEvent event);
		::Dynamic keyDown_dyn();

		void keyUp( ::openfl::events::KeyboardEvent event);
		::Dynamic keyUp_dyn();

		bool checkKey(int code);
		::Dynamic checkKey_dyn();

};


#endif /* INCLUDED_Input */ 
