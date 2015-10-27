#include "Source/ActivityAndLifecycle/AApplication.h"
#include <Xli.h>
#include <Xli/Time.h>
#include "XliPlatform.h"
#include "XliPlatform/PlatformSpecific/Android.h"
#include "Source/ActivityAndLifecycle/EntryPoints.h"
#include <Uno/Platform2.h>
#include <app/Uno.Platform2.Display.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Platform.TimerEventArgs.h>
#include <app/Uno.Platform.SystemUI.h>
#include <app/Uno.Platform.SystemUIWillResizeEventArgs.h>

void uStartApp();

int AApplication::_topFrameSize;
int AApplication::_bottomFrameSize;
int AApplication::_forceDrawForNext;

::app::Uno::Platform2::Display* AApplication::_rootDisplay;

void AApplication::cppOnCreate()
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__Start(NULL);
}

void AApplication::cppOnDestroy()
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__Terminate(NULL);

    AApplication::_bottomFrameSize = 0;
    // {NOTE} We dont call GLHelper::DeInitGL() here as there is no reliable way to
    //        tell if it really is a destory or if we are going to get ressurected
    //        and we really want to survive that with gl intact if possible
}

void AApplication::cppOnPause()
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__EnterBackground(NULL);
}

void AApplication::cppOnResume()
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__EnterForeground(NULL);
}

void AApplication::cppOnRestart()
{
    uAutoReleasePool pool;
    GLHelper::SwapBackToBackgroundSurface();
    ::app::Uno::Platform2::Application__ResetContextState(NULL);
}

void AApplication::cppOnStart()
{
    // uAutoReleasePool pool;
}

void AApplication::cppOnStop()
{
    // uAutoReleasePool pool;
}

void AApplication::cppOnSaveInstanceState()
{
    // uAutoReleasePool pool;
}

void AApplication::cppOnConfigChanged()
{
    uAutoReleasePool pool;
    if (_rootDisplay) {
        GLHelper::SwapBackToBackgroundSurface();
        _rootDisplay->_private.ResetGeometry(_rootDisplay);
    }
}

void AApplication::cppOnLowMemory()
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__OnReceivedLowMemoryWarning(NULL);
}

void AApplication::cppOnWindowFocusChanged(bool hasFocus)
{
    uAutoReleasePool pool;
    if (hasFocus)
    {
        ::app::Uno::Platform2::Application__EnterInteractive(NULL);
    } else {
        ::app::Uno::Platform2::Application__ExitInteractive(NULL);
    }
}

void AApplication::cppJavaThrowError (Xli::String message)
{
    XLI_THROW(message.Ptr());
}

void AApplication::cppOnReceiveURI (jstring data)
{
    uAutoReleasePool pool;
    ::uString* unoUri = JniHelper::JavaToUnoString(data);
    JniHelper jni;
    jni->DeleteGlobalRef(data);
    ::app::Uno::Platform2::Application__OnReceivedURI(NULL, unoUri);
}

void AApplication::cppTimerCallback (int timerID)
{
    // uAutoReleasePool pool;
}

::app::Uno::Float2 AApplication::_GetRootDisplaySize()
{
    jclass cls = JniHelper::GetDisplayClass();
    WITH_STATIC_JAVA_METHOD(getRealDisplayWidth, cls, "GetRealDisplayWidth", "()I");
    WITH_STATIC_JAVA_METHOD_USEJNI(getRealDisplayHeight, cls, "GetRealDisplayHeight", "()I");
    float w = (int)__jni->CallStaticIntMethod(cls, getRealDisplayWidth);
    float h = (int)__jni->CallStaticIntMethod(cls, getRealDisplayHeight);
    return  ::app::Uno::Float2__New_2(NULL, w, h);
}

int AApplication::GetBottomFrameHeight()
{
    return _bottomFrameSize;
}

