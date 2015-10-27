#include <app/-.ButtonText.h>
#include <app/Fuse.BasicTheme.BasicStyle.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.Font.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>

namespace app {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.10.5/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ButtonText__uType* ButtonText__typeof()
{
    static ::uStaticStrong<ButtonText__uType*> type;
    if (type != NULL) return type;

    type = (ButtonText__uType*)::uAllocClassType(sizeof(ButtonText__uType), "ButtonText", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::TextBlock__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ButtonText__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(ButtonText__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(ButtonText__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(ButtonText__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(ButtonText__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(ButtonText__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(ButtonText__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(ButtonText__uType, __interface_7));

    return type;
}

void ButtonText___ObjInit_6(ButtonText* __this)
{
    ::app::Fuse::Controls::TextBlock___ObjInit_5(__this);
    __this->InitializeUX();
}

void ButtonText__InitializeUX(ButtonText* __this)
{
    __this->TextWrapping(1);
    __this->TextAlignment(1);
    __this->TextColor(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    __this->Alignment(10);
    __this->Font(::app::Fuse::BasicTheme::BasicStyle__RobotoMedium);
}

ButtonText* ButtonText__New_2(::uStatic* __this)
{
    ButtonText* inst = (ButtonText*)::uAllocObject(sizeof(ButtonText), ButtonText__typeof());
    inst->_ObjInit_6();
    return inst;
}

}
