// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ROOT_VIEWPORT_H__
#define __APP_FUSE_ROOT_VIEWPORT_H__

#include <app/Fuse.IViewport.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { struct FrustumViewport; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }
namespace app { namespace Uno { namespace Platform { struct Window; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {

struct RootViewport;

extern float RootViewport___defaultDensity;

struct RootViewport__uType : ::app::Fuse::Node__uType
{
    ::app::Fuse::IViewport __interface_1;
};

RootViewport__uType* RootViewport__typeof();

void RootViewport___ObjInit_1(RootViewport* __this, ::app::Uno::Platform::Window* window, float pointDensity);
void RootViewport___TypeInit_1(::uStatic* __this);
::app::Fuse::Node* RootViewport__get_Content(RootViewport* __this);
float RootViewport__get_DefaultDensity(::uStatic* __this);
bool RootViewport__get_IsRooted(RootViewport* __this);
float RootViewport__get_PointDensity_1(RootViewport* __this);
::app::Uno::Float2 RootViewport__get_Size(RootViewport* __this);
int RootViewport__get_SubNodeCount(RootViewport* __this);
::app::Uno::Float4x4 RootViewport__get_ViewProjectionTransform(RootViewport* __this);
::app::Uno::Float4x4 RootViewport__get_ViewProjectionTransformInverse(RootViewport* __this);
::app::Fuse::Node* RootViewport__GetSubNode(RootViewport* __this, int i);
RootViewport* RootViewport__New_1(::uStatic* __this, ::app::Uno::Platform::Window* window, float pointDensity);
void RootViewport__OnGotFocus(RootViewport* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void RootViewport__OnHitTest(RootViewport* __this, ::app::Fuse::HitTestContext* htc);
void RootViewport__OnLostFocus(RootViewport* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void RootViewport__OnResized(RootViewport* __this, ::uObject* s, ::uObject* a);
::app::Uno::Geometry::Ray RootViewport__PointToWorldRay(RootViewport* __this, ::app::Uno::Float2 pixelPos);
void RootViewport__set_Content(RootViewport* __this, ::app::Fuse::Node* value);

struct RootViewport : ::app::Fuse::Node
{
    ::uStrong< ::app::Uno::Platform::Window*> Window;
    ::uStrong< ::app::Fuse::Node*> _root;
    ::uStrong< ::uObject*> Frustum;
    ::uStrong< ::app::Fuse::FrustumViewport*> _frustumViewport;
    float _pointDensity;

    void _ObjInit_1(::app::Uno::Platform::Window* window, float pointDensity) { RootViewport___ObjInit_1(this, window, pointDensity); }
    ::app::Fuse::Node* Content() { return RootViewport__get_Content(this); }
    float PointDensity_1() { return RootViewport__get_PointDensity_1(this); }
    ::app::Uno::Float2 Size();
    ::app::Uno::Float4x4 ViewProjectionTransform();
    ::app::Uno::Float4x4 ViewProjectionTransformInverse();
    void OnGotFocus(::uObject* sender, ::app::Uno::EventArgs* args) { RootViewport__OnGotFocus(this, sender, args); }
    void OnLostFocus(::uObject* sender, ::app::Uno::EventArgs* args) { RootViewport__OnLostFocus(this, sender, args); }
    void OnResized(::uObject* s, ::uObject* a) { RootViewport__OnResized(this, s, a); }
    ::app::Uno::Geometry::Ray PointToWorldRay(::app::Uno::Float2 pixelPos);
    void Content(::app::Fuse::Node* value) { RootViewport__set_Content(this, value); }
};

}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Geometry.Ray.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float2 RootViewport::Size() { return RootViewport__get_Size(this); }
inline ::app::Uno::Float4x4 RootViewport::ViewProjectionTransform() { return RootViewport__get_ViewProjectionTransform(this); }
inline ::app::Uno::Float4x4 RootViewport::ViewProjectionTransformInverse() { return RootViewport__get_ViewProjectionTransformInverse(this); }
inline ::app::Uno::Geometry::Ray RootViewport::PointToWorldRay(::app::Uno::Float2 pixelPos) { return RootViewport__PointToWorldRay(this, pixelPos); }

}}


#endif
