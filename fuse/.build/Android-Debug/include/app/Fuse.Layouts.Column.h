// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/Layouts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAYOUTS_COLUMN_H__
#define __APP_FUSE_LAYOUTS_COLUMN_H__

#include <app/Fuse.Layouts.DefinitionBase.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Layouts {

struct Column;

struct Column__uType : ::app::Fuse::Layouts::DefinitionBase__uType
{
};

Column__uType* Column__typeof();

void Column___ObjInit_1(Column* __this, float width, int metric);
void Column___ObjInit_2(Column* __this);
Column* Column__CloneDef(Column* __this);
float Column__get_ActualWidth(Column* __this);
float Column__get_Width(Column* __this);
int Column__get_WidthMetric(Column* __this);
Column* Column__New_1(::uStatic* __this);
Column* Column__New_2(::uStatic* __this, float width, int metric);
void Column__Parse(::uStatic* __this, ::uString* data, ::uObject* output);
::uString* Column__Serialize(::uStatic* __this, ::uObject* columns);
::uString* Column__Serialize_1(Column* __this);
void Column__set_ActualWidth(Column* __this, float value);
void Column__set_Width(Column* __this, float value);
void Column__set_WidthMetric(Column* __this, int value);

struct Column : ::app::Fuse::Layouts::DefinitionBase
{
    int _widthMetric;
    float _width;
    float _actualWidth;

    void _ObjInit_1(float width, int metric) { Column___ObjInit_1(this, width, metric); }
    void _ObjInit_2() { Column___ObjInit_2(this); }
    Column* CloneDef() { return Column__CloneDef(this); }
    float ActualWidth() { return Column__get_ActualWidth(this); }
    float Width() { return Column__get_Width(this); }
    int WidthMetric() { return Column__get_WidthMetric(this); }
    ::uString* Serialize_1() { return Column__Serialize_1(this); }
    void ActualWidth(float value) { Column__set_ActualWidth(this, value); }
    void Width(float value) { Column__set_Width(this, value); }
    void WidthMetric(int value) { Column__set_WidthMetric(this, value); }
};

}}}


#endif
