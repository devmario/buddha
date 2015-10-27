#include <app/Fuse.Animations.MixerHandle__bool.h>
#include <app/Fuse.Animations.MixerHandle__float.h>
#include <app/Fuse.Animations.MixerHandle__float4.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_Visibility.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_bool_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_float_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_float4_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Elements-6d92b8d4.h>
#include <app/Uno.Collections.List__Fuse_Layouts_DefinitionBase_ParseDataItem.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_bool_.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-de9d0662.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_float_.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_float4_.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Layouts_DefinitionBase_P-3410cf28.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Animations_MixerHandle_bool___uType* List1_Enumerator__Fuse_Animations_MixerHandle_bool___typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Animations_MixerHandle_bool___uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Animations_MixerHandle_bool___uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Animations_MixerHandle_bool___uType), "Uno.Collections.List1_Enumerator<Fuse.Animations.MixerHandle<bool>>", sizeof(List1_Enumerator__Fuse_Animations_MixerHandle_bool_), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Animations_MixerHandle_bool___Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Animations_MixerHandle_bool___MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_bool___uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_bool___uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_bool_, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_bool_, _source));

    return type;
}

void List1_Enumerator__Fuse_Animations_MixerHandle_bool____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_bool_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Animations_MixerHandle_bool___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_bool_* __this)
{
}

::app::Fuse::Animations::MixerHandle__bool* List1_Enumerator__Fuse_Animations_MixerHandle_bool___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_bool_* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Animations_MixerHandle_bool___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_bool_* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->_source)->_data)->Item< ::app::Fuse::Animations::MixerHandle__bool*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Animations_MixerHandle_bool_ List1_Enumerator__Fuse_Animations_MixerHandle_bool___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_* source)
{
    List1_Enumerator__Fuse_Animations_MixerHandle_bool_ inst = ::uDefault< List1_Enumerator__Fuse_Animations_MixerHandle_bool_>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Animations_MixerHandle_float___uType* List1_Enumerator__Fuse_Animations_MixerHandle_float___typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Animations_MixerHandle_float___uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Animations_MixerHandle_float___uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Animations_MixerHandle_float___uType), "Uno.Collections.List1_Enumerator<Fuse.Animations.MixerHandle<float>>", sizeof(List1_Enumerator__Fuse_Animations_MixerHandle_float_), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Animations_MixerHandle_float___Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Animations_MixerHandle_float___MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_float___uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_float___uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_float_, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_float_, _source));

    return type;
}

void List1_Enumerator__Fuse_Animations_MixerHandle_float____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_float_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Animations_MixerHandle_float___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_float_* __this)
{
}

::app::Fuse::Animations::MixerHandle__float* List1_Enumerator__Fuse_Animations_MixerHandle_float___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_float_* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Animations_MixerHandle_float___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_float_* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->_source)->_data)->Item< ::app::Fuse::Animations::MixerHandle__float*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Animations_MixerHandle_float_ List1_Enumerator__Fuse_Animations_MixerHandle_float___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_* source)
{
    List1_Enumerator__Fuse_Animations_MixerHandle_float_ inst = ::uDefault< List1_Enumerator__Fuse_Animations_MixerHandle_float_>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Animations_MixerHandle_float4___uType* List1_Enumerator__Fuse_Animations_MixerHandle_float4___typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Animations_MixerHandle_float4___uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Animations_MixerHandle_float4___uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Animations_MixerHandle_float4___uType), "Uno.Collections.List1_Enumerator<Fuse.Animations.MixerHandle<float4>>", sizeof(List1_Enumerator__Fuse_Animations_MixerHandle_float4_), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Animations_MixerHandle_float4___Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Animations_MixerHandle_float4___MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_float4___uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_float4___uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_float4_, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_float4_, _source));

    return type;
}

void List1_Enumerator__Fuse_Animations_MixerHandle_float4____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_float4_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Animations_MixerHandle_float4___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_float4_* __this)
{
}

::app::Fuse::Animations::MixerHandle__float4* List1_Enumerator__Fuse_Animations_MixerHandle_float4___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_float4_* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Animations_MixerHandle_float4___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_float4_* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->_source)->_data)->Item< ::app::Fuse::Animations::MixerHandle__float4*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Animations_MixerHandle_float4_ List1_Enumerator__Fuse_Animations_MixerHandle_float4___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_* source)
{
    List1_Enumerator__Fuse_Animations_MixerHandle_float4_ inst = ::uDefault< List1_Enumerator__Fuse_Animations_MixerHandle_float4_>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___uType* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___uType), "Uno.Collections.List1_Enumerator<Fuse.Animations.MixerHandle<Fuse.Elements.Visibility>>", sizeof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_, _source));

    return type;
}

void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this)
{
}

::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->_source)->_data)->Item< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_ List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* source)
{
    List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_ inst = ::uDefault< List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__uType* List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__uType), "Uno.Collections.List1_Enumerator<Fuse.Layouts.DefinitionBase_ParseDataItem>", sizeof(List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem), 3, 1, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Layouts::DefinitionBase_ParseDataItem(*)(void*))List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof(), offsetof(List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem, _source));

    return type;
}

void List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem___ObjInit(List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem* __this, ::app::Uno::Collections::List__Fuse_Layouts_DefinitionBase_ParseDataItem* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_DefinitionBase_ParseDataItem*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__Dispose(List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem* __this)
{
}

::app::Fuse::Layouts::DefinitionBase_ParseDataItem List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__get_Current(List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__MoveNext(List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_DefinitionBase_ParseDataItem*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_DefinitionBase_ParseDataItem*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_DefinitionBase_ParseDataItem*>(__this->_source)->_data)->Item< ::app::Fuse::Layouts::DefinitionBase_ParseDataItem>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Layouts_DefinitionBase_ParseDataItem* source)
{
    List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem inst = ::uDefault< List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem>();
    inst._ObjInit(source);
    return inst;
}

}}}
