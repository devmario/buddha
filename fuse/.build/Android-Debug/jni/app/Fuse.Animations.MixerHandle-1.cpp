#include <app/Fuse.Animations.MasterBase__bool.h>
#include <app/Fuse.Animations.MasterBase__float.h>
#include <app/Fuse.Animations.MasterBase__float4.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Transform.h>
#include <app/Fuse.Animations.MixerHandle__bool.h>
#include <app/Fuse.Animations.MixerHandle__float.h>
#include <app/Fuse.Animations.MixerHandle__float4.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Transform.h>
#include <app/Fuse.Animations.MixOp.h>
#include <app/Fuse.Elements.Visibility.h>
#include <app/Fuse.Transform.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Animations {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__bool__uType* MixerHandle__bool__typeof()
{
    static ::uStaticStrong<MixerHandle__bool__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__bool__uType*)::uAllocClassType(sizeof(MixerHandle__bool__uType), "Fuse.Animations.MixerHandle<bool>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__bool__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, bool, float))MixerHandle__bool__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__bool__typeof(), offsetof(MixerHandle__bool__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__bool, Master));

    return type;
}

void MixerHandle__bool___ObjInit(MixerHandle__bool* __this, ::app::Fuse::Animations::MasterBase__bool* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__bool*>(__this->Master)->Register(__this);
}

bool MixerHandle__bool__get_HasValue(MixerHandle__bool* __this)
{
    return __this->_hasValue;
}

int MixerHandle__bool__get_MixOp(MixerHandle__bool* __this)
{
    return __this->_MixOp;
}

int MixerHandle__bool__get_Priority(MixerHandle__bool* __this)
{
    return __this->_Priority;
}

