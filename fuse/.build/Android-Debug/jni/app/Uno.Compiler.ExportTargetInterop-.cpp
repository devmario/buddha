#include <app/Uno.Compiler.ExportTargetInterop.DontCopyStructAttribute.h>
#include <app/Uno.Compiler.ExportTargetInterop.DotNetTypeAttribute.h>
#include <app/Uno.Compiler.ExportTargetInterop.ExportConditionAttribute.h>
#include <app/Uno.Compiler.ExportTargetInterop.ExportNameAttribute.h>
#include <app/Uno.Compiler.ExportTargetInterop.GlslIntrinsicAttribute.h>
#include <app/Uno.Compiler.ExportTargetInterop.NativeClassAttribute.h>
#include <app/Uno.Compiler.ExportTargetInterop.TargetSpecificImplementationAttribute.h>
#include <app/Uno.Compiler.ExportTargetInterop.TargetSpecificTypeAttribute.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Compiler {
namespace ExportTargetInterop {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Compiler/ExportTargetInterop/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DontCopyStructAttribute__uType* DontCopyStructAttribute__typeof()
{
    static ::uStaticStrong<DontCopyStructAttribute__uType*> type;
    if (type != NULL) return type;

    type = (DontCopyStructAttribute__uType*)::uAllocClassType(sizeof(DontCopyStructAttribute__uType), "Uno.Compiler.ExportTargetInterop.DontCopyStructAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void DontCopyStructAttribute___ObjInit_1(DontCopyStructAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

DontCopyStructAttribute* DontCopyStructAttribute__New_1(::uStatic* __this)
{
    DontCopyStructAttribute* inst = (DontCopyStructAttribute*)::uAllocObject(sizeof(DontCopyStructAttribute), DontCopyStructAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Compiler/ExportTargetInterop/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DotNetTypeAttribute__uType* DotNetTypeAttribute__typeof()
{
    static ::uStaticStrong<DotNetTypeAttribute__uType*> type;
    if (type != NULL) return type;

    type = (DotNetTypeAttribute__uType*)::uAllocClassType(sizeof(DotNetTypeAttribute__uType), "Uno.Compiler.ExportTargetInterop.DotNetTypeAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "_DotNetName", offsetof(DotNetTypeAttribute, _DotNetName));

    return type;
}

void DotNetTypeAttribute___ObjInit_1(DotNetTypeAttribute* __this, ::uString* dotNetName)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->DotNetName(dotNetName);
}

::uString* DotNetTypeAttribute__get_DotNetName(DotNetTypeAttribute* __this)
{
    return __this->_DotNetName;
}

DotNetTypeAttribute* DotNetTypeAttribute__New_1(::uStatic* __this, ::uString* dotNetName)
{
    DotNetTypeAttribute* inst = (DotNetTypeAttribute*)::uAllocObject(sizeof(DotNetTypeAttribute), DotNetTypeAttribute__typeof());
    inst->_ObjInit_1(dotNetName);
    return inst;
}

void DotNetTypeAttribute__set_DotNetName(DotNetTypeAttribute* __this, ::uString* value)
{
    __this->_DotNetName = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Compiler/ExportTargetInterop/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ExportConditionAttribute__uType* ExportConditionAttribute__typeof()
{
    static ::uStaticStrong<ExportConditionAttribute__uType*> type;
    if (type != NULL) return type;

    type = (ExportConditionAttribute__uType*)::uAllocClassType(sizeof(ExportConditionAttribute__uType), "Uno.Compiler.ExportTargetInterop.ExportConditionAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Condition", offsetof(ExportConditionAttribute, Condition));

    return type;
}

void ExportConditionAttribute___ObjInit_1(ExportConditionAttribute* __this, ::uString* condition)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Condition = condition;
}

ExportConditionAttribute* ExportConditionAttribute__New_1(::uStatic* __this, ::uString* condition)
{
    ExportConditionAttribute* inst = (ExportConditionAttribute*)::uAllocObject(sizeof(ExportConditionAttribute), ExportConditionAttribute__typeof());
    inst->_ObjInit_1(condition);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Compiler/ExportTargetInterop/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ExportNameAttribute__uType* ExportNameAttribute__typeof()
{
    static ::uStaticStrong<ExportNameAttribute__uType*> type;
    if (type != NULL) return type;

    type = (ExportNameAttribute__uType*)::uAllocClassType(sizeof(ExportNameAttribute__uType), "Uno.Compiler.ExportTargetInterop.ExportNameAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Name", offsetof(ExportNameAttribute, Name));

    return type;
}

void ExportNameAttribute___ObjInit_1(ExportNameAttribute* __this, ::uString* name)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Name = name;
}

ExportNameAttribute* ExportNameAttribute__New_1(::uStatic* __this, ::uString* name)
{
    ExportNameAttribute* inst = (ExportNameAttribute*)::uAllocObject(sizeof(ExportNameAttribute), ExportNameAttribute__typeof());
    inst->_ObjInit_1(name);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Compiler/ExportTargetInterop/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GlslIntrinsicAttribute__uType* GlslIntrinsicAttribute__typeof()
{
    static ::uStaticStrong<GlslIntrinsicAttribute__uType*> type;
    if (type != NULL) return type;

    type = (GlslIntrinsicAttribute__uType*)::uAllocClassType(sizeof(GlslIntrinsicAttribute__uType), "Uno.Compiler.ExportTargetInterop.GlslIntrinsicAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Name", offsetof(GlslIntrinsicAttribute, Name));

    return type;
}

void GlslIntrinsicAttribute___ObjInit_1(GlslIntrinsicAttribute* __this, ::uString* name)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Name = name;
}

GlslIntrinsicAttribute* GlslIntrinsicAttribute__New_1(::uStatic* __this, ::uString* name)
{
    GlslIntrinsicAttribute* inst = (GlslIntrinsicAttribute*)::uAllocObject(sizeof(GlslIntrinsicAttribute), GlslIntrinsicAttribute__typeof());
    inst->_ObjInit_1(name);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Compiler/ExportTargetInterop/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeClassAttribute__uType* NativeClassAttribute__typeof()
{
    static ::uStaticStrong<NativeClassAttribute__uType*> type;
    if (type != NULL) return type;

    type = (NativeClassAttribute__uType*)::uAllocClassType(sizeof(NativeClassAttribute__uType), "Uno.Compiler.ExportTargetInterop.NativeClassAttribute", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "_ClassName", offsetof(NativeClassAttribute, _ClassName),
        "_Language", offsetof(NativeClassAttribute, _Language));

    return type;
}

void NativeClassAttribute___ObjInit_1(NativeClassAttribute* __this, ::uString* language, ::uString* className)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Language(language);
    __this->ClassName(className);
}

::uString* NativeClassAttribute__get_ClassName(NativeClassAttribute* __this)
{
    return __this->_ClassName;
}

::uString* NativeClassAttribute__get_Language(NativeClassAttribute* __this)
{
    return __this->_Language;
}

NativeClassAttribute* NativeClassAttribute__New_1(::uStatic* __this, ::uString* language, ::uString* className)
{
    NativeClassAttribute* inst = (NativeClassAttribute*)::uAllocObject(sizeof(NativeClassAttribute), NativeClassAttribute__typeof());
    inst->_ObjInit_1(language, className);
    return inst;
}

void NativeClassAttribute__set_ClassName(NativeClassAttribute* __this, ::uString* value)
{
    __this->_ClassName = value;
}

void NativeClassAttribute__set_Language(NativeClassAttribute* __this, ::uString* value)
{
    __this->_Language = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Compiler/ExportTargetInterop/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TargetSpecificImplementationAttribute__uType* TargetSpecificImplementationAttribute__typeof()
{
    static ::uStaticStrong<TargetSpecificImplementationAttribute__uType*> type;
    if (type != NULL) return type;

    type = (TargetSpecificImplementationAttribute__uType*)::uAllocClassType(sizeof(TargetSpecificImplementationAttribute__uType), "Uno.Compiler.ExportTargetInterop.TargetSpecificImplementationAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void TargetSpecificImplementationAttribute___ObjInit_1(TargetSpecificImplementationAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

TargetSpecificImplementationAttribute* TargetSpecificImplementationAttribute__New_1(::uStatic* __this)
{
    TargetSpecificImplementationAttribute* inst = (TargetSpecificImplementationAttribute*)::uAllocObject(sizeof(TargetSpecificImplementationAttribute), TargetSpecificImplementationAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Compiler/ExportTargetInterop/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TargetSpecificTypeAttribute__uType* TargetSpecificTypeAttribute__typeof()
{
    static ::uStaticStrong<TargetSpecificTypeAttribute__uType*> type;
    if (type != NULL) return type;

    type = (TargetSpecificTypeAttribute__uType*)::uAllocClassType(sizeof(TargetSpecificTypeAttribute__uType), "Uno.Compiler.ExportTargetInterop.TargetSpecificTypeAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void TargetSpecificTypeAttribute___ObjInit_1(TargetSpecificTypeAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

TargetSpecificTypeAttribute* TargetSpecificTypeAttribute__New_1(::uStatic* __this)
{
    TargetSpecificTypeAttribute* inst = (TargetSpecificTypeAttribute*)::uAllocObject(sizeof(TargetSpecificTypeAttribute), TargetSpecificTypeAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}}
