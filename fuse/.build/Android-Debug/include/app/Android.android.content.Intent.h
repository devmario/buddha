// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/content/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_CONTENT_INTENT_H__
#define __APP_ANDROID_ANDROID_CONTENT_INTENT_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace net { struct Uri; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace content {

struct Intent;

extern jclass Intent___javaClass_2;
extern jfieldID Intent__ACTION_CALL_4422_ID;
extern jfieldID Intent__ACTION_SENDTO_4423_ID;
extern jfieldID Intent__ACTION_VIEW_4408_ID;
extern jmethodID Intent__Intent_4637_ID_c;
extern jmethodID Intent__setClassName_4749_ID;
extern jmethodID Intent__setData_4701_ID;
extern jmethodID Intent__toString_4755_ID;

struct Intent__uType : ::app::Android::java::lang::Object__uType
{
};

Intent__uType* Intent__typeof();

void Intent___Init_2(::uStatic* __this);
void Intent___ObjInit_4(Intent* __this, ::app::Android::java::lang::String* arg0);
::app::Android::java::lang::String* Intent__get_ACTION_CALL(::uStatic* __this);
::app::Android::java::lang::String* Intent__get_ACTION_SENDTO(::uStatic* __this);
::app::Android::java::lang::String* Intent__get_ACTION_VIEW(::uStatic* __this);
Intent* Intent__New_5(::uStatic* __this, ::app::Android::java::lang::String* arg0);
Intent* Intent__setClassName_1(Intent* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1);
::uObject* Intent__setClassName_IMPL_4749(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
Intent* Intent__setData(Intent* __this, ::app::Android::android::net::Uri* arg0);
::uObject* Intent__setData_IMPL_4701(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::java::lang::String* Intent__toString(Intent* __this);
::uObject* Intent__toString_IMPL_4755(::uStatic* __this, bool arg0_, jobject arg1_);

struct Intent : ::app::Android::java::lang::Object
{
    void _ObjInit_4(::app::Android::java::lang::String* arg0) { Intent___ObjInit_4(this, arg0); }
    Intent* setClassName_1(::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1) { return Intent__setClassName_1(this, arg0, arg1); }
    Intent* setData(::app::Android::android::net::Uri* arg0) { return Intent__setData(this, arg0); }
};

}}}}


#endif
