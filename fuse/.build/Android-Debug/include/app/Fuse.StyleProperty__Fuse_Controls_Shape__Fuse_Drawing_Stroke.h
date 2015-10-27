// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_SHAPE__FUSE_DRAWING_STROKE_H__
#define __APP_FUSE_STYLE_PROPERTY__FUSE_CONTROLS_SHAPE__FUSE_DRAWING_STROKE_H__

#include <app/Fuse.StyleProperty.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Shape; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke;

struct StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__uType : ::app::Fuse::StyleProperty__uType
{
};

StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__uType* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof();

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke___ObjInit_1(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* defaultValue, ::uDelegate* changedCallback);
void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke___ObjInit_2(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__New_2(::uStatic* __this, ::app::Fuse::Drawing::Stroke* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__OnChanged(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Controls::Shape* owner);
bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__Reset(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Controls::Shape* owner);
bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__ResetStyle(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Controls::Shape* owner);
void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__ResetStyleFor(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Node* n);

struct StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke : ::app::Fuse::StyleProperty
{
    ::uStrong< ::app::Fuse::Drawing::Stroke*> _defaultValue;
    ::uStrong< ::uDelegate*> _changedCallback;
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    int _id;
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;

    void _ObjInit_1(::app::Fuse::Drawing::Stroke* defaultValue, ::uDelegate* changedCallback) { StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke___ObjInit_1(this, defaultValue, changedCallback); }
    void _ObjInit_2(::app::Fuse::Drawing::Stroke* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter) { StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke___ObjInit_2(this, defaultValue, changedCallback, setter, getter); }
    void OnChanged(::app::Fuse::Controls::Shape* owner) { StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__OnChanged(this, owner); }
    bool Reset(::app::Fuse::Controls::Shape* owner) { return StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__Reset(this, owner); }
    bool ResetStyle(::app::Fuse::Controls::Shape* owner) { return StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__ResetStyle(this, owner); }
};

}}


#endif
