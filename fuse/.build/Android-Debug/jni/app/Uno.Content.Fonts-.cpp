#include <app/Uno.Application.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__char__float.h>
#include <app/Uno.Collections.Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo.h>
#include <app/Uno.Collections.Dictionary__char__Uno_Content_Fonts_RenderedGlyph.h>
#include <app/Uno.Collections.Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__char__Uno_Content_Fonts-4ed8c79f.h>
#include <app/Uno.Collections.KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph.h>
#include <app/Uno.Content.Fonts.BitmapFont.h>
#include <app/Uno.Content.Fonts.BitmapFont_CharPair.h>
#include <app/Uno.Content.Fonts.BitmapFont_GlyphInfo.h>
#include <app/Uno.Content.Fonts.CppFontFace.h>
#include <app/Uno.Content.Fonts.CppFontFaceHandle.h>
#include <app/Uno.Content.Fonts.DefaultTextTransform.h>
#include <app/Uno.Content.Fonts.FontFace.h>
#include <app/Uno.Content.Fonts.FontFaceHelpers.h>
#include <app/Uno.Content.Fonts.RenderedGlyph.h>
#include <app/Uno.Content.Fonts.SdfFontShader.h>
#include <app/Uno.Content.Fonts.SpriteFontShader.h>
#include <app/Uno.Content.Fonts.TextRenderer.h>
#include <app/Uno.Content.Fonts.TextShader.h>
#include <app/Uno.Content.Fonts.TextShaderData.h>
#include <app/Uno.Content.Fonts.TextTransform.h>
#include <app/Uno.Content.Images.Bitmap.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Graphics.BlendOperand.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.Format.h>
#include <app/Uno.Graphics.FormatHelpers.h>
#include <app/Uno.Graphics.GraphicsContext.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.IndexType.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Graphics.SamplerState.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexAttributeInfo.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Object.h>
#include <app/Uno.Recti.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.String.h>
#include <app/Uno.UShort.h>
#include <app/Uno.UShort2.h>
#include <Uno/XliInterop.h>
#include <Xli/BufferStream.h>
#include <XliPlatform/Bundle.h>

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Content/Fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BitmapFont__uType* BitmapFont__typeof()
{
    static ::uStaticStrong<BitmapFont__uType*> type;
    if (type != NULL) return type;

    type = (BitmapFont__uType*)::uAllocClassType(sizeof(BitmapFont__uType), "Uno.Content.Fonts.BitmapFont", false, 0, 7, 0);

    type->SetStrongRefs(
        "Advances", offsetof(BitmapFont, Advances),
        "FamilyName", offsetof(BitmapFont, FamilyName),
        "FontFace", offsetof(BitmapFont, FontFace),
        "Glyphs", offsetof(BitmapFont, Glyphs),
        "Kernings", offsetof(BitmapFont, Kernings),
        "StyleName", offsetof(BitmapFont, StyleName),
        "Texture", offsetof(BitmapFont, Texture));

    return type;
}

void BitmapFont___ObjInit(BitmapFont* __this)
{
    __this->Glyphs = ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__New_1(NULL);
    __this->Advances = ::app::Uno::Collections::Dictionary__char__float__New_1(NULL);
    __this->Kernings = ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__New_1(NULL);
}

