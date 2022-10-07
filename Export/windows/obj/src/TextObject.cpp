#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Behaviour
#include <Behaviour.h>
#endif
#ifndef INCLUDED_Camera
#include <Camera.h>
#endif
#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_GameObject
#include <GameObject.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_ObjectType
#include <ObjectType.h>
#endif
#ifndef INCLUDED_TextObject
#include <TextObject.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b340a45644fc1ab4_9_new,"TextObject","new",0x4920ca5e,"TextObject.new","TextObject.hx",9,0x42e92ad2)
HX_LOCAL_STACK_FRAME(_hx_pos_b340a45644fc1ab4_36_setText,"TextObject","setText",0xb782de6d,"TextObject.setText","TextObject.hx",36,0x42e92ad2)
HX_LOCAL_STACK_FRAME(_hx_pos_b340a45644fc1ab4_41_update,"TextObject","update",0x03be5ecb,"TextObject.update","TextObject.hx",41,0x42e92ad2)

void TextObject_obj::__construct(::String __o__hx___name,::hx::Null< bool >  __o__isVisible,::String __o_text,::String __o_font,::hx::Null< int >  __o__size, ::Dynamic __o_align,::hx::Null< int >  __o_color){
            		::String _hx___name = __o__hx___name;
            		if (::hx::IsNull(__o__hx___name)) _hx___name = HX_("",00,00,00,00);
            		bool _isVisible = __o__isVisible.Default(true);
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            		::String font = __o_font;
            		if (::hx::IsNull(__o_font)) font = HX_("Arial",23,09,b6,b8);
            		int _size = __o__size.Default(10);
            		 ::Dynamic align = __o_align;
            		if (::hx::IsNull(__o_align)) align = 1;
            		int color = __o_color.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_b340a45644fc1ab4_9_new)
HXLINE(  40)		this->displaySize = 0;
HXLINE(  15)		this->size = 10;
HXLINE(  14)		this->textFormat = null();
HXLINE(  13)		this->textField = null();
HXLINE(  19)		super::__construct(_hx___name,_isVisible,null());
HXLINE(  21)		this->textField =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  22)		this->textField->set_text(text);
HXLINE(  23)		this->size = _size;
HXLINE(  24)		this->textFormat =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,font,this->size,color,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  25)		this->textField->setTextFormat(this->textFormat,null(),null());
HXLINE(  26)		this->textField->set_autoSize(align);
HXLINE(  28)		this->addChild(this->textField);
HXLINE(  30)		this->objectType = ::ObjectType_obj::TEXT_dyn();
            	}

Dynamic TextObject_obj::__CreateEmpty() { return new TextObject_obj; }

void *TextObject_obj::_hx_vtable = 0;

Dynamic TextObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextObject_obj > _hx_result = new TextObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool TextObject_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x66298f31) {
			if (inClassId<=(int)0x5aa4262c) {
				return inClassId==(int)0x4af7dd8e || inClassId==(int)0x5aa4262c;
			} else {
				return inClassId==(int)0x66298f31;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void TextObject_obj::setText(::String text){
            	HX_STACKFRAME(&_hx_pos_b340a45644fc1ab4_36_setText)
HXDLIN(  36)		this->textField->set_text(text);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextObject_obj,setText,(void))

void TextObject_obj::update( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_b340a45644fc1ab4_41_update)
HXLINE(  43)		Float _hx_tmp = (( (Float)(this->size) ) / ::Main_obj::game->mainCamera->fov->y);
HXDLIN(  43)		this->displaySize = ::Math_obj::round(((_hx_tmp * ( (Float)(::openfl::Lib_obj::get_current()->stage->window->_hx___height) )) / ( (Float)(50) )));
HXLINE(  44)		this->textFormat->size = this->displaySize;
HXLINE(  45)		this->textField->setTextFormat(this->textFormat,null(),null());
            	}



::hx::ObjectPtr< TextObject_obj > TextObject_obj::__new(::String __o__hx___name,::hx::Null< bool >  __o__isVisible,::String __o_text,::String __o_font,::hx::Null< int >  __o__size, ::Dynamic __o_align,::hx::Null< int >  __o_color) {
	::hx::ObjectPtr< TextObject_obj > __this = new TextObject_obj();
	__this->__construct(__o__hx___name,__o__isVisible,__o_text,__o_font,__o__size,__o_align,__o_color);
	return __this;
}

::hx::ObjectPtr< TextObject_obj > TextObject_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o__hx___name,::hx::Null< bool >  __o__isVisible,::String __o_text,::String __o_font,::hx::Null< int >  __o__size, ::Dynamic __o_align,::hx::Null< int >  __o_color) {
	TextObject_obj *__this = (TextObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextObject_obj), true, "TextObject"));
	*(void **)__this = TextObject_obj::_hx_vtable;
	__this->__construct(__o__hx___name,__o__isVisible,__o_text,__o_font,__o__size,__o_align,__o_color);
	return __this;
}

TextObject_obj::TextObject_obj()
{
}

void TextObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextObject);
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(textFormat,"textFormat");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(displaySize,"displaySize");
	 ::GameObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(textFormat,"textFormat");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(displaySize,"displaySize");
	 ::GameObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TextObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setText") ) { return ::hx::Val( setText_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textField") ) { return ::hx::Val( textField ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textFormat") ) { return ::hx::Val( textFormat ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displaySize") ) { return ::hx::Val( displaySize ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textFormat") ) { textFormat=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displaySize") ) { displaySize=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("textField",cd,24,81,99));
	outFields->push(HX_("textFormat",c4,0f,7f,34));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("displaySize",23,40,46,34));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextObject_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(TextObject_obj,textField),HX_("textField",cd,24,81,99)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(TextObject_obj,textFormat),HX_("textFormat",c4,0f,7f,34)},
	{::hx::fsInt,(int)offsetof(TextObject_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsInt,(int)offsetof(TextObject_obj,displaySize),HX_("displaySize",23,40,46,34)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextObject_obj_sStaticStorageInfo = 0;
#endif

static ::String TextObject_obj_sMemberFields[] = {
	HX_("textField",cd,24,81,99),
	HX_("textFormat",c4,0f,7f,34),
	HX_("size",c1,a0,53,4c),
	HX_("setText",6f,0d,7e,12),
	HX_("displaySize",23,40,46,34),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class TextObject_obj::__mClass;

void TextObject_obj::__register()
{
	TextObject_obj _hx_dummy;
	TextObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TextObject",6c,03,e1,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

