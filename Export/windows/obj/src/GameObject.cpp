#include <hxcpp.h>

#ifndef INCLUDED_Behaviour
#include <Behaviour.h>
#endif
#ifndef INCLUDED_Collider
#include <Collider.h>
#endif
#ifndef INCLUDED_Component
#include <Component.h>
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
#ifndef INCLUDED_PhysicsBody
#include <PhysicsBody.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
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
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a8ea8d0ba79b8397_9_new,"GameObject","new",0xef0f99e3,"GameObject.new","GameObject.hx",9,0xe33972ed)
HX_LOCAL_STACK_FRAME(_hx_pos_a8ea8d0ba79b8397_70_addToActiveObjects,"GameObject","addToActiveObjects",0x553f91ef,"GameObject.addToActiveObjects","GameObject.hx",70,0xe33972ed)
HX_LOCAL_STACK_FRAME(_hx_pos_a8ea8d0ba79b8397_79_updateObject,"GameObject","updateObject",0xd52193c5,"GameObject.updateObject","GameObject.hx",79,0xe33972ed)
HX_LOCAL_STACK_FRAME(_hx_pos_a8ea8d0ba79b8397_134_addChildObject,"GameObject","addChildObject",0x8fc9b037,"GameObject.addChildObject","GameObject.hx",134,0xe33972ed)
HX_LOCAL_STACK_FRAME(_hx_pos_a8ea8d0ba79b8397_148_removeChildObject,"GameObject","removeChildObject",0xca439c5a,"GameObject.removeChildObject","GameObject.hx",148,0xe33972ed)
HX_LOCAL_STACK_FRAME(_hx_pos_a8ea8d0ba79b8397_165_translate,"GameObject","translate",0x18342511,"GameObject.translate","GameObject.hx",165,0xe33972ed)
HX_LOCAL_STACK_FRAME(_hx_pos_a8ea8d0ba79b8397_213_moveTo,"GameObject","moveTo",0xb74b9d49,"GameObject.moveTo","GameObject.hx",213,0xe33972ed)
HX_LOCAL_STACK_FRAME(_hx_pos_a8ea8d0ba79b8397_241_addComponent,"GameObject","addComponent",0xcec68079,"GameObject.addComponent","GameObject.hx",241,0xe33972ed)
HX_LOCAL_STACK_FRAME(_hx_pos_a8ea8d0ba79b8397_227_getObjectByName,"GameObject","getObjectByName",0x7a880f9a,"GameObject.getObjectByName","GameObject.hx",227,0xe33972ed)

void GameObject_obj::__construct(::String __o__hx___name,::hx::Null< bool >  __o__isVisible,::String img){
            		::String _hx___name = __o__hx___name;
            		if (::hx::IsNull(__o__hx___name)) _hx___name = HX_("",00,00,00,00);
            		bool _isVisible = __o__isVisible.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_a8ea8d0ba79b8397_9_new)
HXLINE(  78)		this->posDeltaResetTime = ((Float)0);
HXLINE(  45)		this->collider = null();
HXLINE(  44)		this->pBody = null();
HXLINE(  38)		this->components = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  36)		this->moveWithParent = true;
HXLINE(  35)		this->children = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  34)		this->parentObject = null();
HXLINE(  32)		this->flipY = false;
HXLINE(  31)		this->flipX = false;
HXLINE(  30)		this->renderLayer = 0;
HXLINE(  29)		this->spriteImg = null();
HXLINE(  27)		this->worldHeight = ((Float)0);
HXLINE(  26)		this->worldWidth = ((Float)0);
HXLINE(  24)		this->_name = null();
HXLINE(  22)		this->positionDelta =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0);
HXLINE(  20)		this->localZRot = ((Float)0);
HXLINE(  19)		this->localScale =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,1,1);
HXLINE(  18)		this->localPosition =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0);
HXLINE(  16)		this->zRot = ((Float)0);
HXLINE(  15)		this->worldSize =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,1,1);
HXLINE(  14)		this->worldPosition =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0);
HXLINE(  12)		this->isVisible = true;
HXLINE(  11)		this->enabled = true;
HXLINE(  49)		super::__construct();
HXLINE(  51)		this->_name = _hx___name;
HXLINE(  53)		this->isVisible = _isVisible;
HXLINE(  54)		if (_isVisible) {
HXLINE(  56)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  58)				this->spriteImg =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,::openfl::utils::Assets_obj::getBitmapData(img,null()),null(),null());
HXLINE(  59)				this->addChild(this->spriteImg);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE(  62)					::haxe::Log_obj::trace(HX_("No such image path or no image assigned yet.",f5,c0,f5,7c),::hx::SourceInfo(HX_("Source/GameObject.hx",99,87,7e,8b),62,HX_("GameObject",71,6c,66,4e),HX_("new",60,d0,53,00)));
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
HXLINE(  66)		this->objectType = ::ObjectType_obj::SIMPLE_dyn();
            	}

