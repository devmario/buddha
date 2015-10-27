// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_NODE__STRING_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_NODE__STRING_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Node__string;

struct StyleProperty__Fuse_Node__string__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Node__string__uType* StyleProperty__Fuse_Node__string__typeof();

void StyleProperty__Fuse_Node__string___ObjInit_1(StyleProperty__Fuse_Node__string* __this, ::uString* defaultValue, ::uDelegate* changedCallback);
::uString* StyleProperty__Fuse_Node__string__Get(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner);
bool StyleProperty__Fuse_Node__string__HasValue(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner);
bool StyleProperty__Fuse_Node__string__IsEqual(StyleProperty__Fuse_Node__string* __this, ::uString* value, ::uString* oldValue);
StyleProperty__Fuse_Node__string* StyleProperty__Fuse_Node__string__New_1(::uStatic* __this, ::uString* defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Node__string__OnChanged(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner);
bool StyleProperty__Fuse_Node__string__Reset(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner);
bool StyleProperty__Fuse_Node__string__ResetStyle(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner);
void StyleProperty__Fuse_Node__string__ResetStyleFor(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Node__string__Set(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner, ::uString* value);
bool StyleProperty__Fuse_Node__string__SetStyle(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner, ::uString* value);

struct StyleProperty__Fuse_Node__string : ::app::Fuse::StyleProperty
{
    ::uStrong< ::uString*> _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(::uString* defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Node__string___ObjInit_1(this, defaultValue, changedCallback); }
    ::uString* Get(::app::Fuse::Node* owner) { return StyleProperty__Fuse_Node__string__Get(this, owner); }
    bool HasValue(::app::Fuse::Node* owner) { return StyleProperty__Fuse_Node__string__HasValue(this, owner); }
    bool IsEqual(::uString* value, ::uString* oldValue) { return StyleProperty__Fuse_Node__string__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Node* owner) { StyleProperty__Fuse_Node__string__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Node* owner) { return StyleProperty__Fuse_Node__string__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Node* owner) { return StyleProperty__Fuse_Node__string__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Node* owner, ::uString* value) { return StyleProperty__Fuse_Node__string__Set(this, owner, value); }
    bool SetStyle(::app::Fuse::Node* owner, ::uString* value) { return StyleProperty__Fuse_Node__string__SetStyle(this, owner, value); }
};

}}


#endif
