// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__STRING__STRING_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__STRING__STRING_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__string; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__string__string; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection__string__string;

struct Dictionary2_KeyCollection__string__string__uType : ::uClassType
{
};

Dictionary2_KeyCollection__string__string__uType* Dictionary2_KeyCollection__string__string__typeof();

void Dictionary2_KeyCollection__string__string___ObjInit(Dictionary2_KeyCollection__string__string* __this, ::app::Uno::Collections::Dictionary__string__string* source);
::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__string Dictionary2_KeyCollection__string__string__GetEnumerator(Dictionary2_KeyCollection__string__string* __this);
Dictionary2_KeyCollection__string__string* Dictionary2_KeyCollection__string__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__string* source);

struct Dictionary2_KeyCollection__string__string : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__string*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__string* source) { Dictionary2_KeyCollection__string__string___ObjInit(this, source); }
    ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__string GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__string.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__string Dictionary2_KeyCollection__string__string::GetEnumerator() { return Dictionary2_KeyCollection__string__string__GetEnumerator(this); }

}}}


#endif
