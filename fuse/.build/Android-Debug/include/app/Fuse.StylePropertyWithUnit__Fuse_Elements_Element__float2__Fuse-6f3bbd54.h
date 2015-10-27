// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY_WITH_UNIT__FUSE_ELEMENTS_ELEMENT__FLOAT2__FUSE_6F3BBD54_H__
#define __APP_FUSE_STYLE_PROPERTY_WITH_UNIT__FUSE_ELEMENTS_ELEMENT__FLOAT2__FUSE_6F3BBD54_H__

#include <app/Fuse.StyleProperty__Fuse_Elements_Element__float2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {

struct StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit;

struct StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__uType : ::app::Fuse::StyleProperty__Fuse_Elements_Element__float2__uType
{
};

StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__uType* StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__typeof();

void StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit___ObjInit_4(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* __this, ::app::Uno::Float2 defaultValue, int defaultUnit, ::uDelegate* changedCallback);
int StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__GetUnit(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Elements::Element* owner);
StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__New_3(::uStatic* __this, ::app::Uno::Float2 defaultValue, int defaultUnit, ::uDelegate* changedCallback);
bool StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__Set_1(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Elements::Element* owner, ::app::Uno::Float2 value, int unit);

struct StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit : ::app::Fuse::StyleProperty__Fuse_Elements_Element__float2
{
    int _unitId;
    ::uStrong< ::app::Fuse::PropertyHandle*> _unitHandle;
    int _defaultUnit;

    void _ObjInit_4(::app::Uno::Float2 defaultValue, int defaultUnit, ::uDelegate* changedCallback);
    int GetUnit(::app::Fuse::Elements::Element* owner) { return StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__GetUnit(this, owner); }
    bool Set_1(::app::Fuse::Elements::Element* owner, ::app::Uno::Float2 value, int unit);
};

}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {

inline void StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit::_ObjInit_4(::app::Uno::Float2 defaultValue, int defaultUnit, ::uDelegate* changedCallback) { StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit___ObjInit_4(this, defaultValue, defaultUnit, changedCallback); }
inline bool StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit::Set_1(::app::Fuse::Elements::Element* owner, ::app::Uno::Float2 value, int unit) { return StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__Set_1(this, owner, value, unit); }

}}


#endif
