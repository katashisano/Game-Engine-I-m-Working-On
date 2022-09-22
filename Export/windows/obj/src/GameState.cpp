#include <hxcpp.h>

#ifndef INCLUDED_GameState
#include <GameState.h>
#endif

::GameState GameState_obj::Paused;

::GameState GameState_obj::Playing;

bool GameState_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Paused",ce,b4,18,24)) { outValue = GameState_obj::Paused; return true; }
	if (inName==HX_("Playing",4e,37,69,57)) { outValue = GameState_obj::Playing; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(GameState_obj)

int GameState_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Paused",ce,b4,18,24)) return 0;
	if (inName==HX_("Playing",4e,37,69,57)) return 1;
	return super::__FindIndex(inName);
}

int GameState_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Paused",ce,b4,18,24)) return 0;
	if (inName==HX_("Playing",4e,37,69,57)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val GameState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Paused",ce,b4,18,24)) return Paused;
	if (inName==HX_("Playing",4e,37,69,57)) return Playing;
	return super::__Field(inName,inCallProp);
}

static ::String GameState_obj_sStaticFields[] = {
	HX_("Paused",ce,b4,18,24),
	HX_("Playing",4e,37,69,57),
	::String(null())
};

::hx::Class GameState_obj::__mClass;

Dynamic __Create_GameState_obj() { return new GameState_obj; }

void GameState_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("GameState",9f,44,f9,5a), ::hx::TCanCast< GameState_obj >,GameState_obj_sStaticFields,0,
	&__Create_GameState_obj, &__Create,
	&super::__SGetClass(), &CreateGameState_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &GameState_obj::__GetStatic;
}

void GameState_obj::__boot()
{
Paused = ::hx::CreateConstEnum< GameState_obj >(HX_("Paused",ce,b4,18,24),0);
Playing = ::hx::CreateConstEnum< GameState_obj >(HX_("Playing",4e,37,69,57),1);
}


