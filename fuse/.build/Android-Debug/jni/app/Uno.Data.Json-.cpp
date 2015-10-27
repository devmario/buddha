#include <app/Uno.Bool.h>
#include <app/Uno.Data.Json.Boolean.h>
#include <app/Uno.Data.Json.Null.h>
#include <app/Uno.Data.Json.Value.h>

namespace app {
namespace Uno {
namespace Data {
namespace Json {

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Data.Json/0.12.1/Source/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Boolean*> Boolean___false;
::uStaticStrong< Boolean*> Boolean___true;

Boolean__uType* Boolean__typeof()
{
    static ::uStaticStrong<Boolean__uType*> type;
    if (type != NULL) return type;

    type = (Boolean__uType*)::uAllocClassType(sizeof(Boolean__uType), "Uno.Data.Json.Boolean", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Data::Json::AtomicValue__bool__typeof());

    return type;
}

void Boolean___ObjInit_2(Boolean* __this, bool b)
{
    ::app::Uno::Data::Json::AtomicValue__bool___ObjInit_1(__this, b);
}

void Boolean___TypeInit(::uStatic* __this)
{
    Boolean___true = Boolean__New_1(NULL, true);
    Boolean___false = Boolean__New_1(NULL, false);
}

Boolean* Boolean__New_1(::uStatic* __this, bool b)
{
    Boolean* inst = (Boolean*)::uAllocObject(sizeof(Boolean), Boolean__typeof());
    inst->_ObjInit_2(b);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Data.Json/0.12.1/Source/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Null*> Null___singleton;

Null__uType* Null__typeof()
{
    static ::uStaticStrong<Null__uType*> type;
    if (type != NULL) return type;

    type = (Null__uType*)::uAllocClassType(sizeof(Null__uType), "Uno.Data.Json.Null", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Data::Json::Value__typeof());

    return type;
}

void Null___ObjInit_1(Null* __this)
{
    ::app::Uno::Data::Json::Value___ObjInit(__this);
}

void Null___TypeInit(::uStatic* __this)
{
    Null___singleton = Null__New_1(NULL);
}

Null* Null__New_1(::uStatic* __this)
{
    Null* inst = (Null*)::uAllocObject(sizeof(Null), Null__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Data.Json/0.12.1/Source/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Value__uType* Value__typeof()
{
    static ::uStaticStrong<Value__uType*> type;
    if (type != NULL) return type;

    type = (Value__uType*)::uAllocClassType(sizeof(Value__uType), "Uno.Data.Json.Value", false, 0, 0, 0);

    return type;
}

void Value___ObjInit(Value* __this)
{
}

}}}}
