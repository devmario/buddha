// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_SCRIPTING_NATIVE_MEMBER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_SCRIPTING_NATIVE_MEMBER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct NativeMember; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Scripting_NativeMember; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Scripting_NativeMember;

struct List__Fuse_Scripting_NativeMember__uType : ::uClassType
{
};

List__Fuse_Scripting_NativeMember__uType* List__Fuse_Scripting_NativeMember__typeof();

void List__Fuse_Scripting_NativeMember___ObjInit(List__Fuse_Scripting_NativeMember* __this);
void List__Fuse_Scripting_NativeMember__Add(List__Fuse_Scripting_NativeMember* __this, ::app::Fuse::Scripting::NativeMember* item);
void List__Fuse_Scripting_NativeMember__EnsureCapacity(List__Fuse_Scripting_NativeMember* __this);
::app::Uno::Collections::List1_Enumerator__Fuse_Scripting_NativeMember List__Fuse_Scripting_NativeMember__GetEnumerator(List__Fuse_Scripting_NativeMember* __this);
List__Fuse_Scripting_NativeMember* List__Fuse_Scripting_NativeMember__New_1(::uStatic* __this);

struct List__Fuse_Scripting_NativeMember : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Scripting_NativeMember___ObjInit(this); }
    void Add(::app::Fuse::Scripting::NativeMember* item) { List__Fuse_Scripting_NativeMember__Add(this, item); }
    void EnsureCapacity() { List__Fuse_Scripting_NativeMember__EnsureCapacity(this); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Scripting_NativeMember GetEnumerator();
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Scripting_NativeMember.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Scripting_NativeMember List__Fuse_Scripting_NativeMember::GetEnumerator() { return List__Fuse_Scripting_NativeMember__GetEnumerator(this); }

}}}


#endif
