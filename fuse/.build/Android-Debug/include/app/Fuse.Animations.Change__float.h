// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__FLOAT_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__FLOAT_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__float; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__float; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__float;

struct Change__float__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__float__uType* Change__float__typeof();

void Change__float___ObjInit_2(Change__float* __this, ::app::Uno::UX::Property__float* target);
::app::Fuse::Animations::AnimatorState* Change__float__CreateState(Change__float* __this, ::app::Fuse::Animations::CreateStateParams* p);
bool Change__float__get_IsContinuous(Change__float* __this);
::app::Uno::UX::Property__float* Change__float__get_Target(Change__float* __this);
float Change__float__get_Value(Change__float* __this);
Change__float* Change__float__New_1(::uStatic* __this, ::app::Uno::UX::Property__float* target);
void Change__float__set_Target(Change__float* __this, ::app::Uno::UX::Property__float* value);
void Change__float__set_Value(Change__float* __this, float value);

struct Change__float : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__float*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__float*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__float* target) { Change__float___ObjInit_2(this, target); }
    bool IsContinuous() { return Change__float__get_IsContinuous(this); }
    ::app::Uno::UX::Property__float* Target() { return Change__float__get_Target(this); }
    float Value() { return Change__float__get_Value(this); }
    void Target(::app::Uno::UX::Property__float* value) { Change__float__set_Target(this, value); }
    void Value(float value) { Change__float__set_Value(this, value); }
};

}}}


#endif
