// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_GRAPHICS_POLYGON_FACE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_GRAPHICS_POLYGON_FACE_H__

#include <app/Uno.Collections.ICollection__Uno_Graphics_PolygonFace.h>
#include <app/Uno.Collections.IList__Uno_Graphics_PolygonFace.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Graphics_PolygonFace;

struct List__Uno_Graphics_PolygonFace__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_Graphics_PolygonFace __interface_0;
    ::app::Uno::Collections::ICollection__Uno_Graphics_PolygonFace __interface_1;
};

List__Uno_Graphics_PolygonFace__uType* List__Uno_Graphics_PolygonFace__typeof();

void List__Uno_Graphics_PolygonFace___ObjInit(List__Uno_Graphics_PolygonFace* __this);
void List__Uno_Graphics_PolygonFace__Add(List__Uno_Graphics_PolygonFace* __this, int item);
void List__Uno_Graphics_PolygonFace__BoundsCheck(List__Uno_Graphics_PolygonFace* __this, int index);
void List__Uno_Graphics_PolygonFace__EnsureCapacity(List__Uno_Graphics_PolygonFace* __this);
int List__Uno_Graphics_PolygonFace__get_Count(List__Uno_Graphics_PolygonFace* __this);
int List__Uno_Graphics_PolygonFace__get_Item(List__Uno_Graphics_PolygonFace* __this, int index);
List__Uno_Graphics_PolygonFace* List__Uno_Graphics_PolygonFace__New_1(::uStatic* __this);
void List__Uno_Graphics_PolygonFace__RemoveAt(List__Uno_Graphics_PolygonFace* __this, int index);
void List__Uno_Graphics_PolygonFace__set_Item(List__Uno_Graphics_PolygonFace* __this, int index, int value);

struct List__Uno_Graphics_PolygonFace : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Uno_Graphics_PolygonFace___ObjInit(this); }
    void Add(int item) { List__Uno_Graphics_PolygonFace__Add(this, item); }
    void BoundsCheck(int index) { List__Uno_Graphics_PolygonFace__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Uno_Graphics_PolygonFace__EnsureCapacity(this); }
    int Count() { return List__Uno_Graphics_PolygonFace__get_Count(this); }
    int Item(int index) { return List__Uno_Graphics_PolygonFace__get_Item(this, index); }
    void RemoveAt(int index) { List__Uno_Graphics_PolygonFace__RemoveAt(this, index); }
    void Item(int index, int value) { List__Uno_Graphics_PolygonFace__set_Item(this, index, value); }
};

}}}


#endif
