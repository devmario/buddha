// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_REACTIVE_FUSE_J_S_TIMER_TIME_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_REACTIVE_FUSE_J_S_TIMER_TIME_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct Timer_Time; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Reactive_FuseJS_Timer_Time;

struct List__Fuse_Reactive_FuseJS_Timer_Time__uType : ::uClassType
{
};

List__Fuse_Reactive_FuseJS_Timer_Time__uType* List__Fuse_Reactive_FuseJS_Timer_Time__typeof();

void List__Fuse_Reactive_FuseJS_Timer_Time___ObjInit(List__Fuse_Reactive_FuseJS_Timer_Time* __this);
void List__Fuse_Reactive_FuseJS_Timer_Time__Add(List__Fuse_Reactive_FuseJS_Timer_Time* __this, ::app::Fuse::Reactive::FuseJS::Timer_Time* item);
void List__Fuse_Reactive_FuseJS_Timer_Time__BoundsCheck(List__Fuse_Reactive_FuseJS_Timer_Time* __this, int index);
void List__Fuse_Reactive_FuseJS_Timer_Time__EnsureCapacity(List__Fuse_Reactive_FuseJS_Timer_Time* __this);
int List__Fuse_Reactive_FuseJS_Timer_Time__get_Count(List__Fuse_Reactive_FuseJS_Timer_Time* __this);
::app::Fuse::Reactive::FuseJS::Timer_Time* List__Fuse_Reactive_FuseJS_Timer_Time__get_Item(List__Fuse_Reactive_FuseJS_Timer_Time* __this, int index);
List__Fuse_Reactive_FuseJS_Timer_Time* List__Fuse_Reactive_FuseJS_Timer_Time__New_1(::uStatic* __this);
void List__Fuse_Reactive_FuseJS_Timer_Time__RemoveAt(List__Fuse_Reactive_FuseJS_Timer_Time* __this, int index);
void List__Fuse_Reactive_FuseJS_Timer_Time__set_Item(List__Fuse_Reactive_FuseJS_Timer_Time* __this, int index, ::app::Fuse::Reactive::FuseJS::Timer_Time* value);

struct List__Fuse_Reactive_FuseJS_Timer_Time : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Reactive_FuseJS_Timer_Time___ObjInit(this); }
    void Add(::app::Fuse::Reactive::FuseJS::Timer_Time* item) { List__Fuse_Reactive_FuseJS_Timer_Time__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Reactive_FuseJS_Timer_Time__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Reactive_FuseJS_Timer_Time__EnsureCapacity(this); }
    int Count() { return List__Fuse_Reactive_FuseJS_Timer_Time__get_Count(this); }
    ::app::Fuse::Reactive::FuseJS::Timer_Time* Item(int index) { return List__Fuse_Reactive_FuseJS_Timer_Time__get_Item(this, index); }
    void RemoveAt(int index) { List__Fuse_Reactive_FuseJS_Timer_Time__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Reactive::FuseJS::Timer_Time* value) { List__Fuse_Reactive_FuseJS_Timer_Time__set_Item(this, index, value); }
};

}}}


#endif
