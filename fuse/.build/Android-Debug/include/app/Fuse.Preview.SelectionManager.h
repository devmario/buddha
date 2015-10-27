// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PREVIEW_SELECTION_MANAGER_H__
#define __APP_FUSE_PREVIEW_SELECTION_MANAGER_H__

#include <Uno.h>

namespace app {
namespace Fuse {
namespace Preview {

extern ::uStaticStrong< ::uObject*> SelectionManager___Selection;
extern ::uStaticStrong< ::uDelegate*> SelectionManager__SelectionChanged;

struct SelectionManager__uType : ::uClassType
{
};

SelectionManager__uType* SelectionManager__typeof();

void SelectionManager__add_SelectionChanged(::uStatic* __this, ::uDelegate* value);
::uObject* SelectionManager__get_Selection(::uStatic* __this);
bool SelectionManager__IsSelected(::uStatic* __this, ::uObject* obj);
void SelectionManager__set_Selection(::uStatic* __this, ::uObject* value);

}}}


#endif
