#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_74_new,"openfl.geom.Point","new",0xa6fb3c0e,"openfl.geom.Point.new","openfl/geom/Point.hx",74,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_88_add,"openfl.geom.Point","add",0xa6f15dcf,"openfl.geom.Point.add","openfl/geom/Point.hx",88,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_98_clone,"openfl.geom.Point","clone",0x787f468b,"openfl.geom.Point.clone","openfl/geom/Point.hx",98,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_108_copyFrom,"openfl.geom.Point","copyFrom",0x660e8951,"openfl.geom.Point.copyFrom","openfl/geom/Point.hx",108,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_137_equals,"openfl.geom.Point","equals",0xa8838351,"openfl.geom.Point.equals","openfl/geom/Point.hx",137,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_175_normalize,"openfl.geom.Point","normalize",0x05c199bb,"openfl.geom.Point.normalize","openfl/geom/Point.hx",175,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_198_offset,"openfl.geom.Point","offset",0x48d02ca5,"openfl.geom.Point.offset","openfl/geom/Point.hx",198,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_222_setTo,"openfl.geom.Point","setTo",0xaa4bc4eb,"openfl.geom.Point.setTo","openfl/geom/Point.hx",222,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_236_subtract,"openfl.geom.Point","subtract",0x95bef2a6,"openfl.geom.Point.subtract","openfl/geom/Point.hx",236,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_249_toString,"openfl.geom.Point","toString",0xd61c4e3e,"openfl.geom.Point.toString","openfl/geom/Point.hx",249,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_254___toLimeVector2,"openfl.geom.Point","__toLimeVector2",0x318eb74d,"openfl.geom.Point.__toLimeVector2","openfl/geom/Point.hx",254,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_268_get_length,"openfl.geom.Point","get_length",0x11c48ac1,"openfl.geom.Point.get_length","openfl/geom/Point.hx",268,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_121_distance,"openfl.geom.Point","distance",0x09a710c7,"openfl.geom.Point.distance","openfl/geom/Point.hx",121,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_161_interpolate,"openfl.geom.Point","interpolate",0x8bd29e6f,"openfl.geom.Point.interpolate","openfl/geom/Point.hx",161,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_212_polar,"openfl.geom.Point","polar",0xf6ae22ec,"openfl.geom.Point.polar","openfl/geom/Point.hx",212,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_37_boot,"openfl.geom.Point","boot",0x6cf250c4,"openfl.geom.Point.boot","openfl/geom/Point.hx",37,0x18173b82)
namespace openfl{
namespace geom{

void Point_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_74_new)
HXLINE(  75)		this->x = x;
HXLINE(  76)		this->y = y;
            	}

Dynamic Point_obj::__CreateEmpty() { return new Point_obj; }

void *Point_obj::_hx_vtable = 0;

Dynamic Point_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Point_obj > _hx_result = new Point_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Point_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4e2e0440;
}

 ::openfl::geom::Point Point_obj::add( ::openfl::geom::Point v){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_88_add)
HXDLIN(  88)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(v->x + this->x),(v->y + this->y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,add,return )

 ::openfl::geom::Point Point_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_98_clone)
HXDLIN(  98)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,clone,return )

void Point_obj::copyFrom( ::openfl::geom::Point sourcePoint){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_108_copyFrom)
HXLINE( 109)		this->x = sourcePoint->x;
HXLINE( 110)		this->y = sourcePoint->y;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,copyFrom,(void))

bool Point_obj::equals( ::openfl::geom::Point toCompare){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_137_equals)
HXDLIN( 137)		bool _hx_tmp;
HXDLIN( 137)		if (::hx::IsNotNull( toCompare )) {
HXDLIN( 137)			_hx_tmp = (toCompare->x == this->x);
            		}
            		else {
HXDLIN( 137)			_hx_tmp = false;
            		}
HXDLIN( 137)		if (_hx_tmp) {
HXDLIN( 137)			return (toCompare->y == this->y);
            		}
            		else {
HXDLIN( 137)			return false;
            		}
HXDLIN( 137)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,equals,return )

void Point_obj::normalize(Float thickness){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_175_normalize)
HXDLIN( 175)		bool _hx_tmp;
HXDLIN( 175)		if ((this->x == 0)) {
HXDLIN( 175)			_hx_tmp = (this->y == 0);
            		}
            		else {
HXDLIN( 175)			_hx_tmp = false;
            		}
HXDLIN( 175)		if (_hx_tmp) {
HXLINE( 177)			return;
            		}
            		else {
HXLINE( 181)			Float norm = (thickness / ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y))));
HXLINE( 182)			 ::openfl::geom::Point _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 182)			_hx_tmp->x = (_hx_tmp->x * norm);
HXLINE( 183)			 ::openfl::geom::Point _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)			_hx_tmp1->y = (_hx_tmp1->y * norm);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,normalize,(void))

void Point_obj::offset(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_198_offset)
HXLINE( 199)		 ::openfl::geom::Point _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 199)		_hx_tmp->x = (_hx_tmp->x + dx);
HXLINE( 200)		 ::openfl::geom::Point _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 200)		_hx_tmp1->y = (_hx_tmp1->y + dy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,offset,(void))

void Point_obj::setTo(Float xa,Float ya){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_222_setTo)
HXLINE( 223)		this->x = xa;
HXLINE( 224)		this->y = ya;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,setTo,(void))

 ::openfl::geom::Point Point_obj::subtract( ::openfl::geom::Point v){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_236_subtract)
