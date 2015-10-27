#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle.h>
#include <app/Fuse.Controls.GraphicsView.h>
#include <app/Fuse.Controls.NativeViewHost.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.PlainTextEdit.h>
#include <app/Fuse.Controls.TextBlock.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.iOS.Blitter.h>
#include <app/Fuse.iOS.Button.h>
#include <app/Fuse.iOS.NativeStyle_Template.h>
#include <app/Fuse.iOS.NativeStyle_Template_Template1.h>
#include <app/Fuse.iOS.NativeStyle_Template_Template2.h>
#include <app/Fuse.iOS.NativeStyle_Template_Template3.h>
#include <app/Fuse.iOS.NativeStyle_Template_Template3_Factory.h>
#include <app/Fuse.iOS.NativeStyle_Template_Template3_Factory1.h>
#include <app/Fuse.iOS.NativeView.h>
#include <app/Fuse.iOS.NativeViewHost.h>
#include <app/Fuse.iOS.PlainTextInput.h>
#include <app/Fuse.iOS.StatusBarConfig.h>
#include <app/Fuse.iOS.TextInput.h>
#include <app/Fuse.iOS.TextRenderer.h>
#include <app/Fuse.iOS.View.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.SizeFlags.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory.h>
#include <app/Fuse.StyleProperty__Fuse_iOS_Button__float4.h>
#include <app/Uno.Action__Fuse_iOS_Button.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.List__Fuse_iOS_StatusBarConfig.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.UX.IFactory.h>
#include <app/Uno.UX.Template__Fuse_Controls_NativeViewHost.h>
#include <app/Uno.UX.Template__Fuse_Controls_PlainTextEdit.h>
#include <app/Uno.UX.Template__Fuse_Controls_TextBlock.h>

namespace app {
namespace Fuse {
namespace iOS {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Blitter*> Blitter__Singleton;

Blitter__uType* Blitter__typeof()
{
    static ::uStaticStrong<Blitter__uType*> type;
    if (type != NULL) return type;

    type = (Blitter__uType*)::uAllocClassType(sizeof(Blitter__uType), "Fuse.iOS.Blitter", false, 0, 5, 0);

    type->SetStrongRefs(
        "_draw_baea6daf._compiledProgram", offsetof(Blitter, _draw_baea6daf._compiledProgram),
        "_draw_baea6daf._constValues", offsetof(Blitter, _draw_baea6daf._constValues),
        "_draw_baea6daf._Program", offsetof(Blitter, _draw_baea6daf._Program),
        "Blit_v_baea6daf_1_7_1", offsetof(Blitter, Blit_v_baea6daf_1_7_1),
        "Blit_verts_baea6daf_1_6_6", offsetof(Blitter, Blit_verts_baea6daf_1_6_6));

    return type;
}

void Blitter___ObjInit(Blitter* __this)
{
    __this->init_DrawCalls();
}

void Blitter___TypeInit(::uStatic* __this)
{
    Blitter__Singleton = Blitter__New_1(NULL);
}

void Blitter__init_DrawCalls(Blitter* __this)
{
    ::uArray* array_123;
    array_123 = ::uNewArray(::app::Uno::Float2__typeof(), 6);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f);
    ::uArray* verts_baea6daf_1_6_0 = array_123;
    __this->Blit_v_baea6daf_1_7_1 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_8(NULL, verts_baea6daf_1_6_0), 0);
    __this->Blit_verts_baea6daf_1_6_6 = verts_baea6daf_1_6_0;
    __this->_draw_baea6daf = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 629), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

Blitter* Blitter__New_1(::uStatic* __this)
{
    Blitter* inst = (Blitter*)::uAllocObject(sizeof(Blitter), Blitter__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Button__float4*> Button__DisabledColorProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Button__float4*> Button__HighlightedColorProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Button__float4*> Button__NormalColorProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Button__float4*> Button__SelectedColorProperty;

Button__uType* Button__typeof()
{
    static ::uStaticStrong<Button__uType*> type;
    if (type != NULL) return type;

    type = (Button__uType*)::uAllocClassType(sizeof(Button__uType), "Fuse.iOS.Button", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::View__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Button__uType, __interface_0));

    return type;
}

void Button___TypeInit_1(::uStatic* __this)
{
    Button__NormalColorProperty = ::app::Fuse::StyleProperty__Fuse_iOS_Button__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_iOS_Button__typeof(), (const void*)Button__OnButtonPropertyChanged));
    Button__HighlightedColorProperty = ::app::Fuse::StyleProperty__Fuse_iOS_Button__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_iOS_Button__typeof(), (const void*)Button__OnButtonPropertyChanged));
    Button__DisabledColorProperty = ::app::Fuse::StyleProperty__Fuse_iOS_Button__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_iOS_Button__typeof(), (const void*)Button__OnButtonPropertyChanged));
    Button__SelectedColorProperty = ::app::Fuse::StyleProperty__Fuse_iOS_Button__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_iOS_Button__typeof(), (const void*)Button__OnButtonPropertyChanged));
}

