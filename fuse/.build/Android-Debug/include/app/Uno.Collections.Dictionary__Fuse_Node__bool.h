// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_NODE__BOOL_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_NODE__BOOL_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Node__bool.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Fuse_Node__bool;

struct Dictionary__Fuse_Node__bool__uType : ::uClassType
{
};

Dictionary__Fuse_Node__bool__uType* Dictionary__Fuse_Node__bool__typeof();

void Dictionary__Fuse_Node__bool___ObjInit_1(Dictionary__Fuse_Node__bool* __this);
void Dictionary__Fuse_Node__bool__Add(Dictionary__Fuse_Node__bool* __this, ::app::Fuse::Node* key, bool value);
bool Dictionary__Fuse_Node__bool__ContainsKey(Dictionary__Fuse_Node__bool* __this, ::app::Fuse::Node* key);
bool Dictionary__Fuse_Node__bool__get_Item(Dictionary__Fuse_Node__bool* __this, ::app::Fuse::Node* key);
Dictionary__Fuse_Node__bool* Dictionary__Fuse_Node__bool__New_1(::uStatic* __this);
void Dictionary__Fuse_Node__bool__Rehash(Dictionary__Fuse_Node__bool* __this);
void Dictionary__Fuse_Node__bool__set_Item(Dictionary__Fuse_Node__bool* __this, ::app::Fuse::Node* key, bool value);

struct Dictionary__Fuse_Node__bool : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__Fuse_Node__bool___ObjInit_1(this); }
    void Add(::app::Fuse::Node* key, bool value) { Dictionary__Fuse_Node__bool__Add(this, key, value); }
    bool ContainsKey(::app::Fuse::Node* key) { return Dictionary__Fuse_Node__bool__ContainsKey(this, key); }
    bool Item(::app::Fuse::Node* key) { return Dictionary__Fuse_Node__bool__get_Item(this, key); }
    void Rehash() { Dictionary__Fuse_Node__bool__Rehash(this); }
    void Item(::app::Fuse::Node* key, bool value) { Dictionary__Fuse_Node__bool__set_Item(this, key, value); }
};

}}}


#endif
