#include <app/Fuse.Animations.MasterBase__bool.h>
#include <app/Fuse.Animations.MasterBase__float.h>
#include <app/Fuse.Animations.MasterBase__float4.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Transform.h>
#include <app/Fuse.Animations.Mixer.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <app/Fuse.Animations.MixerHandle__bool.h>
#include <app/Fuse.Animations.MixerHandle__float.h>
#include <app/Fuse.Animations.MixerHandle__float4.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Transform.h>
#include <app/Fuse.Animations.MixOp.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_bool_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_float_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_float4_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Elements-6d92b8d4.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Transform_.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Animations {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__bool__uType* MasterBase__bool__typeof()
{
    static ::uStaticStrong<MasterBase__bool__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__bool__uType*)::uAllocClassType(sizeof(MasterBase__bool__uType), "Fuse.Animations.MasterBase<bool>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__bool__Finalize;
    type->__fp_OnActive = MasterBase__bool__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__bool__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__bool__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__bool, _mixerBase),
        "Handles", offsetof(MasterBase__bool, Handles));

    return type;
}

void MasterBase__bool__Finalize(MasterBase__bool* __this)
{
}

void MasterBase__bool___ObjInit(MasterBase__bool* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__bool__Complete(MasterBase__bool* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__bool__get_PostLayout(MasterBase__bool* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__bool MasterBase__bool__GetFullWeight(MasterBase__bool* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__bool collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__bool();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__bool* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_11(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_8(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__bool>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__bool__OnActive(MasterBase__bool* __this)
{
}

void MasterBase__bool__Register(MasterBase__bool* __this, ::app::Fuse::Animations::MixerHandle__bool* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__bool__Unregister(MasterBase__bool* __this, ::app::Fuse::Animations::MixerHandle__bool* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__float__uType* MasterBase__float__typeof()
{
    static ::uStaticStrong<MasterBase__float__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__float__uType*)::uAllocClassType(sizeof(MasterBase__float__uType), "Fuse.Animations.MasterBase<float>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__float__Finalize;
    type->__fp_OnActive = MasterBase__float__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__float__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__float__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__float, _mixerBase),
        "Handles", offsetof(MasterBase__float, Handles));

    return type;
}

void MasterBase__float__Finalize(MasterBase__float* __this)
{
}

void MasterBase__float___ObjInit(MasterBase__float* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__float__Complete(MasterBase__float* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__float__get_PostLayout(MasterBase__float* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__float MasterBase__float__GetFullWeight(MasterBase__float* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__float collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__float();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__float* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_11(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_8(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__float>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__float__OnActive(MasterBase__float* __this)
{
}

void MasterBase__float__Register(MasterBase__float* __this, ::app::Fuse::Animations::MixerHandle__float* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__float__Unregister(MasterBase__float* __this, ::app::Fuse::Animations::MixerHandle__float* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__float4__uType* MasterBase__float4__typeof()
{
    static ::uStaticStrong<MasterBase__float4__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__float4__uType*)::uAllocClassType(sizeof(MasterBase__float4__uType), "Fuse.Animations.MasterBase<float4>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__float4__Finalize;
    type->__fp_OnActive = MasterBase__float4__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__float4__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__float4__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__float4, _mixerBase),
        "Handles", offsetof(MasterBase__float4, Handles));

    return type;
}

void MasterBase__float4__Finalize(MasterBase__float4* __this)
{
}

void MasterBase__float4___ObjInit(MasterBase__float4* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__float4__Complete(MasterBase__float4* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__float4__get_PostLayout(MasterBase__float4* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__float4 MasterBase__float4__GetFullWeight(MasterBase__float4* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__float4 collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__float4();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__float4* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_11(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_8(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__float4>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__float4__OnActive(MasterBase__float4* __this)
{
}

void MasterBase__float4__Register(MasterBase__float4* __this, ::app::Fuse::Animations::MixerHandle__float4* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__float4__Unregister(MasterBase__float4* __this, ::app::Fuse::Animations::MixerHandle__float4* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Elements_Visibility__uType* MasterBase__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Elements_Visibility__uType), "Fuse.Animations.MasterBase<Fuse.Elements.Visibility>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Elements_Visibility__Finalize;
    type->__fp_OnActive = MasterBase__Fuse_Elements_Visibility__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Elements_Visibility__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Elements_Visibility__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Elements_Visibility, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Elements_Visibility, Handles));

    return type;
}

void MasterBase__Fuse_Elements_Visibility__Finalize(MasterBase__Fuse_Elements_Visibility* __this)
{
}

void MasterBase__Fuse_Elements_Visibility___ObjInit(MasterBase__Fuse_Elements_Visibility* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Elements_Visibility__Complete(MasterBase__Fuse_Elements_Visibility* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Elements_Visibility__get_PostLayout(MasterBase__Fuse_Elements_Visibility* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_Visibility MasterBase__Fuse_Elements_Visibility__GetFullWeight(MasterBase__Fuse_Elements_Visibility* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_Visibility collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_Visibility();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_11(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_8(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_Visibility>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Elements_Visibility__OnActive(MasterBase__Fuse_Elements_Visibility* __this)
{
}

void MasterBase__Fuse_Elements_Visibility__Register(MasterBase__Fuse_Elements_Visibility* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Elements_Visibility__Unregister(MasterBase__Fuse_Elements_Visibility* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->Handles)->Remove(handle);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterBase__Fuse_Transform__uType* MasterBase__Fuse_Transform__typeof()
{
    static ::uStaticStrong<MasterBase__Fuse_Transform__uType*> type;
    if (type != NULL) return type;

    type = (MasterBase__Fuse_Transform__uType*)::uAllocClassType(sizeof(MasterBase__Fuse_Transform__uType), "Fuse.Animations.MasterBase<Fuse.Transform>", false, 1, 2, 0);

    type->__fp_Finalize = (void(*)(::uObject*))MasterBase__Fuse_Transform__Finalize;
    type->__fp_get_PostLayout = MasterBase__Fuse_Transform__get_PostLayout;
    type->__fp_OnActive = MasterBase__Fuse_Transform__OnActive;
    type->__interface_0.__fp_Complete = (void(*)(void*))MasterBase__Fuse_Transform__Complete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterBase__Fuse_Transform__uType, __interface_0));

    type->SetStrongRefs(
        "_mixerBase", offsetof(MasterBase__Fuse_Transform, _mixerBase),
        "Handles", offsetof(MasterBase__Fuse_Transform, Handles));

    return type;
}

void MasterBase__Fuse_Transform__Finalize(MasterBase__Fuse_Transform* __this)
{
}

void MasterBase__Fuse_Transform___ObjInit(MasterBase__Fuse_Transform* __this, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    __this->Handles = ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform___New_1(NULL);
    __this->_mixerBase = mixerBase;
}

void MasterBase__Fuse_Transform__Complete(MasterBase__Fuse_Transform* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Count() == 0)
    {
        if (__this->masterAdded)
        {
            ::app::Fuse::Animations::Mixer__RemoveMaster(NULL, (::uObject*)__this, __this->PostLayout());
            __this->masterAdded = false;
            __this->OnInactive();
        }

        if (__this->_mixerBase != NULL)
        {
            ::uPtr< ::app::Fuse::Animations::MixerBase*>(__this->_mixerBase)->Unused((::uObject*)__this);
        }

        __this->_inactive = true;
        return;
    }

    if (__this->DirtyValue)
    {
        __this->OnComplete();
        __this->DirtyValue = false;
    }
}

bool MasterBase__Fuse_Transform__get_PostLayout(MasterBase__Fuse_Transform* __this)
{
    return false;
}

::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Transform MasterBase__Fuse_Transform__GetFullWeight(MasterBase__Fuse_Transform* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Transform collection_123 = ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Transform();
    float fullWeight = 0.0f;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Transform* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Item(i);

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->MixOp() == 1)
        {
            fullWeight = fullWeight + (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->HasValue() ? ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->Strength : 0.0f);
        }
    }

    float restWeight = 1.0f - ::app::Uno::Math__Min_11(NULL, fullWeight, 1.0f);
    fullWeight = ::app::Uno::Math__Max_8(NULL, 1.0f, fullWeight);
    collection_123 = ::uDefault< ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Transform>();
    collection_123.Rest = restWeight;
    collection_123.Full = fullWeight;
    return collection_123;
}

void MasterBase__Fuse_Transform__OnActive(MasterBase__Fuse_Transform* __this)
{
}

void MasterBase__Fuse_Transform__Register(MasterBase__Fuse_Transform* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* handle)
{
    if (__this->_inactive)
    {
        return;
    }

    int at = 0;

    for (; (at < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Count()) && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(handle)->Priority() <= ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Item(at))->Priority()); ++at)
        ;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Insert(at, handle);

    if (!__this->masterAdded)
    {
        __this->masterAdded = true;
        ::app::Fuse::Animations::Mixer__AddMaster(NULL, (::uObject*)__this, __this->PostLayout());
        __this->OnActive();
    }
}

void MasterBase__Fuse_Transform__Unregister(MasterBase__Fuse_Transform* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* handle)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Remove(handle);
}

}}}
