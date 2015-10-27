// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__INT__FUSE_INPUT_CAPTURER_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__INT__FUSE_INPUT_CAPTURER_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Capturer.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Fuse_Input_Capturer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__int__Fuse_Input_Capturer;

struct Dictionary2_Enumerator__int__Fuse_Input_Capturer__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_Enumerator__int__Fuse_Input_Capturer__uType* Dictionary2_Enumerator__int__Fuse_Input_Capturer__typeof();

void Dictionary2_Enumerator__int__Fuse_Input_Capturer___ObjInit(Dictionary2_Enumerator__int__Fuse_Input_Capturer* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer* source);
void Dictionary2_Enumerator__int__Fuse_Input_Capturer__Dispose(Dictionary2_Enumerator__int__Fuse_Input_Capturer* __this);
::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Capturer Dictionary2_Enumerator__int__Fuse_Input_Capturer__get_Current(Dictionary2_Enumerator__int__Fuse_Input_Capturer* __this);
bool Dictionary2_Enumerator__int__Fuse_Input_Capturer__MoveNext(Dictionary2_Enumerator__int__Fuse_Input_Capturer* __this);
Dictionary2_Enumerator__int__Fuse_Input_Capturer Dictionary2_Enumerator__int__Fuse_Input_Capturer__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer* source);

struct Dictionary2_Enumerator__int__Fuse_Input_Capturer
{
    ::uStrong< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*> _source;
    ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Capturer _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer* source) { Dictionary2_Enumerator__int__Fuse_Input_Capturer___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__int__Fuse_Input_Capturer__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Capturer Current() { return Dictionary2_Enumerator__int__Fuse_Input_Capturer__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__int__Fuse_Input_Capturer__MoveNext(this); }
};

}}}


#endif
