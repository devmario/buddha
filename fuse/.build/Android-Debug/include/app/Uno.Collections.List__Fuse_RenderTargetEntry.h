// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_RENDER_TARGET_ENTRY_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_RENDER_TARGET_ENTRY_H__

#include <app/Uno.Collections.ICollection__Fuse_RenderTargetEntry.h>
#include <app/Uno.Collections.IList__Fuse_RenderTargetEntry.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct RenderTargetEntry; } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_RenderTargetEntry;

struct List__Fuse_RenderTargetEntry__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_RenderTargetEntry __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_RenderTargetEntry __interface_1;
};

List__Fuse_RenderTargetEntry__uType* List__Fuse_RenderTargetEntry__typeof();

void List__Fuse_RenderTargetEntry___ObjInit(List__Fuse_RenderTargetEntry* __this);
void List__Fuse_RenderTargetEntry__Add(List__Fuse_RenderTargetEntry* __this, ::app::Fuse::RenderTargetEntry* item);
void List__Fuse_RenderTargetEntry__BoundsCheck(List__Fuse_RenderTargetEntry* __this, int index);
void List__Fuse_RenderTargetEntry__EnsureCapacity(List__Fuse_RenderTargetEntry* __this);
int List__Fuse_RenderTargetEntry__get_Count(List__Fuse_RenderTargetEntry* __this);
::app::Fuse::RenderTargetEntry* List__Fuse_RenderTargetEntry__get_Item(List__Fuse_RenderTargetEntry* __this, int index);
List__Fuse_RenderTargetEntry* List__Fuse_RenderTargetEntry__New_1(::uStatic* __this);
void List__Fuse_RenderTargetEntry__RemoveAt(List__Fuse_RenderTargetEntry* __this, int index);
void List__Fuse_RenderTargetEntry__set_Item(List__Fuse_RenderTargetEntry* __this, int index, ::app::Fuse::RenderTargetEntry* value);

struct List__Fuse_RenderTargetEntry : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_RenderTargetEntry___ObjInit(this); }
    void Add(::app::Fuse::RenderTargetEntry* item) { List__Fuse_RenderTargetEntry__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_RenderTargetEntry__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_RenderTargetEntry__EnsureCapacity(this); }
    int Count() { return List__Fuse_RenderTargetEntry__get_Count(this); }
    ::app::Fuse::RenderTargetEntry* Item(int index) { return List__Fuse_RenderTargetEntry__get_Item(this, index); }
    void RemoveAt(int index) { List__Fuse_RenderTargetEntry__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::RenderTargetEntry* value) { List__Fuse_RenderTargetEntry__set_Item(this, index, value); }
};

}}}


#endif
