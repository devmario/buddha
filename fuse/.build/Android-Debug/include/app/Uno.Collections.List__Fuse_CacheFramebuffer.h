// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_CACHE_FRAMEBUFFER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_CACHE_FRAMEBUFFER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct CacheFramebuffer; } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_CacheFramebuffer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_CacheFramebuffer;

struct List__Fuse_CacheFramebuffer__uType : ::uClassType
{
};

List__Fuse_CacheFramebuffer__uType* List__Fuse_CacheFramebuffer__typeof();

void List__Fuse_CacheFramebuffer___ObjInit(List__Fuse_CacheFramebuffer* __this);
void List__Fuse_CacheFramebuffer__Add(List__Fuse_CacheFramebuffer* __this, ::app::Fuse::CacheFramebuffer* item);
void List__Fuse_CacheFramebuffer__BoundsCheck(List__Fuse_CacheFramebuffer* __this, int index);
void List__Fuse_CacheFramebuffer__EnsureCapacity(List__Fuse_CacheFramebuffer* __this);
int List__Fuse_CacheFramebuffer__get_Count(List__Fuse_CacheFramebuffer* __this);
::app::Fuse::CacheFramebuffer* List__Fuse_CacheFramebuffer__get_Item(List__Fuse_CacheFramebuffer* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_CacheFramebuffer List__Fuse_CacheFramebuffer__GetEnumerator(List__Fuse_CacheFramebuffer* __this);
List__Fuse_CacheFramebuffer* List__Fuse_CacheFramebuffer__New_1(::uStatic* __this);
bool List__Fuse_CacheFramebuffer__Remove(List__Fuse_CacheFramebuffer* __this, ::app::Fuse::CacheFramebuffer* item);
void List__Fuse_CacheFramebuffer__RemoveAt(List__Fuse_CacheFramebuffer* __this, int index);
void List__Fuse_CacheFramebuffer__set_Item(List__Fuse_CacheFramebuffer* __this, int index, ::app::Fuse::CacheFramebuffer* value);

struct List__Fuse_CacheFramebuffer : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_CacheFramebuffer___ObjInit(this); }
    void Add(::app::Fuse::CacheFramebuffer* item) { List__Fuse_CacheFramebuffer__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_CacheFramebuffer__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_CacheFramebuffer__EnsureCapacity(this); }
    int Count() { return List__Fuse_CacheFramebuffer__get_Count(this); }
    ::app::Fuse::CacheFramebuffer* Item(int index) { return List__Fuse_CacheFramebuffer__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_CacheFramebuffer GetEnumerator();
    bool Remove(::app::Fuse::CacheFramebuffer* item) { return List__Fuse_CacheFramebuffer__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_CacheFramebuffer__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::CacheFramebuffer* value) { List__Fuse_CacheFramebuffer__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_CacheFramebuffer.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_CacheFramebuffer List__Fuse_CacheFramebuffer::GetEnumerator() { return List__Fuse_CacheFramebuffer__GetEnumerator(this); }

}}}


#endif
