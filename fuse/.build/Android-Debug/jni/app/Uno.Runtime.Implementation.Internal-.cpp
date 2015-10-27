#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.List__char.h>
#include <app/Uno.Collections.List__Uno_Runtime_Implementation_Internal_Forma-238cb01d.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.FormatException.h>
#include <app/Uno.Graphics.GraphicsContext.h>
#include <app/Uno.Graphics.RenderTarget.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.EventModifiers.h>
#include <app/Uno.Platform.Key.h>
#include <app/Uno.Platform.KeyEventArgs.h>
#include <app/Uno.Platform.MouseButton.h>
#include <app/Uno.Platform.PointerEventArgs.h>
#include <app/Uno.Platform.PointerType.h>
#include <app/Uno.Platform.TextInputEventArgs.h>
#include <app/Uno.Platform.WheelDeltaMode.h>
#include <app/Uno.Platform.Window.h>
#include <app/Uno.Runtime.Implementation.ClockImpl.h>
#include <app/Uno.Runtime.Implementation.Internal.BootstrapHints.h>
#include <app/Uno.Runtime.Implementation.Internal.Bootstrapper.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatSpecifier.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringItem.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringLiteral.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringToken.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringTokenizer_State.h>
#include <app/Uno.Runtime.Implementation.Internal.NumericFormatter.h>
#include <app/Uno.Runtime.Implementation.Internal.WindowHelpers.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <app/Uno.SByte.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.StringBuilder.h>
#include <app/Uno.UInt.h>
#include <app/Uno.ULong.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

int BootstrapHints___MaxFps;

BootstrapHints__uType* BootstrapHints__typeof()
{
    static ::uStaticStrong<BootstrapHints__uType*> type;
    if (type != NULL) return type;

    type = (BootstrapHints__uType*)::uAllocClassType(sizeof(BootstrapHints__uType), "Uno.Runtime.Implementation.Internal.BootstrapHints");

    return type;
}

int BootstrapHints__get_MaxFps(::uStatic* __this)
{
    return BootstrapHints___MaxFps;
}

void BootstrapHints__set_MaxFps(::uStatic* __this, int value)
{
    BootstrapHints___MaxFps = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

int Bootstrapper___fingerCount;
int Bootstrapper___lastMouseX;
int Bootstrapper___lastMouseY;
int Bootstrapper___lastPrimaryFingerId;
double Bootstrapper___lastTime;
double Bootstrapper___startTime;

Bootstrapper__uType* Bootstrapper__typeof()
{
    static ::uStaticStrong<Bootstrapper__uType*> type;
    if (type != NULL) return type;

    type = (Bootstrapper__uType*)::uAllocClassType(sizeof(Bootstrapper__uType), "Uno.Runtime.Implementation.Internal.Bootstrapper");

    return type;
}

void Bootstrapper___TypeInit(::uStatic* __this)
{
    Bootstrapper___lastPrimaryFingerId = -1;
    double currentTime = ::app::Uno::Runtime::Implementation::ClockImpl__GetSeconds(NULL);
    Bootstrapper___startTime = currentTime;
    Bootstrapper___lastTime = currentTime;
}

int Bootstrapper__GetEventModifiers(::uStatic* __this, ::Xli::Window* handle)
{
    return ((((((::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetKeyState(NULL, handle, 17) ? 2 : 0) | (::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetKeyState(NULL, handle, 16) ? 4 : 0)) | (::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetKeyState(NULL, handle, 18) ? 8 : 0)) | (::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetKeyState(NULL, handle, 203) ? 1 : 0)) | (::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetMouseButtonState(NULL, handle, 1) ? 16 : 0)) | (::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetMouseButtonState(NULL, handle, 2) ? 32 : 0)) | (::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetMouseButtonState(NULL, handle, 3) ? 64 : 0);
}

::app::Uno::Float2 Bootstrapper__GetPointerScale(::uStatic* __this)
{
    {
        return ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    }
}

bool Bootstrapper__IsPrimaryFinger(::uStatic* __this, ::Xli::Window* handle, int fingerId)
{
    return (Bootstrapper___lastPrimaryFingerId == fingerId) && true;
}

void Bootstrapper__OnDraw(::uStatic* __this)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    ::app::Uno::Graphics::GraphicsContext* gc = ::uPtr< ::app::Uno::Application*>(app)->GraphicsContext();
    ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(gc)->SetRenderTarget(::uPtr< ::app::Uno::Graphics::GraphicsContext*>(gc)->Backbuffer());
    gc->Clear(app->ClearColor(), app->ClearDepth());
    app->Draw();
}

bool Bootstrapper__OnKeyboardResized(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnKeyboardResized();
    return true;
}

bool Bootstrapper__OnKeyDown(::uStatic* __this, ::Xli::Window* handle, int key)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::KeyEventArgs* args = ::app::Uno::Platform::KeyEventArgs__New_2(NULL, key, Bootstrapper__GetEventModifiers(NULL, handle));
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnKeyPressed(args);
    return ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnKeyUp(::uStatic* __this, ::Xli::Window* handle, int key)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::KeyEventArgs* args = ::app::Uno::Platform::KeyEventArgs__New_2(NULL, key, Bootstrapper__GetEventModifiers(NULL, handle));
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnKeyReleased(args);
    return ::uPtr< ::app::Uno::Platform::KeyEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnMouseDown(::uStatic* __this, ::Xli::Window* handle, int x, int y, int button)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 1, Bootstrapper__GetEventModifiers(NULL, handle), button == 1, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)x, (float)y), Bootstrapper__GetPointerScale(NULL)), 0, button, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerPressed(args);
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnMouseMove(::uStatic* __this, ::Xli::Window* handle, int x, int y)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    int modifiers = Bootstrapper__GetEventModifiers(NULL, handle);
    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 1, modifiers, (modifiers & 16) == 16, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)x, (float)y), Bootstrapper__GetPointerScale(NULL)), 0, 0, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerMoved(args);
    Bootstrapper___lastMouseX = x;
    Bootstrapper___lastMouseY = y;
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnMouseUp(::uStatic* __this, ::Xli::Window* handle, int x, int y, int button)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 1, Bootstrapper__GetEventModifiers(NULL, handle), button == 1, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)x, (float)y), Bootstrapper__GetPointerScale(NULL)), 0, button, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerReleased(args);
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnMouseWheel(::uStatic* __this, ::Xli::Window* handle, float dHori, float dVert, int wheelDeltaMode)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 1, Bootstrapper__GetEventModifiers(NULL, handle), false, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)Bootstrapper___lastMouseX, (float)Bootstrapper___lastMouseY), Bootstrapper__GetPointerScale(NULL)), 0, 0, ::app::Uno::Float2__New_2(NULL, dHori, dVert), wheelDeltaMode);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerWheelChanged(args);
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnTextInput(::uStatic* __this, ::Xli::Window* handle, ::uString* text)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::TextInputEventArgs* args = ::app::Uno::Platform::TextInputEventArgs__New_2(NULL, text, Bootstrapper__GetEventModifiers(NULL, handle));
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnTextInput(args);
    return ::uPtr< ::app::Uno::Platform::TextInputEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnTouchDown(::uStatic* __this, ::Xli::Window* handle, float x, float y, int id)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    Bootstrapper___fingerCount++;

    if (Bootstrapper___fingerCount == 1)
    {
        Bootstrapper___lastPrimaryFingerId = id;
    }

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 2, Bootstrapper__GetEventModifiers(NULL, handle), Bootstrapper__IsPrimaryFinger(NULL, handle, id), ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__New_2(NULL, x, y), Bootstrapper__GetPointerScale(NULL)), id, 0, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerPressed(args);
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnTouchMove(::uStatic* __this, ::Xli::Window* handle, float x, float y, int id)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (Bootstrapper___fingerCount == 1)
    {
        Bootstrapper___lastPrimaryFingerId = id;
    }

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 2, Bootstrapper__GetEventModifiers(NULL, handle), Bootstrapper__IsPrimaryFinger(NULL, handle, id), ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__New_2(NULL, x, y), Bootstrapper__GetPointerScale(NULL)), id, 0, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerMoved(args);
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

