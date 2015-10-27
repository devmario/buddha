// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_LOAD_URL_H__
#define __APP_FUSE_NAVIGATION_LOAD_URL_H__

#include <app/Fuse.Navigation.WebViewNavigationTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct LoadUrl;

struct LoadUrl__uType : ::app::Fuse::Navigation::WebViewNavigationTrigger__uType
{
};

LoadUrl__uType* LoadUrl__typeof();

::uString* LoadUrl__get_Url(LoadUrl* __this);
void LoadUrl__Perform_1(LoadUrl* __this, ::uObject* webView, ::app::Fuse::Node* n);
void LoadUrl__set_Url(LoadUrl* __this, ::uString* value);

struct LoadUrl : ::app::Fuse::Navigation::WebViewNavigationTrigger
{
    ::uStrong< ::uString*> _Url;

    ::uString* Url() { return LoadUrl__get_Url(this); }
    void Url(::uString* value) { LoadUrl__set_Url(this, value); }
};

}}}


#endif
