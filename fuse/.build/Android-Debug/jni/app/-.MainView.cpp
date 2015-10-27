// This file was generated based on '/Users/jangwonhee/Documents/Buddha_2/fuse/MainView.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.AudioModule.h>
#include <app/-.MainView.h>
#include <app/-.MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Sourc-ef3dbb07.h>
#include <app/-.MainView_Fuse_Controls_TextControl_string_Value_Property.h>
#include <app/-.MainView_Fuse_Elements_Element_float_Opacity_Property.h>
#include <app/-.MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visib-fb5eb72c.h>
#include <app/-.MainView_Fuse_Triggers_WhileBool_bool_Value_Property.h>
#include <app/-.MainView_Template.h>
#include <app/-.MainView_Template1.h>
#include <app/Android.Base.Versions.h>
#include <app/Android.Bootstrapper.h>
#include <app/Android.Runtime.NativeActivityHelper.h>
#include <app/Experimental.Audio.Channel.h>
#include <app/Experimental.Audio.Player.h>
#include <app/Experimental.Audio.Sound.h>
#include <app/Experimental.Http.HttpLoader.h>
#include <app/Fuse.Android.BitmapFactory.h>
#include <app/Fuse.Android.Blitter.h>
#include <app/Fuse.Android.Button.h>
#include <app/Fuse.Android.FocusManager.h>
#include <app/Fuse.Android.InputDispatch.h>
#include <app/Fuse.Android.NativeView.h>
#include <app/Fuse.Android.TypefaceCache.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Change__float.h>
#include <app/Fuse.Animations.Change__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.ConverterDouble.h>
#include <app/Fuse.Animations.ConverterFloat.h>
#include <app/Fuse.Animations.ConverterFloat2.h>
#include <app/Fuse.Animations.ConverterFloat3.h>
#include <app/Fuse.Animations.ConverterFloat4.h>
#include <app/Fuse.Animations.DiscreteSingleTrack.h>
#include <app/Fuse.Animations.EasingTrack.h>
#include <app/Fuse.Animations.MasterTransform.h>
#include <app/Fuse.Animations.Mixer.h>
#include <app/Fuse.Animations.Scale.h>
#include <app/Fuse.Animations.TrackAnimator.h>
#include <app/Fuse.AppBase.h>
#include <app/Fuse.BasicTheme.BasicStyle.h>
#include <app/Fuse.BasicTheme.BasicTheme.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Graphics.DefaultTextVisual.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle.h>
#include <app/Fuse.Controls.Graphics.ImageElementDraw.h>
#include <app/Fuse.Controls.Graphics.LinearSliderBehavior.h>
#include <app/Fuse.Controls.GraphicsView.h>
#include <app/Fuse.Controls.Grid.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.Number.h>
#include <app/Fuse.Controls.Page.h>
#include <app/Fuse.Controls.PageIndicator.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.PlainTextEdit.h>
#include <app/Fuse.Controls.RangeControl.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.Controls.Shape.h>
#include <app/Fuse.Controls.StackPanel.h>
#include <app/Fuse.Controls.Text.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Controls.TextEdit.TextEditVisual.h>
#include <app/Fuse.Controls.TextEdit.TextPosition.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Controls.ToggleControl.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.BlendModeHelpers.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.Brushes.h>
#include <app/Fuse.Drawing.Colors.h>
#include <app/Fuse.Drawing.LinearGradient.h>
#include <app/Fuse.Drawing.LinearGradientDrawable.h>
#include <app/Fuse.Drawing.Primitives.Circle.h>
#include <app/Fuse.Drawing.Primitives.Rectangle.h>
#include <app/Fuse.Drawing.Primitives.Wedge.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.StaticSolidColor.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Effects.DropShadow.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.Cache.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.Internal.ElementDraw.h>
#include <app/Fuse.Elements.Internal.Scale9Rectangle.h>
#include <app/Fuse.Elements.LimitBoxSizing.h>
#include <app/Fuse.Elements.NoImplicitMaxBoxSizing.h>
#include <app/Fuse.Elements.ShadowBoxSizing.h>
#include <app/Fuse.Elements.SizeUnit.h>
#include <app/Fuse.Elements.StandardBoxSizing.h>
#include <app/Fuse.Elements.StretchMode.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.Elements.TransformOrigins.h>
#include <app/Fuse.Elements.Visibility.h>
#include <app/Fuse.Entities.Designer.PreloadedResources.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Gestures.Clicked.h>
#include <app/Fuse.Gestures.Clicker.h>
#include <app/Fuse.Gestures.Internal.EdgeSwiper.h>
#include <app/Fuse.Gestures.Scroller.h>
#include <app/Fuse.Gestures.WhilePressed.h>
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
#include <app/Fuse.Layouts.Orientation.h>
#include <app/Fuse.Navigation.DirectNavigation.h>
#include <app/Fuse.Navigation.EdgeNavigation.h>
#include <app/Fuse.Navigation.NavigateTo.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <app/Fuse.Navigation.NavigationPageProperty.h>
#include <app/Fuse.Navigation.SwipeNavigate.h>
#include <app/Fuse.Navigation.WhileActive.h>
#include <app/Fuse.Navigation.WhileInactive.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeBounds.h>
#include <app/Fuse.NodeEventHandler.h>
#include <app/Fuse.Physics.Body.h>
#include <app/Fuse.Physics.World.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.Reactive.DataBinding__bool.h>
#include <app/Fuse.Reactive.DataBinding__float.h>
#include <app/Fuse.Reactive.DataBinding__string.h>
#include <app/Fuse.Reactive.DataToResourceBinding__Fuse_Resources_ImageSource.h>
#include <app/Fuse.Reactive.EventBinding.h>
#include <app/Fuse.Reactive.FuseJS.InterApp.h>
#include <app/Fuse.Reactive.JavaScript.h>
#include <app/Fuse.Reactive.ScriptEvents.h>
#include <app/Fuse.Reactive.ThreadWorker.h>
#include <app/Fuse.Resources.DisposalManager.h>
#include <app/Fuse.Resources.FileImageSource.h>
#include <app/Fuse.Resources.FileImageSourceCache.h>
#include <app/Fuse.Resources.HttpImageSourceCache.h>
#include <app/Fuse.Resources.MemoryPolicy.h>
#include <app/Fuse.Resources.ResourceRegistry.h>
#include <app/Fuse.RootViewport.h>
#include <app/Fuse.Scripting.Duktape.Context.h>
#include <app/Fuse.Scripting.NameRegistry.h>
#include <app/Fuse.Shapes.Rectangle.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_-710aaa9c.h>
#include <app/Fuse.Theme.h>
#include <app/Fuse.TranslationModes.h>
#include <app/Fuse.Triggers.Actions.Callback.h>
#include <app/Fuse.Triggers.Actions.GiveFocus.h>
#include <app/Fuse.Triggers.Actions.Set__float.h>
#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Fuse.Triggers.LayoutAnimation.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Fuse.Triggers.WhileBool.h>
#include <app/Fuse.Triggers.WhileFailed.h>
#include <app/Fuse.Triggers.WhileKeyboardVisible.h>
#include <app/Fuse.Triggers.WhileLoading.h>
#include <app/Fuse.Triggers.WhileTrue.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.CharPunctuationChecker.h>
#include <app/Uno.Collections.Dictionary__string__bool.h>
#include <app/Uno.Collections.Dictionary__string__Experimental_Audio_Channel.h>
#include <app/Uno.Collections.Dictionary__string__Experimental_Audio_Player.h>
#include <app/Uno.Collections.Dictionary__string__Experimental_Audio_Sound.h>
#include <app/Uno.Collections.Dictionary__string__float.h>
#include <app/Uno.Collections.Dictionary__string__Uno_BundleFile.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__string__Experimental_Au-c146112c.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.ICollection__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.ICollection__Fuse_Style.h>
#include <app/Uno.Collections.ICollection__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.ICollection__Uno_UX_Resource.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IList__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Style.h>
#include <app/Uno.Collections.IList__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IList__Uno_UX_Resource.h>
#include <app/Uno.Collections.KeyValuePair__string__Experimental_Audio_Channel.h>
#include <app/Uno.Color.h>
#include <app/Uno.Data.Json.Boolean.h>
#include <app/Uno.Data.Json.Null.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Net.Http.HostInfoParser.h>
#include <app/Uno.Net.Http.HttpMessageCache.h>
#include <app/Uno.Net.Http.HttpStatusReasonPhrase.h>
#include <app/Uno.Net.Http.UriScheme.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Platform2.ApplicationState.h>
#include <app/Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <app/Uno.Runtime.Implementation.Internal.Bootstrapper.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.Internal.NumericFormatter.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.POSIXThread.h>
#include <app/Uno.Time.Calendars.Era.h>
#include <app/Uno.Time.Calendars.GregorianYearMonthDayCalculator.h>
#include <app/Uno.Time.Constants.h>
#include <app/Uno.Time.DateTimeZone.h>
#include <app/Uno.Time.Duration.h>
#include <app/Uno.Time.LocalTime.h>
#include <app/Uno.Time.Offset.h>
#include <app/Uno.Time.Period.h>
#include <app/Uno.UX.BundleFileSource.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Property__bool.h>
#include <app/Uno.UX.Property__float.h>
#include <app/Uno.UX.Property__Fuse_Elements_Visibility.h>
#include <app/Uno.UX.Property__Fuse_Resources_ImageSource.h>
#include <app/Uno.UX.Property__string.h>
#include <app/Uno.UX.Resource.h>
#include <app/Uno.UX.Template__Fuse_Controls_Page.h>
#include <app/Uno.UX.Template__Fuse_Controls_Text.h>

