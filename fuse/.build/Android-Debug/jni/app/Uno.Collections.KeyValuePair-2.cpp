#include <app/Experimental.Audio.Channel.h>
#include <app/Fuse.Drawing.PolygonFiller.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Gestures.Internal.EdgeSwiper.h>
#include <app/Fuse.Input.Capturer.h>
#include <app/Fuse.Input.Pointer_PointerRecord.h>
#include <app/Fuse.Navigation.NavigationEdge.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.IList__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing-202bf65.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Navigation_NavigationEdge__F-2f5b6bc5.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Pointer_PointerRecord.h>
#include <app/Uno.Collections.KeyValuePair__int__Uno_Collections_IList_Fuse_I-7b6b2bd.h>
#include <app/Uno.Collections.KeyValuePair__string__Experimental_Audio_Channel.h>
#include <app/Uno.Collections.KeyValuePair__string__string.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Collections_List_object_.h>
#include <app/Uno.Collections.List__object.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__uType* KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__typeof()
{
    static ::uStaticStrong<KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__uType*)::uAllocStructType(sizeof(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__uType), "Uno.Collections.KeyValuePair<char,Uno.Content.Fonts.RenderedGlyph>", sizeof(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph), 0, 1, 0);

    type->SetStrongRefs(
        "_value.Bitmap", offsetof(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph, _value.Bitmap));

    return type;
}

void KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph* __this, ::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value)
{
    __this->_key = key;
    __this->_value = value;
}

::uChar KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__get_Key(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
    return __this->_key;
}

::app::Uno::Content::Fonts::RenderedGlyph KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__get_Value(KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
    return __this->_value;
}

KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__New_1(::uStatic* __this, ::uChar key, ::app::Uno::Content::Fonts::RenderedGlyph value)
{
    KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph inst = ::uDefault< KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof()
{
    static ::uStaticStrong<KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*)::uAllocStructType(sizeof(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType), "Uno.Collections.KeyValuePair<Fuse.Drawing.Stroke,Fuse.Drawing.PolygonFiller>", sizeof(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _key),
        "_value", offsetof(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _value));

    return type;
}

void KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::Fuse::Drawing::Stroke* KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Key(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    return __this->_key;
}

::app::Fuse::Drawing::PolygonFiller* KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Value(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    return __this->_value;
}

KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(::uStatic* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value)
{
    KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller inst = ::uDefault< KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType* KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof()
{
    static ::uStaticStrong<KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType*)::uAllocStructType(sizeof(KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType), "Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge,Fuse.Gestures.Internal.EdgeSwiper>", sizeof(KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper), 0, 1, 0);

    type->SetStrongRefs(
        "_value", offsetof(KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper, _value));

    return type;
}

void KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper___ObjInit(KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this, int key, ::app::Fuse::Gestures::Internal::EdgeSwiper* value)
{
    __this->_key = key;
    __this->_value = value;
}

::app::Fuse::Gestures::Internal::EdgeSwiper* KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__get_Value(KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this)
{
    return __this->_value;
}

KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__New_1(::uStatic* __this, int key, ::app::Fuse::Gestures::Internal::EdgeSwiper* value)
{
    KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper inst = ::uDefault< KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__int__Fuse_Input_Capturer__uType* KeyValuePair__int__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong<KeyValuePair__int__Fuse_Input_Capturer__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__int__Fuse_Input_Capturer__uType*)::uAllocStructType(sizeof(KeyValuePair__int__Fuse_Input_Capturer__uType), "Uno.Collections.KeyValuePair<int,Fuse.Input.Capturer>", sizeof(KeyValuePair__int__Fuse_Input_Capturer), 0, 1, 0);

    type->SetStrongRefs(
        "_value", offsetof(KeyValuePair__int__Fuse_Input_Capturer, _value));

    return type;
}

void KeyValuePair__int__Fuse_Input_Capturer___ObjInit(KeyValuePair__int__Fuse_Input_Capturer* __this, int key, ::app::Fuse::Input::Capturer* value)
{
    __this->_key = key;
    __this->_value = value;
}

int KeyValuePair__int__Fuse_Input_Capturer__get_Key(KeyValuePair__int__Fuse_Input_Capturer* __this)
{
    return __this->_key;
}

::app::Fuse::Input::Capturer* KeyValuePair__int__Fuse_Input_Capturer__get_Value(KeyValuePair__int__Fuse_Input_Capturer* __this)
{
    return __this->_value;
}

KeyValuePair__int__Fuse_Input_Capturer KeyValuePair__int__Fuse_Input_Capturer__New_1(::uStatic* __this, int key, ::app::Fuse::Input::Capturer* value)
{
    KeyValuePair__int__Fuse_Input_Capturer inst = ::uDefault< KeyValuePair__int__Fuse_Input_Capturer>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__uType* KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__typeof()
{
    static ::uStaticStrong<KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__uType*)::uAllocStructType(sizeof(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__uType), "Uno.Collections.KeyValuePair<int,Fuse.Input.Pointer_PointerRecord>", sizeof(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord), 0, 1, 0);

    type->SetStrongRefs(
        "_value", offsetof(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord, _value));

    return type;
}

void KeyValuePair__int__Fuse_Input_Pointer_PointerRecord___ObjInit(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord* __this, int key, ::app::Fuse::Input::Pointer_PointerRecord* value)
{
    __this->_key = key;
    __this->_value = value;
}

int KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__get_Key(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord* __this)
{
    return __this->_key;
}

