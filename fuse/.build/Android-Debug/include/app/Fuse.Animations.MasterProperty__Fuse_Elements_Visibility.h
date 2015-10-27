// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_ELEMENTS_VISIBILITY_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_ELEMENTS_VISIBILITY_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_Visibility; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Elements_Visibility;

struct MasterProperty__Fuse_Elements_Visibility__uType : ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Elements_Visibility__uType* MasterProperty__Fuse_Elements_Visibility__typeof();

void MasterProperty__Fuse_Elements_Visibility___ObjInit_1(MasterProperty__Fuse_Elements_Visibility* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* property, ::app::Fuse::Animations::MixerBase* mixerBase);
int MasterProperty__Fuse_Elements_Visibility__get_RestValue(MasterProperty__Fuse_Elements_Visibility* __this);
::uObject* MasterProperty__Fuse_Elements_Visibility__GetPropertyObject(MasterProperty__Fuse_Elements_Visibility* __this);
void MasterProperty__Fuse_Elements_Visibility__OnInactive(MasterProperty__Fuse_Elements_Visibility* __this);

struct MasterProperty__Fuse_Elements_Visibility : ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Elements_Visibility*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Elements_Visibility* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Elements_Visibility___ObjInit_1(this, property, mixerBase); }
    int RestValue() { return MasterProperty__Fuse_Elements_Visibility__get_RestValue(this); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Elements_Visibility__GetPropertyObject(this); }
};

}}}


#endif
