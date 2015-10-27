// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_HASH_SET__FUSE_NODE_H__
#define __APP_UNO_COLLECTIONS_HASH_SET__FUSE_NODE_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Node.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Node__bool; } } }
namespace app { namespace Uno { namespace Collections { struct HashSet1_Enumerator__Fuse_Node; } } }

namespace app {
namespace Uno {
namespace Collections {

struct HashSet__Fuse_Node;

struct HashSet__Fuse_Node__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Node __interface_0;
};

HashSet__Fuse_Node__uType* HashSet__Fuse_Node__typeof();

::uObject* HashSet__Fuse_Node__GetEnumerator_boxed(HashSet__Fuse_Node* __this);
void HashSet__Fuse_Node___ObjInit_1(HashSet__Fuse_Node* __this);
bool HashSet__Fuse_Node__Add(HashSet__Fuse_Node* __this, ::app::Fuse::Node* item);
bool HashSet__Fuse_Node__Contains(HashSet__Fuse_Node* __this, ::app::Fuse::Node* item);
::app::Uno::Collections::HashSet1_Enumerator__Fuse_Node HashSet__Fuse_Node__GetEnumerator(HashSet__Fuse_Node* __this);
HashSet__Fuse_Node* HashSet__Fuse_Node__New_1(::uStatic* __this);

struct HashSet__Fuse_Node : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*> _map;

    ::uObject* GetEnumerator_boxed() { return HashSet__Fuse_Node__GetEnumerator_boxed(this); }
    void _ObjInit_1() { HashSet__Fuse_Node___ObjInit_1(this); }
    bool Add(::app::Fuse::Node* item) { return HashSet__Fuse_Node__Add(this, item); }
    bool Contains(::app::Fuse::Node* item) { return HashSet__Fuse_Node__Contains(this, item); }
    ::app::Uno::Collections::HashSet1_Enumerator__Fuse_Node GetEnumerator();
};

}}}

#include <app/Uno.Collections.HashSet1_Enumerator__Fuse_Node.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::HashSet1_Enumerator__Fuse_Node HashSet__Fuse_Node::GetEnumerator() { return HashSet__Fuse_Node__GetEnumerator(this); }

}}}


#endif
