// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_ANIMATOR_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_ANIMATOR_H__

#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Animator; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_Animator;

struct List__Fuse_Animations_Animator__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Animations_Animator __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator __interface_1;
};

List__Fuse_Animations_Animator__uType* List__Fuse_Animations_Animator__typeof();

void List__Fuse_Animations_Animator___ObjInit(List__Fuse_Animations_Animator* __this);
void List__Fuse_Animations_Animator__Add(List__Fuse_Animations_Animator* __this, ::app::Fuse::Animations::Animator* item);
void List__Fuse_Animations_Animator__BoundsCheck(List__Fuse_Animations_Animator* __this, int index);
void List__Fuse_Animations_Animator__EnsureCapacity(List__Fuse_Animations_Animator* __this);
int List__Fuse_Animations_Animator__get_Count(List__Fuse_Animations_Animator* __this);
::app::Fuse::Animations::Animator* List__Fuse_Animations_Animator__get_Item(List__Fuse_Animations_Animator* __this, int index);
List__Fuse_Animations_Animator* List__Fuse_Animations_Animator__New_1(::uStatic* __this);
void List__Fuse_Animations_Animator__set_Item(List__Fuse_Animations_Animator* __this, int index, ::app::Fuse::Animations::Animator* value);

struct List__Fuse_Animations_Animator : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Animations_Animator___ObjInit(this); }
    void Add(::app::Fuse::Animations::Animator* item) { List__Fuse_Animations_Animator__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Animations_Animator__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Animations_Animator__EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_Animator__get_Count(this); }
    ::app::Fuse::Animations::Animator* Item(int index) { return List__Fuse_Animations_Animator__get_Item(this, index); }
    void Item(int index, ::app::Fuse::Animations::Animator* value) { List__Fuse_Animations_Animator__set_Item(this, index, value); }
};

}}}


#endif
