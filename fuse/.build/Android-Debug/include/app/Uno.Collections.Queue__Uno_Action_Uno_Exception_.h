// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE__UNO_ACTION_UNO_EXCEPTION__H__
#define __APP_UNO_COLLECTIONS_QUEUE__UNO_ACTION_UNO_EXCEPTION__H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Queue__Uno_Action_Uno_Exception_;

struct Queue__Uno_Action_Uno_Exception___uType : ::uClassType
{
};

Queue__Uno_Action_Uno_Exception___uType* Queue__Uno_Action_Uno_Exception___typeof();

void Queue__Uno_Action_Uno_Exception____ObjInit_1(Queue__Uno_Action_Uno_Exception_* __this);
::uDelegate* Queue__Uno_Action_Uno_Exception___Dequeue(Queue__Uno_Action_Uno_Exception_* __this);
::uDelegate* Queue__Uno_Action_Uno_Exception___ElementAt(Queue__Uno_Action_Uno_Exception_* __this, int index);
void Queue__Uno_Action_Uno_Exception___Enqueue(Queue__Uno_Action_Uno_Exception_* __this, ::uDelegate* item);
void Queue__Uno_Action_Uno_Exception___EnsureCapacity(Queue__Uno_Action_Uno_Exception_* __this);
int Queue__Uno_Action_Uno_Exception___get_Count(Queue__Uno_Action_Uno_Exception_* __this);
Queue__Uno_Action_Uno_Exception_* Queue__Uno_Action_Uno_Exception___New_1(::uStatic* __this);

struct Queue__Uno_Action_Uno_Exception_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _head;
    int _tail;
    int _size;
    int _version;

    void _ObjInit_1() { Queue__Uno_Action_Uno_Exception____ObjInit_1(this); }
    ::uDelegate* Dequeue() { return Queue__Uno_Action_Uno_Exception___Dequeue(this); }
    ::uDelegate* ElementAt(int index) { return Queue__Uno_Action_Uno_Exception___ElementAt(this, index); }
    void Enqueue(::uDelegate* item) { Queue__Uno_Action_Uno_Exception___Enqueue(this, item); }
    void EnsureCapacity() { Queue__Uno_Action_Uno_Exception___EnsureCapacity(this); }
    int Count() { return Queue__Uno_Action_Uno_Exception___get_Count(this); }
};

}}}


#endif