void Button__OnButtonPropertyChanged(::uStatic* __this, Button* t)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template__uType* NativeStyle_Template__typeof()
{
    static ::uStaticStrong<NativeStyle_Template__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template__uType*)::uAllocClassType(sizeof(NativeStyle_Template__uType), "Fuse.iOS.NativeStyle.Template", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_GraphicsView__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_GraphicsView*, ::app::Fuse::Controls::GraphicsView*))NativeStyle_Template__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template__uType, __interface_0));

    return type;
}

void NativeStyle_Template__OnApply(NativeStyle_Template* __this, ::app::Fuse::Controls::GraphicsView* self)
{
    ::app::Fuse::iOS::NativeStyle_Template_Template1* collection_123;
    ::app::Fuse::iOS::NativeStyle_Template_Template2* collection_124;
    ::app::Fuse::iOS::NativeStyle_Template_Template3* collection_125;
    ::app::Fuse::Style* temp = ::app::Fuse::Style__New_1(NULL);
    collection_123 = ::app::Fuse::iOS::NativeStyle_Template_Template1__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::iOS::NativeStyle_Template_Template1*>(collection_123)->Cascade(true);
    collection_123->AffectSubtypes(true);
    ::app::Fuse::iOS::NativeStyle_Template_Template1* temp1 = collection_123;
    collection_124 = ::app::Fuse::iOS::NativeStyle_Template_Template2__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::iOS::NativeStyle_Template_Template2*>(collection_124)->Cascade(true);
    collection_124->AffectSubtypes(true);
    ::app::Fuse::iOS::NativeStyle_Template_Template2* temp2 = collection_124;
    collection_125 = ::app::Fuse::iOS::NativeStyle_Template_Template3__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::iOS::NativeStyle_Template_Template3*>(collection_125)->Cascade(true);
    collection_125->AffectSubtypes(true);
    ::app::Fuse::iOS::NativeStyle_Template_Template3* temp3 = collection_125;
    ::app::Fuse::Controls::Graphics::GraphicsStyle* temp4 = ::app::Fuse::Controls::Graphics::GraphicsStyle__New_2(NULL);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Style*>(temp)->Templates()), (::uObject*)temp1);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(temp->Templates()), (::uObject*)temp2);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(temp->Templates()), (::uObject*)temp3);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(temp->Templates()), (::uObject*)temp4);
    ::uPtr< ::app::Fuse::Controls::GraphicsView*>(self)->AddStyleStyle(temp);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template1__uType* NativeStyle_Template_Template1__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template1__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template1__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template1__uType), "Fuse.iOS.NativeStyle.Template.Template1", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_TextBlock__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_TextBlock*, ::app::Fuse::Controls::TextBlock*))NativeStyle_Template_Template1__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template_Template1__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template1, __parent));

    return type;
}

void NativeStyle_Template_Template1___ObjInit_1(NativeStyle_Template_Template1* __this, ::app::Fuse::iOS::NativeStyle_Template* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_TextBlock___ObjInit(__this);
    __this->__parent = parent;
}

