#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_net_HTTPRequestHeader
#include <lime/net/HTTPRequestHeader.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_String
#include <lime/net/_HTTPRequest_String.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_openfl_utils_ByteArray
#include <lime/net/_HTTPRequest_openfl_utils_ByteArray.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_HTTPStatusEvent
#include <openfl/events/HTTPStatusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_SecurityErrorEvent
#include <openfl/events/SecurityErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4a9fdaaca9dd41d2_160_new,"openfl.net.URLLoader","new",0xb8a6da85,"openfl.net.URLLoader.new","openfl/net/URLLoader.hx",160,0x11daec0d)
HX_LOCAL_STACK_FRAME(_hx_pos_4a9fdaaca9dd41d2_181_close,"openfl.net.URLLoader","close",0x0328b51d,"openfl.net.URLLoader.close","openfl/net/URLLoader.hx",181,0x11daec0d)
HX_LOCAL_STACK_FRAME(_hx_pos_4a9fdaaca9dd41d2_285_load,"openfl.net.URLLoader","load",0xd80d7061,"openfl.net.URLLoader.load","openfl/net/URLLoader.hx",285,0x11daec0d)
HX_LOCAL_STACK_FRAME(_hx_pos_4a9fdaaca9dd41d2_300_load,"openfl.net.URLLoader","load",0xd80d7061,"openfl.net.URLLoader.load","openfl/net/URLLoader.hx",300,0x11daec0d)
HX_LOCAL_STACK_FRAME(_hx_pos_4a9fdaaca9dd41d2_317_load,"openfl.net.URLLoader","load",0xd80d7061,"openfl.net.URLLoader.load","openfl/net/URLLoader.hx",317,0x11daec0d)
HX_LOCAL_STACK_FRAME(_hx_pos_4a9fdaaca9dd41d2_329___dispatchStatus,"openfl.net.URLLoader","__dispatchStatus",0xadb63f67,"openfl.net.URLLoader.__dispatchStatus","openfl/net/URLLoader.hx",329,0x11daec0d)
HX_LOCAL_STACK_FRAME(_hx_pos_4a9fdaaca9dd41d2_351___prepareRequest,"openfl.net.URLLoader","__prepareRequest",0x68321263,"openfl.net.URLLoader.__prepareRequest","openfl/net/URLLoader.hx",351,0x11daec0d)
HX_LOCAL_STACK_FRAME(_hx_pos_4a9fdaaca9dd41d2_405_httpRequest_onError,"openfl.net.URLLoader","httpRequest_onError",0x8f111376,"openfl.net.URLLoader.httpRequest_onError","openfl/net/URLLoader.hx",405,0x11daec0d)
HX_LOCAL_STACK_FRAME(_hx_pos_4a9fdaaca9dd41d2_426_httpRequest_onProgress,"openfl.net.URLLoader","httpRequest_onProgress",0xf5cd30bf,"openfl.net.URLLoader.httpRequest_onProgress","openfl/net/URLLoader.hx",426,0x11daec0d)
namespace openfl{
namespace net{

void URLLoader_obj::__construct( ::openfl::net::URLRequest request){
            	HX_STACKFRAME(&_hx_pos_4a9fdaaca9dd41d2_160_new)
HXLINE( 161)		super::__construct(null());
HXLINE( 163)		this->bytesLoaded = 0;
HXLINE( 164)		this->bytesTotal = 0;
HXLINE( 165)		this->dataFormat = 1;
HXLINE( 167)		if (::hx::IsNotNull( request )) {
HXLINE( 169)			this->load(request);
            		}
            	}

Dynamic URLLoader_obj::__CreateEmpty() { return new URLLoader_obj; }

void *URLLoader_obj::_hx_vtable = 0;

Dynamic URLLoader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< URLLoader_obj > _hx_result = new URLLoader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool URLLoader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x6b4829d5;
	}
}

