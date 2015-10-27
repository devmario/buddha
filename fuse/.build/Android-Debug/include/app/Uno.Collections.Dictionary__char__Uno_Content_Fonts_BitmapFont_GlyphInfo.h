// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__CHAR__UNO_CONTENT_FONTS_BITMAP_FONT_GLYPH_INFO_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__CHAR__UNO_CONTENT_FONTS_BITMAP_FONT_GLYPH_INFO_H__

#include <app/Uno.Collections.Dictionary2_Bucket__char__Uno_Content_Fonts_Bit-a8d90177.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Fonts { struct BitmapFont_GlyphInfo; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo;

struct Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType : ::uClassType
{
};

Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType* Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof();

void Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo___ObjInit_1(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this);
void Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Add(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo value);
Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__New_1(::uStatic* __this);
void Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Rehash(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this);
bool Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__TryGetValue(Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo* value);

struct Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo___ObjInit_1(this); }
    void Add(::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo value);
    void Rehash() { Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Rehash(this); }
    bool TryGetValue(::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo* value) { return Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Content.Fonts.BitmapFont_GlyphInfo.h>

namespace app {
namespace Uno {
namespace Collections {

inline void Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo::Add(::uChar key, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo value) { Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Add(this, key, value); }

}}}


#endif
