#ifndef INCLUDED_Game
#define INCLUDED_Game

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Camera)
HX_DECLARE_CLASS0(Game)
HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)



class HXCPP_CLASS_ATTRIBUTES Game_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef Game_obj OBJ_;
		Game_obj();

	public:
		enum { _hx_ClassId = 0x038b1636 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Game")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Game"); }
		static ::hx::ObjectPtr< Game_obj > __new();
		static ::hx::ObjectPtr< Game_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Game_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Game",12,20,38,2f); }

		::Array< ::Dynamic> activeObjects;
		int worldScale;
		 ::Camera mainCamera;
		void initGame(bool fullScreen,int _worldScale);
		::Dynamic initGame_dyn();

		void Update( ::openfl::events::Event event);
		::Dynamic Update_dyn();

		Float deltaTime;
		int timeElapsed;
		int lastFrameTime;
		Float GetDeltaTime();
		::Dynamic GetDeltaTime_dyn();

};


#endif /* INCLUDED_Game */ 
