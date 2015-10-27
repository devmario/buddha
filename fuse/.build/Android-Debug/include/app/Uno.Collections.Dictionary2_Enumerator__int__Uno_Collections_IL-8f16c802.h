// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__INT__UNO_COLLECTIONS_I_L_8F16C802_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__INT__UNO_COLLECTIONS_I_L_8F16C802_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.KeyValuePair__int__Uno_Collections_IList_Fuse_I-7b6b2bd.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_;

struct Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof();

void Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source);
void Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___Dispose(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
::app::Uno::Collections::KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Current(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
bool Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___MoveNext(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source);

struct Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_
{
    ::uStrong< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*> _source;
    ::app::Uno::Collections::KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source) { Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ Current() { return Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___MoveNext(this); }
};

}}}


#endif
