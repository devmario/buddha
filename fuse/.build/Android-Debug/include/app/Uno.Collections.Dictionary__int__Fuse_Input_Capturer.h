// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__INT__FUSE_INPUT_CAPTURER_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__INT__FUSE_INPUT_CAPTURER_H__

#include <app/Uno.Collections.Dictionary2_Bucket__int__Fuse_Input_Capturer.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct Capturer; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__int__Fuse_Input_Capturer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__int__Fuse_Input_Capturer;

struct Dictionary__int__Fuse_Input_Capturer__uType : ::uClassType
{
};

Dictionary__int__Fuse_Input_Capturer__uType* Dictionary__int__Fuse_Input_Capturer__typeof();

void Dictionary__int__Fuse_Input_Capturer___ObjInit_1(Dictionary__int__Fuse_Input_Capturer* __this);
void Dictionary__int__Fuse_Input_Capturer__Add(Dictionary__int__Fuse_Input_Capturer* __this, int key, ::app::Fuse::Input::Capturer* value);
bool Dictionary__int__Fuse_Input_Capturer__ContainsKey(Dictionary__int__Fuse_Input_Capturer* __this, int key);
::app::Fuse::Input::Capturer* Dictionary__int__Fuse_Input_Capturer__get_Item(Dictionary__int__Fuse_Input_Capturer* __this, int key);
::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Capturer Dictionary__int__Fuse_Input_Capturer__GetEnumerator(Dictionary__int__Fuse_Input_Capturer* __this);
Dictionary__int__Fuse_Input_Capturer* Dictionary__int__Fuse_Input_Capturer__New_1(::uStatic* __this);
void Dictionary__int__Fuse_Input_Capturer__Rehash(Dictionary__int__Fuse_Input_Capturer* __this);
bool Dictionary__int__Fuse_Input_Capturer__Remove(Dictionary__int__Fuse_Input_Capturer* __this, int key);
void Dictionary__int__Fuse_Input_Capturer__set_Item(Dictionary__int__Fuse_Input_Capturer* __this, int key, ::app::Fuse::Input::Capturer* value);

struct Dictionary__int__Fuse_Input_Capturer : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__int__Fuse_Input_Capturer___ObjInit_1(this); }
    void Add(int key, ::app::Fuse::Input::Capturer* value) { Dictionary__int__Fuse_Input_Capturer__Add(this, key, value); }
    bool ContainsKey(int key) { return Dictionary__int__Fuse_Input_Capturer__ContainsKey(this, key); }
    ::app::Fuse::Input::Capturer* Item(int key) { return Dictionary__int__Fuse_Input_Capturer__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Capturer GetEnumerator();
    void Rehash() { Dictionary__int__Fuse_Input_Capturer__Rehash(this); }
    bool Remove(int key) { return Dictionary__int__Fuse_Input_Capturer__Remove(this, key); }
    void Item(int key, ::app::Fuse::Input::Capturer* value) { Dictionary__int__Fuse_Input_Capturer__set_Item(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__int__Fuse_Input_Capturer.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Capturer Dictionary__int__Fuse_Input_Capturer::GetEnumerator() { return Dictionary__int__Fuse_Input_Capturer__GetEnumerator(this); }

}}}


#endif
