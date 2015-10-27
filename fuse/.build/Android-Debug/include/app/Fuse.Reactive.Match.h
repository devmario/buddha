// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_MATCH_H__
#define __APP_FUSE_REACTIVE_MATCH_H__

#include <app/Fuse.Behavior.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Panel; } } }
namespace app { namespace Fuse { namespace Reactive { struct Case; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_Element; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct Match;

struct Match__uType : ::app::Fuse::Behavior__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
};

Match__uType* Match__typeof();

void Match__AddElements(Match* __this, ::app::Fuse::Reactive::Case* c);
void Match__Fuse_Reactive_IObserver_OnAdd(Match* __this, ::uObject* addedValue);
void Match__Fuse_Reactive_IObserver_OnFailed(Match* __this, ::uString* message);
void Match__Fuse_Reactive_IObserver_OnNewAll(Match* __this, int length);
void Match__Fuse_Reactive_IObserver_OnNewAt(Match* __this, int index, ::uObject* value);
void Match__Fuse_Reactive_IObserver_OnRemove(Match* __this, ::uObject* value, int index);
void Match__Fuse_Reactive_IObserver_OnSet(Match* __this, ::uObject* newValue);
void Match__Invalidate(Match* __this);
void Match__OnRooted(Match* __this, ::app::Fuse::Node* n);
void Match__OnUnrooted(Match* __this, ::app::Fuse::Node* n);
void Match__RemoveElements(Match* __this);
::app::Fuse::Reactive::Case* Match__SelectCase(Match* __this);

struct Match : ::app::Fuse::Behavior
{
    ::uStrong< ::uObject*> _cases;
    ::uStrong< ::uObject*> _realValue;
    ::uStrong< ::app::Fuse::Controls::Panel*> _panel;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Elements_Element*> _elements;
    ::uStrong< ::app::Fuse::Reactive::Case*> _oldCase;

    void AddElements(::app::Fuse::Reactive::Case* c) { Match__AddElements(this, c); }
    void Invalidate() { Match__Invalidate(this); }
    void RemoveElements() { Match__RemoveElements(this); }
    ::app::Fuse::Reactive::Case* SelectCase() { return Match__SelectCase(this); }
};

}}}


#endif
