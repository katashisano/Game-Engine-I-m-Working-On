#include <hxcpp.h>

#ifndef INCLUDED_Behaviour
#include <Behaviour.h>
#endif
#ifndef INCLUDED_Component
#include <Component.h>
#endif
#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
#ifndef INCLUDED_Input
#include <Input.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_PlayerController
#include <PlayerController.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8fd2fd601806e7d5_6_new,"PlayerController","new",0xab9f6aef,"PlayerController.new","PlayerController.hx",6,0xc07b8761)
HX_LOCAL_STACK_FRAME(_hx_pos_8fd2fd601806e7d5_27_update,"PlayerController","update",0xe5fbaeda,"PlayerController.update","PlayerController.hx",27,0xc07b8761)

void PlayerController_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_8fd2fd601806e7d5_6_new)
HXLINE(  25)		this->translateVec =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0);
HXLINE(  24)		this->movementSpeed = ((Float)5);
HXLINE(  22)		this->right = false;
HXLINE(  21)		this->left = false;
HXLINE(  20)		this->down = false;
HXLINE(  19)		this->up = false;
HXLINE(  17)		this->flipSwitchPressed = false;
HXLINE(  16)		this->flipState = 0;
HXLINE(  10)		super::__construct();
            	}

Dynamic PlayerController_obj::__CreateEmpty() { return new PlayerController_obj; }

void *PlayerController_obj::_hx_vtable = 0;

Dynamic PlayerController_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayerController_obj > _hx_result = new PlayerController_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlayerController_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x49891979) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x49891979;
		}
	} else {
		if (inClassId<=(int)0x746a45dd) {
			if (inClassId<=(int)0x6b353933) {
				return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
			} else {
				return inClassId==(int)0x746a45dd;
			}
		} else {
			return inClassId==(int)0x7db5e345;
		}
	}
}

void PlayerController_obj::update( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_8fd2fd601806e7d5_27_update)
HXLINE(  29)		if (!(this->flipSwitchPressed)) {
HXLINE(  31)			if (::Main_obj::input->checkKey(9)) {
HXLINE(  33)				if ((this->flipState < 3)) {
HXLINE(  34)					this->flipState++;
            				}
            				else {
HXLINE(  35)					this->flipState = 0;
            				}
HXLINE(  37)				this->flipSwitchPressed = true;
            			}
            		}
HXLINE(  42)		if (!(::Main_obj::input->checkKey(9))) {
HXLINE(  44)			this->flipSwitchPressed = false;
            		}
HXLINE(  48)		switch((int)(this->flipState)){
            			case (int)0: {
HXLINE(  50)				this->parentObject->flipX = false;
HXLINE(  51)				this->parentObject->flipY = false;
            			}
            			break;
            			case (int)1: {
HXLINE(  54)				this->parentObject->flipX = true;
HXLINE(  55)				this->parentObject->flipY = false;
            			}
            			break;
            			case (int)2: {
HXLINE(  58)				this->parentObject->flipX = false;
HXLINE(  59)				this->parentObject->flipY = true;
            			}
            			break;
            			case (int)3: {
HXLINE(  62)				this->parentObject->flipX = true;
HXLINE(  63)				this->parentObject->flipY = true;
            			}
            			break;
            		}
HXLINE(  67)		if (::Main_obj::input->checkKey(87)) {
HXLINE(  67)			this->up = true;
            		}
            		else {
HXLINE(  67)			this->up = false;
            		}
HXLINE(  68)		if (::Main_obj::input->checkKey(83)) {
HXLINE(  68)			this->down = true;
            		}
            		else {
HXLINE(  68)			this->down = false;
            		}
HXLINE(  69)		if (::Main_obj::input->checkKey(68)) {
HXLINE(  69)			this->right = true;
            		}
            		else {
HXLINE(  69)			this->right = false;
            		}
HXLINE(  70)		if (::Main_obj::input->checkKey(65)) {
HXLINE(  70)			this->left = true;
            		}
            		else {
HXLINE(  70)			this->left = false;
            		}
HXLINE(  72)		if (this->up) {
HXLINE(  72)			 ::openfl::geom::Point fh = this->translateVec;
HXDLIN(  72)			fh->y = (fh->y + this->movementSpeed);
            		}
HXLINE(  73)		if (this->down) {
HXLINE(  73)			 ::openfl::geom::Point fh = this->translateVec;
HXDLIN(  73)			fh->y = (fh->y - this->movementSpeed);
            		}
HXLINE(  74)		if (this->right) {
HXLINE(  74)			 ::openfl::geom::Point fh = this->translateVec;
HXDLIN(  74)			fh->x = (fh->x + this->movementSpeed);
            		}
HXLINE(  75)		if (this->left) {
HXLINE(  75)			 ::openfl::geom::Point fh = this->translateVec;
HXDLIN(  75)			fh->x = (fh->x - this->movementSpeed);
            		}
HXLINE(  77)		if ((this->translateVec->x > this->movementSpeed)) {
HXLINE(  77)			this->translateVec->x = this->movementSpeed;
            		}
            		else {
HXLINE(  78)			if ((this->translateVec->x < -(this->movementSpeed))) {
HXLINE(  78)				this->translateVec->x = -(this->movementSpeed);
            			}
            		}
