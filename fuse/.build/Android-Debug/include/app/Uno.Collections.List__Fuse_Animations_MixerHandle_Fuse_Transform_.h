// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_TRANSFORM__H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FUSE_TRANSFORM__H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Transform; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_Fuse_Transform_;

struct List__Fuse_Animations_MixerHandle_Fuse_Transform___uType : ::uClassType
{
};

List__Fuse_Animations_MixerHandle_Fuse_Transform___uType* List__Fuse_Animations_MixerHandle_Fuse_Transform___typeof();

void List__Fuse_Animations_MixerHandle_Fuse_Transform____ObjInit(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Transform___BoundsCheck(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Transform___EnsureCapacity(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this);
int List__Fuse_Animations_MixerHandle_Fuse_Transform___get_Count(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Transform* List__Fuse_Animations_MixerHandle_Fuse_Transform___get_Item(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_ List__Fuse_Animations_MixerHandle_Fuse_Transform___GetEnumerator(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this);
void List__Fuse_Animations_MixerHandle_Fuse_Transform___Insert(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* item);
List__Fuse_Animations_MixerHandle_Fuse_Transform_* List__Fuse_Animations_MixerHandle_Fuse_Transform___New_1(::uStatic* __this);
bool List__Fuse_Animations_MixerHandle_Fuse_Transform___Remove(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* item);
void List__Fuse_Animations_MixerHandle_Fuse_Transform___RemoveAt(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, int index);
void List__Fuse_Animations_MixerHandle_Fuse_Transform___set_Item(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* value);

struct List__Fuse_Animations_MixerHandle_Fuse_Transform_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Animations_MixerHandle_Fuse_Transform____ObjInit(this); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_Fuse_Transform___BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_Fuse_Transform___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_Fuse_Transform___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Transform* Item(int index) { return List__Fuse_Animations_MixerHandle_Fuse_Transform___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_ GetEnumerator();
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* item) { List__Fuse_Animations_MixerHandle_Fuse_Transform___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__Fuse_Transform* item) { return List__Fuse_Animations_MixerHandle_Fuse_Transform___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_Fuse_Transform___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* value) { List__Fuse_Animations_MixerHandle_Fuse_Transform___set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-b6df34f0.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_ List__Fuse_Animations_MixerHandle_Fuse_Transform_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_Fuse_Transform___GetEnumerator(this); }

}}}


#endif
