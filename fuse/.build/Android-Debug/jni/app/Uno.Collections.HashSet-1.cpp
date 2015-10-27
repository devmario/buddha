#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__framebuffer__bool.h>
#include <app/Uno.Collections.Dictionary__Fuse_IFlush__bool.h>
#include <app/Uno.Collections.Dictionary__Fuse_Node__bool.h>
#include <app/Uno.Collections.HashSet__framebuffer.h>
#include <app/Uno.Collections.HashSet__Fuse_IFlush.h>
#include <app/Uno.Collections.HashSet__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Node.h>
#include <app/Uno.Graphics.Framebuffer.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashSet__framebuffer__uType* HashSet__framebuffer__typeof()
{
    static ::uStaticStrong<HashSet__framebuffer__uType*> type;
    if (type != NULL) return type;

    type = (HashSet__framebuffer__uType*)::uAllocClassType(sizeof(HashSet__framebuffer__uType), "Uno.Collections.HashSet<framebuffer>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_map", offsetof(HashSet__framebuffer, _map));

    return type;
}

void HashSet__framebuffer___ObjInit_1(HashSet__framebuffer* __this)
{
    __this->_map = ::app::Uno::Collections::Dictionary__framebuffer__bool__New_1(NULL);
}

bool HashSet__framebuffer__Add(HashSet__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item)
{
    bool result = ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_map)->ContainsKey(item);
    ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_map)->Item(item, true);
    return result;
}

bool HashSet__framebuffer__Contains(HashSet__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_map)->ContainsKey(item);
}

HashSet__framebuffer* HashSet__framebuffer__New_1(::uStatic* __this)
{
    HashSet__framebuffer* inst = (HashSet__framebuffer*)::uAllocObject(sizeof(HashSet__framebuffer), HashSet__framebuffer__typeof());
    inst->_ObjInit_1();
    return inst;
}

bool HashSet__framebuffer__Remove(HashSet__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_map)->Remove(item);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashSet__Fuse_IFlush__uType* HashSet__Fuse_IFlush__typeof()
{
    static ::uStaticStrong<HashSet__Fuse_IFlush__uType*> type;
    if (type != NULL) return type;

    type = (HashSet__Fuse_IFlush__uType*)::uAllocClassType(sizeof(HashSet__Fuse_IFlush__uType), "Uno.Collections.HashSet<Fuse.IFlush>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_map", offsetof(HashSet__Fuse_IFlush, _map));

    return type;
}

void HashSet__Fuse_IFlush__Clear(HashSet__Fuse_IFlush* __this)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_map)->Clear();
}

::app::Uno::Collections::HashSet1_Enumerator__Fuse_IFlush HashSet__Fuse_IFlush__GetEnumerator(HashSet__Fuse_IFlush* __this)
{
    return ::app::Uno::Collections::HashSet1_Enumerator__Fuse_IFlush__New_1(NULL, __this->_map);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashSet__Fuse_Node__uType* HashSet__Fuse_Node__typeof()
{
    static ::uStaticStrong<HashSet__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (HashSet__Fuse_Node__uType*)::uAllocClassType(sizeof(HashSet__Fuse_Node__uType), "Uno.Collections.HashSet<Fuse.Node>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))HashSet__Fuse_Node__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Node__typeof(), offsetof(HashSet__Fuse_Node__uType, __interface_0));

    type->SetStrongRefs(
        "_map", offsetof(HashSet__Fuse_Node, _map));

    return type;
}

::uObject* HashSet__Fuse_Node__GetEnumerator_boxed(HashSet__Fuse_Node* __this)
{
    return ::uBox(::app::Uno::Collections::HashSet1_Enumerator__Fuse_Node__typeof(), __this->GetEnumerator());
}

void HashSet__Fuse_Node___ObjInit_1(HashSet__Fuse_Node* __this)
{
    __this->_map = ::app::Uno::Collections::Dictionary__Fuse_Node__bool__New_1(NULL);
}

bool HashSet__Fuse_Node__Add(HashSet__Fuse_Node* __this, ::app::Fuse::Node* item)
{
    bool result = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_map)->ContainsKey(item);
    ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_map)->Item(item, true);
    return result;
}

bool HashSet__Fuse_Node__Contains(HashSet__Fuse_Node* __this, ::app::Fuse::Node* item)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_map)->ContainsKey(item);
}

::app::Uno::Collections::HashSet1_Enumerator__Fuse_Node HashSet__Fuse_Node__GetEnumerator(HashSet__Fuse_Node* __this)
{
    return ::app::Uno::Collections::HashSet1_Enumerator__Fuse_Node__New_1(NULL, __this->_map);
}

HashSet__Fuse_Node* HashSet__Fuse_Node__New_1(::uStatic* __this)
{
    HashSet__Fuse_Node* inst = (HashSet__Fuse_Node*)::uAllocObject(sizeof(HashSet__Fuse_Node), HashSet__Fuse_Node__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