MixerHandle__bool* MixerHandle__bool__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__bool* master, int mode, int priority)
{
    MixerHandle__bool* inst = (MixerHandle__bool*)::uAllocObject(sizeof(MixerHandle__bool), MixerHandle__bool__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__bool__Set(MixerHandle__bool* __this, bool value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__bool*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__bool__set_MixOp(MixerHandle__bool* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__bool__set_Priority(MixerHandle__bool* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__bool__Unregister(MixerHandle__bool* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__bool*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__bool*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__float__uType* MixerHandle__float__typeof()
{
    static ::uStaticStrong<MixerHandle__float__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__float__uType*)::uAllocClassType(sizeof(MixerHandle__float__uType), "Fuse.Animations.MixerHandle<float>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__float__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, float, float))MixerHandle__float__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__float__typeof(), offsetof(MixerHandle__float__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__float, Master));

    return type;
}

void MixerHandle__float___ObjInit(MixerHandle__float* __this, ::app::Fuse::Animations::MasterBase__float* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__float*>(__this->Master)->Register(__this);
}

bool MixerHandle__float__get_HasValue(MixerHandle__float* __this)
{
    return __this->_hasValue;
}

int MixerHandle__float__get_MixOp(MixerHandle__float* __this)
{
    return __this->_MixOp;
}

int MixerHandle__float__get_Priority(MixerHandle__float* __this)
{
    return __this->_Priority;
}

MixerHandle__float* MixerHandle__float__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__float* master, int mode, int priority)
{
    MixerHandle__float* inst = (MixerHandle__float*)::uAllocObject(sizeof(MixerHandle__float), MixerHandle__float__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__float__Set(MixerHandle__float* __this, float value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__float*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__float__set_MixOp(MixerHandle__float* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__float__set_Priority(MixerHandle__float* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__float__Unregister(MixerHandle__float* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__float*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__float*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__float4__uType* MixerHandle__float4__typeof()
{
    static ::uStaticStrong<MixerHandle__float4__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__float4__uType*)::uAllocClassType(sizeof(MixerHandle__float4__uType), "Fuse.Animations.MixerHandle<float4>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__float4__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Uno::Float4, float))MixerHandle__float4__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__float4__typeof(), offsetof(MixerHandle__float4__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__float4, Master));

    return type;
}

void MixerHandle__float4___ObjInit(MixerHandle__float4* __this, ::app::Fuse::Animations::MasterBase__float4* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__float4*>(__this->Master)->Register(__this);
}

bool MixerHandle__float4__get_HasValue(MixerHandle__float4* __this)
{
    return __this->_hasValue;
}

int MixerHandle__float4__get_MixOp(MixerHandle__float4* __this)
{
    return __this->_MixOp;
}

int MixerHandle__float4__get_Priority(MixerHandle__float4* __this)
{
    return __this->_Priority;
}

MixerHandle__float4* MixerHandle__float4__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__float4* master, int mode, int priority)
{
    MixerHandle__float4* inst = (MixerHandle__float4*)::uAllocObject(sizeof(MixerHandle__float4), MixerHandle__float4__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__float4__Set(MixerHandle__float4* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__float4*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__float4__set_MixOp(MixerHandle__float4* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__float4__set_Priority(MixerHandle__float4* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__float4__Unregister(MixerHandle__float4* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__float4*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__float4*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Elements_Visibility__uType* MixerHandle__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Elements_Visibility__uType), "Fuse.Animations.MixerHandle<Fuse.Elements.Visibility>", false, 1, 1, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Elements_Visibility__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, int, float))MixerHandle__Fuse_Elements_Visibility__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Visibility__typeof(), offsetof(MixerHandle__Fuse_Elements_Visibility__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Elements_Visibility, Master));

    return type;
}

void MixerHandle__Fuse_Elements_Visibility___ObjInit(MixerHandle__Fuse_Elements_Visibility* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Elements_Visibility__get_HasValue(MixerHandle__Fuse_Elements_Visibility* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Elements_Visibility__get_MixOp(MixerHandle__Fuse_Elements_Visibility* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Elements_Visibility__get_Priority(MixerHandle__Fuse_Elements_Visibility* __this)
{
    return __this->_Priority;
}

MixerHandle__Fuse_Elements_Visibility* MixerHandle__Fuse_Elements_Visibility__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility* master, int mode, int priority)
{
    MixerHandle__Fuse_Elements_Visibility* inst = (MixerHandle__Fuse_Elements_Visibility*)::uAllocObject(sizeof(MixerHandle__Fuse_Elements_Visibility), MixerHandle__Fuse_Elements_Visibility__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Elements_Visibility__Set(MixerHandle__Fuse_Elements_Visibility* __this, int value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Elements_Visibility__set_MixOp(MixerHandle__Fuse_Elements_Visibility* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Elements_Visibility__set_Priority(MixerHandle__Fuse_Elements_Visibility* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Elements_Visibility__Unregister(MixerHandle__Fuse_Elements_Visibility* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerHandle__Fuse_Transform__uType* MixerHandle__Fuse_Transform__typeof()
{
    static ::uStaticStrong<MixerHandle__Fuse_Transform__uType*> type;
    if (type != NULL) return type;

    type = (MixerHandle__Fuse_Transform__uType*)::uAllocClassType(sizeof(MixerHandle__Fuse_Transform__uType), "Fuse.Animations.MixerHandle<Fuse.Transform>", false, 1, 2, 0);

    type->__interface_0.__fp_Unregister = (void(*)(void*))MixerHandle__Fuse_Transform__Unregister;
    type->__interface_0.__fp_Set = (void(*)(void*, ::app::Fuse::Transform*, float))MixerHandle__Fuse_Transform__Set;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerHandle__Fuse_Transform__typeof(), offsetof(MixerHandle__Fuse_Transform__uType, __interface_0));

    type->SetStrongRefs(
        "Master", offsetof(MixerHandle__Fuse_Transform, Master),
        "Value", offsetof(MixerHandle__Fuse_Transform, Value));

    return type;
}

void MixerHandle__Fuse_Transform___ObjInit(MixerHandle__Fuse_Transform* __this, ::app::Fuse::Animations::MasterBase__Fuse_Transform* master, int mode, int priority)
{
    __this->Priority(priority);
    __this->Master = master;
    __this->MixOp(mode);
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Transform*>(__this->Master)->Register(__this);
}

bool MixerHandle__Fuse_Transform__get_HasValue(MixerHandle__Fuse_Transform* __this)
{
    return __this->_hasValue;
}

int MixerHandle__Fuse_Transform__get_MixOp(MixerHandle__Fuse_Transform* __this)
{
    return __this->_MixOp;
}

int MixerHandle__Fuse_Transform__get_Priority(MixerHandle__Fuse_Transform* __this)
{
    return __this->_Priority;
}

MixerHandle__Fuse_Transform* MixerHandle__Fuse_Transform__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Transform* master, int mode, int priority)
{
    MixerHandle__Fuse_Transform* inst = (MixerHandle__Fuse_Transform*)::uAllocObject(sizeof(MixerHandle__Fuse_Transform), MixerHandle__Fuse_Transform__typeof());
    inst->_ObjInit(master, mode, priority);
    return inst;
}

void MixerHandle__Fuse_Transform__Set(MixerHandle__Fuse_Transform* __this, ::app::Fuse::Transform* value, float strength)
{
    if (__this->Master == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("invalid MixerHandle.Set post-Unregister"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno"), 1791);
        return;
    }

    __this->_hasValue = true;
    __this->Value = value;
    __this->Strength = strength;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Transform*>(__this->Master)->DirtyValue = true;
}

void MixerHandle__Fuse_Transform__set_MixOp(MixerHandle__Fuse_Transform* __this, int value)
{
    __this->_MixOp = value;
}

void MixerHandle__Fuse_Transform__set_Priority(MixerHandle__Fuse_Transform* __this, int value)
{
    __this->_Priority = value;
}

void MixerHandle__Fuse_Transform__Unregister(MixerHandle__Fuse_Transform* __this)
{
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Transform*>(__this->Master)->Unregister(__this);
    __this->_hasValue = false;
    ::uPtr< ::app::Fuse::Animations::MasterBase__Fuse_Transform*>(__this->Master)->DirtyValue = true;
    __this->Master = NULL;
}

}}}
