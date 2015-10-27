// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__Fuse_Resources_ImageSource;

struct ValueChangedArgs__Fuse_Resources_ImageSource__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__Fuse_Resources_ImageSource__uType* ValueChangedArgs__Fuse_Resources_ImageSource__typeof();

::uObject* ValueChangedArgs__Fuse_Resources_ImageSource__get_Origin(ValueChangedArgs__Fuse_Resources_ImageSource* __this);
::app::Fuse::Resources::ImageSource* ValueChangedArgs__Fuse_Resources_ImageSource__get_Value(ValueChangedArgs__Fuse_Resources_ImageSource* __this);
void ValueChangedArgs__Fuse_Resources_ImageSource__set_Origin(ValueChangedArgs__Fuse_Resources_ImageSource* __this, ::uObject* value);
void ValueChangedArgs__Fuse_Resources_ImageSource__set_Value(ValueChangedArgs__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value);

struct ValueChangedArgs__Fuse_Resources_ImageSource : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Fuse::Resources::ImageSource*> _Value;
    ::uStrong< ::uObject*> _Origin;

    ::uObject* Origin() { return ValueChangedArgs__Fuse_Resources_ImageSource__get_Origin(this); }
    ::app::Fuse::Resources::ImageSource* Value() { return ValueChangedArgs__Fuse_Resources_ImageSource__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__Fuse_Resources_ImageSource__set_Origin(this, value); }
    void Value(::app::Fuse::Resources::ImageSource* value) { ValueChangedArgs__Fuse_Resources_ImageSource__set_Value(this, value); }
};

}}}


#endif
