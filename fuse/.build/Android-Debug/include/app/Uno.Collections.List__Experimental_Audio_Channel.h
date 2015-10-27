// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__EXPERIMENTAL_AUDIO_CHANNEL_H__
#define __APP_UNO_COLLECTIONS_LIST__EXPERIMENTAL_AUDIO_CHANNEL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Audio { struct Channel; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Experimental_Audio_Channel; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Experimental_Audio_Channel;

struct List__Experimental_Audio_Channel__uType : ::uClassType
{
};

List__Experimental_Audio_Channel__uType* List__Experimental_Audio_Channel__typeof();

void List__Experimental_Audio_Channel___ObjInit(List__Experimental_Audio_Channel* __this);
void List__Experimental_Audio_Channel__Add(List__Experimental_Audio_Channel* __this, ::app::Experimental::Audio::Channel* item);
void List__Experimental_Audio_Channel__BoundsCheck(List__Experimental_Audio_Channel* __this, int index);
void List__Experimental_Audio_Channel__EnsureCapacity(List__Experimental_Audio_Channel* __this);
int List__Experimental_Audio_Channel__get_Count(List__Experimental_Audio_Channel* __this);
::app::Uno::Collections::List1_Enumerator__Experimental_Audio_Channel List__Experimental_Audio_Channel__GetEnumerator(List__Experimental_Audio_Channel* __this);
List__Experimental_Audio_Channel* List__Experimental_Audio_Channel__New_1(::uStatic* __this);
bool List__Experimental_Audio_Channel__Remove(List__Experimental_Audio_Channel* __this, ::app::Experimental::Audio::Channel* item);
void List__Experimental_Audio_Channel__RemoveAt(List__Experimental_Audio_Channel* __this, int index);

struct List__Experimental_Audio_Channel : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Experimental_Audio_Channel___ObjInit(this); }
    void Add(::app::Experimental::Audio::Channel* item) { List__Experimental_Audio_Channel__Add(this, item); }
    void BoundsCheck(int index) { List__Experimental_Audio_Channel__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Experimental_Audio_Channel__EnsureCapacity(this); }
    int Count() { return List__Experimental_Audio_Channel__get_Count(this); }
    ::app::Uno::Collections::List1_Enumerator__Experimental_Audio_Channel GetEnumerator();
    bool Remove(::app::Experimental::Audio::Channel* item) { return List__Experimental_Audio_Channel__Remove(this, item); }
    void RemoveAt(int index) { List__Experimental_Audio_Channel__RemoveAt(this, index); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Experimental_Audio_Channel.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Experimental_Audio_Channel List__Experimental_Audio_Channel::GetEnumerator() { return List__Experimental_Audio_Channel__GetEnumerator(this); }

}}}


#endif
