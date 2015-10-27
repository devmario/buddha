// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_I_O_S_STATUS_BAR_CONFIG_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_I_O_S_STATUS_BAR_CONFIG_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace iOS { struct StatusBarConfig; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_iOS_StatusBarConfig;

struct List__Fuse_iOS_StatusBarConfig__uType : ::uClassType
{
};

List__Fuse_iOS_StatusBarConfig__uType* List__Fuse_iOS_StatusBarConfig__typeof();

void List__Fuse_iOS_StatusBarConfig___ObjInit(List__Fuse_iOS_StatusBarConfig* __this);
void List__Fuse_iOS_StatusBarConfig__Add(List__Fuse_iOS_StatusBarConfig* __this, ::app::Fuse::iOS::StatusBarConfig* item);
void List__Fuse_iOS_StatusBarConfig__BoundsCheck(List__Fuse_iOS_StatusBarConfig* __this, int index);
void List__Fuse_iOS_StatusBarConfig__EnsureCapacity(List__Fuse_iOS_StatusBarConfig* __this);
int List__Fuse_iOS_StatusBarConfig__get_Count(List__Fuse_iOS_StatusBarConfig* __this);
List__Fuse_iOS_StatusBarConfig* List__Fuse_iOS_StatusBarConfig__New_1(::uStatic* __this);
bool List__Fuse_iOS_StatusBarConfig__Remove(List__Fuse_iOS_StatusBarConfig* __this, ::app::Fuse::iOS::StatusBarConfig* item);
void List__Fuse_iOS_StatusBarConfig__RemoveAt(List__Fuse_iOS_StatusBarConfig* __this, int index);

struct List__Fuse_iOS_StatusBarConfig : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_iOS_StatusBarConfig___ObjInit(this); }
    void Add(::app::Fuse::iOS::StatusBarConfig* item) { List__Fuse_iOS_StatusBarConfig__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_iOS_StatusBarConfig__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_iOS_StatusBarConfig__EnsureCapacity(this); }
    int Count() { return List__Fuse_iOS_StatusBarConfig__get_Count(this); }
    bool Remove(::app::Fuse::iOS::StatusBarConfig* item) { return List__Fuse_iOS_StatusBarConfig__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_iOS_StatusBarConfig__RemoveAt(this, index); }
};

}}}


#endif
