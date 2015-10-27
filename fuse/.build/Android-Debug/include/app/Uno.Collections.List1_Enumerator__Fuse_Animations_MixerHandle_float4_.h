// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_FLOAT4__H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_FLOAT4__H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__float4; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_float4_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Animations_MixerHandle_float4_;

struct List1_Enumerator__Fuse_Animations_MixerHandle_float4___uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

List1_Enumerator__Fuse_Animations_MixerHandle_float4___uType* List1_Enumerator__Fuse_Animations_MixerHandle_float4___typeof();

void List1_Enumerator__Fuse_Animations_MixerHandle_float4____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_float4_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_float4___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_float4_* __this);
::app::Fuse::Animations::MixerHandle__float4* List1_Enumerator__Fuse_Animations_MixerHandle_float4___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_float4_* __this);
bool List1_Enumerator__Fuse_Animations_MixerHandle_float4___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_float4_* __this);
List1_Enumerator__Fuse_Animations_MixerHandle_float4_ List1_Enumerator__Fuse_Animations_MixerHandle_float4___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_* source);

struct List1_Enumerator__Fuse_Animations_MixerHandle_float4_
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Animations::MixerHandle__float4*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_* source) { List1_Enumerator__Fuse_Animations_MixerHandle_float4____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Animations_MixerHandle_float4___Dispose(this); }
    ::app::Fuse::Animations::MixerHandle__float4* Current() { return List1_Enumerator__Fuse_Animations_MixerHandle_float4___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Animations_MixerHandle_float4___MoveNext(this); }
};

}}}


#endif
