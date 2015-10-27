// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FRAMEBUFFER__INT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FRAMEBUFFER__INT_H__

#include <app/Uno.Collections.Dictionary2_Bucket__framebuffer__int.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__framebuffer__int;

struct Dictionary__framebuffer__int__uType : ::uClassType
{
};

Dictionary__framebuffer__int__uType* Dictionary__framebuffer__int__typeof();

void Dictionary__framebuffer__int___ObjInit_1(Dictionary__framebuffer__int* __this);
void Dictionary__framebuffer__int__Add(Dictionary__framebuffer__int* __this, ::app::Uno::Graphics::Framebuffer* key, int value);
int Dictionary__framebuffer__int__get_Item(Dictionary__framebuffer__int* __this, ::app::Uno::Graphics::Framebuffer* key);
Dictionary__framebuffer__int* Dictionary__framebuffer__int__New_1(::uStatic* __this);
void Dictionary__framebuffer__int__Rehash(Dictionary__framebuffer__int* __this);
bool Dictionary__framebuffer__int__Remove(Dictionary__framebuffer__int* __this, ::app::Uno::Graphics::Framebuffer* key);
void Dictionary__framebuffer__int__set_Item(Dictionary__framebuffer__int* __this, ::app::Uno::Graphics::Framebuffer* key, int value);
bool Dictionary__framebuffer__int__TryGetValue(Dictionary__framebuffer__int* __this, ::app::Uno::Graphics::Framebuffer* key, int* value);

struct Dictionary__framebuffer__int : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__framebuffer__int___ObjInit_1(this); }
    void Add(::app::Uno::Graphics::Framebuffer* key, int value) { Dictionary__framebuffer__int__Add(this, key, value); }
    int Item(::app::Uno::Graphics::Framebuffer* key) { return Dictionary__framebuffer__int__get_Item(this, key); }
    void Rehash() { Dictionary__framebuffer__int__Rehash(this); }
    bool Remove(::app::Uno::Graphics::Framebuffer* key) { return Dictionary__framebuffer__int__Remove(this, key); }
    void Item(::app::Uno::Graphics::Framebuffer* key, int value) { Dictionary__framebuffer__int__set_Item(this, key, value); }
    bool TryGetValue(::app::Uno::Graphics::Framebuffer* key, int* value) { return Dictionary__framebuffer__int__TryGetValue(this, key, value); }
};

}}}


#endif
