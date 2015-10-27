// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_PHYSICS_BODY_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_PHYSICS_BODY_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Physics { struct Body; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Physics_Body; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Physics_Body;

struct List__Fuse_Physics_Body__uType : ::uClassType
{
};

List__Fuse_Physics_Body__uType* List__Fuse_Physics_Body__typeof();

void List__Fuse_Physics_Body___ObjInit(List__Fuse_Physics_Body* __this);
void List__Fuse_Physics_Body__Add(List__Fuse_Physics_Body* __this, ::app::Fuse::Physics::Body* item);
void List__Fuse_Physics_Body__BoundsCheck(List__Fuse_Physics_Body* __this, int index);
void List__Fuse_Physics_Body__EnsureCapacity(List__Fuse_Physics_Body* __this);
int List__Fuse_Physics_Body__get_Count(List__Fuse_Physics_Body* __this);
::app::Uno::Collections::List1_Enumerator__Fuse_Physics_Body List__Fuse_Physics_Body__GetEnumerator(List__Fuse_Physics_Body* __this);
List__Fuse_Physics_Body* List__Fuse_Physics_Body__New_1(::uStatic* __this);
bool List__Fuse_Physics_Body__Remove(List__Fuse_Physics_Body* __this, ::app::Fuse::Physics::Body* item);
void List__Fuse_Physics_Body__RemoveAt(List__Fuse_Physics_Body* __this, int index);

struct List__Fuse_Physics_Body : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Physics_Body___ObjInit(this); }
    void Add(::app::Fuse::Physics::Body* item) { List__Fuse_Physics_Body__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Physics_Body__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Physics_Body__EnsureCapacity(this); }
    int Count() { return List__Fuse_Physics_Body__get_Count(this); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Physics_Body GetEnumerator();
    bool Remove(::app::Fuse::Physics::Body* item) { return List__Fuse_Physics_Body__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Physics_Body__RemoveAt(this, index); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Physics_Body.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Physics_Body List__Fuse_Physics_Body::GetEnumerator() { return List__Fuse_Physics_Body__GetEnumerator(this); }

}}}


#endif