bool Bootstrapper__OnTouchUp(::uStatic* __this, ::Xli::Window* handle, float x, float y, int id)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    Bootstrapper___fingerCount--;

    if (Bootstrapper___lastPrimaryFingerId == id)
    {
        Bootstrapper___lastPrimaryFingerId = -1;
    }

    if (app == NULL)
    {
        return false;
    }

    ::app::Uno::Platform::PointerEventArgs* args = ::app::Uno::Platform::PointerEventArgs__New_2(NULL, 2, Bootstrapper__GetEventModifiers(NULL, handle), Bootstrapper__IsPrimaryFinger(NULL, handle, id), ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__New_2(NULL, x, y), Bootstrapper__GetPointerScale(NULL)), id, 0, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), 0);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnPointerReleased(args);
    return ::uPtr< ::app::Uno::Platform::PointerEventArgs*>(args)->Handled();
}

void Bootstrapper__OnUpdate(::uStatic* __this)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnUpdating(::app::Uno::EventArgs__Empty);
    app->Update();
}

void Bootstrapper__OnWindowClosed(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app != NULL)
    {
        ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(app)->Window())->OnClosed(::app::Uno::EventArgs__Empty);
    }
}

void Bootstrapper__OnWindowSizeChanged(::uStatic* __this, ::Xli::Window* handle)
{
    ::app::Uno::Application* app = ::app::Uno::Application__get_Current(NULL);

    if (app != NULL)
    {
        ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(::uPtr< ::app::Uno::Application*>(app)->GraphicsContext())->UpdateBackbuffer();
        ::uPtr< ::app::Uno::Platform::Window*>(app->Window())->OnResized(::app::Uno::EventArgs__Empty);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BufferConverters__uType* BufferConverters__typeof()
{
    static ::uStaticStrong<BufferConverters__uType*> type;
    if (type != NULL) return type;

    type = (BufferConverters__uType*)::uAllocClassType(sizeof(BufferConverters__uType), "Uno.Runtime.Implementation.Internal.BufferConverters");

    return type;
}

::app::Uno::Buffer* BufferConverters__ToBuffer_3(::uStatic* __this, ::uArray* data)
{
    ::app::Uno::Buffer* result = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(data)->Length() * 2);

    for (int i = 0; i < data->Length(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(result)->SetUShort(i * 2, data->Item< ::uUShort>(i), true);
    }

    return result;
}

::app::Uno::Buffer* BufferConverters__ToBuffer_6(::uStatic* __this, ::uArray* data)
{
    ::app::Uno::Buffer* result = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(data)->Length() * 16);

    for (int i = 0; i < data->Length(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(result)->SetFloat4(i * 16, data->Item< ::app::Uno::Float4>(i), true);
    }

    return result;
}

::app::Uno::Buffer* BufferConverters__ToBuffer_7(::uStatic* __this, ::uArray* data)
{
    ::app::Uno::Buffer* result = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(data)->Length() * 12);

    for (int i = 0; i < data->Length(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(result)->SetFloat3(i * 12, data->Item< ::app::Uno::Float3>(i), true);
    }

    return result;
}

::app::Uno::Buffer* BufferConverters__ToBuffer_8(::uStatic* __this, ::uArray* data)
{
    ::app::Uno::Buffer* result = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(data)->Length() * 8);

    for (int i = 0; i < data->Length(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(result)->SetFloat2(i * 8, data->Item< ::app::Uno::Float2>(i), true);
    }

    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uArray*> BundleRegistry___data;

BundleRegistry__uType* BundleRegistry__typeof()
{
    static ::uStaticStrong<BundleRegistry__uType*> type;
    if (type != NULL) return type;

    type = (BundleRegistry__uType*)::uAllocClassType(sizeof(BundleRegistry__uType), "Uno.Runtime.Implementation.Internal.BundleRegistry");

    return type;
}

::uObject* BundleRegistry__Get(::uStatic* __this, int index)
{
    return ::uPtr< ::uArray*>(BundleRegistry___data)->Item< ::uObject*>(index);
}

void BundleRegistry__Init(::uStatic* __this, int resourceCount)
{
    BundleRegistry___data = ::uNewArray(::uObject__typeof(), resourceCount);
}

void BundleRegistry__Register(::uStatic* __this, int index, ::uObject* data)
{
    ::uPtr< ::uArray*>(BundleRegistry___data)->ItemStrong< ::uObject*>(index) = data;
}

void BundleRegistry__RegisterBundleFile(::uStatic* __this, int index, ::uString* filename)
{
    ::uPtr< ::uArray*>(BundleRegistry___data)->ItemStrong< ::uObject*>(index) = (::uObject*)::app::Uno::BundleFile__New_1(NULL, filename);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* FormatSpecifier__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Runtime.Implementation.Internal.FormatSpecifier", ::app::Uno::Int__typeof(), 8);

    type->SetLiterals(
        "Decimal", 0LL,
        "FixedPoint", 1LL,
        "Hexadecimal", 2LL,
        "Exponential", 3LL,
        "General", 4LL,
        "Percent", 5LL,
        "Number", 6LL,
        "Custom", 7LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FormatStringItem__uType* FormatStringItem__typeof()
{
    static ::uStaticStrong<FormatStringItem__uType*> type;
    if (type != NULL) return type;

    type = (FormatStringItem__uType*)::uAllocClassType(sizeof(FormatStringItem__uType), "Uno.Runtime.Implementation.Internal.FormatStringItem", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Runtime::Implementation::Internal::FormatStringToken__typeof());
    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))FormatStringItem__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))FormatStringItem__GetHashCode;
    type->__fp_ToString_1 = (::uString*(*)(::app::Uno::Runtime::Implementation::Internal::FormatStringToken*, ::uArray*))FormatStringItem__ToString_1;

    return type;
}

void FormatStringItem___ObjInit_1(FormatStringItem* __this, ::uString* lexeme)
{
    ::app::Uno::Runtime::Implementation::Internal::FormatStringToken___ObjInit(__this, lexeme);
}

bool FormatStringItem__Equals(FormatStringItem* __this, ::uObject* obj)
{
    if (obj == NULL)
    {
        return false;
    }

    FormatStringItem* token = ::uAs< FormatStringItem*>(obj, FormatStringItem__typeof());

    if (token == NULL)
    {
        return false;
    }

    return ::app::Uno::String__op_Equality(NULL, __this->Lexeme(), ::uPtr< FormatStringItem*>(token)->Lexeme());
}

::uString* FormatStringItem__get_FormatString(FormatStringItem* __this)
{
    int colon = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(__this->Lexeme()), ':', 0);

    if (colon == -1)
    {
        return NULL;
    }

    int end = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(__this->Lexeme()), '}', 0);

    if (end == -1)
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Format specifier was invalid")));
    }

    return ::app::Uno::String::Substring(::uPtr< ::uString*>(__this->Lexeme()), colon + 1, (end - colon) - 1);
}

