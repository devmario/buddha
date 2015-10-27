// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_SCRIPTING_I_NAME_LISTENER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_SCRIPTING_I_NAME_LISTENER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Scripting_INameListener;

struct List__Fuse_Scripting_INameListener__uType : ::uClassType
{
};

List__Fuse_Scripting_INameListener__uType* List__Fuse_Scripting_INameListener__typeof();

void List__Fuse_Scripting_INameListener___ObjInit(List__Fuse_Scripting_INameListener* __this);
void List__Fuse_Scripting_INameListener__Add(List__Fuse_Scripting_INameListener* __this, ::uObject* item);
void List__Fuse_Scripting_INameListener__BoundsCheck(List__Fuse_Scripting_INameListener* __this, int index);
bool List__Fuse_Scripting_INameListener__Contains(List__Fuse_Scripting_INameListener* __this, ::uObject* item);
void List__Fuse_Scripting_INameListener__EnsureCapacity(List__Fuse_Scripting_INameListener* __this);
int List__Fuse_Scripting_INameListener__get_Count(List__Fuse_Scripting_INameListener* __this);
List__Fuse_Scripting_INameListener* List__Fuse_Scripting_INameListener__New_1(::uStatic* __this);
bool List__Fuse_Scripting_INameListener__Remove(List__Fuse_Scripting_INameListener* __this, ::uObject* item);
void List__Fuse_Scripting_INameListener__RemoveAt(List__Fuse_Scripting_INameListener* __this, int index);
::uArray* List__Fuse_Scripting_INameListener__ToArray(List__Fuse_Scripting_INameListener* __this);

struct List__Fuse_Scripting_INameListener : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Scripting_INameListener___ObjInit(this); }
    void Add(::uObject* item) { List__Fuse_Scripting_INameListener__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Scripting_INameListener__BoundsCheck(this, index); }
    bool Contains(::uObject* item) { return List__Fuse_Scripting_INameListener__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Scripting_INameListener__EnsureCapacity(this); }
    int Count() { return List__Fuse_Scripting_INameListener__get_Count(this); }
    bool Remove(::uObject* item) { return List__Fuse_Scripting_INameListener__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Scripting_INameListener__RemoveAt(this, index); }
    ::uArray* ToArray() { return List__Fuse_Scripting_INameListener__ToArray(this); }
};

}}}


#endif
