// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Shapes/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SHAPES_PATH_H__
#define __APP_FUSE_SHAPES_PATH_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Shapes.PathShape.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct SizingContainer; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Shapes {

struct Path;

struct Path__uType : ::app::Fuse::Shapes::PathShape__uType
{
};

Path__uType* Path__typeof();

::app::Uno::Float4x4 Path__AlignMatrix(Path* __this, ::app::Uno::Float4x4 b);
void Path__ArrangePaddingBox(Path* __this, ::app::Uno::Float2 size);
::app::Uno::Rect Path__CalcRenderBounds(Path* __this);
::app::Uno::Float2 Path__GetContentSize(Path* __this, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Float2 Path__GetNaturalContentSize(Path* __this);
void Path__OnDraw(Path* __this, ::app::Fuse::DrawContext* dc);
void Path__UpdatePath(Path* __this);

struct Path : ::app::Fuse::Shapes::PathShape
{
    ::uStrong< ::app::Fuse::Internal::SizingContainer*> sizing;
    int _fitMode;
    int _scaleMode;
    ::app::Uno::Float2 _postScale;
    ::app::Uno::Float2 _origin;

    ::app::Uno::Float4x4 AlignMatrix(::app::Uno::Float4x4 b);
    ::app::Uno::Float2 GetNaturalContentSize();
};

}}}

#include <app/Uno.Float4x4.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Shapes {

inline ::app::Uno::Float4x4 Path::AlignMatrix(::app::Uno::Float4x4 b) { return Path__AlignMatrix(this, b); }
inline ::app::Uno::Float2 Path::GetNaturalContentSize() { return Path__GetNaturalContentSize(this); }

}}}


#endif
