#include <app/Fuse.Node.h>
#include <app/Fuse.Reactive.DataBinding__bool.h>
#include <app/Fuse.Reactive.DataBinding__float.h>
#include <app/Fuse.Reactive.DataBinding__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Reactive.DataBinding__string.h>
#include <app/Fuse.Reactive.IObservable.h>
#include <app/Fuse.Reactive.ISubscription.h>
#include <app/Fuse.Reactive.Marshal.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Scripting.NameRegistry.h>
#include <app/Uno.Action__bool.h>
#include <app/Uno.Action__float.h>
#include <app/Uno.Action__Fuse_Resources_ImageSource.h>
#include <app/Uno.Action__string.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Predicate__object.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Property__bool.h>
#include <app/Uno.UX.Property__float.h>
#include <app/Uno.UX.Property__Fuse_Resources_ImageSource.h>
#include <app/Uno.UX.Property__string.h>
#include <app/Uno.UX.ValueChangedArgs__bool.h>
#include <app/Uno.UX.ValueChangedArgs__float.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Resources_ImageSource.h>
#include <app/Uno.UX.ValueChangedArgs__string.h>
#include <app/Uno.UX.ValueChangedHandler__bool.h>
#include <app/Uno.UX.ValueChangedHandler__float.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Resources_ImageSource.h>
#include <app/Uno.UX.ValueChangedHandler__string.h>

namespace app {
namespace Fuse {
namespace Reactive {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__bool__uType* DataBinding__bool__typeof()
{
    static ::uStaticStrong<DataBinding__bool__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__bool__uType*)::uAllocClassType(sizeof(DataBinding__bool__uType), "Fuse.Reactive.DataBinding<bool>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__bool__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__bool__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__bool__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__bool__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__bool__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__bool__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__bool__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__bool__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__bool__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__bool__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__bool__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__bool__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__bool, _currentValue),
        "_subscription", offsetof(DataBinding__bool, _subscription),
        "_Target", offsetof(DataBinding__bool, _Target));

