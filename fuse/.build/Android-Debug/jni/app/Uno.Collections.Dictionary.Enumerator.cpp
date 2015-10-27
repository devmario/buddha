#include <app/Experimental.Audio.Channel.h>
#include <app/Fuse.Drawing.PolygonFiller.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Gestures.Internal.EdgeSwiper.h>
#include <app/Fuse.Input.Capturer.h>
#include <app/Fuse.Navigation.NavigationEdge.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__char__Uno_Content_Fonts_RenderedGlyph.h>
#include <app/Uno.Collections.Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_P-f183901b.h>
#include <app/Uno.Collections.Dictionary__Fuse_Navigation_NavigationEdge__Fus-e569bafb.h>
#include <app/Uno.Collections.Dictionary__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.Dictionary__int__Uno_Collections_IList_Fuse_Inp-f7378373.h>
#include <app/Uno.Collections.Dictionary__string__Experimental_Audio_Channel.h>
#include <app/Uno.Collections.Dictionary__string__string.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Collections_List_object_.h>
#include <app/Uno.Collections.Dictionary2_Bucket__char__Uno_Content_Fonts_Ren-26fd1cb9.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_D-931b1144.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Navigation_NavigationE-bacca3e4.h>
#include <app/Uno.Collections.Dictionary2_Bucket__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.Dictionary2_Bucket__int__Uno_Collections_IList_-98cf049c.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Experimental_Audio_Channel.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__string.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Collections_List_object_.h>
#include <app/Uno.Collections.Dictionary2_BucketState.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__char__Uno_Content_Fonts-4ed8c79f.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fu-8962d4aa.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Navigation_Navigat-7ac99ca.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__int__Uno_Collections_IL-8f16c802.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__string__Experimental_Au-c146112c.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__string__string.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__string__Uno_Collections-1b08b4db.h>
#include <app/Uno.Collections.IList__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.List__object.h>
#include <app/Uno.Content.Fonts.RenderedGlyph.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__uType* Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__typeof()
{
    static ::uStaticStrong<Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__uType*)::uAllocStructType(sizeof(Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__uType), "Uno.Collections.Dictionary<char,Uno.Content.Fonts.RenderedGlyph>.Enumerator", sizeof(Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__uType, __interface_1));

    type->SetStrongRefs(
        "_current._value.Bitmap", offsetof(Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph, _current._value.Bitmap),
        "_source", offsetof(Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph, _source));

    return type;
}

void Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__Dispose(Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
}

::app::Uno::Collections::KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__get_Current(Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
    return __this->_current;
}

bool Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__MoveNext(Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph>(__this->_iterator);
    __this->_current = ::app::Uno::Collections::KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__New_1(NULL, bucket.Key, bucket.Value);
    return true;
}

Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* source)
{
    Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph inst = ::uDefault< Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof()
{
    static ::uStaticStrong<Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*)::uAllocStructType(sizeof(Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType), "Uno.Collections.Dictionary<Fuse.Drawing.Stroke,Fuse.Drawing.PolygonFiller>.Enumerator", sizeof(Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller), 2, 3, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType, __interface_1));

    type->SetStrongRefs(
        "_current._key", offsetof(Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _current._key),
        "_current._value", offsetof(Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _current._value),
        "_source", offsetof(Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _source));

    return type;
}

void Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Dispose(Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
}

::app::Uno::Collections::KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Current(Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    return __this->_current;
}

bool Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__MoveNext(Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(__this->_iterator);
    __this->_current = ::app::Uno::Collections::KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(NULL, bucket.Key, bucket.Value);
    return true;
}

Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source)
{
    Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller inst = ::uDefault< Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType* Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof()
{
    static ::uStaticStrong<Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType*)::uAllocStructType(sizeof(Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType), "Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge,Fuse.Gestures.Internal.EdgeSwiper>.Enumerator", sizeof(Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType, __interface_1));

    type->SetStrongRefs(
        "_current._value", offsetof(Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper, _current._value),
        "_source", offsetof(Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper, _source));

    return type;
}

void Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper___ObjInit(Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this, ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__Dispose(Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this)
{
}

::app::Uno::Collections::KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__get_Current(Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this)
{
    return __this->_current;
}

bool Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__MoveNext(Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>(__this->_iterator);
    __this->_current = ::app::Uno::Collections::KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__New_1(NULL, bucket.Key, bucket.Value);
    return true;
}

Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper* source)
{
    Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper inst = ::uDefault< Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Enumerator__int__Fuse_Input_Capturer__uType* Dictionary2_Enumerator__int__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong<Dictionary2_Enumerator__int__Fuse_Input_Capturer__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Enumerator__int__Fuse_Input_Capturer__uType*)::uAllocStructType(sizeof(Dictionary2_Enumerator__int__Fuse_Input_Capturer__uType), "Uno.Collections.Dictionary<int,Fuse.Input.Capturer>.Enumerator", sizeof(Dictionary2_Enumerator__int__Fuse_Input_Capturer), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_Enumerator__int__Fuse_Input_Capturer__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_Enumerator__int__Fuse_Input_Capturer__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_Enumerator__int__Fuse_Input_Capturer__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_Enumerator__int__Fuse_Input_Capturer__uType, __interface_1));

    type->SetStrongRefs(
        "_current._value", offsetof(Dictionary2_Enumerator__int__Fuse_Input_Capturer, _current._value),
        "_source", offsetof(Dictionary2_Enumerator__int__Fuse_Input_Capturer, _source));

    return type;
}

