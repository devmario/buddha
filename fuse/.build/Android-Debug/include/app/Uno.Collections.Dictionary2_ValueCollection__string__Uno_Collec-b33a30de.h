// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__UNO_COLLEC_B33A30DE_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__UNO_COLLEC_B33A30DE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Collections_List_object_; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__string__Uno_Collections_List_object_;

struct Dictionary2_ValueCollection__string__Uno_Collections_List_object___uType : ::uClassType
{
};

Dictionary2_ValueCollection__string__Uno_Collections_List_object___uType* Dictionary2_ValueCollection__string__Uno_Collections_List_object___typeof();

void Dictionary2_ValueCollection__string__Uno_Collections_List_object____ObjInit(Dictionary2_ValueCollection__string__Uno_Collections_List_object_* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_ Dictionary2_ValueCollection__string__Uno_Collections_List_object___GetEnumerator(Dictionary2_ValueCollection__string__Uno_Collections_List_object_* __this);
Dictionary2_ValueCollection__string__Uno_Collections_List_object_* Dictionary2_ValueCollection__string__Uno_Collections_List_object___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source);

struct Dictionary2_ValueCollection__string__Uno_Collections_List_object_ : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source) { Dictionary2_ValueCollection__string__Uno_Collections_List_object____ObjInit(this, source); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_ GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__string_-45ef4c4b.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_ Dictionary2_ValueCollection__string__Uno_Collections_List_object_::GetEnumerator() { return Dictionary2_ValueCollection__string__Uno_Collections_List_object___GetEnumerator(this); }

}}}


#endif
