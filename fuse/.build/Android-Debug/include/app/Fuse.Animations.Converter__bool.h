// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__BOOL_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__BOOL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__bool;

struct Converter__bool__uType : ::uClassType
{
    bool(*__fp_Out)(Converter__bool*, ::app::Uno::Float4);
};

Converter__bool__uType* Converter__bool__typeof();

struct Converter__bool : ::uObject
{
    bool Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline bool Converter__bool::Out(::app::Uno::Float4 value) { return (((Converter__bool__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