BitmapFont* BitmapFont__New_1(::uStatic* __this)
{
    BitmapFont* inst = (BitmapFont*)::uAllocObject(sizeof(BitmapFont), BitmapFont__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Content/Fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BitmapFont_CharPair__uType* BitmapFont_CharPair__typeof()
{
    static ::uStaticStrong<BitmapFont_CharPair__uType*> type;
    if (type != NULL) return type;

    type = (BitmapFont_CharPair__uType*)::uAllocStructType(sizeof(BitmapFont_CharPair__uType), "Uno.Content.Fonts.BitmapFont.CharPair", sizeof(BitmapFont_CharPair), 0, 0, 0);

    type->__fp_GetHashCode_value = (int(*)(void*))BitmapFont_CharPair__GetHashCode;

    return type;
}

void BitmapFont_CharPair___ObjInit(BitmapFont_CharPair* __this, ::uChar left, ::uChar right)
{
    __this->Left = left;
    __this->Right = right;
}

int BitmapFont_CharPair__GetHashCode(BitmapFont_CharPair* __this)
{
    int hash = 27;
    hash = (hash * 13) + (int)__this->Left;
    hash = (hash * 13) + (int)__this->Right;
    return hash;
}

BitmapFont_CharPair BitmapFont_CharPair__New_1(::uStatic* __this, ::uChar left, ::uChar right)
{
    BitmapFont_CharPair inst = ::uDefault< BitmapFont_CharPair>();
    inst._ObjInit(left, right);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Content/Fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BitmapFont_GlyphInfo__uType* BitmapFont_GlyphInfo__typeof()
{
    static ::uStaticStrong<BitmapFont_GlyphInfo__uType*> type;
    if (type != NULL) return type;

    type = (BitmapFont_GlyphInfo__uType*)::uAllocStructType(sizeof(BitmapFont_GlyphInfo__uType), "Uno.Content.Fonts.BitmapFont.GlyphInfo", sizeof(BitmapFont_GlyphInfo), 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Content/Fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CppFontFace__uType* CppFontFace__typeof()
{
    static ::uStaticStrong<CppFontFace__uType*> type;
    if (type != NULL) return type;

    type = (CppFontFace__uType*)::uAllocClassType(sizeof(CppFontFace__uType), "Uno.Content.Fonts.CppFontFace", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Content::Fonts::FontFace__typeof());
    type->__fp_ContainsGlyph = (bool(*)(::app::Uno::Content::Fonts::FontFace*, float, ::uChar))CppFontFace__ContainsGlyph;
    type->__fp_Dispose = (void(*)(::app::Uno::Content::Fonts::FontFace*))CppFontFace__Dispose;
    type->__fp_get_FamilyName = (::uString*(*)(::app::Uno::Content::Fonts::FontFace*))CppFontFace__get_FamilyName;
    type->__fp_get_StyleName = (::uString*(*)(::app::Uno::Content::Fonts::FontFace*))CppFontFace__get_StyleName;
    type->__fp_GetAscender = (float(*)(::app::Uno::Content::Fonts::FontFace*, float))CppFontFace__GetAscender;
    type->__fp_GetDescender = (float(*)(::app::Uno::Content::Fonts::FontFace*, float))CppFontFace__GetDescender;
    type->__fp_GetLineHeight = (float(*)(::app::Uno::Content::Fonts::FontFace*, float))CppFontFace__GetLineHeight;
    type->__fp_RenderGlyph = (::app::Uno::Content::Fonts::RenderedGlyph(*)(::app::Uno::Content::Fonts::FontFace*, float, ::uChar))CppFontFace__RenderGlyph;
    type->__fp_TryGetKerning = (bool(*)(::app::Uno::Content::Fonts::FontFace*, float, ::uChar, ::uChar, ::app::Uno::Float2*))CppFontFace__TryGetKerning;
    type->__interface_0.__fp_Dispose = (void(*)(void*))CppFontFace__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(CppFontFace__uType, __interface_0));

    return type;
}

void CppFontFace___ObjInit_1(CppFontFace* __this, ::uArray* data, int offset, int length)
{
    ::app::Uno::Content::Fonts::FontFace___ObjInit(__this);
    __this->_handle = CppFontFace__LoadFontFaceHandle_1(NULL, data, offset, length);
}

void CppFontFace___ObjInit_2(CppFontFace* __this, ::app::Uno::BundleFile* file)
{
    ::app::Uno::Content::Fonts::FontFace___ObjInit(__this);
    __this->_handle = CppFontFace__LoadFontFaceHandle(NULL, ::uPtr< ::app::Uno::BundleFile*>(file)->Name());
}

bool CppFontFace__ContainsGlyph(CppFontFace* __this, float size_, ::uChar glyph_)
{
    return __this->_handle->ContainsGlyph(size_, glyph_);
}

void CppFontFace__Dispose(CppFontFace* __this)
{
    __this->_handle->Release();
    __this->_handle = 0;
}

::uString* CppFontFace__get_FamilyName(CppFontFace* __this)
{
    return ::uStringFromXliString(__this->_handle->GetFamilyName());
}

::uString* CppFontFace__get_StyleName(CppFontFace* __this)
{
    return ::uStringFromXliString(__this->_handle->GetStyleName());
}

float CppFontFace__GetAscender(CppFontFace* __this, float size_)
{
    return __this->_handle->GetAscender(size_);
}

float CppFontFace__GetDescender(CppFontFace* __this, float size_)
{
    return __this->_handle->GetDescender(size_);
}

float CppFontFace__GetLineHeight(CppFontFace* __this, float size_)
{
    return __this->_handle->GetLineHeight(size_);
}

::Xli::FontFace* CppFontFace__LoadFontFaceHandle(::uStatic* __this, ::uString* filename_)
{
    Xli::Managed<Xli::Stream> f = Xli::Bundle->OpenFile(::uStringToXliString(filename_));
    return Xli::FreeType::LoadFontFace(f);
}

::Xli::FontFace* CppFontFace__LoadFontFaceHandle_1(::uStatic* __this, ::uArray* data_, int offset_, int length_)
{
    Xli::BufferStream stream(new Xli::BufferPtr((char*)data_->Ptr() + offset_, length_, false), true, false);                
    return Xli::FreeType::LoadFontFace(&stream);
}

CppFontFace* CppFontFace__New_1(::uStatic* __this, ::app::Uno::BundleFile* file)
{
    CppFontFace* inst = (CppFontFace*)::uAllocObject(sizeof(CppFontFace), CppFontFace__typeof());
    inst->_ObjInit_2(file);
    return inst;
}

CppFontFace* CppFontFace__New_2(::uStatic* __this, ::uArray* data, int offset, int length)
{
    CppFontFace* inst = (CppFontFace*)::uAllocObject(sizeof(CppFontFace), CppFontFace__typeof());
    inst->_ObjInit_1(data, offset, length);
    return inst;
}

::app::Uno::Content::Fonts::RenderedGlyph CppFontFace__RenderGlyph(CppFontFace* __this, float size_, ::uChar glyph_)
{
    Xli::Vector2 advance, bearing;
    Xli::Managed<Xli::Bitmap> bitmap = __this->_handle->RenderGlyph(size_, glyph_, Xli::FontRenderModeNormal, &advance, &bearing);
    
    ::app::Uno::Buffer* resultBuffer = ::uBufferFromXliDataAccessor(bitmap);
    ::app::Uno::Content::Images::Bitmap* resultBitmap = ::app::Uno::Content::Images::Bitmap__New_1(NULL, ::app::Uno::Int2__New_2(NULL, bitmap->GetWidth(), bitmap->GetHeight()), 1, resultBuffer);
    
    return ::app::Uno::Content::Fonts::RenderedGlyph__New_1(NULL, ::app::Uno::Float2__New_2(NULL, advance.X, advance.Y), ::app::Uno::Float2__New_2(NULL, bearing.X, bearing.Y), resultBitmap);
}

bool CppFontFace__TryGetKerning(CppFontFace* __this, float size_, ::uChar left_, ::uChar right_, ::app::Uno::Float2* result_)
{
    Xli::Vector2 kerning;
    if (__this->_handle->TryGetKerning(size_, left_, right_, &kerning))
    {
        result_->X = kerning.X;
        result_->Y = kerning.Y;
        return true;
    }
    
    result_->X = result_->Y = 0;
    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Content/Fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CppFontFaceHandle__uType* CppFontFaceHandle__typeof()
{
    static ::uStaticStrong<CppFontFaceHandle__uType*> type;
    if (type != NULL) return type;

    type = (CppFontFaceHandle__uType*)::uAllocStructType(sizeof(CppFontFaceHandle__uType), "Uno.Content.Fonts.CppFontFaceHandle", sizeof(::Xli::FontFace*), 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Content/Fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DefaultTextTransform__uType* DefaultTextTransform__typeof()
{
    static ::uStaticStrong<DefaultTextTransform__uType*> type;
    if (type != NULL) return type;

    type = (DefaultTextTransform__uType*)::uAllocClassType(sizeof(DefaultTextTransform__uType), "Uno.Content.Fonts.DefaultTextTransform", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Content::Fonts::TextTransform__typeof());
    type->__fp_get_Matrix = (::app::Uno::Float4x4(*)(::app::Uno::Content::Fonts::TextTransform*))DefaultTextTransform__get_Matrix;
    type->__fp_ResolveClipSpaceMatrix = (::app::Uno::Float4x4(*)(::app::Uno::Content::Fonts::TextTransform*))DefaultTextTransform__ResolveClipSpaceMatrix;
    type->__fp_set_Matrix = (void(*)(::app::Uno::Content::Fonts::TextTransform*, ::app::Uno::Float4x4))DefaultTextTransform__set_Matrix;

    return type;
}

void DefaultTextTransform___ObjInit_1(DefaultTextTransform* __this)
{
    __this->_matrix = ::app::Uno::Float4x4__get_Identity(NULL);
    ::app::Uno::Content::Fonts::TextTransform___ObjInit(__this);
}

::app::Uno::Float4x4 DefaultTextTransform__get_Matrix(DefaultTextTransform* __this)
{
    return __this->_matrix;
}

DefaultTextTransform* DefaultTextTransform__New_1(::uStatic* __this)
{
    DefaultTextTransform* inst = (DefaultTextTransform*)::uAllocObject(sizeof(DefaultTextTransform), DefaultTextTransform__typeof());
    inst->_ObjInit_1();
    return inst;
}

::app::Uno::Float4x4 DefaultTextTransform__ResolveClipSpaceMatrix(DefaultTextTransform* __this)
{
    ::app::Uno::Float2 csScale = ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__New_2(NULL, 2.0f, -2.0f), ::app::Uno::Float2__op_Implicit_4(NULL, ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->GraphicsContext())->Viewport().Size()));
    ::app::Uno::Float2 csOffset = ::app::Uno::Float2__New_2(NULL, -1.0f, 1.0f);
    ::app::Uno::Float4x4 csMatrix = ::app::Uno::Matrix__Mul_10(NULL, ::app::Uno::Matrix__Scaling_2(NULL, ::app::Uno::Float3__New_4(NULL, csScale, 1.0f)), ::app::Uno::Matrix__Translation_1(NULL, ::app::Uno::Float3__New_4(NULL, csOffset, 0.0f)));
    return ::app::Uno::Matrix__Mul_10(NULL, __this->Matrix(), csMatrix);
}

void DefaultTextTransform__set_Matrix(DefaultTextTransform* __this, ::app::Uno::Float4x4 value)
{
    __this->_matrix = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Content/Fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FontFace__uType* FontFace__typeof()
{
    static ::uStaticStrong<FontFace__uType*> type;
    if (type != NULL) return type;

    type = (FontFace__uType*)::uAllocClassType(sizeof(FontFace__uType), "Uno.Content.Fonts.FontFace", false, 1, 0, 0);

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(FontFace__uType, __interface_0));

    return type;
}

void FontFace___ObjInit(FontFace* __this)
{
}

FontFace* FontFace__Load(::uStatic* __this, ::app::Uno::BundleFile* file)
{
    return (FontFace*)::app::Uno::Content::Fonts::CppFontFace__New_1(NULL, file);
}

FontFace* FontFace__Load_1(::uStatic* __this, ::uString* name, ::uArray* data, int offset, int length)
{
    return (FontFace*)::app::Uno::Content::Fonts::CppFontFace__New_2(NULL, data, offset, length);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Content/Fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FontFaceHelpers__uType* FontFaceHelpers__typeof()
{
    static ::uStaticStrong<FontFaceHelpers__uType*> type;
    if (type != NULL) return type;

    type = (FontFaceHelpers__uType*)::uAllocClassType(sizeof(FontFaceHelpers__uType), "Uno.Content.Fonts.FontFaceHelpers");

    return type;
}

::app::Uno::Content::Fonts::BitmapFont* FontFaceHelpers__RenderSpriteFont(::uStatic* __this, ::app::Uno::Content::Fonts::FontFace* font, float size, ::uString* charset)
{
    ::app::Uno::Content::Fonts::BitmapFont* collection_123;
    ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* glyphs = ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph__New_1(NULL);
    ::uString* charsetInclWs = ::app::Uno::String__op_Addition_1(NULL, charset, ::uGetConstString(" \300\200"));
    int maxSize = 0;

    for (int i = 0; i < ::uPtr< ::uString*>(charsetInclWs)->Length(); i++)
    {
        ::uChar c = ::uPtr< ::uString*>(charsetInclWs)->Item(i);

        if (::uPtr< ::app::Uno::Content::Fonts::FontFace*>(font)->ContainsGlyph(size, c))
        {
            if (::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*>(glyphs)->ContainsKey(c))
            {
                continue;
            }

            ::app::Uno::Content::Fonts::RenderedGlyph g = ::uPtr< ::app::Uno::Content::Fonts::FontFace*>(font)->RenderGlyph(size, c);
            ::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*>(glyphs)->Add(c, g);

            if (g.Bitmap != NULL)
            {
                maxSize = ::app::Uno::Math__Max_2(NULL, maxSize, ::uPtr< ::app::Uno::Content::Images::Bitmap*>(g.Bitmap)->Size().X);
                maxSize = ::app::Uno::Math__Max_2(NULL, maxSize, ::uPtr< ::app::Uno::Content::Images::Bitmap*>(g.Bitmap)->Size().Y);
            }
        }
    }

    int sideCount = (int)::app::Uno::Math__Ceil_1(NULL, ::app::Uno::Math__Sqrt_1(NULL, (float)::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*>(glyphs)->Count()));
    int sideSize = ::app::Uno::Math__NextPow2(NULL, sideCount * maxSize);
    ::app::Uno::Content::Images::Bitmap* dst = ::app::Uno::Content::Images::Bitmap__New_1(NULL, ::app::Uno::Int2__New_2(NULL, sideSize, sideSize), 1, NULL);
    ::app::Uno::Graphics::Texture2D* tex = ::app::Uno::Graphics::Texture2D__New_2(NULL, ::uPtr< ::app::Uno::Content::Images::Bitmap*>(dst)->Size(), ::uPtr< ::app::Uno::Content::Images::Bitmap*>(dst)->Format(), true);
    collection_123 = ::app::Uno::Content::Fonts::BitmapFont__New_1(NULL);
    ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(collection_123)->Texture = tex;
    collection_123->Ascent = ::app::Uno::Math__Round_3(NULL, ::uPtr< ::app::Uno::Content::Fonts::FontFace*>(font)->GetAscender(size));
    collection_123->Descent = ::app::Uno::Math__Round_3(NULL, font->GetDescender(size));
    collection_123->LineHeight = ::app::Uno::Math__Round_3(NULL, font->GetLineHeight(size));
    collection_123->PixelSize = size;
    collection_123->PixelSpread = 0.0f;
    collection_123->FontFace = font;
    collection_123->FamilyName = font->FamilyName();
    collection_123->StyleName = font->StyleName();
    ::app::Uno::Content::Fonts::BitmapFont* result = collection_123;
    int gi = 0;

    for (::app::Uno::Collections::Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph enum_124 = glyphs->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph e = enum_124.Current();
        int dstX = (gi % sideCount) * (sideSize / sideCount);
        int dstY = ((gi / sideCount) % sideCount) * (sideSize / sideCount);
        gi++;
        ::app::Uno::Content::Images::Bitmap* src = e.Value().Bitmap;
        ::app::Uno::Float2 srcSize = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);

        if (src != NULL)
        {
            srcSize = ::app::Uno::Float2__op_Implicit_4(NULL, ::uPtr< ::app::Uno::Content::Images::Bitmap*>(src)->Size());
            int bpp = ::app::Uno::Graphics::FormatHelpers__GetStrideInBytes(NULL, src->Format());

            for (int srcY = 0; srcY < src->Size().Y; srcY++)
            {
                for (int srcX = 0; srcX < src->Size().X; srcX++)
                {
                    ::uPtr< ::app::Uno::Buffer*>(::uPtr< ::app::Uno::Content::Images::Bitmap*>(dst)->Buffer())->Item((((dstY + srcY) * ::uPtr< ::app::Uno::Content::Images::Bitmap*>(dst)->Size().X) + dstX) + srcX, ::uPtr< ::app::Uno::Buffer*>(src->Buffer())->Item(((srcY * src->Size().X) + srcX) * bpp));
                }
            }
        }

        ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo g = ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo();
        g.Advance = ::app::Uno::Math__Round_3(NULL, e.Value().Advance.X);
        g.Bearing = ::app::Uno::Math__Round_4(NULL, e.Value().Bearing);
        g.Size = srcSize;
        g.UpperLeft.X = (::uUShort)((65535.0 * (double)dstX) / (double)::uPtr< ::app::Uno::Content::Images::Bitmap*>(dst)->Size().X);
        g.UpperLeft.Y = (::uUShort)((65535.0 * (double)dstY) / (double)dst->Size().Y);
        g.LowerRight.X = (::uUShort)((65535.0 * (double)((float)dstX + srcSize.X)) / (double)dst->Size().X);
        g.LowerRight.Y = (::uUShort)((65535.0 * (double)((float)dstY + srcSize.Y)) / (double)dst->Size().Y);
        ::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(result)->Glyphs)->Add(e.Key(), g);
        ::uPtr< ::app::Uno::Collections::Dictionary__char__float*>(result->Advances)->Add(e.Key(), g.Advance);
    }

    ::uPtr< ::app::Uno::Graphics::Texture2D*>(tex)->Update_1(dst->Buffer());

    if (tex->SupportsMipmap())
    {
        tex->GenerateMipmap();
    }

    for (int i = 0; i < ::uPtr< ::uString*>(charsetInclWs)->Length(); i++)
    {
        ::uChar left = ::uPtr< ::uString*>(charsetInclWs)->Item(i);

        for (int j = 0; j < charsetInclWs->Length(); j++)
        {
            ::uChar right = ::uPtr< ::uString*>(charsetInclWs)->Item(j);
            ::app::Uno::Float2 kerning = ::app::Uno::Float2();

            if (::uPtr< ::app::Uno::Content::Fonts::FontFace*>(font)->TryGetKerning(size, left, right, &kerning) && (::app::Uno::Math__Abs_8(NULL, kerning.X) > 0.0f))
            {
                ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(result)->Kernings)->Item(::app::Uno::Content::Fonts::BitmapFont_CharPair__New_1(NULL, left, right), kerning.X);
            }
        }
    }

    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Content/Fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RenderedGlyph__uType* RenderedGlyph__typeof()
{
    static ::uStaticStrong<RenderedGlyph__uType*> type;
    if (type != NULL) return type;

    type = (RenderedGlyph__uType*)::uAllocStructType(sizeof(RenderedGlyph__uType), "Uno.Content.Fonts.RenderedGlyph", sizeof(RenderedGlyph), 0, 1, 0);

    type->SetStrongRefs(
        "Bitmap", offsetof(RenderedGlyph, Bitmap));

    return type;
}

void RenderedGlyph___ObjInit(RenderedGlyph* __this, ::app::Uno::Float2 advance, ::app::Uno::Float2 bearing, ::app::Uno::Content::Images::Bitmap* bitmap)
{
    __this->Advance = advance;
    __this->Bearing = bearing;
    __this->Bitmap = bitmap;
}

RenderedGlyph RenderedGlyph__New_1(::uStatic* __this, ::app::Uno::Float2 advance, ::app::Uno::Float2 bearing, ::app::Uno::Content::Images::Bitmap* bitmap)
{
    RenderedGlyph inst = ::uDefault< RenderedGlyph>();
    inst._ObjInit(advance, bearing, bitmap);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Content/Fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SdfFontShader__uType* SdfFontShader__typeof()
{
    static ::uStaticStrong<SdfFontShader__uType*> type;
    if (type != NULL) return type;

    type = (SdfFontShader__uType*)::uAllocClassType(sizeof(SdfFontShader__uType), "Uno.Content.Fonts.SdfFontShader", false, 0, 3, 0);

    type->SetBaseType(::app::Uno::Content::Fonts::TextShader__typeof());
    type->__fp_Draw = (void(*)(::app::Uno::Content::Fonts::TextShader*, ::app::Uno::Content::Fonts::TextShaderData*))SdfFontShader__Draw;

    type->SetStrongRefs(
        "_draw_a6403fca._compiledProgram", offsetof(SdfFontShader, _draw_a6403fca._compiledProgram),
        "_draw_a6403fca._constValues", offsetof(SdfFontShader, _draw_a6403fca._constValues),
        "_draw_a6403fca._Program", offsetof(SdfFontShader, _draw_a6403fca._Program));

    return type;
}

void SdfFontShader__Draw(SdfFontShader* __this, ::app::Uno::Content::Fonts::TextShaderData* data)
{
    float FontSmoothing_a6403fca_12_0_1 = 0.25f / ::app::Uno::Math__Max_8(NULL, ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(data)->FontSpread * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(data)->FontScale, 0.5f);
    {
        __this->_draw_a6403fca.BlendEnabled(true);
        __this->_draw_a6403fca.BlendSrcRgb(2);
        __this->_draw_a6403fca.BlendDstRgb(3);
        __this->_draw_a6403fca.DepthTestEnabled(false);
        __this->_draw_a6403fca.CullFace(::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(data)->DataCullFace);
        __this->_draw_a6403fca.Use();
        __this->_draw_a6403fca.Attrib(0, data->PositionInfo.Type, data->PositionInfo.Buffer, data->PositionInfo.BufferStride, data->PositionInfo.BufferOffset);
        __this->_draw_a6403fca.Attrib(1, data->TexCoordInfo.Type, data->TexCoordInfo.Buffer, data->TexCoordInfo.BufferStride, data->TexCoordInfo.BufferOffset);
        __this->_draw_a6403fca.Attrib(2, data->ColorInfo.Type, data->ColorInfo.Buffer, data->ColorInfo.BufferStride, data->ColorInfo.BufferOffset);
        __this->_draw_a6403fca.Uniform_2(3, data->ClipSpaceMatrix);
        __this->_draw_a6403fca.Uniform_8(4, 0.5f - FontSmoothing_a6403fca_12_0_1);
        __this->_draw_a6403fca.Uniform_8(5, 0.5f + FontSmoothing_a6403fca_12_0_1);
        __this->_draw_a6403fca.Sampler(6, data->FontTexture, ::app::Uno::Graphics::SamplerState__get_TrilinearClamp(NULL));
        __this->_draw_a6403fca.Draw(data->CharCount * 6, data->IndexType, data->IndexBuffer);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Content/Fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SpriteFontShader__uType* SpriteFontShader__typeof()
{
    static ::uStaticStrong<SpriteFontShader__uType*> type;
    if (type != NULL) return type;

    type = (SpriteFontShader__uType*)::uAllocClassType(sizeof(SpriteFontShader__uType), "Uno.Content.Fonts.SpriteFontShader", false, 0, 3, 0);

    type->SetBaseType(::app::Uno::Content::Fonts::TextShader__typeof());
    type->__fp_Draw = (void(*)(::app::Uno::Content::Fonts::TextShader*, ::app::Uno::Content::Fonts::TextShaderData*))SpriteFontShader__Draw;

    type->SetStrongRefs(
        "_draw_c2905fec._compiledProgram", offsetof(SpriteFontShader, _draw_c2905fec._compiledProgram),
        "_draw_c2905fec._constValues", offsetof(SpriteFontShader, _draw_c2905fec._constValues),
        "_draw_c2905fec._Program", offsetof(SpriteFontShader, _draw_c2905fec._Program));

    return type;
}

void SpriteFontShader___ObjInit_1(SpriteFontShader* __this)
{
    ::app::Uno::Content::Fonts::TextShader___ObjInit(__this);
    __this->init_DrawCalls();
}

void SpriteFontShader__Draw(SpriteFontShader* __this, ::app::Uno::Content::Fonts::TextShaderData* data)
{
    {
        __this->_draw_c2905fec.BlendEnabled(true);
        __this->_draw_c2905fec.BlendSrcRgb(2);
        __this->_draw_c2905fec.BlendDstRgb(3);
        __this->_draw_c2905fec.BlendDstAlpha(3);
        __this->_draw_c2905fec.DepthTestEnabled(false);
        __this->_draw_c2905fec.CullFace(::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(data)->DataCullFace);
        __this->_draw_c2905fec.Use();
        __this->_draw_c2905fec.Attrib(0, data->PositionInfo.Type, data->PositionInfo.Buffer, data->PositionInfo.BufferStride, data->PositionInfo.BufferOffset);
        __this->_draw_c2905fec.Attrib(1, data->ColorInfo.Type, data->ColorInfo.Buffer, data->ColorInfo.BufferStride, data->ColorInfo.BufferOffset);
        __this->_draw_c2905fec.Attrib(2, data->TexCoordInfo.Type, data->TexCoordInfo.Buffer, data->TexCoordInfo.BufferStride, data->TexCoordInfo.BufferOffset);
        __this->_draw_c2905fec.Uniform_2(3, data->ClipSpaceMatrix);
        __this->_draw_c2905fec.Sampler(4, data->FontTexture, ::app::Uno::Graphics::SamplerState__get_TrilinearClamp(NULL));
        __this->_draw_c2905fec.Draw(data->CharCount * 6, data->IndexType, data->IndexBuffer);
    }
}

void SpriteFontShader__init_DrawCalls(SpriteFontShader* __this)
{
    __this->_draw_c2905fec = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 562), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

SpriteFontShader* SpriteFontShader__New_1(::uStatic* __this)
{
    SpriteFontShader* inst = (SpriteFontShader*)::uAllocObject(sizeof(SpriteFontShader), SpriteFontShader__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Content/Fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextRenderer__uType* TextRenderer__typeof()
{
    static ::uStaticStrong<TextRenderer__uType*> type;
    if (type != NULL) return type;

    type = (TextRenderer__uType*)::uAllocClassType(sizeof(TextRenderer__uType), "Uno.Content.Fonts.TextRenderer", false, 0, 7, 0);

    type->SetStrongRefs(
        "_buffer", offsetof(TextRenderer, _buffer),
        "_data", offsetof(TextRenderer, _data),
        "_font", offsetof(TextRenderer, _font),
        "_ibo", offsetof(TextRenderer, _ibo),
        "_shader", offsetof(TextRenderer, _shader),
        "_transform", offsetof(TextRenderer, _transform),
        "_vbo", offsetof(TextRenderer, _vbo));

    return type;
}

void TextRenderer___ObjInit(TextRenderer* __this, int maxCharCount, ::app::Uno::Content::Fonts::TextShader* shader, ::app::Uno::Content::Fonts::TextTransform* transform)
{
    __this->_color = ::app::Uno::Byte4__New_2(NULL, 255, 255, 255, 255);
    __this->_maxCharCount = maxCharCount;
    ::app::Uno::Buffer* indexBuffer = ::app::Uno::Buffer__New_3(NULL, (maxCharCount * 6) * 2);

    for (int i = 0; i < maxCharCount; i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(indexBuffer)->SetUShort(i * 12, (::uUShort)(i * 4), true);
        indexBuffer->SetUShort((i * 12) + 2, (::uUShort)((i * 4) + 1), true);
        indexBuffer->SetUShort((i * 12) + 4, (::uUShort)((i * 4) + 2), true);
        indexBuffer->SetUShort((i * 12) + 6, (::uUShort)(i * 4), true);
        indexBuffer->SetUShort((i * 12) + 8, (::uUShort)((i * 4) + 2), true);
        indexBuffer->SetUShort((i * 12) + 10, (::uUShort)((i * 4) + 3), true);
    }

    __this->_ibo = ::app::Uno::Graphics::IndexBuffer__New_3(NULL, indexBuffer, 0);
    __this->_vbo = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, 2);
    __this->_buffer = ::app::Uno::Buffer__New_3(NULL, (maxCharCount * 4) * 16);
    __this->_data = ::app::Uno::Content::Fonts::TextShaderData__New_1(NULL, __this->_ibo, __this->_vbo);
    __this->_shader = shader;
    __this->_transform = (transform != NULL) ? transform : (::app::Uno::Content::Fonts::TextTransform*)::app::Uno::Content::Fonts::DefaultTextTransform__New_1(NULL);
}

void TextRenderer__Begin(TextRenderer* __this, ::app::Uno::Content::Fonts::BitmapFont* font)
{
    if (font == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("font")));
    }

    __this->_font = font;
    ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->CharCount = 0;
    __this->HasBegun(true);
}

void TextRenderer__End(TextRenderer* __this)
{
    if (::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->CharCount > 0)
    {
        ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->_vbo)->Update(__this->_buffer);
        ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontTexture = ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->Texture;
        ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontSpread = ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->PixelSpread;
        ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->ClipSpaceMatrix = ::uPtr< ::app::Uno::Content::Fonts::TextTransform*>(__this->_transform)->ResolveClipSpaceMatrix();
        ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->DataCullFace = ::uPtr< ::app::Uno::Content::Fonts::TextTransform*>(__this->_transform)->CullFace();
        ::uPtr< ::app::Uno::Content::Fonts::TextShader*>(__this->_shader)->Draw(__this->_data);
        ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->CharCount = 0;
    }

    __this->_font = NULL;
    __this->HasBegun(false);
}

::app::Uno::Float4 TextRenderer__get_Color(TextRenderer* __this)
{
    return ::app::Uno::Float4__New_2(NULL, (float)__this->_color.X / 255.0f, (float)__this->_color.Y / 255.0f, (float)__this->_color.Z / 255.0f, (float)__this->_color.W / 255.0f);
}

bool TextRenderer__get_HasBegun(TextRenderer* __this)
{
    return __this->_HasBegun;
}

::app::Uno::Content::Fonts::TextTransform* TextRenderer__get_Transform(TextRenderer* __this)
{
    return __this->_transform;
}

::app::Uno::Float2 TextRenderer__MeasureString(TextRenderer* __this, ::uString* text, int startIndex, int length)
{
    if ((__this->_font == NULL) || ::app::Uno::String__op_Equality(NULL, text, NULL))
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    float caret = 0.0f;
    ::uChar last = 0;

    for (int i = startIndex; i < (startIndex + length); i++)
    {
        ::uChar c = ::uPtr< ::uString*>(text)->Item(i);

        if ((i == 0) && (c == 8203))
        {
            continue;
        }

        ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo ci = ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo();

        if (::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->Glyphs)->TryGetValue(c, &ci))
        {
            float kerning = float();

            if (::uPtr< ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->Kernings)->TryGetValue(::app::Uno::Content::Fonts::BitmapFont_CharPair__New_1(NULL, last, c), &kerning))
            {
                caret = caret + (kerning * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale);
            }

            caret = caret + ((ci.Advance * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale) + __this->_tracking);
        }
        else if ((::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->FontFace != NULL) && ::uPtr< ::app::Uno::Content::Fonts::FontFace*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->FontFace)->ContainsGlyph(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->PixelSize, c))
        {
            ::app::Uno::Content::Fonts::RenderedGlyph rg = ::uPtr< ::app::Uno::Content::Fonts::FontFace*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->FontFace)->RenderGlyph(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->PixelSize, c);
            ::app::Uno::Float2 kerning = ::app::Uno::Float2();

            if (::uPtr< ::app::Uno::Content::Fonts::FontFace*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->FontFace)->TryGetKerning(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->PixelSize, last, c, &kerning))
            {
                caret = caret + (kerning.X * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale);
            }

            caret = caret + ((::app::Uno::Math__Round_3(NULL, rg.Advance.X) * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale) + __this->_tracking);
        }

        last = c;
    }

    return ::app::Uno::Float2__New_2(NULL, caret, ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->Ascent + ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->Descent);
}