NativeStyle_Template_Template1* NativeStyle_Template_Template1__New_1(::uStatic* __this, ::app::Fuse::iOS::NativeStyle_Template* parent)
{
    NativeStyle_Template_Template1* inst = (NativeStyle_Template_Template1*)::uAllocObject(sizeof(NativeStyle_Template_Template1), NativeStyle_Template_Template1__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void NativeStyle_Template_Template1__OnApply(NativeStyle_Template_Template1* __this, ::app::Fuse::Controls::TextBlock* self)
{
    ::app::Fuse::iOS::TextRenderer* temp = ::app::Fuse::iOS::TextRenderer__New_1(NULL);
    ::uPtr< ::app::Fuse::Controls::TextBlock*>(self)->AddStyleChild((::app::Fuse::Node*)temp);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template2__uType* NativeStyle_Template_Template2__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template2__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template2__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template2__uType), "Fuse.iOS.NativeStyle.Template.Template2", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_NativeViewHost__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_NativeViewHost*, ::app::Fuse::Controls::NativeViewHost*))NativeStyle_Template_Template2__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template_Template2__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template2, __parent));

    return type;
}

void NativeStyle_Template_Template2___ObjInit_1(NativeStyle_Template_Template2* __this, ::app::Fuse::iOS::NativeStyle_Template* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_NativeViewHost___ObjInit(__this);
    __this->__parent = parent;
}

NativeStyle_Template_Template2* NativeStyle_Template_Template2__New_1(::uStatic* __this, ::app::Fuse::iOS::NativeStyle_Template* parent)
{
    NativeStyle_Template_Template2* inst = (NativeStyle_Template_Template2*)::uAllocObject(sizeof(NativeStyle_Template_Template2), NativeStyle_Template_Template2__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void NativeStyle_Template_Template2__OnApply(NativeStyle_Template_Template2* __this, ::app::Fuse::Controls::NativeViewHost* self)
{
    ::app::Fuse::iOS::NativeViewHost* temp = ::app::Fuse::iOS::NativeViewHost__New_1(NULL);
    ::uPtr< ::app::Fuse::Controls::NativeViewHost*>(self)->AddStyleBehavior((::app::Fuse::Behavior*)temp);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template3__uType* NativeStyle_Template_Template3__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template3__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template3__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template3__uType), "Fuse.iOS.NativeStyle.Template.Template3", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit*, ::app::Fuse::Controls::PlainTextEdit*))NativeStyle_Template_Template3__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template_Template3__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template3, __parent));

    return type;
}

void NativeStyle_Template_Template3___ObjInit_1(NativeStyle_Template_Template3* __this, ::app::Fuse::iOS::NativeStyle_Template* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit___ObjInit(__this);
    __this->__parent = parent;
}

NativeStyle_Template_Template3* NativeStyle_Template_Template3__New_1(::uStatic* __this, ::app::Fuse::iOS::NativeStyle_Template* parent)
{
    NativeStyle_Template_Template3* inst = (NativeStyle_Template_Template3*)::uAllocObject(sizeof(NativeStyle_Template_Template3), NativeStyle_Template_Template3__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void NativeStyle_Template_Template3__OnApply(NativeStyle_Template_Template3* __this, ::app::Fuse::Controls::PlainTextEdit* self)
{
    ::app::Fuse::iOS::NativeStyle_Template_Template3_Factory* temp = ::app::Fuse::iOS::NativeStyle_Template_Template3_Factory__New_2(NULL, __this);
    ::app::Fuse::iOS::NativeStyle_Template_Template3_Factory1* temp1 = ::app::Fuse::iOS::NativeStyle_Template_Template3_Factory1__New_2(NULL, __this);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*>(::app::Fuse::Controls::PlainTextEdit__NativeEditProperty)->SetStyle(self, (::uObject*)temp);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*>(::app::Fuse::Controls::PlainTextEdit__NativeTextProperty)->SetStyle(self, (::uObject*)temp1);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template3_Factory__uType* NativeStyle_Template_Template3_Factory__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template3_Factory__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template3_Factory__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template3_Factory__uType), "Fuse.iOS.NativeStyle.Template.Template3.Factory", false, 1, 1, 0);

    type->__interface_0.__fp_New_1 = (::uObject*(*)(void*))NativeStyle_Template_Template3_Factory__New_1;

    type->SetInterfaces(
        ::app::Uno::UX::IFactory__typeof(), offsetof(NativeStyle_Template_Template3_Factory__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template3_Factory, __parent));

    return type;
}

void NativeStyle_Template_Template3_Factory___ObjInit(NativeStyle_Template_Template3_Factory* __this, ::app::Fuse::iOS::NativeStyle_Template_Template3* parent)
{
    __this->__parent = parent;
}

