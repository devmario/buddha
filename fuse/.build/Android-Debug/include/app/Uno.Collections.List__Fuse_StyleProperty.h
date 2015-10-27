// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_STYLE_PROPERTY_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_STYLE_PROPERTY_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct StyleProperty; } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_StyleProperty;

struct List__Fuse_StyleProperty__uType : ::uClassType
{
};

List__Fuse_StyleProperty__uType* List__Fuse_StyleProperty__typeof();

void List__Fuse_StyleProperty___ObjInit(List__Fuse_StyleProperty* __this);
void List__Fuse_StyleProperty__Add(List__Fuse_StyleProperty* __this, ::app::Fuse::StyleProperty* item);
void List__Fuse_StyleProperty__BoundsCheck(List__Fuse_StyleProperty* __this, int index);
void List__Fuse_StyleProperty__EnsureCapacity(List__Fuse_StyleProperty* __this);
int List__Fuse_StyleProperty__get_Count(List__Fuse_StyleProperty* __this);
::app::Fuse::StyleProperty* List__Fuse_StyleProperty__get_Item(List__Fuse_StyleProperty* __this, int index);
List__Fuse_StyleProperty* List__Fuse_StyleProperty__New_1(::uStatic* __this);
void List__Fuse_StyleProperty__set_Item(List__Fuse_StyleProperty* __this, int index, ::app::Fuse::StyleProperty* value);

struct List__Fuse_StyleProperty : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_StyleProperty___ObjInit(this); }
    void Add(::app::Fuse::StyleProperty* item) { List__Fuse_StyleProperty__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_StyleProperty__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_StyleProperty__EnsureCapacity(this); }
    int Count() { return List__Fuse_StyleProperty__get_Count(this); }
    ::app::Fuse::StyleProperty* Item(int index) { return List__Fuse_StyleProperty__get_Item(this, index); }
    void Item(int index, ::app::Fuse::StyleProperty* value) { List__Fuse_StyleProperty__set_Item(this, index, value); }
};

}}}


#endif
