// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_GENERIC_EQUALS_IMPL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_GENERIC_EQUALS_IMPL_H__

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
namespace Runtime {
namespace Implementation {

struct GenericEqualsImpl__uType : ::uClassType
{
};

GenericEqualsImpl__uType* GenericEqualsImpl__typeof();

bool GenericEqualsImpl__Equals__Android_android_view_View(::uStatic* __this, ::app::Android::android::view::View* left_, ::app::Android::android::view::View* right_);
bool GenericEqualsImpl__Equals__char(::uStatic* __this, ::uChar left_, ::uChar right_);
bool GenericEqualsImpl__Equals__Experimental_Audio_Channel(::uStatic* __this, ::app::Experimental::Audio::Channel* left_, ::app::Experimental::Audio::Channel* right_);
bool GenericEqualsImpl__Equals__float2(::uStatic* __this, ::app::Uno::Float2 left_, ::app::Uno::Float2 right_);
bool GenericEqualsImpl__Equals__float3(::uStatic* __this, ::app::Uno::Float3 left_, ::app::Uno::Float3 right_);
bool GenericEqualsImpl__Equals__float4(::uStatic* __this, ::app::Uno::Float4 left_, ::app::Uno::Float4 right_);
bool GenericEqualsImpl__Equals__framebuffer(::uStatic* __this, ::app::Uno::Graphics::Framebuffer* left_, ::app::Uno::Graphics::Framebuffer* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_IMixerMaster(::uStatic* __this, ::uObject* left_, ::uObject* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_bool_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__bool* left_, ::app::Fuse::Animations::MixerHandle__bool* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_float_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float* left_, ::app::Fuse::Animations::MixerHandle__float* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_float4_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float4* left_, ::app::Fuse::Animations::MixerHandle__float4* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Transform_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* right_);
bool GenericEqualsImpl__Equals__Fuse_Behavior(::uStatic* __this, ::app::Fuse::Behavior* left_, ::app::Fuse::Behavior* right_);
bool GenericEqualsImpl__Equals__Fuse_CacheFramebuffer(::uStatic* __this, ::app::Fuse::CacheFramebuffer* left_, ::app::Fuse::CacheFramebuffer* right_);
bool GenericEqualsImpl__Equals__Fuse_Controls_Internal_DefaultTextRenderer_FontKey(::uStatic* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* left_, ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* right_);
bool GenericEqualsImpl__Equals__Fuse_Drawing_Brush(::uStatic* __this, ::app::Fuse::Drawing::Brush* left_, ::app::Fuse::Drawing::Brush* right_);
bool GenericEqualsImpl__Equals__Fuse_Drawing_Stroke(::uStatic* __this, ::app::Fuse::Drawing::Stroke* left_, ::app::Fuse::Drawing::Stroke* right_);
bool GenericEqualsImpl__Equals__Fuse_Effects_Effect(::uStatic* __this, ::app::Fuse::Effects::Effect* left_, ::app::Fuse::Effects::Effect* right_);
bool GenericEqualsImpl__Equals__Fuse_Elements_Element(::uStatic* __this, ::app::Fuse::Elements::Element* left_, ::app::Fuse::Elements::Element* right_);
bool GenericEqualsImpl__Equals__Fuse_Elements_ElementAtlas(::uStatic* __this, ::app::Fuse::Elements::ElementAtlas* left_, ::app::Fuse::Elements::ElementAtlas* right_);
bool GenericEqualsImpl__Equals__Fuse_Font(::uStatic* __this, ::app::Fuse::Font* left_, ::app::Fuse::Font* right_);
bool GenericEqualsImpl__Equals__Fuse_iOS_StatusBarConfig(::uStatic* __this, ::app::Fuse::iOS::StatusBarConfig* left_, ::app::Fuse::iOS::StatusBarConfig* right_);
bool GenericEqualsImpl__Equals__Fuse_Navigation_NavigationEdge(::uStatic* __this, int left_, int right_);
bool GenericEqualsImpl__Equals__Fuse_Node(::uStatic* __this, ::app::Fuse::Node* left_, ::app::Fuse::Node* right_);
bool GenericEqualsImpl__Equals__Fuse_Physics_Body(::uStatic* __this, ::app::Fuse::Physics::Body* left_, ::app::Fuse::Physics::Body* right_);
bool GenericEqualsImpl__Equals__Fuse_Physics_IRule(::uStatic* __this, ::uObject* left_, ::uObject* right_);
bool GenericEqualsImpl__Equals__Fuse_Reactive_JavaScript(::uStatic* __this, ::app::Fuse::Reactive::JavaScript* left_, ::app::Fuse::Reactive::JavaScript* right_);
bool GenericEqualsImpl__Equals__Fuse_Resources_IMemoryResource(::uStatic* __this, ::uObject* left_, ::uObject* right_);
bool GenericEqualsImpl__Equals__Fuse_Scripting_INameListener(::uStatic* __this, ::uObject* left_, ::uObject* right_);
bool GenericEqualsImpl__Equals__Fuse_Style(::uStatic* __this, ::app::Fuse::Style* left_, ::app::Fuse::Style* right_);
bool GenericEqualsImpl__Equals__Fuse_Transform(::uStatic* __this, ::app::Fuse::Transform* left_, ::app::Fuse::Transform* right_);
bool GenericEqualsImpl__Equals__int(::uStatic* __this, int left_, int right_);
bool GenericEqualsImpl__Equals__int2(::uStatic* __this, ::app::Uno::Int2 left_, ::app::Uno::Int2 right_);
bool GenericEqualsImpl__Equals__object(::uStatic* __this, ::uObject* left_, ::uObject* right_);
bool GenericEqualsImpl__Equals__string(::uStatic* __this, ::uString* left_, ::uString* right_);
bool GenericEqualsImpl__Equals__Uno_Action(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Uno_Content_Fonts_BitmapFont_CharPair(::uStatic* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair left_, ::app::Uno::Content::Fonts::BitmapFont_CharPair right_);
bool GenericEqualsImpl__Equals__Uno_EventHandler(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Uno_Type(::uStatic* __this, ::uType* left_, ::uType* right_);
bool GenericEqualsImpl__Equals__Uno_UX_FileSource(::uStatic* __this, ::app::Uno::UX::FileSource* left_, ::app::Uno::UX::FileSource* right_);
bool GenericEqualsImpl__Equals__Uno_UX_Resource(::uStatic* __this, ::app::Uno::UX::Resource* left_, ::app::Uno::UX::Resource* right_);

}}}}


#endif
