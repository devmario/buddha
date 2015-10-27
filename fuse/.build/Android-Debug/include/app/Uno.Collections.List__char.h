// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__CHAR_H__
#define __APP_UNO_COLLECTIONS_LIST__CHAR_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__char;

struct List__char__uType : ::uClassType
{
};

List__char__uType* List__char__typeof();

void List__char___ObjInit_1(List__char* __this, int capacity);
void List__char__Add(List__char* __this, ::uChar item);
void List__char__EnsureCapacity(List__char* __this);
List__char* List__char__New_2(::uStatic* __this, int capacity);
::uArray* List__char__ToArray(List__char* __this);

struct List__char : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit_1(int capacity) { List__char___ObjInit_1(this, capacity); }
    void Add(::uChar item) { List__char__Add(this, item); }
    void EnsureCapacity() { List__char__EnsureCapacity(this); }
    ::uArray* ToArray() { return List__char__ToArray(this); }
};

}}}


#endif
