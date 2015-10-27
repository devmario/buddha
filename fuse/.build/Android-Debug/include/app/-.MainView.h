// This file was generated based on '/Users/jangwonhee/Documents/Buddha_2/fuse/MainView.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___MAIN_VIEW_H__
#define __APP___MAIN_VIEW_H__

#include <app/Fuse.App.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Audio { struct Channel; } } }
namespace app { namespace Fuse { namespace Controls { struct Image; } } }
namespace app { namespace Fuse { namespace Controls { struct Page; } } }
namespace app { namespace Fuse { namespace Controls { struct Panel; } } }
namespace app { namespace Fuse { namespace Controls { struct Text; } } }
namespace app { namespace Fuse { namespace Reactive { struct EventBinding; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__bool; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Experimental_Audio_Channel; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Experimental_Audio_Player; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Experimental_Audio_Sound; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__float; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_BundleFile; } } }
namespace app { struct AudioModule; }
namespace app { struct MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property; }
namespace app { struct MainView_Fuse_Controls_TextControl_string_Value_Property; }
namespace app { struct MainView_Fuse_Elements_Element_float_Opacity_Property; }
namespace app { struct MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property; }
namespace app { struct MainView_Fuse_Triggers_WhileBool_bool_Value_Property; }

namespace app {

struct MainView;

extern ::uStaticStrong< ::app::AudioModule*> MainView__AudioModule;
extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Uno_BundleFile*> MainView__bundleDict;
extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel*> MainView__channelDict;
extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__string__bool*> MainView__isPlayDict;
extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Player*> MainView__playerDict;
extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Sound*> MainView__soundDict;
extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__string__float*> MainView__volumeDict;

struct MainView__uType : ::app::Fuse::App__uType
{
};

MainView__uType* MainView__typeof();

void MainView___InitTypes(::uStatic* __this);
void MainView___ObjInit_3(MainView* __this);
void MainView___TypeInit(::uStatic* __this);
void MainView__AddPlayer(MainView* __this, ::uString* key);
void MainView__AllChannelStatus(MainView* __this, bool isPause);
void MainView__changeVolumne(::uStatic* __this, ::uString* key, float volume);
void MainView__disposePlayer(::uStatic* __this, ::uString* key);
::app::Experimental::Audio::Channel* MainView__getChannel(::uStatic* __this, ::uString* key);
void MainView__InitializeUX(MainView* __this);
MainView* MainView__New_1(::uStatic* __this);
void MainView__OnEnteringBackground_1(MainView* __this, int appState);
void MainView__OnEnteringForeground(MainView* __this, int appState);
void MainView__play(::uStatic* __this, ::uString* bundleKey, ::uString* playerKey, bool loop);

struct MainView : ::app::Fuse::App
{
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> helpBtn1_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> helpBtn2_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> helpBtn3_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property*> animIMG_Source_inst;
    ::uStrong< ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property*> temp_Value_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> temp1_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> temp2_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> temp3_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property*> animDesc0_Visibility_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property*> animDesc1_Visibility_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property*> animDesc2_Visibility_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property*> animDesc3_Visibility_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property*> animDesc4_Visibility_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property*> animDesc5_Visibility_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property*> animDesc6_Visibility_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property*> animDesc7_Visibility_inst;
    ::uStrong< ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property*> temp4_Value_inst;
    ::uStrong< ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property*> temp5_Value_inst;
    ::uStrong< ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property*> temp6_Value_inst;
    ::uStrong< ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property*> temp7_Value_inst;
    ::uStrong< ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property*> temp8_Value_inst;
    ::uStrong< ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property*> temp9_Value_inst;
    ::uStrong< ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property*> temp10_Value_inst;
    ::uStrong< ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property*> temp11_Value_inst;
    ::uStrong< ::app::MainView_Fuse_Controls_TextControl_string_Value_Property*> temp12_Value_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> temp13_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> temp14_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> temp15_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> temp16_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> temp17_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Controls_TextControl_string_Value_Property*> temp18_Value_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> temp19_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> temp20_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> temp21_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> temp22_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Controls_TextControl_string_Value_Property*> temp23_Value_inst;
    ::uStrong< ::app::MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property*> playForegroundImage_Source_inst;
    ::uStrong< ::app::MainView_Fuse_Controls_TextControl_string_Value_Property*> playForegroundText_Value_inst;
    ::uStrong< ::app::MainView_Fuse_Controls_TextControl_string_Value_Property*> playForegroundTitle_Value_inst;
    ::uStrong< ::app::MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property*> playBackgroundImage_Source_inst;
    ::uStrong< ::app::MainView_Fuse_Controls_TextControl_string_Value_Property*> playBackgroundText_Value_inst;
    ::uStrong< ::app::MainView_Fuse_Controls_TextControl_string_Value_Property*> playBackgroundTitle_Value_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> playForegroundTitle_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> playForegroundImage_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> playForegroundTextP_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> playBackgroundTextP_Opacity_inst;
    ::uStrong< ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property*> temp24_Value_inst;
    ::uStrong< ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property*> temp25_Value_inst;
    ::uStrong< ::app::Fuse::Controls::Page*> main;
    ::uStrong< ::app::Fuse::Controls::Text*> label;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb0;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb1;
    ::uStrong< ::app::Fuse::Controls::Text*> label1;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb2;
    ::uStrong< ::app::Fuse::Controls::Text*> label2;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb3;
    ::uStrong< ::app::Fuse::Controls::Page*> help;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb5;
    ::uStrong< ::app::Fuse::Controls::Panel*> helpBtn1;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb6;
    ::uStrong< ::app::Fuse::Controls::Panel*> helpBtn2;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb7;
    ::uStrong< ::app::Fuse::Controls::Panel*> helpBtn3;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb8;
    ::uStrong< ::app::Fuse::Controls::Panel*> helpPages;
    ::uStrong< ::app::Fuse::Controls::Page*> helpPage1;
    ::uStrong< ::app::Fuse::Controls::Page*> helpPage2;
    ::uStrong< ::app::Fuse::Controls::Image*> animIMG;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb11;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb12;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb13;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb14;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb15;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb16;
    ::uStrong< ::app::Fuse::Controls::Text*> animDesc0;
    ::uStrong< ::app::Fuse::Controls::Text*> animDesc1;
    ::uStrong< ::app::Fuse::Controls::Text*> animDesc2;
    ::uStrong< ::app::Fuse::Controls::Text*> animDesc3;
    ::uStrong< ::app::Fuse::Controls::Text*> animDesc4;
    ::uStrong< ::app::Fuse::Controls::Text*> animDesc5;
    ::uStrong< ::app::Fuse::Controls::Text*> animDesc6;
    ::uStrong< ::app::Fuse::Controls::Text*> animDesc7;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb9;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb10;
    ::uStrong< ::app::Fuse::Controls::Page*> helpPage3;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb4;
    ::uStrong< ::app::Fuse::Controls::Page*> config;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb18;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb19;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb20;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb21;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb22;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb23;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb24;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb25;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb26;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb27;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb28;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb29;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb30;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb31;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb32;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb33;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb34;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb35;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb36;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb37;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb38;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb39;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb40;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb41;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb42;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb43;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb44;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb45;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb46;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb47;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb48;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb49;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb50;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb17;
    ::uStrong< ::app::Fuse::Controls::Page*> score;
    ::uStrong< ::app::Fuse::Controls::Page*> start;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb53;
    ::uStrong< ::app::Fuse::Controls::Panel*> playPages;
    ::uStrong< ::app::Fuse::Controls::Page*> playPageForeground;
    ::uStrong< ::app::Fuse::Controls::Text*> playForegroundTitle;
    ::uStrong< ::app::Fuse::Controls::Panel*> playForegroundTextP;
    ::uStrong< ::app::Fuse::Controls::Text*> playForegroundText;
    ::uStrong< ::app::Fuse::Controls::Image*> playForegroundImage;
    ::uStrong< ::app::Fuse::Controls::Page*> playPageBackground;
    ::uStrong< ::app::Fuse::Controls::Text*> playBackgroundTitle;
    ::uStrong< ::app::Fuse::Controls::Panel*> playBackgroundTextP;
    ::uStrong< ::app::Fuse::Controls::Text*> playBackgroundText;
    ::uStrong< ::app::Fuse::Controls::Image*> playBackgroundImage;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb54;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb51;
    ::uStrong< ::app::Fuse::Reactive::EventBinding*> temp_eb52;

    void _ObjInit_3() { MainView___ObjInit_3(this); }
    void AddPlayer(::uString* key) { MainView__AddPlayer(this, key); }
    void AllChannelStatus(bool isPause) { MainView__AllChannelStatus(this, isPause); }
    void InitializeUX() { MainView__InitializeUX(this); }
    void OnEnteringBackground_1(int appState) { MainView__OnEnteringBackground_1(this, appState); }
    void OnEnteringForeground(int appState) { MainView__OnEnteringForeground(this, appState); }
};

}


#endif
