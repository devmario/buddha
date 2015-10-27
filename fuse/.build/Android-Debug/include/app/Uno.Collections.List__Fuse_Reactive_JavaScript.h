// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_REACTIVE_JAVA_SCRIPT_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_REACTIVE_JAVA_SCRIPT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct JavaScript; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Reactive_JavaScript; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Reactive_JavaScript;

struct List__Fuse_Reactive_JavaScript__uType : ::uClassType
{
};

List__Fuse_Reactive_JavaScript__uType* List__Fuse_Reactive_JavaScript__typeof();

void List__Fuse_Reactive_JavaScript___ObjInit(List__Fuse_Reactive_JavaScript* __this);
void List__Fuse_Reactive_JavaScript__Add(List__Fuse_Reactive_JavaScript* __this, ::app::Fuse::Reactive::JavaScript* item);
void List__Fuse_Reactive_JavaScript__BoundsCheck(List__Fuse_Reactive_JavaScript* __this, int index);
void List__Fuse_Reactive_JavaScript__EnsureCapacity(List__Fuse_Reactive_JavaScript* __this);
int List__Fuse_Reactive_JavaScript__get_Count(List__Fuse_Reactive_JavaScript* __this);
::app::Uno::Collections::List1_Enumerator__Fuse_Reactive_JavaScript List__Fuse_Reactive_JavaScript__GetEnumerator(List__Fuse_Reactive_JavaScript* __this);
List__Fuse_Reactive_JavaScript* List__Fuse_Reactive_JavaScript__New_1(::uStatic* __this);
bool List__Fuse_Reactive_JavaScript__Remove(List__Fuse_Reactive_JavaScript* __this, ::app::Fuse::Reactive::JavaScript* item);
void List__Fuse_Reactive_JavaScript__RemoveAt(List__Fuse_Reactive_JavaScript* __this, int index);

struct List__Fuse_Reactive_JavaScript : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Reactive_JavaScript___ObjInit(this); }
    void Add(::app::Fuse::Reactive::JavaScript* item) { List__Fuse_Reactive_JavaScript__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Reactive_JavaScript__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Reactive_JavaScript__EnsureCapacity(this); }
    int Count() { return List__Fuse_Reactive_JavaScript__get_Count(this); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Reactive_JavaScript GetEnumerator();
    bool Remove(::app::Fuse::Reactive::JavaScript* item) { return List__Fuse_Reactive_JavaScript__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Reactive_JavaScript__RemoveAt(this, index); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Reactive_JavaScript.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Reactive_JavaScript List__Fuse_Reactive_JavaScript::GetEnumerator() { return List__Fuse_Reactive_JavaScript__GetEnumerator(this); }

}}}


#endif
