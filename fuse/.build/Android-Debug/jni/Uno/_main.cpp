// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Source/Uno/_main.cpp'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Xli.h>
#include <XliGL.h>
#include <XliPlatform.h>
#include <Uno/XliInterop.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Runtime.Implementation.Internal.Bootstrapper.h>
#include <app/Uno.Runtime.Implementation.Internal.BootstrapHints.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <app/Uno.Application.h>

/**
    \addtogroup Bootstrapping
    @{
*/
Xli::Window* uXliWindowPtr;
Xli::GLContext* uXliGLContextPtr;

void uStartApp();

class uApplication : public Xli::Application
{
    Xli::Managed<Xli::GLContext> _gl;

public:
    virtual Xli::String GetInitTitle()
    {
        return "buddha";
    }

    virtual void OnInit(Xli::Window* wnd)
    {
        _gl = Xli::GLContext::Create(wnd, Xli::GLContextAttributes::Default());

#ifdef XLI_GL_DESKTOP
        glEnable(GL_VERTEX_PROGRAM_POINT_SIZE);
#endif

        glClearColor(0, 0, 0, 0);
        glClear(GL_COLOR_BUFFER_BIT);

        _gl->SetSwapInterval(0);
        _gl->SwapBuffers();

        // Store global references to wnd and gl
        uXliWindowPtr = wnd;
        uXliGLContextPtr = _gl;
    }

    virtual void OnLoad(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Platform2::Application__Start(NULL);
    }

    virtual void OnUpdate(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnUpdate(NULL);
    }

    virtual void OnDraw(Xli::Window* wnd)
    {
        {
            uAutoReleasePool pool;

            if (::app::Uno::Application__get_Current(NULL) && ::app::Uno::Application__get_Current(NULL)->DrawNextFrame())
            {
                ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnDraw(NULL);
                _gl->SwapBuffers();
            }
        }

#if U_DEBUG_MEM >= 3
        static int frame = 0;
        char path[32];
        sprintf(path, "draw%d.dot", frame++);
        uDumpAllStrongRefs(path);
#endif
    }

    virtual bool OnKeyDown(Xli::Window* wnd, Xli::Key key)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnKeyDown(NULL, wnd, key))
            return true;

#ifdef XLI_PLATFORM_WIN32
        if (key == Xli::KeyF11)
        {
            wnd->SetFullscreen(!wnd->IsFullscreen());
            return true;
        }
