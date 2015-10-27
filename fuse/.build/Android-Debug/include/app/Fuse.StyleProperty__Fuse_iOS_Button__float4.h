// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_I_O_S_BUTTON__FLOAT4_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_I_O_S_BUTTON__FLOAT4_H__

#include <app/Fuse.StyleProperty.h>
#include <app/Uno.Float4.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace iOS { struct Button; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_iOS_Button__float4;

struct StyleProperty__Fuse_iOS_Button__float4__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_iOS_Button__float4__uType* StyleProperty__Fuse_iOS_Button__float4__typeof();

void StyleProperty__Fuse_iOS_Button__float4___ObjInit_1(StyleProperty__Fuse_iOS_Button__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback);
StyleProperty__Fuse_iOS_Button__float4* StyleProperty__Fuse_iOS_Button__float4__New_1(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_iOS_Button__float4__OnChanged(StyleProperty__Fuse_iOS_Button__float4* __this, ::app::Fuse::iOS::Button* owner);
bool StyleProperty__Fuse_iOS_Button__float4__Reset(StyleProperty__Fuse_iOS_Button__float4* __this, ::app::Fuse::iOS::Button* owner);
bool StyleProperty__Fuse_iOS_Button__float4__ResetStyle(StyleProperty__Fuse_iOS_Button__float4* __this, ::app::Fuse::iOS::Button* owner);
void StyleProperty__Fuse_iOS_Button__float4__ResetStyleFor(StyleProperty__Fuse_iOS_Button__float4* __this, ::app::Fuse::Node* n);

struct StyleProperty__Fuse_iOS_Button__float4 : ::app::Fuse::StyleProperty
{
    ::app::Uno::Float4 _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_iOS_Button__float4___ObjInit_1(this, defaultValue, changedCallback); }
    void OnChanged(::app::Fuse::iOS::Button* owner) { StyleProperty__Fuse_iOS_Button__float4__OnChanged(this, owner); }
    bool Reset(::app::Fuse::iOS::Button* owner) { return StyleProperty__Fuse_iOS_Button__float4__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::iOS::Button* owner) { return StyleProperty__Fuse_iOS_Button__float4__ResetStyle(this, owner); }
};

}}


#endif
