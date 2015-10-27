// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__ANDROID_ANDROID_GRAPHICS_TYPEFACE_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__ANDROID_ANDROID_GRAPHICS_TYPEFACE_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Android_android_gra-bbe12d5c.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Typeface; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Android_android_graphics_Typeface;

struct Dictionary__string__Android_android_graphics_Typeface__uType : ::uClassType
{
};

Dictionary__string__Android_android_graphics_Typeface__uType* Dictionary__string__Android_android_graphics_Typeface__typeof();

void Dictionary__string__Android_android_graphics_Typeface___ObjInit_1(Dictionary__string__Android_android_graphics_Typeface* __this);
void Dictionary__string__Android_android_graphics_Typeface__Add(Dictionary__string__Android_android_graphics_Typeface* __this, ::uString* key, ::app::Android::android::graphics::Typeface* value);
bool Dictionary__string__Android_android_graphics_Typeface__ContainsKey(Dictionary__string__Android_android_graphics_Typeface* __this, ::uString* key);
::app::Android::android::graphics::Typeface* Dictionary__string__Android_android_graphics_Typeface__get_Item(Dictionary__string__Android_android_graphics_Typeface* __this, ::uString* key);
Dictionary__string__Android_android_graphics_Typeface* Dictionary__string__Android_android_graphics_Typeface__New_1(::uStatic* __this);
void Dictionary__string__Android_android_graphics_Typeface__Rehash(Dictionary__string__Android_android_graphics_Typeface* __this);
void Dictionary__string__Android_android_graphics_Typeface__set_Item(Dictionary__string__Android_android_graphics_Typeface* __this, ::uString* key, ::app::Android::android::graphics::Typeface* value);

struct Dictionary__string__Android_android_graphics_Typeface : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__string__Android_android_graphics_Typeface___ObjInit_1(this); }
    void Add(::uString* key, ::app::Android::android::graphics::Typeface* value) { Dictionary__string__Android_android_graphics_Typeface__Add(this, key, value); }
    bool ContainsKey(::uString* key) { return Dictionary__string__Android_android_graphics_Typeface__ContainsKey(this, key); }
    ::app::Android::android::graphics::Typeface* Item(::uString* key) { return Dictionary__string__Android_android_graphics_Typeface__get_Item(this, key); }
    void Rehash() { Dictionary__string__Android_android_graphics_Typeface__Rehash(this); }
    void Item(::uString* key, ::app::Android::android::graphics::Typeface* value) { Dictionary__string__Android_android_graphics_Typeface__set_Item(this, key, value); }
};

}}}


#endif
