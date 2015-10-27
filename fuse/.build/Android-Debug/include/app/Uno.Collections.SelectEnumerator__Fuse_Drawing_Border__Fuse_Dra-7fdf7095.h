// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/Extensions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_SELECT_ENUMERATOR__FUSE_DRAWING_BORDER__FUSE_DRA_7FDF7095_H__
#define __APP_UNO_COLLECTIONS_SELECT_ENUMERATOR__FUSE_DRAWING_BORDER__FUSE_DRA_7FDF7095_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }

namespace app {
namespace Uno {
namespace Collections {

struct SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour;

struct SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType* SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof();

void SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour___ObjInit(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this, ::uObject* source, ::uDelegate* select);
void SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__Dispose(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this);
::app::Fuse::Drawing::Contour* SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__get_Current(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this);
bool SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__MoveNext(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this);
SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select);

struct SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uDelegate*> _select;

    void _ObjInit(::uObject* source, ::uDelegate* select) { SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour___ObjInit(this, source, select); }
    void Dispose() { SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__Dispose(this); }
    ::app::Fuse::Drawing::Contour* Current() { return SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__get_Current(this); }
    bool MoveNext() { return SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__MoveNext(this); }
};

}}}


#endif
