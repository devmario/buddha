// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_I_PATTERN_PART__UNO_TIME_TEXT_OFFSET_PATTERN_OFFSET_BUCKET_H__
#define __APP_UNO_TIME_TEXT_I_PATTERN_PART__UNO_TIME_TEXT_OFFSET_PATTERN_OFFSET_BUCKET_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct OffsetPattern_OffsetBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

::uInterfaceType* IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof();

struct IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket
{
    ::uString*(*__fp_Write)(void*, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*);

    static ::uString* Write(::uObject* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value) { return ((IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket*)uGetInterfacePtr(__this, IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof()))->__fp_Write((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
};

}}}}


#endif
