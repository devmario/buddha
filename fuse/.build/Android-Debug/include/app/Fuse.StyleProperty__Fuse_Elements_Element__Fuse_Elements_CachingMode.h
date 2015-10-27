// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_ELEMENTS_ELEMENT__FUSE_ELEMENTS_CACHING_MODE_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_ELEMENTS_ELEMENT__FUSE_ELEMENTS_CACHING_MODE_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode;

struct StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__uType* StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__typeof();

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode___ObjInit_1(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, int defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode___ObjInit_2(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
int StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__Get(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Elements::Element* owner);
bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__IsEqual(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, int value, int oldValue);
StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
void StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__OnChanged(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Elements::Element* owner);
bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__Reset(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Elements::Element* owner);
bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__ResetStyle(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Elements::Element* owner);
void StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__ResetStyleFor(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Node* n);
bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__Set(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Elements::Element* owner, int value);

struct StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode : ::app::Fuse::StyleProperty
{
    int _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(int defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode___ObjInit_1(this, defaultValue, changedCallback); }
    void _ObjInit_2(int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter) { StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode___ObjInit_2(this, defaultValue, changedCallback, setter, getter); }
    int Get(::app::Fuse::Elements::Element* owner) { return StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__Get(this, owner); }
    bool IsEqual(int value, int oldValue) { return StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__IsEqual(this, value, oldValue); }
    void OnChanged(::app::Fuse::Elements::Element* owner) { StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Elements::Element* owner) { return StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Elements::Element* owner) { return StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__ResetStyle(this, owner); }
    bool Set(::app::Fuse::Elements::Element* owner, int value) { return StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__Set(this, owner, value); }
};

}}


#endif
