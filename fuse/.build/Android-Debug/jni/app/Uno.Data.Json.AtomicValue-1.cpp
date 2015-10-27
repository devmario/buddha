#include <app/Uno.Bool.h>
#include <app/Uno.Data.Json.AtomicValue__bool.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Data {
namespace Json {

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Data.Json/0.12.1/Source/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AtomicValue__bool__uType* AtomicValue__bool__typeof()
{
    static ::uStaticStrong<AtomicValue__bool__uType*> type;
    if (type != NULL) return type;

    type = (AtomicValue__bool__uType*)::uAllocClassType(sizeof(AtomicValue__bool__uType), "Uno.Data.Json.AtomicValue<bool>", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Data::Json::Value__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))AtomicValue__bool__ToString;

    return type;
}

void AtomicValue__bool___ObjInit_1(AtomicValue__bool* __this, bool val)
{
    ::app::Uno::Data::Json::Value___ObjInit(__this);
    __this->_val = val;
}

::uString* AtomicValue__bool__ToString(AtomicValue__bool* __this)
{
    return ::app::Uno::Object::ToString(::uBox(::app::Uno::Bool__typeof(), __this->_val));
}

}}}}
