// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_DRAWING_STROKE__FUSE_DRAWING_P_F183901B_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_DRAWING_STROKE__FUSE_DRAWING_P_F183901B_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_D-931b1144.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PolygonFiller; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller;

struct Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType : ::uClassType
{
};

Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof();

void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit_1(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Add(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value);
void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Clear(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
::app::Fuse::Drawing::PolygonFiller* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Item(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key);
::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Values(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__GetEnumerator(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(::uStatic* __this);
void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Rehash(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
bool Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Remove(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key);
void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__set_Item(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value);
bool Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__TryGetValue(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller** value);

struct Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit_1(this); }
    void Add(::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value) { Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Add(this, key, value); }
    void Clear() { Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Clear(this); }
    ::app::Fuse::Drawing::PolygonFiller* Item(::app::Fuse::Drawing::Stroke* key) { return Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* Values() { return Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller GetEnumerator();
    void Rehash() { Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Rehash(this); }
    bool Remove(::app::Fuse::Drawing::Stroke* key) { return Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Remove(this, key); }
    void Item(::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value) { Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__set_Item(this, key, value); }
    bool TryGetValue(::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller** value) { return Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fu-8962d4aa.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller::GetEnumerator() { return Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__GetEnumerator(this); }

}}}


#endif
