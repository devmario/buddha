// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE__UNO_ACTION_STRING__H__
#define __APP_UNO_COLLECTIONS_QUEUE__UNO_ACTION_STRING__H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Queue__Uno_Action_string_;

struct Queue__Uno_Action_string___uType : ::uClassType
{
};

Queue__Uno_Action_string___uType* Queue__Uno_Action_string___typeof();

void Queue__Uno_Action_string____ObjInit_1(Queue__Uno_Action_string_* __this);
::uDelegate* Queue__Uno_Action_string___Dequeue(Queue__Uno_Action_string_* __this);
::uDelegate* Queue__Uno_Action_string___ElementAt(Queue__Uno_Action_string_* __this, int index);
void Queue__Uno_Action_string___Enqueue(Queue__Uno_Action_string_* __this, ::uDelegate* item);
void Queue__Uno_Action_string___EnsureCapacity(Queue__Uno_Action_string_* __this);
int Queue__Uno_Action_string___get_Count(Queue__Uno_Action_string_* __this);
Queue__Uno_Action_string_* Queue__Uno_Action_string___New_1(::uStatic* __this);

struct Queue__Uno_Action_string_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _head;
    int _tail;
    int _size;
    int _version;

    void _ObjInit_1() { Queue__Uno_Action_string____ObjInit_1(this); }
    ::uDelegate* Dequeue() { return Queue__Uno_Action_string___Dequeue(this); }
    ::uDelegate* ElementAt(int index) { return Queue__Uno_Action_string___ElementAt(this, index); }
    void Enqueue(::uDelegate* item) { Queue__Uno_Action_string___Enqueue(this, item); }
    void EnsureCapacity() { Queue__Uno_Action_string___EnsureCapacity(this); }
    int Count() { return Queue__Uno_Action_string___get_Count(this); }
};

}}}


#endif
