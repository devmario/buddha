// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_MULTI_LAYOUT_H__
#define __APP_FUSE_CONTROLS_MULTI_LAYOUT_H__

#include <app/Fuse.Behavior.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Controls {

struct MultiLayout;

struct MultiLayout__uType : ::app::Fuse::Behavior__uType
{
};

MultiLayout__uType* MultiLayout__typeof();

void MultiLayout__ChangeLayout(MultiLayout* __this, ::app::Fuse::Node* layoutRoot);
void MultiLayout__OnRooted(MultiLayout* __this, ::app::Fuse::Node* node);
void MultiLayout__OnUnrooted(MultiLayout* __this, ::app::Fuse::Node* node);

struct MultiLayout : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Fuse::Elements::Element*> _layoutElement;

    void ChangeLayout(::app::Fuse::Node* layoutRoot) { MultiLayout__ChangeLayout(this, layoutRoot); }
};

}}}


#endif
