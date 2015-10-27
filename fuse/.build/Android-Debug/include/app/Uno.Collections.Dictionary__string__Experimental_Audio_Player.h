// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__EXPERIMENTAL_AUDIO_PLAYER_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__EXPERIMENTAL_AUDIO_PLAYER_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Experimental_Audio_Player.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Audio { struct Player; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Experimental_Audio_Player;

struct Dictionary__string__Experimental_Audio_Player__uType : ::uClassType
{
};

Dictionary__string__Experimental_Audio_Player__uType* Dictionary__string__Experimental_Audio_Player__typeof();

void Dictionary__string__Experimental_Audio_Player___ObjInit_1(Dictionary__string__Experimental_Audio_Player* __this);
void Dictionary__string__Experimental_Audio_Player__Add(Dictionary__string__Experimental_Audio_Player* __this, ::uString* key, ::app::Experimental::Audio::Player* value);
::app::Experimental::Audio::Player* Dictionary__string__Experimental_Audio_Player__get_Item(Dictionary__string__Experimental_Audio_Player* __this, ::uString* key);
Dictionary__string__Experimental_Audio_Player* Dictionary__string__Experimental_Audio_Player__New_1(::uStatic* __this);
void Dictionary__string__Experimental_Audio_Player__Rehash(Dictionary__string__Experimental_Audio_Player* __this);
void Dictionary__string__Experimental_Audio_Player__set_Item(Dictionary__string__Experimental_Audio_Player* __this, ::uString* key, ::app::Experimental::Audio::Player* value);

struct Dictionary__string__Experimental_Audio_Player : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__string__Experimental_Audio_Player___ObjInit_1(this); }
    void Add(::uString* key, ::app::Experimental::Audio::Player* value) { Dictionary__string__Experimental_Audio_Player__Add(this, key, value); }
    ::app::Experimental::Audio::Player* Item(::uString* key) { return Dictionary__string__Experimental_Audio_Player__get_Item(this, key); }
    void Rehash() { Dictionary__string__Experimental_Audio_Player__Rehash(this); }
    void Item(::uString* key, ::app::Experimental::Audio::Player* value) { Dictionary__string__Experimental_Audio_Player__set_Item(this, key, value); }
};

}}}


#endif
