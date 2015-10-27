#include <app/Fuse.Designer.AdvancedAttribute.h>
#include <app/Fuse.Designer.ColorAttribute.h>
#include <app/Fuse.Designer.DefaultComponentAttribute.h>
#include <app/Fuse.Designer.DesignerNameAttribute.h>
#include <app/Fuse.Designer.GroupAttribute.h>
#include <app/Fuse.Designer.HideAttribute.h>
#include <app/Fuse.Designer.InlineAttribute.h>
#include <app/Fuse.Designer.IntervalAttribute.h>
#include <app/Fuse.Designer.RangeAttribute.h>
#include <app/Fuse.Designer.SpawnableAttribute.h>
#include <app/Fuse.Designer.ThicknessAttribute.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Designer {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Designer/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AdvancedAttribute__uType* AdvancedAttribute__typeof()
{
    static ::uStaticStrong<AdvancedAttribute__uType*> type;
    if (type != NULL) return type;

    type = (AdvancedAttribute__uType*)::uAllocClassType(sizeof(AdvancedAttribute__uType), "Fuse.Designer.AdvancedAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void AdvancedAttribute___ObjInit_1(AdvancedAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

AdvancedAttribute* AdvancedAttribute__New_1(::uStatic* __this)
{
    AdvancedAttribute* inst = (AdvancedAttribute*)::uAllocObject(sizeof(AdvancedAttribute), AdvancedAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Designer/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ColorAttribute__uType* ColorAttribute__typeof()
{
    static ::uStaticStrong<ColorAttribute__uType*> type;
    if (type != NULL) return type;

    type = (ColorAttribute__uType*)::uAllocClassType(sizeof(ColorAttribute__uType), "Fuse.Designer.ColorAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void ColorAttribute___ObjInit_1(ColorAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

ColorAttribute* ColorAttribute__New_1(::uStatic* __this)
{
    ColorAttribute* inst = (ColorAttribute*)::uAllocObject(sizeof(ColorAttribute), ColorAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Designer/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DefaultComponentAttribute__uType* DefaultComponentAttribute__typeof()
{
    static ::uStaticStrong<DefaultComponentAttribute__uType*> type;
    if (type != NULL) return type;

    type = (DefaultComponentAttribute__uType*)::uAllocClassType(sizeof(DefaultComponentAttribute__uType), "Fuse.Designer.DefaultComponentAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "ComponentClass", offsetof(DefaultComponentAttribute, ComponentClass));

    return type;
}

void DefaultComponentAttribute___ObjInit_1(DefaultComponentAttribute* __this, ::uString* componentClass)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->ComponentClass = componentClass;
}

DefaultComponentAttribute* DefaultComponentAttribute__New_1(::uStatic* __this, ::uString* componentClass)
{
    DefaultComponentAttribute* inst = (DefaultComponentAttribute*)::uAllocObject(sizeof(DefaultComponentAttribute), DefaultComponentAttribute__typeof());
    inst->_ObjInit_1(componentClass);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Designer/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DesignerNameAttribute__uType* DesignerNameAttribute__typeof()
{
    static ::uStaticStrong<DesignerNameAttribute__uType*> type;
    if (type != NULL) return type;

    type = (DesignerNameAttribute__uType*)::uAllocClassType(sizeof(DesignerNameAttribute__uType), "Fuse.Designer.DesignerNameAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Name", offsetof(DesignerNameAttribute, Name));

    return type;
}

void DesignerNameAttribute___ObjInit_1(DesignerNameAttribute* __this, ::uString* name)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Name = name;
}

DesignerNameAttribute* DesignerNameAttribute__New_1(::uStatic* __this, ::uString* name)
{
    DesignerNameAttribute* inst = (DesignerNameAttribute*)::uAllocObject(sizeof(DesignerNameAttribute), DesignerNameAttribute__typeof());
    inst->_ObjInit_1(name);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Designer/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GroupAttribute__uType* GroupAttribute__typeof()
{
    static ::uStaticStrong<GroupAttribute__uType*> type;
    if (type != NULL) return type;

    type = (GroupAttribute__uType*)::uAllocClassType(sizeof(GroupAttribute__uType), "Fuse.Designer.GroupAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Name", offsetof(GroupAttribute, Name));

    return type;
}

void GroupAttribute___ObjInit_1(GroupAttribute* __this, ::uString* name, int priority)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Name = name;
    __this->Priority = priority;
}

GroupAttribute* GroupAttribute__New_1(::uStatic* __this, ::uString* name, int priority)
{
    GroupAttribute* inst = (GroupAttribute*)::uAllocObject(sizeof(GroupAttribute), GroupAttribute__typeof());
    inst->_ObjInit_1(name, priority);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Designer/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HideAttribute__uType* HideAttribute__typeof()
{
    static ::uStaticStrong<HideAttribute__uType*> type;
    if (type != NULL) return type;

    type = (HideAttribute__uType*)::uAllocClassType(sizeof(HideAttribute__uType), "Fuse.Designer.HideAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void HideAttribute___ObjInit_1(HideAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

HideAttribute* HideAttribute__New_1(::uStatic* __this)
{
    HideAttribute* inst = (HideAttribute*)::uAllocObject(sizeof(HideAttribute), HideAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Designer/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

InlineAttribute__uType* InlineAttribute__typeof()
{
    static ::uStaticStrong<InlineAttribute__uType*> type;
    if (type != NULL) return type;

    type = (InlineAttribute__uType*)::uAllocClassType(sizeof(InlineAttribute__uType), "Fuse.Designer.InlineAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void InlineAttribute___ObjInit_1(InlineAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

InlineAttribute* InlineAttribute__New_1(::uStatic* __this)
{
    InlineAttribute* inst = (InlineAttribute*)::uAllocObject(sizeof(InlineAttribute), InlineAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Designer/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IntervalAttribute__uType* IntervalAttribute__typeof()
{
    static ::uStaticStrong<IntervalAttribute__uType*> type;
    if (type != NULL) return type;

    type = (IntervalAttribute__uType*)::uAllocClassType(sizeof(IntervalAttribute__uType), "Fuse.Designer.IntervalAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void IntervalAttribute___ObjInit_1(IntervalAttribute* __this, float interval)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Interval = interval;
}

IntervalAttribute* IntervalAttribute__New_1(::uStatic* __this, float interval)
{
    IntervalAttribute* inst = (IntervalAttribute*)::uAllocObject(sizeof(IntervalAttribute), IntervalAttribute__typeof());
    inst->_ObjInit_1(interval);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Designer/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RangeAttribute__uType* RangeAttribute__typeof()
{
    static ::uStaticStrong<RangeAttribute__uType*> type;
    if (type != NULL) return type;

    type = (RangeAttribute__uType*)::uAllocClassType(sizeof(RangeAttribute__uType), "Fuse.Designer.RangeAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void RangeAttribute___ObjInit_1(RangeAttribute* __this, float min, float max)
{
    __this->Exponent = 1.0f;
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Min = min;
    __this->Max = max;
}

void RangeAttribute___ObjInit_2(RangeAttribute* __this, float min, float max, float exponent)
{
    __this->Exponent = 1.0f;
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Min = min;
    __this->Max = max;
    __this->Exponent = exponent;
}

RangeAttribute* RangeAttribute__New_1(::uStatic* __this, float min, float max)
{
    RangeAttribute* inst = (RangeAttribute*)::uAllocObject(sizeof(RangeAttribute), RangeAttribute__typeof());
    inst->_ObjInit_1(min, max);
    return inst;
}

RangeAttribute* RangeAttribute__New_2(::uStatic* __this, float min, float max, float exponent)
{
    RangeAttribute* inst = (RangeAttribute*)::uAllocObject(sizeof(RangeAttribute), RangeAttribute__typeof());
    inst->_ObjInit_2(min, max, exponent);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Designer/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SpawnableAttribute__uType* SpawnableAttribute__typeof()
{
    static ::uStaticStrong<SpawnableAttribute__uType*> type;
    if (type != NULL) return type;

    type = (SpawnableAttribute__uType*)::uAllocClassType(sizeof(SpawnableAttribute__uType), "Fuse.Designer.SpawnableAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void SpawnableAttribute___ObjInit_1(SpawnableAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

SpawnableAttribute* SpawnableAttribute__New_1(::uStatic* __this)
{
    SpawnableAttribute* inst = (SpawnableAttribute*)::uAllocObject(sizeof(SpawnableAttribute), SpawnableAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Designer/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ThicknessAttribute__uType* ThicknessAttribute__typeof()
{
    static ::uStaticStrong<ThicknessAttribute__uType*> type;
    if (type != NULL) return type;

    type = (ThicknessAttribute__uType*)::uAllocClassType(sizeof(ThicknessAttribute__uType), "Fuse.Designer.ThicknessAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void ThicknessAttribute___ObjInit_1(ThicknessAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

ThicknessAttribute* ThicknessAttribute__New_1(::uStatic* __this)
{
    ThicknessAttribute* inst = (ThicknessAttribute*)::uAllocObject(sizeof(ThicknessAttribute), ThicknessAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
