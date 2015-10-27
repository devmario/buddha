// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Uno.Collections.ICollection__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IList__Fuse_Resources_ImageSource.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Resources_ImageSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Resources_ImageSource;

struct List__Fuse_Resources_ImageSource__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Resources_ImageSource __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Resources_ImageSource __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Resources_ImageSource __interface_2;
};

List__Fuse_Resources_ImageSource__uType* List__Fuse_Resources_ImageSource__typeof();

::uObject* List__Fuse_Resources_ImageSource__GetEnumerator_boxed(List__Fuse_Resources_ImageSource* __this);
void List__Fuse_Resources_ImageSource___ObjInit(List__Fuse_Resources_ImageSource* __this);
void List__Fuse_Resources_ImageSource__Add(List__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* item);
void List__Fuse_Resources_ImageSource__EnsureCapacity(List__Fuse_Resources_ImageSource* __this);
::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ImageSource List__Fuse_Resources_ImageSource__GetEnumerator(List__Fuse_Resources_ImageSource* __this);
List__Fuse_Resources_ImageSource* List__Fuse_Resources_ImageSource__New_1(::uStatic* __this);

struct List__Fuse_Resources_ImageSource : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Resources_ImageSource__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Resources_ImageSource___ObjInit(this); }
    void Add(::app::Fuse::Resources::ImageSource* item) { List__Fuse_Resources_ImageSource__Add(this, item); }
    void EnsureCapacity() { List__Fuse_Resources_ImageSource__EnsureCapacity(this); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ImageSource GetEnumerator();
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Resources_ImageSource.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ImageSource List__Fuse_Resources_ImageSource::GetEnumerator() { return List__Fuse_Resources_ImageSource__GetEnumerator(this); }

}}}


#endif
