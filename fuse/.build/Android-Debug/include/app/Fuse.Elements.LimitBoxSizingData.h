// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_LIMIT_BOX_SIZING_DATA_H__
#define __APP_FUSE_ELEMENTS_LIMIT_BOX_SIZING_DATA_H__

#include <app/Fuse.Behavior.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Elements {

struct LimitBoxSizingData;

struct LimitBoxSizingData__uType : ::app::Fuse::Behavior__uType
{
};

LimitBoxSizingData__uType* LimitBoxSizingData__typeof();

void LimitBoxSizingData__OnRooted(LimitBoxSizingData* __this, ::app::Fuse::Node* elm);
void LimitBoxSizingData__OnUnrooted(LimitBoxSizingData* __this, ::app::Fuse::Node* elm);

struct LimitBoxSizingData : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Fuse::Elements::Element*> _target;
    float _limitHeight;
    bool _hasLimitHeight;
    int _limitHeightUnit;
    float _limitWidth;
    bool _hasLimitWidth;
    int _limitWidthUnit;
};

}}}


#endif
