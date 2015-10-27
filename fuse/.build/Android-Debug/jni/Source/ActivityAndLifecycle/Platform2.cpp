#include <Uno/Platform2.h>
#include "Source/ActivityAndLifecycle/AApplication.h"
#include "JNIHelper.h"
#include "Source/Graphics/GLHelper.h"
#include <app/Uno.Float2.h>
#include <app/Uno.Rect.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Platform2.Display.h>
#include <app/Uno.Platform.TimerEventArgs.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Platform.SystemUI.h>
#include <app/Uno.Platform.SystemUIWillResizeEventArgs.h>
#include <app/Android.Base.JNI.h>
//
// Uno.Platform2.Application
//

namespace uPlatform2
{
    ViewNativeHandle Application::GetRootView()
    {
        // TODO
        return NULL;
    }

    void Application::SetRootView(ViewNativeHandle view)
    {
        jclass activityClass = JniHelper::GetActivityClass();
        WITH_STATIC_JAVA_METHOD(setAsRootView, activityClass, "SetAsRootView", "(Ljava/lang/Object;)V");
        __jni->CallStaticVoidMethod(activityClass, setAsRootView, view);
        ::app::Android::Base::JNI__CheckException(NULL);
    }

    bool Application::GetIsStatusBarVisible()
    {
        jclass activityClass = JniHelper::GetActivityClass();
        WITH_STATIC_JAVA_METHOD(getSysUIHeight, activityClass, "GetStatusBarHeight", "()F");
        float height = (float)__jni->CallStaticFloatMethod(activityClass, getSysUIHeight);
        ::app::Android::Base::JNI__CheckException(NULL);
        return height != 0.0;
    }

    void Application::SetStatusBarVisible(bool visible)
    {
        jclass activityClass = JniHelper::GetActivityClass();
        if (visible) {
            WITH_STATIC_JAVA_METHOD(showSysUI, activityClass, "ShowStatusBar", "()V");
            __jni->CallStaticVoidMethod(activityClass, showSysUI);
            ::app::Android::Base::JNI__CheckException(NULL);
        } else {
            WITH_STATIC_JAVA_METHOD(hideSysUI, activityClass, "HideStatusBar", "()V");
            __jni->CallStaticVoidMethod(activityClass, hideSysUI);
            ::app::Android::Base::JNI__CheckException(NULL);
        }
    }

    void Application::EnterFullscreen()
    {
        jclass activityClass = JniHelper::GetActivityClass();
        WITH_STATIC_JAVA_METHOD(showSysUI, activityClass, "EnterFullscreen", "()V");
        __jni->CallStaticVoidMethod(activityClass, showSysUI);
    }

    ::app::Uno::Rect Application::GetStatusBarFrame()
    {
        jclass activityClass = JniHelper::GetActivityClass();
        WITH_STATIC_JAVA_METHOD(getSysUIFrameHeight, activityClass, "GetStatusBarHeight", "()F");

        ::app::Uno::Float2 dispSize = AApplication::_GetRootDisplaySize();
        ::app::Uno::Float2 origin = ::app::Uno::Float2__New_2(NULL, 0, 0);

        float height = (float)__jni->CallStaticFloatMethod(activityClass, getSysUIFrameHeight);
        ::app::Android::Base::JNI__CheckException(NULL);
        ::app::Uno::Float2 size = ::app::Uno::Float2__New_2(NULL, dispSize.X, height);
        return ::app::Uno::Rect__New_2(NULL, origin, size);
    }
}

//
// Uno.Platform2.Display
//

namespace uPlatform2
{
    void Display::Initialize(Display::UnoDisplay this_)
    {
    }

    void Display::Destroy(Display::UnoDisplay this_)
    {
    }

    void Display::InitializeAsMainDisplay(Display::UnoDisplay mainDisplay)
    {
        AApplication::_rootDisplay = mainDisplay;
        ResetGeometry(mainDisplay);
    }

    void Display::ResetGeometry(Display::UnoDisplay this_)
    {
        // TODO: hard-coded for the MainDisplay, for now.
        GLHelper::SwapBackToBackgroundSurface();
        float density = JniHelper::GetDensity();
        ::app::Uno::Float2 position = ::app::Uno::Float2__New_2(NULL, 0.0, 0.0);
        ::app::Uno::Float2 size = AApplication::_GetRootDisplaySize();
        ::app::Uno::Rect frame = ::app::Uno::Rect__New_2(NULL, position, size);

        this_->Density(density);
        this_->Frame(frame);

    }

    void Display::SetFramesPerSecond(Display::UnoDisplay this_, unsigned fps)
    {

    }

    void Display::EnableTickNotifications(Display::UnoDisplay this_)
    {
    }

    void Display::DisableTickNotifications(Display::UnoDisplay this_)
    {
    }
}
