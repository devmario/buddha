#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Launcher.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeEventArgs.h>
#include <app/Fuse.NodeEventHandler.h>
#include <app/Fuse.Time.h>
#include <app/Fuse.Triggers.Actions.BringIntoView.h>
#include <app/Fuse.Triggers.Actions.BringToFront.h>
#include <app/Fuse.Triggers.Actions.Call.h>
#include <app/Fuse.Triggers.Actions.Callback.h>
#include <app/Fuse.Triggers.Actions.Collapse.h>
#include <app/Fuse.Triggers.Actions.DebugAction.h>
#include <app/Fuse.Triggers.Actions.GiveFocus.h>
#include <app/Fuse.Triggers.Actions.Hide.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.Actions.LaunchEmail.h>
#include <app/Fuse.Triggers.Actions.LaunchMaps.h>
#include <app/Fuse.Triggers.Actions.LaunchUri.h>
#include <app/Fuse.Triggers.Actions.Pause.h>
#include <app/Fuse.Triggers.Actions.PlaybackAction.h>
#include <app/Fuse.Triggers.Actions.PlayTo.h>
#include <app/Fuse.Triggers.Actions.Pulse.h>
#include <app/Fuse.Triggers.Actions.Resume.h>
#include <app/Fuse.Triggers.Actions.SendToBack.h>
#include <app/Fuse.Triggers.Actions.Show.h>
#include <app/Fuse.Triggers.Actions.Stop.h>
#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Fuse.Triggers.Actions.TriggerDirection.h>
#include <app/Fuse.Triggers.IPlayback.h>
#include <app/Fuse.Triggers.WhileBool.h>
#include <app/Fuse.Triggers.WhileValue__bool.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Net.Http.Uri.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Triggers/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BringIntoView__uType* BringIntoView__typeof()
{
    static ::uStaticStrong<BringIntoView__uType*> type;
    if (type != NULL) return type;

    type = (BringIntoView__uType*)::uAllocClassType(sizeof(BringIntoView__uType), "Fuse.Triggers.Actions.BringIntoView", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))BringIntoView__Perform;

    return type;
}

void BringIntoView__Perform(BringIntoView* __this, ::app::Fuse::Node* target)
{
    ::app::Fuse::Elements::Element* elm = ::uAs< ::app::Fuse::Elements::Element*>(target, ::app::Fuse::Elements::Element__typeof());

    if (elm != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(elm)->BringIntoView();
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/Triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BringToFront__uType* BringToFront__typeof()
{
    static ::uStaticStrong<BringToFront__uType*> type;
    if (type != NULL) return type;

    type = (BringToFront__uType*)::uAllocClassType(sizeof(BringToFront__uType), "Fuse.Triggers.Actions.BringToFront", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))BringToFront__Perform;

    type->SetStrongRefs(
        "_Target", offsetof(BringToFront, _Target));

    return type;
}

::app::Fuse::Node* BringToFront__get_Target(BringToFront* __this)
{
    return __this->_Target;
}

void BringToFront__Perform(BringToFront* __this, ::app::Fuse::Node* target)
{
    ::app::Fuse::Node* ind_123 = __this->Target();
    ::app::Fuse::Node* elm = (ind_123 != NULL) ? ind_123 : target;

    if (elm != NULL)
    {
        ::app::Fuse::Controls::Panel* panel = ::uAs< ::app::Fuse::Controls::Panel*>(::uPtr< ::app::Fuse::Node*>(elm)->Parent(), ::app::Fuse::Controls::Panel__typeof());

        if (panel != NULL)
        {
            ::uPtr< ::app::Fuse::Controls::Panel*>(panel)->BringToFront(elm);
        }
    }
}

void BringToFront__set_Target(BringToFront* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Launcher/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Call__uType* Call__typeof()
{
    static ::uStaticStrong<Call__uType*> type;
    if (type != NULL) return type;

    type = (Call__uType*)::uAllocClassType(sizeof(Call__uType), "Fuse.Triggers.Actions.Call", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Call__Perform;

    type->SetStrongRefs(
        "_Number", offsetof(Call, _Number));

    return type;
}

::uString* Call__get_Number(Call* __this)
{
    return __this->_Number;
}

void Call__Perform(Call* __this, ::app::Fuse::Node* target)
{
    ::app::Fuse::Launcher__LaunchCall(NULL, __this->Number());
}

void Call__set_Number(Call* __this, ::uString* value)
{
    __this->_Number = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Callback__uType* Callback__typeof()
{
    static ::uStaticStrong<Callback__uType*> type;
    if (type != NULL) return type;

    type = (Callback__uType*)::uAllocClassType(sizeof(Callback__uType), "Fuse.Triggers.Actions.Callback", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Callback__Perform;

    type->SetStrongRefs(
        "_Action", offsetof(Callback, _Action),
        "Handler", offsetof(Callback, Handler));

    return type;
}

void Callback___ObjInit_1(Callback* __this)
{
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);
}

void Callback__add_Handler(Callback* __this, ::uDelegate* value)
{
    __this->Handler = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Handler, (::uDelegate*)value), ::app::Fuse::NodeEventHandler__typeof());
}

::uDelegate* Callback__get_Action(Callback* __this)
{
    return __this->_Action;
}

Callback* Callback__New_1(::uStatic* __this)
{
    Callback* inst = (Callback*)::uAllocObject(sizeof(Callback), Callback__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Callback__Perform(Callback* __this, ::app::Fuse::Node* target)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Action(), NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Action())->InvokeVoid();
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Handler, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Handler)->InvokeVoid< ::uObject*, ::app::Fuse::NodeEventArgs*>((::uObject*)__this, ::app::Fuse::NodeEventArgs__New_2(NULL, target));
    }
}

