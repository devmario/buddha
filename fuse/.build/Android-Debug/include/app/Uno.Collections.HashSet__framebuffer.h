// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_HASH_SET__FRAMEBUFFER_H__
#define __APP_UNO_COLLECTIONS_HASH_SET__FRAMEBUFFER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__framebuffer__bool; } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct HashSet__framebuffer;

struct HashSet__framebuffer__uType : ::uClassType
{
};

HashSet__framebuffer__uType* HashSet__framebuffer__typeof();

void HashSet__framebuffer___ObjInit_1(HashSet__framebuffer* __this);
bool HashSet__framebuffer__Add(HashSet__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item);
bool HashSet__framebuffer__Contains(HashSet__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item);
HashSet__framebuffer* HashSet__framebuffer__New_1(::uStatic* __this);
bool HashSet__framebuffer__Remove(HashSet__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item);

struct HashSet__framebuffer : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__framebuffer__bool*> _map;

    void _ObjInit_1() { HashSet__framebuffer___ObjInit_1(this); }
    bool Add(::app::Uno::Graphics::Framebuffer* item) { return HashSet__framebuffer__Add(this, item); }
    bool Contains(::app::Uno::Graphics::Framebuffer* item) { return HashSet__framebuffer__Contains(this, item); }
    bool Remove(::app::Uno::Graphics::Framebuffer* item) { return HashSet__framebuffer__Remove(this, item); }
};

}}}


#endif