int FormatStringItem__get_Number(FormatStringItem* __this)
{
    int index = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(__this->Lexeme()), ',', 0);

    if (index == -1)
    {
        index = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(__this->Lexeme()), ':', 0);
    }

    if (index == -1)
    {
        index = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(__this->Lexeme()), '}', 0);
    }

    return ::app::Uno::Int__Parse(NULL, ::app::Uno::String::Substring(::uPtr< ::uString*>(__this->Lexeme()), 1, index - 1));
}

int FormatStringItem__GetHashCode(FormatStringItem* __this)
{
    return ::uPtr< ::uString*>(__this->Lexeme())->GetHashCode();
}

FormatStringItem* FormatStringItem__New_1(::uStatic* __this, ::uString* lexeme)
{
    FormatStringItem* inst = (FormatStringItem*)::uAllocObject(sizeof(FormatStringItem), FormatStringItem__typeof());
    inst->_ObjInit_1(lexeme);
    return inst;
}

::uString* FormatStringItem__ToString_1(FormatStringItem* __this, ::uArray* objs)
{
    if ((__this->Number() < 0) || (__this->Number() > (::uPtr< ::uArray*>(objs)->Length() - 1)))
    {
        U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Index (zero based) must be greater than or equal to zero and less than the size of the argument list.")));
    }

    ::uObject* o = ::uPtr< ::uArray*>(objs)->Item< ::uObject*>(__this->Number());
    ::uString* formatString = __this->FormatString();

    if (::app::Uno::String__IsNullOrEmpty(NULL, formatString))
    {
        return ::app::Uno::Object::ToString(::uPtr< ::uObject*>(o));
    }
    else
    {
        if (::uIs(o, ::app::Uno::Bool__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format(NULL, formatString, ::uUnbox< bool>(::app::Uno::Bool__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::Char__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_5(NULL, formatString, (int)::uUnbox< ::uChar>(::app::Uno::Char__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::SByte__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_7(NULL, formatString, ::uUnbox< ::uSByte>(::app::Uno::SByte__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::Byte__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_6(NULL, formatString, (::uShort)::uUnbox< ::uByte>(::app::Uno::Byte__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::Short__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_6(NULL, formatString, ::uUnbox< ::uShort>(::app::Uno::Short__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::UShort__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_5(NULL, formatString, (int)::uUnbox< ::uUShort>(::app::Uno::UShort__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::Int__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_5(NULL, formatString, ::uUnbox< int>(::app::Uno::Int__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::UInt__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_4(NULL, formatString, (::uLong)::uUnbox< ::uUInt>(::app::Uno::UInt__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::Long__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_4(NULL, formatString, ::uUnbox< ::uLong>(::app::Uno::Long__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::ULong__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_3(NULL, formatString, ::uUnbox< ::uULong>(::app::Uno::ULong__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::Float__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_2(NULL, formatString, ::uUnbox< float>(::app::Uno::Float__typeof(), o));
        }

        if (::uIs(o, ::app::Uno::Double__typeof()))
        {
            return ::app::Uno::Runtime::Implementation::Internal::NumericFormatter__Format_1(NULL, formatString, ::uUnbox< double>(::app::Uno::Double__typeof(), o));
        }
    }

    return ::app::Uno::Object::ToString(::uPtr< ::uObject*>(o));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FormatStringLiteral__uType* FormatStringLiteral__typeof()
{
    static ::uStaticStrong<FormatStringLiteral__uType*> type;
    if (type != NULL) return type;

    type = (FormatStringLiteral__uType*)::uAllocClassType(sizeof(FormatStringLiteral__uType), "Uno.Runtime.Implementation.Internal.FormatStringLiteral", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Runtime::Implementation::Internal::FormatStringToken__typeof());
    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))FormatStringLiteral__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))FormatStringLiteral__GetHashCode;
    type->__fp_ToString_1 = (::uString*(*)(::app::Uno::Runtime::Implementation::Internal::FormatStringToken*, ::uArray*))FormatStringLiteral__ToString_1;

    return type;
}

void FormatStringLiteral___ObjInit_1(FormatStringLiteral* __this, ::uString* lexeme)
{
    ::app::Uno::Runtime::Implementation::Internal::FormatStringToken___ObjInit(__this, lexeme);
}

bool FormatStringLiteral__Equals(FormatStringLiteral* __this, ::uObject* obj)
{
    if (obj == NULL)
    {
        return false;
    }

    FormatStringLiteral* token = ::uAs< FormatStringLiteral*>(obj, FormatStringLiteral__typeof());

    if (token == NULL)
    {
        return false;
    }

    return ::app::Uno::String__op_Equality(NULL, __this->Lexeme(), ::uPtr< FormatStringLiteral*>(token)->Lexeme());
}

int FormatStringLiteral__GetHashCode(FormatStringLiteral* __this)
{
    return ::uPtr< ::uString*>(__this->Lexeme())->GetHashCode();
}

FormatStringLiteral* FormatStringLiteral__New_1(::uStatic* __this, ::uString* lexeme)
{
    FormatStringLiteral* inst = (FormatStringLiteral*)::uAllocObject(sizeof(FormatStringLiteral), FormatStringLiteral__typeof());
    inst->_ObjInit_1(lexeme);
    return inst;
}

::uString* FormatStringLiteral__ToString_1(FormatStringLiteral* __this, ::uArray* objs)
{
    return __this->Lexeme();
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FormatStringToken__uType* FormatStringToken__typeof()
{
    static ::uStaticStrong<FormatStringToken__uType*> type;
    if (type != NULL) return type;

    type = (FormatStringToken__uType*)::uAllocClassType(sizeof(FormatStringToken__uType), "Uno.Runtime.Implementation.Internal.FormatStringToken", false, 0, 1, 0);

    type->SetStrongRefs(
        "_Lexeme", offsetof(FormatStringToken, _Lexeme));

    return type;
}

void FormatStringToken___ObjInit(FormatStringToken* __this, ::uString* lexeme)
{
    __this->Lexeme(lexeme);
}

::uString* FormatStringToken__get_Lexeme(FormatStringToken* __this)
{
    return __this->_Lexeme;
}

void FormatStringToken__set_Lexeme(FormatStringToken* __this, ::uString* value)
{
    __this->_Lexeme = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FormatStringTokenizer__uType* FormatStringTokenizer__typeof()
{
    static ::uStaticStrong<FormatStringTokenizer__uType*> type;
    if (type != NULL) return type;

    type = (FormatStringTokenizer__uType*)::uAllocClassType(sizeof(FormatStringTokenizer__uType), "Uno.Runtime.Implementation.Internal.FormatStringTokenizer", false, 0, 2, 0);

    type->SetStrongRefs(
        "_format", offsetof(FormatStringTokenizer, _format),
        "_tokens", offsetof(FormatStringTokenizer, _tokens));

    return type;
}

void FormatStringTokenizer___ObjInit(FormatStringTokenizer* __this, ::uString* format)
{
    __this->_format = format;
}

void FormatStringTokenizer__AddFormatItemAndGoTo(FormatStringTokenizer* __this, int state)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*>(__this->_tokens)->Add((::app::Uno::Runtime::Implementation::Internal::FormatStringToken*)::app::Uno::Runtime::Implementation::Internal::FormatStringItem__New_1(NULL, ::app::Uno::String::Substring(::uPtr< ::uString*>(__this->_format), __this->_prevIndex, (__this->_index - __this->_prevIndex) + 1)));
    __this->_prevIndex = __this->_index + 1;
    __this->_state = state;
}

void FormatStringTokenizer__AddLiteralAndGoTo(FormatStringTokenizer* __this, int state)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*>(__this->_tokens)->Add((::app::Uno::Runtime::Implementation::Internal::FormatStringToken*)::app::Uno::Runtime::Implementation::Internal::FormatStringLiteral__New_1(NULL, ::app::Uno::String::Substring(::uPtr< ::uString*>(__this->_format), __this->_prevIndex, __this->_index - __this->_prevIndex)));
    __this->_prevIndex = __this->_index;
    __this->_state = state;
}

bool FormatStringTokenizer__AtEnd(FormatStringTokenizer* __this)
{
    return __this->_index == ::uPtr< ::uString*>(__this->_format)->Length();
}

void FormatStringTokenizer__DiscardCharacterAndGoTo(FormatStringTokenizer* __this, int state)
{
    __this->_prevIndex++;
    __this->_state = state;
}

FormatStringTokenizer* FormatStringTokenizer__New_1(::uStatic* __this, ::uString* format)
{
    FormatStringTokenizer* inst = (FormatStringTokenizer*)::uAllocObject(sizeof(FormatStringTokenizer), FormatStringTokenizer__typeof());
    inst->_ObjInit(format);
    return inst;
}

void FormatStringTokenizer__Throw(FormatStringTokenizer* __this)
{
    U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Input string was not in a correct format")));
}

::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* FormatStringTokenizer__TokenizeFormatString(::uStatic* __this, ::uString* format)
{
    return ::uPtr< FormatStringTokenizer*>(FormatStringTokenizer__New_1(NULL, format))->TokenizeFormatStringInternal();
}

::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* FormatStringTokenizer__TokenizeFormatStringInternal(FormatStringTokenizer* __this)
{
    __this->_index = 0;
    __this->_prevIndex = 0;
    __this->_state = 0;
    __this->_tokens = ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken__New_1(NULL);

    while (__this->_index <= ::uPtr< ::uString*>(__this->_format)->Length())
    {
        switch (__this->_state)
        {
            case 0:
            {
                if (__this->AtEnd())
                {
                    __this->_state = 4;
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '{')
                {
                    __this->_state = 2;
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '}')
                {
                    __this->Throw();
                }
                else
                {
                    __this->_state = 1;
                }

                break;
            }
            case 2:
            {
                if (__this->AtEnd())
                {
                    __this->Throw();
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '{')
                {
                    __this->DiscardCharacterAndGoTo(1);
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '}')
                {
                    __this->Throw();
                }
                else
                {
                    __this->_state = 3;
                }

                break;
            }
            case 3:
            {
                if (__this->AtEnd())
                {
                    __this->Throw();
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '}')
                {
                    __this->AddFormatItemAndGoTo(0);
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '{')
                {
                    __this->Throw();
                }

                break;
            }
            case 1:
            {
                if (__this->AtEnd())
                {
                    __this->AddLiteralAndGoTo(4);
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '{')
                {
                    __this->AddLiteralAndGoTo(2);
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '}')
                {
                    __this->Throw();
                }

                break;
            }
        }

        __this->_index++;
    }

    return __this->_tokens;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* FormatStringTokenizer_State__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "Beginning", 0LL,
        "Literal", 1LL,
        "FirstCurly", 2LL,
        "FormatItem", 3LL,
        "End", 4LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uString*> NumericFormatter___decimalPoint;
int NumericFormatter__ExponentialDigits;
int NumericFormatter__NumberDecimalDigits;

NumericFormatter__uType* NumericFormatter__typeof()
{
    static ::uStaticStrong<NumericFormatter__uType*> type;
    if (type != NULL) return type;

    type = (NumericFormatter__uType*)::uAllocClassType(sizeof(NumericFormatter__uType), "Uno.Runtime.Implementation.Internal.NumericFormatter");

    return type;
}

void NumericFormatter___TypeInit(::uStatic* __this)
{
    NumericFormatter__NumberDecimalDigits = 2;
    NumericFormatter__ExponentialDigits = 6;
}

void NumericFormatter__CalculateExponential(::uStatic* __this, double d, double* significand, int* exponent)
{
    *significand = d;
    *exponent = 0;

    while (*significand < 1.0)
    {
        *exponent = *exponent - 1;
        *significand = *significand * 10.0;
    }

    while (*significand >= 10.0)
    {
        *exponent = *exponent + 1;
        *significand = *significand / 10.0;
    }
}

int NumericFormatter__Digits(::uStatic* __this, ::uString* formatString)
{
    return ::app::Uno::Int__Parse(NULL, ::app::Uno::String::Substring_1(::uPtr< ::uString*>(formatString), 1));
}

::uString* NumericFormatter__DoFormatHex(::uStatic* __this, ::uString* formatString, ::uULong l, int maxLength)
{
    ::uArray* array_123;

    if (l == 0ull)
    {
        return NumericFormatter__Pad(NULL, ::uGetConstString("0"), formatString);
    }

    array_123 = ::uNewArray(::app::Uno::Char__typeof(), 16);
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(0) = '0';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(1) = '1';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(2) = '2';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(3) = '3';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(4) = '4';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(5) = '5';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(6) = '6';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(7) = '7';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(8) = '8';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(9) = '9';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(10) = 'A';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(11) = 'B';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(12) = 'C';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(13) = 'D';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(14) = 'E';
    ::uPtr< ::uArray*>(array_123)->Item< ::uChar>(15) = 'F';
    ::uArray* hexChars = array_123;
    ::uArray* buffer = ::uNewArray(::app::Uno::Char__typeof(), maxLength);
    int index = maxLength;

    while (l != 0ull)
    {
        ::uPtr< ::uArray*>(buffer)->Item< ::uChar>(--index) = ::uPtr< ::uArray*>(hexChars)->Item< ::uChar>((int)(l % 16ull));
        l = l / 16ull;
    }

    ::uArray* result = ::uNewArray(::app::Uno::Char__typeof(), maxLength - index);

    for (int i = 0; i < result->Length(); i++)
    {
        result->Item< ::uChar>(i) = buffer->Item< ::uChar>(i + index);
    }

    ::uString* returnString = ::uNewStringFromArray(result);

    if (::uPtr< ::uString*>(formatString)->Item(0) == 'x')
    {
        returnString = ::app::Uno::String::ToLower(::uPtr< ::uString*>(returnString));
    }

    return NumericFormatter__Pad(NULL, returnString, formatString);
}

::uString* NumericFormatter__Format(::uStatic* __this, ::uString* formatString, bool i)
{
    return ::app::Uno::Bool::ToString(i);
}

::uString* NumericFormatter__Format_1(::uStatic* __this, ::uString* formatString, double d)
{
    switch (NumericFormatter__GetFormatSpecifier(NULL, formatString))
    {
        case 1:
        {
            return NumericFormatter__FormatFixedPoint_1(NULL, formatString, d);
        }
        case 3:
        {
            return NumericFormatter__FormatExponential(NULL, formatString, d);
        }
        case 4:
        {
            return NumericFormatter__FormatGeneral(NULL, formatString, d);
        }
        case 5:
        {
            return ::app::Uno::String__op_Addition_1(NULL, NumericFormatter__FormatNumber_2(NULL, formatString, 100.0 * d), ::uGetConstString(" %"));
        }
        case 6:
        {
            return NumericFormatter__FormatNumber_2(NULL, formatString, d);
        }
        case 7:
        {
            return NumericFormatter__FormatCustom(NULL, formatString, d);
        }
        default:
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Format specifier was invalid")));
        }
    }
}

::uString* NumericFormatter__Format_2(::uStatic* __this, ::uString* formatString, float f)
{
    if (NumericFormatter__GetFormatSpecifier(NULL, formatString) == 4)
    {
        return NumericFormatter__FormatFloatGeneral(NULL, formatString, f);
    }

    return NumericFormatter__Format_1(NULL, formatString, (double)f);
}

::uString* NumericFormatter__Format_3(::uStatic* __this, ::uString* formatString, ::uULong i)
{
    switch (NumericFormatter__GetFormatSpecifier(NULL, formatString))
    {
        case 0:
        {
            return NumericFormatter__FormatDecimal(NULL, formatString, i);
        }
        case 1:
        {
            return NumericFormatter__FormatFixedPoint(NULL, formatString, i);
        }
        case 2:
        {
            return NumericFormatter__FormatHex(NULL, formatString, i);
        }
        case 3:
        {
            return NumericFormatter__FormatExponential(NULL, formatString, (double)i);
        }
        case 4:
        {
            return NumericFormatter__FormatGeneral_1(NULL, formatString, i);
        }
        case 5:
        {
            return ::app::Uno::String__op_Addition_1(NULL, NumericFormatter__FormatNumber_3(NULL, formatString, 100ull * i), ::uGetConstString(" %"));
        }
        case 6:
        {
            return NumericFormatter__FormatNumber_3(NULL, formatString, i);
        }
        default:
        {
            return NumericFormatter__FormatCustom_1(NULL, formatString, i);
        }
    }
}

::uString* NumericFormatter__Format_4(::uStatic* __this, ::uString* formatString, ::uLong i)
{
    if (NumericFormatter__GetFormatSpecifier(NULL, formatString) == 2)
    {
        return NumericFormatter__FormatHex_1(NULL, formatString, i);
    }
    else if (i >= 0ll)
    {
        return NumericFormatter__Format_3(NULL, formatString, (::uULong)i);
    }
    else
    {
        return ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("-"), NumericFormatter__Format_3(NULL, formatString, (::uULong)(i * -1ll)));
    }
}

::uString* NumericFormatter__Format_5(::uStatic* __this, ::uString* formatString, int i)
{
    if (NumericFormatter__GetFormatSpecifier(NULL, formatString) == 2)
    {
        return NumericFormatter__FormatHex_2(NULL, formatString, i);
    }

    return NumericFormatter__Format_4(NULL, formatString, (::uLong)i);
}

::uString* NumericFormatter__Format_6(::uStatic* __this, ::uString* formatString, ::uShort s)
{
    if (NumericFormatter__GetFormatSpecifier(NULL, formatString) == 2)
    {
        return NumericFormatter__FormatHex_3(NULL, formatString, s);
    }

    return NumericFormatter__Format_4(NULL, formatString, (::uLong)s);
}

::uString* NumericFormatter__Format_7(::uStatic* __this, ::uString* formatString, ::uSByte b)
{
    if (NumericFormatter__GetFormatSpecifier(NULL, formatString) == 2)
    {
        return NumericFormatter__FormatHex_4(NULL, formatString, b);
    }

    return NumericFormatter__Format_4(NULL, formatString, (::uLong)b);
}

::uString* NumericFormatter__FormatCustom(::uStatic* __this, ::uString* formatString, double value)
{
    double absoluteValue = ::app::Uno::Math__Abs_7(NULL, value);
    int decimalPoint = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(formatString), '.', 0);

    if (decimalPoint == -1)
    {
        return NumericFormatter__FormatCustomIntegerPart(NULL, formatString, (::uULong)absoluteValue);
    }

    bool hasDecimalPoint = bool();
    ::uString* integerPart = NumericFormatter__FormatCustomIntegerPart(NULL, ::app::Uno::String::Substring(formatString, 0, decimalPoint), (::uULong)absoluteValue);
    ::uString* doublePart = NumericFormatter__FormatCustomDoublePart(NULL, ::app::Uno::String::Substring_1(formatString, decimalPoint + 1), absoluteValue, &hasDecimalPoint);
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, (value < 0.0) ? ::uGetConstString("-") : ::app::Uno::String__Empty, integerPart), hasDecimalPoint ? ::uGetConstString(".") : ::app::Uno::String__Empty), doublePart);
}

::uString* NumericFormatter__FormatCustom_1(::uStatic* __this, ::uString* formatString, ::uULong value)
{
    int decimalPoint = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(formatString), '.', 0);

    if (decimalPoint == -1)
    {
        return NumericFormatter__FormatCustomIntegerPart(NULL, formatString, value);
    }

    bool hasDecimalPoint = bool();
    ::uString* integerPart = NumericFormatter__FormatCustomIntegerPart(NULL, ::app::Uno::String::Substring(formatString, 0, decimalPoint), value);
    ::uString* doublePart = NumericFormatter__FormatCustomDoublePart(NULL, ::app::Uno::String::Substring_1(formatString, decimalPoint + 1), 0.0, &hasDecimalPoint);
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, integerPart, hasDecimalPoint ? ::uGetConstString(".") : ::app::Uno::String__Empty), doublePart);
}

::uString* NumericFormatter__FormatCustomDoublePart(::uStatic* __this, ::uString* doubleFormat, double d, bool* decimalPoint)
{
    int precision = 0;
    bool hasZero = false;
    ::uArray* processedFormat = ::app::Uno::String::ToCharArray(::uPtr< ::uString*>(doubleFormat));

    for (int i = ::uPtr< ::uArray*>(processedFormat)->Length() - 1; i >= 0; i--)
    {
        if (::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i) == '0')
        {
            hasZero = true;
        }

        if ((::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i) == '0') || (::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i) == '#'))
        {
            ::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i) = hasZero ? '0' : ::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i);
            precision++;
        }
    }

    ::uString* raw = ::app::Uno::Double::ToString(::app::Uno::Math__Round_8(NULL, d, precision));
    int index = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(raw), NumericFormatter__get_DecimalPoint(NULL), 0) + 1;
    *decimalPoint = (index != 0) || hasZero;

    if (index == 0)
    {
        index = raw->Length();
    }

    ::app::Uno::Collections::List__char* formatted = ::app::Uno::Collections::List__char__New_2(NULL, processedFormat->Length());

    for (int i = 0; i < processedFormat->Length(); i++)
    {
        switch (::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i))
        {
            case '0':
            {
                ::uPtr< ::app::Uno::Collections::List__char*>(formatted)->Add((index >= ::uPtr< ::uString*>(raw)->Length()) ? '0' : ::uPtr< ::uString*>(raw)->Item(index++));
                break;
            }
            case '#':
            {
                if (index < ::uPtr< ::uString*>(raw)->Length())
                {
                    ::uPtr< ::app::Uno::Collections::List__char*>(formatted)->Add(::uPtr< ::uString*>(raw)->Item(index++));
                }

                break;
            }
            case '.':
            {
                break;
            }
            default:
            {
                ::uPtr< ::app::Uno::Collections::List__char*>(formatted)->Add(::uPtr< ::uArray*>(processedFormat)->Item< ::uChar>(i));
                break;
            }
        }
    }

    return ::uNewStringFromArray(::uPtr< ::app::Uno::Collections::List__char*>(formatted)->ToArray());
}

::uString* NumericFormatter__FormatCustomIntegerPart(::uStatic* __this, ::uString* integerFormat, ::uULong value)
{
    ::uString* raw = ::app::Uno::ULong::ToString(value);
    int rawIndex = (value == 0ull) ? -1 : (::uPtr< ::uString*>(raw)->Length() - 1);
    ::uArray* formatted = ::uNewArray(::app::Uno::Char__typeof(), ::uPtr< ::uString*>(integerFormat)->Length());
    int index = integerFormat->Length() - 1;
    int lastNumber = 0;

    for (int i = integerFormat->Length() - 1; i >= 0; i--)
    {
        switch (::uPtr< ::uString*>(integerFormat)->Item(i))
        {
            case '0':
            {
                lastNumber = i;
                ::uPtr< ::uArray*>(formatted)->Item< ::uChar>(index--) = (rawIndex < 0) ? '0' : ::uPtr< ::uString*>(raw)->Item(rawIndex--);
                break;
            }
            case '#':
            {
                lastNumber = i;

                if (rawIndex >= 0)
                {
                    ::uPtr< ::uArray*>(formatted)->Item< ::uChar>(index--) = ::uPtr< ::uString*>(raw)->Item(rawIndex--);
                }

                break;
            }
            default:
            {
                ::uPtr< ::uArray*>(formatted)->Item< ::uChar>(index--) = ::uPtr< ::uString*>(integerFormat)->Item(i);
                break;
            }
        }
    }

    ::uString* formattedString = ::uNewStringFromArray(formatted);

    if (index != -1)
    {
        formattedString = ::app::Uno::String::Substring_1(::uPtr< ::uString*>(formattedString), index + 1);
    }

    if (rawIndex >= 0)
    {
        return ::app::Uno::String::Insert(formattedString, lastNumber, ::app::Uno::String::Substring(raw, 0, rawIndex + 1));
    }

    return formattedString;
}

::uString* NumericFormatter__FormatDecimal(::uStatic* __this, ::uString* formatString, ::uULong l)
{
    return NumericFormatter__Pad(NULL, ::app::Uno::ULong::ToString(l), formatString);
}

::uString* NumericFormatter__FormatExponential(::uStatic* __this, ::uString* formatString, double d)
{
    double raw = double();
    int offset = int();
    NumericFormatter__CalculateExponential(NULL, d, &raw, &offset);
    int desiredDigits = (::uPtr< ::uString*>(formatString)->Length() > 1) ? NumericFormatter__Digits(NULL, formatString) : NumericFormatter__ExponentialDigits;
    ::uString* rounded = ::app::Uno::Double::ToString(::app::Uno::Math__Round_8(NULL, raw, desiredDigits));

    if (::app::Uno::String::IndexOf(::uPtr< ::uString*>(rounded), NumericFormatter__get_DecimalPoint(NULL), 0) == -1)
    {
        rounded = ::app::Uno::String__op_Addition_1(NULL, rounded, NumericFormatter__get_DecimalPoint(NULL));
    }

    ::uString* padding = NumericFormatter__Padding(NULL, (desiredDigits + 2) - ::uPtr< ::uString*>(rounded)->Length());
    ::uString* exponent = ::app::Uno::Int::ToString(::app::Uno::Math__Abs_2(NULL, offset));
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, rounded, padding), ::uGetConstString("E")), (offset < 0) ? ::uGetConstString("-") : ::uGetConstString("+")), NumericFormatter__Padding(NULL, 3 - ::uPtr< ::uString*>(exponent)->Length())), exponent);
}