void Dictionary2_Enumerator__int__Fuse_Input_Capturer___ObjInit(Dictionary2_Enumerator__int__Fuse_Input_Capturer* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_Enumerator__int__Fuse_Input_Capturer__Dispose(Dictionary2_Enumerator__int__Fuse_Input_Capturer* __this)
{
}

::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Capturer Dictionary2_Enumerator__int__Fuse_Input_Capturer__get_Current(Dictionary2_Enumerator__int__Fuse_Input_Capturer* __this)
{
    return __this->_current;
}

bool Dictionary2_Enumerator__int__Fuse_Input_Capturer__MoveNext(Dictionary2_Enumerator__int__Fuse_Input_Capturer* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer>(__this->_iterator);
    __this->_current = ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Capturer__New_1(NULL, bucket.Key, bucket.Value);
    return true;
}

Dictionary2_Enumerator__int__Fuse_Input_Capturer Dictionary2_Enumerator__int__Fuse_Input_Capturer__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer* source)
{
    Dictionary2_Enumerator__int__Fuse_Input_Capturer inst = ::uDefault< Dictionary2_Enumerator__int__Fuse_Input_Capturer>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof()
{
    static ::uStaticStrong<Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType*)::uAllocStructType(sizeof(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType), "Uno.Collections.Dictionary<int,Uno.Collections.IList<Fuse.Input.Capturer>>.Enumerator", sizeof(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType, __interface_1));

    type->SetStrongRefs(
        "_current._value", offsetof(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_, _current._value),
        "_source", offsetof(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_, _source));

    return type;
}

void Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___Dispose(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
}

::app::Uno::Collections::KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Current(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
    return __this->_current;
}

bool Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___MoveNext(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_ bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer_>(__this->_iterator);
    __this->_current = ::app::Uno::Collections::KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(NULL, bucket.Key, bucket.Value);
    return true;
}

Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source)
{
    Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ inst = ::uDefault< Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Enumerator__string__Experimental_Audio_Channel__uType* Dictionary2_Enumerator__string__Experimental_Audio_Channel__typeof()
{
    static ::uStaticStrong<Dictionary2_Enumerator__string__Experimental_Audio_Channel__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Enumerator__string__Experimental_Audio_Channel__uType*)::uAllocStructType(sizeof(Dictionary2_Enumerator__string__Experimental_Audio_Channel__uType), "Uno.Collections.Dictionary<string,Experimental.Audio.Channel>.Enumerator", sizeof(Dictionary2_Enumerator__string__Experimental_Audio_Channel), 2, 3, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_Enumerator__string__Experimental_Audio_Channel__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_Enumerator__string__Experimental_Audio_Channel__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_Enumerator__string__Experimental_Audio_Channel__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_Enumerator__string__Experimental_Audio_Channel__uType, __interface_1));

    type->SetStrongRefs(
        "_current._key", offsetof(Dictionary2_Enumerator__string__Experimental_Audio_Channel, _current._key),
        "_current._value", offsetof(Dictionary2_Enumerator__string__Experimental_Audio_Channel, _current._value),
        "_source", offsetof(Dictionary2_Enumerator__string__Experimental_Audio_Channel, _source));

    return type;
}

