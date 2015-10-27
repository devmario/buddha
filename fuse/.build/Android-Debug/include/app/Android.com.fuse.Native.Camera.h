// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.10.5/AndroidImpl/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_COM_FUSE_NATIVE_CAMERA_H__
#define __APP_ANDROID_COM_FUSE_NATIVE_CAMERA_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace com {
namespace fuse {
namespace Native {

struct Camera;

extern jclass Camera___javaClass_1;
extern jmethodID Camera__TakePicture_44277_ID;

struct Camera__uType : ::app::Android::Base::Wrappers::JWrapper__uType
{
};

Camera__uType* Camera__typeof();

void Camera___Init_1(::uStatic* __this);
void Camera__TakePicture(::uStatic* __this, ::uObject* arg0);
void Camera__TakePicture_IMPL_44277(::uStatic* __this, ::uObject* arg0_);

struct Camera : ::app::Android::Base::Wrappers::JWrapper
{
};

}}}}}


#endif
