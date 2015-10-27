// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__INT__FUSE_INPUT_POINTER_POINTER_RECORD_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__INT__FUSE_INPUT_POINTER_POINTER_RECORD_H__

#include <app/Uno.Collections.Dictionary2_Bucket__int__Fuse_Input_Pointer_Poi-66af8f6a.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct Pointer_PointerRecord; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__int__Fuse_Input_Pointer_PointerRecord;

struct Dictionary__int__Fuse_Input_Pointer_PointerRecord__uType : ::uClassType
{
};

Dictionary__int__Fuse_Input_Pointer_PointerRecord__uType* Dictionary__int__Fuse_Input_Pointer_PointerRecord__typeof();

void Dictionary__int__Fuse_Input_Pointer_PointerRecord___ObjInit_1(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this);
void Dictionary__int__Fuse_Input_Pointer_PointerRecord__Add(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key, ::app::Fuse::Input::Pointer_PointerRecord* value);
bool Dictionary__int__Fuse_Input_Pointer_PointerRecord__ContainsKey(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key);
::app::Fuse::Input::Pointer_PointerRecord* Dictionary__int__Fuse_Input_Pointer_PointerRecord__get_Item(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key);
::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord Dictionary__int__Fuse_Input_Pointer_PointerRecord__GetEnumerator(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this);
Dictionary__int__Fuse_Input_Pointer_PointerRecord* Dictionary__int__Fuse_Input_Pointer_PointerRecord__New_1(::uStatic* __this);
void Dictionary__int__Fuse_Input_Pointer_PointerRecord__Rehash(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this);
bool Dictionary__int__Fuse_Input_Pointer_PointerRecord__Remove(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key);
void Dictionary__int__Fuse_Input_Pointer_PointerRecord__set_Item(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key, ::app::Fuse::Input::Pointer_PointerRecord* value);

struct Dictionary__int__Fuse_Input_Pointer_PointerRecord : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__int__Fuse_Input_Pointer_PointerRecord___ObjInit_1(this); }
    void Add(int key, ::app::Fuse::Input::Pointer_PointerRecord* value) { Dictionary__int__Fuse_Input_Pointer_PointerRecord__Add(this, key, value); }
    bool ContainsKey(int key) { return Dictionary__int__Fuse_Input_Pointer_PointerRecord__ContainsKey(this, key); }
    ::app::Fuse::Input::Pointer_PointerRecord* Item(int key) { return Dictionary__int__Fuse_Input_Pointer_PointerRecord__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord GetEnumerator();
    void Rehash() { Dictionary__int__Fuse_Input_Pointer_PointerRecord__Rehash(this); }
    bool Remove(int key) { return Dictionary__int__Fuse_Input_Pointer_PointerRecord__Remove(this, key); }
    void Item(int key, ::app::Fuse::Input::Pointer_PointerRecord* value) { Dictionary__int__Fuse_Input_Pointer_PointerRecord__set_Item(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__int__Fuse_Input_Pointer-8e8b3a50.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord Dictionary__int__Fuse_Input_Pointer_PointerRecord::GetEnumerator() { return Dictionary__int__Fuse_Input_Pointer_PointerRecord__GetEnumerator(this); }

}}}


#endif
