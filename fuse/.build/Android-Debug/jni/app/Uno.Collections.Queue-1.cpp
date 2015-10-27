#include <app/Uno.Action__bool.h>
#include <app/Uno.Action__Fuse_Camera_PictureResult.h>
#include <app/Uno.Action__string.h>
#include <app/Uno.Action__Uno_Exception.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Queue__object__.h>
#include <app/Uno.Collections.Queue__Uno_Action_bool_.h>
#include <app/Uno.Collections.Queue__Uno_Action_Fuse_Camera_PictureResult_.h>
#include <app/Uno.Collections.Queue__Uno_Action_string_.h>
#include <app/Uno.Collections.Queue__Uno_Action_Uno_Exception_.h>
#include <app/Uno.Collections.Queue__Uno_Exception.h>
#include <app/Uno.Collections.Queue__Uno_Threading_Promise_bool_.h>
#include <app/Uno.Collections.Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_.h>
#include <app/Uno.Collections.Queue__Uno_Threading_Promise_string_.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.Promise__bool.h>
#include <app/Uno.Threading.Promise__Fuse_Camera_PictureResult.h>
#include <app/Uno.Threading.Promise__string.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__object____uType* Queue__object____typeof()
{
    static ::uStaticStrong<Queue__object____uType*> type;
    if (type != NULL) return type;

    type = (Queue__object____uType*)::uAllocClassType(sizeof(Queue__object____uType), "Uno.Collections.Queue<object[]>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Queue__object__, _data));

    return type;
}

void Queue__object_____ObjInit_1(Queue__object__* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

::uArray* Queue__object____Dequeue(Queue__object__* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::uArray* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::uArray*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uArray*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::uArray* Queue__object____ElementAt(Queue__object__* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uArray*>(__this->_head + index);
}

void Queue__object____Enqueue(Queue__object__* __this, ::uArray* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uArray*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__object____EnsureCapacity(Queue__object__* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::uGetArrayType(::uObject__typeof()), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::uGetArrayType(::uObject__typeof()), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::uArray*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__object____get_Count(Queue__object__* __this)
{
    return __this->_size;
}

Queue__object__* Queue__object____New_1(::uStatic* __this)
{
    Queue__object__* inst = (Queue__object__*)::uAllocObject(sizeof(Queue__object__), Queue__object____typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__Uno_Action_bool___uType* Queue__Uno_Action_bool___typeof()
{
    static ::uStaticStrong<Queue__Uno_Action_bool___uType*> type;
    if (type != NULL) return type;

    type = (Queue__Uno_Action_bool___uType*)::uAllocClassType(sizeof(Queue__Uno_Action_bool___uType), "Uno.Collections.Queue<Uno.Action<bool>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Queue__Uno_Action_bool_, _data));

    return type;
}

void Queue__Uno_Action_bool____ObjInit_1(Queue__Uno_Action_bool_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

::uDelegate* Queue__Uno_Action_bool___Dequeue(Queue__Uno_Action_bool_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::uDelegate* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::uDelegate* Queue__Uno_Action_bool___ElementAt(Queue__Uno_Action_bool_* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head + index);
}

void Queue__Uno_Action_bool___Enqueue(Queue__Uno_Action_bool_* __this, ::uDelegate* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__Uno_Action_bool___EnsureCapacity(Queue__Uno_Action_bool_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Action__bool__typeof(), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::app::Uno::Action__bool__typeof(), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::uDelegate*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__Uno_Action_bool___get_Count(Queue__Uno_Action_bool_* __this)
{
    return __this->_size;
}

Queue__Uno_Action_bool_* Queue__Uno_Action_bool___New_1(::uStatic* __this)
{
    Queue__Uno_Action_bool_* inst = (Queue__Uno_Action_bool_*)::uAllocObject(sizeof(Queue__Uno_Action_bool_), Queue__Uno_Action_bool___typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__Uno_Action_Fuse_Camera_PictureResult___uType* Queue__Uno_Action_Fuse_Camera_PictureResult___typeof()
{
    static ::uStaticStrong<Queue__Uno_Action_Fuse_Camera_PictureResult___uType*> type;
    if (type != NULL) return type;

    type = (Queue__Uno_Action_Fuse_Camera_PictureResult___uType*)::uAllocClassType(sizeof(Queue__Uno_Action_Fuse_Camera_PictureResult___uType), "Uno.Collections.Queue<Uno.Action<Fuse.Camera.PictureResult>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Queue__Uno_Action_Fuse_Camera_PictureResult_, _data));

    return type;
}

void Queue__Uno_Action_Fuse_Camera_PictureResult____ObjInit_1(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

::uDelegate* Queue__Uno_Action_Fuse_Camera_PictureResult___Dequeue(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::uDelegate* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::uDelegate* Queue__Uno_Action_Fuse_Camera_PictureResult___ElementAt(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head + index);
}

void Queue__Uno_Action_Fuse_Camera_PictureResult___Enqueue(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this, ::uDelegate* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__Uno_Action_Fuse_Camera_PictureResult___EnsureCapacity(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Action__Fuse_Camera_PictureResult__typeof(), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::app::Uno::Action__Fuse_Camera_PictureResult__typeof(), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::uDelegate*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__Uno_Action_Fuse_Camera_PictureResult___get_Count(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this)
{
    return __this->_size;
}

Queue__Uno_Action_Fuse_Camera_PictureResult_* Queue__Uno_Action_Fuse_Camera_PictureResult___New_1(::uStatic* __this)
{
    Queue__Uno_Action_Fuse_Camera_PictureResult_* inst = (Queue__Uno_Action_Fuse_Camera_PictureResult_*)::uAllocObject(sizeof(Queue__Uno_Action_Fuse_Camera_PictureResult_), Queue__Uno_Action_Fuse_Camera_PictureResult___typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__Uno_Action_string___uType* Queue__Uno_Action_string___typeof()
{
    static ::uStaticStrong<Queue__Uno_Action_string___uType*> type;
    if (type != NULL) return type;

    type = (Queue__Uno_Action_string___uType*)::uAllocClassType(sizeof(Queue__Uno_Action_string___uType), "Uno.Collections.Queue<Uno.Action<string>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Queue__Uno_Action_string_, _data));

    return type;
}

void Queue__Uno_Action_string____ObjInit_1(Queue__Uno_Action_string_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

::uDelegate* Queue__Uno_Action_string___Dequeue(Queue__Uno_Action_string_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::uDelegate* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::uDelegate* Queue__Uno_Action_string___ElementAt(Queue__Uno_Action_string_* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head + index);
}

void Queue__Uno_Action_string___Enqueue(Queue__Uno_Action_string_* __this, ::uDelegate* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__Uno_Action_string___EnsureCapacity(Queue__Uno_Action_string_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Action__string__typeof(), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::app::Uno::Action__string__typeof(), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::uDelegate*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__Uno_Action_string___get_Count(Queue__Uno_Action_string_* __this)
{
    return __this->_size;
}

Queue__Uno_Action_string_* Queue__Uno_Action_string___New_1(::uStatic* __this)
{
    Queue__Uno_Action_string_* inst = (Queue__Uno_Action_string_*)::uAllocObject(sizeof(Queue__Uno_Action_string_), Queue__Uno_Action_string___typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__Uno_Action_Uno_Exception___uType* Queue__Uno_Action_Uno_Exception___typeof()
{
    static ::uStaticStrong<Queue__Uno_Action_Uno_Exception___uType*> type;
    if (type != NULL) return type;

    type = (Queue__Uno_Action_Uno_Exception___uType*)::uAllocClassType(sizeof(Queue__Uno_Action_Uno_Exception___uType), "Uno.Collections.Queue<Uno.Action<Uno.Exception>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Queue__Uno_Action_Uno_Exception_, _data));

    return type;
}

void Queue__Uno_Action_Uno_Exception____ObjInit_1(Queue__Uno_Action_Uno_Exception_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

::uDelegate* Queue__Uno_Action_Uno_Exception___Dequeue(Queue__Uno_Action_Uno_Exception_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::uDelegate* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::uDelegate* Queue__Uno_Action_Uno_Exception___ElementAt(Queue__Uno_Action_Uno_Exception_* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head + index);
}

void Queue__Uno_Action_Uno_Exception___Enqueue(Queue__Uno_Action_Uno_Exception_* __this, ::uDelegate* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__Uno_Action_Uno_Exception___EnsureCapacity(Queue__Uno_Action_Uno_Exception_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Action__Uno_Exception__typeof(), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::app::Uno::Action__Uno_Exception__typeof(), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::uDelegate*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__Uno_Action_Uno_Exception___get_Count(Queue__Uno_Action_Uno_Exception_* __this)
{
    return __this->_size;
}

Queue__Uno_Action_Uno_Exception_* Queue__Uno_Action_Uno_Exception___New_1(::uStatic* __this)
{
    Queue__Uno_Action_Uno_Exception_* inst = (Queue__Uno_Action_Uno_Exception_*)::uAllocObject(sizeof(Queue__Uno_Action_Uno_Exception_), Queue__Uno_Action_Uno_Exception___typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__Uno_Exception__uType* Queue__Uno_Exception__typeof()
{
    static ::uStaticStrong<Queue__Uno_Exception__uType*> type;
    if (type != NULL) return type;

    type = (Queue__Uno_Exception__uType*)::uAllocClassType(sizeof(Queue__Uno_Exception__uType), "Uno.Collections.Queue<Uno.Exception>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Queue__Uno_Exception, _data));

    return type;
}

void Queue__Uno_Exception___ObjInit_1(Queue__Uno_Exception* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

::app::Uno::Exception* Queue__Uno_Exception__Dequeue(Queue__Uno_Exception* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::app::Uno::Exception* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Exception*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Exception*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::app::Uno::Exception* Queue__Uno_Exception__ElementAt(Queue__Uno_Exception* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Exception*>(__this->_head + index);
}

void Queue__Uno_Exception__Enqueue(Queue__Uno_Exception* __this, ::app::Uno::Exception* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Exception*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__Uno_Exception__EnsureCapacity(Queue__Uno_Exception* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Exception__typeof(), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::app::Uno::Exception__typeof(), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::app::Uno::Exception*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__Uno_Exception__get_Count(Queue__Uno_Exception* __this)
{
    return __this->_size;
}

Queue__Uno_Exception* Queue__Uno_Exception__New_1(::uStatic* __this)
{
    Queue__Uno_Exception* inst = (Queue__Uno_Exception*)::uAllocObject(sizeof(Queue__Uno_Exception), Queue__Uno_Exception__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__Uno_Threading_Promise_bool___uType* Queue__Uno_Threading_Promise_bool___typeof()
{
    static ::uStaticStrong<Queue__Uno_Threading_Promise_bool___uType*> type;
    if (type != NULL) return type;

    type = (Queue__Uno_Threading_Promise_bool___uType*)::uAllocClassType(sizeof(Queue__Uno_Threading_Promise_bool___uType), "Uno.Collections.Queue<Uno.Threading.Promise<bool>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Queue__Uno_Threading_Promise_bool_, _data));

    return type;
}

void Queue__Uno_Threading_Promise_bool____ObjInit_1(Queue__Uno_Threading_Promise_bool_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

::app::Uno::Threading::Promise__bool* Queue__Uno_Threading_Promise_bool___Dequeue(Queue__Uno_Threading_Promise_bool_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::app::Uno::Threading::Promise__bool* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Threading::Promise__bool*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Threading::Promise__bool*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::app::Uno::Threading::Promise__bool* Queue__Uno_Threading_Promise_bool___ElementAt(Queue__Uno_Threading_Promise_bool_* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Threading::Promise__bool*>(__this->_head + index);
}

void Queue__Uno_Threading_Promise_bool___Enqueue(Queue__Uno_Threading_Promise_bool_* __this, ::app::Uno::Threading::Promise__bool* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Threading::Promise__bool*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__Uno_Threading_Promise_bool___EnsureCapacity(Queue__Uno_Threading_Promise_bool_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Threading::Promise__bool__typeof(), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::app::Uno::Threading::Promise__bool__typeof(), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::app::Uno::Threading::Promise__bool*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__Uno_Threading_Promise_bool___get_Count(Queue__Uno_Threading_Promise_bool_* __this)
{
    return __this->_size;
}

Queue__Uno_Threading_Promise_bool_* Queue__Uno_Threading_Promise_bool___New_1(::uStatic* __this)
{
    Queue__Uno_Threading_Promise_bool_* inst = (Queue__Uno_Threading_Promise_bool_*)::uAllocObject(sizeof(Queue__Uno_Threading_Promise_bool_), Queue__Uno_Threading_Promise_bool___typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___uType* Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___typeof()
{
    static ::uStaticStrong<Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___uType*> type;
    if (type != NULL) return type;

    type = (Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___uType*)::uAllocClassType(sizeof(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___uType), "Uno.Collections.Queue<Uno.Threading.Promise<Fuse.Camera.PictureResult>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_, _data));

    return type;
}

void Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult____ObjInit_1(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___Dequeue(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___ElementAt(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(__this->_head + index);
}

void Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___Enqueue(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___EnsureCapacity(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Threading::Promise__Fuse_Camera_PictureResult__typeof(), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::app::Uno::Threading::Promise__Fuse_Camera_PictureResult__typeof(), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___get_Count(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this)
{
    return __this->_size;
}

Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___New_1(::uStatic* __this)
{
    Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* inst = (Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*)::uAllocObject(sizeof(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_), Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__Uno_Threading_Promise_string___uType* Queue__Uno_Threading_Promise_string___typeof()
{
    static ::uStaticStrong<Queue__Uno_Threading_Promise_string___uType*> type;
    if (type != NULL) return type;

    type = (Queue__Uno_Threading_Promise_string___uType*)::uAllocClassType(sizeof(Queue__Uno_Threading_Promise_string___uType), "Uno.Collections.Queue<Uno.Threading.Promise<string>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Queue__Uno_Threading_Promise_string_, _data));

    return type;
}

void Queue__Uno_Threading_Promise_string____ObjInit_1(Queue__Uno_Threading_Promise_string_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

::app::Uno::Threading::Promise__string* Queue__Uno_Threading_Promise_string___Dequeue(Queue__Uno_Threading_Promise_string_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::app::Uno::Threading::Promise__string* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Threading::Promise__string*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Threading::Promise__string*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::app::Uno::Threading::Promise__string* Queue__Uno_Threading_Promise_string___ElementAt(Queue__Uno_Threading_Promise_string_* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Threading::Promise__string*>(__this->_head + index);
}

void Queue__Uno_Threading_Promise_string___Enqueue(Queue__Uno_Threading_Promise_string_* __this, ::app::Uno::Threading::Promise__string* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Threading::Promise__string*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__Uno_Threading_Promise_string___EnsureCapacity(Queue__Uno_Threading_Promise_string_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Threading::Promise__string__typeof(), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::app::Uno::Threading::Promise__string__typeof(), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::app::Uno::Threading::Promise__string*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__Uno_Threading_Promise_string___get_Count(Queue__Uno_Threading_Promise_string_* __this)
{
    return __this->_size;
}

Queue__Uno_Threading_Promise_string_* Queue__Uno_Threading_Promise_string___New_1(::uStatic* __this)
{
    Queue__Uno_Threading_Promise_string_* inst = (Queue__Uno_Threading_Promise_string_*)::uAllocObject(sizeof(Queue__Uno_Threading_Promise_string_), Queue__Uno_Threading_Promise_string___typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
