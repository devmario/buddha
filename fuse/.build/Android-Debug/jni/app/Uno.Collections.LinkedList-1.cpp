#include <app/Fuse.Elements.ElementAtlasFramebufferPoolEntry.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.LinkedList__Fuse_Elements_ElementAtlasFramebuff-df9f456a.h>
#include <app/Uno.Collections.LinkedListNode__Fuse_Elements_ElementAtlasFrame-daa4478c.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType* LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof()
{
    static ::uStaticStrong<LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType*> type;
    if (type != NULL) return type;

    type = (LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType*)::uAllocClassType(sizeof(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType), "Uno.Collections.LinkedList<Fuse.Elements.ElementAtlasFramebufferPoolEntry>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_First", offsetof(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry, _First),
        "_Last", offsetof(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry, _Last));

    return type;
}

void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry___ObjInit(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this)
{
}

void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__AddFirst_1(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* node)
{
    if (node == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("node")));
    }

    if (::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->List() != NULL)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("The LinkedList node already belongs to a LinkedList.")));
    }

    if (__this->Last() == NULL)
    {
        __this->First((__this->Last(node), node));
    }
    else
    {
        ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(__this->First())->Previous(node);
        ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->Next(__this->First());
        node->Previous(NULL);
        __this->First(node);
    }

    if (::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->List() != __this)
    {
        ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->List(__this);
        __this->Count(__this->Count() + 1);
    }
}

::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__AddLast(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* value)
{
    ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* node = ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__New_1(NULL, value);
    __this->AddLast_1(node);
    return node;
}

void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__AddLast_1(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* node)
{
    if (node == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("node")));
    }

    if (::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->List() != NULL)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("The LinkedList node already belongs to a LinkedList.")));
    }

    if (__this->Last() == NULL)
    {
        __this->First((__this->Last(node), node));
    }
    else
    {
        ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(__this->Last())->Next(node);
        ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->Next(NULL);
        node->Previous(__this->Last());
        __this->Last(node);
    }

    if (::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->List() != __this)
    {
        ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->List(__this);
        __this->Count(__this->Count() + 1);
    }
}

void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Clear(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this)
{
    ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* curr = __this->First();

    while (curr != NULL)
    {
        ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* next = ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(curr)->Next();
        curr->Previous(NULL);
        curr->Next(NULL);
        curr->List(NULL);
        curr = next;
    }

    __this->First((__this->Last(NULL), (::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*)NULL));
    __this->Count(0);
}

int LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_Count(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this)
{
    return __this->_Count;
}

::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_First(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this)
{
    return __this->_First;
}

::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_Last(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this)
{
    return __this->_Last;
}

LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__New_1(::uStatic* __this)
{
    LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* inst = (LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry*)::uAllocObject(sizeof(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry), LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof());
    inst->_ObjInit();
    return inst;
}

void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Remove_1(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* node)
{
    if (node == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("node")));
    }

    if (::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->List() != __this)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("The LinkedList node does not belong to current LinkedList.")));
    }

    if (::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->Previous() != NULL)
    {
        ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->Previous())->Next(::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->Next());
    }

    if (node->Next() != NULL)
    {
        ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node->Next())->Previous(node->Previous());
    }

    if (node == __this->First())
    {
        __this->First(node->Next());
    }

    if (node == __this->Last())
    {
        __this->Last(node->Previous());
    }

    node->List(NULL);
    __this->Count(__this->Count() - 1);
}

void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_Count(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, int value)
{
    __this->_Count = value;
}

void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_First(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* value)
{
    __this->_First = value;
}

void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_Last(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* value)
{
    __this->_Last = value;
}

}}}