::uObject* NativeStyle_Template_Template3_Factory__New_1(NativeStyle_Template_Template3_Factory* __this)
{
    ::app::Fuse::iOS::PlainTextInput* self = ::app::Fuse::iOS::PlainTextInput__New_2(NULL);
    return (::uObject*)self;
}

NativeStyle_Template_Template3_Factory* NativeStyle_Template_Template3_Factory__New_2(::uStatic* __this, ::app::Fuse::iOS::NativeStyle_Template_Template3* parent)
{
    NativeStyle_Template_Template3_Factory* inst = (NativeStyle_Template_Template3_Factory*)::uAllocObject(sizeof(NativeStyle_Template_Template3_Factory), NativeStyle_Template_Template3_Factory__typeof());
    inst->_ObjInit(parent);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template3_Factory1__uType* NativeStyle_Template_Template3_Factory1__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template3_Factory1__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template3_Factory1__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template3_Factory1__uType), "Fuse.iOS.NativeStyle.Template.Template3.Factory1", false, 1, 1, 0);

    type->__interface_0.__fp_New_1 = (::uObject*(*)(void*))NativeStyle_Template_Template3_Factory1__New_1;

    type->SetInterfaces(
        ::app::Uno::UX::IFactory__typeof(), offsetof(NativeStyle_Template_Template3_Factory1__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template3_Factory1, __parent));

    return type;
}

void NativeStyle_Template_Template3_Factory1___ObjInit(NativeStyle_Template_Template3_Factory1* __this, ::app::Fuse::iOS::NativeStyle_Template_Template3* parent)
{
    __this->__parent = parent;
}

::uObject* NativeStyle_Template_Template3_Factory1__New_1(NativeStyle_Template_Template3_Factory1* __this)
{
    ::app::Fuse::iOS::TextRenderer* self = ::app::Fuse::iOS::TextRenderer__New_1(NULL);
    return (::uObject*)self;
}

NativeStyle_Template_Template3_Factory1* NativeStyle_Template_Template3_Factory1__New_2(::uStatic* __this, ::app::Fuse::iOS::NativeStyle_Template_Template3* parent)
{
    NativeStyle_Template_Template3_Factory1* inst = (NativeStyle_Template_Template3_Factory1*)::uAllocObject(sizeof(NativeStyle_Template_Template3_Factory1), NativeStyle_Template_Template3_Factory1__typeof());
    inst->_ObjInit(parent);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeView__uType* NativeView__typeof()
{
    static ::uStaticStrong<NativeView__uType*> type;
    if (type != NULL) return type;

    type = (NativeView__uType*)::uAllocClassType(sizeof(NativeView__uType), "Fuse.iOS.NativeView", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))NativeView__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))NativeView__OnUnrooted;

    return type;
}

