// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_HIT_TEST_CONTEXT_H__
#define __APP_FUSE_HIT_TEST_CONTEXT_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {

struct HitTestContext;

struct HitTestContext__uType : ::uClassType
{
};

HitTestContext__uType* HitTestContext__typeof();

void HitTestContext___ObjInit(HitTestContext* __this, ::app::Uno::Float2 windowPoint, ::uDelegate* callback);
void HitTestContext__Dispose(HitTestContext* __this);
::uDelegate* HitTestContext__get_Callback(HitTestContext* __this);
::app::Uno::Float2 HitTestContext__get_LocalPoint(HitTestContext* __this);
::app::Uno::Float2 HitTestContext__get_WindowPoint(HitTestContext* __this);
void HitTestContext__Hit_1(HitTestContext* __this, ::app::Fuse::Node* obj);
HitTestContext* HitTestContext__New_1(::uStatic* __this, ::app::Uno::Float2 windowPoint, ::uDelegate* callback);
void HitTestContext__PopLocalPoint(HitTestContext* __this, ::app::Uno::Float2 lp);
::app::Uno::Float2 HitTestContext__PushLocalPoint(HitTestContext* __this, ::app::Uno::Float2 lp);
void HitTestContext__set_WindowPoint(HitTestContext* __this, ::app::Uno::Float2 value);

struct HitTestContext : ::uObject
{
    ::app::Uno::Float2 _localPoint;
    ::uStrong< ::uDelegate*> _callback;
    ::app::Uno::Float2 _WindowPoint;

    void _ObjInit(::app::Uno::Float2 windowPoint, ::uDelegate* callback) { HitTestContext___ObjInit(this, windowPoint, callback); }
    void Dispose() { HitTestContext__Dispose(this); }
    ::uDelegate* Callback() { return HitTestContext__get_Callback(this); }
    ::app::Uno::Float2 LocalPoint() { return HitTestContext__get_LocalPoint(this); }
    ::app::Uno::Float2 WindowPoint() { return HitTestContext__get_WindowPoint(this); }
    void Hit_1(::app::Fuse::Node* obj) { HitTestContext__Hit_1(this, obj); }
    void PopLocalPoint(::app::Uno::Float2 lp) { HitTestContext__PopLocalPoint(this, lp); }
    ::app::Uno::Float2 PushLocalPoint(::app::Uno::Float2 lp) { return HitTestContext__PushLocalPoint(this, lp); }
    void WindowPoint(::app::Uno::Float2 value) { HitTestContext__set_WindowPoint(this, value); }
};

}}


#endif
