// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Uno.Collections.ICollection__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IList__Fuse_Resources_ImageSource.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Resources_ImageSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Resources_ImageSource;

struct ObservableList__Fuse_Resources_ImageSource__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Resources_ImageSource __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Resources_ImageSource __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Resources_ImageSource __interface_2;
};

ObservableList__Fuse_Resources_ImageSource__uType* ObservableList__Fuse_Resources_ImageSource__typeof();

void ObservableList__Fuse_Resources_ImageSource___ObjInit(ObservableList__Fuse_Resources_ImageSource* __this, ::uDelegate* added, ::uDelegate* removed);
void ObservableList__Fuse_Resources_ImageSource__Add(ObservableList__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* item);
::uObject* ObservableList__Fuse_Resources_ImageSource__GetEnumerator(ObservableList__Fuse_Resources_ImageSource* __this);
ObservableList__Fuse_Resources_ImageSource* ObservableList__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);

struct ObservableList__Fuse_Resources_ImageSource : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Resources_ImageSource___ObjInit(this, added, removed); }
    void Add(::app::Fuse::Resources::ImageSource* item) { ObservableList__Fuse_Resources_ImageSource__Add(this, item); }
    ::uObject* GetEnumerator() { return ObservableList__Fuse_Resources_ImageSource__GetEnumerator(this); }
};

}}}


#endif
