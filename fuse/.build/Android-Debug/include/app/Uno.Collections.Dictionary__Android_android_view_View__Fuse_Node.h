// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__ANDROID_ANDROID_VIEW_VIEW__FUSE_NODE_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__ANDROID_ANDROID_VIEW_VIEW__FUSE_NODE_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Android_android_view_View__Fuse_Node.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Android_android_view_View__Fuse_Node;

struct Dictionary__Android_android_view_View__Fuse_Node__uType : ::uClassType
{
};

Dictionary__Android_android_view_View__Fuse_Node__uType* Dictionary__Android_android_view_View__Fuse_Node__typeof();

void Dictionary__Android_android_view_View__Fuse_Node___ObjInit_1(Dictionary__Android_android_view_View__Fuse_Node* __this);
void Dictionary__Android_android_view_View__Fuse_Node__Add(Dictionary__Android_android_view_View__Fuse_Node* __this, ::app::Android::android::view::View* key, ::app::Fuse::Node* value);
bool Dictionary__Android_android_view_View__Fuse_Node__ContainsKey(Dictionary__Android_android_view_View__Fuse_Node* __this, ::app::Android::android::view::View* key);
::app::Fuse::Node* Dictionary__Android_android_view_View__Fuse_Node__get_Item(Dictionary__Android_android_view_View__Fuse_Node* __this, ::app::Android::android::view::View* key);
Dictionary__Android_android_view_View__Fuse_Node* Dictionary__Android_android_view_View__Fuse_Node__New_1(::uStatic* __this);
void Dictionary__Android_android_view_View__Fuse_Node__Rehash(Dictionary__Android_android_view_View__Fuse_Node* __this);
bool Dictionary__Android_android_view_View__Fuse_Node__Remove(Dictionary__Android_android_view_View__Fuse_Node* __this, ::app::Android::android::view::View* key);
void Dictionary__Android_android_view_View__Fuse_Node__set_Item(Dictionary__Android_android_view_View__Fuse_Node* __this, ::app::Android::android::view::View* key, ::app::Fuse::Node* value);

struct Dictionary__Android_android_view_View__Fuse_Node : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__Android_android_view_View__Fuse_Node___ObjInit_1(this); }
    void Add(::app::Android::android::view::View* key, ::app::Fuse::Node* value) { Dictionary__Android_android_view_View__Fuse_Node__Add(this, key, value); }
    bool ContainsKey(::app::Android::android::view::View* key) { return Dictionary__Android_android_view_View__Fuse_Node__ContainsKey(this, key); }
    ::app::Fuse::Node* Item(::app::Android::android::view::View* key) { return Dictionary__Android_android_view_View__Fuse_Node__get_Item(this, key); }
    void Rehash() { Dictionary__Android_android_view_View__Fuse_Node__Rehash(this); }
    bool Remove(::app::Android::android::view::View* key) { return Dictionary__Android_android_view_View__Fuse_Node__Remove(this, key); }
    void Item(::app::Android::android::view::View* key, ::app::Fuse::Node* value) { Dictionary__Android_android_view_View__Fuse_Node__set_Item(this, key, value); }
};

}}}


#endif
