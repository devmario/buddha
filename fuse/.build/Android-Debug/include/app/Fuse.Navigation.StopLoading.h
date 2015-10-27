// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_STOP_LOADING_H__
#define __APP_FUSE_NAVIGATION_STOP_LOADING_H__

#include <app/Fuse.Navigation.WebViewNavigationTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct StopLoading;

struct StopLoading__uType : ::app::Fuse::Navigation::WebViewNavigationTrigger__uType
{
};

StopLoading__uType* StopLoading__typeof();

void StopLoading__Perform_1(StopLoading* __this, ::uObject* webView, ::app::Fuse::Node* n);

struct StopLoading : ::app::Fuse::Navigation::WebViewNavigationTrigger
{
};

}}}


#endif
