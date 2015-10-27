// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLOR_H__
#define __APP_UNO_COLOR_H__

#include <Uno.h>
namespace app { namespace Uno { struct Float3x3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Int4; } }

namespace app {
namespace Uno {

extern ::app::Uno::Float3x3 Color__ToYCbCrMat;
extern ::app::Uno::Float3x3 Color__ToYCbCrMatInv;

struct Color__uType : ::uClassType
{
};

Color__uType* Color__typeof();

void Color___TypeInit(::uStatic* __this);
::app::Uno::Float4 Color__FromHex(::uStatic* __this, ::uString* hex);
::app::Uno::Float4 Color__FromRgba32(::uStatic* __this, ::app::Uno::Int4 rgba);
::app::Uno::Float4 Color__FromRgba32_1(::uStatic* __this, ::uUInt rgba);
::app::Uno::Int4 Color__Rgba32FromHex(::uStatic* __this, ::uString* hex);

}}


#endif
