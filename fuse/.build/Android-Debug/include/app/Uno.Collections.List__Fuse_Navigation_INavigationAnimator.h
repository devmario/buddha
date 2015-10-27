// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_NAVIGATION_I_NAVIGATION_ANIMATOR_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_NAVIGATION_I_NAVIGATION_ANIMATOR_H__

#include <app/Uno.Collections.ICollection__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Collections.IList__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Navigation_INavigationAnimator;

struct List__Fuse_Navigation_INavigationAnimator__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Navigation_INavigationAnimator __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Navigation_INavigationAnimator __interface_1;
};

List__Fuse_Navigation_INavigationAnimator__uType* List__Fuse_Navigation_INavigationAnimator__typeof();

void List__Fuse_Navigation_INavigationAnimator___ObjInit_1(List__Fuse_Navigation_INavigationAnimator* __this, int capacity);
void List__Fuse_Navigation_INavigationAnimator__Add(List__Fuse_Navigation_INavigationAnimator* __this, ::uObject* item);
void List__Fuse_Navigation_INavigationAnimator__BoundsCheck(List__Fuse_Navigation_INavigationAnimator* __this, int index);
void List__Fuse_Navigation_INavigationAnimator__EnsureCapacity(List__Fuse_Navigation_INavigationAnimator* __this);
int List__Fuse_Navigation_INavigationAnimator__get_Count(List__Fuse_Navigation_INavigationAnimator* __this);
::uObject* List__Fuse_Navigation_INavigationAnimator__get_Item(List__Fuse_Navigation_INavigationAnimator* __this, int index);
List__Fuse_Navigation_INavigationAnimator* List__Fuse_Navigation_INavigationAnimator__New_2(::uStatic* __this, int capacity);
void List__Fuse_Navigation_INavigationAnimator__set_Item(List__Fuse_Navigation_INavigationAnimator* __this, int index, ::uObject* value);

struct List__Fuse_Navigation_INavigationAnimator : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit_1(int capacity) { List__Fuse_Navigation_INavigationAnimator___ObjInit_1(this, capacity); }
    void Add(::uObject* item) { List__Fuse_Navigation_INavigationAnimator__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Navigation_INavigationAnimator__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Navigation_INavigationAnimator__EnsureCapacity(this); }
    int Count() { return List__Fuse_Navigation_INavigationAnimator__get_Count(this); }
    ::uObject* Item(int index) { return List__Fuse_Navigation_INavigationAnimator__get_Item(this, index); }
    void Item(int index, ::uObject* value) { List__Fuse_Navigation_INavigationAnimator__set_Item(this, index, value); }
};

}}}


#endif
