// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_PHYSICS_I_RULE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_PHYSICS_I_RULE_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Physics_IRule.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Physics_IRule; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Physics_IRule;

struct List__Fuse_Physics_IRule__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Physics_IRule __interface_0;
};

List__Fuse_Physics_IRule__uType* List__Fuse_Physics_IRule__typeof();

::uObject* List__Fuse_Physics_IRule__GetEnumerator_boxed(List__Fuse_Physics_IRule* __this);
void List__Fuse_Physics_IRule___ObjInit(List__Fuse_Physics_IRule* __this);
void List__Fuse_Physics_IRule__Add(List__Fuse_Physics_IRule* __this, ::uObject* item);
void List__Fuse_Physics_IRule__BoundsCheck(List__Fuse_Physics_IRule* __this, int index);
void List__Fuse_Physics_IRule__EnsureCapacity(List__Fuse_Physics_IRule* __this);
int List__Fuse_Physics_IRule__get_Count(List__Fuse_Physics_IRule* __this);
::app::Uno::Collections::List1_Enumerator__Fuse_Physics_IRule List__Fuse_Physics_IRule__GetEnumerator(List__Fuse_Physics_IRule* __this);
List__Fuse_Physics_IRule* List__Fuse_Physics_IRule__New_1(::uStatic* __this);
bool List__Fuse_Physics_IRule__Remove(List__Fuse_Physics_IRule* __this, ::uObject* item);
void List__Fuse_Physics_IRule__RemoveAt(List__Fuse_Physics_IRule* __this, int index);

struct List__Fuse_Physics_IRule : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Physics_IRule__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Physics_IRule___ObjInit(this); }
    void Add(::uObject* item) { List__Fuse_Physics_IRule__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Physics_IRule__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Physics_IRule__EnsureCapacity(this); }
    int Count() { return List__Fuse_Physics_IRule__get_Count(this); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Physics_IRule GetEnumerator();
    bool Remove(::uObject* item) { return List__Fuse_Physics_IRule__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Physics_IRule__RemoveAt(this, index); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Physics_IRule.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Physics_IRule List__Fuse_Physics_IRule::GetEnumerator() { return List__Fuse_Physics_IRule__GetEnumerator(this); }

}}}


#endif
