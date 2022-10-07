#ifndef INCLUDED_GameObject
#define INCLUDED_GameObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Behaviour
#include <Behaviour.h>
#endif
HX_DECLARE_CLASS0(Behaviour)
HX_DECLARE_CLASS0(Collider)
HX_DECLARE_CLASS0(Component)
HX_DECLARE_CLASS0(GameObject)
HX_DECLARE_CLASS0(ObjectType)
HX_DECLARE_CLASS0(PhysicsBody)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)



class HXCPP_CLASS_ATTRIBUTES GameObject_obj : public  ::Behaviour_obj
{
	public:
		typedef  ::Behaviour_obj super;
		typedef GameObject_obj OBJ_;
		GameObject_obj();

	public:
		enum { _hx_ClassId = 0x66298f31 };

		void __construct(::String __o__hx___name,::hx::Null< bool >  __o__isVisible,::String img);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="GameObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"GameObject"); }
		static ::hx::ObjectPtr< GameObject_obj > __new(::String __o__hx___name,::hx::Null< bool >  __o__isVisible,::String img);
		static ::hx::ObjectPtr< GameObject_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o__hx___name,::hx::Null< bool >  __o__isVisible,::String img);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GameObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GameObject",71,6c,66,4e); }

		bool enabled;
		bool isVisible;
		 ::openfl::geom::Point lastPosition;
		 ::openfl::geom::Point worldPosition;
		 ::openfl::geom::Point positionDelta;
		 ::openfl::geom::Point worldSize;
		Float zRot;
		 ::openfl::geom::Point localPosition;
		 ::openfl::geom::Point localScale;
		Float localZRot;
		::String _name;
		Float worldWidth;
		Float worldHeight;
		 ::openfl::display::Bitmap spriteImg;
		int renderLayer;
		bool flipX;
		bool flipY;
		 ::GameObject parentObject;
		::Array< ::Dynamic> children;
		bool moveWithParent;
		::Array< ::Dynamic> components;
		 ::ObjectType objectType;
		 ::PhysicsBody pBody;
		 ::Collider collider;
		void addToActiveObjects();
		::Dynamic addToActiveObjects_dyn();

		void updateObject( ::openfl::events::Event event);
		::Dynamic updateObject_dyn();

		void addChildObject(::Array< ::Dynamic> o);
		::Dynamic addChildObject_dyn();

		void removeChildObject( ::GameObject o);
		::Dynamic removeChildObject_dyn();

		void translate( ::openfl::geom::Point delta,::hx::Null< bool >  applyDeltaTime);
		::Dynamic translate_dyn();

		void moveTo(Float x,Float y);
		::Dynamic moveTo_dyn();

		void addComponent( ::Component c);
		::Dynamic addComponent_dyn();

};


#endif /* INCLUDED_GameObject */ 
