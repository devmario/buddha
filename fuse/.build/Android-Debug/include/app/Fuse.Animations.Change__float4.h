// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__FLOAT4_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__FLOAT4_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__float4; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__float4; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__float4;

struct Change__float4__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__float4__uType* Change__float4__typeof();

void Change__float4___ObjInit_2(Change__float4* __this, ::app::Uno::UX::Property__float4* target);
::app::Fuse::Animations::AnimatorState* Change__float4__CreateState(Change__float4* __this, ::app::Fuse::Animations::CreateStateParams* p);
bool Change__float4__get_IsContinuous(Change__float4* __this);
::app::Uno::UX::Property__float4* Change__float4__get_Target(Change__float4* __this);
::app::Uno::Float4 Change__float4__get_Value(Change__float4* __this);
Change__float4* Change__float4__New_1(::uStatic* __this, ::app::Uno::UX::Property__float4* target);
void Change__float4__set_Target(Change__float4* __this, ::app::Uno::UX::Property__float4* value);
void Change__float4__set_Value(Change__float4* __this, ::app::Uno::Float4 value);

struct Change__float4 : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__float4*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__float4*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__float4* target) { Change__float4___ObjInit_2(this, target); }
    bool IsContinuous() { return Change__float4__get_IsContinuous(this); }
    ::app::Uno::UX::Property__float4* Target() { return Change__float4__get_Target(this); }
    ::app::Uno::Float4 Value();
    void Target(::app::Uno::UX::Property__float4* value) { Change__float4__set_Target(this, value); }
    void Value(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Change__float4::Value() { return Change__float4__get_Value(this); }
inline void Change__float4::Value(::app::Uno::Float4 value) { Change__float4__set_Value(this, value); }

}}}


#endif
