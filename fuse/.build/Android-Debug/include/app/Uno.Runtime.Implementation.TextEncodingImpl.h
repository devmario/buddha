// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_TEXT_ENCODING_IMPL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_TEXT_ENCODING_IMPL_H__

#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

struct TextEncodingImpl__uType : ::uClassType
{
};

TextEncodingImpl__uType* TextEncodingImpl__typeof();

::uString* TextEncodingImpl__DecodeUtf8(::uStatic* __this, ::uArray* value_);
::uString* TextEncodingImpl__EncodeBase64(::uStatic* __this, ::uArray* value_);
::uArray* TextEncodingImpl__EncodeUtf8(::uStatic* __this, ::uString* value_);

}}}}


#endif
