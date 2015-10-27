// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__EXPERIMENTAL_AUDIO_CHANNEL_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__EXPERIMENTAL_AUDIO_CHANNEL_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Audio { struct Channel; } } }
namespace app { namespace Uno { namespace Collections { struct List__Experimental_Audio_Channel; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Experimental_Audio_Channel;

struct List1_Enumerator__Experimental_Audio_Channel__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

List1_Enumerator__Experimental_Audio_Channel__uType* List1_Enumerator__Experimental_Audio_Channel__typeof();

void List1_Enumerator__Experimental_Audio_Channel___ObjInit(List1_Enumerator__Experimental_Audio_Channel* __this, ::app::Uno::Collections::List__Experimental_Audio_Channel* source);
void List1_Enumerator__Experimental_Audio_Channel__Dispose(List1_Enumerator__Experimental_Audio_Channel* __this);
::app::Experimental::Audio::Channel* List1_Enumerator__Experimental_Audio_Channel__get_Current(List1_Enumerator__Experimental_Audio_Channel* __this);
bool List1_Enumerator__Experimental_Audio_Channel__MoveNext(List1_Enumerator__Experimental_Audio_Channel* __this);
List1_Enumerator__Experimental_Audio_Channel List1_Enumerator__Experimental_Audio_Channel__New_1(::uStatic* __this, ::app::Uno::Collections::List__Experimental_Audio_Channel* source);

struct List1_Enumerator__Experimental_Audio_Channel
{
    ::uStrong< ::app::Uno::Collections::List__Experimental_Audio_Channel*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Experimental::Audio::Channel*> _current;

    void _ObjInit(::app::Uno::Collections::List__Experimental_Audio_Channel* source) { List1_Enumerator__Experimental_Audio_Channel___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Experimental_Audio_Channel__Dispose(this); }
    ::app::Experimental::Audio::Channel* Current() { return List1_Enumerator__Experimental_Audio_Channel__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Experimental_Audio_Channel__MoveNext(this); }
};

}}}


#endif
