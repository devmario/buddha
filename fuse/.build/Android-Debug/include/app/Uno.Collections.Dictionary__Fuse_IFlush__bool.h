// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_I_FLUSH__BOOL_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_I_FLUSH__BOOL_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_IFlush__bool.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Fuse_IFlush__bool;

struct Dictionary__Fuse_IFlush__bool__uType : ::uClassType
{
};

Dictionary__Fuse_IFlush__bool__uType* Dictionary__Fuse_IFlush__bool__typeof();

void Dictionary__Fuse_IFlush__bool__Clear(Dictionary__Fuse_IFlush__bool* __this);

struct Dictionary__Fuse_IFlush__bool : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void Clear() { Dictionary__Fuse_IFlush__bool__Clear(this); }
};

}}}


#endif