::uString* NumericFormatter__FormatFixedPoint(::uStatic* __this, ::uString* formatString, ::uULong d)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::ULong::ToString(d), NumericFormatter__get_DecimalPoint(NULL)), NumericFormatter__Padding(NULL, (::uPtr< ::uString*>(formatString)->Length() > 1) ? NumericFormatter__Digits(NULL, formatString) : NumericFormatter__NumberDecimalDigits));
}

::uString* NumericFormatter__FormatFixedPoint_1(::uStatic* __this, ::uString* formatString, double d)
{
    int desiredDigits = (::uPtr< ::uString*>(formatString)->Length() > 1) ? NumericFormatter__Digits(NULL, formatString) : NumericFormatter__NumberDecimalDigits;
    ::uString* rounded = ::app::Uno::Double::ToString(::app::Uno::Math__Round_8(NULL, d, desiredDigits));
    int decimalPointPos = ::uPtr< ::uString*>(::app::Uno::Int::ToString((int)d))->Length();
    int actualDigits = ::app::Uno::Math__Max_2(NULL, (::uPtr< ::uString*>(rounded)->Length() - decimalPointPos) - 1, 0);

    if (desiredDigits <= actualDigits)
    {
        return rounded;
    }

    ::uString* padding = NumericFormatter__Padding(NULL, desiredDigits - actualDigits);
    bool hasDecimalPoint = ::app::Uno::String::IndexOf(rounded, NumericFormatter__get_DecimalPoint(NULL), 0) != -1;
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, rounded, hasDecimalPoint ? ::uGetConstString("") : NumericFormatter__get_DecimalPoint(NULL)), padding);
}