    return type;
}

void DataBinding__bool___ObjInit_2(DataBinding__bool* __this, ::app::Uno::UX::Property__bool* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__bool__Acceptor(DataBinding__bool* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::Bool__typeof());
}

void DataBinding__bool__Fuse_Reactive_IObserver_OnAdd(DataBinding__bool* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__bool__Fuse_Reactive_IObserver_OnFailed(DataBinding__bool* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__bool__Fuse_Reactive_IObserver_OnNewAll(DataBinding__bool* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__bool__Fuse_Reactive_IObserver_OnNewAt(DataBinding__bool* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__bool__Fuse_Reactive_IObserver_OnRemove(DataBinding__bool* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__bool__Fuse_Reactive_IObserver_OnSet(DataBinding__bool* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__bool__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__bool* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__bool* DataBinding__bool__get_Target(DataBinding__bool* __this)
{
    return __this->_Target;
}

DataBinding__bool* DataBinding__bool__New_1(::uStatic* __this, ::app::Uno::UX::Property__bool* target, ::uString* key)
{
    DataBinding__bool* inst = (DataBinding__bool*)::uAllocObject(sizeof(DataBinding__bool), DataBinding__bool__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__bool__NewValue(DataBinding__bool* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::Bool__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__bool__OnRooted(DataBinding__bool* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__bool__typeof(), (const void*)DataBinding__bool__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__bool__OnUnrooted(DataBinding__bool* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__bool__typeof(), (const void*)DataBinding__bool__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__bool__OnValueChanged(DataBinding__bool* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__bool* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__bool*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox(::app::Uno::Bool__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__bool*>(args)->Value()));
    }
}

void DataBinding__bool__PushValue(DataBinding__bool* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::Bool__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Target())->SetRestState(::uUnbox< bool>(::app::Uno::Bool__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::Bool__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Target())->SetRestState(::uUnbox< bool>(::app::Uno::Bool__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__bool__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::Bool__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Target())->SetRestState(::uUnbox< bool>(::app::Uno::Bool__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__bool(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__bool__typeof(), (const void*)DataBinding__bool__SetValue, __this));
}

void DataBinding__bool__set_Target(DataBinding__bool* __this, ::app::Uno::UX::Property__bool* value)
{
    __this->_Target = value;
}

void DataBinding__bool__SetValue(DataBinding__bool* __this, bool value)
{
    ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__float__uType* DataBinding__float__typeof()
{
    static ::uStaticStrong<DataBinding__float__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__float__uType*)::uAllocClassType(sizeof(DataBinding__float__uType), "Fuse.Reactive.DataBinding<float>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__float__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__float__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__float__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__float__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__float__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__float__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__float__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__float__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__float__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__float__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__float__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__float__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__float, _currentValue),
        "_subscription", offsetof(DataBinding__float, _subscription),
        "_Target", offsetof(DataBinding__float, _Target));

    return type;
}

void DataBinding__float___ObjInit_2(DataBinding__float* __this, ::app::Uno::UX::Property__float* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__float__Acceptor(DataBinding__float* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::Float__typeof());
}

void DataBinding__float__Fuse_Reactive_IObserver_OnAdd(DataBinding__float* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__float__Fuse_Reactive_IObserver_OnFailed(DataBinding__float* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__float__Fuse_Reactive_IObserver_OnNewAll(DataBinding__float* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__float__Fuse_Reactive_IObserver_OnNewAt(DataBinding__float* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__float__Fuse_Reactive_IObserver_OnRemove(DataBinding__float* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__float__Fuse_Reactive_IObserver_OnSet(DataBinding__float* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__float__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__float* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__float* DataBinding__float__get_Target(DataBinding__float* __this)
{
    return __this->_Target;
}

DataBinding__float* DataBinding__float__New_1(::uStatic* __this, ::app::Uno::UX::Property__float* target, ::uString* key)
{
    DataBinding__float* inst = (DataBinding__float*)::uAllocObject(sizeof(DataBinding__float), DataBinding__float__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__float__NewValue(DataBinding__float* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::Float__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__float__OnRooted(DataBinding__float* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__float*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__float__typeof(), (const void*)DataBinding__float__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__float__OnUnrooted(DataBinding__float* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__float*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__float__typeof(), (const void*)DataBinding__float__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__float__OnValueChanged(DataBinding__float* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__float* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__float*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), ::uBox(::app::Uno::Float__typeof(), ::uPtr< ::app::Uno::UX::ValueChangedArgs__float*>(args)->Value()));
    }
}

void DataBinding__float__PushValue(DataBinding__float* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::Float__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__float*>(__this->Target())->SetRestState(::uUnbox< float>(::app::Uno::Float__typeof(), newValue), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::Float__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__float*>(__this->Target())->SetRestState(::uUnbox< float>(::app::Uno::Float__typeof(), (::uObject*)k), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__float__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::Float__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__float*>(__this->Target())->SetRestState(::uUnbox< float>(::app::Uno::Float__typeof(), candidate), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__float(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__float__typeof(), (const void*)DataBinding__float__SetValue, __this));
}

void DataBinding__float__set_Target(DataBinding__float* __this, ::app::Uno::UX::Property__float* value)
{
    __this->_Target = value;
}

void DataBinding__float__SetValue(DataBinding__float* __this, float value)
{
    ::uPtr< ::app::Uno::UX::Property__float*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__Fuse_Resources_ImageSource__uType* DataBinding__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<DataBinding__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(DataBinding__Fuse_Resources_ImageSource__uType), "Fuse.Reactive.DataBinding<Fuse.Resources.ImageSource>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__Fuse_Resources_ImageSource__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Resources_ImageSource__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__Fuse_Resources_ImageSource__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__Fuse_Resources_ImageSource__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__Fuse_Resources_ImageSource__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__Fuse_Resources_ImageSource__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__Fuse_Resources_ImageSource, _currentValue),
        "_subscription", offsetof(DataBinding__Fuse_Resources_ImageSource, _subscription),
        "_Target", offsetof(DataBinding__Fuse_Resources_ImageSource, _Target));

    return type;
}

void DataBinding__Fuse_Resources_ImageSource___ObjInit_2(DataBinding__Fuse_Resources_ImageSource* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__Fuse_Resources_ImageSource__Acceptor(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Resources::ImageSource__typeof());
}

void DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnAdd(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnFailed(DataBinding__Fuse_Resources_ImageSource* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnNewAll(DataBinding__Fuse_Resources_ImageSource* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnNewAt(DataBinding__Fuse_Resources_ImageSource* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnRemove(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__Fuse_Resources_ImageSource__Fuse_Reactive_IObserver_OnSet(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__Fuse_Resources_ImageSource__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__Fuse_Resources_ImageSource* DataBinding__Fuse_Resources_ImageSource__get_Target(DataBinding__Fuse_Resources_ImageSource* __this)
{
    return __this->_Target;
}

void DataBinding__Fuse_Resources_ImageSource__NewValue(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Fuse::Resources::ImageSource__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__Fuse_Resources_ImageSource__OnRooted(DataBinding__Fuse_Resources_ImageSource* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Resources_ImageSource__typeof(), (const void*)DataBinding__Fuse_Resources_ImageSource__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__Fuse_Resources_ImageSource__OnUnrooted(DataBinding__Fuse_Resources_ImageSource* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__Fuse_Resources_ImageSource__typeof(), (const void*)DataBinding__Fuse_Resources_ImageSource__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__Fuse_Resources_ImageSource__OnValueChanged(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__Fuse_Resources_ImageSource* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Resources_ImageSource*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), (::uObject*)::uPtr< ::app::Uno::UX::ValueChangedArgs__Fuse_Resources_ImageSource*>(args)->Value());
    }
}

void DataBinding__Fuse_Resources_ImageSource__PushValue(DataBinding__Fuse_Resources_ImageSource* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Fuse::Resources::ImageSource__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Resources::ImageSource*>(newValue, ::app::Fuse::Resources::ImageSource__typeof()), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Fuse::Resources::ImageSource__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Resources::ImageSource*>((::uObject*)k, ::app::Fuse::Resources::ImageSource__typeof()), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__Fuse_Resources_ImageSource__Acceptor, __this));

            if (::uIs(candidate, ::app::Fuse::Resources::ImageSource__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Resources::ImageSource*>(candidate, ::app::Fuse::Resources::ImageSource__typeof()), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__Fuse_Resources_ImageSource(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Resources_ImageSource__typeof(), (const void*)DataBinding__Fuse_Resources_ImageSource__SetValue, __this));
}

void DataBinding__Fuse_Resources_ImageSource__set_Target(DataBinding__Fuse_Resources_ImageSource* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* value)
{
    __this->_Target = value;
}

void DataBinding__Fuse_Resources_ImageSource__SetValue(DataBinding__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataBinding__string__uType* DataBinding__string__typeof()
{
    static ::uStaticStrong<DataBinding__string__uType*> type;
    if (type != NULL) return type;

    type = (DataBinding__string__uType*)::uAllocClassType(sizeof(DataBinding__string__uType), "Fuse.Reactive.DataBinding<string>", false, 2, 3, 0);

    type->SetBaseType(::app::Fuse::Reactive::Binding__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataBinding__string__NewValue;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__string__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DataBinding__string__OnUnrooted;
    type->__interface_0.__fp_OnSet = (void(*)(void*, ::uObject*))DataBinding__string__Fuse_Reactive_IObserver_OnSet;
    type->__interface_0.__fp_OnAdd = (void(*)(void*, ::uObject*))DataBinding__string__Fuse_Reactive_IObserver_OnAdd;
    type->__interface_0.__fp_OnNewAt = (void(*)(void*, int, ::uObject*))DataBinding__string__Fuse_Reactive_IObserver_OnNewAt;
    type->__interface_0.__fp_OnFailed = (void(*)(void*, ::uString*))DataBinding__string__Fuse_Reactive_IObserver_OnFailed;
    type->__interface_0.__fp_OnNewAll = (void(*)(void*, int))DataBinding__string__Fuse_Reactive_IObserver_OnNewAll;
    type->__interface_0.__fp_OnRemove = (void(*)(void*, ::uObject*, int))DataBinding__string__Fuse_Reactive_IObserver_OnRemove;
    type->__interface_1.__fp_OnNameChanged = (void(*)(void*, ::uObject*, ::uString*))DataBinding__string__Fuse_Scripting_INameListener_OnNameChanged;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataBinding__string__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataBinding__string__uType, __interface_1));

    type->SetStrongRefs(
        "_currentValue", offsetof(DataBinding__string, _currentValue),
        "_subscription", offsetof(DataBinding__string, _subscription),
        "_Target", offsetof(DataBinding__string, _Target));

    return type;
}

void DataBinding__string___ObjInit_2(DataBinding__string* __this, ::app::Uno::UX::Property__string* target, ::uString* key)
{
    ::app::Fuse::Reactive::Binding___ObjInit_1(__this, key);
    __this->Target(target);
}

bool DataBinding__string__Acceptor(DataBinding__string* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Uno::String__typeof());
}

void DataBinding__string__Fuse_Reactive_IObserver_OnAdd(DataBinding__string* __this, ::uObject* addedValue)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnAdd")));
}

void DataBinding__string__Fuse_Reactive_IObserver_OnFailed(DataBinding__string* __this, ::uString* message)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnFailed")));
}

void DataBinding__string__Fuse_Reactive_IObserver_OnNewAll(DataBinding__string* __this, int length)
{
    if (length > 0)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAll")));
    }
}

void DataBinding__string__Fuse_Reactive_IObserver_OnNewAt(DataBinding__string* __this, int index, ::uObject* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnNewAt")));
}

void DataBinding__string__Fuse_Reactive_IObserver_OnRemove(DataBinding__string* __this, ::uObject* value, int index)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not handled: OnRemoveAt")));
}

void DataBinding__string__Fuse_Reactive_IObserver_OnSet(DataBinding__string* __this, ::uObject* newValue)
{
    __this->PushValue(newValue);
}

void DataBinding__string__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__string* __this, ::uObject* obj, ::uString* name)
{
    __this->PushValue(__this->_currentValue);
}

::app::Uno::UX::Property__string* DataBinding__string__get_Target(DataBinding__string* __this)
{
    return __this->_Target;
}

DataBinding__string* DataBinding__string__New_1(::uStatic* __this, ::app::Uno::UX::Property__string* target, ::uString* key)
{
    DataBinding__string* inst = (DataBinding__string*)::uAllocObject(sizeof(DataBinding__string), DataBinding__string__typeof());
    inst->_ObjInit_2(target, key);
    return inst;
}

void DataBinding__string__NewValue(DataBinding__string* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::String__typeof()))
    {
        __this->PushValue(value);
    }
    else if (::uIs(value, ::app::Fuse::Reactive::IObservable__typeof()))
    {
        if (__this->_subscription != NULL)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
            __this->_subscription = NULL;
        }

        ::uObject* obs = ::uAs< ::uObject*>(value, ::app::Fuse::Reactive::IObservable__typeof());

        if (obs != NULL)
        {
            __this->_subscription = ::app::Fuse::Reactive::IObservable::Subscribe(::uPtr< ::uObject*>(obs), (::uObject*)__this);
        }
    }
    else
    {
        __this->PushValue(value);
    }
}

void DataBinding__string__OnRooted(DataBinding__string* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)DataBinding__string__OnValueChanged, __this));
    ::app::Fuse::Reactive::Binding__OnRooted(__this, n);
}

void DataBinding__string__OnUnrooted(DataBinding__string* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
    ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)DataBinding__string__OnValueChanged, __this));

    if (__this->_subscription != NULL)
    {
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_subscription));
        __this->_subscription = NULL;
    }

    ::app::Fuse::Reactive::Binding__OnUnrooted(__this, n);
}

void DataBinding__string__OnValueChanged(DataBinding__string* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args)
{
    if ((__this->_subscription != NULL) && (::uPtr< ::app::Uno::UX::ValueChangedArgs__string*>(args)->Origin() != __this))
    {
        ::app::Fuse::Reactive::ISubscription::SetExclusive(::uPtr< ::uObject*>(__this->_subscription), (::uObject*)::uPtr< ::app::Uno::UX::ValueChangedArgs__string*>(args)->Value());
    }
}

void DataBinding__string__PushValue(DataBinding__string* __this, ::uObject* newValue)
{
    __this->_currentValue = newValue;

    if (::uIs(newValue, ::app::Uno::String__typeof()))
    {
        ::app::Fuse::Scripting::NameRegistry__RemoveListener(NULL, (::uObject*)__this);
        ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->SetRestState(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), (::uObject*)__this);
        return;
    }

    ::uString* name = ::uAs< ::uString*>(newValue, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Inequality(NULL, name, NULL) && (__this->Node() != NULL))
    {
        ::app::Fuse::Scripting::NameRegistry__AddListener(NULL, name, (::uObject*)__this);
        ::app::Fuse::Node* k = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindNodeByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()));

        if (::uIs(k, ::app::Uno::String__typeof()))
        {
            ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->SetRestState(::uCast< ::uString*>((::uObject*)k, ::app::Uno::String__typeof()), (::uObject*)__this);
            return;
        }
        else
        {
            ::uObject* candidate = ::uPtr< ::app::Fuse::Node*>(__this->Node())->FindObjectByName(::uCast< ::uString*>(newValue, ::app::Uno::String__typeof()), ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataBinding__string__Acceptor, __this));

            if (::uIs(candidate, ::app::Uno::String__typeof()))
            {
                ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->SetRestState(::uCast< ::uString*>(candidate, ::app::Uno::String__typeof()), (::uObject*)__this);
                return;
            }
        }
    }

    ::app::Fuse::Reactive::Marshal__ToType__string(NULL, newValue, ::uNewDelegateNonVirt(::app::Uno::Action__string__typeof(), (const void*)DataBinding__string__SetValue, __this));
}

void DataBinding__string__set_Target(DataBinding__string* __this, ::app::Uno::UX::Property__string* value)
{
    __this->_Target = value;
}

void DataBinding__string__SetValue(DataBinding__string* __this, ::uString* value)
{
    ::uPtr< ::app::Uno::UX::Property__string*>(__this->Target())->SetRestState(value, (::uObject*)__this);
}

}}}