void URLLoader_obj::close(){
            	HX_STACKFRAME(&_hx_pos_4a9fdaaca9dd41d2_181_close)
HXDLIN( 181)		if (::hx::IsNotNull( this->_hx___httpRequest )) {
HXLINE( 183)			::lime::net::_IHTTPRequest_obj::cancel(this->_hx___httpRequest);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,close,(void))

void URLLoader_obj::load( ::openfl::net::URLRequest request){
            	HX_GC_STACKFRAME(&_hx_pos_4a9fdaaca9dd41d2_285_load)
HXDLIN( 285)		 ::openfl::net::URLLoader _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 288)		 ::openfl::events::Event openEvent =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("open",ca,03,b4,49),null(),null());
HXLINE( 289)		this->dispatchEvent(openEvent);
HXLINE( 291)		if (::hx::IsEq( this->dataFormat,0 )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::openfl::net::URLLoader,_gthis) HXARGC(1)
            			void _hx_run( ::openfl::utils::ByteArrayData data){
            				HX_GC_STACKFRAME(&_hx_pos_4a9fdaaca9dd41d2_300_load)
HXLINE( 301)				_gthis->_hx___dispatchStatus();
HXLINE( 302)				_gthis->data = data;
HXLINE( 304)				 ::openfl::events::Event event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null());
HXLINE( 305)				_gthis->dispatchEvent(event);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 293)			 ::lime::net::_HTTPRequest_openfl_utils_ByteArray httpRequest =  ::lime::net::_HTTPRequest_openfl_utils_ByteArray_obj::__alloc( HX_CTX ,null());
HXLINE( 294)			this->_hx___prepareRequest(httpRequest,request);
HXLINE( 296)			httpRequest->load(null())->onProgress(this->httpRequest_onProgress_dyn())->onError(this->httpRequest_onError_dyn())->onComplete( ::Dynamic(new _hx_Closure_0(_gthis)));
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::openfl::net::URLLoader,_gthis) HXARGC(1)
            			void _hx_run(::String data){
            				HX_GC_STACKFRAME(&_hx_pos_4a9fdaaca9dd41d2_317_load)
HXLINE( 318)				_gthis->_hx___dispatchStatus();
HXLINE( 319)				_gthis->data = data;
HXLINE( 321)				 ::openfl::events::Event event =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null());
HXLINE( 322)				_gthis->dispatchEvent(event);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 310)			 ::lime::net::_HTTPRequest_String httpRequest =  ::lime::net::_HTTPRequest_String_obj::__alloc( HX_CTX ,null());
HXLINE( 311)			this->_hx___prepareRequest(httpRequest,request);
HXLINE( 313)			httpRequest->load(null())->onProgress(this->httpRequest_onProgress_dyn())->onError(this->httpRequest_onError_dyn())->onComplete( ::Dynamic(new _hx_Closure_1(_gthis)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,load,(void))

void URLLoader_obj::_hx___dispatchStatus(){
            	HX_GC_STACKFRAME(&_hx_pos_4a9fdaaca9dd41d2_329___dispatchStatus)
HXLINE( 330)		 ::openfl::events::HTTPStatusEvent event =  ::openfl::events::HTTPStatusEvent_obj::__alloc( HX_CTX ,HX_("httpStatus",da,4c,74,0a),false,false,this->_hx___httpRequest->__Field(HX_("responseStatus",93,60,a4,78),::hx::paccDynamic),null());
HXLINE( 331)		event->responseURL = ( (::String)(this->_hx___httpRequest->__Field(HX_("uri",6c,2b,59,00),::hx::paccDynamic)) );
HXLINE( 333)		::Array< ::Dynamic> headers = ::Array_obj< ::Dynamic>::__new();
HXLINE( 336)		bool _hx_tmp;
HXDLIN( 336)		if (( (bool)(this->_hx___httpRequest->__Field(HX_("enableResponseHeaders",82,32,47,05),::hx::paccDynamic)) )) {
HXLINE( 336)			_hx_tmp = ::hx::IsNotNull( this->_hx___httpRequest->__Field(HX_("responseHeaders",c5,0d,ca,43),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 336)			_hx_tmp = false;
            		}
HXDLIN( 336)		if (_hx_tmp) {
HXLINE( 338)			int _g = 0;
HXDLIN( 338)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(this->_hx___httpRequest->__Field(HX_("responseHeaders",c5,0d,ca,43),::hx::paccDynamic)) );
HXDLIN( 338)			while((_g < _g1->length)){
HXLINE( 338)				 ::lime::net::HTTPRequestHeader header = _g1->__get(_g).StaticCast<  ::lime::net::HTTPRequestHeader >();
HXDLIN( 338)				_g = (_g + 1);
HXLINE( 340)				headers->push( ::openfl::net::URLRequestHeader_obj::__alloc( HX_CTX ,header->name,header->value));
            			}
            		}
HXLINE( 345)		event->responseHeaders = headers;
HXLINE( 346)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,_hx___dispatchStatus,(void))

void URLLoader_obj::_hx___prepareRequest(::Dynamic httpRequest, ::openfl::net::URLRequest request){
            	HX_GC_STACKFRAME(&_hx_pos_4a9fdaaca9dd41d2_351___prepareRequest)
HXLINE( 353)		this->_hx___httpRequest = httpRequest;
HXLINE( 354)		this->_hx___httpRequest->__SetField(HX_("uri",6c,2b,59,00),request->url,::hx::paccDynamic);
HXLINE( 355)		this->_hx___httpRequest->__SetField(HX_("method",e1,f6,5a,09),request->method,::hx::paccDynamic);
HXLINE( 357)		if (::hx::IsNotNull( request->data )) {
HXLINE( 359)			if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(request->data),::ValueType_obj::TObject_dyn() )) {
HXLINE( 361)				::Array< ::String > fields = ::Reflect_obj::fields(request->data);
HXLINE( 363)				{
HXLINE( 363)					int _g = 0;
HXDLIN( 363)					while((_g < fields->length)){
HXLINE( 363)						::String field = fields->__get(_g);
HXDLIN( 363)						_g = (_g + 1);
HXLINE( 365)						{
HXLINE( 365)							::Dynamic this1 =  ::Dynamic(this->_hx___httpRequest->__Field(HX_("formData",8e,d5,80,56),::hx::paccDynamic));
HXDLIN( 365)							( ( ::haxe::ds::StringMap)(this1) )->set(field,::Reflect_obj::field(request->data,field));
            						}
            					}
            				}
            			}
            			else {
HXLINE( 368)				if (::Std_obj::isOfType(request->data,::hx::ClassOf< ::haxe::io::Bytes >())) {
HXLINE( 370)					this->_hx___httpRequest->__SetField(HX_("data",2a,56,63,42),request->data,::hx::paccDynamic);
            				}
            				else {
HXLINE( 374)					::String _hx_tmp = ::Std_obj::string(request->data);
HXDLIN( 374)					this->_hx___httpRequest->__SetField(HX_("data",2a,56,63,42),::haxe::io::Bytes_obj::ofString(_hx_tmp,null()),::hx::paccDynamic);
            				}
            			}
            		}