void Callback__set_Action(Callback* __this, ::uDelegate* value)
{
    __this->_Action = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Collapse__uType* Collapse__typeof()
{
    static ::uStaticStrong<Collapse__uType*> type;
    if (type != NULL) return type;

    type = (Collapse__uType*)::uAllocClassType(sizeof(Collapse__uType), "Fuse.Triggers.Actions.Collapse", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Collapse__Perform;

    return type;
}

void Collapse__Perform(Collapse* __this, ::app::Fuse::Node* target)
{
    if (::uIs(target, ::app::Fuse::Triggers::Actions::ICollapse__typeof()))
    {
        ::app::Fuse::Triggers::Actions::ICollapse::Collapse(::uPtr< ::uObject*>((::uObject*)target));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DebugAction__uType* DebugAction__typeof()
{
    static ::uStaticStrong<DebugAction__uType*> type;
    if (type != NULL) return type;

    type = (DebugAction__uType*)::uAllocClassType(sizeof(DebugAction__uType), "Fuse.Triggers.Actions.DebugAction", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))DebugAction__Perform;

    type->SetStrongRefs(
        "_Message", offsetof(DebugAction, _Message));

    return type;
}

::uString* DebugAction__get_Message(DebugAction* __this)
{
    return __this->_Message;
}

void DebugAction__Perform(DebugAction* __this, ::app::Fuse::Node* target)
{
    ::uArray* array_123;
    ::uString* msg = ::app::Uno::String__Format(NULL, ::uGetConstString("#{0:D} T{1:F} "), (array_123 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), ::app::Fuse::UpdateManager__get_FrameIndex(NULL)), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(1) = ::uBox(::app::Uno::Double__typeof(), ::app::Fuse::Time__get_FrameTime(NULL)), array_123));

    if (::app::Uno::String__op_Inequality(NULL, __this->Message(), NULL))
    {
        msg = ::app::Uno::String__op_Addition_1(NULL, msg, __this->Message());
    }

    ::app::Uno::Diagnostics::Debug__Log_1(NULL, msg, 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno"), 40);
}

void DebugAction__set_Message(DebugAction* __this, ::uString* value)
{
    __this->_Message = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Triggers::Actions::TriggerAction*> GiveFocus__Singleton;

GiveFocus__uType* GiveFocus__typeof()
{
    static ::uStaticStrong<GiveFocus__uType*> type;
    if (type != NULL) return type;

    type = (GiveFocus__uType*)::uAllocClassType(sizeof(GiveFocus__uType), "Fuse.Triggers.Actions.GiveFocus", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))GiveFocus__Perform;

    type->SetStrongRefs(
        "_Target", offsetof(GiveFocus, _Target));

    return type;
}

void GiveFocus___ObjInit_1(GiveFocus* __this)
{
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);
}

void GiveFocus___TypeInit(::uStatic* __this)
{
    GiveFocus__Singleton = (::app::Fuse::Triggers::Actions::TriggerAction*)GiveFocus__New_1(NULL);
}

::app::Fuse::Node* GiveFocus__get_Target(GiveFocus* __this)
{
    return __this->_Target;
}

GiveFocus* GiveFocus__New_1(::uStatic* __this)
{
    GiveFocus* inst = (GiveFocus*)::uAllocObject(sizeof(GiveFocus), GiveFocus__typeof());
    inst->_ObjInit_1();
    return inst;
}

void GiveFocus__Perform(GiveFocus* __this, ::app::Fuse::Node* target)
{
    ::app::Fuse::Node* ind_123;
    ::app::Fuse::Input::Focus__GiveTo(NULL, (ind_123 = __this->Target(), (ind_123 != NULL) ? ind_123 : target));
}

void GiveFocus__set_Target(GiveFocus* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Hide__uType* Hide__typeof()
{
    static ::uStaticStrong<Hide__uType*> type;
    if (type != NULL) return type;

    type = (Hide__uType*)::uAllocClassType(sizeof(Hide__uType), "Fuse.Triggers.Actions.Hide", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Hide__Perform;

    return type;
}

void Hide__Perform(Hide* __this, ::app::Fuse::Node* target)
{
    if (::uIs(target, ::app::Fuse::Triggers::Actions::IHide__typeof()))
    {
        ::app::Fuse::Triggers::Actions::IHide::Hide(::uPtr< ::uObject*>((::uObject*)target));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollapse__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Triggers.Actions.ICollapse");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IHide__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Triggers.Actions.IHide");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IShow__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Triggers.Actions.IShow");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Launcher/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LaunchEmail__uType* LaunchEmail__typeof()
{
    static ::uStaticStrong<LaunchEmail__uType*> type;
    if (type != NULL) return type;

    type = (LaunchEmail__uType*)::uAllocClassType(sizeof(LaunchEmail__uType), "Fuse.Triggers.Actions.LaunchEmail", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))LaunchEmail__Perform;

    type->SetStrongRefs(
        "_BlindCarbonCopy", offsetof(LaunchEmail, _BlindCarbonCopy),
        "_CarbonCopy", offsetof(LaunchEmail, _CarbonCopy),
        "_Message", offsetof(LaunchEmail, _Message),
        "_Subject", offsetof(LaunchEmail, _Subject),
        "_To", offsetof(LaunchEmail, _To));

    return type;
}

::uString* LaunchEmail__get_BlindCarbonCopy(LaunchEmail* __this)
{
    return __this->_BlindCarbonCopy;
}

::uString* LaunchEmail__get_CarbonCopy(LaunchEmail* __this)
{
    return __this->_CarbonCopy;
}

::uString* LaunchEmail__get_Message(LaunchEmail* __this)
{
    return __this->_Message;
}

::uString* LaunchEmail__get_Subject(LaunchEmail* __this)
{
    return __this->_Subject;
}

::uString* LaunchEmail__get_To(LaunchEmail* __this)
{
    return __this->_To;
}

void LaunchEmail__Perform(LaunchEmail* __this, ::app::Fuse::Node* target)
{
    ::app::Fuse::Launcher__LaunchEmail(NULL, __this->To(), __this->CarbonCopy(), __this->BlindCarbonCopy(), __this->Subject(), __this->Message());
}

void LaunchEmail__set_BlindCarbonCopy(LaunchEmail* __this, ::uString* value)
{
    __this->_BlindCarbonCopy = value;
}

void LaunchEmail__set_CarbonCopy(LaunchEmail* __this, ::uString* value)
{
    __this->_CarbonCopy = value;
}

void LaunchEmail__set_Message(LaunchEmail* __this, ::uString* value)
{
    __this->_Message = value;
}

void LaunchEmail__set_Subject(LaunchEmail* __this, ::uString* value)
{
    __this->_Subject = value;
}

void LaunchEmail__set_To(LaunchEmail* __this, ::uString* value)
{
    __this->_To = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Launcher/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LaunchMaps__uType* LaunchMaps__typeof()
{
    static ::uStaticStrong<LaunchMaps__uType*> type;
    if (type != NULL) return type;

    type = (LaunchMaps__uType*)::uAllocClassType(sizeof(LaunchMaps__uType), "Fuse.Triggers.Actions.LaunchMaps", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))LaunchMaps__Perform;

    type->SetStrongRefs(
        "_Latitude", offsetof(LaunchMaps, _Latitude),
        "_Longitude", offsetof(LaunchMaps, _Longitude));

    return type;
}

::uString* LaunchMaps__get_Latitude(LaunchMaps* __this)
{
    return __this->_Latitude;
}

::uString* LaunchMaps__get_Longitude(LaunchMaps* __this)
{
    return __this->_Longitude;
}

void LaunchMaps__Perform(LaunchMaps* __this, ::app::Fuse::Node* target)
{
    double lat = 0.0;
    double lon = 0.0;

    if (::app::Uno::Double__TryParse(NULL, __this->Latitude(), &lat) && ::app::Uno::Double__TryParse(NULL, __this->Longitude(), &lon))
    {
        ::app::Fuse::Launcher__LaunchMaps(NULL, lat, lon);
    }
}

void LaunchMaps__set_Latitude(LaunchMaps* __this, ::uString* value)
{
    __this->_Latitude = value;
}

void LaunchMaps__set_Longitude(LaunchMaps* __this, ::uString* value)
{
    __this->_Longitude = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Launcher/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LaunchUri__uType* LaunchUri__typeof()
{
    static ::uStaticStrong<LaunchUri__uType*> type;
    if (type != NULL) return type;

    type = (LaunchUri__uType*)::uAllocClassType(sizeof(LaunchUri__uType), "Fuse.Triggers.Actions.LaunchUri", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))LaunchUri__Perform;

    type->SetStrongRefs(
        "_Uri", offsetof(LaunchUri, _Uri));

    return type;
}

::uString* LaunchUri__get_Uri(LaunchUri* __this)
{
    return __this->_Uri;
}

void LaunchUri__Perform(LaunchUri* __this, ::app::Fuse::Node* target)
{
    ::app::Fuse::Launcher__LaunchUri(NULL, ::app::Uno::Net::Http::Uri__New_1(NULL, __this->Uri()));
}

void LaunchUri__set_Uri(LaunchUri* __this, ::uString* value)
{
    __this->_Uri = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Pause__uType* Pause__typeof()
{
    static ::uStaticStrong<Pause__uType*> type;
    if (type != NULL) return type;

    type = (Pause__uType*)::uAllocClassType(sizeof(Pause__uType), "Fuse.Triggers.Actions.Pause", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::PlaybackAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Pause__Perform;

    return type;
}

void Pause__Perform(Pause* __this, ::app::Fuse::Node* target)
{
    ::uObject* ind_123 = __this->Target();
    ::uObject* t = (ind_123 != NULL) ? ind_123 : ::uAs< ::uObject*>(target, ::app::Fuse::Triggers::IPlayback__typeof());

    if (t != NULL)
    {
        if (::app::Fuse::Triggers::IPlayback::CanPause(::uPtr< ::uObject*>(t)))
        {
            ::app::Fuse::Triggers::IPlayback::Pause(::uPtr< ::uObject*>(t));
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PlaybackAction__uType* PlaybackAction__typeof()
{
    static ::uStaticStrong<PlaybackAction__uType*> type;
    if (type != NULL) return type;

    type = (PlaybackAction__uType*)::uAllocClassType(sizeof(PlaybackAction__uType), "Fuse.Triggers.Actions.PlaybackAction", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());

    type->SetStrongRefs(
        "_Target", offsetof(PlaybackAction, _Target));

    return type;
}

::uObject* PlaybackAction__get_Target(PlaybackAction* __this)
{
    return __this->_Target;
}

void PlaybackAction__set_Target(PlaybackAction* __this, ::uObject* value)
{
    __this->_Target = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PlayTo__uType* PlayTo__typeof()
{
    static ::uStaticStrong<PlayTo__uType*> type;
    if (type != NULL) return type;

    type = (PlayTo__uType*)::uAllocClassType(sizeof(PlayTo__uType), "Fuse.Triggers.Actions.PlayTo", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::PlaybackAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))PlayTo__Perform;

    return type;
}

double PlayTo__get_Progress(PlayTo* __this)
{
    return __this->_Progress;
}

void PlayTo__Perform(PlayTo* __this, ::app::Fuse::Node* target)
{
    ::uObject* ind_123 = __this->Target();
    ::uObject* t = (ind_123 != NULL) ? ind_123 : ::uAs< ::uObject*>(target, ::app::Fuse::Triggers::IPlayback__typeof());

    if (t != NULL)
    {
        if (::app::Fuse::Triggers::IPlayback::CanPlayTo(::uPtr< ::uObject*>(t)))
        {
            ::app::Fuse::Triggers::IPlayback::PlayTo(::uPtr< ::uObject*>(t), __this->Progress());
        }
    }
}

void PlayTo__set_Progress(PlayTo* __this, double value)
{
    __this->_Progress = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Pulse__uType* Pulse__typeof()
{
    static ::uStaticStrong<Pulse__uType*> type;
    if (type != NULL) return type;

    type = (Pulse__uType*)::uAllocClassType(sizeof(Pulse__uType), "Fuse.Triggers.Actions.Pulse", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Pulse__Perform;

    type->SetStrongRefs(
        "_Target", offsetof(Pulse, _Target));

    return type;
}

::app::Fuse::Triggers::WhileBool* Pulse__get_Target(Pulse* __this)
{
    return __this->_Target;
}

void Pulse__Perform(Pulse* __this, ::app::Fuse::Node* target)
{
    ::app::Fuse::Triggers::WhileBool* t = __this->Target();

    if (t != NULL)
    {
        ::uPtr< ::app::Fuse::Triggers::WhileBool*>(t)->Pulse_1();
    }
}

void Pulse__set_Target(Pulse* __this, ::app::Fuse::Triggers::WhileBool* value)
{
    __this->_Target = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Resume__uType* Resume__typeof()
{
    static ::uStaticStrong<Resume__uType*> type;
    if (type != NULL) return type;

    type = (Resume__uType*)::uAllocClassType(sizeof(Resume__uType), "Fuse.Triggers.Actions.Resume", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::PlaybackAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Resume__Perform;

    return type;
}

void Resume__Perform(Resume* __this, ::app::Fuse::Node* target)
{
    ::uObject* ind_123 = __this->Target();
    ::uObject* t = (ind_123 != NULL) ? ind_123 : ::uAs< ::uObject*>(target, ::app::Fuse::Triggers::IPlayback__typeof());

    if (t != NULL)
    {
        if (::app::Fuse::Triggers::IPlayback::CanResume(::uPtr< ::uObject*>(t)))
        {
            ::app::Fuse::Triggers::IPlayback::Resume(::uPtr< ::uObject*>(t));
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/Triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SendToBack__uType* SendToBack__typeof()
{
    static ::uStaticStrong<SendToBack__uType*> type;
    if (type != NULL) return type;

    type = (SendToBack__uType*)::uAllocClassType(sizeof(SendToBack__uType), "Fuse.Triggers.Actions.SendToBack", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))SendToBack__Perform;

    type->SetStrongRefs(
        "_Target", offsetof(SendToBack, _Target));

    return type;
}

::app::Fuse::Node* SendToBack__get_Target(SendToBack* __this)
{
    return __this->_Target;
}

void SendToBack__Perform(SendToBack* __this, ::app::Fuse::Node* target)
{
    ::app::Fuse::Node* ind_123 = __this->Target();
    ::app::Fuse::Node* elm = (ind_123 != NULL) ? ind_123 : target;

    if (elm != NULL)
    {
        ::app::Fuse::Controls::Panel* panel = ::uAs< ::app::Fuse::Controls::Panel*>(::uPtr< ::app::Fuse::Node*>(elm)->Parent(), ::app::Fuse::Controls::Panel__typeof());

        if (panel != NULL)
        {
            ::uPtr< ::app::Fuse::Controls::Panel*>(panel)->SendToBack(elm);
        }
    }
}

void SendToBack__set_Target(SendToBack* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Show__uType* Show__typeof()
{
    static ::uStaticStrong<Show__uType*> type;
    if (type != NULL) return type;

    type = (Show__uType*)::uAllocClassType(sizeof(Show__uType), "Fuse.Triggers.Actions.Show", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Show__Perform;

    return type;
}

void Show__Perform(Show* __this, ::app::Fuse::Node* target)
{
    if (::uIs(target, ::app::Fuse::Triggers::Actions::IShow__typeof()))
    {
        ::app::Fuse::Triggers::Actions::IShow::Show(::uPtr< ::uObject*>((::uObject*)target));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Stop__uType* Stop__typeof()
{
    static ::uStaticStrong<Stop__uType*> type;
    if (type != NULL) return type;

    type = (Stop__uType*)::uAllocClassType(sizeof(Stop__uType), "Fuse.Triggers.Actions.Stop", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::PlaybackAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Stop__Perform;

    return type;
}

void Stop__Perform(Stop* __this, ::app::Fuse::Node* target)
{
    ::uObject* ind_123 = __this->Target();
    ::uObject* t = (ind_123 != NULL) ? ind_123 : ::uAs< ::uObject*>(target, ::app::Fuse::Triggers::IPlayback__typeof());

    if (t != NULL)
    {
        if (::app::Fuse::Triggers::IPlayback::CanStop(::uPtr< ::uObject*>(t)))
        {
            ::app::Fuse::Triggers::IPlayback::Stop(::uPtr< ::uObject*>(t));
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TriggerAction__uType* TriggerAction__typeof()
{
    static ::uStaticStrong<TriggerAction__uType*> type;
    if (type != NULL) return type;

    type = (TriggerAction__uType*)::uAllocClassType(sizeof(TriggerAction__uType), "Fuse.Triggers.Actions.TriggerAction", false, 0, 1, 0);

    type->SetStrongRefs(
        "_TargetNode", offsetof(TriggerAction, _TargetNode));

    return type;
}

void TriggerAction___ObjInit(TriggerAction* __this)
{
    __this->_isActive = true;
}

float TriggerAction__get_Delay(TriggerAction* __this)
{
    return __this->_delay;
}

int TriggerAction__get_Direction(TriggerAction* __this)
{
    return __this->_direction;
}

bool TriggerAction__get_IsActive(TriggerAction* __this)
{
    return __this->_isActive;
}

bool TriggerAction__get_IsProgressTriggered(TriggerAction* __this)
{
    return __this->_hasProgress || __this->_hasDelay;
}

::app::Fuse::Node* TriggerAction__get_TargetNode(TriggerAction* __this)
{
    return __this->_TargetNode;
}

void TriggerAction__PerformFromNode(TriggerAction* __this, ::app::Fuse::Node* target)
{
    ::app::Fuse::Node* ind_123;

    if (__this->IsActive())
    {
        __this->Perform((ind_123 = __this->TargetNode(), (ind_123 != NULL) ? ind_123 : target));
    }
}

float TriggerAction__ProgressWhen(TriggerAction* __this, float totalDuration)
{
    if (__this->_hasProgress)
    {
        return __this->_progress;
    }

    if (__this->_hasDelay)
    {
        return __this->_delay / totalDuration;
    }

    return 0.0f;
}

void TriggerAction__set_Delay(TriggerAction* __this, float value)
{
    __this->_hasDelay = true;
    __this->_delay = value;
}

void TriggerAction__set_Direction(TriggerAction* __this, int value)
{
    __this->_direction = value;
}

void TriggerAction__set_IsActive(TriggerAction* __this, bool value)
{
    __this->_isActive = value;
}

void TriggerAction__set_TargetNode(TriggerAction* __this, ::app::Fuse::Node* value)
{
    __this->_TargetNode = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* TriggerDirection__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Triggers.Actions.TriggerDirection", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL,
        "Both", 2LL);

    return type;
}

}}}}
