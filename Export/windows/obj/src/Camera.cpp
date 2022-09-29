#include <hxcpp.h>

#ifndef INCLUDED_BackgroundType
#include <BackgroundType.h>
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
#ifndef INCLUDED_ImageBackgroundMoveType
#include <ImageBackgroundMoveType.h>
#endif
#ifndef INCLUDED_Input
#include <Input.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_ObjectType
#include <ObjectType.h>
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
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7072c536837f8d29_9_new,"Camera","new",0x90b1a237,"Camera.new","Camera.hx",9,0xdbe9d119)
HX_LOCAL_STACK_FRAME(_hx_pos_7072c536837f8d29_36_update,"Camera","update",0x827d3492,"Camera.update","Camera.hx",36,0xdbe9d119)
HX_LOCAL_STACK_FRAME(_hx_pos_7072c536837f8d29_52_updateObjectsInDisplay,"Camera","updateObjectsInDisplay",0x597bfe1b,"Camera.updateObjectsInDisplay","Camera.hx",52,0xdbe9d119)
HX_LOCAL_STACK_FRAME(_hx_pos_7072c536837f8d29_156_updateBackground,"Camera","updateBackground",0x2a2df720,"Camera.updateBackground","Camera.hx",156,0xdbe9d119)

void Camera_obj::__construct(Float fovX,Float fovY,bool _enabled,::String _hx___name, ::BackgroundType _bgType){
            	HX_GC_STACKFRAME(&_hx_pos_7072c536837f8d29_9_new)
HXLINE( 153)		this->bg = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  22)		this->ibmType = ::ImageBackgroundMoveType_obj::BOTH_dyn();
HXLINE(  21)		this->imageParallax = ::Array_obj< Float >::__new(0);
HXLINE(  19)		this->bgImage = ::Array_obj< ::String >::__new(0);
HXLINE(  18)		this->bgColor2 = 0;
HXLINE(  17)		this->bgColor1 = 0;
HXLINE(  16)		this->bgType = ::BackgroundType_obj::SOLID_dyn();
HXLINE(  13)		this->displayEnableDistance = ((Float)2);
HXLINE(  11)		this->objectsInDisplay = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  26)		super::__construct(_hx___name,false,null());
HXLINE(  28)		this->isVisible = false;
HXLINE(  30)		this->fov =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,fovX,fovY);
HXLINE(  32)		this->bgType = _bgType;
            	}

Dynamic Camera_obj::__CreateEmpty() { return new Camera_obj; }

void *Camera_obj::_hx_vtable = 0;

Dynamic Camera_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Camera_obj > _hx_result = new Camera_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Camera_obj::_hx_isInstanceOf(int inClassId) {
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
			if (inClassId<=(int)0x4d6b7d85) {
				return inClassId==(int)0x4af7dd8e || inClassId==(int)0x4d6b7d85;
			} else {
				return inClassId==(int)0x66298f31;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Camera_obj::update( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_7072c536837f8d29_36_update)
HXLINE(  38)		this->updateObjectsInDisplay();
HXLINE(  39)		this->updateBackground();
HXLINE(  41)		if (::Main_obj::input->checkKey(73)) {
HXLINE(  42)			this->translate( ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,10),true);
            		}
HXLINE(  43)		if (::Main_obj::input->checkKey(75)) {
HXLINE(  44)			this->translate( ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,-10),true);
            		}
HXLINE(  45)		if (::Main_obj::input->checkKey(76)) {
HXLINE(  46)			this->translate( ::openfl::geom::Point_obj::__alloc( HX_CTX ,10,0),true);
            		}
HXLINE(  47)		if (::Main_obj::input->checkKey(74)) {
HXLINE(  48)			this->translate( ::openfl::geom::Point_obj::__alloc( HX_CTX ,-10,0),true);
            		}
            	}


