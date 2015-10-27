// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__UNO_COLLEC_A1B9F09B_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__UNO_COLLEC_A1B9F09B_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_;

struct Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType : ::uClassType
{
};

Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType* Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof();

void Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener____ObjInit(Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* source);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_ Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___GetEnumerator(Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this);
Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_* Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* source);

struct Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_ : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* source) { Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener____ObjInit(this, source); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_ GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__string_-e0f70c48.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_ Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_::GetEnumerator() { return Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___GetEnumerator(this); }

}}}


#endif
