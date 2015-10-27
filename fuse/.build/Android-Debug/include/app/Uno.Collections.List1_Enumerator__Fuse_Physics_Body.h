// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_PHYSICS_BODY_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_PHYSICS_BODY_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Physics { struct Body; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Physics_Body; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Physics_Body;

struct List1_Enumerator__Fuse_Physics_Body__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

List1_Enumerator__Fuse_Physics_Body__uType* List1_Enumerator__Fuse_Physics_Body__typeof();

void List1_Enumerator__Fuse_Physics_Body___ObjInit(List1_Enumerator__Fuse_Physics_Body* __this, ::app::Uno::Collections::List__Fuse_Physics_Body* source);
void List1_Enumerator__Fuse_Physics_Body__Dispose(List1_Enumerator__Fuse_Physics_Body* __this);
::app::Fuse::Physics::Body* List1_Enumerator__Fuse_Physics_Body__get_Current(List1_Enumerator__Fuse_Physics_Body* __this);
bool List1_Enumerator__Fuse_Physics_Body__MoveNext(List1_Enumerator__Fuse_Physics_Body* __this);
List1_Enumerator__Fuse_Physics_Body List1_Enumerator__Fuse_Physics_Body__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Physics_Body* source);

struct List1_Enumerator__Fuse_Physics_Body
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Physics_Body*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Physics::Body*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Physics_Body* source) { List1_Enumerator__Fuse_Physics_Body___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Physics_Body__Dispose(this); }
    ::app::Fuse::Physics::Body* Current() { return List1_Enumerator__Fuse_Physics_Body__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Physics_Body__MoveNext(this); }
};

}}}


#endif
