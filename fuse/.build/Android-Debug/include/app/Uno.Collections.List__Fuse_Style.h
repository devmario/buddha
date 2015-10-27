// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_STYLE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_STYLE_H__

#include <app/Uno.Collections.ICollection__Fuse_Style.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Style.h>
#include <app/Uno.Collections.IList__Fuse_Style.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Style; } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Style; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Style;

struct List__Fuse_Style__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Style __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Style __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Style __interface_2;
};

List__Fuse_Style__uType* List__Fuse_Style__typeof();

::uObject* List__Fuse_Style__GetEnumerator_boxed(List__Fuse_Style* __this);
void List__Fuse_Style___ObjInit(List__Fuse_Style* __this);
void List__Fuse_Style__Add(List__Fuse_Style* __this, ::app::Fuse::Style* item);
void List__Fuse_Style__BoundsCheck(List__Fuse_Style* __this, int index);
void List__Fuse_Style__EnsureCapacity(List__Fuse_Style* __this);
int List__Fuse_Style__get_Count(List__Fuse_Style* __this);
::app::Fuse::Style* List__Fuse_Style__get_Item(List__Fuse_Style* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Style List__Fuse_Style__GetEnumerator(List__Fuse_Style* __this);
List__Fuse_Style* List__Fuse_Style__New_1(::uStatic* __this);
bool List__Fuse_Style__Remove(List__Fuse_Style* __this, ::app::Fuse::Style* item);
void List__Fuse_Style__RemoveAt(List__Fuse_Style* __this, int index);
void List__Fuse_Style__set_Item(List__Fuse_Style* __this, int index, ::app::Fuse::Style* value);

struct List__Fuse_Style : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Style__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Style___ObjInit(this); }
    void Add(::app::Fuse::Style* item) { List__Fuse_Style__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Style__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Style__EnsureCapacity(this); }
    int Count() { return List__Fuse_Style__get_Count(this); }
    ::app::Fuse::Style* Item(int index) { return List__Fuse_Style__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Style GetEnumerator();
    bool Remove(::app::Fuse::Style* item) { return List__Fuse_Style__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Style__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Style* value) { List__Fuse_Style__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Style.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Style List__Fuse_Style::GetEnumerator() { return List__Fuse_Style__GetEnumerator(this); }

}}}


#endif
