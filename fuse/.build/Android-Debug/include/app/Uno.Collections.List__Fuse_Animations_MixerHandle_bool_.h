// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_BOOL__H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_BOOL__H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__bool; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_bool_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_bool_;

struct List__Fuse_Animations_MixerHandle_bool___uType : ::uClassType
{
};

List__Fuse_Animations_MixerHandle_bool___uType* List__Fuse_Animations_MixerHandle_bool___typeof();

void List__Fuse_Animations_MixerHandle_bool____ObjInit(List__Fuse_Animations_MixerHandle_bool_* __this);
void List__Fuse_Animations_MixerHandle_bool___BoundsCheck(List__Fuse_Animations_MixerHandle_bool_* __this, int index);
void List__Fuse_Animations_MixerHandle_bool___EnsureCapacity(List__Fuse_Animations_MixerHandle_bool_* __this);
int List__Fuse_Animations_MixerHandle_bool___get_Count(List__Fuse_Animations_MixerHandle_bool_* __this);
::app::Fuse::Animations::MixerHandle__bool* List__Fuse_Animations_MixerHandle_bool___get_Item(List__Fuse_Animations_MixerHandle_bool_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_bool_ List__Fuse_Animations_MixerHandle_bool___GetEnumerator(List__Fuse_Animations_MixerHandle_bool_* __this);
void List__Fuse_Animations_MixerHandle_bool___Insert(List__Fuse_Animations_MixerHandle_bool_* __this, int index, ::app::Fuse::Animations::MixerHandle__bool* item);
List__Fuse_Animations_MixerHandle_bool_* List__Fuse_Animations_MixerHandle_bool___New_1(::uStatic* __this);
bool List__Fuse_Animations_MixerHandle_bool___Remove(List__Fuse_Animations_MixerHandle_bool_* __this, ::app::Fuse::Animations::MixerHandle__bool* item);
void List__Fuse_Animations_MixerHandle_bool___RemoveAt(List__Fuse_Animations_MixerHandle_bool_* __this, int index);
void List__Fuse_Animations_MixerHandle_bool___set_Item(List__Fuse_Animations_MixerHandle_bool_* __this, int index, ::app::Fuse::Animations::MixerHandle__bool* value);

struct List__Fuse_Animations_MixerHandle_bool_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Animations_MixerHandle_bool____ObjInit(this); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_bool___BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_bool___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_bool___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__bool* Item(int index) { return List__Fuse_Animations_MixerHandle_bool___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_bool_ GetEnumerator();
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__bool* item) { List__Fuse_Animations_MixerHandle_bool___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__bool* item) { return List__Fuse_Animations_MixerHandle_bool___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_bool___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__bool* value) { List__Fuse_Animations_MixerHandle_bool___set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_bool_.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_bool_ List__Fuse_Animations_MixerHandle_bool_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_bool___GetEnumerator(this); }

}}}


#endif
