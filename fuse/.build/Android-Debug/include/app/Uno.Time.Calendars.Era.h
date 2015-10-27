// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Calendars/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_CALENDARS_ERA_H__
#define __APP_UNO_TIME_CALENDARS_ERA_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Time {
namespace Calendars {

struct Era;

extern ::uStaticStrong< Era*> Era__AnnoHegirae;
extern ::uStaticStrong< Era*> Era__AnnoMartyrum;
extern ::uStaticStrong< Era*> Era__AnnoMundi;
extern ::uStaticStrong< Era*> Era__AnnoPersico;
extern ::uStaticStrong< Era*> Era__BeforeCommon;
extern ::uStaticStrong< Era*> Era__Common;

struct Era__uType : ::uClassType
{
};

Era__uType* Era__typeof();

void Era___ObjInit(Era* __this, ::uString* name);
void Era___TypeInit(::uStatic* __this);
Era* Era__New_1(::uStatic* __this, ::uString* name);
::uString* Era__ToString(Era* __this);

struct Era : ::uObject
{
    ::uStrong< ::uString*> _name;

    void _ObjInit(::uString* name) { Era___ObjInit(this, name); }
};

}}}}


#endif
