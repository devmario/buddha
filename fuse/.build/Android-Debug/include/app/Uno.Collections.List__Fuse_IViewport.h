// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_I_VIEWPORT_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_I_VIEWPORT_H__

#include <app/Uno.Collections.ICollection__Fuse_IViewport.h>
#include <app/Uno.Collections.IList__Fuse_IViewport.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_IViewport;

struct List__Fuse_IViewport__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_IViewport __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_IViewport __interface_1;
};

List__Fuse_IViewport__uType* List__Fuse_IViewport__typeof();

void List__Fuse_IViewport___ObjInit(List__Fuse_IViewport* __this);
void List__Fuse_IViewport__Add(List__Fuse_IViewport* __this, ::uObject* item);
void List__Fuse_IViewport__BoundsCheck(List__Fuse_IViewport* __this, int index);
void List__Fuse_IViewport__EnsureCapacity(List__Fuse_IViewport* __this);
int List__Fuse_IViewport__get_Count(List__Fuse_IViewport* __this);
::uObject* List__Fuse_IViewport__get_Item(List__Fuse_IViewport* __this, int index);
List__Fuse_IViewport* List__Fuse_IViewport__New_1(::uStatic* __this);
void List__Fuse_IViewport__RemoveAt(List__Fuse_IViewport* __this, int index);
void List__Fuse_IViewport__set_Item(List__Fuse_IViewport* __this, int index, ::uObject* value);

struct List__Fuse_IViewport : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_IViewport___ObjInit(this); }
    void Add(::uObject* item) { List__Fuse_IViewport__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_IViewport__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_IViewport__EnsureCapacity(this); }
    int Count() { return List__Fuse_IViewport__get_Count(this); }
    ::uObject* Item(int index) { return List__Fuse_IViewport__get_Item(this, index); }
    void RemoveAt(int index) { List__Fuse_IViewport__RemoveAt(this, index); }
    void Item(int index, ::uObject* value) { List__Fuse_IViewport__set_Item(this, index, value); }
};

}}}


#endif
