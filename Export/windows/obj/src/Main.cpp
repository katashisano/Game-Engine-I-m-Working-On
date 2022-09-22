#include <hxcpp.h>

#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e47a9afac0942eb9_49_new,"Main","new",0x6616a5cb,"Main.new","Main.hx",49,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_24_resize,"Main","resize",0x39257969,"Main.resize","Main.hx",24,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_31_init,"Main","init",0xea732345,"Main.init","Main.hx",31,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_58_added,"Main","added",0x98771aeb,"Main.added","Main.hx",58,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_78_main,"Main","main",0xed0e206e,"Main.main","Main.hx",78,0x087e5c05)

void Main_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_49_new)
HXLINE(  51)		super::__construct();
HXLINE(  53)		this->addEventListener(HX_("addedToStage",63,22,55,0c),this->added_dyn(),null(),null(),null());
            	}

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x07825a7d) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x07825a7d;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Main_obj::resize( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_24_resize)
HXDLIN(  24)		if (!(this->inited)) {
HXDLIN(  24)			this->init();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,resize,(void))

void Main_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_31_init)
HXLINE(  33)		if (this->inited) {
HXLINE(  33)			return;
            		}
HXLINE(  35)		this->inited = true;
HXLINE(  39)		::Main_obj::game =  ::Game_obj::__alloc( HX_CTX );
HXLINE(  40)		::Main_obj::game->initGame(true,16);
HXLINE(  41)		this->addChild(::Main_obj::game);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

void Main_obj::added( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_58_added)
HXLINE(  60)		this->removeEventListener(HX_("addedToStage",63,22,55,0c),this->added_dyn(),null());
HXLINE(  62)		this->stage->addEventListener(HX_("resize",f4,59,7b,08),this->resize_dyn(),null(),null(),null());
HXLINE(  70)		this->init();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,added,(void))

 ::Game Main_obj::game;

void Main_obj::main(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_78_main)
HXLINE(  82)		::openfl::Lib_obj::get_current()->stage->align = 6;
HXLINE(  84)		::openfl::Lib_obj::get_current()->stage->set_scaleMode(2);
HXLINE(  86)		 ::openfl::display::MovieClip _hx_tmp = ::openfl::Lib_obj::get_current();
HXDLIN(  86)		_hx_tmp->addChild( ::Main_obj::__alloc( HX_CTX ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


::hx::ObjectPtr< Main_obj > Main_obj::__new() {
	::hx::ObjectPtr< Main_obj > __this = new Main_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Main_obj > Main_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Main_obj *__this = (Main_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Main_obj), true, "Main"));
	*(void **)__this = Main_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Main_obj::Main_obj()
{
}

::hx::Val Main_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { return ::hx::Val( added_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { return ::hx::Val( inited ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { outValue = ( game ); return true; }
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
	}
	return false;
}

::hx::Val Main_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=ioValue.Cast<  ::Game >(); return true; }
	}
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("inited",6f,77,4c,97));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Main_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Main_obj,inited),HX_("inited",6f,77,4c,97)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Main_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Game */ ,(void *) &Main_obj::game,HX_("game",f2,f3,5e,44)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Main_obj_sMemberFields[] = {
	HX_("inited",6f,77,4c,97),
	HX_("resize",f4,59,7b,08),
	HX_("init",10,3b,bb,45),
	HX_("added",c0,d4,43,1c),
	::String(null()) };

static void Main_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::game,"game");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Main_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::game,"game");
};

#endif

::hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_("game",f2,f3,5e,44),
	HX_("main",39,38,56,48),
	::String(null())
};

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = Main_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Main_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Main_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Main_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

