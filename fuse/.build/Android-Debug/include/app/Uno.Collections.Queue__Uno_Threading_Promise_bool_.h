// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE__UNO_THREADING_PROMISE_BOOL__H__
#define __APP_UNO_COLLECTIONS_QUEUE__UNO_THREADING_PROMISE_BOOL__H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Threading { struct Promise__bool; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Queue__Uno_Threading_Promise_bool_;

struct Queue__Uno_Threading_Promise_bool___uType : ::uClassType
{
};

Queue__Uno_Threading_Promise_bool___uType* Queue__Uno_Threading_Promise_bool___typeof();

void Queue__Uno_Threading_Promise_bool____ObjInit_1(Queue__Uno_Threading_Promise_bool_* __this);
::app::Uno::Threading::Promise__bool* Queue__Uno_Threading_Promise_bool___Dequeue(Queue__Uno_Threading_Promise_bool_* __this);
::app::Uno::Threading::Promise__bool* Queue__Uno_Threading_Promise_bool___ElementAt(Queue__Uno_Threading_Promise_bool_* __this, int index);
void Queue__Uno_Threading_Promise_bool___Enqueue(Queue__Uno_Threading_Promise_bool_* __this, ::app::Uno::Threading::Promise__bool* item);
void Queue__Uno_Threading_Promise_bool___EnsureCapacity(Queue__Uno_Threading_Promise_bool_* __this);
int Queue__Uno_Threading_Promise_bool___get_Count(Queue__Uno_Threading_Promise_bool_* __this);
Queue__Uno_Threading_Promise_bool_* Queue__Uno_Threading_Promise_bool___New_1(::uStatic* __this);

struct Queue__Uno_Threading_Promise_bool_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _head;
    int _tail;
    int _size;
    int _version;

    void _ObjInit_1() { Queue__Uno_Threading_Promise_bool____ObjInit_1(this); }
    ::app::Uno::Threading::Promise__bool* Dequeue() { return Queue__Uno_Threading_Promise_bool___Dequeue(this); }
    ::app::Uno::Threading::Promise__bool* ElementAt(int index) { return Queue__Uno_Threading_Promise_bool___ElementAt(this, index); }
    void Enqueue(::app::Uno::Threading::Promise__bool* item) { Queue__Uno_Threading_Promise_bool___Enqueue(this, item); }
    void EnsureCapacity() { Queue__Uno_Threading_Promise_bool___EnsureCapacity(this); }
    int Count() { return Queue__Uno_Threading_Promise_bool___get_Count(this); }
};

}}}


#endif