void Dictionary2_Enumerator__string__Experimental_Audio_Channel___ObjInit(Dictionary2_Enumerator__string__Experimental_Audio_Channel* __this, ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_Enumerator__string__Experimental_Audio_Channel__Dispose(Dictionary2_Enumerator__string__Experimental_Audio_Channel* __this)
{
}

::app::Uno::Collections::KeyValuePair__string__Experimental_Audio_Channel Dictionary2_Enumerator__string__Experimental_Audio_Channel__get_Current(Dictionary2_Enumerator__string__Experimental_Audio_Channel* __this)
{
    return __this->_current;
}

bool Dictionary2_Enumerator__string__Experimental_Audio_Channel__MoveNext(Dictionary2_Enumerator__string__Experimental_Audio_Channel* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Experimental_Audio_Channel>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__Experimental_Audio_Channel bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Experimental_Audio_Channel>(__this->_iterator);
    __this->_current = ::app::Uno::Collections::KeyValuePair__string__Experimental_Audio_Channel__New_1(NULL, bucket.Key, bucket.Value);
    return true;
}

Dictionary2_Enumerator__string__Experimental_Audio_Channel Dictionary2_Enumerator__string__Experimental_Audio_Channel__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel* source)
{
    Dictionary2_Enumerator__string__Experimental_Audio_Channel inst = ::uDefault< Dictionary2_Enumerator__string__Experimental_Audio_Channel>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Enumerator__string__string__uType* Dictionary2_Enumerator__string__string__typeof()
{
    static ::uStaticStrong<Dictionary2_Enumerator__string__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Enumerator__string__string__uType*)::uAllocStructType(sizeof(Dictionary2_Enumerator__string__string__uType), "Uno.Collections.Dictionary<string,string>.Enumerator", sizeof(Dictionary2_Enumerator__string__string), 2, 3, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_Enumerator__string__string__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_Enumerator__string__string__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_Enumerator__string__string__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_Enumerator__string__string__uType, __interface_1));

    type->SetStrongRefs(
        "_current._key", offsetof(Dictionary2_Enumerator__string__string, _current._key),
        "_current._value", offsetof(Dictionary2_Enumerator__string__string, _current._value),
        "_source", offsetof(Dictionary2_Enumerator__string__string, _source));

    return type;
}

void Dictionary2_Enumerator__string__string___ObjInit(Dictionary2_Enumerator__string__string* __this, ::app::Uno::Collections::Dictionary__string__string* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_Enumerator__string__string__Dispose(Dictionary2_Enumerator__string__string* __this)
{
}

::app::Uno::Collections::KeyValuePair__string__string Dictionary2_Enumerator__string__string__get_Current(Dictionary2_Enumerator__string__string* __this)
{
    return __this->_current;
}

bool Dictionary2_Enumerator__string__string__MoveNext(Dictionary2_Enumerator__string__string* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__string bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(__this->_iterator);
    __this->_current = ::app::Uno::Collections::KeyValuePair__string__string__New_1(NULL, bucket.Key, bucket.Value);
    return true;
}

Dictionary2_Enumerator__string__string Dictionary2_Enumerator__string__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__string* source)
{
    Dictionary2_Enumerator__string__string inst = ::uDefault< Dictionary2_Enumerator__string__string>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Enumerator__string__Uno_Collections_List_object___uType* Dictionary2_Enumerator__string__Uno_Collections_List_object___typeof()
{
    static ::uStaticStrong<Dictionary2_Enumerator__string__Uno_Collections_List_object___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Enumerator__string__Uno_Collections_List_object___uType*)::uAllocStructType(sizeof(Dictionary2_Enumerator__string__Uno_Collections_List_object___uType), "Uno.Collections.Dictionary<string,Uno.Collections.List<object>>.Enumerator", sizeof(Dictionary2_Enumerator__string__Uno_Collections_List_object_), 2, 3, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_Enumerator__string__Uno_Collections_List_object___Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_Enumerator__string__Uno_Collections_List_object___MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_Enumerator__string__Uno_Collections_List_object___uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_Enumerator__string__Uno_Collections_List_object___uType, __interface_1));

    type->SetStrongRefs(
        "_current._key", offsetof(Dictionary2_Enumerator__string__Uno_Collections_List_object_, _current._key),
        "_current._value", offsetof(Dictionary2_Enumerator__string__Uno_Collections_List_object_, _current._value),
        "_source", offsetof(Dictionary2_Enumerator__string__Uno_Collections_List_object_, _source));

    return type;
}

void Dictionary2_Enumerator__string__Uno_Collections_List_object____ObjInit(Dictionary2_Enumerator__string__Uno_Collections_List_object_* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_Enumerator__string__Uno_Collections_List_object___Dispose(Dictionary2_Enumerator__string__Uno_Collections_List_object_* __this)
{
}

::app::Uno::Collections::KeyValuePair__string__Uno_Collections_List_object_ Dictionary2_Enumerator__string__Uno_Collections_List_object___get_Current(Dictionary2_Enumerator__string__Uno_Collections_List_object_* __this)
{
    return __this->_current;
}

bool Dictionary2_Enumerator__string__Uno_Collections_List_object___MoveNext(Dictionary2_Enumerator__string__Uno_Collections_List_object_* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_ bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(__this->_iterator);
    __this->_current = ::app::Uno::Collections::KeyValuePair__string__Uno_Collections_List_object___New_1(NULL, bucket.Key, bucket.Value);
    return true;
}

Dictionary2_Enumerator__string__Uno_Collections_List_object_ Dictionary2_Enumerator__string__Uno_Collections_List_object___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source)
{
    Dictionary2_Enumerator__string__Uno_Collections_List_object_ inst = ::uDefault< Dictionary2_Enumerator__string__Uno_Collections_List_object_>();
    inst._ObjInit(source);
    return inst;
}

}}}
