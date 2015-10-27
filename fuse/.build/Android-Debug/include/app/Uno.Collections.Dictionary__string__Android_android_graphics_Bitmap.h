// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__ANDROID_ANDROID_GRAPHICS_BITMAP_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__ANDROID_ANDROID_GRAPHICS_BITMAP_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Android_android_gra-ea325334.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Bitmap; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Android_android_graphics_Bitmap;

struct Dictionary__string__Android_android_graphics_Bitmap__uType : ::uClassType
{
};

Dictionary__string__Android_android_graphics_Bitmap__uType* Dictionary__string__Android_android_graphics_Bitmap__typeof();

void Dictionary__string__Android_android_graphics_Bitmap___ObjInit_1(Dictionary__string__Android_android_graphics_Bitmap* __this);
void Dictionary__string__Android_android_graphics_Bitmap__Add(Dictionary__string__Android_android_graphics_Bitmap* __this, ::uString* key, ::app::Android::android::graphics::Bitmap* value);
bool Dictionary__string__Android_android_graphics_Bitmap__ContainsKey(Dictionary__string__Android_android_graphics_Bitmap* __this, ::uString* key);
::app::Android::android::graphics::Bitmap* Dictionary__string__Android_android_graphics_Bitmap__get_Item(Dictionary__string__Android_android_graphics_Bitmap* __this, ::uString* key);
Dictionary__string__Android_android_graphics_Bitmap* Dictionary__string__Android_android_graphics_Bitmap__New_1(::uStatic* __this);
void Dictionary__string__Android_android_graphics_Bitmap__Rehash(Dictionary__string__Android_android_graphics_Bitmap* __this);
void Dictionary__string__Android_android_graphics_Bitmap__set_Item(Dictionary__string__Android_android_graphics_Bitmap* __this, ::uString* key, ::app::Android::android::graphics::Bitmap* value);

struct Dictionary__string__Android_android_graphics_Bitmap : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__string__Android_android_graphics_Bitmap___ObjInit_1(this); }
    void Add(::uString* key, ::app::Android::android::graphics::Bitmap* value) { Dictionary__string__Android_android_graphics_Bitmap__Add(this, key, value); }
    bool ContainsKey(::uString* key) { return Dictionary__string__Android_android_graphics_Bitmap__ContainsKey(this, key); }
    ::app::Android::android::graphics::Bitmap* Item(::uString* key) { return Dictionary__string__Android_android_graphics_Bitmap__get_Item(this, key); }
    void Rehash() { Dictionary__string__Android_android_graphics_Bitmap__Rehash(this); }
    void Item(::uString* key, ::app::Android::android::graphics::Bitmap* value) { Dictionary__string__Android_android_graphics_Bitmap__set_Item(this, key, value); }
};

}}}


#endif
