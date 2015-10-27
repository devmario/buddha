// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_EDGE_NAVIGATION_H__
#define __APP_FUSE_NAVIGATION_EDGE_NAVIGATION_H__

#include <app/Fuse.Navigation.INavigation.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Node; } } }

namespace app {
namespace Fuse {
namespace Navigation {

struct EdgeNavigation;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> EdgeNavigation___edgeHandle;

struct EdgeNavigation__uType : ::app::Fuse::Navigation::Navigation__uType
{
};

EdgeNavigation__uType* EdgeNavigation__typeof();

void EdgeNavigation___TypeInit_1(::uStatic* __this);
void EdgeNavigation__CheckChildren(EdgeNavigation* __this);
void EdgeNavigation__ClearChildren(EdgeNavigation* __this);
::app::Fuse::Node* EdgeNavigation__get_Active(EdgeNavigation* __this);
bool EdgeNavigation__get_CanGoBack(EdgeNavigation* __this);
double EdgeNavigation__get_PageProgress(EdgeNavigation* __this);
int EdgeNavigation__GetEdge(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
void EdgeNavigation__GoBack(EdgeNavigation* __this);
void EdgeNavigation__Goto(EdgeNavigation* __this, ::app::Fuse::Node* element, int mode);
bool EdgeNavigation__IsAnyPanelActive(EdgeNavigation* __this);
void EdgeNavigation__OnProgressChanged(EdgeNavigation* __this, ::uObject* s, double progress);
void EdgeNavigation__OnRooted(EdgeNavigation* __this, ::app::Fuse::Node* node);
void EdgeNavigation__OnUnrooted(EdgeNavigation* __this, ::app::Fuse::Node* node);
void EdgeNavigation__set_Active(EdgeNavigation* __this, ::app::Fuse::Node* value);
void EdgeNavigation__Toggle(EdgeNavigation* __this, ::app::Fuse::Node* page);

struct EdgeNavigation : ::app::Fuse::Navigation::Navigation
{
    ::uStrong< ::app::Fuse::Node*> _active;
    ::uStrong< ::app::Fuse::Elements::Element*> _element;
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*> _swipers;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Node*> _mains;

    void CheckChildren() { EdgeNavigation__CheckChildren(this); }
    void ClearChildren() { EdgeNavigation__ClearChildren(this); }
    ::app::Fuse::Node* Active() { return EdgeNavigation__get_Active(this); }
    bool IsAnyPanelActive() { return EdgeNavigation__IsAnyPanelActive(this); }
    void OnProgressChanged(::uObject* s, double progress) { EdgeNavigation__OnProgressChanged(this, s, progress); }
    void Active(::app::Fuse::Node* value) { EdgeNavigation__set_Active(this, value); }
};

}}}


#endif
