// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_VIEWPORT_H__
#define __APP_FUSE_ELEMENTS_VIEWPORT_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct FrustumViewport; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct NodeBounds; } }
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Elements {

struct Viewport;

struct Viewport__uType : ::app::Fuse::Elements::Element__uType
{
    ::app::Fuse::IViewport __interface_6;
};

Viewport__uType* Viewport__typeof();

void Viewport__ArrangePaddingBox(Viewport* __this, ::app::Uno::Float2 size);
int Viewport__get_CullFace(Viewport* __this);
bool Viewport__get_Flatten(Viewport* __this);
::uObject* Viewport__get_Frustum(Viewport* __this);
bool Viewport__get_HasCullFace(Viewport* __this);
::app::Fuse::NodeBounds* Viewport__get_HitTestBounds(Viewport* __this);
::app::Uno::Float2 Viewport__get_PixelSize(Viewport* __this);
float Viewport__get_PointDensity_1(Viewport* __this);
::app::Fuse::Node* Viewport__get_RootNode(Viewport* __this);
::app::Uno::Float2 Viewport__get_Size(Viewport* __this);
int Viewport__get_SubNodeCount(Viewport* __this);
::app::Uno::Float4x4 Viewport__get_ViewProjectionTransform(Viewport* __this);
::app::Uno::Float4x4 Viewport__get_ViewProjectionTransformInverse(Viewport* __this);
::app::Uno::Float2 Viewport__GetContentSize(Viewport* __this, ::app::Uno::Float2 fillSize, int fillSet);
::app::Fuse::Node* Viewport__GetSubNode(Viewport* __this, int index);
void Viewport__OnDraw(Viewport* __this, ::app::Fuse::DrawContext* dc);
void Viewport__OnHitTestChildren(Viewport* __this, ::app::Fuse::HitTestContext* htc);
::app::Uno::Geometry::Ray Viewport__PointToWorldRay(Viewport* __this, ::app::Uno::Float2 pointPos);
void Viewport__set_CullFace(Viewport* __this, int value);
void Viewport__set_Flatten(Viewport* __this, bool value);
void Viewport__set_Frustum(Viewport* __this, ::uObject* value);
void Viewport__set_RootNode(Viewport* __this, ::app::Fuse::Node* value);
void Viewport__UpdateFrustum(Viewport* __this);

struct Viewport : ::app::Fuse::Elements::Element
{
    int _cullFace;
    bool _hasCullFace;
    ::uStrong< ::app::Fuse::FrustumViewport*> _frustumViewport;
    ::uStrong< ::app::Fuse::Node*> _rootNode;
    ::uStrong< ::uObject*> _frustum;
    bool _flatten;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> OnDraw_VertexData_79d7a860_7_2_1;
    ::app::Uno::Float4x4 OnDraw_LocalTransform_79d7a860_4_8_2;
    ::app::Uno::Float4x4 OnDraw_LocalTransform_79d7a860_4_8_3;
    ::app::Uno::Float4x4 OnDraw_LocalTransform_79d7a860_4_8_4;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_79d7a860;

    int CullFace() { return Viewport__get_CullFace(this); }
    bool Flatten() { return Viewport__get_Flatten(this); }
    ::uObject* Frustum() { return Viewport__get_Frustum(this); }
    bool HasCullFace() { return Viewport__get_HasCullFace(this); }
    ::app::Uno::Float2 PixelSize();
    float PointDensity_1() { return Viewport__get_PointDensity_1(this); }
    ::app::Fuse::Node* RootNode() { return Viewport__get_RootNode(this); }
    ::app::Uno::Float2 Size();
    ::app::Uno::Float4x4 ViewProjectionTransform();
    ::app::Uno::Float4x4 ViewProjectionTransformInverse();
    ::app::Uno::Geometry::Ray PointToWorldRay(::app::Uno::Float2 pointPos);
    void CullFace(int value) { Viewport__set_CullFace(this, value); }
    void Flatten(bool value) { Viewport__set_Flatten(this, value); }
    void Frustum(::uObject* value) { Viewport__set_Frustum(this, value); }
    void RootNode(::app::Fuse::Node* value) { Viewport__set_RootNode(this, value); }
    void UpdateFrustum() { Viewport__UpdateFrustum(this); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Geometry.Ray.h>

namespace app {
namespace Fuse {
namespace Elements {

inline ::app::Uno::Float2 Viewport::PixelSize() { return Viewport__get_PixelSize(this); }
inline ::app::Uno::Float2 Viewport::Size() { return Viewport__get_Size(this); }
inline ::app::Uno::Float4x4 Viewport::ViewProjectionTransform() { return Viewport__get_ViewProjectionTransform(this); }
inline ::app::Uno::Float4x4 Viewport::ViewProjectionTransformInverse() { return Viewport__get_ViewProjectionTransformInverse(this); }
inline ::app::Uno::Geometry::Ray Viewport::PointToWorldRay(::app::Uno::Float2 pointPos) { return Viewport__PointToWorldRay(this, pointPos); }

}}}


#endif
