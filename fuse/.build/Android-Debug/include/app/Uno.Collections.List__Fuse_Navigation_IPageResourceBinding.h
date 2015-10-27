// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_NAVIGATION_I_PAGE_RESOURCE_BINDING_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_NAVIGATION_I_PAGE_RESOURCE_BINDING_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Navigation_IPageResourceBinding; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Navigation_IPageResourceBinding;

struct List__Fuse_Navigation_IPageResourceBinding__uType : ::uClassType
{
};

List__Fuse_Navigation_IPageResourceBinding__uType* List__Fuse_Navigation_IPageResourceBinding__typeof();

void List__Fuse_Navigation_IPageResourceBinding___ObjInit(List__Fuse_Navigation_IPageResourceBinding* __this);
::app::Uno::Collections::List1_Enumerator__Fuse_Navigation_IPageResourceBinding List__Fuse_Navigation_IPageResourceBinding__GetEnumerator(List__Fuse_Navigation_IPageResourceBinding* __this);
List__Fuse_Navigation_IPageResourceBinding* List__Fuse_Navigation_IPageResourceBinding__New_1(::uStatic* __this);

struct List__Fuse_Navigation_IPageResourceBinding : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Navigation_IPageResourceBinding___ObjInit(this); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Navigation_IPageResourceBinding GetEnumerator();
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Navigation_IPageResourceBinding.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Navigation_IPageResourceBinding List__Fuse_Navigation_IPageResourceBinding::GetEnumerator() { return List__Fuse_Navigation_IPageResourceBinding__GetEnumerator(this); }

}}}


#endif
