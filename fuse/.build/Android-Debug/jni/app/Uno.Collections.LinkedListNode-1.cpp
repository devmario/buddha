#include <app/Fuse.Elements.ElementAtlasFramebufferPoolEntry.h>
#include <app/Uno.Collections.LinkedList__Fuse_Elements_ElementAtlasFramebuff-df9f456a.h>
#include <app/Uno.Collections.LinkedListNode__Fuse_Elements_ElementAtlasFrame-daa4478c.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType* LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof()
{
    static ::uStaticStrong<LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType*> type;
    if (type != NULL) return type;

    type = (LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType*)::uAllocClassType(sizeof(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType), "Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry>", false, 0, 4, 0);

    type->SetStrongRefs(
        "_List", offsetof(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry, _List),
        "_Next", offsetof(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry, _Next),
        "_Previous", offsetof(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry, _Previous),
        "_Value", offsetof(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry, _Value));

    return type;
}

void LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry___ObjInit(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* value)
{
    __this->Value(value);
}

::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_List(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this)
{
    return __this->_List;
}

LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_Next(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this)
{
    return __this->_Next;
}

LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_Previous(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this)
{
    return __this->_Previous;
}

::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_Value(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this)
{
    return __this->_Value;
}

LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__New_1(::uStatic* __this, ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* value)
{
    LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* inst = (LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*)::uAllocObject(sizeof(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry), LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof());
    inst->_ObjInit(value);
    return inst;
}

void LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_List(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* value)
{
    __this->_List = value;
}

void LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_Next(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* value)
{
    __this->_Next = value;
}

void LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_Previous(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* value)
{
    __this->_Previous = value;
}

void LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_Value(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* value)
{
    __this->_Value = value;
}

}}}
