// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__EXPERIMENTAL_AUDIO_CHANNEL_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__EXPERIMENTAL_AUDIO_CHANNEL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Audio { struct Channel; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__string__Experimental_Audio_Channel;

struct Dictionary2_Bucket__string__Experimental_Audio_Channel__uType : ::uStructType
{
};

Dictionary2_Bucket__string__Experimental_Audio_Channel__uType* Dictionary2_Bucket__string__Experimental_Audio_Channel__typeof();

struct Dictionary2_Bucket__string__Experimental_Audio_Channel
{
    ::uStrong< ::uString*> Key;
    ::uStrong< ::app::Experimental::Audio::Channel*> Value;
    int State;
};

}}}


#endif
