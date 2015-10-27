// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_SELECTION_QUERY_H__
#define __APP_FUSE_INPUT_SELECTION_QUERY_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct HitTestResult; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Input {

struct SelectionQuery;

struct SelectionQuery__uType : ::uClassType
{
};

SelectionQuery__uType* SelectionQuery__typeof();

void SelectionQuery___ObjInit(SelectionQuery* __this);
SelectionQuery* SelectionQuery__New_1(::uStatic* __this);
::app::Fuse::HitTestResult* SelectionQuery__Select(SelectionQuery* __this, ::app::Fuse::Node* root, ::app::Uno::Float2 point);
void SelectionQuery__Select_1(SelectionQuery* __this, ::app::Fuse::HitTestResult* result);

struct SelectionQuery : ::uObject
{
    ::uStrong< ::app::Fuse::HitTestResult*> _result;
    int count;

    void _ObjInit() { SelectionQuery___ObjInit(this); }
    ::app::Fuse::HitTestResult* Select(::app::Fuse::Node* root, ::app::Uno::Float2 point);
    void Select_1(::app::Fuse::HitTestResult* result) { SelectionQuery__Select_1(this, result); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Input {

inline ::app::Fuse::HitTestResult* SelectionQuery::Select(::app::Fuse::Node* root, ::app::Uno::Float2 point) { return SelectionQuery__Select(this, root, point); }

}}}


#endif
