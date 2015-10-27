// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_FONT__FUSE_CONTROLS_INTERNAL_D_893D2C20_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_FONT__FUSE_CONTROLS_INTERNAL_D_893D2C20_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Font__Fuse_Controls_In-da4f6a89.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct DefaultTextRenderer; } } } }
namespace app { namespace Fuse { struct Font; } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer;

struct Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType : ::uClassType
{
};

Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType* Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof();

void Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer___ObjInit_1(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
void Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Add(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Fuse::Font* key, ::app::Fuse::Controls::Internal::DefaultTextRenderer* value);
Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__New_1(::uStatic* __this);
void Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Rehash(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
bool Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__TryGetValue(Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Fuse::Font* key, ::app::Fuse::Controls::Internal::DefaultTextRenderer** value);

struct Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer___ObjInit_1(this); }
    void Add(::app::Fuse::Font* key, ::app::Fuse::Controls::Internal::DefaultTextRenderer* value) { Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Add(this, key, value); }
    void Rehash() { Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Rehash(this); }
    bool TryGetValue(::app::Fuse::Font* key, ::app::Fuse::Controls::Internal::DefaultTextRenderer** value) { return Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__TryGetValue(this, key, value); }
};

}}}


#endif
