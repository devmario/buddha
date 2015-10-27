#include <app/Android.android.graphics.Bitmap.h>
#include <app/Android.android.graphics.Typeface.h>
#include <app/Android.android.view.View.h>
#include <app/Experimental.Audio.Channel.h>
#include <app/Experimental.Audio.Player.h>
#include <app/Experimental.Audio.Sound.h>
#include <app/Fuse.Controls.Internal.DefaultTextRenderer.h>
#include <app/Fuse.Drawing.PolygonFiller.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Gestures.Internal.EdgeSwiper.h>
#include <app/Fuse.IFlush.h>
#include <app/Fuse.Input.Capturer.h>
#include <app/Fuse.Navigation.NavigationEdge.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Scripting.Callback.h>
#include <app/Uno.Bool.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Android_android_view_View__Fuse_Node.h>
#include <app/Uno.Collections.Dictionary2_Bucket__char__float.h>
#include <app/Uno.Collections.Dictionary2_Bucket__char__Uno_Content_Fonts_Ren-26fd1cb9.h>
#include <app/Uno.Collections.Dictionary2_Bucket__framebuffer__bool.h>
#include <app/Uno.Collections.Dictionary2_Bucket__framebuffer__int.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_D-931b1144.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Font__Fuse_Controls_In-da4f6a89.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_IFlush__bool.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Navigation_NavigationE-bacca3e4.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Node__bool.h>
#include <app/Uno.Collections.Dictionary2_Bucket__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.Dictionary2_Bucket__int__Fuse_Scripting_Callback.h>
#include <app/Uno.Collections.Dictionary2_Bucket__int__string.h>
#include <app/Uno.Collections.Dictionary2_Bucket__int__Uno_Collections_IList_-98cf049c.h>
#include <app/Uno.Collections.Dictionary2_Bucket__object__object.h>
#include <app/Uno.Collections.Dictionary2_Bucket__object__string.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Android_android_gra-bbe12d5c.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Android_android_gra-ea325334.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__bool.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Experimental_Audio_Channel.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Experimental_Audio_Player.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Experimental_Audio_Sound.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__float.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__int.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__object.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__string.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_BundleFile.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Collections_Lis-466067fe.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Collections_Lis-9fb18561.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Collections_List_object_.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Runtime_Impleme-a1c3446b.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_WeakReference_F-a7ba31a5.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Uno_Type__object.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Uno_UX_FileSource__Uno_Cont-bc22b082.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Uno_UX_FileSource__Uno_Weak-44ffd17c.h>
#include <app/Uno.Collections.Dictionary2_BucketState.h>
#include <app/Uno.Collections.IList__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.List__Fuse_Scripting_INameListener.h>
#include <app/Uno.Collections.List__object.h>
#include <app/Uno.Collections.List__Uno_Action.h>
#include <app/Uno.Content.Fonts.FontFace.h>
#include <app/Uno.Float.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.WeakReference__Fuse_Resources_FileImageSourceImpl.h>
#include <app/Uno.WeakReference__Fuse_Resources_HttpImageSourceImpl.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Android_android_view_View__Fuse_Node__uType* Dictionary2_Bucket__Android_android_view_View__Fuse_Node__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Android_android_view_View__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Android_android_view_View__Fuse_Node__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Android_android_view_View__Fuse_Node__uType), "Uno.Collections.Dictionary<Android.android.view.View,Fuse.Node>.Bucket", sizeof(Dictionary2_Bucket__Android_android_view_View__Fuse_Node), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Android_android_view_View__Fuse_Node, Key),
        "Value", offsetof(Dictionary2_Bucket__Android_android_view_View__Fuse_Node, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__char__float__uType* Dictionary2_Bucket__char__float__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__char__float__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__char__float__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__char__float__uType), "Uno.Collections.Dictionary<char,float>.Bucket", sizeof(Dictionary2_Bucket__char__float), 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__uType* Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__uType), "Uno.Collections.Dictionary<char,Uno.Content.Fonts.RenderedGlyph>.Bucket", sizeof(Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph), 0, 1, 0);

    type->SetStrongRefs(
        "Value.Bitmap", offsetof(Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph, Value.Bitmap));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__framebuffer__bool__uType* Dictionary2_Bucket__framebuffer__bool__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__framebuffer__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__framebuffer__bool__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__framebuffer__bool__uType), "Uno.Collections.Dictionary<framebuffer,bool>.Bucket", sizeof(Dictionary2_Bucket__framebuffer__bool), 0, 1, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__framebuffer__bool, Key));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__framebuffer__int__uType* Dictionary2_Bucket__framebuffer__int__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__framebuffer__int__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__framebuffer__int__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__framebuffer__int__uType), "Uno.Collections.Dictionary<framebuffer,int>.Bucket", sizeof(Dictionary2_Bucket__framebuffer__int), 0, 1, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__framebuffer__int, Key));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType), "Uno.Collections.Dictionary<Fuse.Drawing.Stroke,Fuse.Drawing.PolygonFiller>.Bucket", sizeof(Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, Key),
        "Value", offsetof(Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType* Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType), "Uno.Collections.Dictionary<Fuse.Font,Fuse.Controls.Internal.DefaultTextRenderer>.Bucket", sizeof(Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer, Key),
        "Value", offsetof(Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Fuse_IFlush__bool__uType* Dictionary2_Bucket__Fuse_IFlush__bool__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Fuse_IFlush__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Fuse_IFlush__bool__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Fuse_IFlush__bool__uType), "Uno.Collections.Dictionary<Fuse.IFlush,bool>.Bucket", sizeof(Dictionary2_Bucket__Fuse_IFlush__bool), 0, 1, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Fuse_IFlush__bool, Key));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType* Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType), "Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge,Fuse.Gestures.Internal.EdgeSwiper>.Bucket", sizeof(Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper), 0, 1, 0);

    type->SetStrongRefs(
        "Value", offsetof(Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Fuse_Node__bool__uType* Dictionary2_Bucket__Fuse_Node__bool__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Fuse_Node__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Fuse_Node__bool__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Fuse_Node__bool__uType), "Uno.Collections.Dictionary<Fuse.Node,bool>.Bucket", sizeof(Dictionary2_Bucket__Fuse_Node__bool), 0, 1, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Fuse_Node__bool, Key));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__int__Fuse_Input_Capturer__uType* Dictionary2_Bucket__int__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__int__Fuse_Input_Capturer__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__int__Fuse_Input_Capturer__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__int__Fuse_Input_Capturer__uType), "Uno.Collections.Dictionary<int,Fuse.Input.Capturer>.Bucket", sizeof(Dictionary2_Bucket__int__Fuse_Input_Capturer), 0, 1, 0);

    type->SetStrongRefs(
        "Value", offsetof(Dictionary2_Bucket__int__Fuse_Input_Capturer, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__int__Fuse_Scripting_Callback__uType* Dictionary2_Bucket__int__Fuse_Scripting_Callback__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__int__Fuse_Scripting_Callback__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__int__Fuse_Scripting_Callback__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__int__Fuse_Scripting_Callback__uType), "Uno.Collections.Dictionary<int,Fuse.Scripting.Callback>.Bucket", sizeof(Dictionary2_Bucket__int__Fuse_Scripting_Callback), 0, 1, 0);

    type->SetStrongRefs(
        "Value", offsetof(Dictionary2_Bucket__int__Fuse_Scripting_Callback, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__int__string__uType* Dictionary2_Bucket__int__string__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__int__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__int__string__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__int__string__uType), "Uno.Collections.Dictionary<int,string>.Bucket", sizeof(Dictionary2_Bucket__int__string), 0, 1, 0);

    type->SetStrongRefs(
        "Value", offsetof(Dictionary2_Bucket__int__string, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___uType), "Uno.Collections.Dictionary<int,Uno.Collections.IList<Fuse.Input.Capturer>>.Bucket", sizeof(Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_), 0, 1, 0);

    type->SetStrongRefs(
        "Value", offsetof(Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__object__object__uType* Dictionary2_Bucket__object__object__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__object__object__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__object__object__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__object__object__uType), "Uno.Collections.Dictionary<object,object>.Bucket", sizeof(Dictionary2_Bucket__object__object), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__object__object, Key),
        "Value", offsetof(Dictionary2_Bucket__object__object, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__object__string__uType* Dictionary2_Bucket__object__string__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__object__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__object__string__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__object__string__uType), "Uno.Collections.Dictionary<object,string>.Bucket", sizeof(Dictionary2_Bucket__object__string), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__object__string, Key),
        "Value", offsetof(Dictionary2_Bucket__object__string, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Android_android_graphics_Bitmap__uType* Dictionary2_Bucket__string__Android_android_graphics_Bitmap__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Android_android_graphics_Bitmap__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Android_android_graphics_Bitmap__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Android_android_graphics_Bitmap__uType), "Uno.Collections.Dictionary<string,Android.android.graphics.Bitmap>.Bucket", sizeof(Dictionary2_Bucket__string__Android_android_graphics_Bitmap), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Android_android_graphics_Bitmap, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Android_android_graphics_Bitmap, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Android_android_graphics_Typeface__uType* Dictionary2_Bucket__string__Android_android_graphics_Typeface__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Android_android_graphics_Typeface__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Android_android_graphics_Typeface__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Android_android_graphics_Typeface__uType), "Uno.Collections.Dictionary<string,Android.android.graphics.Typeface>.Bucket", sizeof(Dictionary2_Bucket__string__Android_android_graphics_Typeface), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Android_android_graphics_Typeface, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Android_android_graphics_Typeface, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__bool__uType* Dictionary2_Bucket__string__bool__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__bool__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__bool__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__bool__uType), "Uno.Collections.Dictionary<string,bool>.Bucket", sizeof(Dictionary2_Bucket__string__bool), 0, 1, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__bool, Key));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Experimental_Audio_Channel__uType* Dictionary2_Bucket__string__Experimental_Audio_Channel__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Experimental_Audio_Channel__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Experimental_Audio_Channel__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Experimental_Audio_Channel__uType), "Uno.Collections.Dictionary<string,Experimental.Audio.Channel>.Bucket", sizeof(Dictionary2_Bucket__string__Experimental_Audio_Channel), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Experimental_Audio_Channel, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Experimental_Audio_Channel, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Experimental_Audio_Player__uType* Dictionary2_Bucket__string__Experimental_Audio_Player__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Experimental_Audio_Player__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Experimental_Audio_Player__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Experimental_Audio_Player__uType), "Uno.Collections.Dictionary<string,Experimental.Audio.Player>.Bucket", sizeof(Dictionary2_Bucket__string__Experimental_Audio_Player), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Experimental_Audio_Player, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Experimental_Audio_Player, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Experimental_Audio_Sound__uType* Dictionary2_Bucket__string__Experimental_Audio_Sound__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Experimental_Audio_Sound__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Experimental_Audio_Sound__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Experimental_Audio_Sound__uType), "Uno.Collections.Dictionary<string,Experimental.Audio.Sound>.Bucket", sizeof(Dictionary2_Bucket__string__Experimental_Audio_Sound), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Experimental_Audio_Sound, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Experimental_Audio_Sound, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__float__uType* Dictionary2_Bucket__string__float__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__float__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__float__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__float__uType), "Uno.Collections.Dictionary<string,float>.Bucket", sizeof(Dictionary2_Bucket__string__float), 0, 1, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__float, Key));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__int__uType* Dictionary2_Bucket__string__int__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__int__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__int__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__int__uType), "Uno.Collections.Dictionary<string,int>.Bucket", sizeof(Dictionary2_Bucket__string__int), 0, 1, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__int, Key));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__object__uType* Dictionary2_Bucket__string__object__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__object__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__object__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__object__uType), "Uno.Collections.Dictionary<string,object>.Bucket", sizeof(Dictionary2_Bucket__string__object), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__object, Key),
        "Value", offsetof(Dictionary2_Bucket__string__object, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__string__uType* Dictionary2_Bucket__string__string__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__string__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__string__uType), "Uno.Collections.Dictionary<string,string>.Bucket", sizeof(Dictionary2_Bucket__string__string), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__string, Key),
        "Value", offsetof(Dictionary2_Bucket__string__string, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Uno_BundleFile__uType* Dictionary2_Bucket__string__Uno_BundleFile__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Uno_BundleFile__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Uno_BundleFile__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Uno_BundleFile__uType), "Uno.Collections.Dictionary<string,Uno.BundleFile>.Bucket", sizeof(Dictionary2_Bucket__string__Uno_BundleFile), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Uno_BundleFile, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Uno_BundleFile, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType* Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType), "Uno.Collections.Dictionary<string,Uno.Collections.List<Fuse.Scripting.INameListener>>.Bucket", sizeof(Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Uno_Collections_List_object___uType* Dictionary2_Bucket__string__Uno_Collections_List_object___typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Uno_Collections_List_object___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Uno_Collections_List_object___uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Uno_Collections_List_object___uType), "Uno.Collections.Dictionary<string,Uno.Collections.List<object>>.Bucket", sizeof(Dictionary2_Bucket__string__Uno_Collections_List_object_), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Uno_Collections_List_object_, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Uno_Collections_List_object_, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___uType* Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___uType), "Uno.Collections.Dictionary<string,Uno.Collections.List<Uno.Action>>.Bucket", sizeof(Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action_, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType* Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType), "Uno.Collections.Dictionary<string,Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram>.Bucket", sizeof(Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType* Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType), "Uno.Collections.Dictionary<string,Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>.Bucket", sizeof(Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_, Key),
        "Value", offsetof(Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Uno_Type__object__uType* Dictionary2_Bucket__Uno_Type__object__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Uno_Type__object__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Uno_Type__object__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Uno_Type__object__uType), "Uno.Collections.Dictionary<Uno.Type,object>.Bucket", sizeof(Dictionary2_Bucket__Uno_Type__object), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Uno_Type__object, Key),
        "Value", offsetof(Dictionary2_Bucket__Uno_Type__object, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType* Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType), "Uno.Collections.Dictionary<Uno.UX.FileSource,Uno.Content.Fonts.FontFace>.Bucket", sizeof(Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace, Key),
        "Value", offsetof(Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace, Value));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType* Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof()
{
    static ::uStaticStrong<Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType*)::uAllocStructType(sizeof(Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType), "Uno.Collections.Dictionary<Uno.UX.FileSource,Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>.Bucket", sizeof(Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_), 0, 2, 0);

    type->SetStrongRefs(
        "Key", offsetof(Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_, Key),
        "Value", offsetof(Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_, Value));

    return type;
}

}}}