#endif

        return false;
    }

    virtual bool OnKeyboardResized(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        return ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnKeyboardResized(NULL, wnd);
    }

    virtual bool OnKeyUp(Xli::Window* wnd, Xli::Key key)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnKeyUp(NULL, wnd, key))
            return true;

        return false;
    }

    virtual bool OnTextInput(Xli::Window* wnd, const Xli::String& text)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnTextInput(NULL, wnd, uStringFromXliString(text)))
            return true;

        return false;
    }

    virtual bool OnMouseDown(Xli::Window* wnd, Xli::Vector2i pos, Xli::MouseButton button)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnMouseDown(NULL, wnd, pos.X, pos.Y, button))
            return true;

        return false;
    }

    virtual bool OnMouseUp(Xli::Window* wnd, Xli::Vector2i pos, Xli::MouseButton button)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnMouseUp(NULL, wnd, pos.X, pos.Y, button))
            return true;

        return false;
    }

    virtual bool OnMouseMove(Xli::Window* wnd, Xli::Vector2i pos)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnMouseMove(NULL, wnd, pos.X, pos.Y))
            return true;

        return false;
    }

    virtual bool OnMouseWheel(Xli::Window* wnd, Xli::Vector2i delta)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnMouseWheel(NULL, wnd, (float)delta.X, (float)delta.Y, 1))
            return true;

        return false;
    }

    virtual bool OnTouchDown(Xli::Window* wnd, Xli::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnTouchDown(NULL, wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual bool OnTouchMove(Xli::Window* wnd, Xli::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnTouchMove(NULL, wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual bool OnTouchUp(Xli::Window* wnd, Xli::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnTouchUp(NULL, wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual void OnNativeHandleChanged(Xli::Window* wnd)
    {
        _gl->MakeCurrent(wnd);
    }

    virtual void OnSizeChanged(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnWindowSizeChanged(NULL, wnd);
        Application::OnSizeChanged(wnd);
    }

    virtual bool OnClosing(Xli::Window* wnd, bool& cancel)
    {
        uAutoReleasePool pool;

        // TODO

        return false;
    }

    virtual void OnClosed(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Runtime::Implementation::Internal::Bootstrapper__OnWindowClosed(NULL, wnd);
    }

    virtual void OnAppLowMemory(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Platform2::Application__OnReceivedLowMemoryWarning(NULL);
    }

    virtual void OnAppTerminating(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Platform2::Application__Terminate(NULL);
    }

    virtual void OnAppDidEnterForeground(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Platform2::Application__EnterInteractive(NULL);
    }

    virtual void OnAppDidEnterBackground(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::app::Uno::Platform2::Application__EnterBackground(NULL);
    }
};

int Main(const Xli::Array<Xli::String>& args)
{
    uRuntime uno;
    int flags = Xli::WindowFlagsResizeable;

    try
    {
        uApplication app;
        Xli::Application::Run(&app, flags);
    }
    catch (const uThrowable& t)
    {
        Xli::String str = "(null)";

        if (t.Exception && t.Exception->Message())
            str = uStringToXliString(t.Exception->Message());

        Xli::Exception x(str);
        x._func = t.Function;
        x._line = t.Line;

        throw x;
    }

    return 0;
}
/** @} */

#include <app/-.MainView.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Versions.h>
#include <app/Experimental.Http.HttpLoader.h>
#include <app/Experimental.Http.LoaderConst.h>
#include <app/Fuse.Android.BitmapFactory.h>
#include <app/Fuse.Android.Blitter.h>
#include <app/Fuse.Android.Button.h>
#include <app/Fuse.Android.FocusManager.h>
#include <app/Fuse.Android.InputDispatch.h>
#include <app/Fuse.Android.NativeView.h>
#include <app/Fuse.Android.RootView.h>
#include <app/Fuse.Android.TypefaceCache.h>
#include <app/Fuse.Animations.ConverterDouble.h>
#include <app/Fuse.Animations.ConverterFloat.h>
#include <app/Fuse.Animations.ConverterFloat2.h>
#include <app/Fuse.Animations.ConverterFloat3.h>
#include <app/Fuse.Animations.ConverterFloat4.h>
#include <app/Fuse.Animations.DiscreteSingleTrack.h>
#include <app/Fuse.Animations.EasingTrack.h>
#include <app/Fuse.Animations.MasterTransform.h>
#include <app/Fuse.Animations.Mixer.h>
#include <app/Fuse.BasicTheme.BasicStyle.h>
#include <app/Fuse.BasicTheme.BasicTheme.h>
#include <app/Fuse.Camera.AndroidCameraImpl.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Graphics.DefaultTextVisual.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle.h>
#include <app/Fuse.Controls.Graphics.ImageElementDraw.h>
#include <app/Fuse.Controls.Graphics.LinearSliderBehavior.h>
#include <app/Fuse.Controls.GraphicsView.h>
#include <app/Fuse.Controls.Grid.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.Internal.DefaultTextRenderer.h>
#include <app/Fuse.Controls.Number.h>
#include <app/Fuse.Controls.PageIndicator.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.PlainTextEdit.h>
#include <app/Fuse.Controls.RangeControl.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.Controls.Shape.h>
#include <app/Fuse.Controls.StackPanel.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Controls.TextEdit.TextEditVisual.h>
#include <app/Fuse.Controls.TextEdit.TextPosition.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Controls.ToggleControl.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.DrawHelpers.h>
#include <app/Fuse.Drawing.BlendModeHelpers.h>
#include <app/Fuse.Drawing.Brushes.h>
#include <app/Fuse.Drawing.LinearGradientDrawable.h>
#include <app/Fuse.Drawing.Primitives.Circle.h>
#include <app/Fuse.Drawing.Primitives.Rectangle.h>
#include <app/Fuse.Drawing.Primitives.Wedge.h>
#include <app/Fuse.Elements.Cache.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.ElementAtlasFramebufferPool.h>
#include <app/Fuse.Elements.Internal.ElementDraw.h>
#include <app/Fuse.Elements.Internal.Scale9Rectangle.h>
#include <app/Fuse.Elements.LimitBoxSizing.h>
#include <app/Fuse.Elements.NoImplicitMaxBoxSizing.h>
#include <app/Fuse.Elements.ShadowBoxSizing.h>
#include <app/Fuse.Elements.StandardBoxSizing.h>
#include <app/Fuse.Elements.TransformOrigins.h>
#include <app/Fuse.Entities.Designer.PreloadedResources.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Fonts.h>
#include <app/Fuse.FramebufferPool.h>
#include <app/Fuse.Gestures.Clicker.h>
#include <app/Fuse.Gestures.Internal.EdgeSwiper.h>
#include <app/Fuse.Gestures.Scroller.h>
#include <app/Fuse.GraphicsTheme.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.Keyboard.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.TextService.h>
#include <app/Fuse.Internal.BlenderMap.h>
#include <app/Fuse.Internal.Drawing.SolidRectangle.h>
#include <app/Fuse.iOS.Blitter.h>
#include <app/Fuse.iOS.Button.h>
#include <app/Fuse.iOS.StatusBarConfig.h>
#include <app/Fuse.Layouts.DockLayout.h>
#include <app/Fuse.Layouts.GridLayout.h>
#include <app/Fuse.Layouts.Layout.h>
#include <app/Fuse.Layouts.Layouts.h>
#include <app/Fuse.Navigation.DirectNavigation.h>
#include <app/Fuse.Navigation.EdgeNavigation.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <app/Fuse.Navigation.NavigationPageProperty.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeBounds.h>
#include <app/Fuse.Physics.Body.h>
#include <app/Fuse.Physics.World.h>
#include <app/Fuse.Preview.SelectionManager.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.Reactive.Dispatcher.h>
#include <app/Fuse.Reactive.FuseJS.InterApp.h>
#include <app/Fuse.Reactive.FuseJS.Lifecycle.h>
#include <app/Fuse.Reactive.JavaScript.h>
#include <app/Fuse.Reactive.ScriptEvents.h>
#include <app/Fuse.Reactive.ThreadWorker.h>
#include <app/Fuse.Resources.DisposalManager.h>
#include <app/Fuse.Resources.FileImageSourceCache.h>
#include <app/Fuse.Resources.HttpImageSourceCache.h>
#include <app/Fuse.Resources.MemoryPolicy.h>
#include <app/Fuse.Resources.ResourceRegistry.h>
#include <app/Fuse.Scripting.Duktape.Context.h>
#include <app/Fuse.Scripting.NameRegistry.h>
#include <app/Fuse.Shapes.Rectangle.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.StyleProperty.h>
#include <app/Fuse.TranslationModes.h>
#include <app/Fuse.Triggers.Actions.GiveFocus.h>
#include <app/Fuse.Triggers.LayoutAnimation.h>
#include <app/Fuse.Triggers.WhileFailed.h>
#include <app/Fuse.Triggers.WhileKeyboardVisible.h>
#include <app/Fuse.Triggers.WhileLoading.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Application.h>
#include <app/Uno.CharPunctuationChecker.h>
#include <app/Uno.Data.Json.Boolean.h>
#include <app/Uno.Data.Json.Null.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.Int.h>
#include <app/Uno.Net.Http.HostInfoParser.h>
#include <app/Uno.Net.Http.HttpStatusReasonPhrase.h>
#include <app/Uno.Net.Http.UriScheme.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.SystemUI.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.Internal.NumericFormatter.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.POSIXThread.h>
#include <app/Uno.Time.Calendars.Era.h>
#include <app/Uno.Time.Calendars.GregorianYearMonthDayCalculator.h>
#include <app/Uno.Time.CalendarSystem.h>
#include <app/Uno.Time.DateTimeZone.h>
#include <app/Uno.Time.Period.h>
#include <app/Uno.Time.Text.LocalDateTimePattern.h>
#include <app/Uno.Time.Text.LocalTimePattern.h>
#include <app/Uno.Time.Text.OffsetPattern.h>
#include <app/Uno.UX.Resource.h>

void uStartApp()
{
    ::uArray* array_126;
    ::uArray* array_127;
    ::uArray* array_128;
    ::uArray* array_129;
    ::uArray* array_130;
    ::uArray* array_131;
    ::uArray* array_132;
    ::uArray* array_133;
    ::uArray* array_134;
    ::uArray* array_135;
    ::uArray* array_136;
    ::uArray* array_137;
    ::uArray* array_138;
    ::uArray* array_139;
    ::uArray* array_140;
    ::uArray* array_141;
    ::uArray* array_142;
    ::uArray* array_143;
    ::uArray* array_144;
    ::uArray* array_145;
    ::uArray* array_146;
    ::uArray* array_147;
    ::uArray* array_148;
    ::uArray* array_149;
    ::uArray* array_150;
    ::uArray* array_151;
    ::uArray* array_152;
    ::uArray* array_153;
    ::uArray* array_154;
    ::uArray* array_155;
    ::uArray* array_156;
    ::uArray* array_157;
    ::uArray* array_158;
    ::uArray* array_159;
    ::uArray* array_160;
    ::uArray* array_161;
    ::uArray* array_162;
    ::uArray* array_163;
    ::uArray* array_164;
    ::uArray* array_165;
    ::uArray* array_166;
    ::uArray* array_167;
    ::uArray* array_168;
    ::uArray* array_169;
    ::uArray* array_170;
    ::uArray* array_171;
    ::uArray* array_172;
    ::uArray* array_173;
    ::uArray* array_174;
    ::uArray* array_175;
    ::uArray* array_176;
    ::uArray* array_177;
    ::uArray* array_178;
    ::uArray* array_179;
    ::uArray* array_180;
    ::uArray* array_181;
    ::uArray* array_182;
    ::uArray* array_183;
    ::uArray* array_184;
    ::uArray* array_185;
    ::uArray* array_186;
    ::uArray* array_187;
    ::uArray* array_188;
    ::uArray* array_189;
    ::uArray* array_190;
    ::uArray* array_191;
    ::uArray* array_192;
    ::uArray* array_193;
    ::uArray* array_194;
    ::uArray* array_195;
    ::uArray* array_196;
    ::uArray* array_197;
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Init(NULL, 633);
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 0, ::uGetConstString("nanumpen-1cfa6e8a.otf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 1, ::uGetConstString("a001-d7b6f127.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 2, ::uGetConstString("a002-d7c508a8.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 3, ::uGetConstString("a003-d7d32029.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 4, ::uGetConstString("a004-d7e137aa.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 5, ::uGetConstString("a005-d7ef4f2b.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 6, ::uGetConstString("a006-d7fd66ac.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 7, ::uGetConstString("a007-d80b7e2d.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 8, ::uGetConstString("a008-d81995ae.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 9, ::uGetConstString("a009-d827ad2f.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 10, ::uGetConstString("a010-d95db245.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 11, ::uGetConstString("a011-d96bc9c6.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 12, ::uGetConstString("a012-d979e147.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 13, ::uGetConstString("a013-d987f8c8.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 14, ::uGetConstString("a014-d9961049.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 15, ::uGetConstString("a015-d9a427ca.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 16, ::uGetConstString("a016-d9b23f4b.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 17, ::uGetConstString("a017-d9c056cc.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 18, ::uGetConstString("a018-d9ce6e4d.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 19, ::uGetConstString("a019-d9dc85ce.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 20, ::uGetConstString("a020-db128ae4.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 21, ::uGetConstString("a021-db20a265.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 22, ::uGetConstString("a022-db2eb9e6.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 23, ::uGetConstString("a023-db3cd167.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 24, ::uGetConstString("a024-db4ae8e8.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 25, ::uGetConstString("a025-db590069.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 26, ::uGetConstString("a026-db6717ea.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 27, ::uGetConstString("a027-db752f6b.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 28, ::uGetConstString("a028-db8346ec.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 29, ::uGetConstString("a029-db915e6d.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 30, ::uGetConstString("a030-dcc76383.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 31, ::uGetConstString("a031-dcd57b04.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 32, ::uGetConstString("a032-dce39285.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 33, ::uGetConstString("a033-dcf1aa06.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 34, ::uGetConstString("a034-dcffc187.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 35, ::uGetConstString("a035-dd0dd908.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 36, ::uGetConstString("a036-dd1bf089.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 37, ::uGetConstString("a037-dd2a080a.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 38, ::uGetConstString("a038-dd381f8b.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 39, ::uGetConstString("a039-dd46370c.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 40, ::uGetConstString("a040-de7c3c22.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 41, ::uGetConstString("a041-de8a53a3.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 42, ::uGetConstString("a042-de986b24.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 43, ::uGetConstString("a043-dea682a5.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 44, ::uGetConstString("a044-deb49a26.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 45, ::uGetConstString("a045-dec2b1a7.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 46, ::uGetConstString("a046-ded0c928.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 47, ::uGetConstString("a047-dedee0a9.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 48, ::uGetConstString("a048-deecf82a.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 49, ::uGetConstString("a049-defb0fab.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 50, ::uGetConstString("a050-e03114c1.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 51, ::uGetConstString("a051-e03f2c42.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 52, ::uGetConstString("a052-e04d43c3.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 53, ::uGetConstString("a053-e05b5b44.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 54, ::uGetConstString("a054-e06972c5.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 55, ::uGetConstString("a055-e0778a46.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 56, ::uGetConstString("a056-e085a1c7.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 57, ::uGetConstString("a057-e093b948.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 58, ::uGetConstString("a058-e0a1d0c9.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 59, ::uGetConstString("a059-e0afe84a.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 60, ::uGetConstString("a060-e1e5ed60.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 61, ::uGetConstString("a061-e1f404e1.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 62, ::uGetConstString("a062-e2021c62.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 63, ::uGetConstString("a063-e21033e3.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 64, ::uGetConstString("a064-e21e4b64.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 65, ::uGetConstString("a065-e22c62e5.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 66, ::uGetConstString("a066-e23a7a66.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 67, ::uGetConstString("a067-e24891e7.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 68, ::uGetConstString("a068-e256a968.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 69, ::uGetConstString("a069-e264c0e9.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 70, ::uGetConstString("a070-e39ac5ff.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 71, ::uGetConstString("a071-e3a8dd80.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 72, ::uGetConstString("a072-e3b6f501.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 73, ::uGetConstString("a073-e3c50c82.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 74, ::uGetConstString("a074-e3d32403.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 75, ::uGetConstString("a075-e3e13b84.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 76, ::uGetConstString("a076-e3ef5305.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 77, ::uGetConstString("a077-e3fd6a86.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 78, ::uGetConstString("a078-e40b8207.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 79, ::uGetConstString("a079-e4199988.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 80, ::uGetConstString("a080-e54f9e9e.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 81, ::uGetConstString("a081-e55db61f.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 82, ::uGetConstString("a082-e56bcda0.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 83, ::uGetConstString("a083-e579e521.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 84, ::uGetConstString("a084-e587fca2.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 85, ::uGetConstString("a085-e5961423.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 86, ::uGetConstString("a086-e5a42ba4.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 87, ::uGetConstString("a087-e5b24325.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 88, ::uGetConstString("a088-e5c05aa6.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 89, ::uGetConstString("a089-e5ce7227.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 90, ::uGetConstString("a090-e704773d.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 91, ::uGetConstString("a091-e7128ebe.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 92, ::uGetConstString("a092-e720a63f.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 93, ::uGetConstString("a093-e72ebdc0.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 94, ::uGetConstString("a094-e73cd541.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 95, ::uGetConstString("a095-e74aecc2.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 96, ::uGetConstString("a096-e7590443.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 97, ::uGetConstString("a097-e7671bc4.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 98, ::uGetConstString("a098-e7753345.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 99, ::uGetConstString("a099-e7834ac6.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 100, ::uGetConstString("a100-0c8f14e7.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 101, ::uGetConstString("a101-0c9d2c68.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 102, ::uGetConstString("a102-0cab43e9.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 103, ::uGetConstString("a103-0cb95b6a.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 104, ::uGetConstString("a104-0cc772eb.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 105, ::uGetConstString("a105-0cd58a6c.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 106, ::uGetConstString("a106-0ce3a1ed.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 107, ::uGetConstString("a107-0cf1b96e.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 108, ::uGetConstString("a108-0cffd0ef.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 109, ::uGetConstString("appinfo-004b93dc.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 110, ::uGetConstString("b001-3f981e06.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 111, ::uGetConstString("b002-3fa63587.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 112, ::uGetConstString("b003-3fb44d08.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 113, ::uGetConstString("b004-3fc26489.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 114, ::uGetConstString("b005-3fd07c0a.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 115, ::uGetConstString("b006-3fde938b.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 116, ::uGetConstString("b007-3fecab0c.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 117, ::uGetConstString("b008-3ffac28d.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 118, ::uGetConstString("b009-4008da0e.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 119, ::uGetConstString("b010-413edf24.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 120, ::uGetConstString("b011-414cf6a5.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 121, ::uGetConstString("b012-415b0e26.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 122, ::uGetConstString("b013-416925a7.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 123, ::uGetConstString("b014-41773d28.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 124, ::uGetConstString("b015-418554a9.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 125, ::uGetConstString("b016-41936c2a.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 126, ::uGetConstString("b017-41a183ab.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 127, ::uGetConstString("b018-41af9b2c.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 128, ::uGetConstString("b019-41bdb2ad.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 129, ::uGetConstString("b020-42f3b7c3.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 130, ::uGetConstString("b021-4301cf44.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 131, ::uGetConstString("b022-430fe6c5.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 132, ::uGetConstString("b023-431dfe46.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 133, ::uGetConstString("b024-432c15c7.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 134, ::uGetConstString("b025-433a2d48.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 135, ::uGetConstString("b026-434844c9.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 136, ::uGetConstString("b027-43565c4a.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 137, ::uGetConstString("b028-436473cb.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 138, ::uGetConstString("b029-43728b4c.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 139, ::uGetConstString("b030-44a89062.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 140, ::uGetConstString("b031-44b6a7e3.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 141, ::uGetConstString("b032-44c4bf64.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 142, ::uGetConstString("b033-44d2d6e5.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 143, ::uGetConstString("b034-44e0ee66.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 144, ::uGetConstString("b035-44ef05e7.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 145, ::uGetConstString("b036-44fd1d68.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 146, ::uGetConstString("b037-450b34e9.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 147, ::uGetConstString("b038-45194c6a.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 148, ::uGetConstString("b039-452763eb.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 149, ::uGetConstString("b040-465d6901.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 150, ::uGetConstString("b041-466b8082.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 151, ::uGetConstString("b042-46799803.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 152, ::uGetConstString("b043-4687af84.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 153, ::uGetConstString("b044-4695c705.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 154, ::uGetConstString("b045-46a3de86.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 155, ::uGetConstString("b046-46b1f607.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 156, ::uGetConstString("b047-46c00d88.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 157, ::uGetConstString("b048-46ce2509.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 158, ::uGetConstString("b049-46dc3c8a.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 159, ::uGetConstString("b050-481241a0.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 160, ::uGetConstString("b051-48205921.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 161, ::uGetConstString("b052-482e70a2.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 162, ::uGetConstString("b053-483c8823.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 163, ::uGetConstString("b054-484a9fa4.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 164, ::uGetConstString("b055-4858b725.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 165, ::uGetConstString("b056-4866cea6.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 166, ::uGetConstString("b057-4874e627.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 167, ::uGetConstString("b058-4882fda8.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 168, ::uGetConstString("b059-48911529.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 169, ::uGetConstString("b060-49c71a3f.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 170, ::uGetConstString("b061-49d531c0.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 171, ::uGetConstString("b062-49e34941.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 172, ::uGetConstString("b063-49f160c2.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 173, ::uGetConstString("b064-49ff7843.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 174, ::uGetConstString("b065-4a0d8fc4.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 175, ::uGetConstString("b066-4a1ba745.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 176, ::uGetConstString("b067-4a29bec6.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 177, ::uGetConstString("b068-4a37d647.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 178, ::uGetConstString("b069-4a45edc8.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 179, ::uGetConstString("b070-4b7bf2de.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 180, ::uGetConstString("b071-4b8a0a5f.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 181, ::uGetConstString("b072-4b9821e0.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 182, ::uGetConstString("b073-4ba63961.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 183, ::uGetConstString("b074-4bb450e2.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 184, ::uGetConstString("b075-4bc26863.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 185, ::uGetConstString("b076-4bd07fe4.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 186, ::uGetConstString("b077-4bde9765.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 187, ::uGetConstString("b078-4becaee6.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 188, ::uGetConstString("b079-4bfac667.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 189, ::uGetConstString("b080-4d30cb7d.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 190, ::uGetConstString("b081-4d3ee2fe.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 191, ::uGetConstString("b082-4d4cfa7f.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 192, ::uGetConstString("b083-4d5b1200.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 193, ::uGetConstString("b084-4d692981.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 194, ::uGetConstString("b085-4d774102.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 195, ::uGetConstString("b086-4d855883.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 196, ::uGetConstString("b087-4d937004.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 197, ::uGetConstString("b088-4da18785.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 198, ::uGetConstString("b089-4daf9f06.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 199, ::uGetConstString("b090-4ee5a41c.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 200, ::uGetConstString("b091-4ef3bb9d.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 201, ::uGetConstString("b092-4f01d31e.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 202, ::uGetConstString("b093-4f0fea9f.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 203, ::uGetConstString("b094-4f1e0220.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 204, ::uGetConstString("b095-4f2c19a1.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 205, ::uGetConstString("b096-4f3a3122.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 206, ::uGetConstString("b097-4f4848a3.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 207, ::uGetConstString("b098-4f566024.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 208, ::uGetConstString("b099-4f6477a5.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 209, ::uGetConstString("b100-747041c6.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 210, ::uGetConstString("b101-747e5947.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 211, ::uGetConstString("b102-748c70c8.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 212, ::uGetConstString("b103-749a8849.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 213, ::uGetConstString("b104-74a89fca.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 214, ::uGetConstString("b105-74b6b74b.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 215, ::uGetConstString("b106-74c4cecc.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 216, ::uGetConstString("b107-74d2e64d.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 217, ::uGetConstString("b108-74e0fdce.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 218, ::uGetConstString("birdbgm-ee7d42bc.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 219, ::uGetConstString("bugbgm-e64c556b.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 220, ::uGetConstString("g001-46fdfe61.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 221, ::uGetConstString("g002-470c15e2.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 222, ::uGetConstString("g003-471a2d63.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 223, ::uGetConstString("g004-472844e4.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 224, ::uGetConstString("g005-47365c65.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 225, ::uGetConstString("g006-474473e6.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 226, ::uGetConstString("g007-47528b67.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 227, ::uGetConstString("g008-4760a2e8.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 228, ::uGetConstString("g009-476eba69.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 229, ::uGetConstString("g010-48a4bf7f.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 230, ::uGetConstString("g011-48b2d700.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 231, ::uGetConstString("g012-48c0ee81.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 232, ::uGetConstString("g013-48cf0602.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 233, ::uGetConstString("g014-48dd1d83.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 234, ::uGetConstString("g015-48eb3504.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 235, ::uGetConstString("g016-48f94c85.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 236, ::uGetConstString("g017-49076406.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 237, ::uGetConstString("g018-49157b87.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 238, ::uGetConstString("g019-49239308.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 239, ::uGetConstString("g020-4a59981e.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 240, ::uGetConstString("g021-4a67af9f.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 241, ::uGetConstString("g022-4a75c720.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 242, ::uGetConstString("g023-4a83dea1.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 243, ::uGetConstString("g024-4a91f622.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 244, ::uGetConstString("g025-4aa00da3.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 245, ::uGetConstString("g026-4aae2524.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 246, ::uGetConstString("g027-4abc3ca5.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 247, ::uGetConstString("g028-4aca5426.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 248, ::uGetConstString("g029-4ad86ba7.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 249, ::uGetConstString("g030-4c0e70bd.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 250, ::uGetConstString("g031-4c1c883e.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 251, ::uGetConstString("g032-4c2a9fbf.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 252, ::uGetConstString("g033-4c38b740.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 253, ::uGetConstString("g034-4c46cec1.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 254, ::uGetConstString("g035-4c54e642.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 255, ::uGetConstString("g036-4c62fdc3.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 256, ::uGetConstString("g037-4c711544.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 257, ::uGetConstString("g038-4c7f2cc5.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 258, ::uGetConstString("g039-4c8d4446.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 259, ::uGetConstString("g040-4dc3495c.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 260, ::uGetConstString("g041-4dd160dd.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 261, ::uGetConstString("g042-4ddf785e.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 262, ::uGetConstString("g043-4ded8fdf.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 263, ::uGetConstString("g044-4dfba760.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 264, ::uGetConstString("g045-4e09bee1.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 265, ::uGetConstString("g046-4e17d662.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 266, ::uGetConstString("g047-4e25ede3.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 267, ::uGetConstString("g048-4e340564.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 268, ::uGetConstString("g049-4e421ce5.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 269, ::uGetConstString("g050-4f7821fb.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 270, ::uGetConstString("g051-4f86397c.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 271, ::uGetConstString("g052-4f9450fd.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 272, ::uGetConstString("g053-4fa2687e.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 273, ::uGetConstString("g054-4fb07fff.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 274, ::uGetConstString("g055-4fbe9780.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 275, ::uGetConstString("g056-4fccaf01.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 276, ::uGetConstString("g057-4fdac682.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 277, ::uGetConstString("g058-4fe8de03.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 278, ::uGetConstString("g059-4ff6f584.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 279, ::uGetConstString("g060-512cfa9a.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 280, ::uGetConstString("g061-513b121b.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 281, ::uGetConstString("g062-5149299c.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 282, ::uGetConstString("g063-5157411d.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 283, ::uGetConstString("g064-5165589e.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 284, ::uGetConstString("g065-5173701f.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 285, ::uGetConstString("g066-518187a0.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 286, ::uGetConstString("g067-518f9f21.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 287, ::uGetConstString("g068-519db6a2.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 288, ::uGetConstString("g069-51abce23.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 289, ::uGetConstString("g070-52e1d339.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 290, ::uGetConstString("g071-52efeaba.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 291, ::uGetConstString("g072-52fe023b.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 292, ::uGetConstString("g073-530c19bc.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 293, ::uGetConstString("g074-531a313d.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 294, ::uGetConstString("g075-532848be.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 295, ::uGetConstString("g076-5336603f.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 296, ::uGetConstString("g077-534477c0.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 297, ::uGetConstString("g078-53528f41.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 298, ::uGetConstString("g079-5360a6c2.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 299, ::uGetConstString("g080-5496abd8.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 300, ::uGetConstString("g081-54a4c359.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 301, ::uGetConstString("g082-54b2dada.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 302, ::uGetConstString("g083-54c0f25b.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 303, ::uGetConstString("g084-54cf09dc.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 304, ::uGetConstString("g085-54dd215d.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 305, ::uGetConstString("g086-54eb38de.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 306, ::uGetConstString("g087-54f9505f.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 307, ::uGetConstString("g088-550767e0.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 308, ::uGetConstString("g089-55157f61.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 309, ::uGetConstString("g090-564b8477.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 310, ::uGetConstString("g091-56599bf8.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 311, ::uGetConstString("g092-5667b379.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 312, ::uGetConstString("g093-5675cafa.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 313, ::uGetConstString("g094-5683e27b.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 314, ::uGetConstString("g095-5691f9fc.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 315, ::uGetConstString("g096-56a0117d.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 316, ::uGetConstString("g097-56ae28fe.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 317, ::uGetConstString("g098-56bc407f.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 318, ::uGetConstString("g099-56ca5800.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 319, ::uGetConstString("g100-7bd62221.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 320, ::uGetConstString("g101-7be439a2.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 321, ::uGetConstString("g102-7bf25123.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 322, ::uGetConstString("g103-7c0068a4.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 323, ::uGetConstString("g104-7c0e8025.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 324, ::uGetConstString("g105-7c1c97a6.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 325, ::uGetConstString("g106-7c2aaf27.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 326, ::uGetConstString("g107-7c38c6a8.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 327, ::uGetConstString("g108-7c46de29.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 328, ::uGetConstString("how1-2cafd458.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 329, ::uGetConstString("how2-2cbdebd9.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 330, ::uGetConstString("how3-2ccc035a.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 331, ::uGetConstString("how4-2cda1adb.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 332, ::uGetConstString("how5-2ce8325c.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 333, ::uGetConstString("how6-2cf649dd.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 334, ::uGetConstString("how7-2d04615e.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 335, ::uGetConstString("how8-2d1278df.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 336, ::uGetConstString("waterbgm-267f4828.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 337, ::uGetConstString("bell-9ce4927a.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 338, ::uGetConstString("bell0-ffad44ba.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 339, ::uGetConstString("click-c04b0935.mp3"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 340, ::uGetConstString("mainview-49bb4919.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 341, ::uGetConstString("kid00-2de37d06.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 342, ::uGetConstString("kid01-2df19487.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 343, ::uGetConstString("kid02-2dffac08.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 344, ::uGetConstString("kid03-2e0dc389.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 345, ::uGetConstString("kid04-2e1bdb0a.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 346, ::uGetConstString("kid05-2e29f28b.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 347, ::uGetConstString("kid06-2e380a0c.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 348, ::uGetConstString("kid07-2e46218d.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 349, ::uGetConstString("kid08-2e54390e.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 350, ::uGetConstString("kid09-2e62508f.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 351, ::uGetConstString("kid10-2f9855a5.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 352, ::uGetConstString("kid11-2fa66d26.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 353, ::uGetConstString("kid12-2fb484a7.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 354, ::uGetConstString("kid13-2fc29c28.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 355, ::uGetConstString("kid14-2fd0b3a9.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 356, ::uGetConstString("kid15-2fdecb2a.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 357, ::uGetConstString("kid16-2fece2ab.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 358, ::uGetConstString("kid17-2ffafa2c.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 359, ::uGetConstString("kid18-300911ad.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 360, ::uGetConstString("kid19-3017292e.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 361, ::uGetConstString("kid20-314d2e44.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 362, ::uGetConstString("kid21-315b45c5.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 363, ::uGetConstString("kid22-31695d46.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 364, ::uGetConstString("kid23-317774c7.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 365, ::uGetConstString("kid24-31858c48.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 366, ::uGetConstString("kid25-3193a3c9.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 367, ::uGetConstString("kid26-31a1bb4a.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 368, ::uGetConstString("kid27-31afd2cb.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 369, ::uGetConstString("kid28-31bdea4c.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 370, ::uGetConstString("kid29-31cc01cd.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 371, ::uGetConstString("kid30-330206e3.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 372, ::uGetConstString("kid31-33101e64.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 373, ::uGetConstString("kid32-331e35e5.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 374, ::uGetConstString("kid33-332c4d66.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 375, ::uGetConstString("kid34-333a64e7.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 376, ::uGetConstString("kid35-33487c68.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 377, ::uGetConstString("kid36-335693e9.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 378, ::uGetConstString("kid37-3364ab6a.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 379, ::uGetConstString("kid38-3372c2eb.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 380, ::uGetConstString("kid39-3380da6c.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 381, ::uGetConstString("kid40-34b6df82.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 382, ::uGetConstString("kid41-34c4f703.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 383, ::uGetConstString("kid42-34d30e84.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 384, ::uGetConstString("kid43-34e12605.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 385, ::uGetConstString("kid44-34ef3d86.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 386, ::uGetConstString("kid45-34fd5507.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 387, ::uGetConstString("kid46-350b6c88.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 388, ::uGetConstString("kid47-35198409.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 389, ::uGetConstString("kid48-35279b8a.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 390, ::uGetConstString("kid49-3535b30b.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 391, ::uGetConstString("kid50-366bb821.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 392, ::uGetConstString("kid51-3679cfa2.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 393, ::uGetConstString("kid52-3687e723.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 394, ::uGetConstString("kid53-3695fea4.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 395, ::uGetConstString("kid54-36a41625.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 396, ::uGetConstString("kid55-36b22da6.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 397, ::uGetConstString("kid56-36c04527.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 398, ::uGetConstString("kid57-36ce5ca8.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 399, ::uGetConstString("kid58-36dc7429.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 400, ::uGetConstString("kid59-36ea8baa.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 401, ::uGetConstString("001-295bfd82.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 402, ::uGetConstString("002-296a1503.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 403, ::uGetConstString("003-29782c84.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 404, ::uGetConstString("004-29864405.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 405, ::uGetConstString("005-29945b86.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 406, ::uGetConstString("006-29a27307.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 407, ::uGetConstString("007-29b08a88.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 408, ::uGetConstString("008-29bea209.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 409, ::uGetConstString("009-29ccb98a.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 410, ::uGetConstString("010-2b02bea0.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 411, ::uGetConstString("011-2b10d621.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 412, ::uGetConstString("012-2b1eeda2.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 413, ::uGetConstString("013-2b2d0523.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 414, ::uGetConstString("014-2b3b1ca4.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 415, ::uGetConstString("015-2b493425.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 416, ::uGetConstString("016-2b574ba6.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 417, ::uGetConstString("017-2b656327.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 418, ::uGetConstString("018-2b737aa8.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 419, ::uGetConstString("019-2b819229.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 420, ::uGetConstString("020-2cb7973f.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 421, ::uGetConstString("021-2cc5aec0.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 422, ::uGetConstString("022-2cd3c641.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 423, ::uGetConstString("023-2ce1ddc2.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 424, ::uGetConstString("024-2ceff543.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 425, ::uGetConstString("025-2cfe0cc4.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 426, ::uGetConstString("026-2d0c2445.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 427, ::uGetConstString("027-2d1a3bc6.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 428, ::uGetConstString("028-2d285347.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 429, ::uGetConstString("029-2d366ac8.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 430, ::uGetConstString("030-2e6c6fde.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 431, ::uGetConstString("031-2e7a875f.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 432, ::uGetConstString("032-2e889ee0.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 433, ::uGetConstString("033-2e96b661.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 434, ::uGetConstString("034-2ea4cde2.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 435, ::uGetConstString("035-2eb2e563.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 436, ::uGetConstString("036-2ec0fce4.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 437, ::uGetConstString("037-2ecf1465.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 438, ::uGetConstString("038-2edd2be6.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 439, ::uGetConstString("039-2eeb4367.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 440, ::uGetConstString("040-3021487d.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 441, ::uGetConstString("041-302f5ffe.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 442, ::uGetConstString("042-303d777f.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 443, ::uGetConstString("043-304b8f00.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 444, ::uGetConstString("044-3059a681.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 445, ::uGetConstString("045-3067be02.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 446, ::uGetConstString("046-3075d583.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 447, ::uGetConstString("047-3083ed04.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 448, ::uGetConstString("048-30920485.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 449, ::uGetConstString("049-30a01c06.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 450, ::uGetConstString("050-31d6211c.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 451, ::uGetConstString("051-31e4389d.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 452, ::uGetConstString("052-31f2501e.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 453, ::uGetConstString("053-3200679f.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 454, ::uGetConstString("054-320e7f20.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 455, ::uGetConstString("055-321c96a1.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 456, ::uGetConstString("056-322aae22.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 457, ::uGetConstString("057-3238c5a3.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 458, ::uGetConstString("058-3246dd24.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 459, ::uGetConstString("059-3254f4a5.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 460, ::uGetConstString("060-338af9bb.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 461, ::uGetConstString("061-3399113c.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 462, ::uGetConstString("062-33a728bd.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 463, ::uGetConstString("063-33b5403e.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 464, ::uGetConstString("064-33c357bf.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 465, ::uGetConstString("065-33d16f40.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 466, ::uGetConstString("066-33df86c1.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 467, ::uGetConstString("067-33ed9e42.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 468, ::uGetConstString("068-33fbb5c3.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 469, ::uGetConstString("069-3409cd44.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 470, ::uGetConstString("070-353fd25a.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 471, ::uGetConstString("071-354de9db.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 472, ::uGetConstString("072-355c015c.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 473, ::uGetConstString("073-356a18dd.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 474, ::uGetConstString("074-3578305e.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 475, ::uGetConstString("075-358647df.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 476, ::uGetConstString("076-35945f60.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 477, ::uGetConstString("077-35a276e1.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 478, ::uGetConstString("078-35b08e62.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 479, ::uGetConstString("079-35bea5e3.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 480, ::uGetConstString("080-36f4aaf9.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 481, ::uGetConstString("081-3702c27a.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 482, ::uGetConstString("082-3710d9fb.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 483, ::uGetConstString("083-371ef17c.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 484, ::uGetConstString("084-372d08fd.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 485, ::uGetConstString("085-373b207e.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 486, ::uGetConstString("086-374937ff.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 487, ::uGetConstString("087-37574f80.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 488, ::uGetConstString("088-37656701.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 489, ::uGetConstString("089-37737e82.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 490, ::uGetConstString("090-38a98398.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 491, ::uGetConstString("091-38b79b19.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 492, ::uGetConstString("092-38c5b29a.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 493, ::uGetConstString("093-38d3ca1b.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 494, ::uGetConstString("094-38e1e19c.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 495, ::uGetConstString("095-38eff91d.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 496, ::uGetConstString("096-38fe109e.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 497, ::uGetConstString("097-390c281f.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 498, ::uGetConstString("098-391a3fa0.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 499, ::uGetConstString("099-39285721.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 500, ::uGetConstString("100-5e342142.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 501, ::uGetConstString("101-5e4238c3.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 502, ::uGetConstString("102-5e505044.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 503, ::uGetConstString("103-5e5e67c5.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 504, ::uGetConstString("104-5e6c7f46.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 505, ::uGetConstString("105-5e7a96c7.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 506, ::uGetConstString("106-5e88ae48.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 507, ::uGetConstString("107-5e96c5c9.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 508, ::uGetConstString("108-5ea4dd4a.jpg"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 509, ::uGetConstString("btn-89db125c.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 510, ::uGetConstString("main-35fd6e4f.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 511, ::uGetConstString("backbtn-f0adb8f5.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 512, ::uGetConstString("prevbutton-2704b59b.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 513, ::uGetConstString("playbutton-2fda115c.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 514, ::uGetConstString("nextbutton-af07ae5b.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 515, ::uGetConstString("helpcontent1-a7a85acf.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 516, ::uGetConstString("helppagebg-cd80742b.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 517, ::uGetConstString("voiceman-0cf04a5e.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 518, ::uGetConstString("voicegirl-d322ea2e.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 519, ::uGetConstString("voicedubbing-baed5eb5.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 520, ::uGetConstString("birdbutton-563948a1.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 521, ::uGetConstString("bugbutton-7f8d5206.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 522, ::uGetConstString("waterbutton-87d93ba9.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 523, ::uGetConstString("musicbutton-2177eb37.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 524, ::uGetConstString("buttonbg3-76c3143c.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 525, ::uGetConstString("settingpagebg-ec7ebf64.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 526, ::uGetConstString("recordpagebg-9b77027b.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 527, ::uGetConstString("pausebutton-dd7651c8.png"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 528, ::uGetConstString("opensans-light-2c9b6745.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 529, ::uGetConstString("roboto-regular-10400107.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 530, ::uGetConstString("subscriberproxy-50f23d3f.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 531, ::uGetConstString("observable-11839926.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 532, ::uGetConstString("fetch-1900366b.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 533, ::uGetConstString("fetchjson-705d7e63.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 534, ::uGetConstString("fusejs-5206099f.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 535, ::uGetConstString("es6-promise-aab43478.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 536, ::uGetConstString("window-7409fd6b.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 537, ::uGetConstString("windowtimers-3dc9d9bd.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 538, ::uGetConstString("eventtarget-ab6e6668.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 539, ::uGetConstString("file-0a0c597f.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 540, ::uGetConstString("xmlhttprequest-a2f7c90b.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 541, ::uGetConstString("fetch-7189faf9.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 542, ::uGetConstString("localstorage-712365eb.js"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 543, ::uGetConstString("roboto-thin-37d03b95.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 544, ::uGetConstString("robotocondensed-bol-28ad7fcc.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 545, ::uGetConstString("robotocondensed-bol-95ee0f1c.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 546, ::uGetConstString("robotocondensed-ita-dac8ba37.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 547, ::uGetConstString("robotocondensed-lig-4a769a1f.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 548, ::uGetConstString("robotocondensed-lig-05a0df2f.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 549, ::uGetConstString("robotocondensed-reg-2977d165.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 550, ::uGetConstString("roboto-italic-b385f2ac.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 551, ::uGetConstString("roboto-light-17a5ff0a.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 552, ::uGetConstString("roboto-lightitalic-720da7da.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 553, ::uGetConstString("roboto-medium-82a11d71.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 554, ::uGetConstString("roboto-mediumitalic-b85c1d01.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 555, ::uGetConstString("roboto-regular-6861a790.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 556, ::uGetConstString("roboto-thinitalic-f99d1025.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 557, ::uGetConstString("roboto-black-3e30bd73.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 558, ::uGetConstString("roboto-blackitalic-9b803383.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 559, ::uGetConstString("roboto-bold-60d85181.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__RegisterBundleFile(NULL, 560, ::uGetConstString("roboto-bolditalic-e3c00511.ttf"));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 561, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 d;\n\nattribute vec2 a, b;\nattribute vec4 c;\n\nvarying vec2 g;\nvarying vec4 h;\n\nvoid main()\n{\n    g = b;\n    h = c;\n    gl_Position = d * vec4(a, float(0), float(1));\n}\n"), ::uGetConstString("uniform float e, f;\n\nuniform sampler2D i;\n\nvarying vec2 g;\nvarying vec4 h;\n\nvoid main()\n{\n    float j = smoothstep(e, f, texture2D(i, g).x);\n    if (j < 0.15) discard;\n    gl_FragColor = h * vec4(float(1), float(1), float(1), j);\n}\n"), 0, 3, (array_126 = ::uNewArray(::app::Uno::String__typeof(), 7), ::uPtr< ::uArray*>(array_126)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_126)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_126)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_126)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_126)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_126)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_126)->ItemStrong< ::uString*>(6) = ::uGetConstString("i"), array_126)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 562, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 d;\n\nattribute vec2 a, c;\nattribute vec4 b;\n\nvarying vec2 e;\nvarying vec4 f;\n\nvoid main()\n{\n    e = c;\n    f = b;\n    gl_Position = d * vec4(a, float(0), float(1));\n}\n"), ::uGetConstString("uniform sampler2D g;\n\nvarying vec2 e;\nvarying vec4 f;\n\nvoid main()\n{\n    gl_FragColor = f * vec4(float(1), float(1), float(1), texture2D(g, e).x);\n}\n"), 0, 3, (array_127 = ::uNewArray(::app::Uno::String__typeof(), 5), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uString*>(4) = ::uGetConstString("g"), array_127)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 563, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 l, c;\nuniform vec2 d, e, f, g, h;\n\nattribute vec2 a;\n\nvarying vec2 m;\n\nvoid main()\n{\n    m = ((((d * (false ? vec2(a.x, float(1) - a.y) : a)) - e) / f) * g) + h;\n    gl_Position = c * (l * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform vec4 i;\nuniform float j, k;\n\nuniform sampler2D n;\n\nvarying vec2 m;\n\nvoid main()\n{\n    vec4 o = (b ? vec4(float(0)) : texture2D(n, m)) * i;\n    gl_FragColor = vec4((o.xyz * o.w) * j, o.w * j) * k;\n}\n"), 1, 1, (array_128 = ::uNewArray(::app::Uno::String__typeof(), 13), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uString*>(12) = ::uGetConstString("n"), array_128)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 564, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 d, b;\n\nattribute vec2 a;\n\nvoid main()\n{\n    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform vec4 c;\n\nvoid main()\n{\n    gl_FragColor = c;\n}\n"), 0, 1, (array_129 = ::uNewArray(::app::Uno::String__typeof(), 4), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), array_129)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 565, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 h, b;\nuniform vec2 c, d, e, i;\nuniform float j;\n\nattribute vec2 a;\n\nvarying float k;\n\nfloat m(vec2 n, vec2 o, float p){\n    vec2 q = (n * c) - d;\n    float r = dot(q, o) / p;\n    return (r - e.x) / e.y;\n}\n\nvoid main()\n{\n    k = m(false ? vec2(a.x, float(1) - a.y) : a, i, j);\n    gl_Position = b * (h * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform float f, g;\n\nuniform sampler2D l;\n\nvarying float k;\n\nvoid main()\n{\n    vec4 n = texture2D(l, vec2(k, 0.5));\n    gl_FragColor = vec4((n.xyz * n.w) * f, n.w * f) * g;\n}\n"), 0, 1, (array_130 = ::uNewArray(::app::Uno::String__typeof(), 11), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uString*>(10) = ::uGetConstString("l"), array_130)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 566, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, d, f, g, h, i, j;\nuniform mat4 e;\n\nattribute vec2 a;\n\nvarying vec2 u, v;\n\nvec4 x(vec2 y, mat4 z){\n    return vec4(((y.x * z[0].x) + (y.y * z[1].x)) + z[3].x, ((y.x * z[0].y) + (y.y * z[1].y)) + z[3].y, ((y.x * z[0].z) + (y.y * z[1].z)) + z[3].z, ((y.x * z[0].w) + (y.y * z[1].w)) + z[3].w);\n}\n\nvoid main()\n{\n    vec2 y = a * c;\n    vec2 z = y + d;\n    u = ((((f * (z / f)) - g) / h) * i) + j;\n    v = y;\n    gl_Position = x(z, e);\n}\n"), ::uGetConstString("uniform vec4 k;\nuniform float l, m, n, o, p, q;\nuniform vec2 r, s, t;\n\nuniform sampler2D w;\n\nvarying vec2 u, v;\n\nvoid main()\n{\n    vec4 y = (b ? vec4(float(0)) : texture2D(w, u)) * k;\n    vec4 z = vec4(y.xyz, y.w * (clamp(0.5 - (((abs((length(v) - l) - m) - n) * o) * p), float(0), float(1)) * clamp(0.5 - ((min(dot(v, r), min(dot(v, s), dot(v, t))) * o) * p), float(0), float(1))));\n    gl_FragColor = vec4((z.xyz * z.w) * q, z.w * q);\n}\n"), 1, 1, (array_131 = ::uNewArray(::app::Uno::String__typeof(), 21), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(17) = ::uGetConstString("r"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(18) = ::uGetConstString("s"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(19) = ::uGetConstString("t"), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uString*>(20) = ::uGetConstString("w"), array_131)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 567, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, d, f, g, h, i, j;\nuniform mat4 e;\n\nattribute vec2 a;\n\nvarying vec2 u, v;\n\nvec4 x(vec2 y, mat4 z){\n    return vec4(((y.x * z[0].x) + (y.y * z[1].x)) + z[3].x, ((y.x * z[0].y) + (y.y * z[1].y)) + z[3].y, ((y.x * z[0].z) + (y.y * z[1].z)) + z[3].z, ((y.x * z[0].w) + (y.y * z[1].w)) + z[3].w);\n}\n\nvoid main()\n{\n    vec2 y = a * c;\n    vec2 z = y + d;\n    u = ((((f * (z / f)) - g) / h) * i) + j;\n    v = y;\n    gl_Position = x(z, e);\n}\n"), ::uGetConstString("uniform vec4 k;\nuniform float l, m, n, o, p, q;\nuniform vec2 r, s, t;\n\nuniform sampler2D w;\n\nvarying vec2 u, v;\n\nvoid main()\n{\n    vec4 y = (b ? vec4(float(0)) : texture2D(w, u)) * k;\n    vec4 z = vec4(y.xyz, y.w * (clamp(0.5 - (((abs((length(v) - l) - m) - n) * o) * p), float(0), float(1)) * clamp(0.5 - ((max(dot(v, r), max(dot(v, s), dot(v, t))) * o) * p), float(0), float(1))));\n    gl_FragColor = vec4((z.xyz * z.w) * q, z.w * q);\n}\n"), 1, 1, (array_132 = ::uNewArray(::app::Uno::String__typeof(), 21), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(17) = ::uGetConstString("r"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(18) = ::uGetConstString("s"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(19) = ::uGetConstString("t"), ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uString*>(20) = ::uGetConstString("w"), array_132)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 568, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, d, f, g, h, i, j;\nuniform mat4 e;\n\nattribute vec2 a;\n\nvarying vec2 r, s;\n\nvec4 u(vec2 v, mat4 w){\n    return vec4(((v.x * w[0].x) + (v.y * w[1].x)) + w[3].x, ((v.x * w[0].y) + (v.y * w[1].y)) + w[3].y, ((v.x * w[0].z) + (v.y * w[1].z)) + w[3].z, ((v.x * w[0].w) + (v.y * w[1].w)) + w[3].w);\n}\n\nvoid main()\n{\n    vec2 v = a * c;\n    vec2 w = v + d;\n    r = ((((f * (w / f)) - g) / h) * i) + j;\n    s = v;\n    gl_Position = u(w, e);\n}\n"), ::uGetConstString("uniform vec4 k;\nuniform float l, m, n, o, p, q;\n\nuniform sampler2D t;\n\nvarying vec2 r, s;\n\nvoid main()\n{\n    vec4 v = (b ? vec4(float(0)) : texture2D(t, r)) * k;\n    vec4 w = vec4(v.xyz, v.w * (clamp(0.5 - (((abs((length(s) - l) - m) - n) * o) * p), float(0), float(1)) * float(1)));\n    gl_FragColor = vec4((w.xyz * w.w) * q, w.w * q);\n}\n"), 1, 1, (array_133 = ::uNewArray(::app::Uno::String__typeof(), 18), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_133)->ItemStrong< ::uString*>(17) = ::uGetConstString("t"), array_133)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 569, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 p;\n\nvec4 q(vec2 r, mat4 s){\n    return vec4(((r.x * s[0].x) + (r.y * s[1].x)) + s[3].x, ((r.x * s[0].y) + (r.y * s[1].y)) + s[3].y, ((r.x * s[0].z) + (r.y * s[1].z)) + s[3].z, ((r.x * s[0].w) + (r.y * s[1].w)) + s[3].w);\n}\n\nvoid main()\n{\n    vec2 r = a * b;\n    p = r;\n    gl_Position = q(r + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h, i, j, l;\nuniform vec2 m, n, o;\nuniform vec3 k;\n\nvarying vec2 p;\n\nvoid main()\n{\n    vec4 r = vec4(k, j * (clamp(0.5 - (((abs((length(p) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((min(dot(p, m), min(dot(p, n), dot(p, o))) * h) * i), float(0), float(1))));\n    gl_FragColor = vec4((r.xyz * r.w) * l, r.w * l);\n}\n"), 0, 1, (array_134 = ::uNewArray(::app::Uno::String__typeof(), 15), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_134)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), array_134)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 570, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 p;\n\nvec4 q(vec2 r, mat4 s){\n    return vec4(((r.x * s[0].x) + (r.y * s[1].x)) + s[3].x, ((r.x * s[0].y) + (r.y * s[1].y)) + s[3].y, ((r.x * s[0].z) + (r.y * s[1].z)) + s[3].z, ((r.x * s[0].w) + (r.y * s[1].w)) + s[3].w);\n}\n\nvoid main()\n{\n    vec2 r = a * b;\n    p = r;\n    gl_Position = q(r + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h, i, j, l;\nuniform vec2 m, n, o;\nuniform vec3 k;\n\nvarying vec2 p;\n\nvoid main()\n{\n    vec4 r = vec4(k, j * (clamp(0.5 - (((abs((length(p) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((max(dot(p, m), max(dot(p, n), dot(p, o))) * h) * i), float(0), float(1))));\n    gl_FragColor = vec4((r.xyz * r.w) * l, r.w * l);\n}\n"), 0, 1, (array_135 = ::uNewArray(::app::Uno::String__typeof(), 15), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_135)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), array_135)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 571, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 m;\n\nvec4 n(vec2 o, mat4 p){\n    return vec4(((o.x * p[0].x) + (o.y * p[1].x)) + p[3].x, ((o.x * p[0].y) + (o.y * p[1].y)) + p[3].y, ((o.x * p[0].z) + (o.y * p[1].z)) + p[3].z, ((o.x * p[0].w) + (o.y * p[1].w)) + p[3].w);\n}\n\nvoid main()\n{\n    vec2 o = a * b;\n    m = o;\n    gl_Position = n(o + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h, i, j, l;\nuniform vec3 k;\n\nvarying vec2 m;\n\nvoid main()\n{\n    vec4 o = vec4(k, j * (clamp(0.5 - (((abs((length(m) - e) - f) - g) * h) * i), float(0), float(1)) * float(1)));\n    gl_FragColor = vec4((o.xyz * o.w) * l, o.w * l);\n}\n"), 0, 1, (array_136 = ::uNewArray(::app::Uno::String__typeof(), 12), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_136)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), array_136)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 572, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c, e, f, g, n;\nuniform mat4 d;\nuniform float o;\n\nattribute vec2 a;\n\nvarying float s;\nvarying vec2 t;\n\nvec4 v(vec2 x, mat4 y){\n    return vec4(((x.x * y[0].x) + (x.y * y[1].x)) + y[3].x, ((x.x * y[0].y) + (x.y * y[1].y)) + y[3].y, ((x.x * y[0].z) + (x.y * y[1].z)) + y[3].z, ((x.x * y[0].w) + (x.y * y[1].w)) + y[3].w);\n}\n\nfloat w(vec2 x, vec2 y, float z){\n    vec2 A = (x * e) - f;\n    float B = dot(A, y) / z;\n    return (B - g.x) / g.y;\n}\n\nvoid main()\n{\n    vec2 x = a * b;\n    vec2 y = x + c;\n    s = w(y / e, n, o);\n    t = x;\n    gl_Position = v(y, d);\n}\n"), ::uGetConstString("uniform float h, i, j, k, l, m;\nuniform vec2 p, q, r;\n\nuniform sampler2D u;\n\nvarying float s;\nvarying vec2 t;\n\nvoid main()\n{\n    vec4 x = texture2D(u, vec2(s, 0.5));\n    vec4 y = vec4(x.xyz, x.w * (clamp(0.5 - (((abs((length(t) - h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((min(dot(t, p), min(dot(t, q), dot(t, r))) * k) * l), float(0), float(1))));\n    gl_FragColor = vec4((y.xyz * y.w) * m, y.w * m);\n}\n"), 0, 1, (array_137 = ::uNewArray(::app::Uno::String__typeof(), 19), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(17) = ::uGetConstString("r"), ::uPtr< ::uArray*>(array_137)->ItemStrong< ::uString*>(18) = ::uGetConstString("u"), array_137)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 573, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c, e, f, g, n;\nuniform mat4 d;\nuniform float o;\n\nattribute vec2 a;\n\nvarying float s;\nvarying vec2 t;\n\nvec4 v(vec2 x, mat4 y){\n    return vec4(((x.x * y[0].x) + (x.y * y[1].x)) + y[3].x, ((x.x * y[0].y) + (x.y * y[1].y)) + y[3].y, ((x.x * y[0].z) + (x.y * y[1].z)) + y[3].z, ((x.x * y[0].w) + (x.y * y[1].w)) + y[3].w);\n}\n\nfloat w(vec2 x, vec2 y, float z){\n    vec2 A = (x * e) - f;\n    float B = dot(A, y) / z;\n    return (B - g.x) / g.y;\n}\n\nvoid main()\n{\n    vec2 x = a * b;\n    vec2 y = x + c;\n    s = w(y / e, n, o);\n    t = x;\n    gl_Position = v(y, d);\n}\n"), ::uGetConstString("uniform float h, i, j, k, l, m;\nuniform vec2 p, q, r;\n\nuniform sampler2D u;\n\nvarying float s;\nvarying vec2 t;\n\nvoid main()\n{\n    vec4 x = texture2D(u, vec2(s, 0.5));\n    vec4 y = vec4(x.xyz, x.w * (clamp(0.5 - (((abs((length(t) - h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((max(dot(t, p), max(dot(t, q), dot(t, r))) * k) * l), float(0), float(1))));\n    gl_FragColor = vec4((y.xyz * y.w) * m, y.w * m);\n}\n"), 0, 1, (array_138 = ::uNewArray(::app::Uno::String__typeof(), 19), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(17) = ::uGetConstString("r"), ::uPtr< ::uArray*>(array_138)->ItemStrong< ::uString*>(18) = ::uGetConstString("u"), array_138)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 574, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c, e, f, g, n;\nuniform mat4 d;\nuniform float o;\n\nattribute vec2 a;\n\nvarying float p;\nvarying vec2 q;\n\nvec4 s(vec2 u, mat4 v){\n    return vec4(((u.x * v[0].x) + (u.y * v[1].x)) + v[3].x, ((u.x * v[0].y) + (u.y * v[1].y)) + v[3].y, ((u.x * v[0].z) + (u.y * v[1].z)) + v[3].z, ((u.x * v[0].w) + (u.y * v[1].w)) + v[3].w);\n}\n\nfloat t(vec2 u, vec2 v, float w){\n    vec2 x = (u * e) - f;\n    float y = dot(x, v) / w;\n    return (y - g.x) / g.y;\n}\n\nvoid main()\n{\n    vec2 u = a * b;\n    vec2 v = u + c;\n    p = t(v / e, n, o);\n    q = u;\n    gl_Position = s(v, d);\n}\n"), ::uGetConstString("uniform float h, i, j, k, l, m;\n\nuniform sampler2D r;\n\nvarying float p;\nvarying vec2 q;\n\nvoid main()\n{\n    vec4 u = texture2D(r, vec2(p, 0.5));\n    vec4 v = vec4(u.xyz, u.w * (clamp(0.5 - (((abs((length(q) - h) - i) - j) * k) * l), float(0), float(1)) * float(1)));\n    gl_FragColor = vec4((v.xyz * v.w) * m, v.w * m);\n}\n"), 0, 1, (array_139 = ::uNewArray(::app::Uno::String__typeof(), 16), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_139)->ItemStrong< ::uString*>(15) = ::uGetConstString("r"), array_139)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 575, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 o;\n\nvec4 p(vec2 q, mat4 r){\n    return vec4(((q.x * r[0].x) + (q.y * r[1].x)) + r[3].x, ((q.x * r[0].y) + (q.y * r[1].y)) + r[3].y, ((q.x * r[0].z) + (q.y * r[1].z)) + r[3].z, ((q.x * r[0].w) + (q.y * r[1].w)) + r[3].w);\n}\n\nvoid main()\n{\n    vec2 q = a * b;\n    o = q;\n    gl_Position = p(q + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h, i, j;\nuniform vec2 l, m, n;\nuniform vec3 k;\n\nvarying vec2 o;\n\nvoid main()\n{\n    vec4 q = vec4(k, j * (clamp(0.5 - (((abs((length(o) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((min(dot(o, l), min(dot(o, m), dot(o, n))) * h) * i), float(0), float(1))));\n    gl_FragColor = vec4((q.xyz * q.w) * 1.0, q.w);\n}\n"), 0, 1, (array_140 = ::uNewArray(::app::Uno::String__typeof(), 14), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_140)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), array_140)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 576, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 o;\n\nvec4 p(vec2 q, mat4 r){\n    return vec4(((q.x * r[0].x) + (q.y * r[1].x)) + r[3].x, ((q.x * r[0].y) + (q.y * r[1].y)) + r[3].y, ((q.x * r[0].z) + (q.y * r[1].z)) + r[3].z, ((q.x * r[0].w) + (q.y * r[1].w)) + r[3].w);\n}\n\nvoid main()\n{\n    vec2 q = a * b;\n    o = q;\n    gl_Position = p(q + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h, i, j;\nuniform vec2 l, m, n;\nuniform vec3 k;\n\nvarying vec2 o;\n\nvoid main()\n{\n    vec4 q = vec4(k, j * (clamp(0.5 - (((abs((length(o) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((max(dot(o, l), max(dot(o, m), dot(o, n))) * h) * i), float(0), float(1))));\n    gl_FragColor = vec4((q.xyz * q.w) * 1.0, q.w);\n}\n"), 0, 1, (array_141 = ::uNewArray(::app::Uno::String__typeof(), 14), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_141)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), array_141)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 577, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 l;\n\nvec4 m(vec2 n, mat4 o){\n    return vec4(((n.x * o[0].x) + (n.y * o[1].x)) + o[3].x, ((n.x * o[0].y) + (n.y * o[1].y)) + o[3].y, ((n.x * o[0].z) + (n.y * o[1].z)) + o[3].z, ((n.x * o[0].w) + (n.y * o[1].w)) + o[3].w);\n}\n\nvoid main()\n{\n    vec2 n = a * b;\n    l = n;\n    gl_Position = m(n + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h, i, j;\nuniform vec3 k;\n\nvarying vec2 l;\n\nvoid main()\n{\n    vec4 n = vec4(k, j * (clamp(0.5 - (((abs((length(l) - e) - f) - g) * h) * i), float(0), float(1)) * float(1)));\n    gl_FragColor = vec4((n.xyz * n.w) * 1.0, n.w);\n}\n"), 0, 1, (array_142 = ::uNewArray(::app::Uno::String__typeof(), 11), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_142)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), array_142)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 578, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, d, f, g, h, i, j;\nuniform mat4 e;\n\nattribute vec2 a;\n\nvarying vec2 s, t;\n\nvec4 v(vec2 w, mat4 x){\n    return vec4(((w.x * x[0].x) + (w.y * x[1].x)) + x[3].x, ((w.x * x[0].y) + (w.y * x[1].y)) + x[3].y, ((w.x * x[0].z) + (w.y * x[1].z)) + x[3].z, ((w.x * x[0].w) + (w.y * x[1].w)) + x[3].w);\n}\n\nvoid main()\n{\n    vec2 w = a * c;\n    vec2 x = w + d;\n    s = ((((f * (x / f)) - g) / h) * i) + j;\n    t = w;\n    gl_Position = v(x, e);\n}\n"), ::uGetConstString("uniform vec4 k;\nuniform float l, m, n, o;\nuniform vec2 p, q, r;\n\nuniform sampler2D u;\n\nvarying vec2 s, t;\n\nvoid main()\n{\n    vec4 w = (b ? vec4(float(0)) : texture2D(u, s)) * k;\n    vec4 x = vec4(w.xyz, w.w * (clamp(0.5 - (((length(t) - l) * m) * n), float(0), float(1)) * clamp(0.5 - ((min(dot(t, p), min(dot(t, q), dot(t, r))) * m) * n), float(0), float(1))));\n    gl_FragColor = vec4((x.xyz * x.w) * o, x.w * o);\n}\n"), 1, 1, (array_143 = ::uNewArray(::app::Uno::String__typeof(), 19), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(17) = ::uGetConstString("r"), ::uPtr< ::uArray*>(array_143)->ItemStrong< ::uString*>(18) = ::uGetConstString("u"), array_143)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 579, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, d, f, g, h, i, j;\nuniform mat4 e;\n\nattribute vec2 a;\n\nvarying vec2 s, t;\n\nvec4 v(vec2 w, mat4 x){\n    return vec4(((w.x * x[0].x) + (w.y * x[1].x)) + x[3].x, ((w.x * x[0].y) + (w.y * x[1].y)) + x[3].y, ((w.x * x[0].z) + (w.y * x[1].z)) + x[3].z, ((w.x * x[0].w) + (w.y * x[1].w)) + x[3].w);\n}\n\nvoid main()\n{\n    vec2 w = a * c;\n    vec2 x = w + d;\n    s = ((((f * (x / f)) - g) / h) * i) + j;\n    t = w;\n    gl_Position = v(x, e);\n}\n"), ::uGetConstString("uniform vec4 k;\nuniform float l, m, n, o;\nuniform vec2 p, q, r;\n\nuniform sampler2D u;\n\nvarying vec2 s, t;\n\nvoid main()\n{\n    vec4 w = (b ? vec4(float(0)) : texture2D(u, s)) * k;\n    vec4 x = vec4(w.xyz, w.w * (clamp(0.5 - (((length(t) - l) * m) * n), float(0), float(1)) * clamp(0.5 - ((max(dot(t, p), max(dot(t, q), dot(t, r))) * m) * n), float(0), float(1))));\n    gl_FragColor = vec4((x.xyz * x.w) * o, x.w * o);\n}\n"), 1, 1, (array_144 = ::uNewArray(::app::Uno::String__typeof(), 19), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(17) = ::uGetConstString("r"), ::uPtr< ::uArray*>(array_144)->ItemStrong< ::uString*>(18) = ::uGetConstString("u"), array_144)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 580, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, d, f, g, h, i, j;\nuniform mat4 e;\n\nattribute vec2 a;\n\nvarying vec2 p, q;\n\nvec4 s(vec2 t, mat4 u){\n    return vec4(((t.x * u[0].x) + (t.y * u[1].x)) + u[3].x, ((t.x * u[0].y) + (t.y * u[1].y)) + u[3].y, ((t.x * u[0].z) + (t.y * u[1].z)) + u[3].z, ((t.x * u[0].w) + (t.y * u[1].w)) + u[3].w);\n}\n\nvoid main()\n{\n    vec2 t = a * c;\n    vec2 u = t + d;\n    p = ((((f * (u / f)) - g) / h) * i) + j;\n    q = t;\n    gl_Position = s(u, e);\n}\n"), ::uGetConstString("uniform vec4 k;\nuniform float l, m, n, o;\n\nuniform sampler2D r;\n\nvarying vec2 p, q;\n\nvoid main()\n{\n    vec4 t = (b ? vec4(float(0)) : texture2D(r, p)) * k;\n    vec4 u = vec4(t.xyz, t.w * (clamp(0.5 - (((length(q) - l) * m) * n), float(0), float(1)) * float(1)));\n    gl_FragColor = vec4((u.xyz * u.w) * o, u.w * o);\n}\n"), 1, 1, (array_145 = ::uNewArray(::app::Uno::String__typeof(), 16), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_145)->ItemStrong< ::uString*>(15) = ::uGetConstString("r"), array_145)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 581, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 n;\n\nvec4 o(vec2 p, mat4 q){\n    return vec4(((p.x * q[0].x) + (p.y * q[1].x)) + q[3].x, ((p.x * q[0].y) + (p.y * q[1].y)) + q[3].y, ((p.x * q[0].z) + (p.y * q[1].z)) + q[3].z, ((p.x * q[0].w) + (p.y * q[1].w)) + q[3].w);\n}\n\nvoid main()\n{\n    vec2 p = a * b;\n    n = p;\n    gl_Position = o(p + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h, j;\nuniform vec2 k, l, m;\nuniform vec3 i;\n\nvarying vec2 n;\n\nvoid main()\n{\n    vec4 p = vec4(i, h * (clamp(0.5 - (((length(n) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((min(dot(n, k), min(dot(n, l), dot(n, m))) * f) * g), float(0), float(1))));\n    gl_FragColor = vec4((p.xyz * p.w) * j, p.w * j);\n}\n"), 0, 1, (array_146 = ::uNewArray(::app::Uno::String__typeof(), 13), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_146)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), array_146)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 582, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 n;\n\nvec4 o(vec2 p, mat4 q){\n    return vec4(((p.x * q[0].x) + (p.y * q[1].x)) + q[3].x, ((p.x * q[0].y) + (p.y * q[1].y)) + q[3].y, ((p.x * q[0].z) + (p.y * q[1].z)) + q[3].z, ((p.x * q[0].w) + (p.y * q[1].w)) + q[3].w);\n}\n\nvoid main()\n{\n    vec2 p = a * b;\n    n = p;\n    gl_Position = o(p + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h, j;\nuniform vec2 k, l, m;\nuniform vec3 i;\n\nvarying vec2 n;\n\nvoid main()\n{\n    vec4 p = vec4(i, h * (clamp(0.5 - (((length(n) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((max(dot(n, k), max(dot(n, l), dot(n, m))) * f) * g), float(0), float(1))));\n    gl_FragColor = vec4((p.xyz * p.w) * j, p.w * j);\n}\n"), 0, 1, (array_147 = ::uNewArray(::app::Uno::String__typeof(), 13), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_147)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), array_147)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 583, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 k;\n\nvec4 l(vec2 m, mat4 n){\n    return vec4(((m.x * n[0].x) + (m.y * n[1].x)) + n[3].x, ((m.x * n[0].y) + (m.y * n[1].y)) + n[3].y, ((m.x * n[0].z) + (m.y * n[1].z)) + n[3].z, ((m.x * n[0].w) + (m.y * n[1].w)) + n[3].w);\n}\n\nvoid main()\n{\n    vec2 m = a * b;\n    k = m;\n    gl_Position = l(m + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h, j;\nuniform vec3 i;\n\nvarying vec2 k;\n\nvoid main()\n{\n    vec4 m = vec4(i, h * (clamp(0.5 - (((length(k) - e) * f) * g), float(0), float(1)) * float(1)));\n    gl_FragColor = vec4((m.xyz * m.w) * j, m.w * j);\n}\n"), 0, 1, (array_148 = ::uNewArray(::app::Uno::String__typeof(), 10), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_148)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), array_148)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 584, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c, e, f, g, l;\nuniform mat4 d;\nuniform float m;\n\nattribute vec2 a;\n\nvarying float q;\nvarying vec2 r;\n\nvec4 t(vec2 v, mat4 w){\n    return vec4(((v.x * w[0].x) + (v.y * w[1].x)) + w[3].x, ((v.x * w[0].y) + (v.y * w[1].y)) + w[3].y, ((v.x * w[0].z) + (v.y * w[1].z)) + w[3].z, ((v.x * w[0].w) + (v.y * w[1].w)) + w[3].w);\n}\n\nfloat u(vec2 v, vec2 w, float x){\n    vec2 y = (v * e) - f;\n    float z = dot(y, w) / x;\n    return (z - g.x) / g.y;\n}\n\nvoid main()\n{\n    vec2 v = a * b;\n    vec2 w = v + c;\n    q = u(w / e, l, m);\n    r = v;\n    gl_Position = t(w, d);\n}\n"), ::uGetConstString("uniform float h, i, j, k;\nuniform vec2 n, o, p;\n\nuniform sampler2D s;\n\nvarying float q;\nvarying vec2 r;\n\nvoid main()\n{\n    vec4 v = texture2D(s, vec2(q, 0.5));\n    vec4 w = vec4(v.xyz, v.w * (clamp(0.5 - (((length(r) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((min(dot(r, n), min(dot(r, o), dot(r, p))) * i) * j), float(0), float(1))));\n    gl_FragColor = vec4((w.xyz * w.w) * k, w.w * k);\n}\n"), 0, 1, (array_149 = ::uNewArray(::app::Uno::String__typeof(), 17), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_149)->ItemStrong< ::uString*>(16) = ::uGetConstString("s"), array_149)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 585, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c, e, f, g, l;\nuniform mat4 d;\nuniform float m;\n\nattribute vec2 a;\n\nvarying float q;\nvarying vec2 r;\n\nvec4 t(vec2 v, mat4 w){\n    return vec4(((v.x * w[0].x) + (v.y * w[1].x)) + w[3].x, ((v.x * w[0].y) + (v.y * w[1].y)) + w[3].y, ((v.x * w[0].z) + (v.y * w[1].z)) + w[3].z, ((v.x * w[0].w) + (v.y * w[1].w)) + w[3].w);\n}\n\nfloat u(vec2 v, vec2 w, float x){\n    vec2 y = (v * e) - f;\n    float z = dot(y, w) / x;\n    return (z - g.x) / g.y;\n}\n\nvoid main()\n{\n    vec2 v = a * b;\n    vec2 w = v + c;\n    q = u(w / e, l, m);\n    r = v;\n    gl_Position = t(w, d);\n}\n"), ::uGetConstString("uniform float h, i, j, k;\nuniform vec2 n, o, p;\n\nuniform sampler2D s;\n\nvarying float q;\nvarying vec2 r;\n\nvoid main()\n{\n    vec4 v = texture2D(s, vec2(q, 0.5));\n    vec4 w = vec4(v.xyz, v.w * (clamp(0.5 - (((length(r) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((max(dot(r, n), max(dot(r, o), dot(r, p))) * i) * j), float(0), float(1))));\n    gl_FragColor = vec4((w.xyz * w.w) * k, w.w * k);\n}\n"), 0, 1, (array_150 = ::uNewArray(::app::Uno::String__typeof(), 17), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_150)->ItemStrong< ::uString*>(16) = ::uGetConstString("s"), array_150)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 586, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c, e, f, g, l;\nuniform mat4 d;\nuniform float m;\n\nattribute vec2 a;\n\nvarying float n;\nvarying vec2 o;\n\nvec4 q(vec2 s, mat4 t){\n    return vec4(((s.x * t[0].x) + (s.y * t[1].x)) + t[3].x, ((s.x * t[0].y) + (s.y * t[1].y)) + t[3].y, ((s.x * t[0].z) + (s.y * t[1].z)) + t[3].z, ((s.x * t[0].w) + (s.y * t[1].w)) + t[3].w);\n}\n\nfloat r(vec2 s, vec2 t, float u){\n    vec2 v = (s * e) - f;\n    float w = dot(v, t) / u;\n    return (w - g.x) / g.y;\n}\n\nvoid main()\n{\n    vec2 s = a * b;\n    vec2 t = s + c;\n    n = r(t / e, l, m);\n    o = s;\n    gl_Position = q(t, d);\n}\n"), ::uGetConstString("uniform float h, i, j, k;\n\nuniform sampler2D p;\n\nvarying float n;\nvarying vec2 o;\n\nvoid main()\n{\n    vec4 s = texture2D(p, vec2(n, 0.5));\n    vec4 t = vec4(s.xyz, s.w * (clamp(0.5 - (((length(o) - h) * i) * j), float(0), float(1)) * float(1)));\n    gl_FragColor = vec4((t.xyz * t.w) * k, t.w * k);\n}\n"), 0, 1, (array_151 = ::uNewArray(::app::Uno::String__typeof(), 14), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_151)->ItemStrong< ::uString*>(13) = ::uGetConstString("p"), array_151)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 587, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 m;\n\nvec4 n(vec2 o, mat4 p){\n    return vec4(((o.x * p[0].x) + (o.y * p[1].x)) + p[3].x, ((o.x * p[0].y) + (o.y * p[1].y)) + p[3].y, ((o.x * p[0].z) + (o.y * p[1].z)) + p[3].z, ((o.x * p[0].w) + (o.y * p[1].w)) + p[3].w);\n}\n\nvoid main()\n{\n    vec2 o = a * b;\n    m = o;\n    gl_Position = n(o + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h;\nuniform vec2 j, k, l;\nuniform vec3 i;\n\nvarying vec2 m;\n\nvoid main()\n{\n    vec4 o = vec4(i, h * (clamp(0.5 - (((length(m) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((min(dot(m, j), min(dot(m, k), dot(m, l))) * f) * g), float(0), float(1))));\n    gl_FragColor = vec4((o.xyz * o.w) * 1.0, o.w);\n}\n"), 0, 1, (array_152 = ::uNewArray(::app::Uno::String__typeof(), 12), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_152)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), array_152)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 588, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 m;\n\nvec4 n(vec2 o, mat4 p){\n    return vec4(((o.x * p[0].x) + (o.y * p[1].x)) + p[3].x, ((o.x * p[0].y) + (o.y * p[1].y)) + p[3].y, ((o.x * p[0].z) + (o.y * p[1].z)) + p[3].z, ((o.x * p[0].w) + (o.y * p[1].w)) + p[3].w);\n}\n\nvoid main()\n{\n    vec2 o = a * b;\n    m = o;\n    gl_Position = n(o + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h;\nuniform vec2 j, k, l;\nuniform vec3 i;\n\nvarying vec2 m;\n\nvoid main()\n{\n    vec4 o = vec4(i, h * (clamp(0.5 - (((length(m) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((max(dot(m, j), max(dot(m, k), dot(m, l))) * f) * g), float(0), float(1))));\n    gl_FragColor = vec4((o.xyz * o.w) * 1.0, o.w);\n}\n"), 0, 1, (array_153 = ::uNewArray(::app::Uno::String__typeof(), 12), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_153)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), array_153)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 589, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 j;\n\nvec4 k(vec2 l, mat4 m){\n    return vec4(((l.x * m[0].x) + (l.y * m[1].x)) + m[3].x, ((l.x * m[0].y) + (l.y * m[1].y)) + m[3].y, ((l.x * m[0].z) + (l.y * m[1].z)) + m[3].z, ((l.x * m[0].w) + (l.y * m[1].w)) + m[3].w);\n}\n\nvoid main()\n{\n    vec2 l = a * b;\n    j = l;\n    gl_Position = k(l + c, d);\n}\n"), ::uGetConstString("uniform float e, f, g, h;\nuniform vec3 i;\n\nvarying vec2 j;\n\nvoid main()\n{\n    vec4 l = vec4(i, h * (clamp(0.5 - (((length(j) - e) * f) * g), float(0), float(1)) * float(1)));\n    gl_FragColor = vec4((l.xyz * l.w) * 1.0, l.w);\n}\n"), 0, 1, (array_154 = ::uNewArray(::app::Uno::String__typeof(), 9), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_154)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), array_154)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 590, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float f[d];\nuniform vec2 g, i, j, k, l, m;\nuniform mat4 h;\n\nattribute vec4 a, b;\nattribute float c;\n\nvarying float t;\nvarying vec2 u, v, w;\n\nvec4 y(vec2 z, mat4 A){\n    return vec4(((z.x * A[0].x) + (z.y * A[1].x)) + A[3].x, ((z.x * A[0].y) + (z.y * A[1].y)) + A[3].y, ((z.x * A[0].z) + (z.y * A[1].z)) + A[3].z, ((z.x * A[0].w) + (z.y * A[1].w)) + A[3].w);\n}\n\nvoid main()\n{\n    vec2 z = vec2((sign(a.x) * f[int(abs(a.x))]) + (sign(a.y) * f[int(abs(a.y))]), (sign(a.z) * f[int(abs(a.z))]) + (sign(a.w) * f[int(abs(a.w))])) + g;\n    t = f[int(c)];\n    u = ((((i * (z / i)) - j) / k) * l) + m;\n    v = z;\n    w = vec2((sign(b.x) * f[int(abs(b.x))]) + (sign(b.y) * f[int(abs(b.y))]), (sign(b.z) * f[int(abs(b.z))]) + (sign(b.w) * f[int(abs(b.w))])) + g;\n    gl_Position = y(z, h);\n}\n"), ::uGetConstString("uniform vec4 n;\nuniform float o, p, q, r, s;\n\nuniform sampler2D x;\n\nvarying float t;\nvarying vec2 u, v, w;\n\nvoid main()\n{\n    vec4 z = (e ? vec4(float(0)) : texture2D(x, u)) * n;\n    vec4 A = vec4(z.xyz, z.w * clamp(0.5 - (((abs((distance(v, w) - t) - o) - p) * q) * r), float(0), float(1)));\n    gl_FragColor = vec4((A.xyz * A.w) * s, A.w * s);\n}\n"), 2, 3, (array_155 = ::uNewArray(::app::Uno::String__typeof(), 20), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(0) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(1) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(2) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(3) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(4) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(17) = ::uGetConstString("r"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(18) = ::uGetConstString("s"), ::uPtr< ::uArray*>(array_155)->ItemStrong< ::uString*>(19) = ::uGetConstString("x"), array_155)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 591, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float e[d];\nuniform vec2 f;\nuniform mat4 g;\n\nattribute vec4 a, b;\nattribute float c;\n\nvarying float o;\nvarying vec2 p, q;\n\nvec4 r(vec2 s, mat4 t){\n    return vec4(((s.x * t[0].x) + (s.y * t[1].x)) + t[3].x, ((s.x * t[0].y) + (s.y * t[1].y)) + t[3].y, ((s.x * t[0].z) + (s.y * t[1].z)) + t[3].z, ((s.x * t[0].w) + (s.y * t[1].w)) + t[3].w);\n}\n\nvoid main()\n{\n    vec2 s = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n    o = e[int(c)];\n    p = s;\n    q = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n    gl_Position = r(s, g);\n}\n"), ::uGetConstString("uniform float h, i, j, k, l, n;\nuniform vec3 m;\n\nvarying float o;\nvarying vec2 p, q;\n\nvoid main()\n{\n    vec4 s = vec4(m, l * clamp(0.5 - (((abs((distance(p, q) - o) - h) - i) * j) * k), float(0), float(1)));\n    gl_FragColor = vec4((s.xyz * s.w) * n, s.w * n);\n}\n"), 1, 3, (array_156 = ::uNewArray(::app::Uno::String__typeof(), 14), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(0) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(2) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(3) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_156)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), array_156)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 592, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float e[d], q;\nuniform vec2 f, h, i, j, p;\nuniform mat4 g;\n\nattribute vec4 a, b;\nattribute float c;\n\nvarying float r, s;\nvarying vec2 t, u;\n\nvec4 w(vec2 y, mat4 z){\n    return vec4(((y.x * z[0].x) + (y.y * z[1].x)) + z[3].x, ((y.x * z[0].y) + (y.y * z[1].y)) + z[3].y, ((y.x * z[0].z) + (y.y * z[1].z)) + z[3].z, ((y.x * z[0].w) + (y.y * z[1].w)) + z[3].w);\n}\n\nfloat x(vec2 y, vec2 z, float A){\n    vec2 B = (y * h) - i;\n    float C = dot(B, z) / A;\n    return (C - j.x) / j.y;\n}\n\nvoid main()\n{\n    vec2 y = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n    r = e[int(c)];\n    s = x(y / h, p, q);\n    t = y;\n    u = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n    gl_Position = w(y, g);\n}\n"), ::uGetConstString("uniform float k, l, m, n, o;\n\nuniform sampler2D v;\n\nvarying float r, s;\nvarying vec2 t, u;\n\nvoid main()\n{\n    vec4 y = texture2D(v, vec2(s, 0.5));\n    vec4 z = vec4(y.xyz, y.w * clamp(0.5 - (((abs((distance(t, u) - r) - k) - l) * m) * n), float(0), float(1)));\n    gl_FragColor = vec4((z.xyz * z.w) * o, z.w * o);\n}\n"), 1, 3, (array_157 = ::uNewArray(::app::Uno::String__typeof(), 18), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(0) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(2) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(3) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_157)->ItemStrong< ::uString*>(17) = ::uGetConstString("v"), array_157)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 593, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float e[d];\nuniform vec2 f;\nuniform mat4 g;\n\nattribute vec4 a, b;\nattribute float c;\n\nvarying float n;\nvarying vec2 o, p;\n\nvec4 q(vec2 r, mat4 s){\n    return vec4(((r.x * s[0].x) + (r.y * s[1].x)) + s[3].x, ((r.x * s[0].y) + (r.y * s[1].y)) + s[3].y, ((r.x * s[0].z) + (r.y * s[1].z)) + s[3].z, ((r.x * s[0].w) + (r.y * s[1].w)) + s[3].w);\n}\n\nvoid main()\n{\n    vec2 r = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n    n = e[int(c)];\n    o = r;\n    p = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n    gl_Position = q(r, g);\n}\n"), ::uGetConstString("uniform float h, i, j, k, l;\nuniform vec3 m;\n\nvarying float n;\nvarying vec2 o, p;\n\nvoid main()\n{\n    vec4 r = vec4(m, l * clamp(0.5 - (((abs((distance(o, p) - n) - h) - i) * j) * k), float(0), float(1)));\n    gl_FragColor = vec4((r.xyz * r.w) * 1.0, r.w);\n}\n"), 1, 3, (array_158 = ::uNewArray(::app::Uno::String__typeof(), 13), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(0) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(2) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(3) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_158)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), array_158)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 594, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float f[d];\nuniform vec2 g, i, j, k, l, m;\nuniform mat4 h;\n\nattribute vec4 a, b;\nattribute float c;\n\nvarying float r;\nvarying vec2 s, t, u;\n\nvec4 w(vec2 x, mat4 y){\n    return vec4(((x.x * y[0].x) + (x.y * y[1].x)) + y[3].x, ((x.x * y[0].y) + (x.y * y[1].y)) + y[3].y, ((x.x * y[0].z) + (x.y * y[1].z)) + y[3].z, ((x.x * y[0].w) + (x.y * y[1].w)) + y[3].w);\n}\n\nvoid main()\n{\n    vec2 x = vec2((sign(a.x) * f[int(abs(a.x))]) + (sign(a.y) * f[int(abs(a.y))]), (sign(a.z) * f[int(abs(a.z))]) + (sign(a.w) * f[int(abs(a.w))])) + g;\n    r = f[int(c)];\n    s = ((((i * (x / i)) - j) / k) * l) + m;\n    t = x;\n    u = vec2((sign(b.x) * f[int(abs(b.x))]) + (sign(b.y) * f[int(abs(b.y))]), (sign(b.z) * f[int(abs(b.z))]) + (sign(b.w) * f[int(abs(b.w))])) + g;\n    gl_Position = w(x, h);\n}\n"), ::uGetConstString("uniform vec4 n;\nuniform float o, p, q;\n\nuniform sampler2D v;\n\nvarying float r;\nvarying vec2 s, t, u;\n\nvoid main()\n{\n    vec4 x = (e ? vec4(float(0)) : texture2D(v, s)) * n;\n    vec4 y = vec4(x.xyz, x.w * clamp(0.5 - (((distance(t, u) - r) * o) * p), float(0), float(1)));\n    gl_FragColor = vec4((y.xyz * y.w) * q, y.w * q);\n}\n"), 2, 3, (array_159 = ::uNewArray(::app::Uno::String__typeof(), 18), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(0) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(1) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(2) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(3) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(4) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_159)->ItemStrong< ::uString*>(17) = ::uGetConstString("v"), array_159)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 595, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float e[d];\nuniform vec2 f;\nuniform mat4 g;\n\nattribute vec4 a, b;\nattribute float c;\n\nvarying float m;\nvarying vec2 n, o;\n\nvec4 p(vec2 q, mat4 r){\n    return vec4(((q.x * r[0].x) + (q.y * r[1].x)) + r[3].x, ((q.x * r[0].y) + (q.y * r[1].y)) + r[3].y, ((q.x * r[0].z) + (q.y * r[1].z)) + r[3].z, ((q.x * r[0].w) + (q.y * r[1].w)) + r[3].w);\n}\n\nvoid main()\n{\n    vec2 q = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n    m = e[int(c)];\n    n = q;\n    o = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n    gl_Position = p(q, g);\n}\n"), ::uGetConstString("uniform float h, i, j, l;\nuniform vec3 k;\n\nvarying float m;\nvarying vec2 n, o;\n\nvoid main()\n{\n    vec4 q = vec4(k, j * clamp(0.5 - (((distance(n, o) - m) * h) * i), float(0), float(1)));\n    gl_FragColor = vec4((q.xyz * q.w) * l, q.w * l);\n}\n"), 1, 3, (array_160 = ::uNewArray(::app::Uno::String__typeof(), 12), ::uPtr< ::uArray*>(array_160)->ItemStrong< ::uString*>(0) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_160)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_160)->ItemStrong< ::uString*>(2) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_160)->ItemStrong< ::uString*>(3) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_160)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_160)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_160)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_160)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_160)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_160)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_160)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_160)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), array_160)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 596, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float e[d], o;\nuniform vec2 f, h, i, j, n;\nuniform mat4 g;\n\nattribute vec4 a, b;\nattribute float c;\n\nvarying float p, q;\nvarying vec2 r, s;\n\nvec4 u(vec2 w, mat4 x){\n    return vec4(((w.x * x[0].x) + (w.y * x[1].x)) + x[3].x, ((w.x * x[0].y) + (w.y * x[1].y)) + x[3].y, ((w.x * x[0].z) + (w.y * x[1].z)) + x[3].z, ((w.x * x[0].w) + (w.y * x[1].w)) + x[3].w);\n}\n\nfloat v(vec2 w, vec2 x, float y){\n    vec2 z = (w * h) - i;\n    float A = dot(z, x) / y;\n    return (A - j.x) / j.y;\n}\n\nvoid main()\n{\n    vec2 w = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n    p = e[int(c)];\n    q = v(w / h, n, o);\n    r = w;\n    s = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n    gl_Position = u(w, g);\n}\n"), ::uGetConstString("uniform float k, l, m;\n\nuniform sampler2D t;\n\nvarying float p, q;\nvarying vec2 r, s;\n\nvoid main()\n{\n    vec4 w = texture2D(t, vec2(q, 0.5));\n    vec4 x = vec4(w.xyz, w.w * clamp(0.5 - (((distance(r, s) - p) * k) * l), float(0), float(1)));\n    gl_FragColor = vec4((x.xyz * x.w) * m, x.w * m);\n}\n"), 1, 3, (array_161 = ::uNewArray(::app::Uno::String__typeof(), 16), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(0) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(2) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(3) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_161)->ItemStrong< ::uString*>(15) = ::uGetConstString("t"), array_161)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 597, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float e[d];\nuniform vec2 f;\nuniform mat4 g;\n\nattribute vec4 a, b;\nattribute float c;\n\nvarying float l;\nvarying vec2 m, n;\n\nvec4 o(vec2 p, mat4 q){\n    return vec4(((p.x * q[0].x) + (p.y * q[1].x)) + q[3].x, ((p.x * q[0].y) + (p.y * q[1].y)) + q[3].y, ((p.x * q[0].z) + (p.y * q[1].z)) + q[3].z, ((p.x * q[0].w) + (p.y * q[1].w)) + q[3].w);\n}\n\nvoid main()\n{\n    vec2 p = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n    l = e[int(c)];\n    m = p;\n    n = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n    gl_Position = o(p, g);\n}\n"), ::uGetConstString("uniform float h, i, j;\nuniform vec3 k;\n\nvarying float l;\nvarying vec2 m, n;\n\nvoid main()\n{\n    vec4 p = vec4(k, j * clamp(0.5 - (((distance(m, n) - l) * h) * i), float(0), float(1)));\n    gl_FragColor = vec4((p.xyz * p.w) * 1.0, p.w);\n}\n"), 1, 3, (array_162 = ::uNewArray(::app::Uno::String__typeof(), 11), ::uPtr< ::uArray*>(array_162)->ItemStrong< ::uString*>(0) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_162)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_162)->ItemStrong< ::uString*>(2) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_162)->ItemStrong< ::uString*>(3) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_162)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_162)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_162)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_162)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_162)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_162)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_162)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), array_162)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 598, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("attribute vec2 a;\n\nvarying vec2 g;\n\nvoid main()\n{\n    g = a;\n    gl_Position = vec4((a.x * float(2)) - float(1), (-a.y * float(2)) + float(1), float(0), float(1));\n}\n"), ::uGetConstString("uniform float d[b], e;\nuniform vec4 f[c];\n\nvarying vec2 g;\n\nvec4 h(vec2 i){\n    float j = d[0] + (e * i.x);\n    vec4 k = f[0];\n\n    for (int l = 0; l < (b - 1); l++)\n    {\n        float m = d[l];\n        float n = d[l + 1];\n        vec4 o = f[l + 1];\n        k = mix(k, o, smoothstep(m, n, j));\n    }\n\n    return k;\n}\n\nvoid main()\n{\n    gl_FragColor = h(g);\n}\n"), 2, 1, (array_163 = ::uNewArray(::app::Uno::String__typeof(), 6), ::uPtr< ::uArray*>(array_163)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_163)->ItemStrong< ::uString*>(1) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_163)->ItemStrong< ::uString*>(2) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_163)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_163)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_163)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), array_163)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 599, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c;\nuniform vec2 d, e, f, g, h;\n\nattribute vec2 a;\n\nvarying vec2 k;\n\nvec4 m(vec2 n, mat4 o){\n    return vec4(((n.x * o[0].x) + (n.y * o[1].x)) + o[3].x, ((n.x * o[0].y) + (n.y * o[1].y)) + o[3].y, ((n.x * o[0].z) + (n.y * o[1].z)) + o[3].z, ((n.x * o[0].w) + (n.y * o[1].w)) + o[3].w);\n}\n\nvoid main()\n{\n    k = ((((d * (a / d)) - e) / f) * g) + h;\n    gl_Position = m(a, c);\n}\n"), ::uGetConstString("uniform vec4 i;\nuniform float j;\n\nuniform sampler2D l;\n\nvarying vec2 k;\n\nvoid main()\n{\n    vec4 n = (b ? vec4(float(0)) : texture2D(l, k)) * i;\n    gl_FragColor = vec4((n.xyz * n.w) * j, n.w * j);\n}\n"), 1, 1, (array_164 = ::uNewArray(::app::Uno::String__typeof(), 11), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_164)->ItemStrong< ::uString*>(10) = ::uGetConstString("l"), array_164)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 600, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 b;\n\nattribute vec2 a;\n\nvec4 d(vec2 e, mat4 f){\n    return vec4(((e.x * f[0].x) + (e.y * f[1].x)) + f[3].x, ((e.x * f[0].y) + (e.y * f[1].y)) + f[3].y, ((e.x * f[0].z) + (e.y * f[1].z)) + f[3].z, ((e.x * f[0].w) + (e.y * f[1].w)) + f[3].w);\n}\n\nvoid main()\n{\n    gl_Position = d(a, b);\n}\n"), ::uGetConstString("uniform vec4 c;\n\nvoid main()\n{\n    gl_FragColor = c;\n}\n"), 0, 1, (array_165 = ::uNewArray(::app::Uno::String__typeof(), 3), ::uPtr< ::uArray*>(array_165)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_165)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_165)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), array_165)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 601, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 b;\nuniform vec2 c, d, e, g;\nuniform float h;\n\nattribute vec2 a;\n\nvarying float i;\n\nvec4 k(vec2 m, mat4 n){\n    return vec4(((m.x * n[0].x) + (m.y * n[1].x)) + n[3].x, ((m.x * n[0].y) + (m.y * n[1].y)) + n[3].y, ((m.x * n[0].z) + (m.y * n[1].z)) + n[3].z, ((m.x * n[0].w) + (m.y * n[1].w)) + n[3].w);\n}\n\nfloat l(vec2 m, vec2 n, float o){\n    vec2 p = (m * c) - d;\n    float q = dot(p, n) / o;\n    return (q - e.x) / e.y;\n}\n\nvoid main()\n{\n    i = l(a / c, g, h);\n    gl_Position = k(a, b);\n}\n"), ::uGetConstString("uniform float f;\n\nuniform sampler2D j;\n\nvarying float i;\n\nvoid main()\n{\n    vec4 m = texture2D(j, vec2(i, 0.5));\n    gl_FragColor = vec4((m.xyz * m.w) * f, m.w * f);\n}\n"), 0, 1, (array_166 = ::uNewArray(::app::Uno::String__typeof(), 9), ::uPtr< ::uArray*>(array_166)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_166)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_166)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_166)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_166)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_166)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_166)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_166)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_166)->ItemStrong< ::uString*>(8) = ::uGetConstString("j"), array_166)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 602, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c;\nuniform vec2 d, e, f, g, h;\n\nattribute vec4 a;\n\nvarying vec4 k;\nvarying vec2 l;\n\nvec4 n(vec2 o, mat4 p){\n    return vec4(((o.x * p[0].x) + (o.y * p[1].x)) + p[3].x, ((o.x * p[0].y) + (o.y * p[1].y)) + p[3].y, ((o.x * p[0].z) + (o.y * p[1].z)) + p[3].z, ((o.x * p[0].w) + (o.y * p[1].w)) + p[3].w);\n}\n\nvoid main()\n{\n    k = vec4(float(1), float(1), float(1), a.zw.x);\n    l = ((((d * (a.xy / d)) - e) / f) * g) + h;\n    gl_Position = n(a.xy, c);\n}\n"), ::uGetConstString("uniform vec4 i;\nuniform float j;\n\nuniform sampler2D m;\n\nvarying vec4 k;\nvarying vec2 l;\n\nvoid main()\n{\n    vec4 o = ((b ? vec4(float(0)) : texture2D(m, l)) * i) * k;\n    gl_FragColor = vec4((o.xyz * o.w) * j, o.w * j);\n}\n"), 1, 1, (array_167 = ::uNewArray(::app::Uno::String__typeof(), 11), ::uPtr< ::uArray*>(array_167)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_167)->ItemStrong< ::uString*>(1) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_167)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_167)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_167)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_167)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_167)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_167)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_167)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_167)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_167)->ItemStrong< ::uString*>(10) = ::uGetConstString("m"), array_167)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 603, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 b;\nuniform vec4 c;\nuniform float d;\n\nattribute vec4 a;\n\nvarying vec4 e;\n\nvec4 f(vec2 g, mat4 h){\n    return vec4(((g.x * h[0].x) + (g.y * h[1].x)) + h[3].x, ((g.x * h[0].y) + (g.y * h[1].y)) + h[3].y, ((g.x * h[0].z) + (g.y * h[1].z)) + h[3].z, ((g.x * h[0].w) + (g.y * h[1].w)) + h[3].w);\n}\n\nvoid main()\n{\n    vec4 g = c * vec4(float(1), float(1), float(1), a.zw.x);\n    e = vec4((g.xyz * g.w) * d, g.w * d);\n    gl_Position = f(a.xy, b);\n}\n"), ::uGetConstString("varying vec4 e;\n\nvoid main()\n{\n    gl_FragColor = e;\n}\n"), 0, 1, (array_168 = ::uNewArray(::app::Uno::String__typeof(), 4), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_168)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), array_168)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 604, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 b;\nuniform vec2 c, d, e, g;\nuniform float h;\n\nattribute vec4 a;\n\nvarying vec4 i;\nvarying float j;\n\nvec4 l(vec2 n, mat4 o){\n    return vec4(((n.x * o[0].x) + (n.y * o[1].x)) + o[3].x, ((n.x * o[0].y) + (n.y * o[1].y)) + o[3].y, ((n.x * o[0].z) + (n.y * o[1].z)) + o[3].z, ((n.x * o[0].w) + (n.y * o[1].w)) + o[3].w);\n}\n\nfloat m(vec2 n, vec2 o, float p){\n    vec2 q = (n * c) - d;\n    float r = dot(q, o) / p;\n    return (r - e.x) / e.y;\n}\n\nvoid main()\n{\n    i = vec4(float(1), float(1), float(1), a.zw.x);\n    j = m(a.xy / c, g, h);\n    gl_Position = l(a.xy, b);\n}\n"), ::uGetConstString("uniform float f;\n\nuniform sampler2D k;\n\nvarying vec4 i;\nvarying float j;\n\nvoid main()\n{\n    vec4 n = texture2D(k, vec2(j, 0.5)) * i;\n    gl_FragColor = vec4((n.xyz * n.w) * f, n.w * f);\n}\n"), 0, 1, (array_169 = ::uNewArray(::app::Uno::String__typeof(), 9), ::uPtr< ::uArray*>(array_169)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_169)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_169)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_169)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_169)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_169)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_169)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_169)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_169)->ItemStrong< ::uString*>(8) = ::uGetConstString("k"), array_169)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 605, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 b;\nuniform vec4 c;\n\nattribute vec4 a;\n\nvarying vec4 d;\n\nvec4 e(vec2 f, mat4 g){\n    return vec4(((f.x * g[0].x) + (f.y * g[1].x)) + g[3].x, ((f.x * g[0].y) + (f.y * g[1].y)) + g[3].y, ((f.x * g[0].z) + (f.y * g[1].z)) + g[3].z, ((f.x * g[0].w) + (f.y * g[1].w)) + g[3].w);\n}\n\nvoid main()\n{\n    vec4 f = c * vec4(float(1), float(1), float(1), a.zw.x);\n    d = vec4((f.xyz * f.w) * 1.0, f.w);\n    gl_Position = e(a.xy, b);\n}\n"), ::uGetConstString("varying vec4 d;\n\nvoid main()\n{\n    gl_FragColor = d;\n}\n"), 0, 1, (array_170 = ::uNewArray(::app::Uno::String__typeof(), 3), ::uPtr< ::uArray*>(array_170)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_170)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_170)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), array_170)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 606, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform float c, d, e, f, g, h, k, l, m, n;\nuniform mat4 i, j;\nuniform vec2 o;\n\nattribute vec3 a, b;\n\nvarying vec2 q;\n\nvoid main()\n{\n    q = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\n    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\n}\n"), ::uGetConstString("uniform vec4 p;\n\nuniform sampler2D r;\n\nvarying vec2 q;\n\nvoid main()\n{\n    gl_FragColor = texture2D(r, q) * p;\n}\n"), 0, 2, (array_171 = ::uNewArray(::app::Uno::String__typeof(), 17), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_171)->ItemStrong< ::uString*>(16) = ::uGetConstString("r"), array_171)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 607, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b;\nuniform mat4 c, d;\n\nattribute vec2 a;\n\nvarying vec2 f;\n\nvoid main()\n{\n    f = vec2(a.x, 1.0 - a.y);\n    gl_Position = d * (c * vec4(a * b, float(0), float(1)));\n}\n"), ::uGetConstString("uniform float e;\n\nuniform sampler2D g;\n\nvarying vec2 f;\n\nvoid main()\n{\n    vec4 h = texture2D(g, f);\n    gl_FragColor = vec4(h.xyz * e, h.w * e);\n}\n"), 0, 1, (array_172 = ::uNewArray(::app::Uno::String__typeof(), 6), ::uPtr< ::uArray*>(array_172)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_172)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_172)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_172)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_172)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_172)->ItemStrong< ::uString*>(5) = ::uGetConstString("g"), array_172)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 608, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c;\n\nattribute vec3 a;\nattribute vec2 b;\n\nvarying float d;\nvarying vec2 e;\n\nvoid main()\n{\n    d = a.z;\n    e = vec2(b.x, 1.0 - b.y);\n    gl_Position = (a.z > float(0)) ? (c * vec4(a.xy, float(0), float(1))) : vec4(float(0), float(0), float(0), float(-1));\n}\n"), ::uGetConstString("uniform sampler2D f;\n\nvarying float d;\nvarying vec2 e;\n\nvoid main()\n{\n    gl_FragColor = texture2D(f, e) * d;\n}\n"), 0, 2, (array_173 = ::uNewArray(::app::Uno::String__typeof(), 4), ::uPtr< ::uArray*>(array_173)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_173)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_173)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_173)->ItemStrong< ::uString*>(3) = ::uGetConstString("f"), array_173)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 609, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c, b;\n\nattribute vec2 a;\n\nvarying vec2 d;\n\nvoid main()\n{\n    d = false ? vec2(a.x, float(1) - a.y) : a;\n    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform sampler2D e;\n\nvarying vec2 d;\n\nvoid main()\n{\n    gl_FragColor = texture2D(e, d);\n}\n"), 0, 1, (array_174 = ::uNewArray(::app::Uno::String__typeof(), 4), ::uPtr< ::uArray*>(array_174)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_174)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_174)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_174)->ItemStrong< ::uString*>(3) = ::uGetConstString("e"), array_174)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 610, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c, b;\n\nattribute vec2 a;\n\nvarying vec2 d;\n\nvoid main()\n{\n    d = true ? vec2(a.x, float(1) - a.y) : a;\n    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform sampler2D e;\n\nvarying vec2 d;\n\nvoid main()\n{\n    vec4 f = texture2D(e, d);\n    gl_FragColor = vec4(f.xyz / f.w, f.w);\n}\n"), 0, 1, (array_175 = ::uNewArray(::app::Uno::String__typeof(), 4), ::uPtr< ::uArray*>(array_175)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_175)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_175)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_175)->ItemStrong< ::uString*>(3) = ::uGetConstString("e"), array_175)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 611, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 d, b;\n\nattribute vec2 a;\n\nvarying vec2 e;\n\nvoid main()\n{\n    e = true ? vec2(a.x, float(1) - a.y) : a;\n    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform float c;\n\nuniform sampler2D f;\n\nvarying vec2 e;\n\nvoid main()\n{\n    vec4 g = texture2D(f, e);\n    vec4 h = vec4(g.xyz / g.w, g.w);\n    gl_FragColor = vec4(mix(h.xyz, vec3(sqrt(dot(h.xyz * h.xyz, vec3(0.299, 0.587, 0.114)))), c), h.w);\n}\n"), 0, 1, (array_176 = ::uNewArray(::app::Uno::String__typeof(), 5), ::uPtr< ::uArray*>(array_176)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_176)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_176)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_176)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_176)->ItemStrong< ::uString*>(4) = ::uGetConstString("f"), array_176)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 612, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 e, b;\n\nattribute vec2 a;\n\nvarying vec2 g;\n\nvoid main()\n{\n    g = true ? vec2(a.x, float(1) - a.y) : a;\n    gl_Position = b * (e * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform vec3 d;\nuniform float f, c;\n\nuniform sampler2D h;\n\nvarying vec2 g;\n\nvoid main()\n{\n    gl_FragColor = vec4(d, clamp(texture2D(h, g).w * f, float(0), float(1)) * c);\n}\n"), 0, 1, (array_177 = ::uNewArray(::app::Uno::String__typeof(), 7), ::uPtr< ::uArray*>(array_177)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_177)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_177)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_177)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_177)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_177)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_177)->ItemStrong< ::uString*>(6) = ::uGetConstString("h"), array_177)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 613, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("attribute vec2 a;\n\nvarying vec2 b;\n\nvoid main()\n{\n    vec3 d = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n    b = (d.xy * 0.5) + 0.5;\n    gl_Position = vec4(d, float(1));\n}\n"), ::uGetConstString("uniform sampler2D c;\n\nvarying vec2 b;\n\nvoid main()\n{\n    gl_FragColor = texture2D(c, b);\n}\n"), 0, 1, (array_178 = ::uNewArray(::app::Uno::String__typeof(), 2), ::uPtr< ::uArray*>(array_178)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_178)->ItemStrong< ::uString*>(1) = ::uGetConstString("c"), array_178)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 614, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, e, f, g;\n\nattribute vec2 a;\n\nvarying vec2 h, i, j, k, l;\n\nvoid main()\n{\n    vec3 n = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n    vec2 o = (n.xy * 0.5) + 0.5;\n    h = o;\n    i = o + c;\n    j = o + e;\n    k = o + f;\n    l = o + g;\n    gl_Position = vec4(n, float(1));\n}\n"), ::uGetConstString("uniform float b, d;\n\nuniform sampler2D m;\n\nvarying vec2 h, i, j, k, l;\n\nvoid main()\n{\n    gl_FragColor = ((((texture2D(m, h) * b) + (texture2D(m, i) * d)) + (texture2D(m, j) * d)) + (texture2D(m, k) * d)) + (texture2D(m, l) * d);\n}\n"), 0, 1, (array_179 = ::uNewArray(::app::Uno::String__typeof(), 8), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_179)->ItemStrong< ::uString*>(7) = ::uGetConstString("m"), array_179)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 615, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, e, f, h, i, j;\n\nattribute vec2 a;\n\nvarying vec2 k, l, m, n, o, p, q, r, s;\n\nvoid main()\n{\n    vec3 u = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n    vec2 v = (u.xy * 0.5) + 0.5;\n    k = v;\n    l = v + c;\n    m = v - c;\n    n = v + e;\n    o = v - e;\n    p = v + f;\n    q = v + h;\n    r = v + i;\n    s = v + j;\n    gl_Position = vec4(u, float(1));\n}\n"), ::uGetConstString("uniform float b, d, g;\n\nuniform sampler2D t;\n\nvarying vec2 k, l, m, n, o, p, q, r, s;\n\nvoid main()\n{\n    gl_FragColor = ((((((((texture2D(t, k) * b) + (texture2D(t, l) * d)) + (texture2D(t, m) * d)) + (texture2D(t, n) * d)) + (texture2D(t, o) * d)) + (texture2D(t, p) * g)) + (texture2D(t, q) * g)) + (texture2D(t, r) * g)) + (texture2D(t, s) * g);\n}\n"), 0, 1, (array_180 = ::uNewArray(::app::Uno::String__typeof(), 11), ::uPtr< ::uArray*>(array_180)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_180)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_180)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_180)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_180)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_180)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_180)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_180)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_180)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_180)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_180)->ItemStrong< ::uString*>(10) = ::uGetConstString("t"), array_180)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 616, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("attribute vec2 a;\n\nvarying vec2 g;\n\nvoid main()\n{\n    vec3 j = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n    g = (j.xy * 0.5) + 0.5;\n    gl_Position = vec4(j, float(1));\n}\n"), ::uGetConstString("uniform float e[b];\nuniform vec2 f[d];\n\nuniform sampler2D h;\n\nvarying vec2 g;\n\nvec4 i(vec2 j){\n    vec4 k = texture2D(h, j) * e[0];\n\n    for (int l = 0; l < c; ++l)\n    {\n        k = k + (texture2D(h, j + f[l]) * e[1 + l]);\n        k = k + (texture2D(h, j - f[l]) * e[1 + l]);\n    }\n\n    return k;\n}\n\nvoid main()\n{\n    gl_FragColor = i(g);\n}\n"), 3, 1, (array_181 = ::uNewArray(::app::Uno::String__typeof(), 7), ::uPtr< ::uArray*>(array_181)->ItemStrong< ::uString*>(0) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_181)->ItemStrong< ::uString*>(1) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_181)->ItemStrong< ::uString*>(2) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_181)->ItemStrong< ::uString*>(3) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_181)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_181)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_181)->ItemStrong< ::uString*>(6) = ::uGetConstString("h"), array_181)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 617, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 m, b;\nuniform vec2 g, h;\nuniform mat2 i;\n\nattribute vec2 a;\n\nvarying vec2 n, o, p;\n\nvoid main()\n{\n    vec2 r = true ? vec2(a.x, float(1) - a.y) : a;\n    vec2 s = (r * g) + h;\n    n = r;\n    o = i * s;\n    p = s;\n    gl_Position = b * (m * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform float c, d, e, f, k, l;\nuniform mat2 j;\n\nuniform sampler2D q;\n\nvarying vec2 n, o, p;\n\nvoid main()\n{\n    vec4 r = texture2D(q, n);\n    gl_FragColor = mix(mix(vec4(float(1), float(1), float(1), r.w), r, c), mix(vec4(float(0), float(0), float(0), r.w), r, d), clamp(0.5 - ((((((float(1) - sqrt((float(1) - dot(r.xyz * r.xyz, vec3(0.299, 0.587, 0.114))) / 3.14159274)) * e) * f) - length(p - (j * ((floor(o / e) + 0.5) * e)))) * k) * l), float(0), float(1)));\n}\n"), 0, 1, (array_182 = ::uNewArray(::app::Uno::String__typeof(), 14), ::uPtr< ::uArray*>(array_182)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_182)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_182)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_182)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_182)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_182)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_182)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_182)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_182)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_182)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_182)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_182)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_182)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_182)->ItemStrong< ::uString*>(13) = ::uGetConstString("q"), array_182)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 618, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c, b;\n\nattribute vec2 a;\n\nvarying vec2 d, e;\n\nvoid main()\n{\n    vec2 h = true ? vec2(a.x, float(1) - a.y) : a;\n    d = h;\n    e = vec2(h.x, float(1) - h.y);\n    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform sampler2D f, g;\n\nvarying vec2 d, e;\n\nvoid main()\n{\n    vec4 h = texture2D(f, d);\n    vec4 i = vec4(h.xyz / h.w, h.w);\n    gl_FragColor = vec4(i.xyz, i.w * texture2D(g, e).w);\n}\n"), 0, 1, (array_183 = ::uNewArray(::app::Uno::String__typeof(), 5), ::uPtr< ::uArray*>(array_183)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_183)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_183)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_183)->ItemStrong< ::uString*>(3) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_183)->ItemStrong< ::uString*>(4) = ::uGetConstString("g"), array_183)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 619, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c, b;\n\nattribute vec2 a;\n\nvarying vec2 d, e;\n\nvoid main()\n{\n    vec2 h = true ? vec2(a.x, float(1) - a.y) : a;\n    d = h;\n    e = vec2(h.x, float(1) - h.y);\n    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform sampler2D f, g;\n\nvarying vec2 d, e;\n\nvoid main()\n{\n    vec4 h = texture2D(f, d);\n    vec4 i = vec4(h.xyz / h.w, h.w);\n    gl_FragColor = vec4(i.xyz, i.w * texture2D(g, e).x);\n}\n"), 0, 1, (array_184 = ::uNewArray(::app::Uno::String__typeof(), 5), ::uPtr< ::uArray*>(array_184)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_184)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_184)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_184)->ItemStrong< ::uString*>(3) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_184)->ItemStrong< ::uString*>(4) = ::uGetConstString("g"), array_184)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 620, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c, b;\n\nattribute vec2 a;\n\nvarying vec2 d, e;\n\nvoid main()\n{\n    vec2 h = true ? vec2(a.x, float(1) - a.y) : a;\n    d = h;\n    e = vec2(h.x, float(1) - h.y);\n    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform sampler2D f, g;\n\nvarying vec2 d, e;\n\nvoid main()\n{\n    vec4 h = texture2D(f, d);\n    vec4 i = vec4(h.xyz / h.w, h.w);\n    vec4 j = texture2D(g, e);\n    gl_FragColor = vec4(i.xyz * j.xyz, i.w * j.w);\n}\n"), 0, 1, (array_185 = ::uNewArray(::app::Uno::String__typeof(), 5), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(3) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_185)->ItemStrong< ::uString*>(4) = ::uGetConstString("g"), array_185)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 621, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c;\n\nattribute vec2 a;\n\nvarying vec2 d, e, f, g;\n\nvoid main()\n{\n    vec3 i = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n    vec2 j = (i.xy * 0.5) + 0.5;\n    d = j + b;\n    e = j - b;\n    f = j + c;\n    g = j - c;\n    gl_Position = vec4(i, float(1));\n}\n"), ::uGetConstString("uniform sampler2D h;\n\nvarying vec2 d, e, f, g;\n\nvoid main()\n{\n    gl_FragColor = (((texture2D(h, d) + texture2D(h, e)) + texture2D(h, f)) + texture2D(h, g)) * 0.25;\n}\n"), 0, 1, (array_186 = ::uNewArray(::app::Uno::String__typeof(), 4), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_186)->ItemStrong< ::uString*>(3) = ::uGetConstString("h"), array_186)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 622, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 b, c, d, e;\n\nattribute vec2 a;\n\nvarying vec2 i, j, k, l, m;\n\nvoid main()\n{\n    vec2 o = vec2(a.x, 1.0 - a.y);\n    vec2 p = vec2(o.x, 1.0 - o.y);\n    i = p + b;\n    j = p + c;\n    k = p + d;\n    l = p + e;\n    m = p;\n    gl_Position = vec4(vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0)), float(1));\n}\n"), ::uGetConstString("uniform float f;\nuniform vec4 g, h;\n\nuniform sampler2D n;\n\nvarying vec2 i, j, k, l, m;\n\nvoid main()\n{\n    vec3 o = texture2D(n, m).xyz;\n    float p = min(1.0, (((length(texture2D(n, i).xyz - o) + length(texture2D(n, j).xyz - o)) + length(texture2D(n, k).xyz - o)) + length(texture2D(n, l).xyz - o)) * f);\n    gl_FragColor = (g * (1.0 - p)) + (h * p);\n}\n"), 0, 1, (array_187 = ::uNewArray(::app::Uno::String__typeof(), 9), ::uPtr< ::uArray*>(array_187)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_187)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_187)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_187)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_187)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_187)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_187)->ItemStrong< ::uString*>(6) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_187)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_187)->ItemStrong< ::uString*>(8) = ::uGetConstString("n"), array_187)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 623, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 i[16], q, m[16];\nuniform vec2 j, k;\n\nattribute vec3 a, e;\nattribute float b;\nattribute vec2 c;\nattribute vec4 d;\n\nvarying vec3 r, s, t, v;\nvarying vec2 u;\n\nmat3 z(mat3 A){\n    return mat3(A[0].x, A[1].x, A[2].x, A[0].y, A[1].y, A[2].y, A[0].z, A[1].z, A[2].z);\n}\n\nvoid main()\n{\n    mat3 A = z(mat3(m[int(b)][0].xyz, m[int(b)][1].xyz, m[int(b)][2].xyz));\n    r = A * d.xyz;\n    s = A * (cross(d.xyz, e) * d.w);\n    t = A * e;\n    u = (c * j) + k;\n    v = (i[int(b)] * vec4(a, 1.)).xyz;\n    gl_Position = (q * i[int(b)]) * vec4(a, 1.);\n}\n"), ::uGetConstString("uniform vec3 l, n, o;\nuniform float p;\n\nuniform sampler2D w, x, y;\n\nvarying vec3 r, s, t, v;\nvarying vec2 u;\n\nvoid main()\n{\n    vec3 A = l * (f ? texture2D(w, u) : vec4(float(1))).xyz;\n    vec3 B = mat3(normalize(r), normalize(s), normalize(t)) * (g ? normalize((texture2D(x, u).xyz * 2.0) - 1.0) : vec3(float(0), float(0), float(1)));\n    vec3 C = normalize(vec3(float(100), float(0), float(100)));\n    gl_FragColor = vec4(((A * vec3(0.5)) + ((A * max(0.0, dot(normalize(B), C))) * vec3(float(1)))) + (((n * (h ? texture2D(y, u) : vec4(float(1))).xyz) * pow(max(0.0, dot(normalize(reflect(v - o, B)), C)), p)) * vec3(float(1))), 1.0);\n}\n"), 3, 5, (array_188 = ::uNewArray(::app::Uno::String__typeof(), 20), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(0) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(1) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(2) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(3) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(4) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(5) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(6) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(7) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(16) = ::uGetConstString("q"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(17) = ::uGetConstString("w"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(18) = ::uGetConstString("x"), ::uPtr< ::uArray*>(array_188)->ItemStrong< ::uString*>(19) = ::uGetConstString("y"), array_188)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 624, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 o, l, p;\nuniform vec2 h, i;\n\nattribute vec3 a, d;\nattribute vec2 b;\nattribute vec4 c;\n\nvarying vec3 q, r, s, u;\nvarying vec2 t;\n\nvoid main()\n{\n    q = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * c.xyz;\n    r = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * (cross(c.xyz, d) * c.w);\n    s = mat3(p[0].xyz, p[1].xyz, p[2].xyz) * d;\n    t = (b * h) + i;\n    u = (l * vec4(a, 1.)).xyz;\n    gl_Position = o * vec4(a, 1.);\n}\n"), ::uGetConstString("uniform vec3 j, k, m;\nuniform float n;\n\nuniform sampler2D v, w, x;\n\nvarying vec3 q, r, s, u;\nvarying vec2 t;\n\nvoid main()\n{\n    vec3 y = j * (e ? texture2D(v, t) : vec4(float(1))).xyz;\n    vec3 z = mat3(normalize(q), normalize(r), normalize(s)) * (f ? normalize((texture2D(w, t).xyz * 2.0) - 1.0) : vec3(float(0), float(0), float(1)));\n    vec3 A = normalize(vec3(float(100), float(0), float(100)));\n    gl_FragColor = vec4(((y * vec3(0.5)) + ((y * max(0.0, dot(normalize(z), A))) * vec3(float(1)))) + (((k * (g ? texture2D(x, t) : vec4(float(1))).xyz) * pow(max(0.0, dot(normalize(reflect(u - m, z)), A)), n)) * vec3(float(1))), 1.0);\n}\n"), 3, 4, (array_189 = ::uNewArray(::app::Uno::String__typeof(), 19), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(0) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(1) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(2) = ::uGetConstString("g"), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(3) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(4) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(5) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(6) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(7) = ::uGetConstString("h"), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(8) = ::uGetConstString("i"), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(9) = ::uGetConstString("j"), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(10) = ::uGetConstString("k"), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(11) = ::uGetConstString("l"), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(12) = ::uGetConstString("m"), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(13) = ::uGetConstString("n"), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(14) = ::uGetConstString("o"), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(15) = ::uGetConstString("p"), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(16) = ::uGetConstString("v"), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(17) = ::uGetConstString("w"), ::uPtr< ::uArray*>(array_189)->ItemStrong< ::uString*>(18) = ::uGetConstString("x"), array_189)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 625, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 b;\n\nattribute vec3 a;\n\nvoid main()\n{\n    gl_Position = b * vec4(a, 1.);\n}\n"), ::uGetConstString("void main()\n{\n    gl_FragColor = vec4(0.8, 0.85, 1.0, 1.0);\n}\n"), 0, 1, (array_190 = ::uNewArray(::app::Uno::String__typeof(), 2), ::uPtr< ::uArray*>(array_190)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_190)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), array_190)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 626, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 c;\n\nattribute vec3 a;\n\nvoid main()\n{\n    gl_Position = c * vec4(a, 1.);\n}\n"), ::uGetConstString("uniform vec4 b;\n\nvoid main()\n{\n    gl_FragColor = b;\n}\n"), 0, 1, (array_191 = ::uNewArray(::app::Uno::String__typeof(), 3), ::uPtr< ::uArray*>(array_191)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_191)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_191)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), array_191)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 627, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("attribute vec2 a;\n\nvarying vec2 b;\n\nvoid main()\n{\n    vec3 d = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n    b = (d.xy * vec2(0.5, -0.5)) + 0.5;\n    gl_Position = vec4(d, float(1));\n}\n"), ::uGetConstString("uniform sampler2D c;\n\nvarying vec2 b;\n\nvoid main()\n{\n    gl_FragColor = texture2D(c, b);\n}\n"), 0, 1, (array_192 = ::uNewArray(::app::Uno::String__typeof(), 2), ::uPtr< ::uArray*>(array_192)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_192)->ItemStrong< ::uString*>(1) = ::uGetConstString("c"), array_192)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 628, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform mat4 f, b;\nuniform vec2 c, d;\n\nattribute vec2 a;\n\nvarying vec2 g;\n\nvoid main()\n{\n    g = (a * c) + d;\n    gl_Position = b * (f * vec4(vec3(a, float(0)), 1.));\n}\n"), ::uGetConstString("uniform vec4 e;\n\nuniform sampler2D h;\n\nvarying vec2 g;\n\nvoid main()\n{\n    gl_FragColor = texture2D(h, g) * e;\n}\n"), 0, 1, (array_193 = ::uNewArray(::app::Uno::String__typeof(), 7), ::uPtr< ::uArray*>(array_193)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_193)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_193)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_193)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_193)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_193)->ItemStrong< ::uString*>(5) = ::uGetConstString("f"), ::uPtr< ::uArray*>(array_193)->ItemStrong< ::uString*>(6) = ::uGetConstString("h"), array_193)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 629, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, b;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 e;\n\nvec4 g(vec2 h, mat4 i){\n    return vec4(((h.x * i[0].x) + (h.y * i[1].x)) + i[3].x, ((h.x * i[0].y) + (h.y * i[1].y)) + i[3].y, ((h.x * i[0].z) + (h.y * i[1].z)) + i[3].z, ((h.x * i[0].w) + (h.y * i[1].w)) + i[3].w);\n}\n\nvoid main()\n{\n    e = vec2(a.x, 1.0 - a.y);\n    gl_Position = g(c + (a * b), d);\n}\n"), ::uGetConstString("uniform sampler2D f;\n\nvarying vec2 e;\n\nvoid main()\n{\n    gl_FragColor = texture2D(f, e);\n}\n"), 0, 1, (array_194 = ::uNewArray(::app::Uno::String__typeof(), 5), ::uPtr< ::uArray*>(array_194)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_194)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_194)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_194)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_194)->ItemStrong< ::uString*>(4) = ::uGetConstString("f"), array_194)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 630, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, b;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 e;\n\nvec4 g(vec2 h, mat4 i){\n    return vec4(((h.x * i[0].x) + (h.y * i[1].x)) + i[3].x, ((h.x * i[0].y) + (h.y * i[1].y)) + i[3].y, ((h.x * i[0].z) + (h.y * i[1].z)) + i[3].z, ((h.x * i[0].w) + (h.y * i[1].w)) + i[3].w);\n}\n\nvoid main()\n{\n    e = a;\n    gl_Position = g(c + (a * b), d);\n}\n"), ::uGetConstString("uniform samplerExternalOES f;\n\nvarying vec2 e;\n\nvoid main()\n{\n    gl_FragColor = texture2D(f, e);\n}\n"), 0, 1, (array_195 = ::uNewArray(::app::Uno::String__typeof(), 5), ::uPtr< ::uArray*>(array_195)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_195)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_195)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_195)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_195)->ItemStrong< ::uString*>(4) = ::uGetConstString("f"), array_195)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 631, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, b, e;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvarying vec2 f;\n\nvec4 h(vec2 i, mat4 j){\n    return vec4(((i.x * j[0].x) + (i.y * j[1].x)) + j[3].x, ((i.x * j[0].y) + (i.y * j[1].y)) + j[3].y, ((i.x * j[0].z) + (i.y * j[1].z)) + j[3].z, ((i.x * j[0].w) + (i.y * j[1].w)) + j[3].w);\n}\n\nvoid main()\n{\n    f = a * e;\n    gl_Position = h(c + (a * b), d);\n}\n"), ::uGetConstString("uniform sampler2D g;\n\nvarying vec2 f;\n\nvoid main()\n{\n    gl_FragColor = texture2D(g, f);\n}\n"), 0, 1, (array_196 = ::uNewArray(::app::Uno::String__typeof(), 6), ::uPtr< ::uArray*>(array_196)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_196)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_196)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_196)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_196)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), ::uPtr< ::uArray*>(array_196)->ItemStrong< ::uString*>(5) = ::uGetConstString("g"), array_196)));
    ::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Register(NULL, 632, (::uObject*)::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__Create(NULL, ::uGetConstString("uniform vec2 c, b;\nuniform mat4 d;\n\nattribute vec2 a;\n\nvoid main()\n{\n    gl_Position = d * vec4(c + (a * b), float(0), float(1));\n}\n"), ::uGetConstString("uniform vec4 e;\n\nvoid main()\n{\n    gl_FragColor = e;\n}\n"), 0, 1, (array_197 = ::uNewArray(::app::Uno::String__typeof(), 5), ::uPtr< ::uArray*>(array_197)->ItemStrong< ::uString*>(0) = ::uGetConstString("a"), ::uPtr< ::uArray*>(array_197)->ItemStrong< ::uString*>(1) = ::uGetConstString("b"), ::uPtr< ::uArray*>(array_197)->ItemStrong< ::uString*>(2) = ::uGetConstString("c"), ::uPtr< ::uArray*>(array_197)->ItemStrong< ::uString*>(3) = ::uGetConstString("d"), ::uPtr< ::uArray*>(array_197)->ItemStrong< ::uString*>(4) = ::uGetConstString("e"), array_197)));
    ::app::MainView__New_1(NULL);
}

uObject*** uGetGlobalStrongRefs()
{
    static uObject** result[] =
    {
        (uObject**)&::app::Android::Base::JNI___rootActivityWrapped,
        (uObject**)&::app::Android::Base::Versions___release,
        (uObject**)&::app::Experimental::Http::HttpLoader___cache,
        (uObject**)&::app::Experimental::Http::LoaderConst__Handler,
        (uObject**)&::app::Fuse::Android::BitmapFactory___bitmapCache,
        (uObject**)&::app::Fuse::Android::Blitter__Singleton,
        (uObject**)&::app::Fuse::Android::Button__TextColorProperty,
        (uObject**)&::app::Fuse::Android::FocusManager__Singleton,
        (uObject**)&::app::Fuse::Android::InputDispatch___listeners,
        (uObject**)&::app::Fuse::Android::InputDispatch___touchListener,
        (uObject**)&::app::Fuse::Android::NativeView___viewHandle,
        (uObject**)&::app::Fuse::Android::RootView___singleton,
        (uObject**)&::app::Fuse::Android::TypefaceCache___typefaces,
        (uObject**)&::app::Fuse::Animations::ConverterDouble__Singleton,
        (uObject**)&::app::Fuse::Animations::ConverterFloat__Singleton,
        (uObject**)&::app::Fuse::Animations::ConverterFloat2__Singleton,
        (uObject**)&::app::Fuse::Animations::ConverterFloat3__Singleton,
        (uObject**)&::app::Fuse::Animations::ConverterFloat4__Singleton,
        (uObject**)&::app::Fuse::Animations::DiscreteSingleTrack__Singleton,
        (uObject**)&::app::Fuse::Animations::EasingTrack__Singleton,
        (uObject**)&::app::Fuse::Animations::MasterTransform__identity,
        (uObject**)&::app::Fuse::Animations::Mixer___default,
        (uObject**)&::app::Fuse::Animations::Mixer___defaultDiscrete,
        (uObject**)&::app::Fuse::Animations::Mixer__PostMasters,
        (uObject**)&::app::Fuse::Animations::Mixer__PreMasters,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Amber,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Blue,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__BlueGrey,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Brown,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__ColorCodes,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Cyan,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__DeepOrange,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__DeepPurple,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Green,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Grey,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Indigo,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__LightBlue,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__LightGreen,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Lime,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Orange,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Pink,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Purple,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Red,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoBlack,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoBlackItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoBold,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoBoldItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoCondensedBold,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoCondensedBoldItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoCondensedItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoCondensedLight,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoCondensedLightItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoCondensedRegular,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoLight,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoLightItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoMedium,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoMediumItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoRegular,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoThin,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__RobotoThinItalic,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Teal,
        (uObject**)&::app::Fuse::BasicTheme::BasicStyle__Yellow,
        (uObject**)&::app::Fuse::BasicTheme::BasicTheme___singleton_1,
        (uObject**)&::app::Fuse::Camera::AndroidCameraImpl___pendingTask,
        (uObject**)&::app::Fuse::Controls::Button__TextProperty,
        (uObject**)&::app::Fuse::Controls::Control__BackgroundProperty,
        (uObject**)&::app::Fuse::Controls::Graphics::DefaultTextVisual___textRenderers,
        (uObject**)&::app::Fuse::Controls::Graphics::GraphicsStyle__Default,
        (uObject**)&::app::Fuse::Controls::Graphics::ImageElementDraw__Impl,
        (uObject**)&::app::Fuse::Controls::Graphics::LinearSliderBehavior___horizontalGesture,
        (uObject**)&::app::Fuse::Controls::GraphicsView__BackgroundProperty_1,
        (uObject**)&::app::Fuse::Controls::Grid__CellSpacingProperty,
        (uObject**)&::app::Fuse::Controls::Image__ContentAlignmentProperty,
        (uObject**)&::app::Fuse::Controls::Image__MemoryPolicyProperty,
        (uObject**)&::app::Fuse::Controls::Image__StretchDirectionProperty,
        (uObject**)&::app::Fuse::Controls::Image__StretchModeProperty,
        (uObject**)&::app::Fuse::Controls::Image__StretchSizingProperty,
        (uObject**)&::app::Fuse::Controls::Internal::DefaultTextRenderer___bitmapFonts,
        (uObject**)&::app::Fuse::Controls::Internal::DefaultTextRenderer___renderer,
        (uObject**)&::app::Fuse::Controls::Number__FormatProperty,
        (uObject**)&::app::Fuse::Controls::Number__ValueProperty,
        (uObject**)&::app::Fuse::Controls::PageIndicator__DotFactoryProperty,
        (uObject**)&::app::Fuse::Controls::Panel__AppearanceProperty,
        (uObject**)&::app::Fuse::Controls::Panel__LayoutProperty,
        (uObject**)&::app::Fuse::Controls::PlainTextEdit__NativeEditProperty,
        (uObject**)&::app::Fuse::Controls::PlainTextEdit__NativeTextProperty,
        (uObject**)&::app::Fuse::Controls::RangeControl__MaximumProperty,
        (uObject**)&::app::Fuse::Controls::RangeControl__MinimumProperty,
        (uObject**)&::app::Fuse::Controls::RangeControl__ValueProperty,
        (uObject**)&::app::Fuse::Controls::Rectangle__CornerRadiusProperty,
        (uObject**)&::app::Fuse::Controls::ScrollView__AllowedScrollDirectionsProperty,
        (uObject**)&::app::Fuse::Controls::Shape__FillProperty,
        (uObject**)&::app::Fuse::Controls::Shape__SmoothnessProperty,
        (uObject**)&::app::Fuse::Controls::Shape__StrokeProperty,
        (uObject**)&::app::Fuse::Controls::StackPanel__ItemSpacingProperty,
        (uObject**)&::app::Fuse::Controls::StackPanel__OrientationProperty,
        (uObject**)&::app::Fuse::Controls::TextControl__FontProperty,
        (uObject**)&::app::Fuse::Controls::TextControl__FontSizeProperty,
        (uObject**)&::app::Fuse::Controls::TextControl__LineSpacingProperty,
        (uObject**)&::app::Fuse::Controls::TextControl__TextAlignmentProperty,
        (uObject**)&::app::Fuse::Controls::TextControl__TextColorProperty,
        (uObject**)&::app::Fuse::Controls::TextControl__TextWrappingProperty,
        (uObject**)&::app::Fuse::Controls::TextControl__ValueProperty,
        (uObject**)&::app::Fuse::Controls::TextEdit::TextEditVisual___horizontalGesture,
        (uObject**)&::app::Fuse::Controls::TextEdit::TextEditVisual___verticalGesture,
        (uObject**)&::app::Fuse::Controls::TextEdit::TextPosition__Default,
        (uObject**)&::app::Fuse::Controls::TextInput__CaretColorProperty,
        (uObject**)&::app::Fuse::Controls::TextInput__InputHintProperty,
        (uObject**)&::app::Fuse::Controls::TextInput__IsMultilineProperty,
        (uObject**)&::app::Fuse::Controls::TextInput__IsPasswordProperty,
        (uObject**)&::app::Fuse::Controls::TextInput__IsReadOnlyProperty,
        (uObject**)&::app::Fuse::Controls::TextInput__SelectionColorProperty,
        (uObject**)&::app::Fuse::Controls::ToggleControl__ValueProperty,
        (uObject**)&::app::Fuse::DrawContext___cullFaces,
        (uObject**)&::app::Fuse::DrawContext___renderTargets,
        (uObject**)&::app::Fuse::DrawContext___scissors,
        (uObject**)&::app::Fuse::DrawContext___viewports,
        (uObject**)&::app::Fuse::DrawHelpers___instance,
        (uObject**)&::app::Fuse::Drawing::BlendModeHelpers___invalidBlendMode,
        (uObject**)&::app::Fuse::Drawing::Brushes__Aqua,
        (uObject**)&::app::Fuse::Drawing::Brushes__Black,
        (uObject**)&::app::Fuse::Drawing::Brushes__Blue,
        (uObject**)&::app::Fuse::Drawing::Brushes__Fuchsia,
        (uObject**)&::app::Fuse::Drawing::Brushes__Gray,
        (uObject**)&::app::Fuse::Drawing::Brushes__Green,
        (uObject**)&::app::Fuse::Drawing::Brushes__Lime,
        (uObject**)&::app::Fuse::Drawing::Brushes__Maroon,
        (uObject**)&::app::Fuse::Drawing::Brushes__Navy,
        (uObject**)&::app::Fuse::Drawing::Brushes__Olive,
        (uObject**)&::app::Fuse::Drawing::Brushes__Purple,
        (uObject**)&::app::Fuse::Drawing::Brushes__Red,
        (uObject**)&::app::Fuse::Drawing::Brushes__Silver,
        (uObject**)&::app::Fuse::Drawing::Brushes__Teal,
        (uObject**)&::app::Fuse::Drawing::Brushes__Transparent,
        (uObject**)&::app::Fuse::Drawing::Brushes__White,
        (uObject**)&::app::Fuse::Drawing::Brushes__Yellow,
        (uObject**)&::app::Fuse::Drawing::LinearGradientDrawable__Singleton,
        (uObject**)&::app::Fuse::Drawing::Primitives::Circle__Singleton,
        (uObject**)&::app::Fuse::Drawing::Primitives::Rectangle__Singleton,
        (uObject**)&::app::Fuse::Drawing::Primitives::Wedge__Singleton,
        (uObject**)&::app::Fuse::Elements::Cache__cacheHelper,
        (uObject**)&::app::Fuse::Elements::Element__AlignmentProperty,
        (uObject**)&::app::Fuse::Elements::Element__AnchorProperty,
        (uObject**)&::app::Fuse::Elements::Element__CachingModeProperty,
        (uObject**)&::app::Fuse::Elements::Element__ClipToBoundsProperty,
        (uObject**)&::app::Fuse::Elements::Element__HeightProperty,
        (uObject**)&::app::Fuse::Elements::Element__HitTestModeProperty,
        (uObject**)&::app::Fuse::Elements::Element__MarginProperty,
        (uObject**)&::app::Fuse::Elements::Element__MaxHeightProperty,
        (uObject**)&::app::Fuse::Elements::Element__MaxWidthProperty,
        (uObject**)&::app::Fuse::Elements::Element__MinHeightProperty,
        (uObject**)&::app::Fuse::Elements::Element__MinWidthProperty,
        (uObject**)&::app::Fuse::Elements::Element__OffsetProperty,
        (uObject**)&::app::Fuse::Elements::Element__OpacityProperty,
        (uObject**)&::app::Fuse::Elements::Element__PaddingProperty,
        (uObject**)&::app::Fuse::Elements::Element__VisibilityProperty,
        (uObject**)&::app::Fuse::Elements::Element__WidthProperty,
        (uObject**)&::app::Fuse::Elements::Element__XProperty,
        (uObject**)&::app::Fuse::Elements::Element__YProperty,
        (uObject**)&::app::Fuse::Elements::ElementAtlasFramebufferPool___poolImpl,
        (uObject**)&::app::Fuse::Elements::ElementAtlasFramebufferPool__AtlasSizeChanged,
        (uObject**)&::app::Fuse::Elements::Internal::ElementDraw__Impl,
        (uObject**)&::app::Fuse::Elements::Internal::Scale9Rectangle__Impl,
        (uObject**)&::app::Fuse::Elements::LimitBoxSizing___limitHeightProperty,
        (uObject**)&::app::Fuse::Elements::LimitBoxSizing___limitHeightUnitProperty,
        (uObject**)&::app::Fuse::Elements::LimitBoxSizing___limitWidthProperty,
        (uObject**)&::app::Fuse::Elements::LimitBoxSizing___limitWidthUnitProperty,
        (uObject**)&::app::Fuse::Elements::LimitBoxSizing__Singleton,
        (uObject**)&::app::Fuse::Elements::NoImplicitMaxBoxSizing__Singleton_1,
        (uObject**)&::app::Fuse::Elements::ShadowBoxSizing___shadowDataProperty,
        (uObject**)&::app::Fuse::Elements::ShadowBoxSizing__Singleton,
        (uObject**)&::app::Fuse::Elements::StandardBoxSizing__Singleton,
        (uObject**)&::app::Fuse::Elements::TransformOrigins__Anchor,
        (uObject**)&::app::Fuse::Elements::TransformOrigins__Center,
        (uObject**)&::app::Fuse::Elements::TransformOrigins__HorizontalBoxCenter,
        (uObject**)&::app::Fuse::Elements::TransformOrigins__TopLeft,
        (uObject**)&::app::Fuse::Elements::TransformOrigins__VerticalBoxCenter,
        (uObject**)&::app::Fuse::Entities::Designer::PreloadedResources__resources,
        (uObject**)&::app::Fuse::Font___fontFaces,
        (uObject**)&::app::Fuse::Fonts___fallback,
        (uObject**)&::app::Fuse::FramebufferPool__framebufferPool,
        (uObject**)&::app::Fuse::Gestures::Clicker___clickerProperty,
        (uObject**)&::app::Fuse::Gestures::Internal::EdgeSwiper___leftRightSwipe,
        (uObject**)&::app::Fuse::Gestures::Internal::EdgeSwiper___upDownSwipe,
        (uObject**)&::app::Fuse::Gestures::Scroller___horizontalGesture,
        (uObject**)&::app::Fuse::Gestures::Scroller___verticalGesture,
        (uObject**)&::app::Fuse::GraphicsTheme___singleton,
        (uObject**)&::app::Fuse::Input::Focus___focusDelegatorHandle,
        (uObject**)&::app::Fuse::Input::Focus___focusedObject,
        (uObject**)&::app::Fuse::Input::Focus___gained,
        (uObject**)&::app::Fuse::Input::Focus___isFoucsableChanged,
        (uObject**)&::app::Fuse::Input::Focus___lastFocusedNode,
        (uObject**)&::app::Fuse::Input::Focus___lost,
        (uObject**)&::app::Fuse::Input::Focus__FocusDelegateProperty,
        (uObject**)&::app::Fuse::Input::Focus__IsFocusableProperty,
        (uObject**)&::app::Fuse::Input::Keyboard___keyboardHandle,
        (uObject**)&::app::Fuse::Input::Keyboard___keyPressed,
        (uObject**)&::app::Fuse::Input::Keyboard___keyReleased,
        (uObject**)&::app::Fuse::Input::Keyboard___keysDown,
        (uObject**)&::app::Fuse::Input::Pointer___entered,
        (uObject**)&::app::Fuse::Input::Pointer___hardCapturers,
        (uObject**)&::app::Fuse::Input::Pointer___lastHitNodes,
        (uObject**)&::app::Fuse::Input::Pointer___left,
        (uObject**)&::app::Fuse::Input::Pointer___moved,
        (uObject**)&::app::Fuse::Input::Pointer___pointersDown,
        (uObject**)&::app::Fuse::Input::Pointer___pressed,
        (uObject**)&::app::Fuse::Input::Pointer___released,
        (uObject**)&::app::Fuse::Input::Pointer___softCapturers,
        (uObject**)&::app::Fuse::Input::Pointer___wheelMoved,
        (uObject**)&::app::Fuse::Input::TextService___textEntered,
        (uObject**)&::app::Fuse::Internal::BlenderMap___blenders,
        (uObject**)&::app::Fuse::Internal::Drawing::SolidRectangle__Impl,
        (uObject**)&::app::Fuse::iOS::Blitter__Singleton,
        (uObject**)&::app::Fuse::iOS::Button__DisabledColorProperty,
        (uObject**)&::app::Fuse::iOS::Button__HighlightedColorProperty,
        (uObject**)&::app::Fuse::iOS::Button__NormalColorProperty,
        (uObject**)&::app::Fuse::iOS::Button__SelectedColorProperty,
        (uObject**)&::app::Fuse::iOS::StatusBarConfig___stack,
        (uObject**)&::app::Fuse::Layouts::DockLayout___dockProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___actualColumnProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___actualRowProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___columnProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___columnSpanProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___rowProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___rowSpanProperty,
        (uObject**)&::app::Fuse::Layouts::GridLayout___staticDefaultColumn,
        (uObject**)&::app::Fuse::Layouts::GridLayout___staticDefaultRow,
        (uObject**)&::app::Fuse::Layouts::Layout___fillPaddingProperty,
        (uObject**)&::app::Fuse::Layouts::Layout___layerProperty,
        (uObject**)&::app::Fuse::Layouts::Layout___layoutRoleProperty,
        (uObject**)&::app::Fuse::Layouts::Layouts__Default,
        (uObject**)&::app::Fuse::Navigation::DirectNavigation___indexProperty,
        (uObject**)&::app::Fuse::Navigation::EdgeNavigation___edgeHandle,
        (uObject**)&::app::Fuse::Navigation::Navigation___contextHandle,
        (uObject**)&::app::Fuse::Navigation::Navigation___navigationHandler,
        (uObject**)&::app::Fuse::Navigation::Navigation___navigationProgress,
        (uObject**)&::app::Fuse::Navigation::Navigation___navigationStateHandler,
        (uObject**)&::app::Fuse::Navigation::NavigationPageProperty___pageProperty,
        (uObject**)&::app::Fuse::Navigation::NavigationPageProperty__RootedBindings,
        (uObject**)&::app::Fuse::Node___addedHandle,
        (uObject**)&::app::Fuse::Node___isEnabledChangedHandle,
        (uObject**)&::app::Fuse::Node___isVisibleChangedHandle,
        (uObject**)&::app::Fuse::Node___nameHandle,
        (uObject**)&::app::Fuse::Node___needsStyling,
        (uObject**)&::app::Fuse::Node___removedHandle,
        (uObject**)&::app::Fuse::Node___resourcesHandle,
        (uObject**)&::app::Fuse::Node___rootedHandle,
        (uObject**)&::app::Fuse::Node___styleHandle,
        (uObject**)&::app::Fuse::Node___unrootedHandle,
        (uObject**)&::app::Fuse::Node__IsEnabledProperty,
        (uObject**)&::app::Fuse::Node__NameProperty,
        (uObject**)&::app::Fuse::Node__SnapToPixelsProperty,
        (uObject**)&::app::Fuse::NodeBounds___empty,
        (uObject**)&::app::Fuse::NodeBounds___infinite,
        (uObject**)&::app::Fuse::Physics::Body___frictionHandle,
        (uObject**)&::app::Fuse::Physics::World___globalWorld,
        (uObject**)&::app::Fuse::Physics::World___worldHandle,
        (uObject**)&::app::Fuse::Preview::SelectionManager___Selection,
        (uObject**)&::app::Fuse::Preview::SelectionManager__SelectionChanged,
        (uObject**)&::app::Fuse::Properties__NoValue,
        (uObject**)&::app::Fuse::Reactive::Dispatcher___uiThread,
        (uObject**)&::app::Fuse::Reactive::FuseJS::InterApp___cachedUris,
        (uObject**)&::app::Fuse::Reactive::FuseJS::InterApp___onReceivedUri,
        (uObject**)&::app::Fuse::Reactive::FuseJS::Lifecycle___enteringBackground,
        (uObject**)&::app::Fuse::Reactive::FuseJS::Lifecycle___enteringForeground,
        (uObject**)&::app::Fuse::Reactive::FuseJS::Lifecycle___enteringInteractive,
        (uObject**)&::app::Fuse::Reactive::FuseJS::Lifecycle___exitedInteractive,
        (uObject**)&::app::Fuse::Reactive::FuseJS::Lifecycle___terminating,
        (uObject**)&::app::Fuse::Reactive::JavaScript___exceptionHandler,
        (uObject**)&::app::Fuse::Reactive::JavaScript___rootedScripts,
        (uObject**)&::app::Fuse::Reactive::JavaScript___worker,
        (uObject**)&::app::Fuse::Reactive::ScriptEvents___propHandle,
        (uObject**)&::app::Fuse::Reactive::ThreadWorker___context,
        (uObject**)&::app::Fuse::Reactive::ThreadWorker___observable,
        (uObject**)&::app::Fuse::Reactive::ThreadWorker___subscriberProxy,
        (uObject**)&::app::Fuse::Reactive::ThreadWorker___timer,
        (uObject**)&::app::Fuse::Resources::DisposalManager___items,
        (uObject**)&::app::Fuse::Resources::DisposalManager___softDisposables,
        (uObject**)&::app::Fuse::Resources::FileImageSourceCache___cache,
        (uObject**)&::app::Fuse::Resources::HttpImageSourceCache___cache,
        (uObject**)&::app::Fuse::Resources::MemoryPolicy__PreloadRetain,
        (uObject**)&::app::Fuse::Resources::MemoryPolicy__UnloadUnused,
        (uObject**)&::app::Fuse::Resources::ResourceRegistry___handlers,
        (uObject**)&::app::Fuse::Scripting::Duktape::Context___emptyArgs,
        (uObject**)&::app::Fuse::Scripting::NameRegistry___listeners,
        (uObject**)&::app::Fuse::Scripting::NameRegistry___names,
        (uObject**)&::app::Fuse::Shapes::Rectangle__CornerRadiusProperty,
        (uObject**)&::app::Fuse::Shapes::Shape__FillProperty,
        (uObject**)&::app::Fuse::Shapes::Shape__SmoothnessProperty,
        (uObject**)&::app::Fuse::Shapes::Shape__StrokeProperty,
        (uObject**)&::app::Fuse::StyleProperty__All,
        (uObject**)&::app::Fuse::TranslationModes__Local,
        (uObject**)&::app::Fuse::TranslationModes__ParentSize,
        (uObject**)&::app::Fuse::TranslationModes__Size,
        (uObject**)&::app::Fuse::Triggers::Actions::GiveFocus__Singleton,
        (uObject**)&::app::Fuse::Triggers::LayoutAnimation___positionChange,
        (uObject**)&::app::Fuse::Triggers::LayoutAnimation___sizeChange,
        (uObject**)&::app::Fuse::Triggers::LayoutAnimation__PositionChange,
        (uObject**)&::app::Fuse::Triggers::LayoutAnimation__SizeChange,
        (uObject**)&::app::Fuse::Triggers::WhileFailed___whileFailedProp,
        (uObject**)&::app::Fuse::Triggers::WhileKeyboardVisible__Keyboard,
        (uObject**)&::app::Fuse::Triggers::WhileLoading___whileLoadingProp,
        (uObject**)&::app::Fuse::UpdateManager___deferredActions,
        (uObject**)&::app::Fuse::UpdateManager___stages,
        (uObject**)&::app::MainView__AudioModule,
        (uObject**)&::app::MainView__bundleDict,
        (uObject**)&::app::MainView__channelDict,
        (uObject**)&::app::MainView__isPlayDict,
        (uObject**)&::app::MainView__playerDict,
        (uObject**)&::app::MainView__soundDict,
        (uObject**)&::app::MainView__volumeDict,
        (uObject**)&::app::Uno::Application___Current,
        (uObject**)&::app::Uno::CharPunctuationChecker__punctuationRangeList,
        (uObject**)&::app::Uno::CharPunctuationChecker__singlePunctuationChars,
        (uObject**)&::app::Uno::Data::Json::Boolean___false,
        (uObject**)&::app::Uno::Data::Json::Boolean___true,
        (uObject**)&::app::Uno::Data::Json::Null___singleton,
        (uObject**)&::app::Uno::Diagnostics::Debug___assertionHandler,
        (uObject**)&::app::Uno::Diagnostics::Debug___indentStr,
        (uObject**)&::app::Uno::Diagnostics::Debug___logHandler,
        (uObject**)&::app::Uno::EventArgs__Empty,
        (uObject**)&::app::Uno::Net::Http::HostInfoParser___invalidChars,
        (uObject**)&::app::Uno::Net::Http::HttpStatusReasonPhrase__ClientErrors,
        (uObject**)&::app::Uno::Net::Http::HttpStatusReasonPhrase__Informational,
        (uObject**)&::app::Uno::Net::Http::HttpStatusReasonPhrase__Redirection,
        (uObject**)&::app::Uno::Net::Http::HttpStatusReasonPhrase__ServerErrors,
        (uObject**)&::app::Uno::Net::Http::HttpStatusReasonPhrase__Success,
        (uObject**)&::app::Uno::Net::Http::UriScheme___defaultPorts,
        (uObject**)&::app::Uno::Net::Http::UriScheme__KnownInternetSchemes,
        (uObject**)&::app::Uno::Net::Http::UriScheme__KnownNonInternetSchemes,
        (uObject**)&::app::Uno::Platform::SystemUI__BottomFrameWillResize,
        (uObject**)&::app::Uno::Platform::SystemUI__TopFrameWillResize,
        (uObject**)&::app::Uno::Platform2::Application__DelayedUri,
        (uObject**)&::app::Uno::Platform2::Application__EnteringBackground,
        (uObject**)&::app::Uno::Platform2::Application__EnteringForeground,
        (uObject**)&::app::Uno::Platform2::Application__EnteringInteractive,
        (uObject**)&::app::Uno::Platform2::Application__ExitedInteractive,
        (uObject**)&::app::Uno::Platform2::Application__KeyDown,
        (uObject**)&::app::Uno::Platform2::Application__KeyUp,
        (uObject**)&::app::Uno::Platform2::Application__ReceivedLowMemoryWarning,
        (uObject**)&::app::Uno::Platform2::Application__ReceivedURI,
        (uObject**)&::app::Uno::Platform2::Application__Started,
        (uObject**)&::app::Uno::Platform2::Application__Terminating,
        (uObject**)&::app::Uno::Runtime::Implementation::Internal::BundleRegistry___data,
        (uObject**)&::app::Uno::Runtime::Implementation::Internal::NumericFormatter___decimalPoint,
        (uObject**)&::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall___boundAttributes,
        (uObject**)&::app::Uno::String__Empty,
        (uObject**)&::app::Uno::Threading::POSIXThread___callbacks,
        (uObject**)&::app::Uno::Time::Calendars::Era__AnnoHegirae,
        (uObject**)&::app::Uno::Time::Calendars::Era__AnnoMartyrum,
        (uObject**)&::app::Uno::Time::Calendars::Era__AnnoMundi,
        (uObject**)&::app::Uno::Time::Calendars::Era__AnnoPersico,
        (uObject**)&::app::Uno::Time::Calendars::Era__BeforeCommon,
        (uObject**)&::app::Uno::Time::Calendars::Era__Common,
        (uObject**)&::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator__MaxDaysPerMonth,
        (uObject**)&::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator__MaxTotalTicksByMonth,
        (uObject**)&::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator__MinDaysPerMonth,
        (uObject**)&::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator__MinTotalTicksByMonth,
        (uObject**)&::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator__MonthLengths,
        (uObject**)&::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator__MonthStartTicks,
        (uObject**)&::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator__YearStartDays,
        (uObject**)&::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator__YearStartTicks,
        (uObject**)&::app::Uno::Time::CalendarSystem___gregorianCalendarSystem,
        (uObject**)&::app::Uno::Time::DateTimeZone__UtcZone,
        (uObject**)&::app::Uno::Time::Period__Zero,
        (uObject**)&::app::Uno::Time::Text::LocalDateTimePattern__General,
        (uObject**)&::app::Uno::Time::Text::LocalTimePattern__General,
        (uObject**)&::app::Uno::Time::Text::OffsetPattern__General,
        (uObject**)&::app::Uno::UX::Resource___globals,
        NULL
    };

    return result;
}

uWeakObject*** uGetGlobalWeakRefs()
{
    static uWeakObject** result[] =
    {
        
        NULL
    };

    return result;
}

#ifdef U_DEBUG_MEM

const char** uGetGlobalStrongNames()
{
    static const char* result[] =
    {
        "Android.Base.JNI._rootActivityWrapped",
        "Android.Base.Versions._release",
        "Experimental.Http.HttpLoader._cache",
        "Experimental.Http.LoaderConst.Handler",
        "Fuse.Android.BitmapFactory._bitmapCache",
        "Fuse.Android.Blitter.Singleton",
        "Fuse.Android.Button.TextColorProperty",
        "Fuse.Android.FocusManager.Singleton",
        "Fuse.Android.InputDispatch._listeners",
        "Fuse.Android.InputDispatch._touchListener",
        "Fuse.Android.NativeView._viewHandle",
        "Fuse.Android.RootView._singleton",
        "Fuse.Android.TypefaceCache._typefaces",
        "Fuse.Animations.ConverterDouble.Singleton",
        "Fuse.Animations.ConverterFloat.Singleton",
        "Fuse.Animations.ConverterFloat2.Singleton",
        "Fuse.Animations.ConverterFloat3.Singleton",
        "Fuse.Animations.ConverterFloat4.Singleton",
        "Fuse.Animations.DiscreteSingleTrack.Singleton",
        "Fuse.Animations.EasingTrack.Singleton",
        "Fuse.Animations.MasterTransform.identity",
        "Fuse.Animations.Mixer._default",
        "Fuse.Animations.Mixer._defaultDiscrete",
        "Fuse.Animations.Mixer.PostMasters",
        "Fuse.Animations.Mixer.PreMasters",
        "Fuse.BasicTheme.BasicStyle.Amber",
        "Fuse.BasicTheme.BasicStyle.Blue",
        "Fuse.BasicTheme.BasicStyle.BlueGrey",
        "Fuse.BasicTheme.BasicStyle.Brown",
        "Fuse.BasicTheme.BasicStyle.ColorCodes",
        "Fuse.BasicTheme.BasicStyle.Cyan",
        "Fuse.BasicTheme.BasicStyle.DeepOrange",
        "Fuse.BasicTheme.BasicStyle.DeepPurple",
        "Fuse.BasicTheme.BasicStyle.Green",
        "Fuse.BasicTheme.BasicStyle.Grey",
        "Fuse.BasicTheme.BasicStyle.Indigo",
        "Fuse.BasicTheme.BasicStyle.LightBlue",
        "Fuse.BasicTheme.BasicStyle.LightGreen",
        "Fuse.BasicTheme.BasicStyle.Lime",
        "Fuse.BasicTheme.BasicStyle.Orange",
        "Fuse.BasicTheme.BasicStyle.Pink",
        "Fuse.BasicTheme.BasicStyle.Purple",
        "Fuse.BasicTheme.BasicStyle.Red",
        "Fuse.BasicTheme.BasicStyle.RobotoBlack",
        "Fuse.BasicTheme.BasicStyle.RobotoBlackItalic",
        "Fuse.BasicTheme.BasicStyle.RobotoBold",
        "Fuse.BasicTheme.BasicStyle.RobotoBoldItalic",
        "Fuse.BasicTheme.BasicStyle.RobotoCondensedBold",
        "Fuse.BasicTheme.BasicStyle.RobotoCondensedBoldItalic",
        "Fuse.BasicTheme.BasicStyle.RobotoCondensedItalic",
        "Fuse.BasicTheme.BasicStyle.RobotoCondensedLight",
        "Fuse.BasicTheme.BasicStyle.RobotoCondensedLightItalic",
        "Fuse.BasicTheme.BasicStyle.RobotoCondensedRegular",
        "Fuse.BasicTheme.BasicStyle.RobotoItalic",
        "Fuse.BasicTheme.BasicStyle.RobotoLight",
        "Fuse.BasicTheme.BasicStyle.RobotoLightItalic",
        "Fuse.BasicTheme.BasicStyle.RobotoMedium",
        "Fuse.BasicTheme.BasicStyle.RobotoMediumItalic",
        "Fuse.BasicTheme.BasicStyle.RobotoRegular",
        "Fuse.BasicTheme.BasicStyle.RobotoThin",
        "Fuse.BasicTheme.BasicStyle.RobotoThinItalic",
        "Fuse.BasicTheme.BasicStyle.Teal",
        "Fuse.BasicTheme.BasicStyle.Yellow",
        "Fuse.BasicTheme.BasicTheme._singleton_1",
        "Fuse.Camera.AndroidCameraImpl._pendingTask",
        "Fuse.Controls.Button.TextProperty",
        "Fuse.Controls.Control.BackgroundProperty",
        "Fuse.Controls.Graphics.DefaultTextVisual._textRenderers",
        "Fuse.Controls.Graphics.GraphicsStyle.Default",
        "Fuse.Controls.Graphics.ImageElementDraw.Impl",
        "Fuse.Controls.Graphics.LinearSliderBehavior._horizontalGesture",
        "Fuse.Controls.GraphicsView.BackgroundProperty_1",
        "Fuse.Controls.Grid.CellSpacingProperty",
        "Fuse.Controls.Image.ContentAlignmentProperty",
        "Fuse.Controls.Image.MemoryPolicyProperty",
        "Fuse.Controls.Image.StretchDirectionProperty",
        "Fuse.Controls.Image.StretchModeProperty",
        "Fuse.Controls.Image.StretchSizingProperty",
        "Fuse.Controls.Internal.DefaultTextRenderer._bitmapFonts",
        "Fuse.Controls.Internal.DefaultTextRenderer._renderer",
        "Fuse.Controls.Number.FormatProperty",
        "Fuse.Controls.Number.ValueProperty",
        "Fuse.Controls.PageIndicator.DotFactoryProperty",
        "Fuse.Controls.Panel.AppearanceProperty",
        "Fuse.Controls.Panel.LayoutProperty",
        "Fuse.Controls.PlainTextEdit.NativeEditProperty",
        "Fuse.Controls.PlainTextEdit.NativeTextProperty",
        "Fuse.Controls.RangeControl.MaximumProperty",
        "Fuse.Controls.RangeControl.MinimumProperty",
        "Fuse.Controls.RangeControl.ValueProperty",
        "Fuse.Controls.Rectangle.CornerRadiusProperty",
        "Fuse.Controls.ScrollView.AllowedScrollDirectionsProperty",
        "Fuse.Controls.Shape.FillProperty",
        "Fuse.Controls.Shape.SmoothnessProperty",
        "Fuse.Controls.Shape.StrokeProperty",
        "Fuse.Controls.StackPanel.ItemSpacingProperty",
        "Fuse.Controls.StackPanel.OrientationProperty",
        "Fuse.Controls.TextControl.FontProperty",
        "Fuse.Controls.TextControl.FontSizeProperty",
        "Fuse.Controls.TextControl.LineSpacingProperty",
        "Fuse.Controls.TextControl.TextAlignmentProperty",
        "Fuse.Controls.TextControl.TextColorProperty",
        "Fuse.Controls.TextControl.TextWrappingProperty",
        "Fuse.Controls.TextControl.ValueProperty",
        "Fuse.Controls.TextEdit.TextEditVisual._horizontalGesture",
        "Fuse.Controls.TextEdit.TextEditVisual._verticalGesture",
        "Fuse.Controls.TextEdit.TextPosition.Default",
        "Fuse.Controls.TextInput.CaretColorProperty",
        "Fuse.Controls.TextInput.InputHintProperty",
        "Fuse.Controls.TextInput.IsMultilineProperty",
        "Fuse.Controls.TextInput.IsPasswordProperty",
        "Fuse.Controls.TextInput.IsReadOnlyProperty",
        "Fuse.Controls.TextInput.SelectionColorProperty",
        "Fuse.Controls.ToggleControl.ValueProperty",
        "Fuse.DrawContext._cullFaces",
        "Fuse.DrawContext._renderTargets",
        "Fuse.DrawContext._scissors",
        "Fuse.DrawContext._viewports",
        "Fuse.DrawHelpers._instance",
        "Fuse.Drawing.BlendModeHelpers._invalidBlendMode",
        "Fuse.Drawing.Brushes.Aqua",
        "Fuse.Drawing.Brushes.Black",
        "Fuse.Drawing.Brushes.Blue",
        "Fuse.Drawing.Brushes.Fuchsia",
        "Fuse.Drawing.Brushes.Gray",
        "Fuse.Drawing.Brushes.Green",
        "Fuse.Drawing.Brushes.Lime",
        "Fuse.Drawing.Brushes.Maroon",
        "Fuse.Drawing.Brushes.Navy",
        "Fuse.Drawing.Brushes.Olive",
        "Fuse.Drawing.Brushes.Purple",
        "Fuse.Drawing.Brushes.Red",
        "Fuse.Drawing.Brushes.Silver",
        "Fuse.Drawing.Brushes.Teal",
        "Fuse.Drawing.Brushes.Transparent",
        "Fuse.Drawing.Brushes.White",
        "Fuse.Drawing.Brushes.Yellow",
        "Fuse.Drawing.LinearGradientDrawable.Singleton",
        "Fuse.Drawing.Primitives.Circle.Singleton",
        "Fuse.Drawing.Primitives.Rectangle.Singleton",
        "Fuse.Drawing.Primitives.Wedge.Singleton",
        "Fuse.Elements.Cache.cacheHelper",
        "Fuse.Elements.Element.AlignmentProperty",
        "Fuse.Elements.Element.AnchorProperty",
        "Fuse.Elements.Element.CachingModeProperty",
        "Fuse.Elements.Element.ClipToBoundsProperty",
        "Fuse.Elements.Element.HeightProperty",
        "Fuse.Elements.Element.HitTestModeProperty",
        "Fuse.Elements.Element.MarginProperty",
        "Fuse.Elements.Element.MaxHeightProperty",
        "Fuse.Elements.Element.MaxWidthProperty",
        "Fuse.Elements.Element.MinHeightProperty",
        "Fuse.Elements.Element.MinWidthProperty",
        "Fuse.Elements.Element.OffsetProperty",
        "Fuse.Elements.Element.OpacityProperty",
        "Fuse.Elements.Element.PaddingProperty",
        "Fuse.Elements.Element.VisibilityProperty",
        "Fuse.Elements.Element.WidthProperty",
        "Fuse.Elements.Element.XProperty",
        "Fuse.Elements.Element.YProperty",
        "Fuse.Elements.ElementAtlasFramebufferPool._poolImpl",
        "Fuse.Elements.ElementAtlasFramebufferPool.AtlasSizeChanged",
        "Fuse.Elements.Internal.ElementDraw.Impl",
        "Fuse.Elements.Internal.Scale9Rectangle.Impl",
        "Fuse.Elements.LimitBoxSizing._limitHeightProperty",
        "Fuse.Elements.LimitBoxSizing._limitHeightUnitProperty",
        "Fuse.Elements.LimitBoxSizing._limitWidthProperty",
        "Fuse.Elements.LimitBoxSizing._limitWidthUnitProperty",
        "Fuse.Elements.LimitBoxSizing.Singleton",
        "Fuse.Elements.NoImplicitMaxBoxSizing.Singleton_1",
        "Fuse.Elements.ShadowBoxSizing._shadowDataProperty",
        "Fuse.Elements.ShadowBoxSizing.Singleton",
        "Fuse.Elements.StandardBoxSizing.Singleton",
        "Fuse.Elements.TransformOrigins.Anchor",
        "Fuse.Elements.TransformOrigins.Center",
        "Fuse.Elements.TransformOrigins.HorizontalBoxCenter",
        "Fuse.Elements.TransformOrigins.TopLeft",
        "Fuse.Elements.TransformOrigins.VerticalBoxCenter",
        "Fuse.Entities.Designer.PreloadedResources.resources",
        "Fuse.Font._fontFaces",
        "Fuse.Fonts._fallback",
        "Fuse.FramebufferPool.framebufferPool",
        "Fuse.Gestures.Clicker._clickerProperty",
        "Fuse.Gestures.Internal.EdgeSwiper._leftRightSwipe",
        "Fuse.Gestures.Internal.EdgeSwiper._upDownSwipe",
        "Fuse.Gestures.Scroller._horizontalGesture",
        "Fuse.Gestures.Scroller._verticalGesture",
        "Fuse.GraphicsTheme._singleton",
        "Fuse.Input.Focus._focusDelegatorHandle",
        "Fuse.Input.Focus._focusedObject",
        "Fuse.Input.Focus._gained",
        "Fuse.Input.Focus._isFoucsableChanged",
        "Fuse.Input.Focus._lastFocusedNode",
        "Fuse.Input.Focus._lost",
        "Fuse.Input.Focus.FocusDelegateProperty",
        "Fuse.Input.Focus.IsFocusableProperty",
        "Fuse.Input.Keyboard._keyboardHandle",
        "Fuse.Input.Keyboard._keyPressed",
        "Fuse.Input.Keyboard._keyReleased",
        "Fuse.Input.Keyboard._keysDown",
        "Fuse.Input.Pointer._entered",
        "Fuse.Input.Pointer._hardCapturers",
        "Fuse.Input.Pointer._lastHitNodes",
        "Fuse.Input.Pointer._left",
        "Fuse.Input.Pointer._moved",
        "Fuse.Input.Pointer._pointersDown",
        "Fuse.Input.Pointer._pressed",
        "Fuse.Input.Pointer._released",
        "Fuse.Input.Pointer._softCapturers",
        "Fuse.Input.Pointer._wheelMoved",
        "Fuse.Input.TextService._textEntered",
        "Fuse.Internal.BlenderMap._blenders",
        "Fuse.Internal.Drawing.SolidRectangle.Impl",
        "Fuse.iOS.Blitter.Singleton",
        "Fuse.iOS.Button.DisabledColorProperty",
        "Fuse.iOS.Button.HighlightedColorProperty",
        "Fuse.iOS.Button.NormalColorProperty",
        "Fuse.iOS.Button.SelectedColorProperty",
        "Fuse.iOS.StatusBarConfig._stack",
        "Fuse.Layouts.DockLayout._dockProperty",
        "Fuse.Layouts.GridLayout._actualColumnProperty",
        "Fuse.Layouts.GridLayout._actualRowProperty",
        "Fuse.Layouts.GridLayout._columnProperty",
        "Fuse.Layouts.GridLayout._columnSpanProperty",
        "Fuse.Layouts.GridLayout._rowProperty",
        "Fuse.Layouts.GridLayout._rowSpanProperty",
        "Fuse.Layouts.GridLayout._staticDefaultColumn",
        "Fuse.Layouts.GridLayout._staticDefaultRow",
        "Fuse.Layouts.Layout._fillPaddingProperty",
        "Fuse.Layouts.Layout._layerProperty",
        "Fuse.Layouts.Layout._layoutRoleProperty",
        "Fuse.Layouts.Layouts.Default",
        "Fuse.Navigation.DirectNavigation._indexProperty",
        "Fuse.Navigation.EdgeNavigation._edgeHandle",
        "Fuse.Navigation.Navigation._contextHandle",
        "Fuse.Navigation.Navigation._navigationHandler",
        "Fuse.Navigation.Navigation._navigationProgress",
        "Fuse.Navigation.Navigation._navigationStateHandler",
        "Fuse.Navigation.NavigationPageProperty._pageProperty",
        "Fuse.Navigation.NavigationPageProperty.RootedBindings",
        "Fuse.Node._addedHandle",
        "Fuse.Node._isEnabledChangedHandle",
        "Fuse.Node._isVisibleChangedHandle",
        "Fuse.Node._nameHandle",
        "Fuse.Node._needsStyling",
        "Fuse.Node._removedHandle",
        "Fuse.Node._resourcesHandle",
        "Fuse.Node._rootedHandle",
        "Fuse.Node._styleHandle",
        "Fuse.Node._unrootedHandle",
        "Fuse.Node.IsEnabledProperty",
        "Fuse.Node.NameProperty",
        "Fuse.Node.SnapToPixelsProperty",
        "Fuse.NodeBounds._empty",
        "Fuse.NodeBounds._infinite",
        "Fuse.Physics.Body._frictionHandle",
        "Fuse.Physics.World._globalWorld",
        "Fuse.Physics.World._worldHandle",
        "Fuse.Preview.SelectionManager._Selection",
        "Fuse.Preview.SelectionManager.SelectionChanged",
        "Fuse.Properties.NoValue",
        "Fuse.Reactive.Dispatcher._uiThread",
        "Fuse.Reactive.FuseJS.InterApp._cachedUris",
        "Fuse.Reactive.FuseJS.InterApp._onReceivedUri",
        "Fuse.Reactive.FuseJS.Lifecycle._enteringBackground",
        "Fuse.Reactive.FuseJS.Lifecycle._enteringForeground",
        "Fuse.Reactive.FuseJS.Lifecycle._enteringInteractive",
        "Fuse.Reactive.FuseJS.Lifecycle._exitedInteractive",
        "Fuse.Reactive.FuseJS.Lifecycle._terminating",
        "Fuse.Reactive.JavaScript._exceptionHandler",
        "Fuse.Reactive.JavaScript._rootedScripts",
        "Fuse.Reactive.JavaScript._worker",
        "Fuse.Reactive.ScriptEvents._propHandle",
        "Fuse.Reactive.ThreadWorker._context",
        "Fuse.Reactive.ThreadWorker._observable",
        "Fuse.Reactive.ThreadWorker._subscriberProxy",
        "Fuse.Reactive.ThreadWorker._timer",
        "Fuse.Resources.DisposalManager._items",
        "Fuse.Resources.DisposalManager._softDisposables",
        "Fuse.Resources.FileImageSourceCache._cache",
        "Fuse.Resources.HttpImageSourceCache._cache",
        "Fuse.Resources.MemoryPolicy.PreloadRetain",
        "Fuse.Resources.MemoryPolicy.UnloadUnused",
        "Fuse.Resources.ResourceRegistry._handlers",
        "Fuse.Scripting.Duktape.Context._emptyArgs",
        "Fuse.Scripting.NameRegistry._listeners",
        "Fuse.Scripting.NameRegistry._names",
        "Fuse.Shapes.Rectangle.CornerRadiusProperty",
        "Fuse.Shapes.Shape.FillProperty",
        "Fuse.Shapes.Shape.SmoothnessProperty",
        "Fuse.Shapes.Shape.StrokeProperty",
        "Fuse.StyleProperty.All",
        "Fuse.TranslationModes.Local",
        "Fuse.TranslationModes.ParentSize",
        "Fuse.TranslationModes.Size",
        "Fuse.Triggers.Actions.GiveFocus.Singleton",
        "Fuse.Triggers.LayoutAnimation._positionChange",
        "Fuse.Triggers.LayoutAnimation._sizeChange",
        "Fuse.Triggers.LayoutAnimation.PositionChange",
        "Fuse.Triggers.LayoutAnimation.SizeChange",
        "Fuse.Triggers.WhileFailed._whileFailedProp",
        "Fuse.Triggers.WhileKeyboardVisible.Keyboard",
        "Fuse.Triggers.WhileLoading._whileLoadingProp",
        "Fuse.UpdateManager._deferredActions",
        "Fuse.UpdateManager._stages",
        "MainView.AudioModule",
        "MainView.bundleDict",
        "MainView.channelDict",
        "MainView.isPlayDict",
        "MainView.playerDict",
        "MainView.soundDict",
        "MainView.volumeDict",
        "Uno.Application._Current",
        "Uno.CharPunctuationChecker.punctuationRangeList",
        "Uno.CharPunctuationChecker.singlePunctuationChars",
        "Uno.Data.Json.Boolean._false",
        "Uno.Data.Json.Boolean._true",
        "Uno.Data.Json.Null._singleton",
        "Uno.Diagnostics.Debug._assertionHandler",
        "Uno.Diagnostics.Debug._indentStr",
        "Uno.Diagnostics.Debug._logHandler",
        "Uno.EventArgs.Empty",
        "Uno.Net.Http.HostInfoParser._invalidChars",
        "Uno.Net.Http.HttpStatusReasonPhrase.ClientErrors",
        "Uno.Net.Http.HttpStatusReasonPhrase.Informational",
        "Uno.Net.Http.HttpStatusReasonPhrase.Redirection",
        "Uno.Net.Http.HttpStatusReasonPhrase.ServerErrors",
        "Uno.Net.Http.HttpStatusReasonPhrase.Success",
        "Uno.Net.Http.UriScheme._defaultPorts",
        "Uno.Net.Http.UriScheme.KnownInternetSchemes",
        "Uno.Net.Http.UriScheme.KnownNonInternetSchemes",
        "Uno.Platform.SystemUI.BottomFrameWillResize",
        "Uno.Platform.SystemUI.TopFrameWillResize",
        "Uno.Platform2.Application.DelayedUri",
        "Uno.Platform2.Application.EnteringBackground",
        "Uno.Platform2.Application.EnteringForeground",
        "Uno.Platform2.Application.EnteringInteractive",
        "Uno.Platform2.Application.ExitedInteractive",
        "Uno.Platform2.Application.KeyDown",
        "Uno.Platform2.Application.KeyUp",
        "Uno.Platform2.Application.ReceivedLowMemoryWarning",
        "Uno.Platform2.Application.ReceivedURI",
        "Uno.Platform2.Application.Started",
        "Uno.Platform2.Application.Terminating",
        "Uno.Runtime.Implementation.Internal.BundleRegistry._data",
        "Uno.Runtime.Implementation.Internal.NumericFormatter._decimalPoint",
        "Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall._boundAttributes",
        "string.Empty",
        "Uno.Threading.POSIXThread._callbacks",
        "Uno.Time.Calendars.Era.AnnoHegirae",
        "Uno.Time.Calendars.Era.AnnoMartyrum",
        "Uno.Time.Calendars.Era.AnnoMundi",
        "Uno.Time.Calendars.Era.AnnoPersico",
        "Uno.Time.Calendars.Era.BeforeCommon",
        "Uno.Time.Calendars.Era.Common",
        "Uno.Time.Calendars.GregorianYearMonthDayCalculator.MaxDaysPerMonth",
        "Uno.Time.Calendars.GregorianYearMonthDayCalculator.MaxTotalTicksByMonth",
        "Uno.Time.Calendars.GregorianYearMonthDayCalculator.MinDaysPerMonth",
        "Uno.Time.Calendars.GregorianYearMonthDayCalculator.MinTotalTicksByMonth",
        "Uno.Time.Calendars.GregorianYearMonthDayCalculator.MonthLengths",
        "Uno.Time.Calendars.GregorianYearMonthDayCalculator.MonthStartTicks",
        "Uno.Time.Calendars.GregorianYearMonthDayCalculator.YearStartDays",
        "Uno.Time.Calendars.GregorianYearMonthDayCalculator.YearStartTicks",
        "Uno.Time.CalendarSystem._gregorianCalendarSystem",
        "Uno.Time.DateTimeZone.UtcZone",
        "Uno.Time.Period.Zero",
        "Uno.Time.Text.LocalDateTimePattern.General",
        "Uno.Time.Text.LocalTimePattern.General",
        "Uno.Time.Text.OffsetPattern.General",
        "Uno.UX.Resource._globals",
        NULL
    };

    return result;
}

const char** uGetGlobalWeakNames()
{
    static const char* result[] =
    {
        
        NULL
    };

    return result;
}

#endif
