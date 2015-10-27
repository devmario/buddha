// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__UNO_U_X_FILE_SOURCE__UNO_CONTENT_FONT_8F7AF919_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__UNO_U_X_FILE_SOURCE__UNO_CONTENT_FONT_8F7AF919_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Uno_UX_FileSource__Uno_Cont-bc22b082.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Fonts { struct FontFace; } } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace;

struct Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType : ::uClassType
{
};

Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType* Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof();

void Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace___ObjInit_1(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
void Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Add(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::UX::FileSource* key, ::app::Uno::Content::Fonts::FontFace* value);
Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__New_1(::uStatic* __this);
void Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Rehash(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this);
bool Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__TryGetValue(Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace* __this, ::app::Uno::UX::FileSource* key, ::app::Uno::Content::Fonts::FontFace** value);

struct Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace___ObjInit_1(this); }
    void Add(::app::Uno::UX::FileSource* key, ::app::Uno::Content::Fonts::FontFace* value) { Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Add(this, key, value); }
    void Rehash() { Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__Rehash(this); }
    bool TryGetValue(::app::Uno::UX::FileSource* key, ::app::Uno::Content::Fonts::FontFace** value) { return Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__TryGetValue(this, key, value); }
};

}}}


#endif
