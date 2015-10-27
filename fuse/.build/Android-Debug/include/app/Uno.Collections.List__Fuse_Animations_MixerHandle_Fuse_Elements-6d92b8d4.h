// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_ELEMENTS_6D92B8D4_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_ELEMENTS_6D92B8D4_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Elements_Visibility; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_;

struct List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___uType : ::uClassType
{
};

List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___uType* List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___typeof();

void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility____ObjInit(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___BoundsCheck(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___EnsureCapacity(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___get_Count(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___get_Item(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_ List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___GetEnumerator(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Insert(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* item);
List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___New_1(::uStatic* __this);
bool List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Remove(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* item);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___RemoveAt(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___set_Item(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* value);

struct List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility____ObjInit(this); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* Item(int index) { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_ GetEnumerator();
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* item) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* item) { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* value) { List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-de9d0662.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_ List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___GetEnumerator(this); }

}}}


#endif
