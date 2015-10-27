// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_RESOURCES_I_SOFT_DISPOSABLE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_RESOURCES_I_SOFT_DISPOSABLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Resources_ISoftDisposable;

struct List__Fuse_Resources_ISoftDisposable__uType : ::uClassType
{
};

List__Fuse_Resources_ISoftDisposable__uType* List__Fuse_Resources_ISoftDisposable__typeof();

void List__Fuse_Resources_ISoftDisposable___ObjInit(List__Fuse_Resources_ISoftDisposable* __this);
void List__Fuse_Resources_ISoftDisposable__Add(List__Fuse_Resources_ISoftDisposable* __this, ::uObject* item);
void List__Fuse_Resources_ISoftDisposable__BoundsCheck(List__Fuse_Resources_ISoftDisposable* __this, int index);
void List__Fuse_Resources_ISoftDisposable__EnsureCapacity(List__Fuse_Resources_ISoftDisposable* __this);
int List__Fuse_Resources_ISoftDisposable__get_Count(List__Fuse_Resources_ISoftDisposable* __this);
::uObject* List__Fuse_Resources_ISoftDisposable__get_Item(List__Fuse_Resources_ISoftDisposable* __this, int index);
List__Fuse_Resources_ISoftDisposable* List__Fuse_Resources_ISoftDisposable__New_1(::uStatic* __this);
void List__Fuse_Resources_ISoftDisposable__set_Item(List__Fuse_Resources_ISoftDisposable* __this, int index, ::uObject* value);

struct List__Fuse_Resources_ISoftDisposable : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Resources_ISoftDisposable___ObjInit(this); }
    void Add(::uObject* item) { List__Fuse_Resources_ISoftDisposable__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Resources_ISoftDisposable__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Resources_ISoftDisposable__EnsureCapacity(this); }
    int Count() { return List__Fuse_Resources_ISoftDisposable__get_Count(this); }
    ::uObject* Item(int index) { return List__Fuse_Resources_ISoftDisposable__get_Item(this, index); }
    void Item(int index, ::uObject* value) { List__Fuse_Resources_ISoftDisposable__set_Item(this, index, value); }
};

}}}


#endif