HXDLIN( 236)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(this->x - v->x),(this->y - v->y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,subtract,return )

::String Point_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_249_toString)
HXDLIN( 249)		return ((((HX_("(x=",ed,c2,1e,00) + this->x) + HX_(", y=",18,15,2e,1d)) + this->y) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,toString,return )

 ::lime::math::Vector2 Point_obj::_hx___toLimeVector2(){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_254___toLimeVector2)
HXLINE( 255)		if (::hx::IsNull( ::openfl::geom::Point_obj::_hx___limeVector2 )) {
HXLINE( 257)			::openfl::geom::Point_obj::_hx___limeVector2 =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 260)		{
HXLINE( 260)			 ::lime::math::Vector2 _this = ::openfl::geom::Point_obj::_hx___limeVector2;
HXDLIN( 260)			_this->x = this->x;
HXDLIN( 260)			_this->y = this->y;
            		}
HXLINE( 261)		return ::openfl::geom::Point_obj::_hx___limeVector2;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,_hx___toLimeVector2,return )

Float Point_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_268_get_length)
HXDLIN( 268)		return ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,get_length,return )

 ::lime::utils::ObjectPool Point_obj::_hx___pool;

 ::lime::math::Vector2 Point_obj::_hx___limeVector2;

Float Point_obj::distance( ::openfl::geom::Point pt1, ::openfl::geom::Point pt2){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_121_distance)
HXLINE( 122)		Float dx = (pt1->x - pt2->x);
HXLINE( 123)		Float dy = (pt1->y - pt2->y);
HXLINE( 124)		return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Point_obj,distance,return )

 ::openfl::geom::Point Point_obj::interpolate( ::openfl::geom::Point pt1, ::openfl::geom::Point pt2,Float f){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_161_interpolate)
HXDLIN( 161)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(pt2->x + (f * (pt1->x - pt2->x))),(pt2->y + (f * (pt1->y - pt2->y))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Point_obj,interpolate,return )

 ::openfl::geom::Point Point_obj::polar(Float len,Float angle){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_212_polar)
HXDLIN( 212)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(len * ::Math_obj::cos(angle)),(len * ::Math_obj::sin(angle)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Point_obj,polar,return )


::hx::ObjectPtr< Point_obj > Point_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	::hx::ObjectPtr< Point_obj > __this = new Point_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< Point_obj > Point_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	Point_obj *__this = (Point_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Point_obj), false, "openfl.geom.Point"));
	*(void **)__this = Point_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

Point_obj::Point_obj()
{
}

::hx::Val Point_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return ::hx::Val( setTo_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return ::hx::Val( subtract_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return ::hx::Val( normalize_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__toLimeVector2") ) { return ::hx::Val( _hx___toLimeVector2_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Point_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"polar") ) { outValue = polar_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { outValue = ( _hx___pool ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__limeVector2") ) { outValue = ( _hx___limeVector2 ); return true; }
	}
	return false;
}

::hx::Val Point_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Point_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { _hx___pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__limeVector2") ) { _hx___limeVector2=ioValue.Cast<  ::lime::math::Vector2 >(); return true; }
	}
	return false;
}

void Point_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Point_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Point_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Point_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Point_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &Point_obj::_hx___pool,HX_("__pool",fc,e3,54,f9)},
	{::hx::fsObject /*  ::lime::math::Vector2 */ ,(void *) &Point_obj::_hx___limeVector2,HX_("__limeVector2",5a,88,77,8e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Point_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("add",21,f2,49,00),
	HX_("clone",5d,13,63,48),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("equals",3f,ee,f2,bf),
	HX_("normalize",8d,37,a1,ab),
	HX_("offset",93,97,3f,60),
	HX_("setTo",bd,91,2f,7a),
	HX_("subtract",14,75,11,f8),
	HX_("toString",ac,d0,6e,38),
	HX_("__toLimeVector2",9f,7e,1d,cf),
	HX_("get_length",af,04,8f,8f),
	::String(null()) };

static void Point_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Point_obj::_hx___pool,"__pool");
	HX_MARK_MEMBER_NAME(Point_obj::_hx___limeVector2,"__limeVector2");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Point_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Point_obj::_hx___pool,"__pool");
	HX_VISIT_MEMBER_NAME(Point_obj::_hx___limeVector2,"__limeVector2");
};

#endif

::hx::Class Point_obj::__mClass;

static ::String Point_obj_sStaticFields[] = {
	HX_("__pool",fc,e3,54,f9),
	HX_("__limeVector2",5a,88,77,8e),
	HX_("distance",35,93,f9,6b),
	HX_("interpolate",c1,d4,32,1f),
	HX_("polar",be,ef,91,c6),
	::String(null())
};

void Point_obj::__register()
{
	Point_obj _hx_dummy;
	Point_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.geom.Point",1c,dd,d4,e0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Point_obj::__GetStatic;
	__mClass->mSetStaticField = &Point_obj::__SetStatic;
	__mClass->mMarkFunc = Point_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Point_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Point_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Point_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Point_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Point_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Point_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Point_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::geom::Point _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_37_boot)
HXDLIN(  37)			return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::openfl::geom::Point p){
            			HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_37_boot)
HXDLIN(  37)			p->setTo(( (Float)(0) ),( (Float)(0) ));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_37_boot)
HXDLIN(  37)		_hx___pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace openfl
} // end namespace geom
