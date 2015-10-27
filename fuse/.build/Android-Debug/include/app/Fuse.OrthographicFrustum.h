// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ORTHOGRAPHIC_FRUSTUM_H__
#define __APP_FUSE_ORTHOGRAPHIC_FRUSTUM_H__

#include <app/Fuse.IFrustum.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {

struct OrthographicFrustum;

struct OrthographicFrustum__uType : ::uClassType
{
    ::app::Fuse::IFrustum __interface_0;
};

OrthographicFrustum__uType* OrthographicFrustum__typeof();

void OrthographicFrustum___ObjInit(OrthographicFrustum* __this);
::app::Uno::Float4x4 OrthographicFrustum__get_LocalFromWorld(OrthographicFrustum* __this);
::app::Uno::Float2 OrthographicFrustum__get_Origin(OrthographicFrustum* __this);
::app::Uno::Float2 OrthographicFrustum__get_Size(OrthographicFrustum* __this);
::app::Uno::Float4x4 OrthographicFrustum__GetProjectionTransform(OrthographicFrustum* __this, ::uObject* viewport);
::app::Uno::Float4x4 OrthographicFrustum__GetProjectionTransformInverse(OrthographicFrustum* __this, ::uObject* viewport);
::app::Uno::Float4x4 OrthographicFrustum__GetViewTransform(OrthographicFrustum* __this, ::uObject* viewport);
::app::Uno::Float4x4 OrthographicFrustum__GetViewTransformInverse(OrthographicFrustum* __this, ::uObject* viewport);
::app::Uno::Float4x4 OrthographicFrustum__MatrixProjection(OrthographicFrustum* __this, ::app::Uno::Float2 viewSize);
::app::Uno::Float4x4 OrthographicFrustum__MatrixProjectionInverse(OrthographicFrustum* __this, ::app::Uno::Float2 viewSize);
::app::Uno::Float4x4 OrthographicFrustum__MatrixView(OrthographicFrustum* __this, ::app::Uno::Float2 origin, ::app::Uno::Float2 viewSize);
::app::Uno::Float4x4 OrthographicFrustum__MatrixViewInverse(OrthographicFrustum* __this, ::app::Uno::Float2 origin, ::app::Uno::Float2 viewSize);
OrthographicFrustum* OrthographicFrustum__New_1(::uStatic* __this);
void OrthographicFrustum__set_LocalFromWorld(OrthographicFrustum* __this, ::app::Uno::Float4x4 value);
void OrthographicFrustum__set_Origin(OrthographicFrustum* __this, ::app::Uno::Float2 value);
void OrthographicFrustum__set_Size(OrthographicFrustum* __this, ::app::Uno::Float2 value);

struct OrthographicFrustum : ::uObject
{
    bool _hasOrigin;
    ::app::Uno::Float2 _origin;
    bool _hasSize;
    ::app::Uno::Float2 _size;
    ::app::Uno::Float4x4 _localFromWorld;
    bool _hasLocalFromWorld;

    void _ObjInit() { OrthographicFrustum___ObjInit(this); }
    ::app::Uno::Float4x4 LocalFromWorld() { return OrthographicFrustum__get_LocalFromWorld(this); }
    ::app::Uno::Float2 Origin() { return OrthographicFrustum__get_Origin(this); }
    ::app::Uno::Float2 Size() { return OrthographicFrustum__get_Size(this); }
    ::app::Uno::Float4x4 GetProjectionTransform(::uObject* viewport) { return OrthographicFrustum__GetProjectionTransform(this, viewport); }
    ::app::Uno::Float4x4 GetProjectionTransformInverse(::uObject* viewport) { return OrthographicFrustum__GetProjectionTransformInverse(this, viewport); }
    ::app::Uno::Float4x4 GetViewTransform(::uObject* viewport) { return OrthographicFrustum__GetViewTransform(this, viewport); }
    ::app::Uno::Float4x4 GetViewTransformInverse(::uObject* viewport) { return OrthographicFrustum__GetViewTransformInverse(this, viewport); }
    ::app::Uno::Float4x4 MatrixProjection(::app::Uno::Float2 viewSize) { return OrthographicFrustum__MatrixProjection(this, viewSize); }
    ::app::Uno::Float4x4 MatrixProjectionInverse(::app::Uno::Float2 viewSize) { return OrthographicFrustum__MatrixProjectionInverse(this, viewSize); }
    ::app::Uno::Float4x4 MatrixView(::app::Uno::Float2 origin, ::app::Uno::Float2 viewSize) { return OrthographicFrustum__MatrixView(this, origin, viewSize); }
    ::app::Uno::Float4x4 MatrixViewInverse(::app::Uno::Float2 origin, ::app::Uno::Float2 viewSize) { return OrthographicFrustum__MatrixViewInverse(this, origin, viewSize); }
    void LocalFromWorld(::app::Uno::Float4x4 value) { OrthographicFrustum__set_LocalFromWorld(this, value); }
    void Origin(::app::Uno::Float2 value) { OrthographicFrustum__set_Origin(this, value); }
    void Size(::app::Uno::Float2 value) { OrthographicFrustum__set_Size(this, value); }
};

}}


#endif
