// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__EXPERIMENTAL_AUDIO_PLAYER_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__EXPERIMENTAL_AUDIO_PLAYER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Audio { struct Player; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__string__Experimental_Audio_Player;

struct Dictionary2_Bucket__string__Experimental_Audio_Player__uType : ::uStructType
{
};

Dictionary2_Bucket__string__Experimental_Audio_Player__uType* Dictionary2_Bucket__string__Experimental_Audio_Player__typeof();

struct Dictionary2_Bucket__string__Experimental_Audio_Player
{
    ::uStrong< ::uString*> Key;
    ::uStrong< ::app::Experimental::Audio::Player*> Value;
    int State;
};

}}}


#endif
