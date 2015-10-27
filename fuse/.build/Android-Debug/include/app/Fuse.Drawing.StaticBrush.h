// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_STATIC_BRUSH_H__
#define __APP_FUSE_DRAWING_STATIC_BRUSH_H__

#include <app/Fuse.Drawing.Brush.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {

struct StaticBrush;

struct StaticBrush__uType : ::app::Fuse::Drawing::Brush__uType
{
};

StaticBrush__uType* StaticBrush__typeof();

void StaticBrush___ObjInit_1(StaticBrush* __this);

struct StaticBrush : ::app::Fuse::Drawing::Brush
{
    void _ObjInit_1() { StaticBrush___ObjInit_1(this); }
};

}}}


#endif
