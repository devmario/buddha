#include <app/Fuse.Controls.Graphics.DefaultTextVisual.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.PlainTextEdit.h>
#include <app/Fuse.Controls.TextBlock.h>
#include <app/Fuse.Controls.TextEdit.TextEditVisual.h>
#include <app/Fuse.Desktop.NativeStyle_Template.h>
#include <app/Fuse.Desktop.NativeStyle_Template1.h>
#include <app/Fuse.Desktop.NativeStyle_Template1_Factory.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory.h>
#include <app/Uno.Bool.h>
#include <app/Uno.UX.IFactory.h>

namespace app {
namespace Fuse {
namespace Desktop {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Desktop/0.10.5/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template__uType* NativeStyle_Template__typeof()
{
    static ::uStaticStrong<NativeStyle_Template__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template__uType*)::uAllocClassType(sizeof(NativeStyle_Template__uType), "Fuse.Desktop.NativeStyle.Template", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_TextBlock__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_TextBlock*, ::app::Fuse::Controls::TextBlock*))NativeStyle_Template__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template__uType, __interface_0));

    return type;
}

void NativeStyle_Template__OnApply(NativeStyle_Template* __this, ::app::Fuse::Controls::TextBlock* self)
{
    ::app::Fuse::Controls::Graphics::DefaultTextVisual* temp = ::app::Fuse::Controls::Graphics::DefaultTextVisual__New_1(NULL);
    ::uPtr< ::app::Fuse::Controls::TextBlock*>(self)->AddStyleChild((::app::Fuse::Node*)temp);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Desktop/0.10.5/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template1__uType* NativeStyle_Template1__typeof()
{
    static ::uStaticStrong<NativeStyle_Template1__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template1__uType*)::uAllocClassType(sizeof(NativeStyle_Template1__uType), "Fuse.Desktop.NativeStyle.Template1", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit*, ::app::Fuse::Controls::PlainTextEdit*))NativeStyle_Template1__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template1__uType, __interface_0));

    return type;
}

void NativeStyle_Template1__OnApply(NativeStyle_Template1* __this, ::app::Fuse::Controls::PlainTextEdit* self)
{
    ::app::Fuse::Desktop::NativeStyle_Template1_Factory* temp = ::app::Fuse::Desktop::NativeStyle_Template1_Factory__New_2(NULL, __this);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*>(::app::Fuse::Controls::PlainTextEdit__NativeEditProperty)->SetStyle(self, (::uObject*)temp);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Desktop/0.10.5/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template1_Factory__uType* NativeStyle_Template1_Factory__typeof()
{
    static ::uStaticStrong<NativeStyle_Template1_Factory__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template1_Factory__uType*)::uAllocClassType(sizeof(NativeStyle_Template1_Factory__uType), "Fuse.Desktop.NativeStyle.Template1.Factory", false, 1, 1, 0);

    type->__interface_0.__fp_New_1 = (::uObject*(*)(void*))NativeStyle_Template1_Factory__New_1;

    type->SetInterfaces(
        ::app::Uno::UX::IFactory__typeof(), offsetof(NativeStyle_Template1_Factory__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template1_Factory, __parent));

    return type;
}

void NativeStyle_Template1_Factory___ObjInit(NativeStyle_Template1_Factory* __this, ::app::Fuse::Desktop::NativeStyle_Template1* parent)
{
    __this->__parent = parent;
}

::uObject* NativeStyle_Template1_Factory__New_1(NativeStyle_Template1_Factory* __this)
{
    ::app::Fuse::Controls::TextEdit::TextEditVisual* self = ::app::Fuse::Controls::TextEdit::TextEditVisual__New_1(NULL);
    return (::uObject*)self;
}

NativeStyle_Template1_Factory* NativeStyle_Template1_Factory__New_2(::uStatic* __this, ::app::Fuse::Desktop::NativeStyle_Template1* parent)
{
    NativeStyle_Template1_Factory* inst = (NativeStyle_Template1_Factory*)::uAllocObject(sizeof(NativeStyle_Template1_Factory), NativeStyle_Template1_Factory__typeof());
    inst->_ObjInit(parent);
    return inst;
}

}}}
