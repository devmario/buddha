// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FLOAT__H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ANIMATIONS_MIXER_HANDLE_FLOAT__H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__float; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_float_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Animations_MixerHandle_float_;

struct List__Fuse_Animations_MixerHandle_float___uType : ::uClassType
{
};

List__Fuse_Animations_MixerHandle_float___uType* List__Fuse_Animations_MixerHandle_float___typeof();

void List__Fuse_Animations_MixerHandle_float____ObjInit(List__Fuse_Animations_MixerHandle_float_* __this);
void List__Fuse_Animations_MixerHandle_float___BoundsCheck(List__Fuse_Animations_MixerHandle_float_* __this, int index);
void List__Fuse_Animations_MixerHandle_float___EnsureCapacity(List__Fuse_Animations_MixerHandle_float_* __this);
int List__Fuse_Animations_MixerHandle_float___get_Count(List__Fuse_Animations_MixerHandle_float_* __this);
::app::Fuse::Animations::MixerHandle__float* List__Fuse_Animations_MixerHandle_float___get_Item(List__Fuse_Animations_MixerHandle_float_* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float_ List__Fuse_Animations_MixerHandle_float___GetEnumerator(List__Fuse_Animations_MixerHandle_float_* __this);
void List__Fuse_Animations_MixerHandle_float___Insert(List__Fuse_Animations_MixerHandle_float_* __this, int index, ::app::Fuse::Animations::MixerHandle__float* item);
List__Fuse_Animations_MixerHandle_float_* List__Fuse_Animations_MixerHandle_float___New_1(::uStatic* __this);
bool List__Fuse_Animations_MixerHandle_float___Remove(List__Fuse_Animations_MixerHandle_float_* __this, ::app::Fuse::Animations::MixerHandle__float* item);
void List__Fuse_Animations_MixerHandle_float___RemoveAt(List__Fuse_Animations_MixerHandle_float_* __this, int index);
void List__Fuse_Animations_MixerHandle_float___set_Item(List__Fuse_Animations_MixerHandle_float_* __this, int index, ::app::Fuse::Animations::MixerHandle__float* value);

struct List__Fuse_Animations_MixerHandle_float_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Animations_MixerHandle_float____ObjInit(this); }
    void BoundsCheck(int index) { List__Fuse_Animations_MixerHandle_float___BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Animations_MixerHandle_float___EnsureCapacity(this); }
    int Count() { return List__Fuse_Animations_MixerHandle_float___get_Count(this); }
    ::app::Fuse::Animations::MixerHandle__float* Item(int index) { return List__Fuse_Animations_MixerHandle_float___get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float_ GetEnumerator();
    void Insert(int index, ::app::Fuse::Animations::MixerHandle__float* item) { List__Fuse_Animations_MixerHandle_float___Insert(this, index, item); }
    bool Remove(::app::Fuse::Animations::MixerHandle__float* item) { return List__Fuse_Animations_MixerHandle_float___Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Animations_MixerHandle_float___RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Animations::MixerHandle__float* value) { List__Fuse_Animations_MixerHandle_float___set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_float_.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float_ List__Fuse_Animations_MixerHandle_float_::GetEnumerator() { return List__Fuse_Animations_MixerHandle_float___GetEnumerator(this); }

}}}


#endif
