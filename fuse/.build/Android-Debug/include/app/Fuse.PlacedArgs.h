// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PLACED_ARGS_H__
#define __APP_FUSE_PLACED_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <app/Uno.Float2.h>
#include <Uno.h>

namespace app {
namespace Fuse {

struct PlacedArgs;

struct PlacedArgs__uType : ::app::Uno::EventArgs__uType
{
};

PlacedArgs__uType* PlacedArgs__typeof();

void PlacedArgs___ObjInit_1(PlacedArgs* __this, bool hasPrev, ::app::Uno::Float2 prevPosition, ::app::Uno::Float2 prevSize);
bool PlacedArgs__get_HasPrev(PlacedArgs* __this);
::app::Uno::Float2 PlacedArgs__get_PrevPosition(PlacedArgs* __this);
::app::Uno::Float2 PlacedArgs__get_PrevSize(PlacedArgs* __this);
PlacedArgs* PlacedArgs__New_2(::uStatic* __this, bool hasPrev, ::app::Uno::Float2 prevPosition, ::app::Uno::Float2 prevSize);
void PlacedArgs__set_HasPrev(PlacedArgs* __this, bool value);
void PlacedArgs__set_PrevPosition(PlacedArgs* __this, ::app::Uno::Float2 value);
void PlacedArgs__set_PrevSize(PlacedArgs* __this, ::app::Uno::Float2 value);

struct PlacedArgs : ::app::Uno::EventArgs
{
    bool _HasPrev;
    ::app::Uno::Float2 _PrevPosition;
    ::app::Uno::Float2 _PrevSize;

    void _ObjInit_1(bool hasPrev, ::app::Uno::Float2 prevPosition, ::app::Uno::Float2 prevSize) { PlacedArgs___ObjInit_1(this, hasPrev, prevPosition, prevSize); }
    bool HasPrev() { return PlacedArgs__get_HasPrev(this); }
    ::app::Uno::Float2 PrevPosition() { return PlacedArgs__get_PrevPosition(this); }
    ::app::Uno::Float2 PrevSize() { return PlacedArgs__get_PrevSize(this); }
    void HasPrev(bool value) { PlacedArgs__set_HasPrev(this, value); }
    void PrevPosition(::app::Uno::Float2 value) { PlacedArgs__set_PrevPosition(this, value); }
    void PrevSize(::app::Uno::Float2 value) { PlacedArgs__set_PrevSize(this, value); }
};

}}


#endif
