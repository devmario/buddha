// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_MARSHAL_H__
#define __APP_FUSE_REACTIVE_MARSHAL_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct Marshal__uType : ::uClassType
{
};

Marshal__uType* Marshal__typeof();

int Marshal__ToAlignment(::uStatic* __this, ::uObject* obj);
bool Marshal__ToBool(::uStatic* __this, ::uObject* obj);
::app::Fuse::Drawing::Brush* Marshal__ToBrush(::uStatic* __this, ::uObject* o);
double Marshal__ToDouble(::uStatic* __this, ::uObject* o);
void Marshal__ToFileSource(::uStatic* __this, ::uObject* obj, ::uDelegate* callback);
float Marshal__ToFloat(::uStatic* __this, ::uObject* o);
void Marshal__ToFloat4(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
int Marshal__ToInt(::uStatic* __this, ::uObject* o);
void Marshal__ToType__bool(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__float(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__Fuse_Resources_ImageSource(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
void Marshal__ToType__string(::uStatic* __this, ::uObject* o, ::uDelegate* callback);
int Marshal__ToVisibility(::uStatic* __this, ::uObject* obj);

}}}


#endif
