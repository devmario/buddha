// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/Attributes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_U_X_AUTO_GENERIC_ATTRIBUTE_H__
#define __APP_UNO_U_X_U_X_AUTO_GENERIC_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct UXAutoGenericAttribute;

struct UXAutoGenericAttribute__uType : ::app::Uno::Attribute__uType
{
};

UXAutoGenericAttribute__uType* UXAutoGenericAttribute__typeof();

void UXAutoGenericAttribute___ObjInit_1(UXAutoGenericAttribute* __this, ::uString* alias, ::uString* property);
UXAutoGenericAttribute* UXAutoGenericAttribute__New_1(::uStatic* __this, ::uString* alias, ::uString* property);

struct UXAutoGenericAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> Alias;
    ::uStrong< ::uString*> Property;

    void _ObjInit_1(::uString* alias, ::uString* property) { UXAutoGenericAttribute___ObjInit_1(this, alias, property); }
};

}}}


#endif
