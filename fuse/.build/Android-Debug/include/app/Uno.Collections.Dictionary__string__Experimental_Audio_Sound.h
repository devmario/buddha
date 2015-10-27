// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__EXPERIMENTAL_AUDIO_SOUND_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__EXPERIMENTAL_AUDIO_SOUND_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Experimental_Audio_Sound.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Audio { struct Sound; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Experimental_Audio_Sound;

struct Dictionary__string__Experimental_Audio_Sound__uType : ::uClassType
{
};

Dictionary__string__Experimental_Audio_Sound__uType* Dictionary__string__Experimental_Audio_Sound__typeof();

void Dictionary__string__Experimental_Audio_Sound___ObjInit_1(Dictionary__string__Experimental_Audio_Sound* __this);
void Dictionary__string__Experimental_Audio_Sound__Add(Dictionary__string__Experimental_Audio_Sound* __this, ::uString* key, ::app::Experimental::Audio::Sound* value);
Dictionary__string__Experimental_Audio_Sound* Dictionary__string__Experimental_Audio_Sound__New_1(::uStatic* __this);
void Dictionary__string__Experimental_Audio_Sound__Rehash(Dictionary__string__Experimental_Audio_Sound* __this);
bool Dictionary__string__Experimental_Audio_Sound__TryGetValue(Dictionary__string__Experimental_Audio_Sound* __this, ::uString* key, ::app::Experimental::Audio::Sound** value);

struct Dictionary__string__Experimental_Audio_Sound : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__string__Experimental_Audio_Sound___ObjInit_1(this); }
    void Add(::uString* key, ::app::Experimental::Audio::Sound* value) { Dictionary__string__Experimental_Audio_Sound__Add(this, key, value); }
    void Rehash() { Dictionary__string__Experimental_Audio_Sound__Rehash(this); }
    bool TryGetValue(::uString* key, ::app::Experimental::Audio::Sound** value) { return Dictionary__string__Experimental_Audio_Sound__TryGetValue(this, key, value); }
};

}}}


#endif