namespace app {

::uStaticStrong< ::app::AudioModule*> MainView__AudioModule;
::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*> MainView__bundleDict;
::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel*> MainView__channelDict;
::uStaticStrong< ::app::Uno::Collections::Dictionary__string__bool*> MainView__isPlayDict;
::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Player*> MainView__playerDict;
::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Sound*> MainView__soundDict;
::uStaticStrong< ::app::Uno::Collections::Dictionary__string__float*> MainView__volumeDict;

MainView__uType* MainView__typeof()
{
    static ::uStaticStrong<MainView__uType*> type;
    if (type != NULL) return type;

    type = (MainView__uType*)::uAllocClassType(sizeof(MainView__uType), "MainView", false, 0, 138, 0);

    type->SetBaseType(::app::Fuse::App__typeof());

    type->SetStrongRefs(
        "animDesc0", offsetof(MainView, animDesc0),
        "animDesc0_Visibility_inst", offsetof(MainView, animDesc0_Visibility_inst),
        "animDesc1", offsetof(MainView, animDesc1),
        "animDesc1_Visibility_inst", offsetof(MainView, animDesc1_Visibility_inst),
        "animDesc2", offsetof(MainView, animDesc2),
        "animDesc2_Visibility_inst", offsetof(MainView, animDesc2_Visibility_inst),
        "animDesc3", offsetof(MainView, animDesc3),
        "animDesc3_Visibility_inst", offsetof(MainView, animDesc3_Visibility_inst),
        "animDesc4", offsetof(MainView, animDesc4),
        "animDesc4_Visibility_inst", offsetof(MainView, animDesc4_Visibility_inst),
        "animDesc5", offsetof(MainView, animDesc5),
        "animDesc5_Visibility_inst", offsetof(MainView, animDesc5_Visibility_inst),
        "animDesc6", offsetof(MainView, animDesc6),
        "animDesc6_Visibility_inst", offsetof(MainView, animDesc6_Visibility_inst),
        "animDesc7", offsetof(MainView, animDesc7),
        "animDesc7_Visibility_inst", offsetof(MainView, animDesc7_Visibility_inst),
        "animIMG", offsetof(MainView, animIMG),
        "animIMG_Source_inst", offsetof(MainView, animIMG_Source_inst),
        "config", offsetof(MainView, config),
        "help", offsetof(MainView, help),
        "helpBtn1", offsetof(MainView, helpBtn1),
        "helpBtn1_Opacity_inst", offsetof(MainView, helpBtn1_Opacity_inst),
        "helpBtn2", offsetof(MainView, helpBtn2),
        "helpBtn2_Opacity_inst", offsetof(MainView, helpBtn2_Opacity_inst),
        "helpBtn3", offsetof(MainView, helpBtn3),
        "helpBtn3_Opacity_inst", offsetof(MainView, helpBtn3_Opacity_inst),
        "helpPage1", offsetof(MainView, helpPage1),
        "helpPage2", offsetof(MainView, helpPage2),
        "helpPage3", offsetof(MainView, helpPage3),
        "helpPages", offsetof(MainView, helpPages),
        "label", offsetof(MainView, label),
        "label1", offsetof(MainView, label1),
        "label2", offsetof(MainView, label2),
        "main", offsetof(MainView, main),
        "playBackgroundImage", offsetof(MainView, playBackgroundImage),
        "playBackgroundImage_Source_inst", offsetof(MainView, playBackgroundImage_Source_inst),
        "playBackgroundText", offsetof(MainView, playBackgroundText),
        "playBackgroundText_Value_inst", offsetof(MainView, playBackgroundText_Value_inst),
        "playBackgroundTextP", offsetof(MainView, playBackgroundTextP),
        "playBackgroundTextP_Opacity_inst", offsetof(MainView, playBackgroundTextP_Opacity_inst),
        "playBackgroundTitle", offsetof(MainView, playBackgroundTitle),
        "playBackgroundTitle_Value_inst", offsetof(MainView, playBackgroundTitle_Value_inst),
        "playForegroundImage", offsetof(MainView, playForegroundImage),
        "playForegroundImage_Opacity_inst", offsetof(MainView, playForegroundImage_Opacity_inst),
        "playForegroundImage_Source_inst", offsetof(MainView, playForegroundImage_Source_inst),
        "playForegroundText", offsetof(MainView, playForegroundText),
        "playForegroundText_Value_inst", offsetof(MainView, playForegroundText_Value_inst),
        "playForegroundTextP", offsetof(MainView, playForegroundTextP),
        "playForegroundTextP_Opacity_inst", offsetof(MainView, playForegroundTextP_Opacity_inst),
        "playForegroundTitle", offsetof(MainView, playForegroundTitle),
        "playForegroundTitle_Opacity_inst", offsetof(MainView, playForegroundTitle_Opacity_inst),
        "playForegroundTitle_Value_inst", offsetof(MainView, playForegroundTitle_Value_inst),
        "playPageBackground", offsetof(MainView, playPageBackground),
        "playPageForeground", offsetof(MainView, playPageForeground),
        "playPages", offsetof(MainView, playPages),
        "score", offsetof(MainView, score),
        "start", offsetof(MainView, start),
        "temp_eb0", offsetof(MainView, temp_eb0),
        "temp_eb1", offsetof(MainView, temp_eb1),
        "temp_eb10", offsetof(MainView, temp_eb10),
        "temp_eb11", offsetof(MainView, temp_eb11),
        "temp_eb12", offsetof(MainView, temp_eb12),
        "temp_eb13", offsetof(MainView, temp_eb13),
        "temp_eb14", offsetof(MainView, temp_eb14),
        "temp_eb15", offsetof(MainView, temp_eb15),
        "temp_eb16", offsetof(MainView, temp_eb16),
        "temp_eb17", offsetof(MainView, temp_eb17),
        "temp_eb18", offsetof(MainView, temp_eb18),
        "temp_eb19", offsetof(MainView, temp_eb19),
        "temp_eb2", offsetof(MainView, temp_eb2),
        "temp_eb20", offsetof(MainView, temp_eb20),
        "temp_eb21", offsetof(MainView, temp_eb21),
        "temp_eb22", offsetof(MainView, temp_eb22),
        "temp_eb23", offsetof(MainView, temp_eb23),
        "temp_eb24", offsetof(MainView, temp_eb24),
        "temp_eb25", offsetof(MainView, temp_eb25),
        "temp_eb26", offsetof(MainView, temp_eb26),
        "temp_eb27", offsetof(MainView, temp_eb27),
        "temp_eb28", offsetof(MainView, temp_eb28),
        "temp_eb29", offsetof(MainView, temp_eb29),
        "temp_eb3", offsetof(MainView, temp_eb3),
        "temp_eb30", offsetof(MainView, temp_eb30),
        "temp_eb31", offsetof(MainView, temp_eb31),
        "temp_eb32", offsetof(MainView, temp_eb32),
        "temp_eb33", offsetof(MainView, temp_eb33),
        "temp_eb34", offsetof(MainView, temp_eb34),
        "temp_eb35", offsetof(MainView, temp_eb35),
        "temp_eb36", offsetof(MainView, temp_eb36),
        "temp_eb37", offsetof(MainView, temp_eb37),
        "temp_eb38", offsetof(MainView, temp_eb38),
        "temp_eb39", offsetof(MainView, temp_eb39),
        "temp_eb4", offsetof(MainView, temp_eb4),
        "temp_eb40", offsetof(MainView, temp_eb40),
        "temp_eb41", offsetof(MainView, temp_eb41),
        "temp_eb42", offsetof(MainView, temp_eb42),
        "temp_eb43", offsetof(MainView, temp_eb43),
        "temp_eb44", offsetof(MainView, temp_eb44),
        "temp_eb45", offsetof(MainView, temp_eb45),
        "temp_eb46", offsetof(MainView, temp_eb46),
        "temp_eb47", offsetof(MainView, temp_eb47),
        "temp_eb48", offsetof(MainView, temp_eb48),
        "temp_eb49", offsetof(MainView, temp_eb49),
        "temp_eb5", offsetof(MainView, temp_eb5),
        "temp_eb50", offsetof(MainView, temp_eb50),
        "temp_eb51", offsetof(MainView, temp_eb51),
        "temp_eb52", offsetof(MainView, temp_eb52),
        "temp_eb53", offsetof(MainView, temp_eb53),
        "temp_eb54", offsetof(MainView, temp_eb54),
        "temp_eb6", offsetof(MainView, temp_eb6),
        "temp_eb7", offsetof(MainView, temp_eb7),
        "temp_eb8", offsetof(MainView, temp_eb8),
        "temp_eb9", offsetof(MainView, temp_eb9),
        "temp_Value_inst", offsetof(MainView, temp_Value_inst),
        "temp1_Opacity_inst", offsetof(MainView, temp1_Opacity_inst),
        "temp10_Value_inst", offsetof(MainView, temp10_Value_inst),
        "temp11_Value_inst", offsetof(MainView, temp11_Value_inst),
        "temp12_Value_inst", offsetof(MainView, temp12_Value_inst),
        "temp13_Opacity_inst", offsetof(MainView, temp13_Opacity_inst),
        "temp14_Opacity_inst", offsetof(MainView, temp14_Opacity_inst),
        "temp15_Opacity_inst", offsetof(MainView, temp15_Opacity_inst),
        "temp16_Opacity_inst", offsetof(MainView, temp16_Opacity_inst),
        "temp17_Opacity_inst", offsetof(MainView, temp17_Opacity_inst),
        "temp18_Value_inst", offsetof(MainView, temp18_Value_inst),
        "temp19_Opacity_inst", offsetof(MainView, temp19_Opacity_inst),
        "temp2_Opacity_inst", offsetof(MainView, temp2_Opacity_inst),
        "temp20_Opacity_inst", offsetof(MainView, temp20_Opacity_inst),
        "temp21_Opacity_inst", offsetof(MainView, temp21_Opacity_inst),
        "temp22_Opacity_inst", offsetof(MainView, temp22_Opacity_inst),
        "temp23_Value_inst", offsetof(MainView, temp23_Value_inst),
        "temp24_Value_inst", offsetof(MainView, temp24_Value_inst),
        "temp25_Value_inst", offsetof(MainView, temp25_Value_inst),
        "temp3_Opacity_inst", offsetof(MainView, temp3_Opacity_inst),
        "temp4_Value_inst", offsetof(MainView, temp4_Value_inst),
        "temp5_Value_inst", offsetof(MainView, temp5_Value_inst),
        "temp6_Value_inst", offsetof(MainView, temp6_Value_inst),
        "temp7_Value_inst", offsetof(MainView, temp7_Value_inst),
        "temp8_Value_inst", offsetof(MainView, temp8_Value_inst),
        "temp9_Value_inst", offsetof(MainView, temp9_Value_inst));

    return type;
}

void MainView___InitTypes(::uStatic* __this)
{
    ::app::Uno::Diagnostics::Debug___TypeInit(NULL);
    ::app::Uno::Platform2::Application___TypeInit(NULL);
    ::app::Uno::Runtime::Implementation::Internal::Bootstrapper___TypeInit(NULL);
    ::app::Uno::Runtime::Implementation::Internal::NumericFormatter___TypeInit(NULL);
    ::app::Uno::Runtime::Implementation::PlatformWindowImpl___TypeInit(NULL);
    ::app::Uno::Time::Calendars::Era___TypeInit(NULL);
    ::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator___TypeInit(NULL);
    ::app::Uno::Time::DateTimeZone___TypeInit(NULL);
    ::app::Uno::Time::Duration___TypeInit(NULL);
    ::app::Uno::Time::LocalTime___TypeInit(NULL);
    ::app::Uno::Time::Offset___TypeInit(NULL);
    ::app::Uno::Time::Period___TypeInit(NULL);
    ::app::Uno::Time::Constants___TypeInit(NULL);
    ::app::Uno::Threading::POSIXThread___TypeInit(NULL);
    ::app::Uno::Net::Http::HttpMessageCache___TypeInit(NULL);
    ::app::Uno::Net::Http::HttpStatusReasonPhrase___TypeInit(NULL);
    ::app::Uno::Net::Http::UriScheme___TypeInit(NULL);
    ::app::Uno::Net::Http::HostInfoParser___TypeInit(NULL);
    ::app::Uno::Data::Json::Null___TypeInit(NULL);
    ::app::Uno::Data::Json::Boolean___TypeInit(NULL);
    ::app::Uno::CharPunctuationChecker___TypeInit(NULL);
    ::app::Uno::Color___TypeInit(NULL);
    ::app::Uno::EventArgs___TypeInit(NULL);
    ::app::Uno::String___TypeInit(NULL);
    ::app::Android::Base::Versions___TypeInit(NULL);
    ::app::Android::Runtime::NativeActivityHelper___TypeInit(NULL);
    ::app::Android::Bootstrapper___TypeInit(NULL);
    ::app::Experimental::Audio::Player___TypeInit(NULL);
    ::app::Experimental::Http::HttpLoader___TypeInit(NULL);
    ::app::Fuse::Input::Focus___TypeInit(NULL);
    ::app::Fuse::Input::Keyboard___TypeInit(NULL);
    ::app::Fuse::Input::Pointer___TypeInit(NULL);
    ::app::Fuse::Input::TextService___TypeInit(NULL);
    ::app::Fuse::Internal::Drawing::SolidRectangle___TypeInit(NULL);
    ::app::Fuse::Internal::BlenderMap___TypeInit(NULL);
    ::app::Fuse::Resources::DisposalManager___TypeInit(NULL);
    ::app::Fuse::Resources::MemoryPolicy___TypeInit(NULL);
    ::app::Fuse::Resources::ResourceRegistry___TypeInit(NULL);
    ::app::Fuse::Resources::FileImageSourceCache___TypeInit(NULL);
    ::app::Fuse::Resources::HttpImageSourceCache___TypeInit(NULL);
    ::app::Fuse::Scripting::Duktape::Context___TypeInit(NULL);
    ::app::Fuse::Scripting::NameRegistry___TypeInit(NULL);
    ::app::Fuse::Animations::ConverterFloat___TypeInit(NULL);
    ::app::Fuse::Animations::ConverterFloat2___TypeInit(NULL);
    ::app::Fuse::Animations::ConverterFloat3___TypeInit(NULL);
    ::app::Fuse::Animations::ConverterFloat4___TypeInit(NULL);
    ::app::Fuse::Animations::ConverterDouble___TypeInit(NULL);
    ::app::Fuse::Animations::DiscreteSingleTrack___TypeInit(NULL);
    ::app::Fuse::Animations::EasingTrack___TypeInit(NULL);
    ::app::Fuse::Animations::Mixer___TypeInit(NULL);
    ::app::Fuse::Animations::MasterTransform___TypeInit(NULL);
    ::app::Fuse::Drawing::Primitives::Circle___TypeInit(NULL);
    ::app::Fuse::Drawing::Primitives::Rectangle___TypeInit(NULL);
    ::app::Fuse::Drawing::Primitives::Wedge___TypeInit(NULL);
    ::app::Fuse::Drawing::BlendModeHelpers___TypeInit(NULL);
    ::app::Fuse::Drawing::Colors___TypeInit(NULL);
    ::app::Fuse::Drawing::Brushes___TypeInit(NULL);
    ::app::Fuse::Drawing::LinearGradient___TypeInit(NULL);
    ::app::Fuse::Drawing::LinearGradientDrawable___TypeInit(NULL);
    ::app::Fuse::Triggers::Actions::GiveFocus___TypeInit(NULL);
    ::app::Fuse::Triggers::WhileKeyboardVisible___TypeInit(NULL);
    ::app::Fuse::Triggers::WhileFailed___TypeInit(NULL);
    ::app::Fuse::Triggers::WhileLoading___TypeInit(NULL);
    ::app::Fuse::Triggers::LayoutAnimation___TypeInit(NULL);
    ::app::Fuse::Elements::Internal::ElementDraw___TypeInit(NULL);
    ::app::Fuse::Elements::Internal::Scale9Rectangle___TypeInit(NULL);
    ::app::Fuse::Elements::StandardBoxSizing___TypeInit(NULL);
    ::app::Fuse::Elements::NoImplicitMaxBoxSizing___TypeInit_1(NULL);
    ::app::Fuse::Elements::Element___TypeInit_1(NULL);
    ::app::Fuse::Elements::TransformOrigins___TypeInit(NULL);
    ::app::Fuse::Elements::LimitBoxSizing___TypeInit(NULL);
    ::app::Fuse::Elements::ShadowBoxSizing___TypeInit(NULL);
    ::app::Fuse::Elements::Cache___TypeInit(NULL);
    ::app::Fuse::Entities::Designer::PreloadedResources___TypeInit(NULL);
    ::app::Fuse::Gestures::Internal::EdgeSwiper___TypeInit(NULL);
    ::app::Fuse::Gestures::Clicker___TypeInit(NULL);
    ::app::Fuse::Gestures::Scroller___TypeInit(NULL);
    ::app::Fuse::Navigation::DirectNavigation___TypeInit_1(NULL);
    ::app::Fuse::Navigation::EdgeNavigation___TypeInit_1(NULL);
    ::app::Fuse::Navigation::Navigation___TypeInit(NULL);
    ::app::Fuse::Navigation::NavigationPageProperty___TypeInit(NULL);
    ::app::Fuse::Navigation::SwipeNavigate___TypeInit(NULL);
    ::app::Fuse::Shapes::Rectangle___TypeInit_3(NULL);
    ::app::Fuse::Shapes::Shape___TypeInit_2(NULL);
    ::app::Fuse::Controls::Graphics::DefaultTextVisual___TypeInit_1(NULL);
    ::app::Fuse::Controls::Graphics::ImageElementDraw___TypeInit(NULL);
    ::app::Fuse::Controls::Graphics::LinearSliderBehavior___TypeInit(NULL);
    ::app::Fuse::Controls::Graphics::GraphicsStyle___TypeInit(NULL);
    ::app::Fuse::Controls::TextEdit::TextEditVisual___TypeInit_1(NULL);
    ::app::Fuse::Controls::TextEdit::TextPosition___TypeInit(NULL);
    ::app::Fuse::Controls::Button___TypeInit_4(NULL);
    ::app::Fuse::Controls::Control___TypeInit_2(NULL);
    ::app::Fuse::Controls::GraphicsView___TypeInit_3(NULL);
    ::app::Fuse::Controls::Grid___TypeInit_4(NULL);
    ::app::Fuse::Controls::Image___TypeInit_4(NULL);
    ::app::Fuse::Controls::Number___TypeInit_4(NULL);
    ::app::Fuse::Controls::PageIndicator___TypeInit_5(NULL);
    ::app::Fuse::Controls::Panel___TypeInit_3(NULL);
    ::app::Fuse::Controls::PlainTextEdit___TypeInit_4(NULL);
    ::app::Fuse::Controls::RangeControl___TypeInit_4(NULL);
    ::app::Fuse::Controls::Rectangle___TypeInit_5(NULL);
    ::app::Fuse::Controls::ScrollView___TypeInit_3(NULL);
    ::app::Fuse::Controls::Shape___TypeInit_4(NULL);
    ::app::Fuse::Controls::StackPanel___TypeInit_4(NULL);
    ::app::Fuse::Controls::TextControl___TypeInit_4(NULL);
    ::app::Fuse::Controls::TextInput___TypeInit_5(NULL);
    ::app::Fuse::Controls::ToggleControl___TypeInit_4(NULL);
    ::app::Fuse::Layouts::DockLayout___TypeInit_1(NULL);
    ::app::Fuse::Layouts::GridLayout___TypeInit_1(NULL);
    ::app::Fuse::Layouts::Layout___TypeInit(NULL);
    ::app::Fuse::Layouts::Layouts___TypeInit(NULL);
    ::app::Fuse::Reactive::FuseJS::InterApp___TypeInit(NULL);
    ::app::Fuse::Reactive::JavaScript___TypeInit(NULL);
    ::app::Fuse::Reactive::ScriptEvents___TypeInit(NULL);
    ::app::Fuse::Reactive::ThreadWorker___TypeInit(NULL);
    ::app::Fuse::Physics::Body___TypeInit(NULL);
    ::app::Fuse::Physics::World___TypeInit(NULL);
    ::app::Fuse::BasicTheme::BasicStyle___TypeInit(NULL);
    ::app::Fuse::iOS::Button___TypeInit_1(NULL);
    ::app::Fuse::iOS::StatusBarConfig___TypeInit(NULL);
    ::app::Fuse::iOS::Blitter___TypeInit(NULL);
    ::app::Fuse::Android::Button___TypeInit_1(NULL);
    ::app::Fuse::Android::FocusManager___TypeInit(NULL);
    ::app::Fuse::Android::BitmapFactory___TypeInit(NULL);
    ::app::Fuse::Android::InputDispatch___TypeInit(NULL);
    ::app::Fuse::Android::NativeView___TypeInit(NULL);
    ::app::Fuse::Android::Blitter___TypeInit(NULL);
    ::app::Fuse::Android::TypefaceCache___TypeInit(NULL);
    ::app::Fuse::DrawContext___TypeInit(NULL);
    ::app::Fuse::Font___TypeInit(NULL);
    ::app::Fuse::RootViewport___TypeInit_1(NULL);
    ::app::Fuse::Node___TypeInit(NULL);
    ::app::Fuse::NodeBounds___TypeInit(NULL);
    ::app::Fuse::Properties___TypeInit(NULL);
    ::app::Fuse::TranslationModes___TypeInit(NULL);
    ::app::Fuse::UpdateManager___TypeInit(NULL);
    MainView___TypeInit(NULL);
}

void MainView___ObjInit_3(MainView* __this)
{
    MainView___InitTypes(NULL);
    ::app::Fuse::App___ObjInit_2(__this);
    __this->InitializeUX();
    __this->AddPlayer(::uGetConstString("bg"));
    __this->AddPlayer(::uGetConstString("voice"));
    __this->AddPlayer(::uGetConstString("effect"));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a001.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 1), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a002.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 2), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a003.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 3), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a004.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 4), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a005.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 5), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a006.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 6), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a007.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 7), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a008.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 8), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a009.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 9), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a010.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 10), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a011.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 11), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a012.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 12), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a013.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 13), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a014.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 14), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a015.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 15), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a016.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 16), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a017.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 17), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a018.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 18), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a019.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 19), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a020.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 20), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a021.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 21), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a022.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 22), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a023.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 23), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a024.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 24), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a025.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 25), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a026.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 26), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a027.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 27), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a028.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 28), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a029.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 29), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a030.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 30), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a031.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 31), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a032.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 32), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a033.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 33), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a034.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 34), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a035.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 35), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a036.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 36), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a037.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 37), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a038.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 38), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a039.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 39), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a040.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 40), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a041.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 41), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a042.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 42), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a043.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 43), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a044.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 44), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a045.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 45), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a046.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 46), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a047.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 47), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a048.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 48), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a049.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 49), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a050.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 50), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a051.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 51), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a052.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 52), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a053.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 53), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a054.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 54), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a055.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 55), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a056.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 56), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a057.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 57), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a058.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 58), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a059.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 59), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a060.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 60), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a061.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 61), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a062.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 62), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a063.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 63), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a064.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 64), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a065.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 65), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a066.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 66), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a067.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 67), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a068.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 68), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a069.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 69), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a070.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 70), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a071.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 71), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a072.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 72), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a073.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 73), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a074.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 74), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a075.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 75), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a076.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 76), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a077.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 77), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a078.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 78), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a079.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 79), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a080.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 80), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a081.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 81), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a082.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 82), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a083.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 83), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a084.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 84), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a085.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 85), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a086.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 86), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a087.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 87), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a088.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 88), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a089.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 89), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a090.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 90), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a091.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 91), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a092.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 92), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a093.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 93), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a094.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 94), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a095.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 95), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a096.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 96), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a097.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 97), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a098.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 98), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a099.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 99), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a100.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 100), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a101.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 101), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a102.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 102), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a103.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 103), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a104.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 104), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a105.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 105), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a106.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 106), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a107.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 107), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/a108.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 108), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/appInfo.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 109), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b001.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 110), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b002.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 111), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b003.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 112), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b004.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 113), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b005.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 114), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b006.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 115), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b007.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 116), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b008.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 117), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b009.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 118), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b010.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 119), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b011.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 120), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b012.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 121), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b013.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 122), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b014.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 123), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b015.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 124), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b016.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 125), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b017.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 126), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b018.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 127), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b019.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 128), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b020.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 129), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b021.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 130), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b022.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 131), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b023.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 132), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b024.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 133), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b025.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 134), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b026.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 135), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b027.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 136), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b028.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 137), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b029.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 138), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b030.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 139), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b031.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 140), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b032.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 141), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b033.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 142), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b034.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 143), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b035.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 144), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b036.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 145), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b037.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 146), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b038.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 147), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b039.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 148), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b040.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 149), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b041.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 150), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b042.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 151), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b043.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 152), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b044.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 153), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b045.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 154), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b046.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 155), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b047.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 156), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b048.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 157), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b049.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 158), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b050.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 159), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b051.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 160), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b052.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 161), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b053.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 162), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b054.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 163), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b055.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 164), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b056.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 165), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b057.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 166), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b058.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 167), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b059.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 168), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b060.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 169), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b061.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 170), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b062.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 171), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b063.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 172), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b064.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 173), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b065.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 174), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b066.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 175), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b067.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 176), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b068.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 177), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b069.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 178), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b070.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 179), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b071.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 180), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b072.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 181), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b073.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 182), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b074.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 183), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b075.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 184), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b076.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 185), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b077.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 186), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b078.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 187), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b079.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 188), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b080.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 189), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b081.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 190), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b082.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 191), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b083.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 192), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b084.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 193), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b085.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 194), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b086.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 195), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b087.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 196), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b088.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 197), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b089.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 198), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b090.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 199), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b091.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 200), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b092.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 201), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b093.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 202), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b094.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 203), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b095.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 204), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b096.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 205), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b097.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 206), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b098.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 207), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b099.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 208), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b100.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 209), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b101.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 210), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b102.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 211), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b103.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 212), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b104.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 213), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b105.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 214), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b106.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 215), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b107.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 216), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/b108.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 217), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/birdBgm.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 218), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/bugBgm.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 219), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g001.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 220), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g002.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 221), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g003.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 222), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g004.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 223), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g005.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 224), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g006.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 225), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g007.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 226), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g008.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 227), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g009.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 228), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g010.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 229), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g011.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 230), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g012.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 231), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g013.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 232), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g014.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 233), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g015.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 234), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g016.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 235), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g017.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 236), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g018.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 237), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g019.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 238), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g020.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 239), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g021.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 240), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g022.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 241), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g023.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 242), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g024.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 243), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g025.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 244), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g026.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 245), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g027.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 246), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g028.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 247), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g029.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 248), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g030.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 249), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g031.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 250), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g032.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 251), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g033.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 252), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g034.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 253), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g035.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 254), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g036.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 255), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g037.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 256), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g038.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 257), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g039.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 258), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g040.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 259), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g041.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 260), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g042.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 261), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g043.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 262), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g044.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 263), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g045.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 264), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g046.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 265), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g047.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 266), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g048.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 267), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g049.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 268), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g050.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 269), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g051.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 270), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g052.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 271), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g053.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 272), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g054.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 273), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g055.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 274), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g056.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 275), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g057.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 276), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g058.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 277), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g059.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 278), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g060.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 279), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g061.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 280), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g062.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 281), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g063.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 282), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g064.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 283), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g065.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 284), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g066.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 285), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g067.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 286), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g068.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 287), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g069.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 288), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g070.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 289), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g071.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 290), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g072.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 291), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g073.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 292), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g074.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 293), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g075.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 294), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g076.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 295), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g077.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 296), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g078.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 297), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g079.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 298), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g080.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 299), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g081.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 300), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g082.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 301), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g083.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 302), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g084.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 303), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g085.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 304), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g086.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 305), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g087.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 306), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g088.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 307), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g089.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 308), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g090.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 309), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g091.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 310), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g092.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 311), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g093.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 312), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g094.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 313), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g095.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 314), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g096.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 315), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g097.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 316), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g098.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 317), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g099.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 318), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g100.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 319), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g101.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 320), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g102.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 321), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g103.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 322), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g104.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 323), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g105.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 324), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g106.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 325), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g107.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 326), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/g108.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 327), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/how1.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 328), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/how2.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 329), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/how3.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 330), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/how4.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 331), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/how5.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 332), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/how6.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 333), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/how7.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 334), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/how8.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 335), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/waterBgm.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 336), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/bell.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 337), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/bell0.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 338), ::app::Uno::BundleFile__typeof()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Add(::uGetConstString("res/snd/click.mp3"), ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 339), ::app::Uno::BundleFile__typeof()));
    ::app::Uno::Platform2::Application__add_EnteringBackground(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)MainView__OnEnteringBackground_1, __this));
    ::app::Uno::Platform2::Application__add_EnteringForeground(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)MainView__OnEnteringForeground, __this));
}

void MainView___TypeInit(::uStatic* __this)
{
    MainView__bundleDict = ::app::Uno::Collections::Dictionary__string__Uno_BundleFile__New_1(NULL);
    MainView__playerDict = ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Player__New_1(NULL);
    MainView__soundDict = ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Sound__New_1(NULL);
    MainView__channelDict = ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel__New_1(NULL);
    MainView__volumeDict = ::app::Uno::Collections::Dictionary__string__float__New_1(NULL);
    MainView__isPlayDict = ::app::Uno::Collections::Dictionary__string__bool__New_1(NULL);
    MainView__AudioModule = ::app::AudioModule__New_2(NULL);
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)MainView__AudioModule, ::uGetConstString("AudioModule"));
}

void MainView__AddPlayer(MainView* __this, ::uString* key)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Player*>(MainView__playerDict)->Add(key, ::app::Experimental::Audio::Player__New_1(NULL));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__float*>(MainView__volumeDict)->Add(key, 1.0f);
}

void MainView__AllChannelStatus(MainView* __this, bool isPause)
{
    for (::app::Uno::Collections::Dictionary2_Enumerator__string__Experimental_Audio_Channel enum_123 = ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel*>(MainView__channelDict)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__string__Experimental_Audio_Channel kv = enum_123.Current();

        if (isPause)
        {
            ::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(MainView__isPlayDict)->Item(kv.Key(), ::uPtr< ::app::Experimental::Audio::Channel*>(kv.Value())->IsPlaying());

            if (::uPtr< ::app::Experimental::Audio::Channel*>(kv.Value())->IsPlaying())
            {
                ::uPtr< ::app::Experimental::Audio::Channel*>(kv.Value())->Pause();
            }

            ::uPtr< ::app::Experimental::Audio::Channel*>(kv.Value())->Volume(0.0f);
        }
        else
        {
            if (::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(MainView__isPlayDict)->Item(kv.Key()))
            {
                ::uPtr< ::app::Experimental::Audio::Channel*>(kv.Value())->Play();
            }

            ::uPtr< ::app::Experimental::Audio::Channel*>(kv.Value())->Volume(::uPtr< ::app::Uno::Collections::Dictionary__string__float*>(MainView__volumeDict)->Item(kv.Key()));
        }
    }
}

void MainView__changeVolumne(::uStatic* __this, ::uString* key, float volume)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__string__float*>(MainView__volumeDict)->Item(key, volume);
    ::app::Experimental::Audio::Channel* channel = MainView__getChannel(NULL, key);

    if (channel != NULL)
    {
        ::uPtr< ::app::Experimental::Audio::Channel*>(channel)->Volume(::uPtr< ::app::Uno::Collections::Dictionary__string__float*>(MainView__volumeDict)->Item(key));
    }
}

void MainView__disposePlayer(::uStatic* __this, ::uString* key)
{
    ::app::Experimental::Audio::Channel* channel;

    if (::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel*>(MainView__channelDict)->TryGetValue(key, &channel))
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel*>(MainView__channelDict)->Remove(key);
        ::uPtr< ::app::Experimental::Audio::Channel*>(channel)->Dispose();
    }
}

::app::Experimental::Audio::Channel* MainView__getChannel(::uStatic* __this, ::uString* key)
{
    ::app::Experimental::Audio::Channel* channel;

    if (::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel*>(MainView__channelDict)->TryGetValue(key, &channel))
    {
        return channel;
    }

    return NULL;
}

