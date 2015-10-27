#include <app/Fuse.Node.h>
#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.DataToResourceBinding__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Resources.ResourceRegistry.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Object.h>
#include <app/Uno.Predicate__object.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Property__Fuse_Resources_ImageSource.h>

namespace app {
namespace Fuse {
namespace Reactive {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DataToResourceBinding__Fuse_Resources_ImageSource__uType* DataToResourceBinding__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<DataToResourceBinding__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (DataToResourceBinding__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(DataToResourceBinding__Fuse_Resources_ImageSource__uType), "Fuse.Reactive.DataToResourceBinding<Fuse.Resources.ImageSource>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Reactive::DataBinding__Fuse_Resources_ImageSource__typeof());
    type->__fp_NewValue = (void(*)(::app::Fuse::Reactive::Binding*, ::uObject*))DataToResourceBinding__Fuse_Resources_ImageSource__NewValue;

    type->SetInterfaces(
        ::app::Fuse::Reactive::IObserver__typeof(), offsetof(DataToResourceBinding__Fuse_Resources_ImageSource__uType, __interface_0),
        ::app::Fuse::Scripting::INameListener__typeof(), offsetof(DataToResourceBinding__Fuse_Resources_ImageSource__uType, __interface_1));

    type->SetStrongRefs(
        "_key", offsetof(DataToResourceBinding__Fuse_Resources_ImageSource, _key));

    return type;
}

void DataToResourceBinding__Fuse_Resources_ImageSource___ObjInit_3(DataToResourceBinding__Fuse_Resources_ImageSource* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* target, ::uString* key)
{
    ::app::Fuse::Reactive::DataBinding__Fuse_Resources_ImageSource___ObjInit_2(__this, target, key);
}

bool DataToResourceBinding__Fuse_Resources_ImageSource__AcceptFunction(DataToResourceBinding__Fuse_Resources_ImageSource* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Resources::ImageSource__typeof());
}

DataToResourceBinding__Fuse_Resources_ImageSource* DataToResourceBinding__Fuse_Resources_ImageSource__New_2(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* target, ::uString* key)
{
    DataToResourceBinding__Fuse_Resources_ImageSource* inst = (DataToResourceBinding__Fuse_Resources_ImageSource*)::uAllocObject(sizeof(DataToResourceBinding__Fuse_Resources_ImageSource), DataToResourceBinding__Fuse_Resources_ImageSource__typeof());
    inst->_ObjInit_3(target, key);
    return inst;
}

void DataToResourceBinding__Fuse_Resources_ImageSource__NewValue(DataToResourceBinding__Fuse_Resources_ImageSource* __this, ::uObject* value)
{
    ::uString* key = ::uAs< ::uString*>(value, ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Equality(NULL, key, NULL))
    {
        return;
    }

    if (::app::Uno::String__op_Inequality(NULL, __this->_key, NULL))
    {
        ::app::Fuse::Resources::ResourceRegistry__RemoveResourceChangedHandler(NULL, __this->_key, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)DataToResourceBinding__Fuse_Resources_ImageSource__OnChanged, __this));
    }

    __this->_key = key;
    ::app::Fuse::Resources::ResourceRegistry__AddResourceChangedHandler(NULL, __this->_key, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)DataToResourceBinding__Fuse_Resources_ImageSource__OnChanged, __this));
    __this->OnChanged();
}

void DataToResourceBinding__Fuse_Resources_ImageSource__OnChanged(DataToResourceBinding__Fuse_Resources_ImageSource* __this)
{
    if (::app::Uno::String__op_Equality(NULL, __this->_key, NULL))
    {
        return;
    }

    ::app::Fuse::Node* n = __this->Node();

    if (n == NULL)
    {
        return;
    }

    ::uObject* v;

    if (::uPtr< ::app::Fuse::Node*>(n)->TryGetResource(__this->_key, ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)DataToResourceBinding__Fuse_Resources_ImageSource__AcceptFunction, __this), &v))
    {
        ::uPtr< ::app::Uno::UX::Property__Fuse_Resources_ImageSource*>(__this->Target())->SetRestState(::uCast< ::app::Fuse::Resources::ImageSource*>(v, ::app::Fuse::Resources::ImageSource__typeof()), (::uObject*)__this);
    }
}

}}}