::uString* NumericFormatter__FormatFloatGeneral(::uStatic* __this, ::uString* formatString, float f)
{
    if (::uPtr< ::uString*>(formatString)->Length() == 1)
    {
        return ::app::Uno::Float::ToString(f);
    }

    return NumericFormatter__FormatGeneral(NULL, formatString, (double)f);
}

::uString* NumericFormatter__FormatGeneral(::uStatic* __this, ::uString* formatString, double d)
{
    if (::uPtr< ::uString*>(formatString)->Length() == 1)
    {
        return ::app::Uno::Double::ToString(d);
    }

    int desiredDigits = NumericFormatter__Digits(NULL, formatString);
    ::uString* str = ::app::Uno::Double::ToString(d);

    if ((desiredDigits >= ::uPtr< ::uString*>(str)->Length()) || (desiredDigits == 0))
    {
        return str;
    }

    double significand = double();
    int exponent = int();
    NumericFormatter__CalculateExponential(NULL, ::app::Uno::Math__Abs_7(NULL, d), &significand, &exponent);
    significand = ::app::Uno::Math__Round_8(NULL, significand, desiredDigits - 1);

    if (exponent > desiredDigits)
    {
        return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::Double::ToString(significand), ::uGetConstString("E+")), NumericFormatter__Padding(NULL, 2 - ::uPtr< ::uString*>(::app::Uno::Int::ToString(exponent))->Length())), ::app::Uno::Int::ToString(exponent));
    }

    return ::app::Uno::String__op_Addition_1(NULL, (d < 0.0) ? ::uGetConstString("-") : ::app::Uno::String__Empty, ::app::Uno::Double::ToString(significand * (double)::app::Uno::Math__Pow_1(NULL, 10.0f, (float)exponent)));
}