void MainView__InitializeUX(MainView* __this)
{
    ::app::MainView_Template* collection_124;
    ::app::MainView_Template1* collection_125;
    ::app::Fuse::Resources::FileImageSource* temp26 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp27 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp28 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp29 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp30 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp31 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp32 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp33 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp34 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp35 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp36 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp37 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp38 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp39 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp40 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp41 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp42 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp43 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp44 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp45 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp46 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp47 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp48 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp49 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp50 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp51 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp52 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp53 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp54 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp55 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp56 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp57 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp58 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp59 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp60 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp61 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp62 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp63 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp64 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp65 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp66 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp67 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp68 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp69 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp70 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp71 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp72 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp73 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp74 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp75 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp76 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp77 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp78 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp79 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp80 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp81 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp82 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp83 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp84 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp85 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp86 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp87 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp88 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp89 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp90 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp91 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp92 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp93 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp94 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp95 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp96 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp97 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp98 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp99 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp100 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp101 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp102 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp103 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp104 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp105 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp106 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp107 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp108 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp109 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp110 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp111 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp112 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp113 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp114 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp115 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp116 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp117 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp118 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp119 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp120 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp121 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp122 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp123 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp124 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp125 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp126 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp127 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp128 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp129 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp130 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp131 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp132 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp133 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp134 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp135 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp136 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp137 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp138 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp139 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp140 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp141 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp142 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp143 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp144 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp145 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp146 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp147 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp148 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp149 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp150 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp151 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp152 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp153 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp154 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp155 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp156 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp157 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp158 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp159 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp160 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp161 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp162 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp163 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp164 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp165 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp166 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp167 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp168 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp169 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp170 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp171 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp172 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp173 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp174 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp175 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp176 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp177 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp178 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp179 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp180 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp181 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp182 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp183 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp184 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp185 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp186 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp187 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp188 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp189 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp190 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp191 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp192 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    ::app::Fuse::Resources::FileImageSource* temp193 = ::app::Fuse::Resources::FileImageSource__New_2(NULL);
    __this->helpBtn1 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->helpBtn1_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)__this->helpBtn1);
    __this->helpBtn2 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->helpBtn2_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)__this->helpBtn2);
    __this->helpBtn3 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->helpBtn3_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)__this->helpBtn3);
    __this->animIMG = ::app::Fuse::Controls::Image__New_2(NULL);
    __this->animIMG_Source_inst = ::app::MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__New_1(NULL, __this->animIMG);
    ::app::Fuse::Triggers::WhileTrue* temp = ::app::Fuse::Triggers::WhileTrue__New_1(NULL);
    __this->temp_Value_inst = ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property__New_1(NULL, (::app::Fuse::Triggers::WhileBool*)temp);
    ::app::Fuse::Controls::Panel* temp1 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->temp1_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)temp1);
    ::app::Fuse::Controls::Panel* temp2 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->temp2_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)temp2);
    ::app::Fuse::Controls::Panel* temp3 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->temp3_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)temp3);
    __this->animDesc0 = ::app::Fuse::Controls::Text__New_2(NULL);
    __this->animDesc0_Visibility_inst = ::app::MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__New_1(NULL, (::app::Fuse::Elements::Element*)__this->animDesc0);
    __this->animDesc1 = ::app::Fuse::Controls::Text__New_2(NULL);
    __this->animDesc1_Visibility_inst = ::app::MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__New_1(NULL, (::app::Fuse::Elements::Element*)__this->animDesc1);
    __this->animDesc2 = ::app::Fuse::Controls::Text__New_2(NULL);
    __this->animDesc2_Visibility_inst = ::app::MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__New_1(NULL, (::app::Fuse::Elements::Element*)__this->animDesc2);
    __this->animDesc3 = ::app::Fuse::Controls::Text__New_2(NULL);
    __this->animDesc3_Visibility_inst = ::app::MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__New_1(NULL, (::app::Fuse::Elements::Element*)__this->animDesc3);
    __this->animDesc4 = ::app::Fuse::Controls::Text__New_2(NULL);
    __this->animDesc4_Visibility_inst = ::app::MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__New_1(NULL, (::app::Fuse::Elements::Element*)__this->animDesc4);
    __this->animDesc5 = ::app::Fuse::Controls::Text__New_2(NULL);
    __this->animDesc5_Visibility_inst = ::app::MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__New_1(NULL, (::app::Fuse::Elements::Element*)__this->animDesc5);
    __this->animDesc6 = ::app::Fuse::Controls::Text__New_2(NULL);
    __this->animDesc6_Visibility_inst = ::app::MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__New_1(NULL, (::app::Fuse::Elements::Element*)__this->animDesc6);
    __this->animDesc7 = ::app::Fuse::Controls::Text__New_2(NULL);
    __this->animDesc7_Visibility_inst = ::app::MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__New_1(NULL, (::app::Fuse::Elements::Element*)__this->animDesc7);
    ::app::Fuse::Triggers::WhileTrue* temp4 = ::app::Fuse::Triggers::WhileTrue__New_1(NULL);
    __this->temp4_Value_inst = ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property__New_1(NULL, (::app::Fuse::Triggers::WhileBool*)temp4);
    ::app::Fuse::Triggers::WhileTrue* temp5 = ::app::Fuse::Triggers::WhileTrue__New_1(NULL);
    __this->temp5_Value_inst = ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property__New_1(NULL, (::app::Fuse::Triggers::WhileBool*)temp5);
    ::app::Fuse::Triggers::WhileTrue* temp6 = ::app::Fuse::Triggers::WhileTrue__New_1(NULL);
    __this->temp6_Value_inst = ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property__New_1(NULL, (::app::Fuse::Triggers::WhileBool*)temp6);
    ::app::Fuse::Triggers::WhileTrue* temp7 = ::app::Fuse::Triggers::WhileTrue__New_1(NULL);
    __this->temp7_Value_inst = ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property__New_1(NULL, (::app::Fuse::Triggers::WhileBool*)temp7);
    ::app::Fuse::Triggers::WhileTrue* temp8 = ::app::Fuse::Triggers::WhileTrue__New_1(NULL);
    __this->temp8_Value_inst = ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property__New_1(NULL, (::app::Fuse::Triggers::WhileBool*)temp8);
    ::app::Fuse::Triggers::WhileTrue* temp9 = ::app::Fuse::Triggers::WhileTrue__New_1(NULL);
    __this->temp9_Value_inst = ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property__New_1(NULL, (::app::Fuse::Triggers::WhileBool*)temp9);
    ::app::Fuse::Triggers::WhileTrue* temp10 = ::app::Fuse::Triggers::WhileTrue__New_1(NULL);
    __this->temp10_Value_inst = ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property__New_1(NULL, (::app::Fuse::Triggers::WhileBool*)temp10);
    ::app::Fuse::Triggers::WhileTrue* temp11 = ::app::Fuse::Triggers::WhileTrue__New_1(NULL);
    __this->temp11_Value_inst = ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property__New_1(NULL, (::app::Fuse::Triggers::WhileBool*)temp11);
    ::app::Fuse::Controls::Text* temp12 = ::app::Fuse::Controls::Text__New_2(NULL);
    __this->temp12_Value_inst = ::app::MainView_Fuse_Controls_TextControl_string_Value_Property__New_1(NULL, (::app::Fuse::Controls::TextControl*)temp12);
    ::app::Fuse::Controls::Panel* temp13 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->temp13_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)temp13);
    ::app::Fuse::Controls::Panel* temp14 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->temp14_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)temp14);
    ::app::Fuse::Controls::Panel* temp15 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->temp15_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)temp15);
    ::app::Fuse::Controls::Panel* temp16 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->temp16_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)temp16);
    ::app::Fuse::Controls::Panel* temp17 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->temp17_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)temp17);
    ::app::Fuse::Controls::Text* temp18 = ::app::Fuse::Controls::Text__New_2(NULL);
    __this->temp18_Value_inst = ::app::MainView_Fuse_Controls_TextControl_string_Value_Property__New_1(NULL, (::app::Fuse::Controls::TextControl*)temp18);
    ::app::Fuse::Controls::Panel* temp19 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->temp19_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)temp19);
    ::app::Fuse::Controls::Panel* temp20 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->temp20_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)temp20);
    ::app::Fuse::Controls::Panel* temp21 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->temp21_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)temp21);
    ::app::Fuse::Controls::Panel* temp22 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->temp22_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)temp22);
    ::app::Fuse::Controls::Text* temp23 = ::app::Fuse::Controls::Text__New_2(NULL);
    __this->temp23_Value_inst = ::app::MainView_Fuse_Controls_TextControl_string_Value_Property__New_1(NULL, (::app::Fuse::Controls::TextControl*)temp23);
    __this->playForegroundImage = ::app::Fuse::Controls::Image__New_2(NULL);
    __this->playForegroundImage_Source_inst = ::app::MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__New_1(NULL, __this->playForegroundImage);
    __this->playForegroundText = ::app::Fuse::Controls::Text__New_2(NULL);
    __this->playForegroundText_Value_inst = ::app::MainView_Fuse_Controls_TextControl_string_Value_Property__New_1(NULL, (::app::Fuse::Controls::TextControl*)__this->playForegroundText);
    __this->playForegroundTitle = ::app::Fuse::Controls::Text__New_2(NULL);
    __this->playForegroundTitle_Value_inst = ::app::MainView_Fuse_Controls_TextControl_string_Value_Property__New_1(NULL, (::app::Fuse::Controls::TextControl*)__this->playForegroundTitle);
    __this->playBackgroundImage = ::app::Fuse::Controls::Image__New_2(NULL);
    __this->playBackgroundImage_Source_inst = ::app::MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__New_1(NULL, __this->playBackgroundImage);
    __this->playBackgroundText = ::app::Fuse::Controls::Text__New_2(NULL);
    __this->playBackgroundText_Value_inst = ::app::MainView_Fuse_Controls_TextControl_string_Value_Property__New_1(NULL, (::app::Fuse::Controls::TextControl*)__this->playBackgroundText);
    __this->playBackgroundTitle = ::app::Fuse::Controls::Text__New_2(NULL);
    __this->playBackgroundTitle_Value_inst = ::app::MainView_Fuse_Controls_TextControl_string_Value_Property__New_1(NULL, (::app::Fuse::Controls::TextControl*)__this->playBackgroundTitle);
    __this->playForegroundTitle_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)__this->playForegroundTitle);
    __this->playForegroundImage_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)__this->playForegroundImage);
    __this->playForegroundTextP = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->playForegroundTextP_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)__this->playForegroundTextP);
    __this->playBackgroundTextP = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->playBackgroundTextP_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)__this->playBackgroundTextP);
    ::app::Fuse::Triggers::WhileTrue* temp24 = ::app::Fuse::Triggers::WhileTrue__New_1(NULL);
    __this->temp24_Value_inst = ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property__New_1(NULL, (::app::Fuse::Triggers::WhileBool*)temp24);
    ::app::Fuse::Triggers::WhileTrue* temp25 = ::app::Fuse::Triggers::WhileTrue__New_1(NULL);
    __this->temp25_Value_inst = ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property__New_1(NULL, (::app::Fuse::Triggers::WhileBool*)temp25);
    ::app::Fuse::iOS::StatusBarConfig* temp194 = ::app::Fuse::iOS::StatusBarConfig__New_1(NULL);
    ::app::Fuse::Reactive::JavaScript* temp195 = ::app::Fuse::Reactive::JavaScript__New_1(NULL);
    ::app::Uno::UX::Resource* temp196 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid0"), (::uObject*)temp26);
    ::app::Uno::UX::Resource* temp197 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid1"), (::uObject*)temp27);
    ::app::Uno::UX::Resource* temp198 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid2"), (::uObject*)temp28);
    ::app::Uno::UX::Resource* temp199 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid3"), (::uObject*)temp29);
    ::app::Uno::UX::Resource* temp200 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid4"), (::uObject*)temp30);
    ::app::Uno::UX::Resource* temp201 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid5"), (::uObject*)temp31);
    ::app::Uno::UX::Resource* temp202 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid6"), (::uObject*)temp32);
    ::app::Uno::UX::Resource* temp203 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid7"), (::uObject*)temp33);
    ::app::Uno::UX::Resource* temp204 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid8"), (::uObject*)temp34);
    ::app::Uno::UX::Resource* temp205 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid9"), (::uObject*)temp35);
    ::app::Uno::UX::Resource* temp206 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid10"), (::uObject*)temp36);
    ::app::Uno::UX::Resource* temp207 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid11"), (::uObject*)temp37);
    ::app::Uno::UX::Resource* temp208 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid12"), (::uObject*)temp38);
    ::app::Uno::UX::Resource* temp209 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid13"), (::uObject*)temp39);
    ::app::Uno::UX::Resource* temp210 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid14"), (::uObject*)temp40);
    ::app::Uno::UX::Resource* temp211 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid15"), (::uObject*)temp41);
    ::app::Uno::UX::Resource* temp212 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid16"), (::uObject*)temp42);
    ::app::Uno::UX::Resource* temp213 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid17"), (::uObject*)temp43);
    ::app::Uno::UX::Resource* temp214 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid18"), (::uObject*)temp44);
    ::app::Uno::UX::Resource* temp215 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid19"), (::uObject*)temp45);
    ::app::Uno::UX::Resource* temp216 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid20"), (::uObject*)temp46);
    ::app::Uno::UX::Resource* temp217 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid21"), (::uObject*)temp47);
    ::app::Uno::UX::Resource* temp218 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid22"), (::uObject*)temp48);
    ::app::Uno::UX::Resource* temp219 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid23"), (::uObject*)temp49);
    ::app::Uno::UX::Resource* temp220 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid24"), (::uObject*)temp50);
    ::app::Uno::UX::Resource* temp221 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid25"), (::uObject*)temp51);
    ::app::Uno::UX::Resource* temp222 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid26"), (::uObject*)temp52);
    ::app::Uno::UX::Resource* temp223 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid27"), (::uObject*)temp53);
    ::app::Uno::UX::Resource* temp224 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid28"), (::uObject*)temp54);
    ::app::Uno::UX::Resource* temp225 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid29"), (::uObject*)temp55);
    ::app::Uno::UX::Resource* temp226 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid30"), (::uObject*)temp56);
    ::app::Uno::UX::Resource* temp227 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid31"), (::uObject*)temp57);
    ::app::Uno::UX::Resource* temp228 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid32"), (::uObject*)temp58);
    ::app::Uno::UX::Resource* temp229 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid33"), (::uObject*)temp59);
    ::app::Uno::UX::Resource* temp230 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid34"), (::uObject*)temp60);
    ::app::Uno::UX::Resource* temp231 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid35"), (::uObject*)temp61);
    ::app::Uno::UX::Resource* temp232 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid36"), (::uObject*)temp62);
    ::app::Uno::UX::Resource* temp233 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid37"), (::uObject*)temp63);
    ::app::Uno::UX::Resource* temp234 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid38"), (::uObject*)temp64);
    ::app::Uno::UX::Resource* temp235 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid39"), (::uObject*)temp65);
    ::app::Uno::UX::Resource* temp236 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid40"), (::uObject*)temp66);
    ::app::Uno::UX::Resource* temp237 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid41"), (::uObject*)temp67);
    ::app::Uno::UX::Resource* temp238 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid42"), (::uObject*)temp68);
    ::app::Uno::UX::Resource* temp239 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid43"), (::uObject*)temp69);
    ::app::Uno::UX::Resource* temp240 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid44"), (::uObject*)temp70);
    ::app::Uno::UX::Resource* temp241 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid45"), (::uObject*)temp71);
    ::app::Uno::UX::Resource* temp242 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid46"), (::uObject*)temp72);
    ::app::Uno::UX::Resource* temp243 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid47"), (::uObject*)temp73);
    ::app::Uno::UX::Resource* temp244 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid48"), (::uObject*)temp74);
    ::app::Uno::UX::Resource* temp245 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid49"), (::uObject*)temp75);
    ::app::Uno::UX::Resource* temp246 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid50"), (::uObject*)temp76);
    ::app::Uno::UX::Resource* temp247 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid51"), (::uObject*)temp77);
    ::app::Uno::UX::Resource* temp248 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid52"), (::uObject*)temp78);
    ::app::Uno::UX::Resource* temp249 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid53"), (::uObject*)temp79);
    ::app::Uno::UX::Resource* temp250 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid54"), (::uObject*)temp80);
    ::app::Uno::UX::Resource* temp251 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid55"), (::uObject*)temp81);
    ::app::Uno::UX::Resource* temp252 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid56"), (::uObject*)temp82);
    ::app::Uno::UX::Resource* temp253 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid57"), (::uObject*)temp83);
    ::app::Uno::UX::Resource* temp254 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid58"), (::uObject*)temp84);
    ::app::Uno::UX::Resource* temp255 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("kid59"), (::uObject*)temp85);
    ::app::Uno::UX::Resource* temp256 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h0"), (::uObject*)temp86);
    ::app::Uno::UX::Resource* temp257 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h1"), (::uObject*)temp87);
    ::app::Uno::UX::Resource* temp258 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h2"), (::uObject*)temp88);
    ::app::Uno::UX::Resource* temp259 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h3"), (::uObject*)temp89);
    ::app::Uno::UX::Resource* temp260 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h4"), (::uObject*)temp90);
    ::app::Uno::UX::Resource* temp261 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h5"), (::uObject*)temp91);
    ::app::Uno::UX::Resource* temp262 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h6"), (::uObject*)temp92);
    ::app::Uno::UX::Resource* temp263 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h7"), (::uObject*)temp93);
    ::app::Uno::UX::Resource* temp264 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h8"), (::uObject*)temp94);
    ::app::Uno::UX::Resource* temp265 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h9"), (::uObject*)temp95);
    ::app::Uno::UX::Resource* temp266 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h10"), (::uObject*)temp96);
    ::app::Uno::UX::Resource* temp267 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h11"), (::uObject*)temp97);
    ::app::Uno::UX::Resource* temp268 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h12"), (::uObject*)temp98);
    ::app::Uno::UX::Resource* temp269 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h13"), (::uObject*)temp99);
    ::app::Uno::UX::Resource* temp270 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h14"), (::uObject*)temp100);
    ::app::Uno::UX::Resource* temp271 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h15"), (::uObject*)temp101);
    ::app::Uno::UX::Resource* temp272 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h16"), (::uObject*)temp102);
    ::app::Uno::UX::Resource* temp273 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h17"), (::uObject*)temp103);
    ::app::Uno::UX::Resource* temp274 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h18"), (::uObject*)temp104);
    ::app::Uno::UX::Resource* temp275 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h19"), (::uObject*)temp105);
    ::app::Uno::UX::Resource* temp276 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h20"), (::uObject*)temp106);
    ::app::Uno::UX::Resource* temp277 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h21"), (::uObject*)temp107);
    ::app::Uno::UX::Resource* temp278 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h22"), (::uObject*)temp108);
    ::app::Uno::UX::Resource* temp279 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h23"), (::uObject*)temp109);
    ::app::Uno::UX::Resource* temp280 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h24"), (::uObject*)temp110);
    ::app::Uno::UX::Resource* temp281 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h25"), (::uObject*)temp111);
    ::app::Uno::UX::Resource* temp282 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h26"), (::uObject*)temp112);
    ::app::Uno::UX::Resource* temp283 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h27"), (::uObject*)temp113);
    ::app::Uno::UX::Resource* temp284 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h28"), (::uObject*)temp114);
    ::app::Uno::UX::Resource* temp285 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h29"), (::uObject*)temp115);
    ::app::Uno::UX::Resource* temp286 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h30"), (::uObject*)temp116);
    ::app::Uno::UX::Resource* temp287 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h31"), (::uObject*)temp117);
    ::app::Uno::UX::Resource* temp288 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h32"), (::uObject*)temp118);
    ::app::Uno::UX::Resource* temp289 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h33"), (::uObject*)temp119);
    ::app::Uno::UX::Resource* temp290 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h34"), (::uObject*)temp120);
    ::app::Uno::UX::Resource* temp291 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h35"), (::uObject*)temp121);
    ::app::Uno::UX::Resource* temp292 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h36"), (::uObject*)temp122);
    ::app::Uno::UX::Resource* temp293 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h37"), (::uObject*)temp123);
    ::app::Uno::UX::Resource* temp294 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h38"), (::uObject*)temp124);
    ::app::Uno::UX::Resource* temp295 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h39"), (::uObject*)temp125);
    ::app::Uno::UX::Resource* temp296 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h40"), (::uObject*)temp126);
    ::app::Uno::UX::Resource* temp297 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h41"), (::uObject*)temp127);
    ::app::Uno::UX::Resource* temp298 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h42"), (::uObject*)temp128);
    ::app::Uno::UX::Resource* temp299 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h43"), (::uObject*)temp129);
    ::app::Uno::UX::Resource* temp300 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h44"), (::uObject*)temp130);
    ::app::Uno::UX::Resource* temp301 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h45"), (::uObject*)temp131);
    ::app::Uno::UX::Resource* temp302 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h46"), (::uObject*)temp132);
    ::app::Uno::UX::Resource* temp303 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h47"), (::uObject*)temp133);
    ::app::Uno::UX::Resource* temp304 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h48"), (::uObject*)temp134);
    ::app::Uno::UX::Resource* temp305 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h49"), (::uObject*)temp135);
    ::app::Uno::UX::Resource* temp306 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h50"), (::uObject*)temp136);
    ::app::Uno::UX::Resource* temp307 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h51"), (::uObject*)temp137);
    ::app::Uno::UX::Resource* temp308 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h52"), (::uObject*)temp138);
    ::app::Uno::UX::Resource* temp309 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h53"), (::uObject*)temp139);
    ::app::Uno::UX::Resource* temp310 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h54"), (::uObject*)temp140);
    ::app::Uno::UX::Resource* temp311 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h55"), (::uObject*)temp141);
    ::app::Uno::UX::Resource* temp312 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h56"), (::uObject*)temp142);
    ::app::Uno::UX::Resource* temp313 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h57"), (::uObject*)temp143);
    ::app::Uno::UX::Resource* temp314 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h58"), (::uObject*)temp144);
    ::app::Uno::UX::Resource* temp315 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h59"), (::uObject*)temp145);
    ::app::Uno::UX::Resource* temp316 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h60"), (::uObject*)temp146);
    ::app::Uno::UX::Resource* temp317 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h61"), (::uObject*)temp147);
    ::app::Uno::UX::Resource* temp318 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h62"), (::uObject*)temp148);
    ::app::Uno::UX::Resource* temp319 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h63"), (::uObject*)temp149);
    ::app::Uno::UX::Resource* temp320 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h64"), (::uObject*)temp150);
    ::app::Uno::UX::Resource* temp321 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h65"), (::uObject*)temp151);
    ::app::Uno::UX::Resource* temp322 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h66"), (::uObject*)temp152);
    ::app::Uno::UX::Resource* temp323 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h67"), (::uObject*)temp153);
    ::app::Uno::UX::Resource* temp324 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h68"), (::uObject*)temp154);
    ::app::Uno::UX::Resource* temp325 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h69"), (::uObject*)temp155);
    ::app::Uno::UX::Resource* temp326 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h70"), (::uObject*)temp156);
    ::app::Uno::UX::Resource* temp327 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h71"), (::uObject*)temp157);
    ::app::Uno::UX::Resource* temp328 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h72"), (::uObject*)temp158);
    ::app::Uno::UX::Resource* temp329 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h73"), (::uObject*)temp159);
    ::app::Uno::UX::Resource* temp330 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h74"), (::uObject*)temp160);
    ::app::Uno::UX::Resource* temp331 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h75"), (::uObject*)temp161);
    ::app::Uno::UX::Resource* temp332 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h76"), (::uObject*)temp162);
    ::app::Uno::UX::Resource* temp333 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h77"), (::uObject*)temp163);
    ::app::Uno::UX::Resource* temp334 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h78"), (::uObject*)temp164);
    ::app::Uno::UX::Resource* temp335 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h79"), (::uObject*)temp165);
    ::app::Uno::UX::Resource* temp336 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h80"), (::uObject*)temp166);
    ::app::Uno::UX::Resource* temp337 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h81"), (::uObject*)temp167);
    ::app::Uno::UX::Resource* temp338 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h82"), (::uObject*)temp168);
    ::app::Uno::UX::Resource* temp339 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h83"), (::uObject*)temp169);
    ::app::Uno::UX::Resource* temp340 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h84"), (::uObject*)temp170);
    ::app::Uno::UX::Resource* temp341 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h85"), (::uObject*)temp171);
    ::app::Uno::UX::Resource* temp342 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h86"), (::uObject*)temp172);
    ::app::Uno::UX::Resource* temp343 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h87"), (::uObject*)temp173);
    ::app::Uno::UX::Resource* temp344 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h88"), (::uObject*)temp174);
    ::app::Uno::UX::Resource* temp345 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h89"), (::uObject*)temp175);
    ::app::Uno::UX::Resource* temp346 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h90"), (::uObject*)temp176);
    ::app::Uno::UX::Resource* temp347 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h91"), (::uObject*)temp177);
    ::app::Uno::UX::Resource* temp348 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h92"), (::uObject*)temp178);
    ::app::Uno::UX::Resource* temp349 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h93"), (::uObject*)temp179);
    ::app::Uno::UX::Resource* temp350 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h94"), (::uObject*)temp180);
    ::app::Uno::UX::Resource* temp351 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h95"), (::uObject*)temp181);
    ::app::Uno::UX::Resource* temp352 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h96"), (::uObject*)temp182);
    ::app::Uno::UX::Resource* temp353 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h97"), (::uObject*)temp183);
    ::app::Uno::UX::Resource* temp354 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h98"), (::uObject*)temp184);
    ::app::Uno::UX::Resource* temp355 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h99"), (::uObject*)temp185);
    ::app::Uno::UX::Resource* temp356 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h100"), (::uObject*)temp186);
    ::app::Uno::UX::Resource* temp357 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h101"), (::uObject*)temp187);
    ::app::Uno::UX::Resource* temp358 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h102"), (::uObject*)temp188);
    ::app::Uno::UX::Resource* temp359 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h103"), (::uObject*)temp189);
    ::app::Uno::UX::Resource* temp360 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h104"), (::uObject*)temp190);
    ::app::Uno::UX::Resource* temp361 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h105"), (::uObject*)temp191);
    ::app::Uno::UX::Resource* temp362 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h106"), (::uObject*)temp192);
    ::app::Uno::UX::Resource* temp363 = ::app::Uno::UX::Resource__New_1(NULL, ::uGetConstString("h107"), (::uObject*)temp193);
    ::app::Fuse::Controls::Panel* temp364 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Style* temp365 = ::app::Fuse::Style__New_1(NULL);
    collection_124 = ::app::MainView_Template__New_1(NULL, __this);
    ::uPtr< ::app::MainView_Template*>(collection_124)->Cascade(true);
    collection_124->AffectSubtypes(true);
    ::app::MainView_Template* temp366 = collection_124;
    collection_125 = ::app::MainView_Template1__New_1(NULL, __this);
    ::uPtr< ::app::MainView_Template1*>(collection_125)->Cascade(true);
    collection_125->AffectSubtypes(true);
    ::app::MainView_Template1* temp367 = collection_125;
    ::app::Fuse::Navigation::DirectNavigation* temp368 = ::app::Fuse::Navigation::DirectNavigation__New_1(NULL);
    __this->main = ::app::Fuse::Controls::Page__New_2(NULL);
    ::app::Fuse::Controls::Grid* temp369 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp370 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->label = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp371 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp372 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Controls::Image* temp373 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Gestures::Clicked* temp374 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp375 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Navigation::NavigateTo* temp376 = ::app::Fuse::Navigation::NavigateTo__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp377 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb0 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Controls::Panel* temp378 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Controls::Text* temp379 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp380 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp381 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Controls::Image* temp382 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Gestures::Clicked* temp383 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp384 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Navigation::NavigateTo* temp385 = ::app::Fuse::Navigation::NavigateTo__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp386 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb1 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Controls::Panel* temp387 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->label1 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp388 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp389 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Controls::Image* temp390 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Gestures::Clicked* temp391 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp392 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Navigation::NavigateTo* temp393 = ::app::Fuse::Navigation::NavigateTo__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp394 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb2 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Controls::Panel* temp395 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->label2 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp396 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp397 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Controls::Image* temp398 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Gestures::Clicked* temp399 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp400 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Navigation::NavigateTo* temp401 = ::app::Fuse::Navigation::NavigateTo__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp402 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb3 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Controls::Image* temp403 = ::app::Fuse::Controls::Image__New_2(NULL);
    __this->help = ::app::Fuse::Controls::Page__New_2(NULL);
    ::app::Fuse::Navigation::WhileActive* temp404 = ::app::Fuse::Navigation::WhileActive__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Set__float* temp405 = ::app::Fuse::Triggers::Actions::Set__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->helpBtn1_Opacity_inst);
    ::app::Fuse::Triggers::Actions::Set__float* temp406 = ::app::Fuse::Triggers::Actions::Set__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->helpBtn2_Opacity_inst);
    ::app::Fuse::Triggers::Actions::Set__float* temp407 = ::app::Fuse::Triggers::Actions::Set__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->helpBtn3_Opacity_inst);
    ::app::Fuse::Navigation::NavigateTo* temp408 = ::app::Fuse::Navigation::NavigateTo__New_1(NULL);
    ::app::Fuse::Navigation::WhileInactive* temp409 = ::app::Fuse::Navigation::WhileInactive__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp410 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Grid* temp411 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp412 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Controls::StackPanel* temp413 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp414 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp415 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp416 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Controls::Image* temp417 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Gestures::Clicked* temp418 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp419 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Navigation::NavigateTo* temp420 = ::app::Fuse::Navigation::NavigateTo__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp421 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb5 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Controls::Text* temp422 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Effects::DropShadow* temp423 = ::app::Fuse::Effects::DropShadow__New_1(NULL);
    ::app::Fuse::Controls::Grid* temp424 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp425 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp426 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    ::app::Fuse::Controls::Text* temp427 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp428 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp429 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Controls::Image* temp430 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Gestures::Clicked* temp431 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp432 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Set__float* temp433 = ::app::Fuse::Triggers::Actions::Set__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->helpBtn1_Opacity_inst);
    ::app::Fuse::Triggers::Actions::Set__float* temp434 = ::app::Fuse::Triggers::Actions::Set__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->helpBtn2_Opacity_inst);
    ::app::Fuse::Triggers::Actions::Set__float* temp435 = ::app::Fuse::Triggers::Actions::Set__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->helpBtn3_Opacity_inst);
    ::app::Fuse::Navigation::NavigateTo* temp436 = ::app::Fuse::Navigation::NavigateTo__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp437 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb6 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Controls::Text* temp438 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp439 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp440 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Controls::Image* temp441 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Gestures::Clicked* temp442 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp443 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Set__float* temp444 = ::app::Fuse::Triggers::Actions::Set__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->helpBtn1_Opacity_inst);
    ::app::Fuse::Triggers::Actions::Set__float* temp445 = ::app::Fuse::Triggers::Actions::Set__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->helpBtn2_Opacity_inst);
    ::app::Fuse::Triggers::Actions::Set__float* temp446 = ::app::Fuse::Triggers::Actions::Set__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->helpBtn3_Opacity_inst);
    ::app::Fuse::Navigation::NavigateTo* temp447 = ::app::Fuse::Navigation::NavigateTo__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp448 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb7 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Controls::Text* temp449 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp450 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp451 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Controls::Image* temp452 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Gestures::Clicked* temp453 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp454 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Set__float* temp455 = ::app::Fuse::Triggers::Actions::Set__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->helpBtn1_Opacity_inst);
    ::app::Fuse::Triggers::Actions::Set__float* temp456 = ::app::Fuse::Triggers::Actions::Set__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->helpBtn2_Opacity_inst);
    ::app::Fuse::Triggers::Actions::Set__float* temp457 = ::app::Fuse::Triggers::Actions::Set__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->helpBtn3_Opacity_inst);
    ::app::Fuse::Navigation::NavigateTo* temp458 = ::app::Fuse::Navigation::NavigateTo__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp459 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb8 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Controls::Panel* temp460 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp461 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    ::app::Fuse::Controls::Panel* temp462 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->helpPages = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Navigation::DirectNavigation* temp463 = ::app::Fuse::Navigation::DirectNavigation__New_1(NULL);
    __this->helpPage1 = ::app::Fuse::Controls::Page__New_2(NULL);
    ::app::Fuse::Controls::StackPanel* temp464 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Controls::Text* temp465 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Text* temp466 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Text* temp467 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Text* temp468 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Text* temp469 = ::app::Fuse::Controls::Text__New_2(NULL);
    __this->helpPage2 = ::app::Fuse::Controls::Page__New_2(NULL);
    ::app::Fuse::Navigation::WhileActive* temp470 = ::app::Fuse::Navigation::WhileActive__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp471 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Navigation::WhileInactive* temp472 = ::app::Fuse::Navigation::WhileInactive__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp473 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Grid* temp474 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp475 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Controls::Grid* temp476 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Reactive::DataToResourceBinding__Fuse_Resources_ImageSource* temp477 = ::app::Fuse::Reactive::DataToResourceBinding__Fuse_Resources_ImageSource__New_2(NULL, (::app::Uno::UX::Property__Fuse_Resources_ImageSource*)__this->animIMG_Source_inst, ::uGetConstString("frame.key"));
    ::app::Fuse::Reactive::DataToResourceBinding__Fuse_Resources_ImageSource* temp478 = ::app::Fuse::Reactive::DataToResourceBinding__Fuse_Resources_ImageSource__New_2(NULL, (::app::Uno::UX::Property__Fuse_Resources_ImageSource*)__this->animIMG_Source_inst, ::uGetConstString("frame.key"));
    ::app::Fuse::Reactive::DataBinding__bool* temp479 = ::app::Fuse::Reactive::DataBinding__bool__New_1(NULL, (::app::Uno::UX::Property__bool*)__this->temp_Value_inst, ::uGetConstString("frameCheck"));
    ::app::Fuse::Controls::Grid* temp480 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp481 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp482 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Controls::Image* temp483 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Gestures::Clicked* temp484 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp485 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp486 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Reactive::DataBinding__float* temp487 = ::app::Fuse::Reactive::DataBinding__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->temp1_Opacity_inst, ::uGetConstString("help2NaviAlpha0"));
    ::app::Fuse::Drawing::StaticSolidColor* temp488 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb11 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    __this->temp_eb12 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("help2NaviPrev"));
    ::app::Fuse::Gestures::WhilePressed* temp489 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp490 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Controls::Image* temp491 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Gestures::Clicked* temp492 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp493 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp494 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Reactive::DataBinding__float* temp495 = ::app::Fuse::Reactive::DataBinding__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->temp2_Opacity_inst, ::uGetConstString("help2NaviAlpha1"));
    ::app::Fuse::Drawing::StaticSolidColor* temp496 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb13 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    __this->temp_eb14 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("help2NaviPlay"));
    ::app::Fuse::Gestures::WhilePressed* temp497 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp498 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Controls::Image* temp499 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Gestures::Clicked* temp500 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp501 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp502 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Reactive::DataBinding__float* temp503 = ::app::Fuse::Reactive::DataBinding__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->temp3_Opacity_inst, ::uGetConstString("help2NaviAlpha2"));
    ::app::Fuse::Drawing::StaticSolidColor* temp504 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb15 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    __this->temp_eb16 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("help2NaviNext"));
    ::app::Fuse::Controls::Panel* temp505 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Controls::Panel* temp506 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Animations::Change__Fuse_Elements_Visibility* temp507 = ::app::Fuse::Animations::Change__Fuse_Elements_Visibility__New_1(NULL, (::app::Uno::UX::Property__Fuse_Elements_Visibility*)__this->animDesc0_Visibility_inst);
    ::app::Fuse::Animations::Change__Fuse_Elements_Visibility* temp508 = ::app::Fuse::Animations::Change__Fuse_Elements_Visibility__New_1(NULL, (::app::Uno::UX::Property__Fuse_Elements_Visibility*)__this->animDesc1_Visibility_inst);
    ::app::Fuse::Animations::Change__Fuse_Elements_Visibility* temp509 = ::app::Fuse::Animations::Change__Fuse_Elements_Visibility__New_1(NULL, (::app::Uno::UX::Property__Fuse_Elements_Visibility*)__this->animDesc2_Visibility_inst);
    ::app::Fuse::Animations::Change__Fuse_Elements_Visibility* temp510 = ::app::Fuse::Animations::Change__Fuse_Elements_Visibility__New_1(NULL, (::app::Uno::UX::Property__Fuse_Elements_Visibility*)__this->animDesc3_Visibility_inst);
    ::app::Fuse::Animations::Change__Fuse_Elements_Visibility* temp511 = ::app::Fuse::Animations::Change__Fuse_Elements_Visibility__New_1(NULL, (::app::Uno::UX::Property__Fuse_Elements_Visibility*)__this->animDesc4_Visibility_inst);
    ::app::Fuse::Animations::Change__Fuse_Elements_Visibility* temp512 = ::app::Fuse::Animations::Change__Fuse_Elements_Visibility__New_1(NULL, (::app::Uno::UX::Property__Fuse_Elements_Visibility*)__this->animDesc5_Visibility_inst);
    ::app::Fuse::Animations::Change__Fuse_Elements_Visibility* temp513 = ::app::Fuse::Animations::Change__Fuse_Elements_Visibility__New_1(NULL, (::app::Uno::UX::Property__Fuse_Elements_Visibility*)__this->animDesc6_Visibility_inst);
    ::app::Fuse::Animations::Change__Fuse_Elements_Visibility* temp514 = ::app::Fuse::Animations::Change__Fuse_Elements_Visibility__New_1(NULL, (::app::Uno::UX::Property__Fuse_Elements_Visibility*)__this->animDesc7_Visibility_inst);
    ::app::Fuse::Reactive::DataBinding__bool* temp515 = ::app::Fuse::Reactive::DataBinding__bool__New_1(NULL, (::app::Uno::UX::Property__bool*)__this->temp4_Value_inst, ::uGetConstString("animText0"));
    ::app::Fuse::Reactive::DataBinding__bool* temp516 = ::app::Fuse::Reactive::DataBinding__bool__New_1(NULL, (::app::Uno::UX::Property__bool*)__this->temp5_Value_inst, ::uGetConstString("animText1"));
    ::app::Fuse::Reactive::DataBinding__bool* temp517 = ::app::Fuse::Reactive::DataBinding__bool__New_1(NULL, (::app::Uno::UX::Property__bool*)__this->temp6_Value_inst, ::uGetConstString("animText2"));
    ::app::Fuse::Reactive::DataBinding__bool* temp518 = ::app::Fuse::Reactive::DataBinding__bool__New_1(NULL, (::app::Uno::UX::Property__bool*)__this->temp7_Value_inst, ::uGetConstString("animText3"));
    ::app::Fuse::Reactive::DataBinding__bool* temp519 = ::app::Fuse::Reactive::DataBinding__bool__New_1(NULL, (::app::Uno::UX::Property__bool*)__this->temp8_Value_inst, ::uGetConstString("animText4"));
    ::app::Fuse::Reactive::DataBinding__bool* temp520 = ::app::Fuse::Reactive::DataBinding__bool__New_1(NULL, (::app::Uno::UX::Property__bool*)__this->temp9_Value_inst, ::uGetConstString("animText5"));
    ::app::Fuse::Reactive::DataBinding__bool* temp521 = ::app::Fuse::Reactive::DataBinding__bool__New_1(NULL, (::app::Uno::UX::Property__bool*)__this->temp10_Value_inst, ::uGetConstString("animText6"));
    ::app::Fuse::Reactive::DataBinding__bool* temp522 = ::app::Fuse::Reactive::DataBinding__bool__New_1(NULL, (::app::Uno::UX::Property__bool*)__this->temp11_Value_inst, ::uGetConstString("animText7"));
    ::app::Fuse::Controls::Panel* temp523 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->temp_eb9 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("help2Active"));
    __this->temp_eb10 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("help2InActive"));
    __this->helpPage3 = ::app::Fuse::Controls::Page__New_2(NULL);
    ::app::Fuse::Controls::Image* temp524 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::Image* temp525 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp526 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.7686275f, 0.7960784f, 0.8431373f, 1.0f));
    __this->temp_eb4 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("help2InActive"));
    __this->config = ::app::Fuse::Controls::Page__New_2(NULL);
    ::app::Fuse::Navigation::WhileActive* temp527 = ::app::Fuse::Navigation::WhileActive__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp528 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Grid* temp529 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::StackPanel* temp530 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp531 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp532 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp533 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Controls::Image* temp534 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Gestures::Clicked* temp535 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp536 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Navigation::NavigateTo* temp537 = ::app::Fuse::Navigation::NavigateTo__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp538 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb18 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Controls::Text* temp539 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Effects::DropShadow* temp540 = ::app::Fuse::Effects::DropShadow__New_1(NULL);
    ::app::Fuse::Controls::Panel* temp541 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Controls::Panel* temp542 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Controls::Rectangle* temp543 = ::app::Fuse::Controls::Rectangle__New_2(NULL);
    ::app::Fuse::Drawing::Stroke* temp544 = ::app::Fuse::Drawing::Stroke__New_1(NULL);
    ::app::Fuse::Drawing::SolidColor* temp545 = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp546 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.7333333f));
    ::app::Fuse::Controls::Grid* temp547 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::StackPanel* temp548 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Controls::Grid* temp549 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::Text* temp550 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp551 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Controls::Grid* temp552 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp553 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp554 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp555 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Gestures::Clicked* temp556 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp557 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp558 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Text* temp559 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Image* temp560 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp561 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb19 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    __this->temp_eb20 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("speedDown"));
    ::app::Fuse::Controls::Panel* temp562 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Controls::Panel* temp563 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp564 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp565 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Gestures::Clicked* temp566 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp567 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp568 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Text* temp569 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Image* temp570 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp571 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb21 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    __this->temp_eb22 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("speedUp"));
    ::app::Fuse::Controls::StackPanel* temp572 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Controls::Rectangle* temp573 = ::app::Fuse::Controls::Rectangle__New_2(NULL);
    ::app::Fuse::Drawing::Stroke* temp574 = ::app::Fuse::Drawing::Stroke__New_1(NULL);
    ::app::Fuse::Drawing::SolidColor* temp575 = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp576 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    ::app::Fuse::Reactive::DataBinding__string* temp577 = ::app::Fuse::Reactive::DataBinding__string__New_1(NULL, (::app::Uno::UX::Property__string*)__this->temp12_Value_inst, ::uGetConstString("textSpeed"));
    ::app::Fuse::Controls::Panel* temp578 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp579 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.8f, 0.8f, 0.8f, 1.0f));
    ::app::Fuse::Controls::StackPanel* temp580 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Controls::Grid* temp581 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::Text* temp582 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Grid* temp583 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp584 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp585 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Gestures::Clicked* temp586 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp587 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp588 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Text* temp589 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Image* temp590 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Reactive::DataBinding__float* temp591 = ::app::Fuse::Reactive::DataBinding__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->temp13_Opacity_inst, ::uGetConstString("alphaStartContinue"));
    ::app::Fuse::Drawing::StaticSolidColor* temp592 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb23 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    __this->temp_eb24 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("startContinue"));
    ::app::Fuse::Gestures::WhilePressed* temp593 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp594 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Gestures::Clicked* temp595 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp596 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp597 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Text* temp598 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Image* temp599 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Reactive::DataBinding__float* temp600 = ::app::Fuse::Reactive::DataBinding__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->temp14_Opacity_inst, ::uGetConstString("alphaStartFirst"));
    ::app::Fuse::Drawing::StaticSolidColor* temp601 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb25 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    __this->temp_eb26 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("startFirst"));
    ::app::Fuse::Controls::Panel* temp602 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp603 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.8f, 0.8f, 0.8f, 1.0f));
    ::app::Fuse::Controls::StackPanel* temp604 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Controls::Grid* temp605 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::Text* temp606 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Grid* temp607 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp608 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp609 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Gestures::Clicked* temp610 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp611 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp612 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Image* temp613 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Reactive::DataBinding__float* temp614 = ::app::Fuse::Reactive::DataBinding__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->temp15_Opacity_inst, ::uGetConstString("alphaVoiceMan"));
    ::app::Fuse::Drawing::StaticSolidColor* temp615 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb27 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("voiceMan"));
    __this->temp_eb28 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Gestures::WhilePressed* temp616 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp617 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Gestures::Clicked* temp618 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp619 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp620 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Image* temp621 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Reactive::DataBinding__float* temp622 = ::app::Fuse::Reactive::DataBinding__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->temp16_Opacity_inst, ::uGetConstString("alphaVoiceGirl"));
    ::app::Fuse::Drawing::StaticSolidColor* temp623 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb29 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("voiceGirl"));
    __this->temp_eb30 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Gestures::WhilePressed* temp624 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp625 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Gestures::Clicked* temp626 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp627 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp628 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Image* temp629 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Reactive::DataBinding__float* temp630 = ::app::Fuse::Reactive::DataBinding__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->temp17_Opacity_inst, ::uGetConstString("alphaVoiceDubbing"));
    ::app::Fuse::Drawing::StaticSolidColor* temp631 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb31 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("voiceDubbing"));
    __this->temp_eb32 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Controls::Panel* temp632 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp633 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.8f, 0.8f, 0.8f, 1.0f));
    ::app::Fuse::Controls::StackPanel* temp634 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Controls::Grid* temp635 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::Text* temp636 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp637 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Controls::Grid* temp638 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp639 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp640 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp641 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Gestures::Clicked* temp642 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp643 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp644 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Text* temp645 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Image* temp646 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp647 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb33 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("voiceDown"));
    __this->temp_eb34 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Controls::Panel* temp648 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Controls::Panel* temp649 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp650 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp651 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Gestures::Clicked* temp652 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp653 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp654 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Text* temp655 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Image* temp656 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp657 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb35 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("voiceUp"));
    __this->temp_eb36 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Controls::StackPanel* temp658 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Controls::Rectangle* temp659 = ::app::Fuse::Controls::Rectangle__New_2(NULL);
    ::app::Fuse::Drawing::Stroke* temp660 = ::app::Fuse::Drawing::Stroke__New_1(NULL);
    ::app::Fuse::Drawing::SolidColor* temp661 = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp662 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    ::app::Fuse::Reactive::DataBinding__string* temp663 = ::app::Fuse::Reactive::DataBinding__string__New_1(NULL, (::app::Uno::UX::Property__string*)__this->temp18_Value_inst, ::uGetConstString("textVoice"));
    ::app::Fuse::Controls::Panel* temp664 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp665 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.8f, 0.8f, 0.8f, 1.0f));
    ::app::Fuse::Controls::StackPanel* temp666 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Controls::Grid* temp667 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::Text* temp668 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Grid* temp669 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp670 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp671 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Gestures::Clicked* temp672 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp673 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp674 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Image* temp675 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Reactive::DataBinding__float* temp676 = ::app::Fuse::Reactive::DataBinding__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->temp19_Opacity_inst, ::uGetConstString("alphaBgBird"));
    ::app::Fuse::Drawing::StaticSolidColor* temp677 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb37 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("bgBird"));
    __this->temp_eb38 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Gestures::WhilePressed* temp678 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp679 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Gestures::Clicked* temp680 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp681 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp682 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Image* temp683 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Reactive::DataBinding__float* temp684 = ::app::Fuse::Reactive::DataBinding__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->temp20_Opacity_inst, ::uGetConstString("alphaBgBug"));
    ::app::Fuse::Drawing::StaticSolidColor* temp685 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb39 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("bgBug"));
    __this->temp_eb40 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Gestures::WhilePressed* temp686 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp687 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Gestures::Clicked* temp688 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp689 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp690 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Image* temp691 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Reactive::DataBinding__float* temp692 = ::app::Fuse::Reactive::DataBinding__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->temp21_Opacity_inst, ::uGetConstString("alphaBgWater"));
    ::app::Fuse::Drawing::StaticSolidColor* temp693 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb41 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("bgWater"));
    __this->temp_eb42 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Gestures::WhilePressed* temp694 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp695 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Gestures::Clicked* temp696 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp697 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp698 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Image* temp699 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Reactive::DataBinding__float* temp700 = ::app::Fuse::Reactive::DataBinding__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->temp22_Opacity_inst, ::uGetConstString("alphaBgMusic"));
    ::app::Fuse::Drawing::StaticSolidColor* temp701 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb43 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("bgMusic"));
    __this->temp_eb44 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Controls::Panel* temp702 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp703 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.8f, 0.8f, 0.8f, 1.0f));
    ::app::Fuse::Controls::StackPanel* temp704 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Controls::Grid* temp705 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::Text* temp706 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp707 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Controls::Grid* temp708 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp709 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp710 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp711 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Gestures::Clicked* temp712 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp713 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp714 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Text* temp715 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Image* temp716 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp717 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb45 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("bgDown"));
    __this->temp_eb46 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Controls::Panel* temp718 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Controls::Panel* temp719 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp720 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp721 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Gestures::Clicked* temp722 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp723 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp724 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Text* temp725 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Image* temp726 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp727 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb47 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("bgUp"));
    __this->temp_eb48 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Controls::StackPanel* temp728 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Controls::Rectangle* temp729 = ::app::Fuse::Controls::Rectangle__New_2(NULL);
    ::app::Fuse::Drawing::Stroke* temp730 = ::app::Fuse::Drawing::Stroke__New_1(NULL);
    ::app::Fuse::Drawing::SolidColor* temp731 = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp732 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    ::app::Fuse::Reactive::DataBinding__string* temp733 = ::app::Fuse::Reactive::DataBinding__string__New_1(NULL, (::app::Uno::UX::Property__string*)__this->temp23_Value_inst, ::uGetConstString("textBg"));
    ::app::Fuse::Controls::Panel* temp734 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp735 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.8f, 0.8f, 0.8f, 1.0f));
    ::app::Fuse::Controls::StackPanel* temp736 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Controls::Grid* temp737 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::Text* temp738 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp739 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp740 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp741 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Gestures::Clicked* temp742 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp743 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp744 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Text* temp745 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Image* temp746 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp747 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb49 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("deleteSavedList"));
    __this->temp_eb50 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Controls::Image* temp748 = ::app::Fuse::Controls::Image__New_2(NULL);
    __this->temp_eb17 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("activateConfig"));
    __this->score = ::app::Fuse::Controls::Page__New_2(NULL);
    ::app::Fuse::Controls::Grid* temp749 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::StackPanel* temp750 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp751 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp752 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp753 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Controls::Image* temp754 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Gestures::Clicked* temp755 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Navigation::NavigateTo* temp756 = ::app::Fuse::Navigation::NavigateTo__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp757 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    ::app::Fuse::Controls::Text* temp758 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Effects::DropShadow* temp759 = ::app::Fuse::Effects::DropShadow__New_1(NULL);
    ::app::Fuse::Controls::Panel* temp760 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Controls::Image* temp761 = ::app::Fuse::Controls::Image__New_2(NULL);
    __this->start = ::app::Fuse::Controls::Page__New_2(NULL);
    ::app::Fuse::Navigation::WhileActive* temp762 = ::app::Fuse::Navigation::WhileActive__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp763 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Navigation::WhileInactive* temp764 = ::app::Fuse::Navigation::WhileInactive__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp765 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Controls::Grid* temp766 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Controls::StackPanel* temp767 = ::app::Fuse::Controls::StackPanel__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp768 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Gestures::WhilePressed* temp769 = ::app::Fuse::Gestures::WhilePressed__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp770 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Controls::Image* temp771 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Gestures::Clicked* temp772 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Navigation::NavigateTo* temp773 = ::app::Fuse::Navigation::NavigateTo__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp774 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Drawing::StaticSolidColor* temp775 = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f));
    __this->temp_eb53 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("clickBT"));
    ::app::Fuse::Controls::Panel* temp776 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Controls::Panel* temp777 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Reactive::DataToResourceBinding__Fuse_Resources_ImageSource* temp778 = ::app::Fuse::Reactive::DataToResourceBinding__Fuse_Resources_ImageSource__New_2(NULL, (::app::Uno::UX::Property__Fuse_Resources_ImageSource*)__this->playForegroundImage_Source_inst, ::uGetConstString("play.foreground.key"));
    ::app::Fuse::Navigation::NavigateTo* temp779 = ::app::Fuse::Navigation::NavigateTo__New_1(NULL);
    ::app::Fuse::Reactive::DataBinding__string* temp780 = ::app::Fuse::Reactive::DataBinding__string__New_1(NULL, (::app::Uno::UX::Property__string*)__this->playForegroundText_Value_inst, ::uGetConstString("play.foreground.label"));
    ::app::Fuse::Reactive::DataBinding__string* temp781 = ::app::Fuse::Reactive::DataBinding__string__New_1(NULL, (::app::Uno::UX::Property__string*)__this->playForegroundTitle_Value_inst, ::uGetConstString("play.foreground.title"));
    ::app::Fuse::Reactive::DataToResourceBinding__Fuse_Resources_ImageSource* temp782 = ::app::Fuse::Reactive::DataToResourceBinding__Fuse_Resources_ImageSource__New_2(NULL, (::app::Uno::UX::Property__Fuse_Resources_ImageSource*)__this->playBackgroundImage_Source_inst, ::uGetConstString("play.background.key"));
    ::app::Fuse::Navigation::NavigateTo* temp783 = ::app::Fuse::Navigation::NavigateTo__New_1(NULL);
    ::app::Fuse::Reactive::DataBinding__string* temp784 = ::app::Fuse::Reactive::DataBinding__string__New_1(NULL, (::app::Uno::UX::Property__string*)__this->playBackgroundText_Value_inst, ::uGetConstString("play.background.label"));
    ::app::Fuse::Reactive::DataBinding__string* temp785 = ::app::Fuse::Reactive::DataBinding__string__New_1(NULL, (::app::Uno::UX::Property__string*)__this->playBackgroundTitle_Value_inst, ::uGetConstString("play.background.title"));
    __this->playPages = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Gestures::Clicked* temp786 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Callback* temp787 = ::app::Fuse::Triggers::Actions::Callback__New_1(NULL);
    ::app::Fuse::Navigation::DirectNavigation* temp788 = ::app::Fuse::Navigation::DirectNavigation__New_1(NULL);
    __this->playPageForeground = ::app::Fuse::Controls::Page__New_2(NULL);
    ::app::Fuse::Navigation::WhileActive* temp789 = ::app::Fuse::Navigation::WhileActive__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Set__float* temp790 = ::app::Fuse::Triggers::Actions::Set__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->playForegroundTitle_Opacity_inst);
    ::app::Fuse::Animations::Change__float* temp791 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->playForegroundTitle_Opacity_inst);
    ::app::Fuse::Triggers::Actions::Set__float* temp792 = ::app::Fuse::Triggers::Actions::Set__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->playForegroundImage_Opacity_inst);
    ::app::Fuse::Animations::Change__float* temp793 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->playForegroundImage_Opacity_inst);
    ::app::Fuse::Triggers::Actions::Set__float* temp794 = ::app::Fuse::Triggers::Actions::Set__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->playForegroundTextP_Opacity_inst);
    ::app::Fuse::Animations::Change__float* temp795 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->playForegroundTextP_Opacity_inst);
    ::app::Fuse::Controls::Grid* temp796 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Effects::DropShadow* temp797 = ::app::Fuse::Effects::DropShadow__New_1(NULL);
    ::app::Fuse::Reactive::DataBinding__string* temp798 = ::app::Fuse::Reactive::DataBinding__string__New_1(NULL, (::app::Uno::UX::Property__string*)__this->playForegroundTitle_Value_inst, ::uGetConstString("play.foreground.title"));
    ::app::Fuse::Reactive::DataBinding__string* temp799 = ::app::Fuse::Reactive::DataBinding__string__New_1(NULL, (::app::Uno::UX::Property__string*)__this->playForegroundText_Value_inst, ::uGetConstString("play.foreground.label"));
    ::app::Fuse::Reactive::DataToResourceBinding__Fuse_Resources_ImageSource* temp800 = ::app::Fuse::Reactive::DataToResourceBinding__Fuse_Resources_ImageSource__New_2(NULL, (::app::Uno::UX::Property__Fuse_Resources_ImageSource*)__this->playForegroundImage_Source_inst, ::uGetConstString("play.foreground.key"));
    __this->playPageBackground = ::app::Fuse::Controls::Page__New_2(NULL);
    ::app::Fuse::Navigation::WhileActive* temp801 = ::app::Fuse::Navigation::WhileActive__New_1(NULL);
    ::app::Fuse::Triggers::Actions::Set__float* temp802 = ::app::Fuse::Triggers::Actions::Set__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->playBackgroundTextP_Opacity_inst);
    ::app::Fuse::Animations::Change__float* temp803 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->playBackgroundTextP_Opacity_inst);
    ::app::Fuse::Triggers::Actions::Set__float* temp804 = ::app::Fuse::Triggers::Actions::Set__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->playBackgroundTextP_Opacity_inst);
    ::app::Fuse::Animations::Change__float* temp805 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->playBackgroundTextP_Opacity_inst);
    ::app::Fuse::Triggers::Actions::Set__float* temp806 = ::app::Fuse::Triggers::Actions::Set__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->playBackgroundTextP_Opacity_inst);
    ::app::Fuse::Animations::Change__float* temp807 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->playBackgroundTextP_Opacity_inst);
    ::app::Fuse::Controls::Grid* temp808 = ::app::Fuse::Controls::Grid__New_2(NULL);
    ::app::Fuse::Effects::DropShadow* temp809 = ::app::Fuse::Effects::DropShadow__New_1(NULL);
    ::app::Fuse::Reactive::DataBinding__string* temp810 = ::app::Fuse::Reactive::DataBinding__string__New_1(NULL, (::app::Uno::UX::Property__string*)__this->playBackgroundTitle_Value_inst, ::uGetConstString("play.background.title"));
    ::app::Fuse::Reactive::DataBinding__string* temp811 = ::app::Fuse::Reactive::DataBinding__string__New_1(NULL, (::app::Uno::UX::Property__string*)__this->playBackgroundText_Value_inst, ::uGetConstString("play.background.label"));
    ::app::Fuse::Reactive::DataToResourceBinding__Fuse_Resources_ImageSource* temp812 = ::app::Fuse::Reactive::DataToResourceBinding__Fuse_Resources_ImageSource__New_2(NULL, (::app::Uno::UX::Property__Fuse_Resources_ImageSource*)__this->playBackgroundImage_Source_inst, ::uGetConstString("play.background.key"));
    __this->temp_eb54 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("playClick"));
    ::app::Fuse::Reactive::DataBinding__bool* temp813 = ::app::Fuse::Reactive::DataBinding__bool__New_1(NULL, (::app::Uno::UX::Property__bool*)__this->temp24_Value_inst, ::uGetConstString("playCheckForeground"));
    ::app::Fuse::Reactive::DataBinding__bool* temp814 = ::app::Fuse::Reactive::DataBinding__bool__New_1(NULL, (::app::Uno::UX::Property__bool*)__this->temp25_Value_inst, ::uGetConstString("playCheckBackground"));
    __this->temp_eb51 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("playActivate"));
    __this->temp_eb52 = ::app::Fuse::Reactive::EventBinding__New_1(NULL, ::uGetConstString("playInActivate"));
    __this->ClearColor(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    ::uPtr< ::app::Fuse::iOS::StatusBarConfig*>(temp194)->IsVisible(false);
    ::uPtr< ::app::Fuse::Reactive::JavaScript*>(temp195)->LineNumber(5);
    temp195->FileName(::uGetConstString("MainView.ux"));
    temp195->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 340), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp26)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 341), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp27)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 342), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp28)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 343), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp29)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 344), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp30)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 345), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp31)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 346), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp32)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 347), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp33)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 348), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp34)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 349), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp35)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 350), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp36)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 351), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp37)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 352), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp38)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 353), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp39)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 354), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp40)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 355), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp41)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 356), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp42)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 357), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp43)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 358), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp44)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 359), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp45)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 360), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp46)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 361), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp47)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 362), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp48)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 363), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp49)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 364), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp50)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 365), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp51)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 366), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp52)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 367), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp53)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 368), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp54)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 369), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp55)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 370), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp56)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 371), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp57)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 372), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp58)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 373), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp59)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 374), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp60)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 375), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp61)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 376), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp62)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 377), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp63)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 378), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp64)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 379), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp65)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 380), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp66)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 381), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp67)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 382), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp68)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 383), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp69)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 384), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp70)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 385), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp71)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 386), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp72)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 387), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp73)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 388), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp74)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 389), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp75)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 390), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp76)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 391), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp77)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 392), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp78)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 393), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp79)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 394), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp80)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 395), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp81)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 396), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp82)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 397), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp83)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 398), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp84)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 399), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp85)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 400), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp86)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 401), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp87)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 402), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp88)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 403), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp89)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 404), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp90)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 405), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp91)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 406), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp92)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 407), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp93)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 408), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp94)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 409), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp95)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 410), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp96)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 411), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp97)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 412), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp98)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 413), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp99)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 414), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp100)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 415), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp101)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 416), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp102)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 417), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp103)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 418), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp104)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 419), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp105)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 420), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp106)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 421), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp107)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 422), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp108)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 423), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp109)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 424), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp110)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 425), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp111)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 426), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp112)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 427), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp113)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 428), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp114)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 429), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp115)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 430), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp116)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 431), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp117)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 432), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp118)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 433), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp119)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 434), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp120)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 435), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp121)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 436), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp122)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 437), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp123)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 438), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp124)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 439), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp125)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 440), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp126)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 441), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp127)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 442), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp128)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 443), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp129)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 444), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp130)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 445), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp131)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 446), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp132)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 447), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp133)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 448), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp134)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 449), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp135)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 450), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp136)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 451), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp137)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 452), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp138)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 453), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp139)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 454), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp140)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 455), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp141)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 456), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp142)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 457), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp143)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 458), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp144)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 459), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp145)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 460), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp146)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 461), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp147)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 462), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp148)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 463), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp149)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 464), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp150)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 465), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp151)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 466), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp152)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 467), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp153)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 468), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp154)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 469), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp155)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 470), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp156)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 471), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp157)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 472), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp158)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 473), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp159)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 474), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp160)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 475), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp161)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 476), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp162)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 477), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp163)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 478), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp164)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 479), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp165)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 480), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp166)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 481), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp167)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 482), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp168)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 483), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp169)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 484), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp170)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 485), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp171)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 486), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp172)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 487), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp173)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 488), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp174)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 489), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp175)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 490), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp176)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 491), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp177)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 492), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp178)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 493), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp179)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 494), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp180)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 495), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp181)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 496), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp182)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 497), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp183)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 498), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp184)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 499), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp185)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 500), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp186)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 501), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp187)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 502), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp188)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 503), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp189)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 504), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp190)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 505), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp191)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 506), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp192)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 507), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Resources::FileImageSource*>(temp193)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 508), ::app::Uno::BundleFile__typeof())));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(temp364)->Children()), (::app::Fuse::Node*)__this->main);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp364->Children()), (::app::Fuse::Node*)__this->help);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp364->Children()), (::app::Fuse::Node*)__this->config);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp364->Children()), (::app::Fuse::Node*)__this->score);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp364->Children()), (::app::Fuse::Node*)__this->start);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp364->Behaviors()), (::app::Fuse::Behavior*)temp368);
    ::app::Uno::Collections::ICollection__Fuse_Style::Add(::uPtr< ::uObject*>(temp364->Styles()), temp365);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Style*>(temp365)->Templates()), (::uObject*)temp366);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(temp365->Templates()), (::uObject*)temp367);
    ::uPtr< ::app::Fuse::Navigation::DirectNavigation*>(temp368)->Active((::app::Fuse::Node*)__this->main);
    ::uPtr< ::app::Fuse::Controls::Page*>(__this->main)->Name(::uGetConstString("main"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->main)->Children()), (::app::Fuse::Node*)temp369);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->main)->Children()), (::app::Fuse::Node*)temp403);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp369)->ColumnData(::uGetConstString("1*,1*,1*,1*"));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp369, 100.0f, 1);
    temp369->Height(45.0f);
    temp369->Alignment(12);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp369->Children()), (::app::Fuse::Node*)temp370);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp369->Children()), (::app::Fuse::Node*)temp378);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp369->Children()), (::app::Fuse::Node*)temp387);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp369->Children()), (::app::Fuse::Node*)temp395);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp370)->Background((::app::Fuse::Drawing::Brush*)temp377);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp370->Children()), (::app::Fuse::Node*)__this->label);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp370->Children()), (::app::Fuse::Node*)temp373);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp370->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb0);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp370->Behaviors()), (::app::Fuse::Behavior*)temp371);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp370->Behaviors()), (::app::Fuse::Behavior*)temp374);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->label)->Value(::uGetConstString("\353\217\204\354\233\200\353\247\220"));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->label)->FontSize(20.0f);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->label)->TextColor(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->label)->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->label)->Name(::uGetConstString("label"));
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp371)->Animators()), (::app::Fuse::Animations::Animator*)temp372);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp372)->Factor(1.1f);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp373)->Padding(::app::Uno::Float4__New_2(NULL, 7.0f, 7.0f, 7.0f, 7.0f));
    temp373->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 509), ::app::Uno::BundleFile__typeof())));
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp374)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp375);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp374->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp376);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp375)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb0));
    ::uPtr< ::app::Fuse::Navigation::NavigateTo*>(temp376)->Target((::app::Fuse::Node*)__this->help);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp378)->Background((::app::Fuse::Drawing::Brush*)temp386);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp378->Children()), (::app::Fuse::Node*)temp379);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp378->Children()), (::app::Fuse::Node*)temp382);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp378->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb1);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp378->Behaviors()), (::app::Fuse::Behavior*)temp380);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp378->Behaviors()), (::app::Fuse::Behavior*)temp383);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp379)->Value(::uGetConstString("\354\204\244\354\240\225"));
    temp379->FontSize(20.0f);
    temp379->TextColor(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    temp379->Alignment(10);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp380)->Animators()), (::app::Fuse::Animations::Animator*)temp381);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp381)->Factor(1.1f);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp382)->Padding(::app::Uno::Float4__New_2(NULL, 7.0f, 7.0f, 7.0f, 7.0f));
    temp382->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 509), ::app::Uno::BundleFile__typeof())));
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp383)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp384);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp383->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp385);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp384)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb1));
    ::uPtr< ::app::Fuse::Navigation::NavigateTo*>(temp385)->Target((::app::Fuse::Node*)__this->config);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp387)->Background((::app::Fuse::Drawing::Brush*)temp394);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp387->Children()), (::app::Fuse::Node*)__this->label1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp387->Children()), (::app::Fuse::Node*)temp390);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp387->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb2);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp387->Behaviors()), (::app::Fuse::Behavior*)temp388);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp387->Behaviors()), (::app::Fuse::Behavior*)temp391);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->label1)->Value(::uGetConstString("\352\270\260\353\241\235\353\263\264\352\270\260"));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->label1)->FontSize(20.0f);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->label1)->TextColor(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->label1)->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->label1)->Name(::uGetConstString("label"));
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp388)->Animators()), (::app::Fuse::Animations::Animator*)temp389);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp389)->Factor(1.1f);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp390)->Padding(::app::Uno::Float4__New_2(NULL, 7.0f, 7.0f, 7.0f, 7.0f));
    temp390->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 509), ::app::Uno::BundleFile__typeof())));
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp391)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp392);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp391->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp393);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp392)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb2));
    ::uPtr< ::app::Fuse::Navigation::NavigateTo*>(temp393)->Target((::app::Fuse::Node*)__this->score);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp395)->Background((::app::Fuse::Drawing::Brush*)temp402);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp395->Children()), (::app::Fuse::Node*)__this->label2);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp395->Children()), (::app::Fuse::Node*)temp398);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp395->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb3);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp395->Behaviors()), (::app::Fuse::Behavior*)temp396);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp395->Behaviors()), (::app::Fuse::Behavior*)temp399);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->label2)->Value(::uGetConstString("\354\213\234\354\236\221"));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->label2)->FontSize(20.0f);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->label2)->TextColor(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->label2)->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->label2)->Name(::uGetConstString("label"));
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp396)->Animators()), (::app::Fuse::Animations::Animator*)temp397);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp397)->Factor(1.1f);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp398)->Padding(::app::Uno::Float4__New_2(NULL, 7.0f, 7.0f, 7.0f, 7.0f));
    temp398->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 509), ::app::Uno::BundleFile__typeof())));
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp399)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp400);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp399->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp401);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp400)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb3));
    ::uPtr< ::app::Fuse::Navigation::NavigateTo*>(temp401)->Target((::app::Fuse::Node*)__this->start);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp403)->StretchMode(6);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp403, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp403, 100.0f, 1);
    temp403->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 510), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Controls::Page*>(__this->help)->Name(::uGetConstString("help"));
    ::uPtr< ::app::Fuse::Controls::Page*>(__this->help)->Background((::app::Fuse::Drawing::Brush*)temp526);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->help)->Children()), (::app::Fuse::Node*)temp411);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->help)->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb4);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->help)->Behaviors()), (::app::Fuse::Behavior*)temp404);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->help)->Behaviors()), (::app::Fuse::Behavior*)temp409);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::WhileActive*>(temp404)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp405);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp404->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp406);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp404->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp407);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp404->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp408);
    ::uPtr< ::app::Fuse::Triggers::Actions::Set__float*>(temp405)->Value(1.0f);
    ::uPtr< ::app::Fuse::Triggers::Actions::Set__float*>(temp406)->Value(0.5f);
    ::uPtr< ::app::Fuse::Triggers::Actions::Set__float*>(temp407)->Value(0.5f);
    ::uPtr< ::app::Fuse::Navigation::NavigateTo*>(temp408)->Target((::app::Fuse::Node*)__this->helpPage1);
    temp408->TargetNode((::app::Fuse::Node*)__this->helpPages);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::WhileInactive*>(temp409)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp410);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp410)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb4));
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp411)->Rows(::uGetConstString("15*,85*"));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp411, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp411, 100.0f, 1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp411->Children()), (::app::Fuse::Node*)temp412);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp411->Children()), (::app::Fuse::Node*)temp462);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp412, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp412, 100.0f, 1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(temp412)->Children()), (::app::Fuse::Node*)temp413);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp412->Children()), (::app::Fuse::Node*)temp424);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(temp413)->Orientation(0);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp413, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp413, 100.0f, 1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp413->Children()), (::app::Fuse::Node*)temp414);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp413->Children()), (::app::Fuse::Node*)temp422);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp414)->Width(60.0f);
    temp414->Height(60.0f);
    temp414->Alignment(10);
    temp414->Background((::app::Fuse::Drawing::Brush*)temp421);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp414->Children()), (::app::Fuse::Node*)temp417);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp414->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb5);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp414->Behaviors()), (::app::Fuse::Behavior*)temp415);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp414->Behaviors()), (::app::Fuse::Behavior*)temp418);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp415)->Animators()), (::app::Fuse::Animations::Animator*)temp416);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp416)->Factor(1.1f);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp417)->Padding(::app::Uno::Float4__New_2(NULL, 7.0f, 7.0f, 7.0f, 7.0f));
    temp417->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 511), ::app::Uno::BundleFile__typeof())));
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp418)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp419);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp418->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp420);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp419)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb5));
    ::uPtr< ::app::Fuse::Navigation::NavigateTo*>(temp420)->Target((::app::Fuse::Node*)__this->main);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp422)->Value(::uGetConstString("\353\217\204\354\233\200\353\247\220"));
    temp422->FontSize(24.0f);
    temp422->TextColor(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    temp422->Alignment(8);
    ::app::Uno::Collections::ICollection__Fuse_Effects_Effect::Add(::uPtr< ::uObject*>(temp422->Effects()), (::app::Fuse::Effects::Effect*)temp423);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp424)->ColumnData(::uGetConstString("2*,1*,1*,1*,2*"));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp424, 100.0f, 1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp424->Children()), (::app::Fuse::Node*)temp425);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp424->Children()), (::app::Fuse::Node*)__this->helpBtn1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp424->Children()), (::app::Fuse::Node*)__this->helpBtn2);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp424->Children()), (::app::Fuse::Node*)__this->helpBtn3);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp424->Children()), (::app::Fuse::Node*)temp460);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp425)->Background((::app::Fuse::Drawing::Brush*)temp426);
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn1)->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn1)->Opacity(1.0f);
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn1)->Name(::uGetConstString("helpBtn1"));
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn1)->Background((::app::Fuse::Drawing::Brush*)temp437);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn1)->Children()), (::app::Fuse::Node*)temp427);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn1)->Children()), (::app::Fuse::Node*)temp430);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn1)->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb6);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn1)->Behaviors()), (::app::Fuse::Behavior*)temp428);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn1)->Behaviors()), (::app::Fuse::Behavior*)temp431);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp427)->Value(::uGetConstString("\353\247\210\354\235\214\352\261\260\354\232\270"));
    temp427->FontSize(20.0f);
    temp427->TextColor(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    temp427->Alignment(10);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp428)->Animators()), (::app::Fuse::Animations::Animator*)temp429);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp429)->Factor(1.1f);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp430)->Padding(::app::Uno::Float4__New_2(NULL, 7.0f, 7.0f, 7.0f, 7.0f));
    temp430->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 509), ::app::Uno::BundleFile__typeof())));
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp431)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp432);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp431->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp433);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp431->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp434);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp431->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp435);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp431->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp436);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp432)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb6));
    ::uPtr< ::app::Fuse::Triggers::Actions::Set__float*>(temp433)->Value(1.0f);
    ::uPtr< ::app::Fuse::Triggers::Actions::Set__float*>(temp434)->Value(0.5f);
    ::uPtr< ::app::Fuse::Triggers::Actions::Set__float*>(temp435)->Value(0.5f);
    ::uPtr< ::app::Fuse::Navigation::NavigateTo*>(temp436)->Target((::app::Fuse::Node*)__this->helpPage1);
    temp436->TargetNode((::app::Fuse::Node*)__this->helpPages);
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn2)->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn2)->Opacity(0.5f);
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn2)->Name(::uGetConstString("helpBtn2"));
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn2)->Background((::app::Fuse::Drawing::Brush*)temp448);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn2)->Children()), (::app::Fuse::Node*)temp438);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn2)->Children()), (::app::Fuse::Node*)temp441);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn2)->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb7);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn2)->Behaviors()), (::app::Fuse::Behavior*)temp439);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn2)->Behaviors()), (::app::Fuse::Behavior*)temp442);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp438)->Value(::uGetConstString("\354\240\210\355\225\230\353\212\224 \353\260\251\353\262\225"));
    temp438->FontSize(20.0f);
    temp438->TextColor(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    temp438->Alignment(10);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp439)->Animators()), (::app::Fuse::Animations::Animator*)temp440);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp440)->Factor(1.1f);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp441)->Padding(::app::Uno::Float4__New_2(NULL, 7.0f, 7.0f, 7.0f, 7.0f));
    temp441->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 509), ::app::Uno::BundleFile__typeof())));
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp442)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp443);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp442->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp444);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp442->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp445);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp442->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp446);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp442->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp447);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp443)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb7));
    ::uPtr< ::app::Fuse::Triggers::Actions::Set__float*>(temp444)->Value(0.5f);
    ::uPtr< ::app::Fuse::Triggers::Actions::Set__float*>(temp445)->Value(1.0f);
    ::uPtr< ::app::Fuse::Triggers::Actions::Set__float*>(temp446)->Value(0.5f);
    ::uPtr< ::app::Fuse::Navigation::NavigateTo*>(temp447)->Target((::app::Fuse::Node*)__this->helpPage2);
    temp447->TargetNode((::app::Fuse::Node*)__this->helpPages);
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn3)->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn3)->Opacity(0.5f);
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn3)->Name(::uGetConstString("helpBtn3"));
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn3)->Background((::app::Fuse::Drawing::Brush*)temp459);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn3)->Children()), (::app::Fuse::Node*)temp449);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn3)->Children()), (::app::Fuse::Node*)temp452);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn3)->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb8);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn3)->Behaviors()), (::app::Fuse::Behavior*)temp450);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpBtn3)->Behaviors()), (::app::Fuse::Behavior*)temp453);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp449)->Value(::uGetConstString("\354\202\254\354\232\251\353\262\225"));
    temp449->FontSize(20.0f);
    temp449->TextColor(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    temp449->Alignment(10);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp450)->Animators()), (::app::Fuse::Animations::Animator*)temp451);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp451)->Factor(1.1f);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp452)->Padding(::app::Uno::Float4__New_2(NULL, 7.0f, 7.0f, 7.0f, 7.0f));
    temp452->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 509), ::app::Uno::BundleFile__typeof())));
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp453)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp454);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp453->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp455);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp453->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp456);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp453->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp457);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp453->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp458);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp454)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb8));
    ::uPtr< ::app::Fuse::Triggers::Actions::Set__float*>(temp455)->Value(0.5f);
    ::uPtr< ::app::Fuse::Triggers::Actions::Set__float*>(temp456)->Value(0.5f);
    ::uPtr< ::app::Fuse::Triggers::Actions::Set__float*>(temp457)->Value(1.0f);
    ::uPtr< ::app::Fuse::Navigation::NavigateTo*>(temp458)->Target((::app::Fuse::Node*)__this->helpPage3);
    temp458->TargetNode((::app::Fuse::Node*)__this->helpPages);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp460)->Background((::app::Fuse::Drawing::Brush*)temp461);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(temp462)->Children()), (::app::Fuse::Node*)__this->helpPages);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp462->Children()), (::app::Fuse::Node*)temp525);
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpPages)->Name(::uGetConstString("helpPages"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpPages)->Children()), (::app::Fuse::Node*)__this->helpPage1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpPages)->Children()), (::app::Fuse::Node*)__this->helpPage2);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpPages)->Children()), (::app::Fuse::Node*)__this->helpPage3);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->helpPages)->Behaviors()), (::app::Fuse::Behavior*)temp463);
    ::uPtr< ::app::Fuse::Navigation::DirectNavigation*>(temp463)->Active((::app::Fuse::Node*)__this->helpPage1);
    ::uPtr< ::app::Fuse::Controls::Page*>(__this->helpPage1)->Name(::uGetConstString("helpPage1"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->helpPage1)->Children()), (::app::Fuse::Node*)temp464);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(temp464)->Orientation(1);
    temp464->Alignment(8);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp464->Children()), (::app::Fuse::Node*)temp465);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp464->Children()), (::app::Fuse::Node*)temp466);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp464->Children()), (::app::Fuse::Node*)temp467);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp464->Children()), (::app::Fuse::Node*)temp468);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp464->Children()), (::app::Fuse::Node*)temp469);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp465)->Value(::uGetConstString("\355\225\230\353\243\250 \355\225\230\353\243\250\352\260\200 \353\252\250\354\227\254 \355\225\234 \353\213\254\354\235\264 \353\220\230\352\263\240 \354\235\274\353\205\204\354\235\264 \353\220\251\353\213\210\353\213\244."));
    temp465->TextWrapping(1);
    temp465->FontSize(28.0f);
    temp465->TextColor(::app::Uno::Float4__New_2(NULL, 0.2392157f, 0.2392157f, 0.2392157f, 1.0f));
    temp465->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp466)->Value(::uGetConstString("\353\202\240\353\247\210\353\213\244 \353\202\264 \353\247\210\354\235\214\354\235\204 \353\247\221\352\263\240 \353\260\235\352\262\214 \352\260\200\352\276\270\352\263\240,"));
    temp466->TextWrapping(1);
    temp466->FontSize(28.0f);
    temp466->TextColor(::app::Uno::Float4__New_2(NULL, 0.2392157f, 0.2392157f, 0.2392157f, 1.0f));
    temp466->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp467)->Value(::uGetConstString("\354\230\250 \353\247\210\354\235\214\354\235\204 \353\252\250\354\225\204 \354\206\214\354\233\220\354\235\204 \353\271\214\353\251\264 \353\247\210\354\271\250\353\202\264 \352\277\210\354\235\200 \354\235\264\353\243\250\354\226\264 \354\247\210 \352\262\203\354\236\205\353\213\210\353\213\244."));
    temp467->TextWrapping(1);
    temp467->FontSize(28.0f);
    temp467->TextColor(::app::Uno::Float4__New_2(NULL, 0.2392157f, 0.2392157f, 0.2392157f, 1.0f));
    temp467->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp468)->Value(::uGetConstString("108\352\260\200\354\247\200 \353\247\210\354\235\214 \352\261\260\354\232\270\354\235\204 \354\235\275\352\263\240 \354\213\244\354\262\234\355\225\230\353\251\264\354\204\234 \353\202\264 \353\247\210\354\235\214\352\263\274 \355\226\211\353\217\231\354\235\204"));
    temp468->TextWrapping(1);
    temp468->FontSize(28.0f);
    temp468->TextColor(::app::Uno::Float4__New_2(NULL, 0.2392157f, 0.2392157f, 0.2392157f, 1.0f));
    temp468->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp469)->Value(::uGetConstString("\353\260\224\353\245\264\352\263\240 \354\225\204\353\246\204\353\213\265\352\262\214 \352\260\200\352\276\270\354\226\264\353\263\264\354\204\270\354\232\224."));
    temp469->TextWrapping(1);
    temp469->FontSize(28.0f);
    temp469->TextColor(::app::Uno::Float4__New_2(NULL, 0.2392157f, 0.2392157f, 0.2392157f, 1.0f));
    temp469->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Page*>(__this->helpPage2)->Name(::uGetConstString("helpPage2"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->helpPage2)->Children()), (::app::Fuse::Node*)temp474);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->helpPage2)->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb9);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->helpPage2)->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb10);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->helpPage2)->Behaviors()), (::app::Fuse::Behavior*)temp470);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->helpPage2)->Behaviors()), (::app::Fuse::Behavior*)temp472);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::WhileActive*>(temp470)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp471);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp471)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb9));
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::WhileInactive*>(temp472)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp473);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp473)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb10));
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp474)->ColumnData(::uGetConstString("1*,8*,1*,8*,1*"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp474->Children()), (::app::Fuse::Node*)temp475);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp474->Children()), (::app::Fuse::Node*)temp476);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp474->Children()), (::app::Fuse::Node*)temp505);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp474->Children()), (::app::Fuse::Node*)temp506);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp474->Children()), (::app::Fuse::Node*)temp523);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp476)->Rows(::uGetConstString("8*,2*"));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp476, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp476, 100.0f, 1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp476->Children()), (::app::Fuse::Node*)__this->animIMG);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp476->Children()), (::app::Fuse::Node*)temp480);
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->animIMG)->StretchMode(5);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)__this->animIMG, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)__this->animIMG, 100.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->animIMG)->Name(::uGetConstString("animIMG"));
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Image*>(__this->animIMG)->Behaviors()), (::app::Fuse::Behavior*)temp478);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Image*>(__this->animIMG)->Behaviors()), (::app::Fuse::Behavior*)temp479);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Image*>(__this->animIMG)->Behaviors()), (::app::Fuse::Behavior*)temp);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileTrue*>(temp)->Behaviors()), (::app::Fuse::Behavior*)temp477);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp480)->ColumnData(::uGetConstString("3*,3*,3*"));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp480, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp480, 100.0f, 1);
    temp480->Padding(::app::Uno::Float4__New_2(NULL, 8.0f, 8.0f, 8.0f, 8.0f));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp480->Children()), (::app::Fuse::Node*)temp1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp480->Children()), (::app::Fuse::Node*)temp2);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp480->Children()), (::app::Fuse::Node*)temp3);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp1)->Alignment(10);
    temp1->Background((::app::Fuse::Drawing::Brush*)temp488);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp1->Children()), (::app::Fuse::Node*)temp483);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp1->Behaviors()), (::app::Fuse::Behavior*)temp487);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp1->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb11);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp1->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb12);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp1->Behaviors()), (::app::Fuse::Behavior*)temp481);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp1->Behaviors()), (::app::Fuse::Behavior*)temp484);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp481)->Animators()), (::app::Fuse::Animations::Animator*)temp482);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp482)->Factor(1.1f);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp483)->Padding(::app::Uno::Float4__New_2(NULL, 7.0f, 7.0f, 7.0f, 7.0f));
    temp483->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 512), ::app::Uno::BundleFile__typeof())));
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp484)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp485);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp484->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp486);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp485)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb11));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp486)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb12));
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp2)->Alignment(10);
    temp2->Background((::app::Fuse::Drawing::Brush*)temp496);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp2->Children()), (::app::Fuse::Node*)temp491);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp2->Behaviors()), (::app::Fuse::Behavior*)temp495);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp2->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb13);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp2->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb14);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp2->Behaviors()), (::app::Fuse::Behavior*)temp489);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp2->Behaviors()), (::app::Fuse::Behavior*)temp492);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp489)->Animators()), (::app::Fuse::Animations::Animator*)temp490);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp490)->Factor(1.1f);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp491)->Padding(::app::Uno::Float4__New_2(NULL, 7.0f, 7.0f, 7.0f, 7.0f));
    temp491->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 513), ::app::Uno::BundleFile__typeof())));
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp492)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp493);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp492->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp494);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp493)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb13));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp494)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb14));
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp3)->Alignment(10);
    temp3->Background((::app::Fuse::Drawing::Brush*)temp504);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp3->Children()), (::app::Fuse::Node*)temp499);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp3->Behaviors()), (::app::Fuse::Behavior*)temp503);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp3->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb15);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp3->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb16);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp3->Behaviors()), (::app::Fuse::Behavior*)temp497);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp3->Behaviors()), (::app::Fuse::Behavior*)temp500);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp497)->Animators()), (::app::Fuse::Animations::Animator*)temp498);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp498)->Factor(1.1f);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp499)->Padding(::app::Uno::Float4__New_2(NULL, 7.0f, 7.0f, 7.0f, 7.0f));
    temp499->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 514), ::app::Uno::BundleFile__typeof())));
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp500)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp501);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp500->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp502);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp501)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb15));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp502)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb16));
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp506)->Alignment(8);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp506->Children()), (::app::Fuse::Node*)__this->animDesc0);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp506->Children()), (::app::Fuse::Node*)__this->animDesc1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp506->Children()), (::app::Fuse::Node*)__this->animDesc2);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp506->Children()), (::app::Fuse::Node*)__this->animDesc3);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp506->Children()), (::app::Fuse::Node*)__this->animDesc4);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp506->Children()), (::app::Fuse::Node*)__this->animDesc5);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp506->Children()), (::app::Fuse::Node*)__this->animDesc6);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp506->Children()), (::app::Fuse::Node*)__this->animDesc7);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp506->Behaviors()), (::app::Fuse::Behavior*)temp515);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp506->Behaviors()), (::app::Fuse::Behavior*)temp516);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp506->Behaviors()), (::app::Fuse::Behavior*)temp517);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp506->Behaviors()), (::app::Fuse::Behavior*)temp518);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp506->Behaviors()), (::app::Fuse::Behavior*)temp519);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp506->Behaviors()), (::app::Fuse::Behavior*)temp520);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp506->Behaviors()), (::app::Fuse::Behavior*)temp521);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp506->Behaviors()), (::app::Fuse::Behavior*)temp522);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp506->Behaviors()), (::app::Fuse::Behavior*)temp4);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp506->Behaviors()), (::app::Fuse::Behavior*)temp5);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp506->Behaviors()), (::app::Fuse::Behavior*)temp6);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp506->Behaviors()), (::app::Fuse::Behavior*)temp7);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp506->Behaviors()), (::app::Fuse::Behavior*)temp8);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp506->Behaviors()), (::app::Fuse::Behavior*)temp9);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp506->Behaviors()), (::app::Fuse::Behavior*)temp10);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp506->Behaviors()), (::app::Fuse::Behavior*)temp11);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc0)->Value(::uGetConstString("\353\247\210\354\235\214\354\235\204 \354\260\250\353\266\204\355\225\230\352\262\214 \352\260\200\353\235\274\354\225\211\355\236\210\352\263\240 \353\221\220 \354\206\220\354\235\204 \352\260\200\354\212\264\354\227\220 \353\252\250\354\234\274\353\251\260 \353\260\224\353\245\264\352\262\214 \354\204\255\353\213\210\353\213\244. \354\235\264\352\262\203\354\235\204 \355\225\251\354\236\245\354\235\264\353\235\274 \355\225\251\353\213\210\353\213\244."));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc0)->TextWrapping(1);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc0)->FontSize(26.0f);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc0)->TextColor(::app::Uno::Float4__New_2(NULL, 0.2392157f, 0.2392157f, 0.2392157f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc0)->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc0)->Visibility(2);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc0)->Name(::uGetConstString("animDesc0"));
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileTrue*>(temp4)->Animators()), (::app::Fuse::Animations::Animator*)temp507);
    ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(temp507)->Value(0);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc1)->Value(::uGetConstString("\355\225\251\354\236\245\354\235\204 \355\225\234 \354\261\204 \354\235\270\354\202\254\353\245\274 \355\225\230\353\223\257 \354\262\234\354\262\234\355\236\210 \355\227\210\353\246\254\353\245\274 \354\210\231\354\230\200\353\213\244 \354\204\270\354\233\201\353\213\210\353\213\244. \354\235\264\352\262\203\354\235\204 \353\260\230\353\260\260\353\235\274\355\225\230\353\212\224\353\215\260 \354\240\210\354\235\204\354\213\234\354\236\221\355\225\240\353\225\214\354\231\200 \353\201\235\353\202\240 \353\225\214\354\227\220\353\212\224 \355\225\255\354\203\201 \353\260\230\353\260\260\353\245\274 \355\225\251\353\213\210\353\213\244."));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc1)->TextWrapping(1);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc1)->FontSize(26.0f);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc1)->TextColor(::app::Uno::Float4__New_2(NULL, 0.2392157f, 0.2392157f, 0.2392157f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc1)->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc1)->Visibility(2);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc1)->Name(::uGetConstString("animDesc1"));
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileTrue*>(temp5)->Animators()), (::app::Fuse::Animations::Animator*)temp508);
    ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(temp508)->Value(0);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc2)->Value(::uGetConstString("\353\221\220\354\206\220\354\235\204 \352\260\200\354\212\264\354\227\220 \353\252\250\354\235\200 \354\261\204 \355\227\210\353\246\254\353\245\274 \354\202\264\354\247\235 \352\265\275\355\236\210\353\251\264\354\204\234 \353\254\264\353\246\216\354\235\204 \352\277\207\354\234\274\353\251\260 \354\225\211\354\212\265\353\213\210\353\213\244. \354\236\220\354\204\270\352\260\200 \355\235\220\355\212\270\353\237\254\354\247\200\353\251\264 \353\204\230\354\226\264\354\247\210 \354\210\230 \354\236\210\354\234\274\353\213\210 \354\262\234\354\262\234\355\236\210 \354\244\221\354\213\254\354\235\204 \354\236\241\354\234\274\353\251\260 \354\225\211\354\212\265\353\213\210\353\213\244."));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc2)->TextWrapping(1);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc2)->FontSize(26.0f);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc2)->TextColor(::app::Uno::Float4__New_2(NULL, 0.2392157f, 0.2392157f, 0.2392157f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc2)->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc2)->Visibility(2);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc2)->Name(::uGetConstString("animDesc2"));
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileTrue*>(temp6)->Animators()), (::app::Fuse::Animations::Animator*)temp509);
    ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(temp509)->Value(0);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc3)->Value(::uGetConstString("\354\227\211\353\215\251\354\235\264\354\231\200 \353\260\234 \353\222\244\352\277\210\354\271\230\352\260\200 \353\247\236\353\213\277\354\235\204 \353\225\214\354\257\244 \354\203\201\354\262\264\353\245\274 \354\225\236\354\234\274\353\241\234 \354\210\231\354\235\264\353\251\264\354\204\234 \354\230\244\353\245\270\354\206\220\354\235\204 \353\260\224\353\213\245\354\227\220 \353\202\264\353\240\244\353\206\223\354\212\265\353\213\210\353\213\244. \353\260\234\354\235\200 \354\236\220\354\227\260\354\212\244\353\237\275\352\262\214 \354\230\244\353\245\270\353\260\234\354\235\264 \354\231\274\353\260\234 \354\234\204\353\241\234 \354\230\254\353\235\274\352\260\200\352\262\214 \355\225\251\353\213\210\353\213\244. \354\230\244\353\245\270\354\206\220\352\263\274 \353\202\230\353\236\200\355\236\210 \354\231\274\354\206\220\354\235\204 \353\202\264\353\240\244\353\206\223\354\234\274\353\251\260 \354\235\264\353\247\210\352\260\200 \353\260\224\353\213\245\354\227\220 \353\213\277\354\235\204 \354\240\225\353\217\204\353\241\234 \354\210\231\354\236\205\353\213\210\353\213\244. \354\235\264\354\262\230\353\237\274 \354\235\264\353\247\210, \354\226\221\354\252\275 \355\214\224\352\277\210\354\271\230\354\231\200 \353\254\264\353\246\216\354\235\264 \353\252\250\353\221\220 \353\260\224\353\213\245\354\227\220 \353\213\277\354\235\200 \352\262\203\354\235\204 \354\230\244\354\262\264\355\210\254\354\247\200\353\235\274 \355\225\251\353\213\210\353\213\244."));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc3)->TextWrapping(1);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc3)->FontSize(26.0f);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc3)->TextColor(::app::Uno::Float4__New_2(NULL, 0.2392157f, 0.2392157f, 0.2392157f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc3)->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc3)->Visibility(2);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc3)->Name(::uGetConstString("animDesc3"));
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileTrue*>(temp7)->Animators()), (::app::Fuse::Animations::Animator*)temp510);
    ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(temp510)->Value(0);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc4)->Value(::uGetConstString("\354\226\221\354\252\275 \355\214\224\352\277\210\354\271\230\353\245\274 \353\260\224\353\213\245\354\227\220 \353\214\204 \354\261\204 \353\221\220 \354\206\220\353\260\224\353\213\245\354\235\264 \355\225\230\353\212\230\354\235\204 \355\226\245\355\225\230\353\217\204\353\241\235 \353\222\244\354\247\221\354\234\274\353\251\264\354\204\234 \354\226\221\354\252\275 \352\267\200\354\230\206\354\234\274\353\241\234 \354\202\264\354\247\235 \353\223\244\354\226\264\354\230\254\353\246\275\353\213\210\353\213\244. \354\235\264\352\262\203\354\235\200 \353\202\230 \354\236\220\354\213\240\354\235\204 \353\202\256\354\266\224\352\263\240 \354\204\270\354\203\201 \353\252\250\353\223\240 \354\241\264\354\236\254\353\245\274 \354\247\200\352\267\271\355\225\234 \353\247\210\354\235\214\354\234\274\353\241\234 \354\240\225\354\204\261\354\235\204 \353\213\244\355\225\264 \354\241\264\354\244\221\355\225\230\352\262\240\353\213\244\353\212\224 \353\213\244\354\247\220\354\236\205\353\213\210\353\213\244."));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc4)->TextWrapping(1);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc4)->FontSize(26.0f);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc4)->TextColor(::app::Uno::Float4__New_2(NULL, 0.2392157f, 0.2392157f, 0.2392157f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc4)->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc4)->Visibility(2);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc4)->Name(::uGetConstString("animDesc4"));
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileTrue*>(temp8)->Animators()), (::app::Fuse::Animations::Animator*)temp511);
    ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(temp511)->Value(0);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc5)->Value(::uGetConstString("\353\213\244\354\213\234 \353\221\220 \354\206\220\354\235\204 \353\260\224\353\213\245\354\235\204 \355\226\245\355\225\264 \353\222\244\354\247\221\354\226\264 \353\250\270\353\246\254 \354\230\206\354\234\274\353\241\234 \352\260\200\354\247\200\353\237\260\355\236\210 \353\202\264\353\240\244\353\206\223\354\234\274\353\251\260 \354\230\244\354\262\264\355\210\254\354\247\200 \354\236\220\354\204\270\353\245\274 \354\267\250\355\225\251\353\213\210\353\213\244."));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc5)->TextWrapping(1);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc5)->FontSize(26.0f);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc5)->TextColor(::app::Uno::Float4__New_2(NULL, 0.2392157f, 0.2392157f, 0.2392157f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc5)->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc5)->Visibility(2);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc5)->Name(::uGetConstString("animDesc5"));
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileTrue*>(temp9)->Animators()), (::app::Fuse::Animations::Animator*)temp512);
    ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(temp512)->Value(0);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc6)->Value(::uGetConstString("\352\263\240\352\260\234\354\231\200 \355\227\210\353\246\254\353\245\274 \352\263\247\354\235\200 \354\236\220\354\204\270\353\241\234 \353\223\244\353\251\264\354\204\234 \354\231\274\354\206\220\352\263\274 \354\230\244\353\245\270\354\206\220\354\235\204 \354\260\250\353\241\200\353\241\234 \352\260\200\354\212\264 \354\252\275\354\234\274\353\241\234 \353\252\250\354\235\215\353\213\210\353\213\244. \354\235\264\353\240\207\352\262\214 \355\225\230\353\251\264 \355\225\251\354\236\245\355\225\230\353\251\260 \354\225\211\354\235\200 \354\236\220\354\204\270\352\260\200 \353\220\251\353\213\210\353\213\244."));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc6)->TextWrapping(1);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc6)->FontSize(26.0f);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc6)->TextColor(::app::Uno::Float4__New_2(NULL, 0.2392157f, 0.2392157f, 0.2392157f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc6)->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc6)->Visibility(2);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc6)->Name(::uGetConstString("animDesc6"));
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileTrue*>(temp10)->Animators()), (::app::Fuse::Animations::Animator*)temp513);
    ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(temp513)->Value(0);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc7)->Value(::uGetConstString("\355\217\254\352\262\214 \353\206\223\354\225\230\353\215\230 \354\226\221 \353\260\234\354\235\204 \352\260\200\354\247\200\353\237\260\355\236\210 \355\222\200\353\251\264\354\204\234 \354\227\211\353\215\251\354\235\264\353\245\274 \354\202\264\354\247\235 \353\223\244\354\226\264\354\230\254\353\246\254\353\251\260 \354\235\274\354\226\264\353\202\251\353\213\210\353\213\244. \354\240\210\354\235\204 \354\213\234\354\236\221\355\225\240 \353\225\214\354\235\230 \354\236\220\354\204\270\354\262\230\353\237\274 \354\226\221\354\252\275\353\260\234\354\235\200 \352\260\200\354\247\200\353\237\260\355\236\210 \353\252\250\354\234\274\352\263\240 \353\221\220 \354\206\220\354\235\200 \352\260\200\354\212\264\354\252\275\354\234\274\353\241\234 \353\252\250\354\225\204 \353\260\224\353\245\264\352\262\214 \354\204\255\353\213\210\353\213\244. \354\235\264 \354\236\220\354\204\270\354\227\220\354\204\234 \353\254\264\353\246\216\354\235\204 \352\265\275\355\236\210\353\251\260 \353\213\244\354\213\234 \354\240\210\355\225\230\353\212\224 \353\217\231\354\236\221\354\235\204 \353\260\230\353\263\265\355\225\251\353\213\210\353\213\244. 108\353\262\210\354\247\270 \354\240\210\354\235\204 \353\247\210\354\263\244\354\235\204 \353\225\214\354\227\224 \353\260\230 \353\260\260\353\245\274 \355\225\230\353\251\260 \354\240\210 \354\210\230\355\226\211\354\235\204 \353\247\210\353\254\264\353\246\254\355\225\251\353\213\210\353\213\244."));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc7)->TextWrapping(1);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc7)->FontSize(26.0f);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc7)->TextColor(::app::Uno::Float4__New_2(NULL, 0.2392157f, 0.2392157f, 0.2392157f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc7)->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc7)->Visibility(2);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->animDesc7)->Name(::uGetConstString("animDesc7"));
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileTrue*>(temp11)->Animators()), (::app::Fuse::Animations::Animator*)temp514);
    ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(temp514)->Value(0);
    ::uPtr< ::app::Fuse::Controls::Page*>(__this->helpPage3)->Name(::uGetConstString("helpPage3"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->helpPage3)->Children()), (::app::Fuse::Node*)temp524);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp524)->StretchMode(5);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp524, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp524, 100.0f, 1);
    temp524->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 515), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp525)->StretchMode(5);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp525, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp525, 100.0f, 1);
    temp525->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 516), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Controls::Page*>(__this->config)->Name(::uGetConstString("config"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->config)->Children()), (::app::Fuse::Node*)temp529);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->config)->Children()), (::app::Fuse::Node*)temp748);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->config)->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb17);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->config)->Behaviors()), (::app::Fuse::Behavior*)temp527);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::WhileActive*>(temp527)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp528);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp528)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb17));
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp529)->Rows(::uGetConstString("15*,85*"));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp529, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp529, 100.0f, 1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp529->Children()), (::app::Fuse::Node*)temp530);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp529->Children()), (::app::Fuse::Node*)temp541);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(temp530)->Orientation(0);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp530, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp530, 100.0f, 1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp530->Children()), (::app::Fuse::Node*)temp531);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp530->Children()), (::app::Fuse::Node*)temp539);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp531)->Width(60.0f);
    temp531->Height(60.0f);
    temp531->Alignment(10);
    temp531->Background((::app::Fuse::Drawing::Brush*)temp538);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp531->Children()), (::app::Fuse::Node*)temp534);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp531->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb18);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp531->Behaviors()), (::app::Fuse::Behavior*)temp532);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp531->Behaviors()), (::app::Fuse::Behavior*)temp535);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp532)->Animators()), (::app::Fuse::Animations::Animator*)temp533);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp533)->Factor(1.1f);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp534)->Padding(::app::Uno::Float4__New_2(NULL, 7.0f, 7.0f, 7.0f, 7.0f));
    temp534->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 511), ::app::Uno::BundleFile__typeof())));
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp535)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp536);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp535->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp537);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp536)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb18));
    ::uPtr< ::app::Fuse::Navigation::NavigateTo*>(temp537)->Target((::app::Fuse::Node*)__this->main);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp539)->Value(::uGetConstString("\354\204\244\354\240\225"));
    temp539->FontSize(24.0f);
    temp539->TextColor(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    temp539->Alignment(8);
    ::app::Uno::Collections::ICollection__Fuse_Effects_Effect::Add(::uPtr< ::uObject*>(temp539->Effects()), (::app::Fuse::Effects::Effect*)temp540);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(temp541)->Children()), (::app::Fuse::Node*)temp542);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp542, 60.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp542, 90.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp542)->Appearance((::app::Fuse::Node*)temp543);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp542->Children()), (::app::Fuse::Node*)temp547);
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(temp543)->Background((::app::Fuse::Drawing::Brush*)temp546);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Add(::uPtr< ::uObject*>(temp543->Strokes()), temp544);
    ::uPtr< ::app::Fuse::Drawing::Stroke*>(temp544)->Width(1.0f);
    temp544->Brush((::app::Fuse::Drawing::Brush*)temp545);
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(temp545)->Color(::app::Uno::Float4__New_2(NULL, 0.6666667f, 0.6666667f, 0.6666667f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp547)->Rows(::uGetConstString("1*,1*,1*,1*,1*,1*,1*"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp547->Children()), (::app::Fuse::Node*)temp548);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp547->Children()), (::app::Fuse::Node*)temp580);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp547->Children()), (::app::Fuse::Node*)temp604);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp547->Children()), (::app::Fuse::Node*)temp634);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp547->Children()), (::app::Fuse::Node*)temp666);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp547->Children()), (::app::Fuse::Node*)temp704);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp547->Children()), (::app::Fuse::Node*)temp736);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(temp548)->Orientation(1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp548->Children()), (::app::Fuse::Node*)temp549);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp548->Children()), (::app::Fuse::Node*)temp578);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp549)->ColumnData(::uGetConstString("4*,6*"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp549->Children()), (::app::Fuse::Node*)temp550);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp549->Children()), (::app::Fuse::Node*)temp551);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp550)->Value(::uGetConstString("\354\240\210\355\225\230\352\270\260 \354\206\215\353\217\204"));
    temp550->FontSize(24.0f);
    temp550->Alignment(10);
    temp550->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 10.0f, 0.0f, 3.0f));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp551, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp551, 100.0f, 1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(temp551)->Children()), (::app::Fuse::Node*)temp552);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp551->Children()), (::app::Fuse::Node*)temp572);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp552)->ColumnData(::uGetConstString("3*,1*,3*"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp552->Children()), (::app::Fuse::Node*)temp553);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp552->Children()), (::app::Fuse::Node*)temp562);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp552->Children()), (::app::Fuse::Node*)temp563);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp553, 85.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp553)->Background((::app::Fuse::Drawing::Brush*)temp561);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp553->Children()), (::app::Fuse::Node*)temp559);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp553->Children()), (::app::Fuse::Node*)temp560);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp553->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb19);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp553->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb20);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp553->Behaviors()), (::app::Fuse::Behavior*)temp554);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp553->Behaviors()), (::app::Fuse::Behavior*)temp556);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp554)->Animators()), (::app::Fuse::Animations::Animator*)temp555);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp555)->Factor(1.1f);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp556)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp557);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp556->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp558);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp557)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb19));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp558)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb20));
    ::uPtr< ::app::Fuse::Controls::Text*>(temp559)->Value(::uGetConstString("\353\212\220\353\246\254\352\262\214"));
    temp559->FontSize(24.0f);
    temp559->TextColor(::app::Uno::Float4__New_2(NULL, 0.2313726f, 0.2313726f, 0.2313726f, 1.0f));
    temp559->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp560)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 509), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp563, 85.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp563)->Background((::app::Fuse::Drawing::Brush*)temp571);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp563->Children()), (::app::Fuse::Node*)temp569);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp563->Children()), (::app::Fuse::Node*)temp570);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp563->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb21);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp563->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb22);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp563->Behaviors()), (::app::Fuse::Behavior*)temp564);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp563->Behaviors()), (::app::Fuse::Behavior*)temp566);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp564)->Animators()), (::app::Fuse::Animations::Animator*)temp565);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp565)->Factor(1.1f);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp566)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp567);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp566->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp568);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp567)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb21));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp568)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb22));
    ::uPtr< ::app::Fuse::Controls::Text*>(temp569)->Value(::uGetConstString("\353\271\240\353\245\264\352\262\214"));
    temp569->FontSize(24.0f);
    temp569->TextColor(::app::Uno::Float4__New_2(NULL, 0.2313726f, 0.2313726f, 0.2313726f, 1.0f));
    temp569->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp570)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 509), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp572, 50.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp572, 70.0f, 1);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(temp572)->Appearance((::app::Fuse::Node*)temp573);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp572->Children()), (::app::Fuse::Node*)temp12);
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(temp573)->Background((::app::Fuse::Drawing::Brush*)temp576);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Add(::uPtr< ::uObject*>(temp573->Strokes()), temp574);
    ::uPtr< ::app::Fuse::Drawing::Stroke*>(temp574)->Width(1.0f);
    temp574->Brush((::app::Fuse::Drawing::Brush*)temp575);
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(temp575)->Color(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Text*>(temp12)->FontSize(20.0f);
    temp12->TextColor(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    temp12->Alignment(10);
    temp12->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 4.0f, 0.0f, 0.0f));
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp12->Behaviors()), (::app::Fuse::Behavior*)temp577);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp578, 100.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp578)->Height(1.0f);
    temp578->Background((::app::Fuse::Drawing::Brush*)temp579);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(temp580)->Orientation(1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp580->Children()), (::app::Fuse::Node*)temp581);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp580->Children()), (::app::Fuse::Node*)temp602);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp581)->ColumnData(::uGetConstString("4*,6*"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp581->Children()), (::app::Fuse::Node*)temp582);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp581->Children()), (::app::Fuse::Node*)temp583);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp582)->Value(::uGetConstString("\354\213\234\354\236\221\354\234\204\354\271\230"));
    temp582->FontSize(24.0f);
    temp582->Alignment(10);
    temp582->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 10.0f, 0.0f, 3.0f));
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp583)->ColumnData(::uGetConstString("1*,1*"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp583->Children()), (::app::Fuse::Node*)temp13);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp583->Children()), (::app::Fuse::Node*)temp14);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp13, 85.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp13)->Background((::app::Fuse::Drawing::Brush*)temp592);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp13->Children()), (::app::Fuse::Node*)temp589);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp13->Children()), (::app::Fuse::Node*)temp590);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp13->Behaviors()), (::app::Fuse::Behavior*)temp591);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp13->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb23);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp13->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb24);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp13->Behaviors()), (::app::Fuse::Behavior*)temp584);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp13->Behaviors()), (::app::Fuse::Behavior*)temp586);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp584)->Animators()), (::app::Fuse::Animations::Animator*)temp585);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp585)->Factor(1.1f);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp586)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp587);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp586->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp588);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp587)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb23));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp588)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb24));
    ::uPtr< ::app::Fuse::Controls::Text*>(temp589)->Value(::uGetConstString("\354\235\264\354\226\264\354\204\234"));
    temp589->FontSize(24.0f);
    temp589->TextColor(::app::Uno::Float4__New_2(NULL, 0.2313726f, 0.2313726f, 0.2313726f, 1.0f));
    temp589->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp590)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 509), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp14, 85.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp14)->Background((::app::Fuse::Drawing::Brush*)temp601);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp14->Children()), (::app::Fuse::Node*)temp598);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp14->Children()), (::app::Fuse::Node*)temp599);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp14->Behaviors()), (::app::Fuse::Behavior*)temp600);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp14->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb25);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp14->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb26);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp14->Behaviors()), (::app::Fuse::Behavior*)temp593);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp14->Behaviors()), (::app::Fuse::Behavior*)temp595);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp593)->Animators()), (::app::Fuse::Animations::Animator*)temp594);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp594)->Factor(1.1f);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp595)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp596);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp595->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp597);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp596)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb25));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp597)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb26));
    ::uPtr< ::app::Fuse::Controls::Text*>(temp598)->Value(::uGetConstString("\354\262\230\354\235\214\353\266\200\355\204\260"));
    temp598->FontSize(24.0f);
    temp598->TextColor(::app::Uno::Float4__New_2(NULL, 0.2313726f, 0.2313726f, 0.2313726f, 1.0f));
    temp598->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp599)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 509), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp602, 100.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp602)->Height(1.0f);
    temp602->Background((::app::Fuse::Drawing::Brush*)temp603);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(temp604)->Orientation(1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp604->Children()), (::app::Fuse::Node*)temp605);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp604->Children()), (::app::Fuse::Node*)temp632);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp605)->ColumnData(::uGetConstString("4*,6*"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp605->Children()), (::app::Fuse::Node*)temp606);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp605->Children()), (::app::Fuse::Node*)temp607);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp606)->Value(::uGetConstString("\353\252\251\354\206\214\353\246\254"));
    temp606->FontSize(24.0f);
    temp606->Alignment(10);
    temp606->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 10.0f, 0.0f, 3.0f));
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp607)->ColumnData(::uGetConstString("1*,1*,1*"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp607->Children()), (::app::Fuse::Node*)temp15);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp607->Children()), (::app::Fuse::Node*)temp16);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp607->Children()), (::app::Fuse::Node*)temp17);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp15, 85.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp15)->Background((::app::Fuse::Drawing::Brush*)temp615);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp15->Children()), (::app::Fuse::Node*)temp613);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp15->Behaviors()), (::app::Fuse::Behavior*)temp614);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp15->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb27);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp15->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb28);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp15->Behaviors()), (::app::Fuse::Behavior*)temp608);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp15->Behaviors()), (::app::Fuse::Behavior*)temp610);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp608)->Animators()), (::app::Fuse::Animations::Animator*)temp609);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp609)->Factor(1.1f);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp610)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp611);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp610->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp612);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp611)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb27));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp612)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb28));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp613)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 517), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp16, 85.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp16)->Background((::app::Fuse::Drawing::Brush*)temp623);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp16->Children()), (::app::Fuse::Node*)temp621);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp16->Behaviors()), (::app::Fuse::Behavior*)temp622);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp16->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb29);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp16->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb30);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp16->Behaviors()), (::app::Fuse::Behavior*)temp616);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp16->Behaviors()), (::app::Fuse::Behavior*)temp618);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp616)->Animators()), (::app::Fuse::Animations::Animator*)temp617);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp617)->Factor(1.1f);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp618)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp619);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp618->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp620);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp619)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb29));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp620)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb30));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp621)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 518), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp17, 85.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp17)->Background((::app::Fuse::Drawing::Brush*)temp631);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp17->Children()), (::app::Fuse::Node*)temp629);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp17->Behaviors()), (::app::Fuse::Behavior*)temp630);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp17->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb31);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp17->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb32);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp17->Behaviors()), (::app::Fuse::Behavior*)temp624);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp17->Behaviors()), (::app::Fuse::Behavior*)temp626);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp624)->Animators()), (::app::Fuse::Animations::Animator*)temp625);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp625)->Factor(1.1f);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp626)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp627);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp626->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp628);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp627)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb31));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp628)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb32));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp629)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 519), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp632, 100.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp632)->Height(1.0f);
    temp632->Alignment(12);
    temp632->Background((::app::Fuse::Drawing::Brush*)temp633);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(temp634)->Orientation(1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp634->Children()), (::app::Fuse::Node*)temp635);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp634->Children()), (::app::Fuse::Node*)temp664);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp635)->ColumnData(::uGetConstString("4*,6*"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp635->Children()), (::app::Fuse::Node*)temp636);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp635->Children()), (::app::Fuse::Node*)temp637);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp636)->Value(::uGetConstString("\353\252\251\354\206\214\353\246\254 \355\201\254\352\270\260"));
    temp636->FontSize(24.0f);
    temp636->Alignment(10);
    temp636->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 10.0f, 0.0f, 3.0f));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp637, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp637, 100.0f, 1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(temp637)->Children()), (::app::Fuse::Node*)temp638);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp637->Children()), (::app::Fuse::Node*)temp658);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp638)->ColumnData(::uGetConstString("3*,1*,3*"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp638->Children()), (::app::Fuse::Node*)temp639);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp638->Children()), (::app::Fuse::Node*)temp648);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp638->Children()), (::app::Fuse::Node*)temp649);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp639, 85.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp639)->Background((::app::Fuse::Drawing::Brush*)temp647);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp639->Children()), (::app::Fuse::Node*)temp645);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp639->Children()), (::app::Fuse::Node*)temp646);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp639->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb33);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp639->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb34);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp639->Behaviors()), (::app::Fuse::Behavior*)temp640);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp639->Behaviors()), (::app::Fuse::Behavior*)temp642);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp640)->Animators()), (::app::Fuse::Animations::Animator*)temp641);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp641)->Factor(1.1f);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp642)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp643);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp642->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp644);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp643)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb33));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp644)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb34));
    ::uPtr< ::app::Fuse::Controls::Text*>(temp645)->Value(::uGetConstString("\354\236\221\352\262\214"));
    temp645->FontSize(24.0f);
    temp645->TextColor(::app::Uno::Float4__New_2(NULL, 0.2313726f, 0.2313726f, 0.2313726f, 1.0f));
    temp645->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp646)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 509), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp649, 85.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp649)->Background((::app::Fuse::Drawing::Brush*)temp657);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp649->Children()), (::app::Fuse::Node*)temp655);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp649->Children()), (::app::Fuse::Node*)temp656);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp649->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb35);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp649->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb36);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp649->Behaviors()), (::app::Fuse::Behavior*)temp650);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp649->Behaviors()), (::app::Fuse::Behavior*)temp652);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp650)->Animators()), (::app::Fuse::Animations::Animator*)temp651);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp651)->Factor(1.1f);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp652)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp653);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp652->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp654);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp653)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb35));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp654)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb36));
    ::uPtr< ::app::Fuse::Controls::Text*>(temp655)->Value(::uGetConstString("\355\201\254\352\262\214"));
    temp655->FontSize(24.0f);
    temp655->TextColor(::app::Uno::Float4__New_2(NULL, 0.2313726f, 0.2313726f, 0.2313726f, 1.0f));
    temp655->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp656)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 509), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp658, 50.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp658, 70.0f, 1);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(temp658)->Appearance((::app::Fuse::Node*)temp659);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp658->Children()), (::app::Fuse::Node*)temp18);
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(temp659)->Background((::app::Fuse::Drawing::Brush*)temp662);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Add(::uPtr< ::uObject*>(temp659->Strokes()), temp660);
    ::uPtr< ::app::Fuse::Drawing::Stroke*>(temp660)->Width(1.0f);
    temp660->Brush((::app::Fuse::Drawing::Brush*)temp661);
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(temp661)->Color(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Text*>(temp18)->FontSize(20.0f);
    temp18->TextColor(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    temp18->Alignment(10);
    temp18->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 4.0f, 0.0f, 0.0f));
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp18->Behaviors()), (::app::Fuse::Behavior*)temp663);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp664, 100.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp664)->Height(1.0f);
    temp664->Background((::app::Fuse::Drawing::Brush*)temp665);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(temp666)->Orientation(1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp666->Children()), (::app::Fuse::Node*)temp667);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp666->Children()), (::app::Fuse::Node*)temp702);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp667)->ColumnData(::uGetConstString("4*,6*"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp667->Children()), (::app::Fuse::Node*)temp668);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp667->Children()), (::app::Fuse::Node*)temp669);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp668)->Value(::uGetConstString("\353\260\260\352\262\275\354\235\214"));
    temp668->FontSize(24.0f);
    temp668->Alignment(10);
    temp668->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 10.0f, 0.0f, 3.0f));
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp669)->ColumnData(::uGetConstString("1*,1*,1*,1*"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp669->Children()), (::app::Fuse::Node*)temp19);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp669->Children()), (::app::Fuse::Node*)temp20);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp669->Children()), (::app::Fuse::Node*)temp21);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp669->Children()), (::app::Fuse::Node*)temp22);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp19, 85.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp19)->Background((::app::Fuse::Drawing::Brush*)temp677);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp19->Children()), (::app::Fuse::Node*)temp675);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp19->Behaviors()), (::app::Fuse::Behavior*)temp676);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp19->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb37);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp19->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb38);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp19->Behaviors()), (::app::Fuse::Behavior*)temp670);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp19->Behaviors()), (::app::Fuse::Behavior*)temp672);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp670)->Animators()), (::app::Fuse::Animations::Animator*)temp671);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp671)->Factor(1.1f);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp672)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp673);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp672->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp674);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp673)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb37));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp674)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb38));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp675)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 520), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp20, 85.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp20)->Background((::app::Fuse::Drawing::Brush*)temp685);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp20->Children()), (::app::Fuse::Node*)temp683);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp20->Behaviors()), (::app::Fuse::Behavior*)temp684);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp20->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb39);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp20->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb40);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp20->Behaviors()), (::app::Fuse::Behavior*)temp678);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp20->Behaviors()), (::app::Fuse::Behavior*)temp680);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp678)->Animators()), (::app::Fuse::Animations::Animator*)temp679);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp679)->Factor(1.1f);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp680)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp681);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp680->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp682);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp681)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb39));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp682)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb40));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp683)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 521), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp21, 85.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp21)->Background((::app::Fuse::Drawing::Brush*)temp693);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp21->Children()), (::app::Fuse::Node*)temp691);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp21->Behaviors()), (::app::Fuse::Behavior*)temp692);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp21->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb41);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp21->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb42);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp21->Behaviors()), (::app::Fuse::Behavior*)temp686);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp21->Behaviors()), (::app::Fuse::Behavior*)temp688);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp686)->Animators()), (::app::Fuse::Animations::Animator*)temp687);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp687)->Factor(1.1f);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp688)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp689);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp688->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp690);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp689)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb41));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp690)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb42));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp691)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 522), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp22, 85.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp22)->Background((::app::Fuse::Drawing::Brush*)temp701);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp22->Children()), (::app::Fuse::Node*)temp699);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp22->Behaviors()), (::app::Fuse::Behavior*)temp700);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp22->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb43);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp22->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb44);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp22->Behaviors()), (::app::Fuse::Behavior*)temp694);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp22->Behaviors()), (::app::Fuse::Behavior*)temp696);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp694)->Animators()), (::app::Fuse::Animations::Animator*)temp695);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp695)->Factor(1.1f);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp696)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp697);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp696->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp698);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp697)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb43));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp698)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb44));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp699)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 523), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp702, 100.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp702)->Height(1.0f);
    temp702->Background((::app::Fuse::Drawing::Brush*)temp703);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(temp704)->Orientation(1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp704->Children()), (::app::Fuse::Node*)temp705);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp704->Children()), (::app::Fuse::Node*)temp734);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp705)->ColumnData(::uGetConstString("4*,6*"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp705->Children()), (::app::Fuse::Node*)temp706);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp705->Children()), (::app::Fuse::Node*)temp707);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp706)->Value(::uGetConstString("\353\260\260\352\262\275\354\235\214 \355\201\254\352\270\260"));
    temp706->FontSize(24.0f);
    temp706->Alignment(10);
    temp706->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 10.0f, 0.0f, 3.0f));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp707, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp707, 100.0f, 1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(temp707)->Children()), (::app::Fuse::Node*)temp708);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp707->Children()), (::app::Fuse::Node*)temp728);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp708)->ColumnData(::uGetConstString("3*,1*,3*"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp708->Children()), (::app::Fuse::Node*)temp709);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp708->Children()), (::app::Fuse::Node*)temp718);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp708->Children()), (::app::Fuse::Node*)temp719);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp709, 85.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp709)->Background((::app::Fuse::Drawing::Brush*)temp717);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp709->Children()), (::app::Fuse::Node*)temp715);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp709->Children()), (::app::Fuse::Node*)temp716);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp709->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb45);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp709->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb46);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp709->Behaviors()), (::app::Fuse::Behavior*)temp710);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp709->Behaviors()), (::app::Fuse::Behavior*)temp712);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp710)->Animators()), (::app::Fuse::Animations::Animator*)temp711);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp711)->Factor(1.1f);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp712)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp713);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp712->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp714);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp713)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb45));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp714)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb46));
    ::uPtr< ::app::Fuse::Controls::Text*>(temp715)->Value(::uGetConstString("\354\236\221\352\262\214"));
    temp715->FontSize(24.0f);
    temp715->TextColor(::app::Uno::Float4__New_2(NULL, 0.2313726f, 0.2313726f, 0.2313726f, 1.0f));
    temp715->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp716)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 509), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp719, 85.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp719)->Background((::app::Fuse::Drawing::Brush*)temp727);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp719->Children()), (::app::Fuse::Node*)temp725);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp719->Children()), (::app::Fuse::Node*)temp726);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp719->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb47);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp719->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb48);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp719->Behaviors()), (::app::Fuse::Behavior*)temp720);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp719->Behaviors()), (::app::Fuse::Behavior*)temp722);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp720)->Animators()), (::app::Fuse::Animations::Animator*)temp721);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp721)->Factor(1.1f);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp722)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp723);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp722->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp724);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp723)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb47));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp724)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb48));
    ::uPtr< ::app::Fuse::Controls::Text*>(temp725)->Value(::uGetConstString("\355\201\254\352\262\214"));
    temp725->FontSize(24.0f);
    temp725->TextColor(::app::Uno::Float4__New_2(NULL, 0.2313726f, 0.2313726f, 0.2313726f, 1.0f));
    temp725->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp726)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 509), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp728, 50.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp728, 70.0f, 1);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(temp728)->Appearance((::app::Fuse::Node*)temp729);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp728->Children()), (::app::Fuse::Node*)temp23);
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(temp729)->Background((::app::Fuse::Drawing::Brush*)temp732);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Add(::uPtr< ::uObject*>(temp729->Strokes()), temp730);
    ::uPtr< ::app::Fuse::Drawing::Stroke*>(temp730)->Width(1.0f);
    temp730->Brush((::app::Fuse::Drawing::Brush*)temp731);
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(temp731)->Color(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Text*>(temp23)->FontSize(20.0f);
    temp23->TextColor(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    temp23->Alignment(10);
    temp23->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 4.0f, 0.0f, 0.0f));
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp23->Behaviors()), (::app::Fuse::Behavior*)temp733);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp734, 100.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp734)->Height(1.0f);
    temp734->Background((::app::Fuse::Drawing::Brush*)temp735);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(temp736)->Orientation(1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp736->Children()), (::app::Fuse::Node*)temp737);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp737)->ColumnData(::uGetConstString("4*,6*"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp737->Children()), (::app::Fuse::Node*)temp738);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp737->Children()), (::app::Fuse::Node*)temp739);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp738)->Value(::uGetConstString("\354\240\210\355\225\234 \352\270\260\353\241\235 \354\247\200\354\232\260\352\270\260"));
    temp738->FontSize(24.0f);
    temp738->Alignment(10);
    temp738->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 10.0f, 0.0f, 3.0f));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp739, 85.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp739)->Background((::app::Fuse::Drawing::Brush*)temp747);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp739->Children()), (::app::Fuse::Node*)temp745);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp739->Children()), (::app::Fuse::Node*)temp746);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp739->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb49);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp739->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb50);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp739->Behaviors()), (::app::Fuse::Behavior*)temp740);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp739->Behaviors()), (::app::Fuse::Behavior*)temp742);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp740)->Animators()), (::app::Fuse::Animations::Animator*)temp741);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp741)->Factor(1.1f);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp742)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp743);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp742->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp744);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp743)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb49));
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp744)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb50));
    ::uPtr< ::app::Fuse::Controls::Text*>(temp745)->Value(::uGetConstString("\354\247\200\354\232\260\352\270\260"));
    temp745->FontSize(24.0f);
    temp745->TextColor(::app::Uno::Float4__New_2(NULL, 0.2313726f, 0.2313726f, 0.2313726f, 1.0f));
    temp745->Alignment(10);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp746)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 524), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Controls::Image*>(temp748)->StretchMode(6);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp748, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp748, 100.0f, 1);
    temp748->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 525), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Controls::Page*>(__this->score)->Name(::uGetConstString("score"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->score)->Children()), (::app::Fuse::Node*)temp749);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->score)->Children()), (::app::Fuse::Node*)temp761);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp749)->Rows(::uGetConstString("15*,85*"));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp749, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp749, 100.0f, 1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp749->Children()), (::app::Fuse::Node*)temp750);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp749->Children()), (::app::Fuse::Node*)temp760);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(temp750)->Orientation(0);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp750, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp750, 100.0f, 1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp750->Children()), (::app::Fuse::Node*)temp751);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp750->Children()), (::app::Fuse::Node*)temp758);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp751)->Width(60.0f);
    temp751->Height(60.0f);
    temp751->Alignment(10);
    temp751->Background((::app::Fuse::Drawing::Brush*)temp757);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp751->Children()), (::app::Fuse::Node*)temp754);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp751->Behaviors()), (::app::Fuse::Behavior*)temp752);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp751->Behaviors()), (::app::Fuse::Behavior*)temp755);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp752)->Animators()), (::app::Fuse::Animations::Animator*)temp753);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp753)->Factor(1.1f);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp754)->Padding(::app::Uno::Float4__New_2(NULL, 7.0f, 7.0f, 7.0f, 7.0f));
    temp754->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 511), ::app::Uno::BundleFile__typeof())));
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp755)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp756);
    ::uPtr< ::app::Fuse::Navigation::NavigateTo*>(temp756)->Target((::app::Fuse::Node*)__this->main);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp758)->Value(::uGetConstString("\352\270\260\353\241\235"));
    temp758->FontSize(24.0f);
    temp758->TextColor(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    temp758->Alignment(8);
    ::app::Uno::Collections::ICollection__Fuse_Effects_Effect::Add(::uPtr< ::uObject*>(temp758->Effects()), (::app::Fuse::Effects::Effect*)temp759);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp761)->StretchMode(6);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp761, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp761, 100.0f, 1);
    temp761->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 526), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Controls::Page*>(__this->start)->Name(::uGetConstString("start"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->start)->Children()), (::app::Fuse::Node*)temp766);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->start)->Children()), (::app::Fuse::Node*)temp777);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->start)->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb51);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->start)->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb52);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->start)->Behaviors()), (::app::Fuse::Behavior*)temp762);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->start)->Behaviors()), (::app::Fuse::Behavior*)temp764);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::WhileActive*>(temp762)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp763);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp763)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb51));
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::WhileInactive*>(temp764)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp765);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp765)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb52));
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp766)->Rows(::uGetConstString("15*,85*"));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp766, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp766, 100.0f, 1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp766->Children()), (::app::Fuse::Node*)temp767);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp766->Children()), (::app::Fuse::Node*)temp776);
    ::uPtr< ::app::Fuse::Controls::StackPanel*>(temp767)->Orientation(0);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp767, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp767, 100.0f, 1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp767->Children()), (::app::Fuse::Node*)temp768);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp768)->Width(60.0f);
    temp768->Height(60.0f);
    temp768->Alignment(10);
    temp768->Background((::app::Fuse::Drawing::Brush*)temp775);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp768->Children()), (::app::Fuse::Node*)temp771);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp768->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb53);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp768->Behaviors()), (::app::Fuse::Behavior*)temp769);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp768->Behaviors()), (::app::Fuse::Behavior*)temp772);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::WhilePressed*>(temp769)->Animators()), (::app::Fuse::Animations::Animator*)temp770);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp770)->Factor(1.1f);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp771)->Padding(::app::Uno::Float4__New_2(NULL, 12.0f, 12.0f, 12.0f, 12.0f));
    temp771->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 527), ::app::Uno::BundleFile__typeof())));
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp772)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp773);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp772->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp774);
    ::uPtr< ::app::Fuse::Navigation::NavigateTo*>(temp773)->Target((::app::Fuse::Node*)__this->main);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp774)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb53));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp777, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp777, 100.0f, 1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(temp777)->Children()), (::app::Fuse::Node*)__this->playPages);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp777->Behaviors()), (::app::Fuse::Behavior*)temp813);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp777->Behaviors()), (::app::Fuse::Behavior*)temp814);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp777->Behaviors()), (::app::Fuse::Behavior*)temp24);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp777->Behaviors()), (::app::Fuse::Behavior*)temp25);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileTrue*>(temp24)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp779);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp24->Behaviors()), (::app::Fuse::Behavior*)temp778);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp24->Behaviors()), (::app::Fuse::Behavior*)temp780);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp24->Behaviors()), (::app::Fuse::Behavior*)temp781);
    ::uPtr< ::app::Fuse::Navigation::NavigateTo*>(temp779)->Target((::app::Fuse::Node*)__this->playPageForeground);
    temp779->TargetNode((::app::Fuse::Node*)__this->playPages);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileTrue*>(temp25)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp783);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp25->Behaviors()), (::app::Fuse::Behavior*)temp782);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp25->Behaviors()), (::app::Fuse::Behavior*)temp784);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp25->Behaviors()), (::app::Fuse::Behavior*)temp785);
    ::uPtr< ::app::Fuse::Navigation::NavigateTo*>(temp783)->Target((::app::Fuse::Node*)__this->playPageBackground);
    temp783->TargetNode((::app::Fuse::Node*)__this->playPages);
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->playPages)->Name(::uGetConstString("playPages"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->playPages)->Children()), (::app::Fuse::Node*)__this->playPageForeground);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->playPages)->Children()), (::app::Fuse::Node*)__this->playPageBackground);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->playPages)->Behaviors()), (::app::Fuse::Behavior*)__this->temp_eb54);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->playPages)->Behaviors()), (::app::Fuse::Behavior*)temp786);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->playPages)->Behaviors()), (::app::Fuse::Behavior*)temp788);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp786)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp787);
    ::uPtr< ::app::Fuse::Triggers::Actions::Callback*>(temp787)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::NodeEventHandler__typeof(), (const void*)::app::Fuse::Reactive::EventBinding__OnEvent, __this->temp_eb54));
    ::uPtr< ::app::Fuse::Navigation::DirectNavigation*>(temp788)->Active((::app::Fuse::Node*)__this->playPageForeground);
    ::uPtr< ::app::Fuse::Controls::Page*>(__this->playPageForeground)->Name(::uGetConstString("playPageForeground"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->playPageForeground)->Children()), (::app::Fuse::Node*)temp796);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->playPageForeground)->Children()), (::app::Fuse::Node*)__this->playForegroundImage);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->playPageForeground)->Behaviors()), (::app::Fuse::Behavior*)temp789);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::WhileActive*>(temp789)->Animators()), (::app::Fuse::Animations::Animator*)temp791);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp789->Animators()), (::app::Fuse::Animations::Animator*)temp793);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp789->Animators()), (::app::Fuse::Animations::Animator*)temp795);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp789->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp790);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp789->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp792);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp789->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp794);
    ::uPtr< ::app::Fuse::Triggers::Actions::Set__float*>(temp790)->Value(0.0f);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp791)->Value(1.0f);
    temp791->Delay_1(2.0);
    temp791->Duration(2.0);
    ::uPtr< ::app::Fuse::Triggers::Actions::Set__float*>(temp792)->Value(0.0f);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp793)->Value(1.0f);
    temp793->Duration(3.0);
    ::uPtr< ::app::Fuse::Triggers::Actions::Set__float*>(temp794)->Value(0.0f);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp795)->Value(1.0f);
    temp795->Delay_1(3.0);
    temp795->Duration(2.0);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp796)->Rows(::uGetConstString("6*, 6*"));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp796, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp796, 100.0f, 1);
    temp796->Padding(::app::Uno::Float4__New_2(NULL, 30.0f, 30.0f, 30.0f, 30.0f));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp796->Children()), (::app::Fuse::Node*)__this->playForegroundTitle);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp796->Children()), (::app::Fuse::Node*)__this->playForegroundTextP);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->playForegroundTitle)->FontSize(34.0f);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->playForegroundTitle)->TextAlignment(1);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->playForegroundTitle)->TextColor(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->playForegroundTitle)->Name(::uGetConstString("playForegroundTitle"));
    ::app::Uno::Collections::ICollection__Fuse_Effects_Effect::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Text*>(__this->playForegroundTitle)->Effects()), (::app::Fuse::Effects::Effect*)temp797);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Text*>(__this->playForegroundTitle)->Behaviors()), (::app::Fuse::Behavior*)temp798);
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->playForegroundTextP)->Height(80.0f);
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->playForegroundTextP)->Alignment(12);
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->playForegroundTextP)->Name(::uGetConstString("playForegroundTextP"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->playForegroundTextP)->Children()), (::app::Fuse::Node*)__this->playForegroundText);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->playForegroundText)->TextWrapping(1);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->playForegroundText)->FontSize(36.0f);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->playForegroundText)->TextAlignment(1);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->playForegroundText)->TextColor(::app::Uno::Float4__New_2(NULL, 0.2f, 0.2f, 0.2f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->playForegroundText)->Name(::uGetConstString("playForegroundText"));
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Text*>(__this->playForegroundText)->Behaviors()), (::app::Fuse::Behavior*)temp799);
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->playForegroundImage)->StretchMode(5);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)__this->playForegroundImage, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)__this->playForegroundImage, 100.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->playForegroundImage)->Name(::uGetConstString("playForegroundImage"));
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Image*>(__this->playForegroundImage)->Behaviors()), (::app::Fuse::Behavior*)temp800);
    ::uPtr< ::app::Fuse::Controls::Page*>(__this->playPageBackground)->Name(::uGetConstString("playPageBackground"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->playPageBackground)->Children()), (::app::Fuse::Node*)temp808);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->playPageBackground)->Children()), (::app::Fuse::Node*)__this->playBackgroundImage);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->playPageBackground)->Behaviors()), (::app::Fuse::Behavior*)temp801);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::WhileActive*>(temp801)->Animators()), (::app::Fuse::Animations::Animator*)temp803);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp801->Animators()), (::app::Fuse::Animations::Animator*)temp805);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp801->Animators()), (::app::Fuse::Animations::Animator*)temp807);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp801->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp802);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp801->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp804);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(temp801->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp806);
    ::uPtr< ::app::Fuse::Triggers::Actions::Set__float*>(temp802)->Value(0.0f);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp803)->Value(1.0f);
    temp803->Delay_1(2.0);
    temp803->Duration(2.0);
    ::uPtr< ::app::Fuse::Triggers::Actions::Set__float*>(temp804)->Value(0.0f);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp805)->Value(1.0f);
    temp805->Duration(3.0);
    ::uPtr< ::app::Fuse::Triggers::Actions::Set__float*>(temp806)->Value(0.0f);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp807)->Value(1.0f);
    temp807->Delay_1(3.0);
    temp807->Duration(2.0);
    ::uPtr< ::app::Fuse::Controls::Grid*>(temp808)->Rows(::uGetConstString("6*, 3*"));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp808, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)temp808, 100.0f, 1);
    temp808->Padding(::app::Uno::Float4__New_2(NULL, 30.0f, 30.0f, 30.0f, 30.0f));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp808->Children()), (::app::Fuse::Node*)__this->playBackgroundTitle);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp808->Children()), (::app::Fuse::Node*)__this->playBackgroundTextP);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->playBackgroundTitle)->FontSize(34.0f);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->playBackgroundTitle)->TextAlignment(1);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->playBackgroundTitle)->TextColor(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->playBackgroundTitle)->Name(::uGetConstString("playBackgroundTitle"));
    ::app::Uno::Collections::ICollection__Fuse_Effects_Effect::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Text*>(__this->playBackgroundTitle)->Effects()), (::app::Fuse::Effects::Effect*)temp809);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Text*>(__this->playBackgroundTitle)->Behaviors()), (::app::Fuse::Behavior*)temp810);
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->playBackgroundTextP)->Height(80.0f);
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->playBackgroundTextP)->Alignment(12);
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->playBackgroundTextP)->Name(::uGetConstString("playBackgroundTextP"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->playBackgroundTextP)->Children()), (::app::Fuse::Node*)__this->playBackgroundText);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->playBackgroundText)->TextWrapping(1);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->playBackgroundText)->FontSize(36.0f);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->playBackgroundText)->TextAlignment(1);
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->playBackgroundText)->TextColor(::app::Uno::Float4__New_2(NULL, 0.2f, 0.2f, 0.2f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Text*>(__this->playBackgroundText)->Name(::uGetConstString("playBackgroundText"));
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Text*>(__this->playBackgroundText)->Behaviors()), (::app::Fuse::Behavior*)temp811);
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->playBackgroundImage)->StretchMode(5);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)__this->playBackgroundImage, 100.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->Set_1((::app::Fuse::Elements::Element*)__this->playBackgroundImage, 100.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->playBackgroundImage)->Name(::uGetConstString("playBackgroundImage"));
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Image*>(__this->playBackgroundImage)->Behaviors()), (::app::Fuse::Behavior*)temp812);
    __this->RootNode((::app::Fuse::Node*)temp364);
    __this->Theme(::app::Fuse::BasicTheme::BasicTheme__get_Singleton_1(NULL));
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp196);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp197);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp198);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp199);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp200);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp201);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp202);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp203);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp204);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp205);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp206);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp207);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp208);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp209);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp210);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp211);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp212);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp213);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp214);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp215);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp216);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp217);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp218);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp219);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp220);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp221);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp222);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp223);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp224);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp225);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp226);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp227);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp228);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp229);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp230);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp231);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp232);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp233);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp234);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp235);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp236);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp237);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp238);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp239);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp240);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp241);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp242);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp243);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp244);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp245);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp246);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp247);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp248);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp249);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp250);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp251);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp252);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp253);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp254);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp255);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp256);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp257);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp258);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp259);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp260);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp261);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp262);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp263);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp264);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp265);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp266);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp267);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp268);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp269);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp270);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp271);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp272);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp273);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp274);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp275);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp276);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp277);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp278);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp279);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp280);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp281);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp282);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp283);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp284);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp285);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp286);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp287);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp288);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp289);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp290);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp291);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp292);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp293);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp294);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp295);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp296);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp297);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp298);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp299);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp300);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp301);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp302);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp303);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp304);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp305);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp306);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp307);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp308);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp309);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp310);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp311);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp312);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp313);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp314);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp315);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp316);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp317);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp318);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp319);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp320);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp321);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp322);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp323);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp324);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp325);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp326);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp327);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp328);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp329);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp330);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp331);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp332);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp333);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp334);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp335);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp336);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp337);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp338);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp339);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp340);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp341);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp342);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp343);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp344);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp345);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp346);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp347);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp348);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp349);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp350);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp351);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp352);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp353);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp354);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp355);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp356);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp357);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp358);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp359);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp360);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp361);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp362);
    ::app::Uno::Collections::ICollection__Uno_UX_Resource::Add(::uPtr< ::uObject*>(__this->Resources()), temp363);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(__this->Behaviors()), (::app::Fuse::Behavior*)temp194);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(__this->Behaviors()), (::app::Fuse::Behavior*)temp195);
}

