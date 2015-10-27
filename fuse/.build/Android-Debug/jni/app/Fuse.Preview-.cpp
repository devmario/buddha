#include <app/Fuse.Preview.ISelection.h>
#include <app/Fuse.Preview.SelectionManager.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventHandler__Uno_EventArgs.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Preview {

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ISelection__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Preview.ISelection");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uObject*> SelectionManager___Selection;
::uStaticStrong< ::uDelegate*> SelectionManager__SelectionChanged;

SelectionManager__uType* SelectionManager__typeof()
{
    static ::uStaticStrong<SelectionManager__uType*> type;
    if (type != NULL) return type;

    type = (SelectionManager__uType*)::uAllocClassType(sizeof(SelectionManager__uType), "Fuse.Preview.SelectionManager");

    return type;
}

void SelectionManager__add_SelectionChanged(::uStatic* __this, ::uDelegate* value)
{
    SelectionManager__SelectionChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)SelectionManager__SelectionChanged, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_EventArgs__typeof());
}

::uObject* SelectionManager__get_Selection(::uStatic* __this)
{
    return SelectionManager___Selection;
}

bool SelectionManager__IsSelected(::uStatic* __this, ::uObject* obj)
{
    if (SelectionManager__get_Selection(NULL) != NULL)
    {
        return ::app::Fuse::Preview::ISelection::IsSelected(::uPtr< ::uObject*>(SelectionManager__get_Selection(NULL)), obj);
    }

    return false;
}

void SelectionManager__set_Selection(::uStatic* __this, ::uObject* value)
{
    SelectionManager___Selection = value;
}

}}}
