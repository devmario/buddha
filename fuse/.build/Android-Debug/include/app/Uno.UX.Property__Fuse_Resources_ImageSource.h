// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_UNO_U_X_PROPERTY__FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }

namespace app {
namespace Uno {
namespace UX {

struct Property__Fuse_Resources_ImageSource;

struct Property__Fuse_Resources_ImageSource__uType : ::uClassType
{
    ::app::Fuse::Resources::ImageSource*(*__fp_OnGet)(Property__Fuse_Resources_ImageSource*);
    void(*__fp_OnSet)(Property__Fuse_Resources_ImageSource*, ::app::Fuse::Resources::ImageSource*, ::uObject*);
};

Property__Fuse_Resources_ImageSource__uType* Property__Fuse_Resources_ImageSource__typeof();

void Property__Fuse_Resources_ImageSource___ObjInit(Property__Fuse_Resources_ImageSource* __this);
void Property__Fuse_Resources_ImageSource__add_ValueChanged(Property__Fuse_Resources_ImageSource* __this, ::uDelegate* value);
void Property__Fuse_Resources_ImageSource__OnAddListener(Property__Fuse_Resources_ImageSource* __this, ::uDelegate* listener);
::app::Fuse::Resources::ImageSource* Property__Fuse_Resources_ImageSource__OnGet(Property__Fuse_Resources_ImageSource* __this);
void Property__Fuse_Resources_ImageSource__OnRemoveListener(Property__Fuse_Resources_ImageSource* __this, ::uDelegate* listener);
void Property__Fuse_Resources_ImageSource__OnSet(Property__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value, ::uObject* origin);
void Property__Fuse_Resources_ImageSource__remove_ValueChanged(Property__Fuse_Resources_ImageSource* __this, ::uDelegate* value);
void Property__Fuse_Resources_ImageSource__RetainRestState(Property__Fuse_Resources_ImageSource* __this);
void Property__Fuse_Resources_ImageSource__SetRestState(Property__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value, ::uObject* origin);

struct Property__Fuse_Resources_ImageSource : ::uObject
{
    bool _hasRestState;
    ::uStrong< ::app::Fuse::Resources::ImageSource*> _restState;

    void _ObjInit() { Property__Fuse_Resources_ImageSource___ObjInit(this); }
    void add_ValueChanged(::uDelegate* value) { Property__Fuse_Resources_ImageSource__add_ValueChanged(this, value); }
    void OnAddListener(::uDelegate* listener) { Property__Fuse_Resources_ImageSource__OnAddListener(this, listener); }
    ::app::Fuse::Resources::ImageSource* OnGet() { return (((Property__Fuse_Resources_ImageSource__uType*)this->__obj_type)->__fp_OnGet)(this); }
    void OnRemoveListener(::uDelegate* listener) { Property__Fuse_Resources_ImageSource__OnRemoveListener(this, listener); }
    void OnSet(::app::Fuse::Resources::ImageSource* value, ::uObject* origin) { (((Property__Fuse_Resources_ImageSource__uType*)this->__obj_type)->__fp_OnSet)(this, value, origin); }
    void remove_ValueChanged(::uDelegate* value) { Property__Fuse_Resources_ImageSource__remove_ValueChanged(this, value); }
    void RetainRestState() { Property__Fuse_Resources_ImageSource__RetainRestState(this); }
    void SetRestState(::app::Fuse::Resources::ImageSource* value, ::uObject* origin) { Property__Fuse_Resources_ImageSource__SetRestState(this, value, origin); }
};

}}}


#endif