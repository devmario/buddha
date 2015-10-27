// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE__UNO_EXCEPTION_H__
#define __APP_UNO_COLLECTIONS_QUEUE__UNO_EXCEPTION_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Collections {

struct Queue__Uno_Exception;

struct Queue__Uno_Exception__uType : ::uClassType
{
};

Queue__Uno_Exception__uType* Queue__Uno_Exception__typeof();

void Queue__Uno_Exception___ObjInit_1(Queue__Uno_Exception* __this);
::app::Uno::Exception* Queue__Uno_Exception__Dequeue(Queue__Uno_Exception* __this);
::app::Uno::Exception* Queue__Uno_Exception__ElementAt(Queue__Uno_Exception* __this, int index);
void Queue__Uno_Exception__Enqueue(Queue__Uno_Exception* __this, ::app::Uno::Exception* item);
void Queue__Uno_Exception__EnsureCapacity(Queue__Uno_Exception* __this);
int Queue__Uno_Exception__get_Count(Queue__Uno_Exception* __this);
Queue__Uno_Exception* Queue__Uno_Exception__New_1(::uStatic* __this);

struct Queue__Uno_Exception : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _head;
    int _tail;
    int _size;
    int _version;

    void _ObjInit_1() { Queue__Uno_Exception___ObjInit_1(this); }
    ::app::Uno::Exception* Dequeue() { return Queue__Uno_Exception__Dequeue(this); }
    ::app::Uno::Exception* ElementAt(int index) { return Queue__Uno_Exception__ElementAt(this, index); }
    void Enqueue(::app::Uno::Exception* item) { Queue__Uno_Exception__Enqueue(this, item); }
    void EnsureCapacity() { Queue__Uno_Exception__EnsureCapacity(this); }
    int Count() { return Queue__Uno_Exception__get_Count(this); }
};

}}}


#endif
