// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__UNO_U_X_FILE_SOURCE__UNO_CONT_BC22B082_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__UNO_U_X_FILE_SOURCE__UNO_CONT_BC22B082_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Fonts { struct FontFace; } } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace;

struct Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType : ::uStructType
{
};

Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType* Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof();

struct Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace
{
    ::uStrong< ::app::Uno::UX::FileSource*> Key;
    ::uStrong< ::app::Uno::Content::Fonts::FontFace*> Value;
    int State;
};

}}}


#endif
