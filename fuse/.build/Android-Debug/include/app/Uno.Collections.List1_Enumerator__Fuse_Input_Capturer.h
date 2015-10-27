// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_INPUT_CAPTURER_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_INPUT_CAPTURER_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_Capturer.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct Capturer; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_Capturer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Input_Capturer;

struct List1_Enumerator__Fuse_Input_Capturer__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Input_Capturer __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Input_Capturer__uType* List1_Enumerator__Fuse_Input_Capturer__typeof();

void List1_Enumerator__Fuse_Input_Capturer___ObjInit(List1_Enumerator__Fuse_Input_Capturer* __this, ::app::Uno::Collections::List__Fuse_Input_Capturer* source);
void List1_Enumerator__Fuse_Input_Capturer__Dispose(List1_Enumerator__Fuse_Input_Capturer* __this);
::app::Fuse::Input::Capturer* List1_Enumerator__Fuse_Input_Capturer__get_Current(List1_Enumerator__Fuse_Input_Capturer* __this);
bool List1_Enumerator__Fuse_Input_Capturer__MoveNext(List1_Enumerator__Fuse_Input_Capturer* __this);
List1_Enumerator__Fuse_Input_Capturer List1_Enumerator__Fuse_Input_Capturer__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_Capturer* source);

struct List1_Enumerator__Fuse_Input_Capturer
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_Capturer*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Input::Capturer*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Input_Capturer* source) { List1_Enumerator__Fuse_Input_Capturer___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Input_Capturer__Dispose(this); }
    ::app::Fuse::Input::Capturer* Current() { return List1_Enumerator__Fuse_Input_Capturer__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Input_Capturer__MoveNext(this); }
};

}}}


#endif
