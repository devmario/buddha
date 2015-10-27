// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__INT__FUSE_SCRIPTING_CALLBACK_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__INT__FUSE_SCRIPTING_CALLBACK_H__

#include <app/Uno.Collections.Dictionary2_Bucket__int__Fuse_Scripting_Callback.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__int__Fuse_Scripting_Callback;

struct Dictionary__int__Fuse_Scripting_Callback__uType : ::uClassType
{
};

Dictionary__int__Fuse_Scripting_Callback__uType* Dictionary__int__Fuse_Scripting_Callback__typeof();

void Dictionary__int__Fuse_Scripting_Callback___ObjInit_1(Dictionary__int__Fuse_Scripting_Callback* __this);
void Dictionary__int__Fuse_Scripting_Callback__Add(Dictionary__int__Fuse_Scripting_Callback* __this, int key, ::uDelegate* value);
::uDelegate* Dictionary__int__Fuse_Scripting_Callback__get_Item(Dictionary__int__Fuse_Scripting_Callback* __this, int key);
Dictionary__int__Fuse_Scripting_Callback* Dictionary__int__Fuse_Scripting_Callback__New_1(::uStatic* __this);
void Dictionary__int__Fuse_Scripting_Callback__Rehash(Dictionary__int__Fuse_Scripting_Callback* __this);
void Dictionary__int__Fuse_Scripting_Callback__set_Item(Dictionary__int__Fuse_Scripting_Callback* __this, int key, ::uDelegate* value);

struct Dictionary__int__Fuse_Scripting_Callback : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__int__Fuse_Scripting_Callback___ObjInit_1(this); }
    void Add(int key, ::uDelegate* value) { Dictionary__int__Fuse_Scripting_Callback__Add(this, key, value); }
    ::uDelegate* Item(int key) { return Dictionary__int__Fuse_Scripting_Callback__get_Item(this, key); }
    void Rehash() { Dictionary__int__Fuse_Scripting_Callback__Rehash(this); }
    void Item(int key, ::uDelegate* value) { Dictionary__int__Fuse_Scripting_Callback__set_Item(this, key, value); }
};

}}}


#endif
