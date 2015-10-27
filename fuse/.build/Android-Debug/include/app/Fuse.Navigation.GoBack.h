// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_GO_BACK_H__
#define __APP_FUSE_NAVIGATION_GO_BACK_H__

#include <app/Fuse.Navigation.BackForwardNavigationTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct GoBack;

struct GoBack__uType : ::app::Fuse::Navigation::BackForwardNavigationTrigger__uType
{
};

GoBack__uType* GoBack__typeof();

void GoBack__Perform_1(GoBack* __this, ::uObject* ctx, ::app::Fuse::Node* node);
void GoBack__Perform_2(GoBack* __this, ::uObject* webView, ::app::Fuse::Node* node);

struct GoBack : ::app::Fuse::Navigation::BackForwardNavigationTrigger
{
};

}}}


#endif
