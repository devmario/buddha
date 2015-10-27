// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_TRIGGERS_ACTIONS_TRIGGER_ACTION_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_TRIGGERS_ACTIONS_TRIGGER_ACTION_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct TriggerAction; } } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Triggers_Actions_TriggerAction; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Triggers_Actions_TriggerAction;

struct List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__uType* List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__typeof();

void List1_Enumerator__Fuse_Triggers_Actions_TriggerAction___ObjInit(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction* __this, ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction* source);
void List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__Dispose(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction* __this);
::app::Fuse::Triggers::Actions::TriggerAction* List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__get_Current(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction* __this);
bool List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__MoveNext(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction* __this);
List1_Enumerator__Fuse_Triggers_Actions_TriggerAction List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction* source);

struct List1_Enumerator__Fuse_Triggers_Actions_TriggerAction
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Triggers::Actions::TriggerAction*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction* source) { List1_Enumerator__Fuse_Triggers_Actions_TriggerAction___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__Dispose(this); }
    ::app::Fuse::Triggers::Actions::TriggerAction* Current() { return List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__MoveNext(this); }
};

}}}


#endif