void Camera_obj::updateObjectsInDisplay(){
            	HX_STACKFRAME(&_hx_pos_7072c536837f8d29_52_updateObjectsInDisplay)
HXLINE(  54)		{
HXLINE(  54)			int _g = 0;
HXDLIN(  54)			int _g1 = ::Main_obj::game->activeObjects->length;
HXDLIN(  54)			while((_g < _g1)){
HXLINE(  54)				_g = (_g + 1);
HXDLIN(  54)				int object = (_g - 1);
HXLINE(  56)				if (::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >()->isVisible) {
HXLINE(  58)					bool left = false;
HXLINE(  59)					bool right = false;
HXLINE(  60)					bool up = false;
HXLINE(  61)					bool down = false;
HXLINE(  63)					if (((::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >()->worldPosition->x + ::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >()->worldWidth) > ((this->worldPosition->x - this->fov->x) - this->displayEnableDistance))) {
HXLINE(  63)						left = true;
            					}
            					else {
HXLINE(  63)						left = false;
            					}
HXLINE(  64)					if (((::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >()->worldPosition->x - ::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >()->worldWidth) < ((this->worldPosition->x + this->fov->x) + this->displayEnableDistance))) {
HXLINE(  64)						right = true;
            					}
            					else {
HXLINE(  64)						right = false;
            					}
HXLINE(  65)					if (((::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >()->worldPosition->y + ::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >()->worldHeight) > ((this->worldPosition->y - this->fov->y) - this->displayEnableDistance))) {
HXLINE(  65)						down = true;
            					}
            					else {
HXLINE(  65)						down = false;
            					}
HXLINE(  66)					if (((::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >()->worldPosition->y - ::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >()->worldHeight) < ((this->worldPosition->y + this->fov->y) + this->displayEnableDistance))) {
HXLINE(  66)						up = true;
            					}
            					else {
HXLINE(  66)						up = false;
            					}
HXLINE(  68)					bool inCameraView = false;
HXLINE(  70)					bool _hx_tmp;
HXDLIN(  70)					bool _hx_tmp1;
HXDLIN(  70)					bool _hx_tmp2;
HXDLIN(  70)					if (left) {
HXLINE(  70)						_hx_tmp2 = right;
            					}
            					else {
HXLINE(  70)						_hx_tmp2 = false;
            					}
HXDLIN(  70)					if (_hx_tmp2) {
HXLINE(  70)						_hx_tmp1 = up;
            					}
            					else {
HXLINE(  70)						_hx_tmp1 = false;
            					}
HXDLIN(  70)					if (_hx_tmp1) {
HXLINE(  70)						_hx_tmp = down;
            					}
            					else {
HXLINE(  70)						_hx_tmp = false;
            					}
HXDLIN(  70)					if (_hx_tmp) {
HXLINE(  70)						inCameraView = true;
            					}
HXLINE(  72)					if (inCameraView) {
HXLINE(  73)						if (!(this->objectsInDisplay->contains(::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >()))) {
HXLINE(  74)							this->objectsInDisplay->push(::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >());
            						}
            					}
HXLINE(  76)					if (!(inCameraView)) {
HXLINE(  78)						this->objectsInDisplay->remove(::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >());
HXLINE(  79)						::Main_obj::game->removeChild(::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >());
            					}
            				}
            				else {
HXLINE(  85)					this->objectsInDisplay->remove(::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >());
HXLINE(  86)					::Main_obj::game->removeChild(::Main_obj::game->activeObjects->__get(object).StaticCast<  ::GameObject >());
            				}
            			}
            		}
HXLINE(  92)		{
HXLINE(  92)			int _g2 = 0;
HXDLIN(  92)			int _g3 = this->objectsInDisplay->length;
HXDLIN(  92)			while((_g2 < _g3)){
HXLINE(  92)				_g2 = (_g2 + 1);
HXDLIN(  92)				int d = (_g2 - 1);
HXLINE(  94)				{
HXLINE(  94)					int _g = ::Main_obj::game->lowestRenderLayer;
HXDLIN(  94)					int _g1 = (::Main_obj::game->highestRenderLayer + 1);
HXDLIN(  94)					while((_g < _g1)){
HXLINE(  94)						_g = (_g + 1);
HXDLIN(  94)						int rLayer = (_g - 1);
HXLINE(  96)						if (!(::Main_obj::game->contains(this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()))) {
HXLINE(  98)							if ((this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->renderLayer == rLayer)) {
HXLINE(  98)								::Main_obj::game->addChild(this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >());
            							}
            						}
HXLINE( 102)						{
HXLINE( 102)							int _g1 = 0;
HXDLIN( 102)							int _g2 = this->objectsInDisplay->length;
HXDLIN( 102)							while((_g1 < _g2)){
HXLINE( 102)								_g1 = (_g1 + 1);
HXDLIN( 102)								int _d = (_g1 - 1);
HXLINE( 104)								bool _hx_tmp;
HXDLIN( 104)								if ((this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->renderLayer > this->objectsInDisplay->__get(_d).StaticCast<  ::GameObject >()->renderLayer)) {
HXLINE( 104)									int _hx_tmp1 = ::Main_obj::game->getChildIndex(this->objectsInDisplay->__get(_d).StaticCast<  ::GameObject >());
HXDLIN( 104)									_hx_tmp = (_hx_tmp1 > ::Main_obj::game->getChildIndex(this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()));
            								}
            								else {
HXLINE( 104)									_hx_tmp = false;
            								}
HXDLIN( 104)								if (_hx_tmp) {
HXLINE( 105)									::Main_obj::game->removeChild(this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >());
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 113)		{
HXLINE( 113)			int _g4 = 0;
HXDLIN( 113)			int _g5 = this->objectsInDisplay->length;
HXDLIN( 113)			while((_g4 < _g5)){
HXLINE( 113)				_g4 = (_g4 + 1);
HXDLIN( 113)				int d = (_g4 - 1);
HXLINE( 115)				if (::hx::IsPointerEq( this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->objectType,::ObjectType_obj::SIMPLE_dyn() )) {
HXLINE( 117)					if (!(this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->flipX)) {
HXLINE( 119)						 ::GameObject _hx_tmp = this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >();
HXDLIN( 119)						Float _hx_tmp1 = (((this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->worldPosition->x - this->worldPosition->x) / this->fov->x) / ( (Float)(2) ));
HXDLIN( 119)						Float _hx_tmp2 = (_hx_tmp1 * ( (Float)(::openfl::Lib_obj::get_current()->stage->window->_hx___width) ));
HXDLIN( 119)						Float _hx_tmp3 = (( (Float)(::openfl::Lib_obj::get_current()->stage->window->_hx___width) ) / ( (Float)(2) ));
HXDLIN( 119)						Float _hx_tmp4 = this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->spriteImg->get_width();
HXDLIN( 119)						_hx_tmp->set_x((_hx_tmp2 + (_hx_tmp3 - ((_hx_tmp4 * this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->get_scaleX()) / ( (Float)(2) )))));
HXLINE( 120)						 ::openfl::display::Bitmap _hx_tmp5 = this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->spriteImg;
HXDLIN( 120)						Float _hx_tmp6 = (this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->worldWidth / this->fov->x);
HXDLIN( 120)						_hx_tmp5->set_width((_hx_tmp6 * ( (Float)(::openfl::Lib_obj::get_current()->stage->window->_hx___width) )));
            					}
            					else {
HXLINE( 124)						 ::GameObject _hx_tmp = this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >();
HXDLIN( 124)						Float _hx_tmp1 = (((this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->worldPosition->x - this->worldPosition->x) / this->fov->x) / ( (Float)(2) ));
HXDLIN( 124)						Float _hx_tmp2 = (_hx_tmp1 * ( (Float)(::openfl::Lib_obj::get_current()->stage->window->_hx___width) ));
HXDLIN( 124)						Float _hx_tmp3 = (( (Float)(::openfl::Lib_obj::get_current()->stage->window->_hx___width) ) / ( (Float)(2) ));
HXDLIN( 124)						Float _hx_tmp4 = this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->spriteImg->get_width();
HXDLIN( 124)						_hx_tmp->set_x((_hx_tmp2 + (_hx_tmp3 + ((_hx_tmp4 * this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->get_scaleX()) / ( (Float)(2) )))));
HXLINE( 125)						 ::openfl::display::Bitmap _hx_tmp5 = this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->spriteImg;
HXDLIN( 125)						Float _hx_tmp6 = (this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->worldWidth / this->fov->x);
HXDLIN( 125)						_hx_tmp5->set_width(-((_hx_tmp6 * ( (Float)(::openfl::Lib_obj::get_current()->stage->window->_hx___width) ))));
            					}
HXLINE( 129)					if (!(this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->flipY)) {
HXLINE( 131)						 ::GameObject _hx_tmp = this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >();
HXDLIN( 131)						Float _hx_tmp1 = ((((this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->worldPosition->y - this->worldPosition->y) * ( (Float)(-1) )) / this->fov->y) / ( (Float)(2) ));
HXDLIN( 131)						Float _hx_tmp2 = (_hx_tmp1 * ( (Float)(::openfl::Lib_obj::get_current()->stage->window->_hx___height) ));
HXDLIN( 131)						Float _hx_tmp3 = (( (Float)(::openfl::Lib_obj::get_current()->stage->window->_hx___height) ) / ( (Float)(2) ));
HXDLIN( 131)						Float _hx_tmp4 = this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->spriteImg->get_height();
HXDLIN( 131)						_hx_tmp->set_y((_hx_tmp2 + (_hx_tmp3 - ((_hx_tmp4 * this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->get_scaleY()) / ( (Float)(2) )))));
HXLINE( 132)						 ::openfl::display::Bitmap _hx_tmp5 = this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->spriteImg;
HXDLIN( 132)						Float _hx_tmp6 = (this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->worldHeight / this->fov->y);
HXDLIN( 132)						_hx_tmp5->set_height((_hx_tmp6 * ( (Float)(::openfl::Lib_obj::get_current()->stage->window->_hx___height) )));
            					}
            					else {
HXLINE( 136)						 ::GameObject _hx_tmp = this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >();
HXDLIN( 136)						Float _hx_tmp1 = ((((this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->worldPosition->y - this->worldPosition->y) * ( (Float)(-1) )) / this->fov->y) / ( (Float)(2) ));
HXDLIN( 136)						Float _hx_tmp2 = (_hx_tmp1 * ( (Float)(::openfl::Lib_obj::get_current()->stage->window->_hx___height) ));
HXDLIN( 136)						Float _hx_tmp3 = (( (Float)(::openfl::Lib_obj::get_current()->stage->window->_hx___height) ) / ( (Float)(2) ));
HXDLIN( 136)						Float _hx_tmp4 = this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->spriteImg->get_height();
HXDLIN( 136)						_hx_tmp->set_y((_hx_tmp2 + (_hx_tmp3 + ((_hx_tmp4 * this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->get_scaleY()) / ( (Float)(2) )))));
HXLINE( 137)						 ::openfl::display::Bitmap _hx_tmp5 = this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->spriteImg;
HXDLIN( 137)						Float _hx_tmp6 = (this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->worldHeight / this->fov->y);
HXDLIN( 137)						_hx_tmp5->set_height(-((_hx_tmp6 * ( (Float)(::openfl::Lib_obj::get_current()->stage->window->_hx___height) ))));
            					}
            				}
            				else {
HXLINE( 142)					if (::hx::IsPointerEq( this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->objectType,::ObjectType_obj::TEXT_dyn() )) {
HXLINE( 144)						 ::GameObject _hx_tmp = this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >();
HXDLIN( 144)						Float _hx_tmp1 = (((this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->worldPosition->x - this->worldPosition->x) / this->fov->x) / ( (Float)(2) ));
HXDLIN( 144)						Float _hx_tmp2 = (_hx_tmp1 * ( (Float)(::openfl::Lib_obj::get_current()->stage->window->_hx___width) ));
HXDLIN( 144)						_hx_tmp->set_x((_hx_tmp2 + (( (Float)(::openfl::Lib_obj::get_current()->stage->window->_hx___width) ) / ( (Float)(2) ))));
HXLINE( 145)						 ::GameObject _hx_tmp3 = this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >();
HXDLIN( 145)						Float _hx_tmp4 = ((((this->objectsInDisplay->__get(d).StaticCast<  ::GameObject >()->worldPosition->y - this->worldPosition->y) * ( (Float)(-1) )) / this->fov->y) / ( (Float)(2) ));
HXDLIN( 145)						Float _hx_tmp5 = (_hx_tmp4 * ( (Float)(::openfl::Lib_obj::get_current()->stage->window->_hx___height) ));
HXDLIN( 145)						_hx_tmp3->set_y((_hx_tmp5 + (( (Float)(::openfl::Lib_obj::get_current()->stage->window->_hx___height) ) / ( (Float)(2) ))));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,updateObjectsInDisplay,(void))

void Camera_obj::updateBackground(){
            	HX_GC_STACKFRAME(&_hx_pos_7072c536837f8d29_156_updateBackground)
HXDLIN( 156)		switch((int)(this->bgType->_hx_getIndex())){
            			case (int)0: {
HXLINE( 160)				::openfl::Lib_obj::get_current()->stage->set_color(this->bgColor1);
            			}
            			break;
            			case (int)1: {
HXLINE( 168)				if ((this->bg->length < this->bgImage->length)) {
HXLINE( 170)					int _g = this->bg->length;
HXDLIN( 170)					int _g1 = this->bgImage->length;
HXDLIN( 170)					while((_g < _g1)){
HXLINE( 170)						_g = (_g + 1);
HXDLIN( 170)						int i = (_g - 1);
HXLINE( 172)						 ::GameObject bgParent =  ::GameObject_obj::__alloc( HX_CTX ,(HX_("bgParent",cf,f0,84,c2) + i),false,null());
HXLINE( 174)						 ::GameObject g =  ::GameObject_obj::__alloc( HX_CTX ,(HX_("bg",c5,55,00,00) + i),true,this->bgImage->__get(i));
HXLINE( 175)						int _hx_tmp = (-(g->spriteImg->get_bitmapData()->width) * 2);
HXDLIN( 175)						g->translate( ::openfl::geom::Point_obj::__alloc( HX_CTX ,(( (Float)(_hx_tmp) ) / ( (Float)(::Main_obj::game->worldScale) )),0),null());
HXLINE( 176)						g->addToActiveObjects();
HXLINE( 177)						g->renderLayer = -(i);
HXLINE( 179)						 ::GameObject gDuplicate =  ::GameObject_obj::__alloc( HX_CTX ,((HX_("bg",c5,55,00,00) + i) + HX_("_Duplicate",2c,7d,8c,9e)),true,this->bgImage->__get(i));
HXLINE( 180)						gDuplicate->addToActiveObjects();
HXLINE( 181)						gDuplicate->renderLayer = -(i);
HXLINE( 183)						 ::GameObject gDuplicate2 =  ::GameObject_obj::__alloc( HX_CTX ,((HX_("bg",c5,55,00,00) + i) + HX_("_Duplicate2",86,09,61,1c)),true,this->bgImage->__get(i));
HXLINE( 184)						int _hx_tmp1 = (gDuplicate2->spriteImg->get_bitmapData()->width * 2);
HXDLIN( 184)						gDuplicate2->translate( ::openfl::geom::Point_obj::__alloc( HX_CTX ,(( (Float)(_hx_tmp1) ) / ( (Float)(::Main_obj::game->worldScale) )),0),null());
HXLINE( 185)						gDuplicate2->addToActiveObjects();
HXLINE( 186)						gDuplicate2->renderLayer = -(i);
HXLINE( 188)						g->moveWithParent = true;
HXLINE( 189)						gDuplicate->moveWithParent = true;
HXLINE( 190)						gDuplicate2->moveWithParent = true;
HXLINE( 192)						bgParent->addChildObject(::Array_obj< ::Dynamic>::__new(3)->init(0,g)->init(1,gDuplicate)->init(2,gDuplicate2));
HXLINE( 193)						bgParent->addToActiveObjects();
HXLINE( 195)						this->bg->push(bgParent);
            					}
            				}
HXLINE( 201)				{
HXLINE( 201)					int _g = 0;
HXDLIN( 201)					int _g1 = this->bg->length;
HXDLIN( 201)					while((_g < _g1)){
HXLINE( 201)						_g = (_g + 1);
HXDLIN( 201)						int i = (_g - 1);
HXLINE( 202)						this->addChildObject(::Array_obj< ::Dynamic>::__new(1)->init(0,this->bg->__get(i).StaticCast<  ::GameObject >()));
            					}
            				}
HXLINE( 204)				{
HXLINE( 204)					int _g2 = 0;
HXDLIN( 204)					int _g3 = this->bg->length;
HXDLIN( 204)					while((_g2 < _g3)){
HXLINE( 204)						_g2 = (_g2 + 1);
HXDLIN( 204)						int i = (_g2 - 1);
HXLINE( 206)						{
HXLINE( 206)							int _g = 0;
HXDLIN( 206)							int _g1 = this->bg->__get(i).StaticCast<  ::GameObject >()->children->length;
HXDLIN( 206)							while((_g < _g1)){
HXLINE( 206)								_g = (_g + 1);
HXDLIN( 206)								int _i = (_g - 1);
HXLINE( 208)								bool _hx_tmp;
HXDLIN( 208)								if (::hx::IsPointerNotEq( this->ibmType,::ImageBackgroundMoveType_obj::HORIZONTAL_dyn() )) {
HXLINE( 208)									_hx_tmp = ::hx::IsPointerEq( this->ibmType,::ImageBackgroundMoveType_obj::BOTH_dyn() );
            								}
            								else {
HXLINE( 208)									_hx_tmp = true;
            								}
HXDLIN( 208)								if (_hx_tmp) {
HXLINE( 210)									 ::GameObject _hx_tmp = this->bg->__get(i).StaticCast<  ::GameObject >()->children->__get(_i).StaticCast<  ::GameObject >();
HXDLIN( 210)									_hx_tmp->translate( ::openfl::geom::Point_obj::__alloc( HX_CTX ,(-(this->positionDelta->x) * this->imageParallax->__get(i)),0),null());
HXLINE( 212)									Float _hx_tmp1 = this->bg->__get(i).StaticCast<  ::GameObject >()->children->__get(_i).StaticCast<  ::GameObject >()->localPosition->x;
HXDLIN( 212)									int _hx_tmp2 = (this->bg->__get(i).StaticCast<  ::GameObject >()->children->__get(_i).StaticCast<  ::GameObject >()->spriteImg->get_bitmapData()->width * 2);
HXDLIN( 212)									if ((_hx_tmp1 > (( (Float)(_hx_tmp2) ) / ( (Float)(::Main_obj::game->worldScale) )))) {
HXLINE( 213)										 ::GameObject _hx_tmp = this->bg->__get(i).StaticCast<  ::GameObject >()->children->__get(_i).StaticCast<  ::GameObject >();
HXDLIN( 213)										int _hx_tmp1 = (-(this->bg->__get(i).StaticCast<  ::GameObject >()->children->__get(_i).StaticCast<  ::GameObject >()->spriteImg->get_bitmapData()->width) * 4);
HXDLIN( 213)										_hx_tmp->translate( ::openfl::geom::Point_obj::__alloc( HX_CTX ,(( (Float)(_hx_tmp1) ) / ( (Float)(::Main_obj::game->worldScale) )),0),null());
            									}
HXLINE( 215)									Float _hx_tmp3 = this->bg->__get(i).StaticCast<  ::GameObject >()->children->__get(_i).StaticCast<  ::GameObject >()->localPosition->x;
HXDLIN( 215)									int _hx_tmp4 = (-(this->bg->__get(i).StaticCast<  ::GameObject >()->children->__get(_i).StaticCast<  ::GameObject >()->spriteImg->get_bitmapData()->width) * 2);
HXDLIN( 215)									if ((_hx_tmp3 < (( (Float)(_hx_tmp4) ) / ( (Float)(::Main_obj::game->worldScale) )))) {
HXLINE( 216)										 ::GameObject _hx_tmp = this->bg->__get(i).StaticCast<  ::GameObject >()->children->__get(_i).StaticCast<  ::GameObject >();
HXDLIN( 216)										int _hx_tmp1 = (this->bg->__get(i).StaticCast<  ::GameObject >()->children->__get(_i).StaticCast<  ::GameObject >()->spriteImg->get_bitmapData()->width * 4);
HXDLIN( 216)										_hx_tmp->translate( ::openfl::geom::Point_obj::__alloc( HX_CTX ,(( (Float)(_hx_tmp1) ) / ( (Float)(::Main_obj::game->worldScale) )),0),null());
            									}
            								}
HXLINE( 220)								bool _hx_tmp1;
HXDLIN( 220)								if (::hx::IsPointerNotEq( this->ibmType,::ImageBackgroundMoveType_obj::VERTICAL_dyn() )) {
HXLINE( 220)									_hx_tmp1 = ::hx::IsPointerEq( this->ibmType,::ImageBackgroundMoveType_obj::BOTH_dyn() );
            								}
            								else {
HXLINE( 220)									_hx_tmp1 = true;
            								}
HXDLIN( 220)								if (_hx_tmp1) {
HXLINE( 222)									 ::GameObject _hx_tmp = this->bg->__get(i).StaticCast<  ::GameObject >()->children->__get(_i).StaticCast<  ::GameObject >();
HXDLIN( 222)									_hx_tmp->translate( ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,(-(this->positionDelta->y) * this->imageParallax->__get(i))),null());
HXLINE( 224)									Float _hx_tmp1 = this->bg->__get(i).StaticCast<  ::GameObject >()->children->__get(_i).StaticCast<  ::GameObject >()->localPosition->y;
HXDLIN( 224)									int _hx_tmp2 = (this->bg->__get(i).StaticCast<  ::GameObject >()->children->__get(_i).StaticCast<  ::GameObject >()->spriteImg->get_bitmapData()->width * 2);
HXDLIN( 224)									if ((_hx_tmp1 > (( (Float)(_hx_tmp2) ) / ( (Float)(::Main_obj::game->worldScale) )))) {
HXLINE( 225)										 ::GameObject _hx_tmp = this->bg->__get(i).StaticCast<  ::GameObject >()->children->__get(_i).StaticCast<  ::GameObject >();
HXDLIN( 225)										int _hx_tmp1 = (-(this->bg->__get(i).StaticCast<  ::GameObject >()->children->__get(_i).StaticCast<  ::GameObject >()->spriteImg->get_bitmapData()->width) * 4);
HXDLIN( 225)										_hx_tmp->translate( ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,(( (Float)(_hx_tmp1) ) / ( (Float)(::Main_obj::game->worldScale) ))),null());
            									}
HXLINE( 227)									Float _hx_tmp3 = this->bg->__get(i).StaticCast<  ::GameObject >()->children->__get(_i).StaticCast<  ::GameObject >()->localPosition->y;
HXDLIN( 227)									int _hx_tmp4 = (-(this->bg->__get(i).StaticCast<  ::GameObject >()->children->__get(_i).StaticCast<  ::GameObject >()->spriteImg->get_bitmapData()->width) * 2);
HXDLIN( 227)									if ((_hx_tmp3 < (( (Float)(_hx_tmp4) ) / ( (Float)(::Main_obj::game->worldScale) )))) {
HXLINE( 228)										 ::GameObject _hx_tmp = this->bg->__get(i).StaticCast<  ::GameObject >()->children->__get(_i).StaticCast<  ::GameObject >();
HXDLIN( 228)										int _hx_tmp1 = (this->bg->__get(i).StaticCast<  ::GameObject >()->children->__get(_i).StaticCast<  ::GameObject >()->spriteImg->get_bitmapData()->width * 4);
HXDLIN( 228)										_hx_tmp->translate( ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,(( (Float)(_hx_tmp1) ) / ( (Float)(::Main_obj::game->worldScale) ))),null());
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 164)				return;
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,updateBackground,(void))


::hx::ObjectPtr< Camera_obj > Camera_obj::__new(Float fovX,Float fovY,bool _enabled,::String _hx___name, ::BackgroundType _bgType) {
	::hx::ObjectPtr< Camera_obj > __this = new Camera_obj();
	__this->__construct(fovX,fovY,_enabled,_hx___name,_bgType);
	return __this;
}

::hx::ObjectPtr< Camera_obj > Camera_obj::__alloc(::hx::Ctx *_hx_ctx,Float fovX,Float fovY,bool _enabled,::String _hx___name, ::BackgroundType _bgType) {
	Camera_obj *__this = (Camera_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Camera_obj), true, "Camera"));
	*(void **)__this = Camera_obj::_hx_vtable;
	__this->__construct(fovX,fovY,_enabled,_hx___name,_bgType);
	return __this;
}

Camera_obj::Camera_obj()
{
}

void Camera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Camera);
	HX_MARK_MEMBER_NAME(objectsInDisplay,"objectsInDisplay");
	HX_MARK_MEMBER_NAME(displayEnableDistance,"displayEnableDistance");
	HX_MARK_MEMBER_NAME(fov,"fov");
	HX_MARK_MEMBER_NAME(bgType,"bgType");
	HX_MARK_MEMBER_NAME(bgColor1,"bgColor1");
	HX_MARK_MEMBER_NAME(bgColor2,"bgColor2");
	HX_MARK_MEMBER_NAME(bgImage,"bgImage");
	HX_MARK_MEMBER_NAME(imageParallax,"imageParallax");
	HX_MARK_MEMBER_NAME(ibmType,"ibmType");
	HX_MARK_MEMBER_NAME(bg,"bg");
	 ::GameObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Camera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectsInDisplay,"objectsInDisplay");
	HX_VISIT_MEMBER_NAME(displayEnableDistance,"displayEnableDistance");
	HX_VISIT_MEMBER_NAME(fov,"fov");
	HX_VISIT_MEMBER_NAME(bgType,"bgType");
	HX_VISIT_MEMBER_NAME(bgColor1,"bgColor1");
	HX_VISIT_MEMBER_NAME(bgColor2,"bgColor2");
	HX_VISIT_MEMBER_NAME(bgImage,"bgImage");
	HX_VISIT_MEMBER_NAME(imageParallax,"imageParallax");
	HX_VISIT_MEMBER_NAME(ibmType,"ibmType");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	 ::GameObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Camera_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"fov") ) { return ::hx::Val( fov ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgType") ) { return ::hx::Val( bgType ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgImage") ) { return ::hx::Val( bgImage ); }
		if (HX_FIELD_EQ(inName,"ibmType") ) { return ::hx::Val( ibmType ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgColor1") ) { return ::hx::Val( bgColor1 ); }
		if (HX_FIELD_EQ(inName,"bgColor2") ) { return ::hx::Val( bgColor2 ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"imageParallax") ) { return ::hx::Val( imageParallax ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"objectsInDisplay") ) { return ::hx::Val( objectsInDisplay ); }
		if (HX_FIELD_EQ(inName,"updateBackground") ) { return ::hx::Val( updateBackground_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"displayEnableDistance") ) { return ::hx::Val( displayEnableDistance ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"updateObjectsInDisplay") ) { return ::hx::Val( updateObjectsInDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Camera_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"fov") ) { fov=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgType") ) { bgType=inValue.Cast<  ::BackgroundType >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgImage") ) { bgImage=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ibmType") ) { ibmType=inValue.Cast<  ::ImageBackgroundMoveType >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgColor1") ) { bgColor1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bgColor2") ) { bgColor2=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"imageParallax") ) { imageParallax=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"objectsInDisplay") ) { objectsInDisplay=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"displayEnableDistance") ) { displayEnableDistance=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Camera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("objectsInDisplay",69,29,4e,fd));
	outFields->push(HX_("displayEnableDistance",ba,26,4e,28));
	outFields->push(HX_("fov",0d,c7,4d,00));
	outFields->push(HX_("bgType",1f,3b,21,b5));
	outFields->push(HX_("bgColor1",13,b1,8d,9b));
	outFields->push(HX_("bgColor2",14,b1,8d,9b));
	outFields->push(HX_("bgImage",56,2f,90,6a));
	outFields->push(HX_("imageParallax",d2,d5,98,5d));
	outFields->push(HX_("ibmType",4e,6b,d6,37));
	outFields->push(HX_("bg",c5,55,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Camera_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Camera_obj,objectsInDisplay),HX_("objectsInDisplay",69,29,4e,fd)},
	{::hx::fsFloat,(int)offsetof(Camera_obj,displayEnableDistance),HX_("displayEnableDistance",ba,26,4e,28)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(Camera_obj,fov),HX_("fov",0d,c7,4d,00)},
	{::hx::fsObject /*  ::BackgroundType */ ,(int)offsetof(Camera_obj,bgType),HX_("bgType",1f,3b,21,b5)},
	{::hx::fsInt,(int)offsetof(Camera_obj,bgColor1),HX_("bgColor1",13,b1,8d,9b)},
	{::hx::fsInt,(int)offsetof(Camera_obj,bgColor2),HX_("bgColor2",14,b1,8d,9b)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Camera_obj,bgImage),HX_("bgImage",56,2f,90,6a)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Camera_obj,imageParallax),HX_("imageParallax",d2,d5,98,5d)},
	{::hx::fsObject /*  ::ImageBackgroundMoveType */ ,(int)offsetof(Camera_obj,ibmType),HX_("ibmType",4e,6b,d6,37)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Camera_obj,bg),HX_("bg",c5,55,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Camera_obj_sStaticStorageInfo = 0;
#endif

static ::String Camera_obj_sMemberFields[] = {
	HX_("objectsInDisplay",69,29,4e,fd),
	HX_("displayEnableDistance",ba,26,4e,28),
	HX_("fov",0d,c7,4d,00),
	HX_("bgType",1f,3b,21,b5),
	HX_("bgColor1",13,b1,8d,9b),
	HX_("bgColor2",14,b1,8d,9b),
	HX_("bgImage",56,2f,90,6a),
	HX_("imageParallax",d2,d5,98,5d),
	HX_("ibmType",4e,6b,d6,37),
	HX_("update",09,86,05,87),
	HX_("updateObjectsInDisplay",92,ed,cc,f2),
	HX_("bg",c5,55,00,00),
	HX_("updateBackground",57,63,09,70),
	::String(null()) };

::hx::Class Camera_obj::__mClass;

void Camera_obj::__register()
{
	Camera_obj _hx_dummy;
	Camera_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Camera",c5,ba,20,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Camera_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Camera_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Camera_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Camera_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