::uString* NumericFormatter__FormatGeneral_1(::uStatic* __this, ::uString* formatString, ::uULong i)
{
    if (::uPtr< ::uString*>(formatString)->Length() == 1)
    {
        return ::app::Uno::ULong::ToString(i);
    }

    int desiredDigits = NumericFormatter__Digits(NULL, formatString);
    ::uString* str = ::app::Uno::ULong::ToString(i);

    if ((desiredDigits >= ::uPtr< ::uString*>(str)->Length()) || (desiredDigits == 0))
    {
        return str;
    }

    ::uString* rounded = ::app::Uno::Double::ToString(::app::Uno::Math__Round_8(NULL, (double)i / (double)::app::Uno::Math__Pow_1(NULL, 10.0f, (float)(::uPtr< ::uString*>(str)->Length() - 1)), desiredDigits - 1));
    ::uString* exponent = ::app::Uno::Int::ToString(str->Length() - 1);
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, rounded, ::uGetConstString("E+")), NumericFormatter__Padding(NULL, 2 - ::uPtr< ::uString*>(exponent)->Length())), exponent);
}

::uString* NumericFormatter__FormatHex(::uStatic* __this, ::uString* formatString, ::uULong l)
{
    return NumericFormatter__DoFormatHex(NULL, formatString, l, 16);
}

