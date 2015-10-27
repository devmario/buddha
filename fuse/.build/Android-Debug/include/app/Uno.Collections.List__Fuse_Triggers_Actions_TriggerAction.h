// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_TRIGGERS_ACTIONS_TRIGGER_ACTION_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_TRIGGERS_ACTIONS_TRIGGER_ACTION_H__

#include <app/Uno.Collections.ICollection__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.IList__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct TriggerAction; } } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Triggers_Actions_TriggerAction; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Triggers_Actions_TriggerAction;

struct List__Fuse_Triggers_Actions_TriggerAction__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Triggers_Actions_TriggerAction __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction __interface_1;
};

List__Fuse_Triggers_Actions_TriggerAction__uType* List__Fuse_Triggers_Actions_TriggerAction__typeof();

void List__Fuse_Triggers_Actions_TriggerAction___ObjInit(List__Fuse_Triggers_Actions_TriggerAction* __this);
void List__Fuse_Triggers_Actions_TriggerAction__Add(List__Fuse_Triggers_Actions_TriggerAction* __this, ::app::Fuse::Triggers::Actions::TriggerAction* item);
void List__Fuse_Triggers_Actions_TriggerAction__EnsureCapacity(List__Fuse_Triggers_Actions_TriggerAction* __this);
int List__Fuse_Triggers_Actions_TriggerAction__get_Count(List__Fuse_Triggers_Actions_TriggerAction* __this);
::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction List__Fuse_Triggers_Actions_TriggerAction__GetEnumerator(List__Fuse_Triggers_Actions_TriggerAction* __this);
List__Fuse_Triggers_Actions_TriggerAction* List__Fuse_Triggers_Actions_TriggerAction__New_1(::uStatic* __this);

struct List__Fuse_Triggers_Actions_TriggerAction : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Triggers_Actions_TriggerAction___ObjInit(this); }
    void Add(::app::Fuse::Triggers::Actions::TriggerAction* item) { List__Fuse_Triggers_Actions_TriggerAction__Add(this, item); }
    void EnsureCapacity() { List__Fuse_Triggers_Actions_TriggerAction__EnsureCapacity(this); }
    int Count() { return List__Fuse_Triggers_Actions_TriggerAction__get_Count(this); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction GetEnumerator();
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Triggers_Actions_TriggerAction.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction List__Fuse_Triggers_Actions_TriggerAction::GetEnumerator() { return List__Fuse_Triggers_Actions_TriggerAction__GetEnumerator(this); }

}}}


#endif