::app::Uno::Float2 TextRenderer__MeasureString_1(TextRenderer* __this, ::uString* text)
{
    return __this->MeasureString(text, 0, ::uPtr< ::uString*>(text)->Length());
}

TextRenderer* TextRenderer__New_1(::uStatic* __this, int maxCharCount, ::app::Uno::Content::Fonts::TextShader* shader, ::app::Uno::Content::Fonts::TextTransform* transform)
{
    TextRenderer* inst = (TextRenderer*)::uAllocObject(sizeof(TextRenderer), TextRenderer__typeof());
    inst->_ObjInit(maxCharCount, shader, transform);
    return inst;
}

void TextRenderer__set_Color(TextRenderer* __this, ::app::Uno::Float4 value)
{
    __this->_color = ::app::Uno::Byte4__New_2(NULL, (::uByte)(::app::Uno::Math__Saturate_1(NULL, value.X) * 255.0f), (::uByte)(::app::Uno::Math__Saturate_1(NULL, value.Y) * 255.0f), (::uByte)(::app::Uno::Math__Saturate_1(NULL, value.Z) * 255.0f), (::uByte)(::app::Uno::Math__Saturate_1(NULL, value.W) * 255.0f));
}

void TextRenderer__set_HasBegun(TextRenderer* __this, bool value)
{
    __this->_HasBegun = value;
}

