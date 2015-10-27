#include <app/Experimental.Cache.CacheLoaded.h>
#include <app/Experimental.Cache.ICache.h>
#include <app/Experimental.Cache.ICacheReader.h>
#include <app/Experimental.Cache.ICacheWriter.h>
#include <app/Experimental.Cache.ProxyStream.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Int.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.Long.h>
#include <app/Uno.NotSupportedException.h>
#include <app/Uno.String.h>

namespace app {
namespace Experimental {
namespace Cache {

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Http/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* CacheLoaded__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Experimental.Cache.CacheLoaded", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Experimental::Cache::ICacheReader__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Http/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICache__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Experimental.Cache.ICache");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Http/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICacheReader__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Experimental.Cache.ICacheReader");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Http/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICacheWriter__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Experimental.Cache.ICacheWriter");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Http/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ProxyStream__uType* ProxyStream__typeof()
{
    static ::uStaticStrong<ProxyStream__uType*> type;
    if (type != NULL) return type;

    type = (ProxyStream__uType*)::uAllocClassType(sizeof(ProxyStream__uType), "Experimental.Cache.ProxyStream", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::IO::Stream__typeof());
    type->__fp_Close = (void(*)(::app::Uno::IO::Stream*))ProxyStream__Close;
    type->__fp_Dispose_1 = (void(*)(::app::Uno::IO::Stream*, bool))ProxyStream__Dispose_1;
    type->__fp_Flush = (void(*)(::app::Uno::IO::Stream*))ProxyStream__Flush;
    type->__fp_get_Length = (::uLong(*)(::app::Uno::IO::Stream*))ProxyStream__get_Length;
    type->__fp_get_Position = (::uLong(*)(::app::Uno::IO::Stream*))ProxyStream__get_Position;
    type->__fp_Read = (int(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))ProxyStream__Read;
    type->__fp_set_Position = (void(*)(::app::Uno::IO::Stream*, ::uLong))ProxyStream__set_Position;
    type->__fp_Write = (void(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))ProxyStream__Write;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(ProxyStream__uType, __interface_0));

    type->SetStrongRefs(
        "Backing", offsetof(ProxyStream, Backing));

    return type;
}

void ProxyStream__Close(ProxyStream* __this)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Close();
}

void ProxyStream__Dispose_1(ProxyStream* __this, bool disposing)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Dispose_1(disposing);
}

void ProxyStream__Flush(ProxyStream* __this)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Flush();
}

::uLong ProxyStream__get_Length(ProxyStream* __this)
{
    return ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Length();
}

::uLong ProxyStream__get_Position(ProxyStream* __this)
{
    return ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Position();
}

int ProxyStream__Read(ProxyStream* __this, ::uArray* dst, int byteOffset, int byteCount)
{
    return ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Read(dst, byteOffset, byteCount);
}

void ProxyStream__set_Position(ProxyStream* __this, ::uLong value)
{
    U_THROW(::app::Uno::NotSupportedException__New_3(NULL));
}

void ProxyStream__Write(ProxyStream* __this, ::uArray* src, int byteOffset, int byteCount)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->Backing)->Write(src, byteOffset, byteCount);
}

}}}
