// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE__OBJECT___H__
#define __APP_UNO_COLLECTIONS_QUEUE__OBJECT___H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Queue__object__;

struct Queue__object____uType : ::uClassType
{
};

Queue__object____uType* Queue__object____typeof();

void Queue__object_____ObjInit_1(Queue__object__* __this);
::uArray* Queue__object____Dequeue(Queue__object__* __this);
::uArray* Queue__object____ElementAt(Queue__object__* __this, int index);
void Queue__object____Enqueue(Queue__object__* __this, ::uArray* item);
void Queue__object____EnsureCapacity(Queue__object__* __this);
int Queue__object____get_Count(Queue__object__* __this);
Queue__object__* Queue__object____New_1(::uStatic* __this);

struct Queue__object__ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _head;
    int _tail;
    int _size;
    int _version;

    void _ObjInit_1() { Queue__object_____ObjInit_1(this); }
    ::uArray* Dequeue() { return Queue__object____Dequeue(this); }
    ::uArray* ElementAt(int index) { return Queue__object____ElementAt(this, index); }
    void Enqueue(::uArray* item) { Queue__object____Enqueue(this, item); }
    void EnsureCapacity() { Queue__object____EnsureCapacity(this); }
    int Count() { return Queue__object____get_Count(this); }
};

}}}


#endif