KeyValuePair__int__Fuse_Input_Pointer_PointerRecord KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__New_1(::uStatic* __this, int key, ::app::Fuse::Input::Pointer_PointerRecord* value)
{
    KeyValuePair__int__Fuse_Input_Pointer_PointerRecord inst = ::uDefault< KeyValuePair__int__Fuse_Input_Pointer_PointerRecord>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof()
{
    static ::uStaticStrong<KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___uType*)::uAllocStructType(sizeof(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___uType), "Uno.Collections.KeyValuePair<int,Uno.Collections.IList<Fuse.Input.Capturer>>", sizeof(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_), 0, 1, 0);

    type->SetStrongRefs(
        "_value", offsetof(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_, _value));

    return type;
}

void KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, int key, ::uObject* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uObject* KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Value(KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
    return __this->_value;
}

KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(::uStatic* __this, int key, ::uObject* value)
{
    KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ inst = ::uDefault< KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__Experimental_Audio_Channel__uType* KeyValuePair__string__Experimental_Audio_Channel__typeof()
{
    static ::uStaticStrong<KeyValuePair__string__Experimental_Audio_Channel__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__Experimental_Audio_Channel__uType*)::uAllocStructType(sizeof(KeyValuePair__string__Experimental_Audio_Channel__uType), "Uno.Collections.KeyValuePair<string,Experimental.Audio.Channel>", sizeof(KeyValuePair__string__Experimental_Audio_Channel), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__Experimental_Audio_Channel, _key),
        "_value", offsetof(KeyValuePair__string__Experimental_Audio_Channel, _value));

    return type;
}

void KeyValuePair__string__Experimental_Audio_Channel___ObjInit(KeyValuePair__string__Experimental_Audio_Channel* __this, ::uString* key, ::app::Experimental::Audio::Channel* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__Experimental_Audio_Channel__get_Key(KeyValuePair__string__Experimental_Audio_Channel* __this)
{
    return __this->_key;
}

::app::Experimental::Audio::Channel* KeyValuePair__string__Experimental_Audio_Channel__get_Value(KeyValuePair__string__Experimental_Audio_Channel* __this)
{
    return __this->_value;
}

KeyValuePair__string__Experimental_Audio_Channel KeyValuePair__string__Experimental_Audio_Channel__New_1(::uStatic* __this, ::uString* key, ::app::Experimental::Audio::Channel* value)
{
    KeyValuePair__string__Experimental_Audio_Channel inst = ::uDefault< KeyValuePair__string__Experimental_Audio_Channel>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__string__uType* KeyValuePair__string__string__typeof()
{
    static ::uStaticStrong<KeyValuePair__string__string__uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__string__uType*)::uAllocStructType(sizeof(KeyValuePair__string__string__uType), "Uno.Collections.KeyValuePair<string,string>", sizeof(KeyValuePair__string__string), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__string, _key),
        "_value", offsetof(KeyValuePair__string__string, _value));

    return type;
}

void KeyValuePair__string__string___ObjInit(KeyValuePair__string__string* __this, ::uString* key, ::uString* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__string__get_Key(KeyValuePair__string__string* __this)
{
    return __this->_key;
}

::uString* KeyValuePair__string__string__get_Value(KeyValuePair__string__string* __this)
{
    return __this->_value;
}

KeyValuePair__string__string KeyValuePair__string__string__New_1(::uStatic* __this, ::uString* key, ::uString* value)
{
    KeyValuePair__string__string inst = ::uDefault< KeyValuePair__string__string>();
    inst._ObjInit(key, value);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyValuePair__string__Uno_Collections_List_object___uType* KeyValuePair__string__Uno_Collections_List_object___typeof()
{
    static ::uStaticStrong<KeyValuePair__string__Uno_Collections_List_object___uType*> type;
    if (type != NULL) return type;

    type = (KeyValuePair__string__Uno_Collections_List_object___uType*)::uAllocStructType(sizeof(KeyValuePair__string__Uno_Collections_List_object___uType), "Uno.Collections.KeyValuePair<string,Uno.Collections.List<object>>", sizeof(KeyValuePair__string__Uno_Collections_List_object_), 0, 2, 0);

    type->SetStrongRefs(
        "_key", offsetof(KeyValuePair__string__Uno_Collections_List_object_, _key),
        "_value", offsetof(KeyValuePair__string__Uno_Collections_List_object_, _value));

    return type;
}

void KeyValuePair__string__Uno_Collections_List_object____ObjInit(KeyValuePair__string__Uno_Collections_List_object_* __this, ::uString* key, ::app::Uno::Collections::List__object* value)
{
    __this->_key = key;
    __this->_value = value;
}

::uString* KeyValuePair__string__Uno_Collections_List_object___get_Key(KeyValuePair__string__Uno_Collections_List_object_* __this)
{
    return __this->_key;
}

::app::Uno::Collections::List__object* KeyValuePair__string__Uno_Collections_List_object___get_Value(KeyValuePair__string__Uno_Collections_List_object_* __this)
{
    return __this->_value;
}

KeyValuePair__string__Uno_Collections_List_object_ KeyValuePair__string__Uno_Collections_List_object___New_1(::uStatic* __this, ::uString* key, ::app::Uno::Collections::List__object* value)
{
    KeyValuePair__string__Uno_Collections_List_object_ inst = ::uDefault< KeyValuePair__string__Uno_Collections_List_object_>();
    inst._ObjInit(key, value);
    return inst;
}

}}}
