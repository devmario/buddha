// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/Extensions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct LineCacheLine; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct HalfEdge; } } } }
namespace app { namespace Fuse { namespace Drawing { struct Border; } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }
namespace app { namespace Fuse { namespace Drawing { struct PolygonDrawable; } } }
namespace app { namespace Fuse { namespace Input { struct Capturer; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions__uType : ::uClassType
{
};

EnumerableExtensions__uType* EnumerableExtensions__typeof();

int EnumerableExtensions__Count__Fuse_Drawing_Tesselation_Face(::uStatic* __this, ::uObject* self);
::app::Fuse::Controls::TextEdit::LineCacheLine* EnumerableExtensions__First__Fuse_Controls_TextEdit_LineCacheLine(::uStatic* __this, ::uObject* self);
::app::Fuse::Input::Capturer* EnumerableExtensions__First__Fuse_Input_Capturer(::uStatic* __this, ::uObject* self);
::app::Fuse::Drawing::Brush* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Brush_1(::uStatic* __this, ::uObject* self);
::app::Fuse::Drawing::Tesselation::HalfEdge* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Tesselation_HalfEdge_1(::uStatic* __this, ::uObject* self, ::uDelegate* where);
::uObject* EnumerableExtensions__Select__Fuse_Drawing_Border__Fuse_Drawing_Contour(::uStatic* __this, ::uObject* self, ::uDelegate* func);
::uObject* EnumerableExtensions__Select__Fuse_Drawing_Contour__Fuse_Drawing_Border(::uStatic* __this, ::uObject* self, ::uDelegate* func);
::uObject* EnumerableExtensions__Select__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour(::uStatic* __this, ::uObject* self, ::uDelegate* func);
::uObject* EnumerableExtensions__Select__Fuse_Drawing_Tesselation_HalfEdge__float2(::uStatic* __this, ::uObject* self, ::uDelegate* func);
::uArray* EnumerableExtensions__ToArray__float2(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_Border(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_Contour(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_PolygonDrawable(::uStatic* __this, ::uObject* self);
::uObject* EnumerableExtensions__Union__float2(::uStatic* __this, ::uObject* self, ::uObject* other);
::uObject* EnumerableExtensions__Where__Fuse_Drawing_Tesselation_Face(::uStatic* __this, ::uObject* self, ::uDelegate* predicate);

}}}


#endif
