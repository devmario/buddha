// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_TO_RESOURCE_BINDING__FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_FUSE_REACTIVE_DATA_TO_RESOURCE_BINDING__FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Fuse.Reactive.DataBinding__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Resources_ImageSource; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataToResourceBinding__Fuse_Resources_ImageSource;

struct DataToResourceBinding__Fuse_Resources_ImageSource__uType : ::app::Fuse::Reactive::DataBinding__Fuse_Resources_ImageSource__uType
{
};

DataToResourceBinding__Fuse_Resources_ImageSource__uType* DataToResourceBinding__Fuse_Resources_ImageSource__typeof();

void DataToResourceBinding__Fuse_Resources_ImageSource___ObjInit_3(DataToResourceBinding__Fuse_Resources_ImageSource* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* target, ::uString* key);
bool DataToResourceBinding__Fuse_Resources_ImageSource__AcceptFunction(DataToResourceBinding__Fuse_Resources_ImageSource* __this, ::uObject* obj);
DataToResourceBinding__Fuse_Resources_ImageSource* DataToResourceBinding__Fuse_Resources_ImageSource__New_2(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Resources_ImageSource* target, ::uString* key);
void DataToResourceBinding__Fuse_Resources_ImageSource__NewValue(DataToResourceBinding__Fuse_Resources_ImageSource* __this, ::uObject* value);
void DataToResourceBinding__Fuse_Resources_ImageSource__OnChanged(DataToResourceBinding__Fuse_Resources_ImageSource* __this);

struct DataToResourceBinding__Fuse_Resources_ImageSource : ::app::Fuse::Reactive::DataBinding__Fuse_Resources_ImageSource
{
    ::uStrong< ::uString*> _key;

    void _ObjInit_3(::app::Uno::UX::Property__Fuse_Resources_ImageSource* target, ::uString* key) { DataToResourceBinding__Fuse_Resources_ImageSource___ObjInit_3(this, target, key); }
    bool AcceptFunction(::uObject* obj) { return DataToResourceBinding__Fuse_Resources_ImageSource__AcceptFunction(this, obj); }
    void OnChanged() { DataToResourceBinding__Fuse_Resources_ImageSource__OnChanged(this); }
};

}}}


#endif