::uString* NumericFormatter__FormatHex_1(::uStatic* __this, ::uString* formatString, ::uLong l)
{
    if (l == (-9223372036854775807ll - 1))
    {
        return ::uGetConstString("8000000000000000");
    }

    if (l < 0ll)
    {
        return NumericFormatter__DoFormatHex(NULL, formatString, (18446744073709551615ull - (::uULong)-l) + 1ull, 16);
    }

    return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)l, 16);
}

::uString* NumericFormatter__FormatHex_2(::uStatic* __this, ::uString* formatString, int i)
{
    if (i < 0)
    {
        return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)((4294967295u - (::uUInt)-i) + 1u), 8);
    }

    return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)i, 8);
}

::uString* NumericFormatter__FormatHex_3(::uStatic* __this, ::uString* formatString, ::uShort s)
{
    if (s < 0)
    {
        return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)((65535 - (::uUShort)-s) + 1), 8);
    }

    return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)s, 8);
}

::uString* NumericFormatter__FormatHex_4(::uStatic* __this, ::uString* formatString, ::uSByte b)
{
    if (b < 0)
    {
        return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)((255 - (::uByte)-b) + 1), 8);
    }

    return NumericFormatter__DoFormatHex(NULL, formatString, (::uULong)b, 8);
}

::uString* NumericFormatter__FormatNumber(::uStatic* __this, ::uULong i)
{
    ::uString* str = ::app::Uno::ULong::ToString(i);

    if (::uPtr< ::uString*>(str)->Length() <= 3)
    {
        return str;
    }

    int start = ((::uPtr< ::uString*>(str)->Length() % 3) == 0) ? 3 : (::uPtr< ::uString*>(str)->Length() % 3);
    ::app::Uno::Text::StringBuilder* result = ::app::Uno::Text::StringBuilder__New_1(NULL);
    ::uPtr< ::app::Uno::Text::StringBuilder*>(result)->Append_1(::app::Uno::String::Substring(str, 0, start));

    for (int index = start; index < str->Length(); index = index + 3)
    {
        ::uPtr< ::app::Uno::Text::StringBuilder*>(result)->Append_1(::uGetConstString(","));
        result->Append_1(::app::Uno::String::Substring(::uPtr< ::uString*>(str), index, 3));
    }

    return result->ToString();
}

