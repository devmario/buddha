// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_RECTI_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_RECTI_H__

#include <app/Uno.Object.h>
#include <app/Uno.Recti.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Recti;

struct List__Uno_Recti__uType : ::uClassType
{
};

List__Uno_Recti__uType* List__Uno_Recti__typeof();

void List__Uno_Recti___ObjInit(List__Uno_Recti* __this);
List__Uno_Recti* List__Uno_Recti__New_1(::uStatic* __this);

struct List__Uno_Recti : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;

    void _ObjInit() { List__Uno_Recti___ObjInit(this); }
};

}}}


#endif
