// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_STACK_PANEL__FUSE_LAYOUTS_ORIENTATION_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_STACK_PANEL__FUSE_LAYOUTS_ORIENTATION_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct StackPanel; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation;

struct StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__uType* StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__typeof();

void StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation___ObjInit_1(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, int defaultValue, ::uDelegate* changedCallback);
int StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__Get(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Controls::StackPanel* owner);
bool StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__IsEqual(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, int value, int oldValue);
StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__OnChanged(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Controls::StackPanel* owner);
bool StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__Reset(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Controls::StackPanel* owner);
bool StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__ResetStyle(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Controls::StackPanel* owner);
void StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__ResetStyleFor(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__Set(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Controls::StackPanel* owner, int value);

struct StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation : ::app::Fuse::StyleProperty
{
    int _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(int defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation___ObjInit_1(this, defaultValue, changedCallback); }
    int Get(::app::Fuse::Controls::StackPanel* owner) { return StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__Get(this, owner); }
    bool IsEqual(int value, int oldValue) { return StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Controls::StackPanel* owner) { StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Controls::StackPanel* owner) { return StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Controls::StackPanel* owner) { return StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Controls::StackPanel* owner, int value) { return StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__Set(this, owner, value); }
};

}}


#endif
