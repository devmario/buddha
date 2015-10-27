// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__EXPERIMENTAL_AU_C146112C_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__EXPERIMENTAL_AU_C146112C_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.KeyValuePair__string__Experimental_Audio_Channel.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Experimental_Audio_Channel; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__string__Experimental_Audio_Channel;

struct Dictionary2_Enumerator__string__Experimental_Audio_Channel__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_Enumerator__string__Experimental_Audio_Channel__uType* Dictionary2_Enumerator__string__Experimental_Audio_Channel__typeof();

void Dictionary2_Enumerator__string__Experimental_Audio_Channel___ObjInit(Dictionary2_Enumerator__string__Experimental_Audio_Channel* __this, ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel* source);
void Dictionary2_Enumerator__string__Experimental_Audio_Channel__Dispose(Dictionary2_Enumerator__string__Experimental_Audio_Channel* __this);
::app::Uno::Collections::KeyValuePair__string__Experimental_Audio_Channel Dictionary2_Enumerator__string__Experimental_Audio_Channel__get_Current(Dictionary2_Enumerator__string__Experimental_Audio_Channel* __this);
bool Dictionary2_Enumerator__string__Experimental_Audio_Channel__MoveNext(Dictionary2_Enumerator__string__Experimental_Audio_Channel* __this);
Dictionary2_Enumerator__string__Experimental_Audio_Channel Dictionary2_Enumerator__string__Experimental_Audio_Channel__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel* source);

struct Dictionary2_Enumerator__string__Experimental_Audio_Channel
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel*> _source;
    ::app::Uno::Collections::KeyValuePair__string__Experimental_Audio_Channel _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel* source) { Dictionary2_Enumerator__string__Experimental_Audio_Channel___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__string__Experimental_Audio_Channel__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__string__Experimental_Audio_Channel Current() { return Dictionary2_Enumerator__string__Experimental_Audio_Channel__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__string__Experimental_Audio_Channel__MoveNext(this); }
};

}}}


#endif