void AApplication::cppOnKeyboardResized (int height) //{TODO} rename to cppOnBottomFrameChanged(int height)
{
    uAutoReleasePool pool;
    int resizeReason;

    ::app::Uno::Float2 size = _GetRootDisplaySize();

    ::app::Uno::Float2 start_pos = ::app::Uno::Float2__New_2(NULL, 0, size.Y - _bottomFrameSize);
    ::app::Uno::Float2 start_size = ::app::Uno::Float2__New_2(NULL, size.X, _bottomFrameSize);

    ::app::Uno::Float2 end_pos = ::app::Uno::Float2__New_2(NULL, 0, size.Y - height);
    ::app::Uno::Float2 end_size = ::app::Uno::Float2__New_2(NULL, size.X, height);

    ::app::Uno::Rect startFrame = ::app::Uno::Rect__New_2(NULL, start_pos, start_size);
    ::app::Uno::Rect endFrame = ::app::Uno::Rect__New_2(NULL, end_pos, end_size);

    if (_bottomFrameSize==0 && height>0) {
        resizeReason = 0;
    } else if (_bottomFrameSize>0 && height==0) {
        resizeReason = 2;
    } else if (_bottomFrameSize>0 && height > 0 && height != _bottomFrameSize) {
        resizeReason = 1;
    }
    _bottomFrameSize = height;

    // make the event args
    ::app::Uno::Platform::SystemUIWillResizeEventArgs* args = ::app::Uno::Platform::SystemUIWillResizeEventArgs__New_2(NULL, 1, resizeReason, endFrame, startFrame, 1, 0);

    //Make the call
    ::app::Uno::Platform::SystemUI__OnWillResize(NULL, args);
}

void AApplication::cppOnTopFrameChanged (int height) //{TODO} rename to cppOnTopFrameChanged(int height)
{
    if (_topFrameSize != height)
    {
        uAutoReleasePool pool;
        int resizeReason;

        ::app::Uno::Float2 size = _GetRootDisplaySize();

        ::app::Uno::Float2 start_pos = ::app::Uno::Float2__New_2(NULL, 0, size.Y - _topFrameSize);
        ::app::Uno::Float2 start_size = ::app::Uno::Float2__New_2(NULL, size.X, _topFrameSize);

        ::app::Uno::Float2 end_pos = ::app::Uno::Float2__New_2(NULL, 0, size.Y - height);
        ::app::Uno::Float2 end_size = ::app::Uno::Float2__New_2(NULL, size.X, height);

        ::app::Uno::Rect startFrame = ::app::Uno::Rect__New_2(NULL, start_pos, start_size);
        ::app::Uno::Rect endFrame = ::app::Uno::Rect__New_2(NULL, end_pos, end_size);

        if (_topFrameSize==0 && height>0) {
            resizeReason = 0;
        } else if (_topFrameSize>0 && height==0) {
            resizeReason = 2;
        } else if (_topFrameSize>0 && height > 0 && height != _topFrameSize) {
            resizeReason = 1;
        }
        _topFrameSize = height;

        // make the event args
        ::app::Uno::Platform::SystemUIWillResizeEventArgs* args = ::app::Uno::Platform::SystemUIWillResizeEventArgs__New_2(NULL, 0, resizeReason, endFrame, startFrame, 1, 0);

        //Make the call
        ::app::Uno::Platform::SystemUI__OnWillResize(NULL, args);
    }
}

void AApplication::cppOnKeyUp (int key)
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__OnKeyUp(NULL, key, 0);
}


void AApplication::cppOnKeyDown (int key)
{
    uAutoReleasePool pool;
    ::app::Uno::Platform2::Application__OnKeyDown(NULL, key, 0);
}

void AApplication::cppForceRedraw (int forFrames)
{
    _forceDrawForNext = forFrames;
}

//--------------------------------------------------

static double lastTimeStamp;

// This is used only when dictated by the java activity.
// It is possible on later versions of android (v >= 4.2) to use the choreographer
void AApplication::mainLoop(bool resurrected)
{
    if (resurrected) {
        JniHelper jni;
        jni.UpdateActivityObject();
        GLHelper::SwapBackToBackgroundSurface();
        uAutoReleasePool pool;
        ::app::Uno::Platform2::Application__ResetContextState(NULL);
    } else {
        GLHelper::InitGL();
    }
}

void AApplication::Init()
{
    Xli::PlatformSpecific::Android::SetLogTag("buddha");
    _forceDrawForNext = -1;
}
