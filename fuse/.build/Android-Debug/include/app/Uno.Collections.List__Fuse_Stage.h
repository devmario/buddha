// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_STAGE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_STAGE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Stage; } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Stage;

struct List__Fuse_Stage__uType : ::uClassType
{
};

List__Fuse_Stage__uType* List__Fuse_Stage__typeof();

void List__Fuse_Stage___ObjInit(List__Fuse_Stage* __this);
void List__Fuse_Stage__Add(List__Fuse_Stage* __this, ::app::Fuse::Stage* item);
void List__Fuse_Stage__BoundsCheck(List__Fuse_Stage* __this, int index);
void List__Fuse_Stage__EnsureCapacity(List__Fuse_Stage* __this);
int List__Fuse_Stage__get_Count(List__Fuse_Stage* __this);
::app::Fuse::Stage* List__Fuse_Stage__get_Item(List__Fuse_Stage* __this, int index);
List__Fuse_Stage* List__Fuse_Stage__New_1(::uStatic* __this);
void List__Fuse_Stage__set_Item(List__Fuse_Stage* __this, int index, ::app::Fuse::Stage* value);

struct List__Fuse_Stage : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Stage___ObjInit(this); }
    void Add(::app::Fuse::Stage* item) { List__Fuse_Stage__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Stage__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Stage__EnsureCapacity(this); }
    int Count() { return List__Fuse_Stage__get_Count(this); }
    ::app::Fuse::Stage* Item(int index) { return List__Fuse_Stage__get_Item(this, index); }
    void Item(int index, ::app::Fuse::Stage* value) { List__Fuse_Stage__set_Item(this, index, value); }
};

}}}


#endif
