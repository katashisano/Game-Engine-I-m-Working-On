#ifndef INCLUDED_TextObject
#define INCLUDED_TextObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
HX_DECLARE_CLASS0(Behaviour)
HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS0(TextObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)



class HXCPP_CLASS_ATTRIBUTES TextObject_obj : public  ::GameObject_obj
{
	public:
		typedef  ::GameObject_obj super;
		typedef TextObject_obj OBJ_;
		TextObject_obj();

	public:
		enum { _hx_ClassId = 0x5aa4262c };

		void __construct(::String __o__hx___name,::hx::Null< bool >  __o__isVisible,::String __o_text,::String __o_font,::hx::Null< int >  __o__size, ::Dynamic __o_align,::hx::Null< int >  __o_color);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="TextObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"TextObject"); }
		static ::hx::ObjectPtr< TextObject_obj > __new(::String __o__hx___name,::hx::Null< bool >  __o__isVisible,::String __o_text,::String __o_font,::hx::Null< int >  __o__size, ::Dynamic __o_align,::hx::Null< int >  __o_color);
		static ::hx::ObjectPtr< TextObject_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o__hx___name,::hx::Null< bool >  __o__isVisible,::String __o_text,::String __o_font,::hx::Null< int >  __o__size, ::Dynamic __o_align,::hx::Null< int >  __o_color);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextObject",6c,03,e1,42); }

		 ::openfl::text::TextField textField;
		 ::openfl::text::TextFormat textFormat;
		int size;
		void setText(::String text);
		::Dynamic setText_dyn();

		int displaySize;
		void update( ::openfl::events::Event e);

};


#endif /* INCLUDED_TextObject */ 
