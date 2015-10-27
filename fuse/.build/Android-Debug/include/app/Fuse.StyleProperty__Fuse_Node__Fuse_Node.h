// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_NODE__FUSE_NODE_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_NODE__FUSE_NODE_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Node__Fuse_Node;

struct StyleProperty__Fuse_Node__Fuse_Node__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Node__Fuse_Node__uType* StyleProperty__Fuse_Node__Fuse_Node__typeof();

void StyleProperty__Fuse_Node__Fuse_Node___ObjInit_1(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* defaultValue, ::uDelegate* changedCallback);
::app::Fuse::Node* StyleProperty__Fuse_Node__Fuse_Node__Get(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner);
bool StyleProperty__Fuse_Node__Fuse_Node__HasValue(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner);
StyleProperty__Fuse_Node__Fuse_Node* StyleProperty__Fuse_Node__Fuse_Node__New_1(::uStatic* __this, ::app::Fuse::Node* defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Node__Fuse_Node__OnChanged(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner);
bool StyleProperty__Fuse_Node__Fuse_Node__Reset(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner);
bool StyleProperty__Fuse_Node__Fuse_Node__ResetStyle(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner);
void StyleProperty__Fuse_Node__Fuse_Node__ResetStyleFor(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Node__Fuse_Node__SetStyle(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner, ::app::Fuse::Node* value);

struct StyleProperty__Fuse_Node__Fuse_Node : ::app::Fuse::StyleProperty
{
    ::uStrong< ::app::Fuse::Node*> _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(::app::Fuse::Node* defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Node__Fuse_Node___ObjInit_1(this, defaultValue, changedCallback); }
    ::app::Fuse::Node* Get(::app::Fuse::Node* owner) { return StyleProperty__Fuse_Node__Fuse_Node__Get(this, owner); }
    bool HasValue(::app::Fuse::Node* owner) { return StyleProperty__Fuse_Node__Fuse_Node__HasValue(this, owner); }
    void OnChanged(::app::Fuse::Node* owner) { StyleProperty__Fuse_Node__Fuse_Node__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Node* owner) { return StyleProperty__Fuse_Node__Fuse_Node__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Node* owner) { return StyleProperty__Fuse_Node__Fuse_Node__ResetStyle(this, owner); }
    bool SetStyle(::app::Fuse::Node* owner, ::app::Fuse::Node* value) { return StyleProperty__Fuse_Node__Fuse_Node__SetStyle(this, owner, value); }
};

}}


#endif
