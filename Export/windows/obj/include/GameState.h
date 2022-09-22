#ifndef INCLUDED_GameState
#define INCLUDED_GameState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(GameState)


class GameState_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef GameState_obj OBJ_;

	public:
		GameState_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("GameState",9f,44,f9,5a); }
		::String __ToString() const { return HX_("GameState.",af,c6,22,3f) + _hx_tag; }

		static ::GameState Paused;
		static inline ::GameState Paused_dyn() { return Paused; }
		static ::GameState Playing;
		static inline ::GameState Playing_dyn() { return Playing; }
};


#endif /* INCLUDED_GameState */ 
