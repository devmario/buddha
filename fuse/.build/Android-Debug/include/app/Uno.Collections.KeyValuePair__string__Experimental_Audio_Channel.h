// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__EXPERIMENTAL_AUDIO_CHANNEL_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__EXPERIMENTAL_AUDIO_CHANNEL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Audio { struct Channel; } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__string__Experimental_Audio_Channel;

struct KeyValuePair__string__Experimental_Audio_Channel__uType : ::uStructType
{
};

KeyValuePair__string__Experimental_Audio_Channel__uType* KeyValuePair__string__Experimental_Audio_Channel__typeof();

void KeyValuePair__string__Experimental_Audio_Channel___ObjInit(KeyValuePair__string__Experimental_Audio_Channel* __this, ::uString* key, ::app::Experimental::Audio::Channel* value);
::uString* KeyValuePair__string__Experimental_Audio_Channel__get_Key(KeyValuePair__string__Experimental_Audio_Channel* __this);
::app::Experimental::Audio::Channel* KeyValuePair__string__Experimental_Audio_Channel__get_Value(KeyValuePair__string__Experimental_Audio_Channel* __this);
KeyValuePair__string__Experimental_Audio_Channel KeyValuePair__string__Experimental_Audio_Channel__New_1(::uStatic* __this, ::uString* key, ::app::Experimental::Audio::Channel* value);

struct KeyValuePair__string__Experimental_Audio_Channel
{
    ::uStrong< ::uString*> _key;
    ::uStrong< ::app::Experimental::Audio::Channel*> _value;

    void _ObjInit(::uString* key, ::app::Experimental::Audio::Channel* value) { KeyValuePair__string__Experimental_Audio_Channel___ObjInit(this, key, value); }
    ::uString* Key() { return KeyValuePair__string__Experimental_Audio_Channel__get_Key(this); }
    ::app::Experimental::Audio::Channel* Value() { return KeyValuePair__string__Experimental_Audio_Channel__get_Value(this); }
};

}}}


#endif
