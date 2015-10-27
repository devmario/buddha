// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GENERIC_H__
#define __APP_UNO_GENERIC_H__

#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Experimental { namespace Audio { struct Channel; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__bool; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__float; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__float4; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Elements_Visibility; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Transform; } } }
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct DefaultTextRenderer_FontKey; } } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { namespace Effects { struct Effect; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Elements { struct ElementAtlas; } } }
namespace app { namespace Fuse { namespace iOS { struct StatusBarConfig; } } }
namespace app { namespace Fuse { namespace Physics { struct Body; } } }
namespace app { namespace Fuse { namespace Reactive { struct JavaScript; } } }
namespace app { namespace Fuse { struct Behavior; } }
namespace app { namespace Fuse { struct CacheFramebuffer; } }
namespace app { namespace Fuse { struct Font; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Style; } }
namespace app { namespace Fuse { struct Transform; } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct BitmapFont_CharPair; } } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }
namespace app { namespace Uno { namespace UX { struct Resource; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Uno {

struct Generic__uType : ::uClassType
{
};

Generic__uType* Generic__typeof();

bool Generic__Equals__Android_android_view_View(::uStatic* __this, ::app::Android::android::view::View* left, ::app::Android::android::view::View* right);
bool Generic__Equals__char(::uStatic* __this, ::uChar left, ::uChar right);
bool Generic__Equals__Experimental_Audio_Channel(::uStatic* __this, ::app::Experimental::Audio::Channel* left, ::app::Experimental::Audio::Channel* right);
bool Generic__Equals__float2(::uStatic* __this, ::app::Uno::Float2 left, ::app::Uno::Float2 right);
bool Generic__Equals__float3(::uStatic* __this, ::app::Uno::Float3 left, ::app::Uno::Float3 right);
bool Generic__Equals__float4(::uStatic* __this, ::app::Uno::Float4 left, ::app::Uno::Float4 right);
bool Generic__Equals__framebuffer(::uStatic* __this, ::app::Uno::Graphics::Framebuffer* left, ::app::Uno::Graphics::Framebuffer* right);
bool Generic__Equals__Fuse_Animations_IMixerMaster(::uStatic* __this, ::uObject* left, ::uObject* right);
bool Generic__Equals__Fuse_Animations_MixerHandle_bool_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__bool* left, ::app::Fuse::Animations::MixerHandle__bool* right);
bool Generic__Equals__Fuse_Animations_MixerHandle_float_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float* left, ::app::Fuse::Animations::MixerHandle__float* right);
bool Generic__Equals__Fuse_Animations_MixerHandle_float4_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float4* left, ::app::Fuse::Animations::MixerHandle__float4* right);
bool Generic__Equals__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* left, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* right);
bool Generic__Equals__Fuse_Animations_MixerHandle_Fuse_Transform_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* left, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* right);
bool Generic__Equals__Fuse_Behavior(::uStatic* __this, ::app::Fuse::Behavior* left, ::app::Fuse::Behavior* right);
bool Generic__Equals__Fuse_CacheFramebuffer(::uStatic* __this, ::app::Fuse::CacheFramebuffer* left, ::app::Fuse::CacheFramebuffer* right);
bool Generic__Equals__Fuse_Controls_Internal_DefaultTextRenderer_FontKey(::uStatic* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* left, ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* right);
bool Generic__Equals__Fuse_Drawing_Brush(::uStatic* __this, ::app::Fuse::Drawing::Brush* left, ::app::Fuse::Drawing::Brush* right);
bool Generic__Equals__Fuse_Drawing_Stroke(::uStatic* __this, ::app::Fuse::Drawing::Stroke* left, ::app::Fuse::Drawing::Stroke* right);
bool Generic__Equals__Fuse_Effects_Effect(::uStatic* __this, ::app::Fuse::Effects::Effect* left, ::app::Fuse::Effects::Effect* right);
bool Generic__Equals__Fuse_Elements_Element(::uStatic* __this, ::app::Fuse::Elements::Element* left, ::app::Fuse::Elements::Element* right);
bool Generic__Equals__Fuse_Elements_ElementAtlas(::uStatic* __this, ::app::Fuse::Elements::ElementAtlas* left, ::app::Fuse::Elements::ElementAtlas* right);
bool Generic__Equals__Fuse_Font(::uStatic* __this, ::app::Fuse::Font* left, ::app::Fuse::Font* right);
bool Generic__Equals__Fuse_iOS_StatusBarConfig(::uStatic* __this, ::app::Fuse::iOS::StatusBarConfig* left, ::app::Fuse::iOS::StatusBarConfig* right);
bool Generic__Equals__Fuse_Navigation_NavigationEdge(::uStatic* __this, int left, int right);
bool Generic__Equals__Fuse_Node(::uStatic* __this, ::app::Fuse::Node* left, ::app::Fuse::Node* right);
bool Generic__Equals__Fuse_Physics_Body(::uStatic* __this, ::app::Fuse::Physics::Body* left, ::app::Fuse::Physics::Body* right);
bool Generic__Equals__Fuse_Physics_IRule(::uStatic* __this, ::uObject* left, ::uObject* right);
bool Generic__Equals__Fuse_Reactive_JavaScript(::uStatic* __this, ::app::Fuse::Reactive::JavaScript* left, ::app::Fuse::Reactive::JavaScript* right);
bool Generic__Equals__Fuse_Resources_IMemoryResource(::uStatic* __this, ::uObject* left, ::uObject* right);
bool Generic__Equals__Fuse_Scripting_INameListener(::uStatic* __this, ::uObject* left, ::uObject* right);
bool Generic__Equals__Fuse_Style(::uStatic* __this, ::app::Fuse::Style* left, ::app::Fuse::Style* right);
bool Generic__Equals__Fuse_Transform(::uStatic* __this, ::app::Fuse::Transform* left, ::app::Fuse::Transform* right);
bool Generic__Equals__int(::uStatic* __this, int left, int right);
bool Generic__Equals__int2(::uStatic* __this, ::app::Uno::Int2 left, ::app::Uno::Int2 right);
bool Generic__Equals__object(::uStatic* __this, ::uObject* left, ::uObject* right);
bool Generic__Equals__string(::uStatic* __this, ::uString* left, ::uString* right);
bool Generic__Equals__Uno_Action(::uStatic* __this, ::uDelegate* left, ::uDelegate* right);
bool Generic__Equals__Uno_Content_Fonts_BitmapFont_CharPair(::uStatic* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair left, ::app::Uno::Content::Fonts::BitmapFont_CharPair right);
bool Generic__Equals__Uno_EventHandler(::uStatic* __this, ::uDelegate* left, ::uDelegate* right);
bool Generic__Equals__Uno_Type(::uStatic* __this, ::uType* left, ::uType* right);
bool Generic__Equals__Uno_UX_FileSource(::uStatic* __this, ::app::Uno::UX::FileSource* left, ::app::Uno::UX::FileSource* right);
bool Generic__Equals__Uno_UX_Resource(::uStatic* __this, ::app::Uno::UX::Resource* left, ::app::Uno::UX::Resource* right);

}}


#endif
