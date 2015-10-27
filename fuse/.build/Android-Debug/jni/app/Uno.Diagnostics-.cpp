#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.AssertionHandler.h>
#include <app/Uno.Diagnostics.Clock.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Diagnostics.LogHandler.h>
#include <app/Uno.Double.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ClockImpl.h>
#include <app/Uno.Runtime.Implementation.DebugImpl.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Diagnostics {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Diagnostics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* AssertionHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Diagnostics.AssertionHandler", 5);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::Bool__typeof(),
        ::app::Uno::String__typeof(),
        ::app::Uno::String__typeof(),
        ::app::Uno::Int__typeof(),
        ::uGetArrayType(::uObject__typeof()));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Diagnostics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Clock__uType* Clock__typeof()
{
    static ::uStaticStrong<Clock__uType*> type;
    if (type != NULL) return type;

    type = (Clock__uType*)::uAllocClassType(sizeof(Clock__uType), "Uno.Diagnostics.Clock");

    return type;
}

double Clock__GetSeconds(::uStatic* __this)
{
    return ::app::Uno::Runtime::Implementation::ClockImpl__GetSeconds(NULL);
}

::uLong Clock__GetTicks(::uStatic* __this)
{
    return ::app::Uno::Runtime::Implementation::ClockImpl__GetTicks(NULL);
}

int Clock__GetTimezoneOffset(::uStatic* __this, int year, int month, int day)
{
    return ::app::Uno::Runtime::Implementation::ClockImpl__GetTimezoneOffset(NULL, year, month, day);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Diagnostics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uDelegate*> Debug___assertionHandler;
::uStaticStrong< ::uString*> Debug___indentStr;
::uStaticStrong< ::uDelegate*> Debug___logHandler;

Debug__uType* Debug__typeof()
{
    static ::uStaticStrong<Debug__uType*> type;
    if (type != NULL) return type;

    type = (Debug__uType*)::uAllocClassType(sizeof(Debug__uType), "Uno.Diagnostics.Debug");

    return type;
}

void Debug___TypeInit(::uStatic* __this)
{
    Debug___indentStr = ::uGetConstString("");
}

void Debug__Assert(::uStatic* __this, bool value, ::uString* expression, ::uString* filename, int line, ::uArray* operands)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)Debug___assertionHandler, NULL))
    {
        ::uPtr< ::uDelegate*>(Debug___assertionHandler)->InvokeVoid< bool, ::uString*, ::uString*, int, ::uArray*>(value, expression, filename, line, operands);
    }

    if (!value)
    {
        Debug__EmitLog(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Assertion Failed: '"), expression), ::uGetConstString("' in ")), filename), ::uGetConstString("(")), ::uBox< int>(::app::Uno::Int__typeof(), line)), ::uGetConstString(")")), 3);
    }
}

void Debug__EmitLog(::uStatic* __this, ::uString* message, int type)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)Debug___logHandler, NULL))
    {
        ::uPtr< ::uDelegate*>(Debug___logHandler)->InvokeVoid< ::uString*, int>(::app::Uno::String__op_Addition_1(NULL, Debug___indentStr, message), type);
    }

    ::app::Uno::Runtime::Implementation::DebugImpl__Log(NULL, ::app::Uno::String__op_Addition_1(NULL, Debug___indentStr, message), type);
}

void Debug__Log_1(::uStatic* __this, ::uString* message, int type, ::uString* filename, int line)
{
    Debug__EmitLog(NULL, message, type);
}

void Debug__Log_2(::uStatic* __this, ::uObject* message, int type, ::uString* filename, int line)
{
    Debug__EmitLog(NULL, ::app::Uno::Object::ToString(::uPtr< ::uObject*>((message != NULL) ? message : (::uObject*)::app::Uno::String__Empty)), type);
}

void Debug__Log_3(::uStatic* __this, ::uString* message, int type)
{
    Debug__EmitLog(NULL, message, type);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Diagnostics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* DebugMessageType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Diagnostics.DebugMessageType", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "Undefined", 0LL,
        "Debug", 1LL,
        "Information", 2LL,
        "Error", 3LL,
        "Warning", 4LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Diagnostics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* LogHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Diagnostics.LogHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::String__typeof(),
        ::app::Uno::Diagnostics::DebugMessageType__typeof());

    return type;
}

}}}
