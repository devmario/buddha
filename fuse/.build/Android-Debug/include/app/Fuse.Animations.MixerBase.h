// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_BASE_H__
#define __APP_FUSE_ANIMATIONS_MIXER_BASE_H__

#include <app/Fuse.Animations.IMixer.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Transform; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__bool; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__float; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__float4; } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Elements_Visibility; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__object__object; } } }
namespace app { namespace Uno { namespace UX { struct Property__bool; } } }
namespace app { namespace Uno { namespace UX { struct Property__float; } } }
namespace app { namespace Uno { namespace UX { struct Property__float4; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_Visibility; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerBase;

struct MixerBase__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixer __interface_0;
    ::app::Fuse::Animations::MasterProperty__bool*(*__fp_CreateMaster__bool)(MixerBase*, ::app::Uno::UX::Property__bool*, MixerBase*);
    ::app::Fuse::Animations::MasterProperty__float*(*__fp_CreateMaster__float)(MixerBase*, ::app::Uno::UX::Property__float*, MixerBase*);
    ::app::Fuse::Animations::MasterProperty__float4*(*__fp_CreateMaster__float4)(MixerBase*, ::app::Uno::UX::Property__float4*, MixerBase*);
    ::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility*(*__fp_CreateMaster__Fuse_Elements_Visibility)(MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_Visibility*, MixerBase*);
    ::app::Fuse::Animations::MasterBase__Fuse_Transform*(*__fp_CreateMasterTransform)(MixerBase*, ::app::Fuse::Node*, MixerBase*);
};

MixerBase__uType* MixerBase__typeof();

void MixerBase___ObjInit(MixerBase* __this);
::uObject* MixerBase__Register__bool(MixerBase* __this, ::app::Uno::UX::Property__bool* property, int mode);
::uObject* MixerBase__Register__float(MixerBase* __this, ::app::Uno::UX::Property__float* property, int mode);
::uObject* MixerBase__Register__float4(MixerBase* __this, ::app::Uno::UX::Property__float4* property, int mode);
::uObject* MixerBase__Register__Fuse_Elements_Visibility(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* property, int mode);
::uObject* MixerBase__RegisterTransform(MixerBase* __this, ::app::Fuse::Node* element, int mode, int priority);
void MixerBase__Unused(MixerBase* __this, ::uObject* mb);

struct MixerBase : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__object__object*> Masters;
    ::uStrong< ::app::Fuse::PropertyHandle*> _propHandle;

    void _ObjInit() { MixerBase___ObjInit(this); }
    ::app::Fuse::Animations::MasterProperty__bool* CreateMaster__bool(::app::Uno::UX::Property__bool* property, MixerBase* mixerBase) { return (((MixerBase__uType*)this->__obj_type)->__fp_CreateMaster__bool)(this, property, mixerBase); }
    ::app::Fuse::Animations::MasterProperty__float* CreateMaster__float(::app::Uno::UX::Property__float* property, MixerBase* mixerBase) { return (((MixerBase__uType*)this->__obj_type)->__fp_CreateMaster__float)(this, property, mixerBase); }
    ::app::Fuse::Animations::MasterProperty__float4* CreateMaster__float4(::app::Uno::UX::Property__float4* property, MixerBase* mixerBase) { return (((MixerBase__uType*)this->__obj_type)->__fp_CreateMaster__float4)(this, property, mixerBase); }
    ::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility* CreateMaster__Fuse_Elements_Visibility(::app::Uno::UX::Property__Fuse_Elements_Visibility* property, MixerBase* mixerBase) { return (((MixerBase__uType*)this->__obj_type)->__fp_CreateMaster__Fuse_Elements_Visibility)(this, property, mixerBase); }
    ::app::Fuse::Animations::MasterBase__Fuse_Transform* CreateMasterTransform(::app::Fuse::Node* element, MixerBase* mixerBase) { return (((MixerBase__uType*)this->__obj_type)->__fp_CreateMasterTransform)(this, element, mixerBase); }
    ::uObject* Register__bool(::app::Uno::UX::Property__bool* property, int mode) { return MixerBase__Register__bool(this, property, mode); }
    ::uObject* Register__float(::app::Uno::UX::Property__float* property, int mode) { return MixerBase__Register__float(this, property, mode); }
    ::uObject* Register__float4(::app::Uno::UX::Property__float4* property, int mode) { return MixerBase__Register__float4(this, property, mode); }
    ::uObject* Register__Fuse_Elements_Visibility(::app::Uno::UX::Property__Fuse_Elements_Visibility* property, int mode) { return MixerBase__Register__Fuse_Elements_Visibility(this, property, mode); }
    ::uObject* RegisterTransform(::app::Fuse::Node* element, int mode, int priority) { return MixerBase__RegisterTransform(this, element, mode, priority); }
    void Unused(::uObject* mb) { MixerBase__Unused(this, mb); }
};

}}}


#endif