void NativeView___ObjInit_1(NativeView* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

void NativeView__OnRooted(NativeView* __this, ::app::Fuse::Node* n)
{
}

void NativeView__OnUnrooted(NativeView* __this, ::app::Fuse::Node* n)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeViewHost__uType* NativeViewHost__typeof()
{
    static ::uStaticStrong<NativeViewHost__uType*> type;
    if (type != NULL) return type;

    type = (NativeViewHost__uType*)::uAllocClassType(sizeof(NativeViewHost__uType), "Fuse.iOS.NativeViewHost", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::ParentView__Fuse_Controls_NativeViewHost__typeof());

    return type;
}

void NativeViewHost___ObjInit_3(NativeViewHost* __this)
{
    ::app::Fuse::iOS::ParentView__Fuse_Controls_NativeViewHost___ObjInit_2(__this);
}

NativeViewHost* NativeViewHost__New_1(::uStatic* __this)
{
    NativeViewHost* inst = (NativeViewHost*)::uAllocObject(sizeof(NativeViewHost), NativeViewHost__typeof());
    inst->_ObjInit_3();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PlainTextInput__uType* PlainTextInput__typeof()
{
    static ::uStaticStrong<PlainTextInput__uType*> type;
    if (type != NULL) return type;

    type = (PlainTextInput__uType*)::uAllocClassType(sizeof(PlainTextInput__uType), "Fuse.iOS.PlainTextInput", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::TextInput__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(PlainTextInput__uType, __interface_0));

    return type;
}

void PlainTextInput___ObjInit_4(PlainTextInput* __this)
{
    ::app::Fuse::iOS::TextInput___ObjInit_3(__this);
}

PlainTextInput* PlainTextInput__New_2(::uStatic* __this)
{
    PlainTextInput* inst = (PlainTextInput*)::uAllocObject(sizeof(PlainTextInput), PlainTextInput__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*> StatusBarConfig___stack;

StatusBarConfig__uType* StatusBarConfig__typeof()
{
    static ::uStaticStrong<StatusBarConfig__uType*> type;
    if (type != NULL) return type;

    type = (StatusBarConfig__uType*)::uAllocClassType(sizeof(StatusBarConfig__uType), "Fuse.iOS.StatusBarConfig", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))StatusBarConfig__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))StatusBarConfig__OnUnrooted;

    return type;
}

void StatusBarConfig___ObjInit_1(StatusBarConfig* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

void StatusBarConfig___TypeInit(::uStatic* __this)
{
    StatusBarConfig___stack = ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig__New_1(NULL);
}

void StatusBarConfig__Apply(::uStatic* __this)
{
}

bool StatusBarConfig__get_IsVisible(StatusBarConfig* __this)
{
    return __this->_isVisible;
}

StatusBarConfig* StatusBarConfig__New_1(::uStatic* __this)
{
    StatusBarConfig* inst = (StatusBarConfig*)::uAllocObject(sizeof(StatusBarConfig), StatusBarConfig__typeof());
    inst->_ObjInit_1();
    return inst;
}

void StatusBarConfig__OnRooted(StatusBarConfig* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Add(__this);
    StatusBarConfig__Apply(NULL);
}

void StatusBarConfig__OnUnrooted(StatusBarConfig* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Remove(__this);
    StatusBarConfig__Apply(NULL);
}

void StatusBarConfig__set_IsVisible(StatusBarConfig* __this, bool value)
{
    if (!__this->_hasIsVisible || (__this->_isVisible != value))
    {
        __this->_isVisible = value;
        __this->_hasIsVisible = true;
        StatusBarConfig__Apply(NULL);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextInput__uType* TextInput__typeof()
{
    static ::uStaticStrong<TextInput__uType*> type;
    if (type != NULL) return type;

    type = (TextInput__uType*)::uAllocClassType(sizeof(TextInput__uType), "Fuse.iOS.TextInput", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::ControlView__Fuse_Controls_TextInput__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextInput__uType, __interface_0));

    return type;
}

void TextInput___ObjInit_3(TextInput* __this)
{
    ::app::Fuse::iOS::ControlView__Fuse_Controls_TextInput___ObjInit_2(__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextRenderer__uType* TextRenderer__typeof()
{
    static ::uStaticStrong<TextRenderer__uType*> type;
    if (type != NULL) return type;

    type = (TextRenderer__uType*)::uAllocClassType(sizeof(TextRenderer__uType), "Fuse.iOS.TextRenderer", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::TextVisual__typeof());
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))TextRenderer__GetMarginSize;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Controls::Graphics::Visual*, ::app::Fuse::DrawContext*))TextRenderer__OnDraw;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextRenderer__uType, __interface_0));

    return type;
}

void TextRenderer___ObjInit_4(TextRenderer* __this)
{
    ::app::Fuse::Controls::Graphics::TextVisual___ObjInit_3(__this);
}

::app::Uno::Float2 TextRenderer__GetMarginSize(TextRenderer* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

TextRenderer* TextRenderer__New_1(::uStatic* __this)
{
    TextRenderer* inst = (TextRenderer*)::uAllocObject(sizeof(TextRenderer), TextRenderer__typeof());
    inst->_ObjInit_4();
    return inst;
}

void TextRenderer__OnDraw(TextRenderer* __this, ::app::Fuse::DrawContext* dc)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

View__uType* View__typeof()
{
    static ::uStaticStrong<View__uType*> type;
    if (type != NULL) return type;

    type = (View__uType*)::uAllocClassType(sizeof(View__uType), "Fuse.iOS.View", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Node__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(View__uType, __interface_0));

    return type;
}

void View___ObjInit_1(View* __this)
{
    ::app::Fuse::Node___ObjInit(__this);
}

}}}
