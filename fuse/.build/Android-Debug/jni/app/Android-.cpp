#include <app/Android.Bootstrapper.h>
#include <BootstrapperImpl_Android.h>

namespace app {
namespace Android {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Android/Source/Base/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Bootstrapper__uType* Bootstrapper__typeof()
{
    static ::uStaticStrong<Bootstrapper__uType*> type;
    if (type != NULL) return type;

    type = (Bootstrapper__uType*)::uAllocClassType(sizeof(Bootstrapper__uType), "Android.Bootstrapper");

    return type;
}

void Bootstrapper___RegisterTypes(::uStatic* __this)
{
    ::BootstrapperImpl();
}

void Bootstrapper___TypeInit(::uStatic* __this)
{
    Bootstrapper___RegisterTypes(NULL);
}

}}
