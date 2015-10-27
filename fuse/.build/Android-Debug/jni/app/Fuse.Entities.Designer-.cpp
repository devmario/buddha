#include <app/Fuse.Entities.Designer.PreloadedResources.h>
#include <app/Uno.Collections.Dictionary__string__object.h>

namespace app {
namespace Fuse {
namespace Entities {
namespace Designer {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Entities/0.10.5/Designer/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__string__object*> PreloadedResources__resources;

PreloadedResources__uType* PreloadedResources__typeof()
{
    static ::uStaticStrong<PreloadedResources__uType*> type;
    if (type != NULL) return type;

    type = (PreloadedResources__uType*)::uAllocClassType(sizeof(PreloadedResources__uType), "Fuse.Entities.Designer.PreloadedResources");

    return type;
}

void PreloadedResources___TypeInit(::uStatic* __this)
{
    PreloadedResources__resources = ::app::Uno::Collections::Dictionary__string__object__New_1(NULL);
}

}}}}