HXLINE( 378)		this->_hx___httpRequest->__SetField(HX_("contentType",93,3c,7b,2a),request->contentType,::hx::paccDynamic);
HXLINE( 380)		if (::hx::IsNotNull( request->requestHeaders )) {
HXLINE( 382)			int _g = 0;
HXDLIN( 382)			::Array< ::Dynamic> _g1 = request->requestHeaders;
HXDLIN( 382)			while((_g < _g1->length)){
HXLINE( 382)				 ::openfl::net::URLRequestHeader header = _g1->__get(_g).StaticCast<  ::openfl::net::URLRequestHeader >();
HXDLIN( 382)				_g = (_g + 1);
HXLINE( 384)				::Array< ::Dynamic> _hx_tmp = ( (::Array< ::Dynamic>)(this->_hx___httpRequest->__Field(HX_("headers",46,52,08,63),::hx::paccDynamic)) );
HXDLIN( 384)				_hx_tmp->push( ::lime::net::HTTPRequestHeader_obj::__alloc( HX_CTX ,header->name,header->value));
            			}
            		}
HXLINE( 388)		this->_hx___httpRequest->__SetField(HX_("followRedirects",26,5a,40,75),request->followRedirects,::hx::paccDynamic);
HXLINE( 389)		this->_hx___httpRequest->__SetField(HX_("timeout",a1,1a,f7,d8),::Std_obj::_hx_int(request->idleTimeout),::hx::paccDynamic);
HXLINE( 391)		this->_hx___httpRequest->__SetField(HX_("manageCookies",6a,1f,8f,bc),request->manageCookies,::hx::paccDynamic);
HXLINE( 395)		::String userAgent = request->userAgent;
HXLINE( 396)		if (::hx::IsNull( userAgent )) {
HXLINE( 396)			userAgent = HX_("Mozilla/5.0 (Windows; U; en) AppleWebKit/420+ (KHTML, like Gecko) OpenFL/1.0",2f,7c,ab,e1);
            		}
HXLINE( 398)		this->_hx___httpRequest->__SetField(HX_("userAgent",7a,f0,12,c8),request->userAgent,::hx::paccDynamic);
HXLINE( 399)		this->_hx___httpRequest->__SetField(HX_("enableResponseHeaders",82,32,47,05),true,::hx::paccDynamic);
            	}


HX_DEFINE_DYNAMIC_FUNC2(URLLoader_obj,_hx___prepareRequest,(void))

void URLLoader_obj::httpRequest_onError( ::Dynamic error){
            	HX_GC_STACKFRAME(&_hx_pos_4a9fdaaca9dd41d2_405_httpRequest_onError)
HXLINE( 406)		this->_hx___dispatchStatus();
HXLINE( 410)		if (::hx::IsEq( error,403 )) {
HXLINE( 412)			 ::openfl::events::SecurityErrorEvent event =  ::openfl::events::SecurityErrorEvent_obj::__alloc( HX_CTX ,HX_("securityError",e8,28,7c,a2),null(),null(),null(),null());
HXLINE( 413)			event->text = ::Std_obj::string(error);
HXLINE( 414)			this->dispatchEvent(event);
            		}
            		else {
HXLINE( 419)			 ::openfl::events::IOErrorEvent event =  ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),null(),null(),null(),null());
HXLINE( 420)			event->text = ::Std_obj::string(error);
HXLINE( 421)			this->dispatchEvent(event);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,httpRequest_onError,(void))