Dynamic GameObject_obj::__CreateEmpty() { return new GameObject_obj; }

void *GameObject_obj::_hx_vtable = 0;

Dynamic GameObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameObject_obj > _hx_result = new GameObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool GameObject_obj::_hx_isInstanceOf(int inClassId) {
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
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x66298f31;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void GameObject_obj::addToActiveObjects(){
            	HX_STACKFRAME(&_hx_pos_a8ea8d0ba79b8397_70_addToActiveObjects)
HXLINE(  72)		::Main_obj::game->activeObjects->push(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  74)		this->addEventListener(HX_("enterFrame",f5,03,50,02),this->updateObject_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameObject_obj,addToActiveObjects,(void))

void GameObject_obj::updateObject( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_a8ea8d0ba79b8397_79_updateObject)
HXLINE(  81)		if (this->isVisible) {
HXLINE(  83)			if (::hx::IsNotNull( this->spriteImg )) {
HXLINE(  85)				if (::hx::IsNotNull( this->spriteImg->get_bitmapData() )) {
HXLINE(  87)					Float _hx_tmp = (( (Float)(this->spriteImg->get_bitmapData()->width) ) / ( (Float)(::Main_obj::game->worldScale) ));
HXDLIN(  87)					this->worldWidth = ((_hx_tmp * this->worldSize->x) * this->localScale->x);
HXLINE(  88)					Float _hx_tmp1 = (( (Float)(this->spriteImg->get_bitmapData()->height) ) / ( (Float)(::Main_obj::game->worldScale) ));
HXDLIN(  88)					this->worldHeight = ((_hx_tmp1 * this->worldSize->y) * this->localScale->y);
            				}
            			}
HXLINE(  94)			if ((this->renderLayer > ::Main_obj::game->highestRenderLayer)) {
HXLINE(  96)				if (((this->renderLayer - ::Main_obj::game->highestRenderLayer) > 1)) {
HXLINE(  96)					this->renderLayer = (::Main_obj::game->highestRenderLayer + 1);
            				}
HXLINE(  97)				::Main_obj::game->highestRenderLayer = this->renderLayer;
            			}
HXLINE( 101)			if ((this->renderLayer < ::Main_obj::game->lowestRenderLayer)) {
HXLINE( 103)				if (((this->renderLayer - ::Main_obj::game->lowestRenderLayer) > 1)) {
HXLINE( 103)					this->renderLayer = (::Main_obj::game->lowestRenderLayer - 1);
            				}
HXLINE( 104)				::Main_obj::game->lowestRenderLayer = this->renderLayer;
            			}
            		}
HXLINE( 110)		if (::hx::IsNotNull( this->parentObject )) {
HXLINE( 112)			if (this->moveWithParent) {
HXLINE( 114)				this->worldPosition->x = (this->parentObject->worldPosition->x + this->localPosition->x);
HXLINE( 115)				this->worldPosition->y = (this->parentObject->worldPosition->y + this->localPosition->y);
            			}
            		}
            		else {
HXLINE( 121)			this->localScale =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,1,1);
HXLINE( 122)			this->localPosition =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0);
HXLINE( 123)			this->localZRot = ( (Float)(0) );
            		}
HXLINE( 127)		if ((this->posDeltaResetTime > 0)) {
HXLINE( 127)			 ::GameObject _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 127)			_hx_tmp->posDeltaResetTime = (_hx_tmp->posDeltaResetTime - ::Main_obj::game->deltaTime);
            		}
            		else {
HXLINE( 128)			this->positionDelta =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameObject_obj,updateObject,(void))

