// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_NAVIGATION_TWEEN_H__
#define __APP_FUSE_NAVIGATION_NAVIGATION_TWEEN_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Navigation {

struct NavigationTween;

struct NavigationTween__uType : ::uClassType
{
};

NavigationTween__uType* NavigationTween__typeof();

double NavigationTween__get_Duration(NavigationTween* __this);
double NavigationTween__get_DurationBack(NavigationTween* __this);
int NavigationTween__get_Easing(NavigationTween* __this);
int NavigationTween__get_EasingBack(NavigationTween* __this);
void NavigationTween__set_Duration(NavigationTween* __this, double value);
void NavigationTween__set_DurationBack(NavigationTween* __this, double value);
void NavigationTween__set_Easing(NavigationTween* __this, int value);
void NavigationTween__set_EasingBack(NavigationTween* __this, int value);

struct NavigationTween : ::uObject
{
    int _easing;
    double _duration;
    int _easingBack;
    bool _hasEasingBack;
    double _durationBack;
    bool _hasDurationBack;

    double Duration() { return NavigationTween__get_Duration(this); }
    double DurationBack() { return NavigationTween__get_DurationBack(this); }
    int Easing() { return NavigationTween__get_Easing(this); }
    int EasingBack() { return NavigationTween__get_EasingBack(this); }
    void Duration(double value) { NavigationTween__set_Duration(this, value); }
    void DurationBack(double value) { NavigationTween__set_DurationBack(this, value); }
    void Easing(int value) { NavigationTween__set_Easing(this, value); }
    void EasingBack(int value) { NavigationTween__set_EasingBack(this, value); }
};

}}}


#endif
