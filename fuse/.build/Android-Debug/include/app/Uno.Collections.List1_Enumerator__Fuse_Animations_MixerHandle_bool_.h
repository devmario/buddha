// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_BOOL__H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_BOOL__H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__bool; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_bool_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Animations_MixerHandle_bool_;

struct List1_Enumerator__Fuse_Animations_MixerHandle_bool___uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

List1_Enumerator__Fuse_Animations_MixerHandle_bool___uType* List1_Enumerator__Fuse_Animations_MixerHandle_bool___typeof();

void List1_Enumerator__Fuse_Animations_MixerHandle_bool____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_bool_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_bool___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_bool_* __this);
::app::Fuse::Animations::MixerHandle__bool* List1_Enumerator__Fuse_Animations_MixerHandle_bool___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_bool_* __this);
bool List1_Enumerator__Fuse_Animations_MixerHandle_bool___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_bool_* __this);
List1_Enumerator__Fuse_Animations_MixerHandle_bool_ List1_Enumerator__Fuse_Animations_MixerHandle_bool___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_* source);

struct List1_Enumerator__Fuse_Animations_MixerHandle_bool_
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Animations::MixerHandle__bool*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_* source) { List1_Enumerator__Fuse_Animations_MixerHandle_bool____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Animations_MixerHandle_bool___Dispose(this); }
    ::app::Fuse::Animations::MixerHandle__bool* Current() { return List1_Enumerator__Fuse_Animations_MixerHandle_bool___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Animations_MixerHandle_bool___MoveNext(this); }
};

}}}


#endif
