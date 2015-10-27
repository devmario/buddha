// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/Attributes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_U_X_GLOBAL_RESOURCE_ATTRIBUTE_H__
#define __APP_UNO_U_X_U_X_GLOBAL_RESOURCE_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct UXGlobalResourceAttribute;

struct UXGlobalResourceAttribute__uType : ::app::Uno::Attribute__uType
{
};

UXGlobalResourceAttribute__uType* UXGlobalResourceAttribute__typeof();

void UXGlobalResourceAttribute___ObjInit_1(UXGlobalResourceAttribute* __this, ::uString* alias);
void UXGlobalResourceAttribute___ObjInit_2(UXGlobalResourceAttribute* __this);
UXGlobalResourceAttribute* UXGlobalResourceAttribute__New_1(::uStatic* __this, ::uString* alias);
UXGlobalResourceAttribute* UXGlobalResourceAttribute__New_2(::uStatic* __this);

struct UXGlobalResourceAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> Alias;

    void _ObjInit_1(::uString* alias) { UXGlobalResourceAttribute___ObjInit_1(this, alias); }
    void _ObjInit_2() { UXGlobalResourceAttribute___ObjInit_2(this); }
};

}}}


#endif