void TextRenderer__set_Transform(TextRenderer* __this, ::app::Uno::Content::Fonts::TextTransform* value)
{
    __this->_transform = value;
}

void TextRenderer__WriteGlyph(TextRenderer* __this, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo ci, ::app::Uno::Float2 caret)
{
    if ((ci.UpperLeft.X != ci.LowerRight.X) && (ci.UpperLeft.Y != ci.LowerRight.Y))
    {
        ::app::Uno::Float2 p = ::app::Uno::Float2__op_Addition_2(NULL, caret, ::app::Uno::Float2__op_Multiply_2(NULL, ci.Bearing, ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale));
        int o = ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->CharCount * 64;
        ::app::Uno::Float2 s = ::app::Uno::Float2__op_Multiply_2(NULL, ci.Size, ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetFloat(o, p.X, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetFloat(o + 4, p.Y + s.Y, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetUShort(o + 8, ci.UpperLeft.X, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetUShort(o + 10, ci.LowerRight.Y, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetByte4(o + 12, __this->_color);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetFloat(o + 16, p.X + s.X, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetFloat(o + 20, p.Y + s.Y, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetUShort(o + 24, ci.LowerRight.X, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetUShort(o + 26, ci.LowerRight.Y, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetByte4(o + 28, __this->_color);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetFloat(o + 32, p.X + s.X, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetFloat(o + 36, p.Y, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetUShort(o + 40, ci.LowerRight.X, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetUShort(o + 42, ci.UpperLeft.Y, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetByte4(o + 44, __this->_color);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetFloat(o + 48, p.X, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetFloat(o + 52, p.Y, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetUShort(o + 56, ci.UpperLeft.X, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetUShort(o + 58, ci.UpperLeft.Y, true);
        ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SetByte4(o + 60, __this->_color);
        ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->CharCount++;
    }
}

void TextRenderer__WriteString(TextRenderer* __this, ::app::Uno::Float2 caret, ::uString* text, int startIndex, int length)
{
    ::uChar last = 0;

    if (::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->PixelSpread > 0.0f)
    {
        caret = ::app::Uno::Float2__op_Subtraction_2(NULL, caret, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__New_1(NULL, ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->PixelSpread * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale), ::app::Uno::Float2__New_2(NULL, 1.0f, 2.0f)));
    }

    for (int i = startIndex; i < (startIndex + length); i++)
    {
        ::uChar c = ::uPtr< ::uString*>(text)->Item(i);

        if ((i == 0) && (c == 8203))
        {
            continue;
        }

        ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo ci = ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo();

        if (::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->Glyphs)->TryGetValue(c, &ci))
        {
            float kerning = float();

            if (::uPtr< ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->Kernings)->TryGetValue(::app::Uno::Content::Fonts::BitmapFont_CharPair__New_1(NULL, last, c), &kerning))
            {
                caret.X = caret.X + (kerning * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale);
            }

            if ((ci.UpperLeft.X != ci.LowerRight.X) && (ci.UpperLeft.Y != ci.LowerRight.Y))
            {
                __this->WriteGlyph(ci, caret);

                if (::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->CharCount == __this->_maxCharCount)
                {
                    ::app::Uno::Content::Fonts::BitmapFont* temp = __this->_font;
                    __this->End();
                    __this->Begin(temp);
                }
            }

            caret.X = caret.X + ((ci.Advance * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale) + __this->_tracking);
        }
        else if ((::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->FontFace != NULL) && ::uPtr< ::app::Uno::Content::Fonts::FontFace*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->FontFace)->ContainsGlyph(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(__this->_font)->PixelSize, c))
        {
            ::app::Uno::Content::Fonts::BitmapFont* oldFont = __this->_font;
            ::app::Uno::Content::Fonts::BitmapFont* tempFont = ::app::Uno::Content::Fonts::FontFaceHelpers__RenderSpriteFont(NULL, ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(oldFont)->FontFace, ::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(oldFont)->PixelSize, ::app::Uno::Char::ToString(c));

            if (::uPtr< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(tempFont)->Glyphs)->TryGetValue(c, &ci))
            {
                float kerning = float();

                if (::uPtr< ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*>(::uPtr< ::app::Uno::Content::Fonts::BitmapFont*>(tempFont)->Kernings)->TryGetValue(::app::Uno::Content::Fonts::BitmapFont_CharPair__New_1(NULL, last, c), &kerning))
                {
                    caret.X = caret.X + (kerning * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale);
                }

                if ((ci.UpperLeft.X != ci.LowerRight.X) && (ci.UpperLeft.Y != ci.LowerRight.Y))
                {
                    __this->End();
                    __this->Begin(tempFont);
                    __this->WriteGlyph(ci, caret);
                    __this->End();
                    __this->Begin(oldFont);
                }

                caret.X = caret.X + ((ci.Advance * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(__this->_data)->FontScale) + __this->_tracking);
            }
        }

        last = c;
    }
}

void TextRenderer__WriteString_1(TextRenderer* __this, ::app::Uno::Float2 caret, ::uString* text)
{
    __this->WriteString(caret, text, 0, ::uPtr< ::uString*>(text)->Length());
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Content/Fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextShader__uType* TextShader__typeof()
{
    static ::uStaticStrong<TextShader__uType*> type;
    if (type != NULL) return type;

    type = (TextShader__uType*)::uAllocClassType(sizeof(TextShader__uType), "Uno.Content.Fonts.TextShader", false, 0, 0, 0);

    return type;
}

void TextShader___ObjInit(TextShader* __this)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Content/Fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextShaderData__uType* TextShaderData__typeof()
{
    static ::uStaticStrong<TextShaderData__uType*> type;
    if (type != NULL) return type;

    type = (TextShaderData__uType*)::uAllocClassType(sizeof(TextShaderData__uType), "Uno.Content.Fonts.TextShaderData", false, 0, 5, 0);

    type->SetStrongRefs(
        "ColorInfo.Buffer", offsetof(TextShaderData, ColorInfo.Buffer),
        "FontTexture", offsetof(TextShaderData, FontTexture),
        "IndexBuffer", offsetof(TextShaderData, IndexBuffer),
        "PositionInfo.Buffer", offsetof(TextShaderData, PositionInfo.Buffer),
        "TexCoordInfo.Buffer", offsetof(TextShaderData, TexCoordInfo.Buffer));

    return type;
}

void TextShaderData___ObjInit(TextShaderData* __this, ::app::Uno::Graphics::IndexBuffer* ibo, ::app::Uno::Graphics::VertexBuffer* vbo)
{
    __this->FontScale = 1.0f;
    __this->ClipSpaceMatrix = ::app::Uno::Float4x4__get_Identity(NULL);
    __this->DataCullFace = 0;
    __this->IndexType = 2;
    __this->IndexBuffer = ibo;
    __this->PositionInfo.Buffer = vbo;
    __this->PositionInfo.BufferOffset = 0;
    __this->PositionInfo.BufferStride = 16;
    __this->PositionInfo.Type = 2;
    __this->TexCoordInfo.Buffer = vbo;
    __this->TexCoordInfo.BufferOffset = 8;
    __this->TexCoordInfo.BufferStride = 16;
    __this->TexCoordInfo.Type = 14;
    __this->ColorInfo.Buffer = vbo;
    __this->ColorInfo.BufferOffset = 12;
    __this->ColorInfo.BufferStride = 16;
    __this->ColorInfo.Type = 20;
}

TextShaderData* TextShaderData__New_1(::uStatic* __this, ::app::Uno::Graphics::IndexBuffer* ibo, ::app::Uno::Graphics::VertexBuffer* vbo)
{
    TextShaderData* inst = (TextShaderData*)::uAllocObject(sizeof(TextShaderData), TextShaderData__typeof());
    inst->_ObjInit(ibo, vbo);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Content/Fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextTransform__uType* TextTransform__typeof()
{
    static ::uStaticStrong<TextTransform__uType*> type;
    if (type != NULL) return type;

    type = (TextTransform__uType*)::uAllocClassType(sizeof(TextTransform__uType), "Uno.Content.Fonts.TextTransform", false, 0, 0, 0);

    type->__fp_get_CullFace = TextTransform__get_CullFace;

    return type;
}

void TextTransform___ObjInit(TextTransform* __this)
{
}

int TextTransform__get_CullFace(TextTransform* __this)
{
    return 0;
}

}}}}
