// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__UNO_CONTENT_FONTS_BITMAP_FONT_CHAR_PAIR__FLOAT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__UNO_CONTENT_FONTS_BITMAP_FONT_CHAR_PAIR__FLOAT_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Uno_Content_Fonts_BitmapFon-511b52b3.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Fonts { struct BitmapFont_CharPair; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float;

struct Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__uType : ::uClassType
{
};

Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__uType* Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof();

void Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float___ObjInit_1(Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* __this);
void Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__Add(Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair key, float value);
float Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__get_Item(Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair key);
Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__New_1(::uStatic* __this);
void Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__Rehash(Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* __this);
void Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__set_Item(Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair key, float value);
bool Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__TryGetValue(Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair key, float* value);

struct Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float___ObjInit_1(this); }
    void Add(::app::Uno::Content::Fonts::BitmapFont_CharPair key, float value);
    float Item(::app::Uno::Content::Fonts::BitmapFont_CharPair key);
    void Rehash() { Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__Rehash(this); }
    void Item(::app::Uno::Content::Fonts::BitmapFont_CharPair key, float value);
    bool TryGetValue(::app::Uno::Content::Fonts::BitmapFont_CharPair key, float* value);
};

}}}

#include <app/Uno.Content.Fonts.BitmapFont_CharPair.h>

namespace app {
namespace Uno {
namespace Collections {

inline void Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float::Add(::app::Uno::Content::Fonts::BitmapFont_CharPair key, float value) { Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__Add(this, key, value); }
inline float Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float::Item(::app::Uno::Content::Fonts::BitmapFont_CharPair key) { return Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__get_Item(this, key); }
inline void Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float::Item(::app::Uno::Content::Fonts::BitmapFont_CharPair key, float value) { Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__set_Item(this, key, value); }
inline bool Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float::TryGetValue(::app::Uno::Content::Fonts::BitmapFont_CharPair key, float* value) { return Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__TryGetValue(this, key, value); }

}}}


#endif
