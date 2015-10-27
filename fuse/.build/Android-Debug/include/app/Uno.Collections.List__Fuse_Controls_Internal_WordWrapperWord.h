// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_CONTROLS_INTERNAL_WORD_WRAPPER_WORD_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_CONTROLS_INTERNAL_WORD_WRAPPER_WORD_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WordWrapperWord; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Controls_Internal_WordWrapperWord;

struct List__Fuse_Controls_Internal_WordWrapperWord__uType : ::uClassType
{
};

List__Fuse_Controls_Internal_WordWrapperWord__uType* List__Fuse_Controls_Internal_WordWrapperWord__typeof();

void List__Fuse_Controls_Internal_WordWrapperWord___ObjInit(List__Fuse_Controls_Internal_WordWrapperWord* __this);
void List__Fuse_Controls_Internal_WordWrapperWord__Add(List__Fuse_Controls_Internal_WordWrapperWord* __this, ::app::Fuse::Controls::Internal::WordWrapperWord* item);
void List__Fuse_Controls_Internal_WordWrapperWord__BoundsCheck(List__Fuse_Controls_Internal_WordWrapperWord* __this, int index);
void List__Fuse_Controls_Internal_WordWrapperWord__EnsureCapacity(List__Fuse_Controls_Internal_WordWrapperWord* __this);
int List__Fuse_Controls_Internal_WordWrapperWord__get_Count(List__Fuse_Controls_Internal_WordWrapperWord* __this);
::app::Fuse::Controls::Internal::WordWrapperWord* List__Fuse_Controls_Internal_WordWrapperWord__get_Item(List__Fuse_Controls_Internal_WordWrapperWord* __this, int index);
List__Fuse_Controls_Internal_WordWrapperWord* List__Fuse_Controls_Internal_WordWrapperWord__New_1(::uStatic* __this);
void List__Fuse_Controls_Internal_WordWrapperWord__set_Item(List__Fuse_Controls_Internal_WordWrapperWord* __this, int index, ::app::Fuse::Controls::Internal::WordWrapperWord* value);

struct List__Fuse_Controls_Internal_WordWrapperWord : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Controls_Internal_WordWrapperWord___ObjInit(this); }
    void Add(::app::Fuse::Controls::Internal::WordWrapperWord* item) { List__Fuse_Controls_Internal_WordWrapperWord__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Controls_Internal_WordWrapperWord__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Controls_Internal_WordWrapperWord__EnsureCapacity(this); }
    int Count() { return List__Fuse_Controls_Internal_WordWrapperWord__get_Count(this); }
    ::app::Fuse::Controls::Internal::WordWrapperWord* Item(int index) { return List__Fuse_Controls_Internal_WordWrapperWord__get_Item(this, index); }
    void Item(int index, ::app::Fuse::Controls::Internal::WordWrapperWord* value) { List__Fuse_Controls_Internal_WordWrapperWord__set_Item(this, index, value); }
};

}}}


#endif
