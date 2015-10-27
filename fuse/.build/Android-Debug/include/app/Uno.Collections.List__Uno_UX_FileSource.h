// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_U_X_FILE_SOURCE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_U_X_FILE_SOURCE_H__

#include <app/Uno.Collections.ICollection__Uno_UX_FileSource.h>
#include <app/Uno.Collections.IList__Uno_UX_FileSource.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_UX_FileSource; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_UX_FileSource;

struct List__Uno_UX_FileSource__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_UX_FileSource __interface_0;
    ::app::Uno::Collections::ICollection__Uno_UX_FileSource __interface_1;
};

List__Uno_UX_FileSource__uType* List__Uno_UX_FileSource__typeof();

void List__Uno_UX_FileSource___ObjInit(List__Uno_UX_FileSource* __this);
void List__Uno_UX_FileSource__Add(List__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* item);
void List__Uno_UX_FileSource__BoundsCheck(List__Uno_UX_FileSource* __this, int index);
void List__Uno_UX_FileSource__EnsureCapacity(List__Uno_UX_FileSource* __this);
int List__Uno_UX_FileSource__get_Count(List__Uno_UX_FileSource* __this);
::app::Uno::UX::FileSource* List__Uno_UX_FileSource__get_Item(List__Uno_UX_FileSource* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_UX_FileSource List__Uno_UX_FileSource__GetEnumerator(List__Uno_UX_FileSource* __this);
List__Uno_UX_FileSource* List__Uno_UX_FileSource__New_1(::uStatic* __this);
void List__Uno_UX_FileSource__set_Item(List__Uno_UX_FileSource* __this, int index, ::app::Uno::UX::FileSource* value);

struct List__Uno_UX_FileSource : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Uno_UX_FileSource___ObjInit(this); }
    void Add(::app::Uno::UX::FileSource* item) { List__Uno_UX_FileSource__Add(this, item); }
    void BoundsCheck(int index) { List__Uno_UX_FileSource__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Uno_UX_FileSource__EnsureCapacity(this); }
    int Count() { return List__Uno_UX_FileSource__get_Count(this); }
    ::app::Uno::UX::FileSource* Item(int index) { return List__Uno_UX_FileSource__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_UX_FileSource GetEnumerator();
    void Item(int index, ::app::Uno::UX::FileSource* value) { List__Uno_UX_FileSource__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_UX_FileSource.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_UX_FileSource List__Uno_UX_FileSource::GetEnumerator() { return List__Uno_UX_FileSource__GetEnumerator(this); }

}}}


#endif