::uString* NumericFormatter__FormatNumber_1(::uStatic* __this, double d)
{
    if (d < 0.0)
    {
        return ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("-"), NumericFormatter__FormatNumber(NULL, (::uULong)-d));
    }

    return NumericFormatter__FormatNumber(NULL, (::uULong)d);
}

::uString* NumericFormatter__FormatNumber_2(::uStatic* __this, ::uString* formatString, double d)
{
    int desiredDigits = (::uPtr< ::uString*>(formatString)->Length() > 1) ? NumericFormatter__Digits(NULL, formatString) : NumericFormatter__NumberDecimalDigits;
    double rounded = ::app::Uno::Math__Round_8(NULL, d, desiredDigits);

    if (desiredDigits == 0)
    {
        return NumericFormatter__FormatNumber_1(NULL, rounded);
    }

    ::uString* str = ::app::Uno::Double::ToString(rounded);
    ::uString* residue = (::app::Uno::String::IndexOf(::uPtr< ::uString*>(str), NumericFormatter__get_DecimalPoint(NULL), 0) == -1) ? ::app::Uno::String__Empty : ::app::Uno::String::Substring_1(::uPtr< ::uString*>(str), ::app::Uno::String::IndexOf(::uPtr< ::uString*>(str), NumericFormatter__get_DecimalPoint(NULL), 0) + 1);
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, NumericFormatter__FormatNumber_1(NULL, rounded), NumericFormatter__get_DecimalPoint(NULL)), residue), NumericFormatter__Padding(NULL, desiredDigits - ::uPtr< ::uString*>(residue)->Length()));
}

::uString* NumericFormatter__FormatNumber_3(::uStatic* __this, ::uString* formatString, ::uULong i)
{
    int desiredDigits = (::uPtr< ::uString*>(formatString)->Length() > 1) ? NumericFormatter__Digits(NULL, formatString) : NumericFormatter__NumberDecimalDigits;

    if (desiredDigits == 0)
    {
        return NumericFormatter__FormatNumber(NULL, i);
    }

    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, NumericFormatter__FormatNumber(NULL, i), ::uGetConstString(".")), NumericFormatter__Padding(NULL, desiredDigits));
}

::uString* NumericFormatter__get_DecimalPoint(::uStatic* __this)
{
    if (::app::Uno::String__op_Equality(NULL, NumericFormatter___decimalPoint, NULL))
    {
        NumericFormatter___decimalPoint = ::app::Uno::Char::ToString(::uPtr< ::uString*>(::app::Uno::Double::ToString(1.1))->Item(1));
    }

    return NumericFormatter___decimalPoint;
}

int NumericFormatter__GetFormatSpecifier(::uStatic* __this, ::uString* formatString)
{
    ::uArray* array_124;
    ::uChar symbol = ::app::Uno::Char__ToUpper(NULL, ::uPtr< ::uString*>(formatString)->Item(0));

    if ((formatString->Length() == 1) && NumericFormatter__IsLetter(NULL, symbol))
    {
        return NumericFormatter__GetStandartFormat(NULL, symbol);
    }

    try
    {
        int decimals = NumericFormatter__Digits(NULL, formatString);

        if (decimals > 99)
        {
            return 7;
        }

        if (::uPtr< ::uString*>(::app::Uno::String::Trim_1(::uPtr< ::uString*>(formatString), (array_124 = ::uNewArray(::app::Uno::Char__typeof(), 1), ::uPtr< ::uArray*>(array_124)->Item< ::uChar>(0) = '0', array_124)))->Length() == 0)
        {
            return 7;
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* __exception = (::app::Uno::Exception*)__t.Exception;
            return 7;
        }
        else
        {
            throw __t;
        }
    }

    return NumericFormatter__GetStandartFormat(NULL, symbol);
}

int NumericFormatter__GetStandartFormat(::uStatic* __this, ::uChar symbol)
{
    switch (symbol)
    {
        case 'X':
        {
            return 2;
        }
        case 'D':
        {
            return 0;
        }
        case 'F':
        {
            return 1;
        }
        case 'G':
        {
            return 4;
        }
        case 'N':
        {
            return 6;
        }
        case 'E':
        {
            return 3;
        }
        case 'P':
        {
            return 5;
        }
        default:
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Format specifier was invalid")));
        }
    }
}

bool NumericFormatter__IsLetter(::uStatic* __this, ::uChar symbol)
{
    return (symbol >= 'A') && (symbol <= 'Z');
}

::uString* NumericFormatter__Pad(::uStatic* __this, ::uString* unmodified, ::uString* formatString)
{
    int actualLength = ::uPtr< ::uString*>(unmodified)->Length();
    int desiredLength = (::uPtr< ::uString*>(formatString)->Length() > 1) ? NumericFormatter__Digits(NULL, formatString) : actualLength;

    if (desiredLength <= actualLength)
    {
        return unmodified;
    }

    ::uString* padding = NumericFormatter__Padding(NULL, desiredLength - actualLength);
    return ::app::Uno::String__op_Addition_1(NULL, padding, unmodified);
}

::uString* NumericFormatter__Padding(::uStatic* __this, int length)
{
    if (length <= 0)
    {
        return ::uGetConstString("");
    }

    ::uArray* padding = ::uNewArray(::app::Uno::Char__typeof(), length);

    for (int i = 0; i < length; i++)
    {
        padding->Item< ::uChar>(i) = '0';
    }

    return ::uNewStringFromArray(padding);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WindowHelpers__uType* WindowHelpers__typeof()
{
    static ::uStaticStrong<WindowHelpers__uType*> type;
    if (type != NULL) return type;

    type = (WindowHelpers__uType*)::uAllocClassType(sizeof(WindowHelpers__uType), "Uno.Runtime.Implementation.Internal.WindowHelpers");

    return type;
}

::Xli::Window* WindowHelpers__GetPlatformWindowHandle(::uStatic* __this, ::app::Uno::Platform::Window* wnd)
{
    return ::uPtr< ::app::Uno::Platform::Window*>(wnd)->_handle;
}

}}}}}
