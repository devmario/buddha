// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__FUSE_ELEMENTS_VISIBILITY_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__FUSE_ELEMENTS_VISIBILITY_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__Fuse_Elements_Visibility; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_Visibility; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__Fuse_Elements_Visibility;

struct Change__Fuse_Elements_Visibility__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__Fuse_Elements_Visibility__uType* Change__Fuse_Elements_Visibility__typeof();

void Change__Fuse_Elements_Visibility___ObjInit_2(Change__Fuse_Elements_Visibility* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* target);
::app::Fuse::Animations::AnimatorState* Change__Fuse_Elements_Visibility__CreateState(Change__Fuse_Elements_Visibility* __this, ::app::Fuse::Animations::CreateStateParams* p);
bool Change__Fuse_Elements_Visibility__get_IsContinuous(Change__Fuse_Elements_Visibility* __this);
::app::Uno::UX::Property__Fuse_Elements_Visibility* Change__Fuse_Elements_Visibility__get_Target(Change__Fuse_Elements_Visibility* __this);
int Change__Fuse_Elements_Visibility__get_Value(Change__Fuse_Elements_Visibility* __this);
Change__Fuse_Elements_Visibility* Change__Fuse_Elements_Visibility__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* target);
void Change__Fuse_Elements_Visibility__set_Target(Change__Fuse_Elements_Visibility* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* value);
void Change__Fuse_Elements_Visibility__set_Value(Change__Fuse_Elements_Visibility* __this, int value);

struct Change__Fuse_Elements_Visibility : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__Fuse_Elements_Visibility*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Elements_Visibility*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Elements_Visibility* target) { Change__Fuse_Elements_Visibility___ObjInit_2(this, target); }
    bool IsContinuous() { return Change__Fuse_Elements_Visibility__get_IsContinuous(this); }
    ::app::Uno::UX::Property__Fuse_Elements_Visibility* Target() { return Change__Fuse_Elements_Visibility__get_Target(this); }
    int Value() { return Change__Fuse_Elements_Visibility__get_Value(this); }
    void Target(::app::Uno::UX::Property__Fuse_Elements_Visibility* value) { Change__Fuse_Elements_Visibility__set_Target(this, value); }
    void Value(int value) { Change__Fuse_Elements_Visibility__set_Value(this, value); }
};

}}}


#endif
