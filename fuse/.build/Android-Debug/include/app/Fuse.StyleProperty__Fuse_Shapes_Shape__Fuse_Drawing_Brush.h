// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_SHAPES_SHAPE__FUSE_DRAWING_BRUSH_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_SHAPES_SHAPE__FUSE_DRAWING_BRUSH_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Shapes { struct Shape; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush;

struct StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__uType* StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__typeof();

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush___ObjInit_1(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush___ObjInit_2(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__New_2(::uStatic* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__OnChanged(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Shapes::Shape* owner);
bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__Reset(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Shapes::Shape* owner);
bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__ResetStyle(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Shapes::Shape* owner);
void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__ResetStyleFor(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Node* n);

struct StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush : ::app::Fuse::StyleProperty
{
    ::uStrong< ::app::Fuse::Drawing::Brush*> _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush___ObjInit_1(this, defaultValue, changedCallback); }
    void _ObjInit_2(::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter) { StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush___ObjInit_2(this, defaultValue, changedCallback, setter, getter); }
    void OnChanged(::app::Fuse::Shapes::Shape* owner) { StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Shapes::Shape* owner) { return StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Shapes::Shape* owner) { return StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__ResetStyle(this, owner); }
};

}}


#endif
