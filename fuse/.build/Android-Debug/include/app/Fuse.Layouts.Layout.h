// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/Layouts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAYOUTS_LAYOUT_H__
#define __APP_FUSE_LAYOUTS_LAYOUT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Panel; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Layouts {

struct Layout;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Layout___fillPaddingProperty;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Layout___layerProperty;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Layout___layoutRoleProperty;

struct Layout__uType : ::uClassType
{
    void(*__fp_ArrangePaddingBox)(Layout*, ::uObject*, ::app::Uno::Float4, ::app::Uno::Float2);
    ::app::Uno::Float2(*__fp_GetContentSize)(Layout*, ::uObject*, ::app::Uno::Float2, int);
    int(*__fp_IsMarginBoxDependent)(Layout*, ::app::Fuse::Node*);
};

Layout__uType* Layout__typeof();

void Layout___ObjInit(Layout* __this);
void Layout___TypeInit(::uStatic* __this);
void Layout__AddSubscriber(Layout* __this, ::app::Fuse::Node* element);
bool Layout__AffectsLayout(Layout* __this, ::app::Fuse::Node* n);
bool Layout__ArrangeMarginBoxSpecial(Layout* __this, ::app::Fuse::Node* e, ::app::Uno::Float4 padding, ::app::Uno::Float2 size);
void Layout__AssignZOrder(::uStatic* __this, ::uObject* nodes);
bool Layout__get_SnapToPixels(Layout* __this);
bool Layout__GetFillPadding(::uStatic* __this, ::app::Fuse::Node* n);
int Layout__GetLayer(::uStatic* __this, ::app::Fuse::Node* n);
int Layout__GetLayoutRole(::uStatic* __this, ::app::Fuse::Node* n);
::app::Fuse::Controls::Panel* Layout__GetPanel(::uStatic* __this, ::app::Fuse::Node* elm);
void Layout__InvalidateLayout(Layout* __this);
int Layout__IsMarginBoxDependent(Layout* __this, ::app::Fuse::Node* child);
void Layout__PanelInvalidateLayout(::uStatic* __this, ::app::Fuse::Node* elm);
void Layout__RemoveSubscriber(Layout* __this, ::app::Fuse::Node* element);
void Layout__SetLayer(::uStatic* __this, ::app::Fuse::Node* n, int l);
void Layout__SetLayoutRole(::uStatic* __this, ::app::Fuse::Node* n, int r);
float Layout__Snap(Layout* __this, float p);
::app::Uno::Float2 Layout__Snap_1(Layout* __this, ::app::Uno::Float2 p);
::app::Uno::Float2 Layout__SnapUp(Layout* __this, ::app::Uno::Float2 p);
float Layout__SnapUp_1(Layout* __this, float p);

struct Layout : ::uObject
{
    ::uStrong< ::app::Fuse::Node*> Subscriber;

    void _ObjInit() { Layout___ObjInit(this); }
    void AddSubscriber(::app::Fuse::Node* element) { Layout__AddSubscriber(this, element); }
    bool AffectsLayout(::app::Fuse::Node* n) { return Layout__AffectsLayout(this, n); }
    bool ArrangeMarginBoxSpecial(::app::Fuse::Node* e, ::app::Uno::Float4 padding, ::app::Uno::Float2 size);
    void ArrangePaddingBox(::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize);
    bool SnapToPixels() { return Layout__get_SnapToPixels(this); }
    ::app::Uno::Float2 GetContentSize(::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
    void InvalidateLayout() { Layout__InvalidateLayout(this); }
    int IsMarginBoxDependent(::app::Fuse::Node* child) { return (((Layout__uType*)this->__obj_type)->__fp_IsMarginBoxDependent)(this, child); }
    void RemoveSubscriber(::app::Fuse::Node* element) { Layout__RemoveSubscriber(this, element); }
    float Snap(float p) { return Layout__Snap(this, p); }
    ::app::Uno::Float2 Snap_1(::app::Uno::Float2 p);
    ::app::Uno::Float2 SnapUp(::app::Uno::Float2 p);
    float SnapUp_1(float p) { return Layout__SnapUp_1(this, p); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Layouts {

inline bool Layout::ArrangeMarginBoxSpecial(::app::Fuse::Node* e, ::app::Uno::Float4 padding, ::app::Uno::Float2 size) { return Layout__ArrangeMarginBoxSpecial(this, e, padding, size); }
inline void Layout::ArrangePaddingBox(::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize) { (((Layout__uType*)this->__obj_type)->__fp_ArrangePaddingBox)(this, elements, padding, availableSize); }
inline ::app::Uno::Float2 Layout::GetContentSize(::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet) { return (((Layout__uType*)this->__obj_type)->__fp_GetContentSize)(this, elements, fillSize, fillSet); }
inline ::app::Uno::Float2 Layout::Snap_1(::app::Uno::Float2 p) { return Layout__Snap_1(this, p); }
inline ::app::Uno::Float2 Layout::SnapUp(::app::Uno::Float2 p) { return Layout__SnapUp(this, p); }

}}}


#endif
