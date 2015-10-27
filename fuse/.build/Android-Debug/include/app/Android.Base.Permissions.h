// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_BASE_PERMISSIONS_H__
#define __APP_ANDROID_BASE_PERMISSIONS_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Base {

struct Permissions;

struct Permissions__uType : ::uClassType
{
};

Permissions__uType* Permissions__typeof();

void* Permissions___call_phone(::uStatic* __this);
void* Permissions___internet(::uStatic* __this);
void* Permissions___vibrate(::uStatic* __this);
void* Permissions__get_CALL_PHONE(::uStatic* __this);
void* Permissions__get_INTERNET(::uStatic* __this);
void* Permissions__get_VIBRATE(::uStatic* __this);
void Permissions__RequestPermission(::uStatic* __this, void* x);

struct Permissions : ::uObject
{
};

}}}


#endif
