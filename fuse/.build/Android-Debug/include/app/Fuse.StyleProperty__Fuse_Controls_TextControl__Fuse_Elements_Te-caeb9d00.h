// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_TEXT_CONTROL__FUSE_ELEMENTS_TE_CAEB9D00_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_TEXT_CONTROL__FUSE_ELEMENTS_TE_CAEB9D00_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct TextControl; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment;

struct StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__uType* StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__typeof();

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment___ObjInit_1(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, int defaultValue, ::uDelegate* changedCallback);
int StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__Get(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__HasValue(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__IsEqual(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, int value, int oldValue);
StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__OnChanged(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__Reset(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__ResetStyle(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner);
void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__ResetStyleFor(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__Set(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner, int value);
bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__SetStyle(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner, int value);

struct StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment : ::app::Fuse::StyleProperty
{
    int _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(int defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment___ObjInit_1(this, defaultValue, changedCallback); }
    int Get(::app::Fuse::Controls::TextControl* owner) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__Get(this, owner); }
    bool HasValue(::app::Fuse::Controls::TextControl* owner) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__HasValue(this, owner); }
    bool IsEqual(int value, int oldValue) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Controls::TextControl* owner) { StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Controls::TextControl* owner) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Controls::TextControl* owner) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Controls::TextControl* owner, int value) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__Set(this, owner, value); }
    bool SetStyle(::app::Fuse::Controls::TextControl* owner, int value) { return StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__SetStyle(this, owner, value); }
};

}}


#endif
