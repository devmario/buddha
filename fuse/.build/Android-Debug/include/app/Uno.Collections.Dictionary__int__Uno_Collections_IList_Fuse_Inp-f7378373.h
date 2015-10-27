// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__INT__UNO_COLLECTIONS_I_LIST_FUSE_INP_F7378373_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__INT__UNO_COLLECTIONS_I_LIST_FUSE_INP_F7378373_H__

#include <app/Uno.Collections.Dictionary2_Bucket__int__Uno_Collections_IList_-98cf049c.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_;

struct Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___uType : ::uClassType
{
};

Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof();

void Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit_1(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
void Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___Add(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int key, ::uObject* value);
bool Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___ContainsKey(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int key);
::uObject* Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Item(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int key);
::app::Uno::Collections::Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___GetEnumerator(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(::uStatic* __this);
void Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___Rehash(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
void Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___set_Item(Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int key, ::uObject* value);

struct Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_ : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit_1(this); }
    void Add(int key, ::uObject* value) { Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___Add(this, key, value); }
    bool ContainsKey(int key) { return Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___ContainsKey(this, key); }
    ::uObject* Item(int key) { return Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ GetEnumerator();
    void Rehash() { Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___Rehash(this); }
    void Item(int key, ::uObject* value) { Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___set_Item(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__int__Uno_Collections_IL-8f16c802.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_::GetEnumerator() { return Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___GetEnumerator(this); }

}}}


#endif