void GameObject_obj::addChildObject(::Array< ::Dynamic> o){
            	HX_STACKFRAME(&_hx_pos_a8ea8d0ba79b8397_134_addChildObject)
HXDLIN( 134)		int _g = 0;
HXDLIN( 134)		int _g1 = o->length;
HXDLIN( 134)		while((_g < _g1)){
HXDLIN( 134)			_g = (_g + 1);
HXDLIN( 134)			int i = (_g - 1);
HXLINE( 136)			this->children->push(o->__get(i).StaticCast<  ::GameObject >());
HXLINE( 137)			o->__get(i).StaticCast<  ::GameObject >()->parentObject = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 139)			o->__get(i).StaticCast<  ::GameObject >()->localPosition->x = -((this->worldPosition->x - o->__get(i).StaticCast<  ::GameObject >()->worldPosition->x));
HXLINE( 140)			o->__get(i).StaticCast<  ::GameObject >()->localPosition->y = -((this->worldPosition->y - o->__get(i).StaticCast<  ::GameObject >()->worldPosition->y));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameObject_obj,addChildObject,(void))

void GameObject_obj::removeChildObject( ::GameObject o){
            	HX_STACKFRAME(&_hx_pos_a8ea8d0ba79b8397_148_removeChildObject)
HXDLIN( 148)		if (this->children->contains(o)) {
HXLINE( 150)			int _g = 0;
HXDLIN( 150)			int _g1 = this->children->length;
HXDLIN( 150)			while((_g < _g1)){
HXLINE( 150)				_g = (_g + 1);
HXDLIN( 150)				int i = (_g - 1);
HXLINE( 152)				if (::hx::IsInstanceEq( this->children->__get(i).StaticCast<  ::GameObject >(),o )) {
HXLINE( 154)					this->children->remove(this->children->__get(i).StaticCast<  ::GameObject >());
HXLINE( 155)					o->parentObject = null();
            				}
            			}
            		}
            		else {
HXLINE( 161)			return;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameObject_obj,removeChildObject,(void))

void GameObject_obj::translate( ::openfl::geom::Point delta,::hx::Null< bool >  __o_applyDeltaTime){
            		bool applyDeltaTime = __o_applyDeltaTime.Default(false);
            	HX_STACKFRAME(&_hx_pos_a8ea8d0ba79b8397_165_translate)
HXLINE( 167)		bool _hx_tmp;
HXDLIN( 167)		if ((delta->x == 0)) {
HXLINE( 167)			_hx_tmp = (delta->y == 0);
            		}
            		else {
HXLINE( 167)			_hx_tmp = false;
            		}
HXDLIN( 167)		if (_hx_tmp) {
HXLINE( 167)			return;
            		}
HXLINE( 169)		if (applyDeltaTime) {
HXLINE( 171)			bool _hx_tmp;
HXDLIN( 171)			if (::hx::IsNotNull( this->parentObject )) {
HXLINE( 171)				_hx_tmp = this->moveWithParent;
            			}
            			else {
HXLINE( 171)				_hx_tmp = false;
            			}
HXDLIN( 171)			if (_hx_tmp) {
HXLINE( 173)				 ::openfl::geom::Point fh = this->localPosition;
HXDLIN( 173)				fh->x = (fh->x + (delta->x * ::Main_obj::game->deltaTime));
HXLINE( 174)				 ::openfl::geom::Point fh1 = this->localPosition;
HXDLIN( 174)				fh1->y = (fh1->y + (delta->y * ::Main_obj::game->deltaTime));
            			}
            			else {
HXLINE( 178)				 ::openfl::geom::Point fh = this->worldPosition;
HXDLIN( 178)				fh->x = (fh->x + (delta->x * ::Main_obj::game->deltaTime));
HXLINE( 179)				 ::openfl::geom::Point fh1 = this->worldPosition;
HXDLIN( 179)				fh1->y = (fh1->y + (delta->y * ::Main_obj::game->deltaTime));
            			}
HXLINE( 183)			this->positionDelta->x = (delta->x * ::Main_obj::game->deltaTime);
HXLINE( 184)			this->positionDelta->y = (delta->y * ::Main_obj::game->deltaTime);
            		}
            		else {
HXLINE( 188)			bool _hx_tmp;
HXDLIN( 188)			if (::hx::IsNotNull( this->parentObject )) {
HXLINE( 188)				_hx_tmp = this->moveWithParent;
            			}
            			else {
HXLINE( 188)				_hx_tmp = false;
            			}
HXDLIN( 188)			if (_hx_tmp) {
HXLINE( 190)				 ::openfl::geom::Point fh = this->localPosition;
HXDLIN( 190)				fh->x = (fh->x + delta->x);
HXLINE( 191)				 ::openfl::geom::Point fh1 = this->localPosition;
HXDLIN( 191)				fh1->y = (fh1->y + delta->y);
            			}
            			else {
HXLINE( 195)				 ::openfl::geom::Point fh = this->worldPosition;
HXDLIN( 195)				fh->x = (fh->x + delta->x);
HXLINE( 196)				 ::openfl::geom::Point fh1 = this->worldPosition;
HXDLIN( 196)				fh1->y = (fh1->y + delta->y);
            			}
HXLINE( 200)			this->positionDelta->x = delta->x;
HXLINE( 201)			this->positionDelta->y = delta->y;
            		}
HXLINE( 205)		 ::Dynamic _hx_tmp1 = ::haxe::Log_obj::trace;
HXDLIN( 205)		::String _hx_tmp2 = (this->_name + HX_(" ",20,00,00,00));
HXDLIN( 205)		::String _hx_tmp3 = (_hx_tmp2 + ::Std_obj::string(delta));
HXDLIN( 205)		_hx_tmp1(_hx_tmp3,::hx::SourceInfo(HX_("Source/GameObject.hx",99,87,7e,8b),205,HX_("GameObject",71,6c,66,4e),HX_("translate",4e,d7,7f,49)));
HXLINE( 207)		this->posDeltaResetTime = (( (Float)(1) ) / ::openfl::Lib_obj::get_current()->stage->get_frameRate());
            	}


HX_DEFINE_DYNAMIC_FUNC2(GameObject_obj,translate,(void))

void GameObject_obj::moveTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_a8ea8d0ba79b8397_213_moveTo)
HXDLIN( 213)		bool _hx_tmp;
HXDLIN( 213)		if (::hx::IsNotNull( this->parentObject )) {
HXDLIN( 213)			_hx_tmp = this->moveWithParent;
            		}
            		else {
HXDLIN( 213)			_hx_tmp = false;
            		}