MainView* MainView__New_1(::uStatic* __this)
{
    MainView* inst = (MainView*)::uAllocObject(sizeof(MainView), MainView__typeof());
    inst->_ObjInit_3();
    return inst;
}

void MainView__OnEnteringBackground_1(MainView* __this, int appState)
{
    ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("state is "), ::app::Uno::Int::ToString(appState)), 1, ::uGetConstString("/Users/jangwonhee/Documents/Buddha_2/fuse/MainView.uno"), 435);
    __this->AllChannelStatus(true);
}

void MainView__OnEnteringForeground(MainView* __this, int appState)
{
    ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("state is "), ::app::Uno::Int::ToString(appState)), 1, ::uGetConstString("/Users/jangwonhee/Documents/Buddha_2/fuse/MainView.uno"), 440);
    __this->AllChannelStatus(false);
}

void MainView__play(::uStatic* __this, ::uString* bundleKey, ::uString* playerKey, bool loop)
{
    MainView__disposePlayer(NULL, playerKey);
    ::app::Experimental::Audio::Player* player = ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Player*>(MainView__playerDict)->Item(playerKey);
    ::app::Experimental::Audio::Sound* snd;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Sound*>(MainView__soundDict)->TryGetValue(::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, playerKey, ::uGetConstString("_")), bundleKey), &snd))
    {
        ::app::Uno::BundleFile* bundle = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*>(MainView__bundleDict)->Item(bundleKey);
        snd = ::uPtr< ::app::Experimental::Audio::Player*>(player)->CreateSound(bundle);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Sound*>(MainView__soundDict)->Add(::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, playerKey, ::uGetConstString("_")), bundleKey), snd);
    }

    ::app::Experimental::Audio::Channel* channel = ::uPtr< ::app::Experimental::Audio::Player*>(player)->PlaySound(snd, loop);
    ::uPtr< ::app::Experimental::Audio::Channel*>(channel)->Volume(::uPtr< ::app::Uno::Collections::Dictionary__string__float*>(MainView__volumeDict)->Item(playerKey));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel*>(MainView__channelDict)->Add(playerKey, channel);
}

}
