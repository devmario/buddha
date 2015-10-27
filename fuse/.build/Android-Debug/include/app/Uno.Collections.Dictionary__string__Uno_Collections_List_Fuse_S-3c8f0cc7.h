// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_COLLECTIONS_LIST_FUSE_S_3C8F0CC7_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_COLLECTIONS_LIST_FUSE_S_3C8F0CC7_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Collections_Lis-466067fe.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Scripting_INameListener; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_;

struct Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType : ::uClassType
{
};

Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType* Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof();

void Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener____ObjInit_1(Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this);
void Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___Add(Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this, ::uString* key, ::app::Uno::Collections::List__Fuse_Scripting_INameListener* value);
bool Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___ContainsKey(Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this, ::uString* key);
::app::Uno::Collections::List__Fuse_Scripting_INameListener* Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Item(Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this, ::uString* key);
::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_* Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Values(Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this);
Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___New_1(::uStatic* __this);
void Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___Rehash(Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this);
void Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___set_Item(Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this, ::uString* key, ::app::Uno::Collections::List__Fuse_Scripting_INameListener* value);

struct Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_ : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener____ObjInit_1(this); }
    void Add(::uString* key, ::app::Uno::Collections::List__Fuse_Scripting_INameListener* value) { Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___Add(this, key, value); }
    bool ContainsKey(::uString* key) { return Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___ContainsKey(this, key); }
    ::app::Uno::Collections::List__Fuse_Scripting_INameListener* Item(::uString* key) { return Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_* Values() { return Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Values(this); }
    void Rehash() { Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___Rehash(this); }
    void Item(::uString* key, ::app::Uno::Collections::List__Fuse_Scripting_INameListener* value) { Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___set_Item(this, key, value); }
};

}}}


#endif
