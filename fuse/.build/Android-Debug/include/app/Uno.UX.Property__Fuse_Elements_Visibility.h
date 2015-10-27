// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FUSE_ELEMENTS_VISIBILITY_H__
#define __APP_UNO_U_X_PROPERTY__FUSE_ELEMENTS_VISIBILITY_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct Property__Fuse_Elements_Visibility;

struct Property__Fuse_Elements_Visibility__uType : ::uClassType
{
    int(*__fp_OnGet)(Property__Fuse_Elements_Visibility*);
    void(*__fp_OnSet)(Property__Fuse_Elements_Visibility*, int, ::uObject*);
};

Property__Fuse_Elements_Visibility__uType* Property__Fuse_Elements_Visibility__typeof();

void Property__Fuse_Elements_Visibility___ObjInit(Property__Fuse_Elements_Visibility* __this);
int Property__Fuse_Elements_Visibility__GetRestState(Property__Fuse_Elements_Visibility* __this);
int Property__Fuse_Elements_Visibility__OnGet(Property__Fuse_Elements_Visibility* __this);
void Property__Fuse_Elements_Visibility__OnSet(Property__Fuse_Elements_Visibility* __this, int value, ::uObject* origin);
void Property__Fuse_Elements_Visibility__RetainRestState(Property__Fuse_Elements_Visibility* __this);
void Property__Fuse_Elements_Visibility__Set(Property__Fuse_Elements_Visibility* __this, int value, ::uObject* origin);

struct Property__Fuse_Elements_Visibility : ::uObject
{
    bool _hasRestState;
    int _restState;

    void _ObjInit() { Property__Fuse_Elements_Visibility___ObjInit(this); }
    int GetRestState() { return Property__Fuse_Elements_Visibility__GetRestState(this); }
    int OnGet() { return (((Property__Fuse_Elements_Visibility__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnSet(int value, ::uObject* origin) { (((Property__Fuse_Elements_Visibility__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void RetainRestState() { Property__Fuse_Elements_Visibility__RetainRestState(this); }
    void Set(int value, ::uObject* origin) { Property__Fuse_Elements_Visibility__Set(this, value, origin); }
};

}}}


#endif
