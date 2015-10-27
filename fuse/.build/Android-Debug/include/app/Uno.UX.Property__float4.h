// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FLOAT4_H__
#define __APP_UNO_U_X_PROPERTY__FLOAT4_H__

#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__float4;

struct Property__float4__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_OnGet)(Property__float4*);
    void(*__fp_OnSet)(Property__float4*, ::app::Uno::Float4, ::uObject*);
};

Property__float4__uType* Property__float4__typeof();

void Property__float4___ObjInit(Property__float4* __this);
::app::Uno::Float4 Property__float4__GetRestState(Property__float4* __this);
::app::Uno::Float4 Property__float4__OnGet(Property__float4* __this);
void Property__float4__OnSet(Property__float4* __this, ::app::Uno::Float4 value, ::uObject* origin);
void Property__float4__RetainRestState(Property__float4* __this);
void Property__float4__Set(Property__float4* __this, ::app::Uno::Float4 value, ::uObject* origin);
void Property__float4__SetRestState(Property__float4* __this, ::app::Uno::Float4 value, ::uObject* origin);

struct Property__float4 : ::uObject
{
    bool _hasRestState;
    ::app::Uno::Float4 _restState;

    void _ObjInit() { Property__float4___ObjInit(this); }
    ::app::Uno::Float4 GetRestState() { return Property__float4__GetRestState(this); }
    ::app::Uno::Float4 OnGet() { return (((Property__float4__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnSet(::app::Uno::Float4 value, ::uObject* origin) { (((Property__float4__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void RetainRestState() { Property__float4__RetainRestState(this); }
    void Set(::app::Uno::Float4 value, ::uObject* origin) { Property__float4__Set(this, value, origin); }
    void SetRestState(::app::Uno::Float4 value, ::uObject* origin) { Property__float4__SetRestState(this, value, origin); }
};

}}}


#endif
