#ifndef INCLUDED_openfl_utils_IDataInput
#define INCLUDED_openfl_utils_IDataInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES IDataInput_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		int (::hx::Object :: *_hx_get_bytesAvailable)(); 
		static inline int get_bytesAvailable( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataInput_obj *>(_hx_.mPtr->_hx_getInterface(0xbeb9f218)))->_hx_get_bytesAvailable)();
		}
		 ::Dynamic (::hx::Object :: *_hx_get_endian)(); 
		static inline  ::Dynamic get_endian( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataInput_obj *>(_hx_.mPtr->_hx_getInterface(0xbeb9f218)))->_hx_get_endian)();
		}
		 ::Dynamic (::hx::Object :: *_hx_set_endian)( ::Dynamic value); 
		static inline  ::Dynamic set_endian( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataInput_obj *>(_hx_.mPtr->_hx_getInterface(0xbeb9f218)))->_hx_set_endian)(value);
		}
		bool (::hx::Object :: *_hx_readBoolean)(); 
		static inline bool readBoolean( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataInput_obj *>(_hx_.mPtr->_hx_getInterface(0xbeb9f218)))->_hx_readBoolean)();
		}
		int (::hx::Object :: *_hx_readByte)(); 
		static inline int readByte( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataInput_obj *>(_hx_.mPtr->_hx_getInterface(0xbeb9f218)))->_hx_readByte)();
		}
		void (::hx::Object :: *_hx_readBytes)( ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  offset,::hx::Null< int >  length); 
		static inline void readBytes( ::Dynamic _hx_, ::openfl::utils::ByteArrayData bytes,::hx::Null< int >  offset,::hx::Null< int >  length) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataInput_obj *>(_hx_.mPtr->_hx_getInterface(0xbeb9f218)))->_hx_readBytes)(bytes,offset,length);
		}
		Float (::hx::Object :: *_hx_readDouble)(); 
		static inline Float readDouble( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataInput_obj *>(_hx_.mPtr->_hx_getInterface(0xbeb9f218)))->_hx_readDouble)();
		}
		Float (::hx::Object :: *_hx_readFloat)(); 
		static inline Float readFloat( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataInput_obj *>(_hx_.mPtr->_hx_getInterface(0xbeb9f218)))->_hx_readFloat)();
		}
		int (::hx::Object :: *_hx_readInt)(); 
		static inline int readInt( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataInput_obj *>(_hx_.mPtr->_hx_getInterface(0xbeb9f218)))->_hx_readInt)();
		}
		::String (::hx::Object :: *_hx_readMultiByte)(int length,::String charSet); 
		static inline ::String readMultiByte( ::Dynamic _hx_,int length,::String charSet) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataInput_obj *>(_hx_.mPtr->_hx_getInterface(0xbeb9f218)))->_hx_readMultiByte)(length,charSet);
		}
		 ::Dynamic (::hx::Object :: *_hx_readObject)(); 
		static inline  ::Dynamic readObject( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataInput_obj *>(_hx_.mPtr->_hx_getInterface(0xbeb9f218)))->_hx_readObject)();
		}
		int (::hx::Object :: *_hx_readShort)(); 
		static inline int readShort( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataInput_obj *>(_hx_.mPtr->_hx_getInterface(0xbeb9f218)))->_hx_readShort)();
		}
		int (::hx::Object :: *_hx_readUnsignedByte)(); 
		static inline int readUnsignedByte( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataInput_obj *>(_hx_.mPtr->_hx_getInterface(0xbeb9f218)))->_hx_readUnsignedByte)();
		}
		int (::hx::Object :: *_hx_readUnsignedInt)(); 
		static inline int readUnsignedInt( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataInput_obj *>(_hx_.mPtr->_hx_getInterface(0xbeb9f218)))->_hx_readUnsignedInt)();
		}
		int (::hx::Object :: *_hx_readUnsignedShort)(); 
		static inline int readUnsignedShort( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataInput_obj *>(_hx_.mPtr->_hx_getInterface(0xbeb9f218)))->_hx_readUnsignedShort)();
		}
		::String (::hx::Object :: *_hx_readUTF)(); 
		static inline ::String readUTF( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataInput_obj *>(_hx_.mPtr->_hx_getInterface(0xbeb9f218)))->_hx_readUTF)();
		}
		::String (::hx::Object :: *_hx_readUTFBytes)(int length); 
		static inline ::String readUTFBytes( ::Dynamic _hx_,int length) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::openfl::utils::IDataInput_obj *>(_hx_.mPtr->_hx_getInterface(0xbeb9f218)))->_hx_readUTFBytes)(length);
		}
};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_IDataInput */ 