HXLINE(  79)		if ((this->translateVec->y > this->movementSpeed)) {
HXLINE(  79)			this->translateVec->y = this->movementSpeed;
            		}
            		else {
HXLINE(  80)			if ((this->translateVec->y < -(this->movementSpeed))) {
HXLINE(  80)				this->translateVec->y = -(this->movementSpeed);
            			}
            		}
HXLINE(  82)		bool _hx_tmp;
HXDLIN(  82)		if (!(this->up)) {
HXLINE(  82)			_hx_tmp = !(this->down);
            		}
            		else {
HXLINE(  82)			_hx_tmp = false;
            		}
HXDLIN(  82)		if (_hx_tmp) {
HXLINE(  82)			this->translateVec->y = ( (Float)(0) );
            		}
HXLINE(  83)		bool _hx_tmp1;
HXDLIN(  83)		if (!(this->right)) {
HXLINE(  83)			_hx_tmp1 = !(this->left);
            		}
            		else {
HXLINE(  83)			_hx_tmp1 = false;
            		}
HXDLIN(  83)		if (_hx_tmp1) {
HXLINE(  83)			this->translateVec->x = ( (Float)(0) );
            		}
HXLINE(  86)		this->parentObject->translate(this->translateVec,true);
HXLINE(  87)		 ::GameObject _hx_tmp2 = this->parentObject;
HXDLIN(  87)		_hx_tmp2->translate(this->point(1,0),true);
            	}



::hx::ObjectPtr< PlayerController_obj > PlayerController_obj::__new() {
	::hx::ObjectPtr< PlayerController_obj > __this = new PlayerController_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PlayerController_obj > PlayerController_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PlayerController_obj *__this = (PlayerController_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayerController_obj), true, "PlayerController"));
	*(void **)__this = PlayerController_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PlayerController_obj::PlayerController_obj()
{
}

void PlayerController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerController);
	HX_MARK_MEMBER_NAME(flipState,"flipState");
	HX_MARK_MEMBER_NAME(flipSwitchPressed,"flipSwitchPressed");
	HX_MARK_MEMBER_NAME(up,"up");
	HX_MARK_MEMBER_NAME(down,"down");
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(movementSpeed,"movementSpeed");
	HX_MARK_MEMBER_NAME(translateVec,"translateVec");
	 ::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayerController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(flipState,"flipState");
	HX_VISIT_MEMBER_NAME(flipSwitchPressed,"flipSwitchPressed");
	HX_VISIT_MEMBER_NAME(up,"up");
	HX_VISIT_MEMBER_NAME(down,"down");
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(movementSpeed,"movementSpeed");
	HX_VISIT_MEMBER_NAME(translateVec,"translateVec");
	 ::Component_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PlayerController_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { return ::hx::Val( up ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"down") ) { return ::hx::Val( down ); }
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( right ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"flipState") ) { return ::hx::Val( flipState ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"translateVec") ) { return ::hx::Val( translateVec ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"movementSpeed") ) { return ::hx::Val( movementSpeed ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"flipSwitchPressed") ) { return ::hx::Val( flipSwitchPressed ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlayerController_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { up=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"down") ) { down=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"flipState") ) { flipState=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"translateVec") ) { translateVec=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"movementSpeed") ) { movementSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"flipSwitchPressed") ) { flipSwitchPressed=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayerController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("flipState",24,00,f7,1a));
	outFields->push(HX_("flipSwitchPressed",21,ec,ee,7d));
	outFields->push(HX_("up",5b,66,00,00));
	outFields->push(HX_("down",62,f8,6d,42));
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("right",dc,0b,64,e9));
	outFields->push(HX_("movementSpeed",d8,57,c3,2e));
	outFields->push(HX_("translateVec",a6,c7,90,c0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayerController_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(PlayerController_obj,flipState),HX_("flipState",24,00,f7,1a)},
	{::hx::fsBool,(int)offsetof(PlayerController_obj,flipSwitchPressed),HX_("flipSwitchPressed",21,ec,ee,7d)},
	{::hx::fsBool,(int)offsetof(PlayerController_obj,up),HX_("up",5b,66,00,00)},
	{::hx::fsBool,(int)offsetof(PlayerController_obj,down),HX_("down",62,f8,6d,42)},
	{::hx::fsBool,(int)offsetof(PlayerController_obj,left),HX_("left",07,08,b0,47)},
	{::hx::fsBool,(int)offsetof(PlayerController_obj,right),HX_("right",dc,0b,64,e9)},
	{::hx::fsFloat,(int)offsetof(PlayerController_obj,movementSpeed),HX_("movementSpeed",d8,57,c3,2e)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(PlayerController_obj,translateVec),HX_("translateVec",a6,c7,90,c0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PlayerController_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayerController_obj_sMemberFields[] = {
	HX_("flipState",24,00,f7,1a),
	HX_("flipSwitchPressed",21,ec,ee,7d),
	HX_("up",5b,66,00,00),
	HX_("down",62,f8,6d,42),
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	HX_("movementSpeed",d8,57,c3,2e),
	HX_("translateVec",a6,c7,90,c0),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class PlayerController_obj::__mClass;

void PlayerController_obj::__register()
{
	PlayerController_obj _hx_dummy;
	PlayerController_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayerController",7d,c7,dd,23);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayerController_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayerController_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayerController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayerController_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

