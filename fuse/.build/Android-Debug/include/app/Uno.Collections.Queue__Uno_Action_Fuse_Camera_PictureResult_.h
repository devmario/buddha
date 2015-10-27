// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE__UNO_ACTION_FUSE_CAMERA_PICTURE_RESULT__H__
#define __APP_UNO_COLLECTIONS_QUEUE__UNO_ACTION_FUSE_CAMERA_PICTURE_RESULT__H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Queue__Uno_Action_Fuse_Camera_PictureResult_;

struct Queue__Uno_Action_Fuse_Camera_PictureResult___uType : ::uClassType
{
};

Queue__Uno_Action_Fuse_Camera_PictureResult___uType* Queue__Uno_Action_Fuse_Camera_PictureResult___typeof();

void Queue__Uno_Action_Fuse_Camera_PictureResult____ObjInit_1(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this);
::uDelegate* Queue__Uno_Action_Fuse_Camera_PictureResult___Dequeue(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this);
::uDelegate* Queue__Uno_Action_Fuse_Camera_PictureResult___ElementAt(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this, int index);
void Queue__Uno_Action_Fuse_Camera_PictureResult___Enqueue(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this, ::uDelegate* item);
void Queue__Uno_Action_Fuse_Camera_PictureResult___EnsureCapacity(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this);
int Queue__Uno_Action_Fuse_Camera_PictureResult___get_Count(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this);
Queue__Uno_Action_Fuse_Camera_PictureResult_* Queue__Uno_Action_Fuse_Camera_PictureResult___New_1(::uStatic* __this);

struct Queue__Uno_Action_Fuse_Camera_PictureResult_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _head;
    int _tail;
    int _size;
    int _version;

    void _ObjInit_1() { Queue__Uno_Action_Fuse_Camera_PictureResult____ObjInit_1(this); }
    ::uDelegate* Dequeue() { return Queue__Uno_Action_Fuse_Camera_PictureResult___Dequeue(this); }
    ::uDelegate* ElementAt(int index) { return Queue__Uno_Action_Fuse_Camera_PictureResult___ElementAt(this, index); }
    void Enqueue(::uDelegate* item) { Queue__Uno_Action_Fuse_Camera_PictureResult___Enqueue(this, item); }
    void EnsureCapacity() { Queue__Uno_Action_Fuse_Camera_PictureResult___EnsureCapacity(this); }
    int Count() { return Queue__Uno_Action_Fuse_Camera_PictureResult___get_Count(this); }
};

}}}


#endif