void URLLoader_obj::httpRequest_onProgress(int bytesLoaded,int bytesTotal){
            	HX_GC_STACKFRAME(&_hx_pos_4a9fdaaca9dd41d2_426_httpRequest_onProgress)
HXLINE( 427)		 ::openfl::events::ProgressEvent event =  ::openfl::events::ProgressEvent_obj::__alloc( HX_CTX ,HX_("progress",ad,f7,2a,86),null(),null(),null(),null());
HXLINE( 428)		event->bytesLoaded = ( (Float)(bytesLoaded) );
HXLINE( 429)		event->bytesTotal = ( (Float)(bytesTotal) );
HXLINE( 430)		this->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC2(URLLoader_obj,httpRequest_onProgress,(void))


::hx::ObjectPtr< URLLoader_obj > URLLoader_obj::__new( ::openfl::net::URLRequest request) {
	::hx::ObjectPtr< URLLoader_obj > __this = new URLLoader_obj();
	__this->__construct(request);
	return __this;
}

::hx::ObjectPtr< URLLoader_obj > URLLoader_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::net::URLRequest request) {
	URLLoader_obj *__this = (URLLoader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(URLLoader_obj), true, "openfl.net.URLLoader"));
	*(void **)__this = URLLoader_obj::_hx_vtable;
	__this->__construct(request);
	return __this;
}

URLLoader_obj::URLLoader_obj()
{
}

void URLLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLLoader);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(dataFormat,"dataFormat");
	HX_MARK_MEMBER_NAME(_hx___httpRequest,"__httpRequest");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void URLLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(dataFormat,"dataFormat");
	HX_VISIT_MEMBER_NAME(_hx___httpRequest,"__httpRequest");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val URLLoader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return ::hx::Val( bytesTotal ); }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { return ::hx::Val( dataFormat ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return ::hx::Val( bytesLoaded ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__httpRequest") ) { return ::hx::Val( _hx___httpRequest ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__dispatchStatus") ) { return ::hx::Val( _hx___dispatchStatus_dyn() ); }
		if (HX_FIELD_EQ(inName,"__prepareRequest") ) { return ::hx::Val( _hx___prepareRequest_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"httpRequest_onError") ) { return ::hx::Val( httpRequest_onError_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"httpRequest_onProgress") ) { return ::hx::Val( httpRequest_onProgress_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val URLLoader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { dataFormat=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__httpRequest") ) { _hx___httpRequest=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bytesLoaded",d0,66,ca,99));
	outFields->push(HX_("bytesTotal",59,57,da,45));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("dataFormat",01,55,30,e9));
	outFields->push(HX_("__httpRequest",87,ad,dd,71));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo URLLoader_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(URLLoader_obj,bytesLoaded),HX_("bytesLoaded",d0,66,ca,99)},
	{::hx::fsInt,(int)offsetof(URLLoader_obj,bytesTotal),HX_("bytesTotal",59,57,da,45)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(URLLoader_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(URLLoader_obj,dataFormat),HX_("dataFormat",01,55,30,e9)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(URLLoader_obj,_hx___httpRequest),HX_("__httpRequest",87,ad,dd,71)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *URLLoader_obj_sStaticStorageInfo = 0;
#endif

static ::String URLLoader_obj_sMemberFields[] = {
	HX_("bytesLoaded",d0,66,ca,99),
	HX_("bytesTotal",59,57,da,45),
	HX_("data",2a,56,63,42),
	HX_("dataFormat",01,55,30,e9),
	HX_("__httpRequest",87,ad,dd,71),
	HX_("close",b8,17,63,48),
	HX_("load",26,9a,b7,47),
	HX_("__dispatchStatus",ac,7c,9a,75),
	HX_("__prepareRequest",a8,4f,16,30),
	HX_("httpRequest_onError",51,af,4c,4d),
	HX_("httpRequest_onProgress",c4,2f,46,93),
	::String(null()) };

::hx::Class URLLoader_obj::__mClass;

void URLLoader_obj::__register()
{
	URLLoader_obj _hx_dummy;
	URLLoader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.net.URLLoader",13,34,24,71);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(URLLoader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< URLLoader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = URLLoader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = URLLoader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace net
