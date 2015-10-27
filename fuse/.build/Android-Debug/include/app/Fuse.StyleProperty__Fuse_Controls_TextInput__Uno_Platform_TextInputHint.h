// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_TEXT_INPUT__UNO_PLATFORM_TEXT_INPUT_HINT_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_TEXT_INPUT__UNO_PLATFORM_TEXT_INPUT_HINT_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct TextInput; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint;

struct StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__uType* StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__typeof();

void StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint___ObjInit_1(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, int defaultValue, ::uDelegate* changedCallback);
int StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Get(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner);
bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__IsEqual(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, int value, int oldValue);
StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__OnChanged(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner);
bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Reset(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner);
bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__ResetStyle(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner);
void StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__ResetStyleFor(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Set(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner, int value);

struct StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint : ::app::Fuse::StyleProperty
{
    int _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(int defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint___ObjInit_1(this, defaultValue, changedCallback); }
    int Get(::app::Fuse::Controls::TextInput* owner) { return StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Get(this, owner); }
    bool IsEqual(int value, int oldValue) { return StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Controls::TextInput* owner) { StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Controls::TextInput* owner) { return StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Controls::TextInput* owner) { return StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Controls::TextInput* owner, int value) { return StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Set(this, owner, value); }
};

}}


#endif
