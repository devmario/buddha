// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_CONTOUR_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_CONTOUR_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Drawing_Contour; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Drawing_Contour;

struct List__Fuse_Drawing_Contour__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour __interface_0;
};

List__Fuse_Drawing_Contour__uType* List__Fuse_Drawing_Contour__typeof();

::uObject* List__Fuse_Drawing_Contour__GetEnumerator_boxed(List__Fuse_Drawing_Contour* __this);
void List__Fuse_Drawing_Contour___ObjInit(List__Fuse_Drawing_Contour* __this);
void List__Fuse_Drawing_Contour__Add(List__Fuse_Drawing_Contour* __this, ::app::Fuse::Drawing::Contour* item);
void List__Fuse_Drawing_Contour__EnsureCapacity(List__Fuse_Drawing_Contour* __this);
::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Contour List__Fuse_Drawing_Contour__GetEnumerator(List__Fuse_Drawing_Contour* __this);
List__Fuse_Drawing_Contour* List__Fuse_Drawing_Contour__New_1(::uStatic* __this);

struct List__Fuse_Drawing_Contour : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Drawing_Contour__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Drawing_Contour___ObjInit(this); }
    void Add(::app::Fuse::Drawing::Contour* item) { List__Fuse_Drawing_Contour__Add(this, item); }
    void EnsureCapacity() { List__Fuse_Drawing_Contour__EnsureCapacity(this); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Contour GetEnumerator();
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Contour.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Contour List__Fuse_Drawing_Contour::GetEnumerator() { return List__Fuse_Drawing_Contour__GetEnumerator(this); }

}}}


#endif
