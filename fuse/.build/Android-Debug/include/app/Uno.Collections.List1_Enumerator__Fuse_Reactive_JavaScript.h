// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_REACTIVE_JAVA_SCRIPT_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_REACTIVE_JAVA_SCRIPT_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct JavaScript; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Reactive_JavaScript; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Reactive_JavaScript;

struct List1_Enumerator__Fuse_Reactive_JavaScript__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

List1_Enumerator__Fuse_Reactive_JavaScript__uType* List1_Enumerator__Fuse_Reactive_JavaScript__typeof();

void List1_Enumerator__Fuse_Reactive_JavaScript___ObjInit(List1_Enumerator__Fuse_Reactive_JavaScript* __this, ::app::Uno::Collections::List__Fuse_Reactive_JavaScript* source);
void List1_Enumerator__Fuse_Reactive_JavaScript__Dispose(List1_Enumerator__Fuse_Reactive_JavaScript* __this);
::app::Fuse::Reactive::JavaScript* List1_Enumerator__Fuse_Reactive_JavaScript__get_Current(List1_Enumerator__Fuse_Reactive_JavaScript* __this);
bool List1_Enumerator__Fuse_Reactive_JavaScript__MoveNext(List1_Enumerator__Fuse_Reactive_JavaScript* __this);
List1_Enumerator__Fuse_Reactive_JavaScript List1_Enumerator__Fuse_Reactive_JavaScript__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Reactive_JavaScript* source);

struct List1_Enumerator__Fuse_Reactive_JavaScript
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Reactive_JavaScript*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Reactive::JavaScript*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Reactive_JavaScript* source) { List1_Enumerator__Fuse_Reactive_JavaScript___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Reactive_JavaScript__Dispose(this); }
    ::app::Fuse::Reactive::JavaScript* Current() { return List1_Enumerator__Fuse_Reactive_JavaScript__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Reactive_JavaScript__MoveNext(this); }
};

}}}


#endif
