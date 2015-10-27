// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_I_MIXER_MASTER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_I_MIXER_MASTER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_IMixerMaster;

struct List__Fuse_Animations_IMixerMaster__uType : ::uClassType
{
};

List__Fuse_Animations_IMixerMaster__uType* List__Fuse_Animations_IMixerMaster__typeof();

void List__Fuse_Animations_IMixerMaster___ObjInit(List__Fuse_Animations_IMixerMaster* __this);
void List__Fuse_Animations_IMixerMaster__Add(List__Fuse_Animations_IMixerMaster* __this, ::uObject* item);
void List__Fuse_Animations_IMixerMaster__BoundsCheck(List__Fuse_Animations_IMixerMaster* __this, int index);
bool List__Fuse_Animations_IMixerMaster__Contains(List__Fuse_Animations_IMixerMaster* __this, ::uObject* item);
void List__Fuse_Animations_IMixerMaster__EnsureCapacity(List__Fuse_Animations_IMixerMaster* __this);
int List__Fuse_Animations_IMixerMaster__get_Count(List__Fuse_Animations_IMixerMaster* __this);
::uObject* List__Fuse_Animations_IMixerMaster__get_Item(List__Fuse_Animations_IMixerMaster* __this, int index);
List__Fuse_Animations_IMixerMaster* List__Fuse_Animations_IMixerMaster__New_1(::uStatic* __this);
bool List__Fuse_Animations_IMixerMaster__Remove(List__Fuse_Animations_IMixerMaster* __this, ::uObject* item);
void List__Fuse_Animations_IMixerMaster__RemoveAt(List__Fuse_Animations_IMixerMaster* __this, int index);
void List__Fuse_Animations_IMixerMaster__set_Item(List__Fuse_Animations_IMixerMaster* __this, int index, ::uObject* value);

struct List__Fuse_Animations_IMixerMaster : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Animations_IMixerMaster___ObjInit(this); }
    void Add(::uObject* item) { List__Fuse_Animations_IMixerMaster__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Animations_IMixerMaster__BoundsCheck(this, index); }
    bool Contains(::uObject* item) { return List__Fuse_Animations_IMixerMaster__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Animations_IMixerMaster__EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_IMixerMaster__get_Count(this); }
    ::uObject* Item(int index) { return List__Fuse_Animations_IMixerMaster__get_Item(this, index); }
    bool Remove(::uObject* item) { return List__Fuse_Animations_IMixerMaster__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_IMixerMaster__RemoveAt(this, index); }
    void Item(int index, ::uObject* value) { List__Fuse_Animations_IMixerMaster__set_Item(this, index, value); }
};

}}}


#endif
