// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__EXPERIMENTAL_AUDIO_CHANNEL_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__EXPERIMENTAL_AUDIO_CHANNEL_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Experimental_Audio_Channel.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Audio { struct Channel; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__Experimental_Audio_Channel; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Experimental_Audio_Channel;

struct Dictionary__string__Experimental_Audio_Channel__uType : ::uClassType
{
};

Dictionary__string__Experimental_Audio_Channel__uType* Dictionary__string__Experimental_Audio_Channel__typeof();

void Dictionary__string__Experimental_Audio_Channel___ObjInit_1(Dictionary__string__Experimental_Audio_Channel* __this);
void Dictionary__string__Experimental_Audio_Channel__Add(Dictionary__string__Experimental_Audio_Channel* __this, ::uString* key, ::app::Experimental::Audio::Channel* value);
::app::Uno::Collections::Dictionary2_Enumerator__string__Experimental_Audio_Channel Dictionary__string__Experimental_Audio_Channel__GetEnumerator(Dictionary__string__Experimental_Audio_Channel* __this);
Dictionary__string__Experimental_Audio_Channel* Dictionary__string__Experimental_Audio_Channel__New_1(::uStatic* __this);
void Dictionary__string__Experimental_Audio_Channel__Rehash(Dictionary__string__Experimental_Audio_Channel* __this);
bool Dictionary__string__Experimental_Audio_Channel__Remove(Dictionary__string__Experimental_Audio_Channel* __this, ::uString* key);
bool Dictionary__string__Experimental_Audio_Channel__TryGetValue(Dictionary__string__Experimental_Audio_Channel* __this, ::uString* key, ::app::Experimental::Audio::Channel** value);

struct Dictionary__string__Experimental_Audio_Channel : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__string__Experimental_Audio_Channel___ObjInit_1(this); }
    void Add(::uString* key, ::app::Experimental::Audio::Channel* value) { Dictionary__string__Experimental_Audio_Channel__Add(this, key, value); }
    ::app::Uno::Collections::Dictionary2_Enumerator__string__Experimental_Audio_Channel GetEnumerator();
    void Rehash() { Dictionary__string__Experimental_Audio_Channel__Rehash(this); }
    bool Remove(::uString* key) { return Dictionary__string__Experimental_Audio_Channel__Remove(this, key); }
    bool TryGetValue(::uString* key, ::app::Experimental::Audio::Channel** value) { return Dictionary__string__Experimental_Audio_Channel__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__string__Experimental_Au-c146112c.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__string__Experimental_Audio_Channel Dictionary__string__Experimental_Audio_Channel::GetEnumerator() { return Dictionary__string__Experimental_Audio_Channel__GetEnumerator(this); }

}}}


#endif