HXDLIN( 213)		if (_hx_tmp) {
HXLINE( 215)			this->localPosition->x = x;
HXLINE( 216)			this->localPosition->y = y;
            		}
            		else {
HXLINE( 220)			this->worldPosition->x = x;
HXLINE( 221)			this->worldPosition->y = y;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(GameObject_obj,moveTo,(void))

void GameObject_obj::addComponent( ::Component c){
            	HX_STACKFRAME(&_hx_pos_a8ea8d0ba79b8397_241_addComponent)
HXLINE( 243)		c->parentObject = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 244)		this->components->push(c);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameObject_obj,addComponent,(void))

 ::GameObject GameObject_obj::getObjectByName(::Array< ::Dynamic> a,::String n){
            	HX_STACKFRAME(&_hx_pos_a8ea8d0ba79b8397_227_getObjectByName)
HXLINE( 229)		 ::GameObject g = null();
HXLINE( 230)		{
HXLINE( 230)			int _g = 0;
HXDLIN( 230)			int _g1 = a->length;
HXDLIN( 230)			while((_g < _g1)){
HXLINE( 230)				_g = (_g + 1);
HXDLIN( 230)				int i = (_g - 1);
HXLINE( 232)				if ((a->__get(i).StaticCast<  ::GameObject >()->_name == n)) {
HXLINE( 233)					g = a->__get(i).StaticCast<  ::GameObject >();
            				}
            			}
            		}
HXLINE( 237)		return g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameObject_obj,getObjectByName,return )


::hx::ObjectPtr< GameObject_obj > GameObject_obj::__new(::String __o__hx___name,::hx::Null< bool >  __o__isVisible,::String img) {
	::hx::ObjectPtr< GameObject_obj > __this = new GameObject_obj();
	__this->__construct(__o__hx___name,__o__isVisible,img);
	return __this;
}

::hx::ObjectPtr< GameObject_obj > GameObject_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o__hx___name,::hx::Null< bool >  __o__isVisible,::String img) {
	GameObject_obj *__this = (GameObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameObject_obj), true, "GameObject"));
	*(void **)__this = GameObject_obj::_hx_vtable;
	__this->__construct(__o__hx___name,__o__isVisible,img);
	return __this;
}

GameObject_obj::GameObject_obj()
{
}

void GameObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameObject);
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(isVisible,"isVisible");
	HX_MARK_MEMBER_NAME(worldPosition,"worldPosition");
	HX_MARK_MEMBER_NAME(worldSize,"worldSize");
	HX_MARK_MEMBER_NAME(zRot,"zRot");
	HX_MARK_MEMBER_NAME(localPosition,"localPosition");
	HX_MARK_MEMBER_NAME(localScale,"localScale");
	HX_MARK_MEMBER_NAME(localZRot,"localZRot");
	HX_MARK_MEMBER_NAME(positionDelta,"positionDelta");
	HX_MARK_MEMBER_NAME(_name,"_name");
	HX_MARK_MEMBER_NAME(worldWidth,"worldWidth");
	HX_MARK_MEMBER_NAME(worldHeight,"worldHeight");
	HX_MARK_MEMBER_NAME(spriteImg,"spriteImg");
	HX_MARK_MEMBER_NAME(renderLayer,"renderLayer");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(parentObject,"parentObject");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(moveWithParent,"moveWithParent");
	HX_MARK_MEMBER_NAME(components,"components");
	HX_MARK_MEMBER_NAME(objectType,"objectType");
	HX_MARK_MEMBER_NAME(pBody,"pBody");
	HX_MARK_MEMBER_NAME(collider,"collider");
	HX_MARK_MEMBER_NAME(posDeltaResetTime,"posDeltaResetTime");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(isVisible,"isVisible");
	HX_VISIT_MEMBER_NAME(worldPosition,"worldPosition");
	HX_VISIT_MEMBER_NAME(worldSize,"worldSize");
	HX_VISIT_MEMBER_NAME(zRot,"zRot");
	HX_VISIT_MEMBER_NAME(localPosition,"localPosition");
	HX_VISIT_MEMBER_NAME(localScale,"localScale");
	HX_VISIT_MEMBER_NAME(localZRot,"localZRot");
	HX_VISIT_MEMBER_NAME(positionDelta,"positionDelta");
	HX_VISIT_MEMBER_NAME(_name,"_name");
	HX_VISIT_MEMBER_NAME(worldWidth,"worldWidth");
	HX_VISIT_MEMBER_NAME(worldHeight,"worldHeight");
	HX_VISIT_MEMBER_NAME(spriteImg,"spriteImg");
	HX_VISIT_MEMBER_NAME(renderLayer,"renderLayer");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(parentObject,"parentObject");
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(moveWithParent,"moveWithParent");
	HX_VISIT_MEMBER_NAME(components,"components");
	HX_VISIT_MEMBER_NAME(objectType,"objectType");
	HX_VISIT_MEMBER_NAME(pBody,"pBody");
	HX_VISIT_MEMBER_NAME(collider,"collider");
	HX_VISIT_MEMBER_NAME(posDeltaResetTime,"posDeltaResetTime");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GameObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zRot") ) { return ::hx::Val( zRot ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { return ::hx::Val( _name ); }
		if (HX_FIELD_EQ(inName,"flipX") ) { return ::hx::Val( flipX ); }
		if (HX_FIELD_EQ(inName,"flipY") ) { return ::hx::Val( flipY ); }
		if (HX_FIELD_EQ(inName,"pBody") ) { return ::hx::Val( pBody ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"moveTo") ) { return ::hx::Val( moveTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return ::hx::Val( enabled ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return ::hx::Val( children ); }
		if (HX_FIELD_EQ(inName,"collider") ) { return ::hx::Val( collider ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isVisible") ) { return ::hx::Val( isVisible ); }
		if (HX_FIELD_EQ(inName,"worldSize") ) { return ::hx::Val( worldSize ); }
		if (HX_FIELD_EQ(inName,"localZRot") ) { return ::hx::Val( localZRot ); }
		if (HX_FIELD_EQ(inName,"spriteImg") ) { return ::hx::Val( spriteImg ); }
		if (HX_FIELD_EQ(inName,"translate") ) { return ::hx::Val( translate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"localScale") ) { return ::hx::Val( localScale ); }
		if (HX_FIELD_EQ(inName,"worldWidth") ) { return ::hx::Val( worldWidth ); }
		if (HX_FIELD_EQ(inName,"components") ) { return ::hx::Val( components ); }
		if (HX_FIELD_EQ(inName,"objectType") ) { return ::hx::Val( objectType ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldHeight") ) { return ::hx::Val( worldHeight ); }
		if (HX_FIELD_EQ(inName,"renderLayer") ) { return ::hx::Val( renderLayer ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"parentObject") ) { return ::hx::Val( parentObject ); }
		if (HX_FIELD_EQ(inName,"updateObject") ) { return ::hx::Val( updateObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"worldPosition") ) { return ::hx::Val( worldPosition ); }
		if (HX_FIELD_EQ(inName,"localPosition") ) { return ::hx::Val( localPosition ); }
		if (HX_FIELD_EQ(inName,"positionDelta") ) { return ::hx::Val( positionDelta ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"moveWithParent") ) { return ::hx::Val( moveWithParent ); }
		if (HX_FIELD_EQ(inName,"addChildObject") ) { return ::hx::Val( addChildObject_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"posDeltaResetTime") ) { return ::hx::Val( posDeltaResetTime ); }
		if (HX_FIELD_EQ(inName,"removeChildObject") ) { return ::hx::Val( removeChildObject_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addToActiveObjects") ) { return ::hx::Val( addToActiveObjects_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool GameObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"getObjectByName") ) { outValue = getObjectByName_dyn(); return true; }
	}
	return false;
}

::hx::Val GameObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zRot") ) { zRot=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { _name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { flipY=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pBody") ) { pBody=inValue.Cast<  ::PhysicsBody >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collider") ) { collider=inValue.Cast<  ::Collider >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isVisible") ) { isVisible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldSize") ) { worldSize=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localZRot") ) { localZRot=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spriteImg") ) { spriteImg=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"localScale") ) { localScale=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldWidth") ) { worldWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"components") ) { components=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objectType") ) { objectType=inValue.Cast<  ::ObjectType >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldHeight") ) { worldHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderLayer") ) { renderLayer=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"parentObject") ) { parentObject=inValue.Cast<  ::GameObject >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"worldPosition") ) { worldPosition=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localPosition") ) { localPosition=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"positionDelta") ) { positionDelta=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"moveWithParent") ) { moveWithParent=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"posDeltaResetTime") ) { posDeltaResetTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("isVisible",a8,f5,22,a7));
	outFields->push(HX_("worldPosition",1b,95,ea,7b));
	outFields->push(HX_("worldSize",33,f4,6f,59));
	outFields->push(HX_("zRot",bd,a1,e2,50));
	outFields->push(HX_("localPosition",34,09,f5,43));
	outFields->push(HX_("localScale",1f,71,c2,b0));
	outFields->push(HX_("localZRot",c8,28,25,13));
	outFields->push(HX_("positionDelta",8f,b2,25,41));
	outFields->push(HX_("_name",2a,8e,10,fc));
	outFields->push(HX_("worldWidth",54,66,0f,36));
	outFields->push(HX_("worldHeight",d9,9b,b9,cd));
	outFields->push(HX_("spriteImg",fe,78,01,56));
	outFields->push(HX_("renderLayer",9b,ae,71,3b));
	outFields->push(HX_("flipX",0b,45,92,02));
	outFields->push(HX_("flipY",0c,45,92,02));
	outFields->push(HX_("parentObject",89,33,a9,27));
	outFields->push(HX_("children",3f,19,6a,70));
	outFields->push(HX_("moveWithParent",41,fe,38,18));
	outFields->push(HX_("components",16,b5,1e,5a));
	outFields->push(HX_("objectType",19,69,41,cf));
	outFields->push(HX_("pBody",32,9f,d5,a8));
	outFields->push(HX_("collider",34,df,d5,c9));
	outFields->push(HX_("posDeltaResetTime",18,1b,10,03));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameObject_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(GameObject_obj,enabled),HX_("enabled",81,04,31,7e)},
	{::hx::fsBool,(int)offsetof(GameObject_obj,isVisible),HX_("isVisible",a8,f5,22,a7)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(GameObject_obj,worldPosition),HX_("worldPosition",1b,95,ea,7b)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(GameObject_obj,worldSize),HX_("worldSize",33,f4,6f,59)},
	{::hx::fsFloat,(int)offsetof(GameObject_obj,zRot),HX_("zRot",bd,a1,e2,50)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(GameObject_obj,localPosition),HX_("localPosition",34,09,f5,43)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(GameObject_obj,localScale),HX_("localScale",1f,71,c2,b0)},
	{::hx::fsFloat,(int)offsetof(GameObject_obj,localZRot),HX_("localZRot",c8,28,25,13)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(GameObject_obj,positionDelta),HX_("positionDelta",8f,b2,25,41)},
	{::hx::fsString,(int)offsetof(GameObject_obj,_name),HX_("_name",2a,8e,10,fc)},
	{::hx::fsFloat,(int)offsetof(GameObject_obj,worldWidth),HX_("worldWidth",54,66,0f,36)},
	{::hx::fsFloat,(int)offsetof(GameObject_obj,worldHeight),HX_("worldHeight",d9,9b,b9,cd)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(GameObject_obj,spriteImg),HX_("spriteImg",fe,78,01,56)},
	{::hx::fsInt,(int)offsetof(GameObject_obj,renderLayer),HX_("renderLayer",9b,ae,71,3b)},
	{::hx::fsBool,(int)offsetof(GameObject_obj,flipX),HX_("flipX",0b,45,92,02)},
	{::hx::fsBool,(int)offsetof(GameObject_obj,flipY),HX_("flipY",0c,45,92,02)},
	{::hx::fsObject /*  ::GameObject */ ,(int)offsetof(GameObject_obj,parentObject),HX_("parentObject",89,33,a9,27)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(GameObject_obj,children),HX_("children",3f,19,6a,70)},
	{::hx::fsBool,(int)offsetof(GameObject_obj,moveWithParent),HX_("moveWithParent",41,fe,38,18)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(GameObject_obj,components),HX_("components",16,b5,1e,5a)},
	{::hx::fsObject /*  ::ObjectType */ ,(int)offsetof(GameObject_obj,objectType),HX_("objectType",19,69,41,cf)},
	{::hx::fsObject /*  ::PhysicsBody */ ,(int)offsetof(GameObject_obj,pBody),HX_("pBody",32,9f,d5,a8)},
	{::hx::fsObject /*  ::Collider */ ,(int)offsetof(GameObject_obj,collider),HX_("collider",34,df,d5,c9)},
	{::hx::fsFloat,(int)offsetof(GameObject_obj,posDeltaResetTime),HX_("posDeltaResetTime",18,1b,10,03)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GameObject_obj_sStaticStorageInfo = 0;
#endif

static ::String GameObject_obj_sMemberFields[] = {
	HX_("enabled",81,04,31,7e),
	HX_("isVisible",a8,f5,22,a7),
	HX_("worldPosition",1b,95,ea,7b),
	HX_("worldSize",33,f4,6f,59),
	HX_("zRot",bd,a1,e2,50),
	HX_("localPosition",34,09,f5,43),
	HX_("localScale",1f,71,c2,b0),
	HX_("localZRot",c8,28,25,13),
	HX_("positionDelta",8f,b2,25,41),
	HX_("_name",2a,8e,10,fc),
	HX_("worldWidth",54,66,0f,36),
	HX_("worldHeight",d9,9b,b9,cd),
	HX_("spriteImg",fe,78,01,56),
	HX_("renderLayer",9b,ae,71,3b),
	HX_("flipX",0b,45,92,02),
	HX_("flipY",0c,45,92,02),
	HX_("parentObject",89,33,a9,27),
	HX_("children",3f,19,6a,70),
	HX_("moveWithParent",41,fe,38,18),
	HX_("components",16,b5,1e,5a),
	HX_("objectType",19,69,41,cf),
	HX_("pBody",32,9f,d5,a8),
	HX_("collider",34,df,d5,c9),
	HX_("addToActiveObjects",12,30,ac,bb),
	HX_("posDeltaResetTime",18,1b,10,03),
	HX_("updateObject",a8,25,03,15),
	HX_("addChildObject",da,c0,9d,b8),
	HX_("removeChildObject",97,53,17,dd),
	HX_("translate",4e,d7,7f,49),
	HX_("moveTo",ec,d2,ac,cc),
	HX_("addComponent",5c,12,a8,0e),
	::String(null()) };

::hx::Class GameObject_obj::__mClass;

static ::String GameObject_obj_sStaticFields[] = {
	HX_("getObjectByName",97,8d,42,0b),
	::String(null())
};

void GameObject_obj::__register()
{
	GameObject_obj _hx_dummy;
	GameObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GameObject",71,6c,66,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GameObject_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GameObject_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

