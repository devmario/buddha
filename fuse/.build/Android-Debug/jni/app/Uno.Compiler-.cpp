#include <app/Uno.Compiler.CallerFilePathAttribute.h>
#include <app/Uno.Compiler.CallerLineNumberAttribute.h>
#include <app/Uno.Compiler.CallerMemberNameAttribute.h>
#include <app/Uno.Compiler.IgnoreMainClassAttribute.h>

namespace app {
namespace Uno {
namespace Compiler {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Compiler/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CallerFilePathAttribute__uType* CallerFilePathAttribute__typeof()
{
    static ::uStaticStrong<CallerFilePathAttribute__uType*> type;
    if (type != NULL) return type;

    type = (CallerFilePathAttribute__uType*)::uAllocClassType(sizeof(CallerFilePathAttribute__uType), "Uno.Compiler.CallerFilePathAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void CallerFilePathAttribute___ObjInit_1(CallerFilePathAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

CallerFilePathAttribute* CallerFilePathAttribute__New_1(::uStatic* __this)
{
    CallerFilePathAttribute* inst = (CallerFilePathAttribute*)::uAllocObject(sizeof(CallerFilePathAttribute), CallerFilePathAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Compiler/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CallerLineNumberAttribute__uType* CallerLineNumberAttribute__typeof()
{
    static ::uStaticStrong<CallerLineNumberAttribute__uType*> type;
    if (type != NULL) return type;

    type = (CallerLineNumberAttribute__uType*)::uAllocClassType(sizeof(CallerLineNumberAttribute__uType), "Uno.Compiler.CallerLineNumberAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void CallerLineNumberAttribute___ObjInit_1(CallerLineNumberAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

CallerLineNumberAttribute* CallerLineNumberAttribute__New_1(::uStatic* __this)
{
    CallerLineNumberAttribute* inst = (CallerLineNumberAttribute*)::uAllocObject(sizeof(CallerLineNumberAttribute), CallerLineNumberAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Compiler/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CallerMemberNameAttribute__uType* CallerMemberNameAttribute__typeof()
{
    static ::uStaticStrong<CallerMemberNameAttribute__uType*> type;
    if (type != NULL) return type;

    type = (CallerMemberNameAttribute__uType*)::uAllocClassType(sizeof(CallerMemberNameAttribute__uType), "Uno.Compiler.CallerMemberNameAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void CallerMemberNameAttribute___ObjInit_1(CallerMemberNameAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

CallerMemberNameAttribute* CallerMemberNameAttribute__New_1(::uStatic* __this)
{
    CallerMemberNameAttribute* inst = (CallerMemberNameAttribute*)::uAllocObject(sizeof(CallerMemberNameAttribute), CallerMemberNameAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Compiler/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IgnoreMainClassAttribute__uType* IgnoreMainClassAttribute__typeof()
{
    static ::uStaticStrong<IgnoreMainClassAttribute__uType*> type;
    if (type != NULL) return type;

    type = (IgnoreMainClassAttribute__uType*)::uAllocClassType(sizeof(IgnoreMainClassAttribute__uType), "Uno.Compiler.IgnoreMainClassAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void IgnoreMainClassAttribute___ObjInit_1(IgnoreMainClassAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

IgnoreMainClassAttribute* IgnoreMainClassAttribute__New_1(::uStatic* __this)
{
    IgnoreMainClassAttribute* inst = (IgnoreMainClassAttribute*)::uAllocObject(sizeof(IgnoreMainClassAttribute), IgnoreMainClassAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
