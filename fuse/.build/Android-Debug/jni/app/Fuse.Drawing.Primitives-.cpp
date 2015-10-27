#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.BlendMode.h>
#include <app/Fuse.Drawing.BlendModeHelpers.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.Drawing.ImageFill.h>
#include <app/Fuse.Drawing.ImageFill_DrawParams.h>
#include <app/Fuse.Drawing.Internal.Float2Buffer.h>
#include <app/Fuse.Drawing.Internal.FloatBuffer.h>
#include <app/Fuse.Drawing.Internal.TypedBuffer.h>
#include <app/Fuse.Drawing.Internal.UShortBuffer.h>
#include <app/Fuse.Drawing.LinearGradient.h>
#include <app/Fuse.Drawing.Primitives.Circle.h>
#include <app/Fuse.Drawing.Primitives.ConcaveWedgeCoverage.h>
#include <app/Fuse.Drawing.Primitives.ConvexWedgeCoverage.h>
#include <app/Fuse.Drawing.Primitives.Coverage.h>
#include <app/Fuse.Drawing.Primitives.FillCoverage.h>
#include <app/Fuse.Drawing.Primitives.LimitCoverage.h>
#include <app/Fuse.Drawing.Primitives.OneLimitCoverage.h>
#include <app/Fuse.Drawing.Primitives.Rectangle.h>
#include <app/Fuse.Drawing.Primitives.StrokeCoverage.h>
#include <app/Fuse.Drawing.Primitives.Wedge.h>
#include <app/Fuse.Drawing.Primitives.WedgeCoverage.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.StaticSolidColor.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Graphics.BlendOperand.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.IndexType.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Math.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.String.h>
#include <app/Uno.UShort.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Primitives {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Primitives/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Circle*> Circle__Singleton;

Circle__uType* Circle__typeof()
{
    static ::uStaticStrong<Circle__uType*> type;
    if (type != NULL) return type;

    type = (Circle__uType*)::uAllocClassType(sizeof(Circle__uType), "Fuse.Drawing.Primitives.Circle", false, 0, 77, 0);

    type->SetStrongRefs(
        "_bufferIndex", offsetof(Circle, _bufferIndex),
        "_bufferVertex", offsetof(Circle, _bufferVertex),
        "_draw_5911b21a._compiledProgram", offsetof(Circle, _draw_5911b21a._compiledProgram),
        "_draw_5911b21a._constValues", offsetof(Circle, _draw_5911b21a._constValues),
        "_draw_5911b21a._Program", offsetof(Circle, _draw_5911b21a._Program),
        "_draw_59122679._compiledProgram", offsetof(Circle, _draw_59122679._compiledProgram),
        "_draw_59122679._constValues", offsetof(Circle, _draw_59122679._constValues),
        "_draw_59122679._Program", offsetof(Circle, _draw_59122679._Program),
        "_draw_59129ad8._compiledProgram", offsetof(Circle, _draw_59129ad8._compiledProgram),
        "_draw_59129ad8._constValues", offsetof(Circle, _draw_59129ad8._constValues),
        "_draw_59129ad8._Program", offsetof(Circle, _draw_59129ad8._Program),
        "_draw_63713b1a._compiledProgram", offsetof(Circle, _draw_63713b1a._compiledProgram),
        "_draw_63713b1a._constValues", offsetof(Circle, _draw_63713b1a._constValues),
        "_draw_63713b1a._Program", offsetof(Circle, _draw_63713b1a._Program),
        "_draw_6371af79._compiledProgram", offsetof(Circle, _draw_6371af79._compiledProgram),
        "_draw_6371af79._constValues", offsetof(Circle, _draw_6371af79._constValues),
        "_draw_6371af79._Program", offsetof(Circle, _draw_6371af79._Program),
        "_draw_637bafa3._compiledProgram", offsetof(Circle, _draw_637bafa3._compiledProgram),
        "_draw_637bafa3._constValues", offsetof(Circle, _draw_637bafa3._constValues),
        "_draw_637bafa3._Program", offsetof(Circle, _draw_637bafa3._Program),
        "_draw_758125db._compiledProgram", offsetof(Circle, _draw_758125db._compiledProgram),
        "_draw_758125db._constValues", offsetof(Circle, _draw_758125db._constValues),
        "_draw_758125db._Program", offsetof(Circle, _draw_758125db._Program),
        "_draw_75819a3a._compiledProgram", offsetof(Circle, _draw_75819a3a._compiledProgram),
        "_draw_75819a3a._constValues", offsetof(Circle, _draw_75819a3a._constValues),
        "_draw_75819a3a._Program", offsetof(Circle, _draw_75819a3a._Program),
        "_draw_75820e99._compiledProgram", offsetof(Circle, _draw_75820e99._compiledProgram),
        "_draw_75820e99._constValues", offsetof(Circle, _draw_75820e99._constValues),
        "_draw_75820e99._Program", offsetof(Circle, _draw_75820e99._Program),
        "_draw_77d9da69._compiledProgram", offsetof(Circle, _draw_77d9da69._compiledProgram),
        "_draw_77d9da69._constValues", offsetof(Circle, _draw_77d9da69._constValues),
        "_draw_77d9da69._Program", offsetof(Circle, _draw_77d9da69._Program),
        "_draw_77da4ec8._compiledProgram", offsetof(Circle, _draw_77da4ec8._compiledProgram),
        "_draw_77da4ec8._constValues", offsetof(Circle, _draw_77da4ec8._constValues),
        "_draw_77da4ec8._Program", offsetof(Circle, _draw_77da4ec8._Program),
        "_draw_79559021._compiledProgram", offsetof(Circle, _draw_79559021._compiledProgram),
        "_draw_79559021._constValues", offsetof(Circle, _draw_79559021._constValues),
        "_draw_79559021._Program", offsetof(Circle, _draw_79559021._Program),
        "_draw_79560480._compiledProgram", offsetof(Circle, _draw_79560480._compiledProgram),
        "_draw_79560480._constValues", offsetof(Circle, _draw_79560480._constValues),
        "_draw_79560480._Program", offsetof(Circle, _draw_79560480._Program),
        "_draw_795678df._compiledProgram", offsetof(Circle, _draw_795678df._compiledProgram),
        "_draw_795678df._constValues", offsetof(Circle, _draw_795678df._constValues),
        "_draw_795678df._Program", offsetof(Circle, _draw_795678df._Program),
        "_draw_7aa10cd5._compiledProgram", offsetof(Circle, _draw_7aa10cd5._compiledProgram),
        "_draw_7aa10cd5._constValues", offsetof(Circle, _draw_7aa10cd5._constValues),
        "_draw_7aa10cd5._Program", offsetof(Circle, _draw_7aa10cd5._Program),
        "_draw_7aa18134._compiledProgram", offsetof(Circle, _draw_7aa18134._compiledProgram),
        "_draw_7aa18134._constValues", offsetof(Circle, _draw_7aa18134._constValues),
        "_draw_7aa18134._Program", offsetof(Circle, _draw_7aa18134._Program),
        "_draw_7aa1f593._compiledProgram", offsetof(Circle, _draw_7aa1f593._compiledProgram),
        "_draw_7aa1f593._constValues", offsetof(Circle, _draw_7aa1f593._constValues),
        "_draw_7aa1f593._Program", offsetof(Circle, _draw_7aa1f593._Program),
        "_draw_7fc0f3cf._compiledProgram", offsetof(Circle, _draw_7fc0f3cf._compiledProgram),
        "_draw_7fc0f3cf._constValues", offsetof(Circle, _draw_7fc0f3cf._constValues),
        "_draw_7fc0f3cf._Program", offsetof(Circle, _draw_7fc0f3cf._Program),
        "_draw_c4bd2c3a._compiledProgram", offsetof(Circle, _draw_c4bd2c3a._compiledProgram),
        "_draw_c4bd2c3a._constValues", offsetof(Circle, _draw_c4bd2c3a._constValues),
        "_draw_c4bd2c3a._Program", offsetof(Circle, _draw_c4bd2c3a._Program),
        "_draw_c4bda099._compiledProgram", offsetof(Circle, _draw_c4bda099._compiledProgram),
        "_draw_c4bda099._constValues", offsetof(Circle, _draw_c4bda099._constValues),
        "_draw_c4bda099._Program", offsetof(Circle, _draw_c4bda099._Program),
        "_draw_c4be14f8._compiledProgram", offsetof(Circle, _draw_c4be14f8._compiledProgram),
        "_draw_c4be14f8._constValues", offsetof(Circle, _draw_c4be14f8._constValues),
        "_draw_c4be14f8._Program", offsetof(Circle, _draw_c4be14f8._Program),
        "_draw_f7c5c0fa._compiledProgram", offsetof(Circle, _draw_f7c5c0fa._compiledProgram),
        "_draw_f7c5c0fa._constValues", offsetof(Circle, _draw_f7c5c0fa._constValues),
        "_draw_f7c5c0fa._Program", offsetof(Circle, _draw_f7c5c0fa._Program),
        "_draw_f7c63559._compiledProgram", offsetof(Circle, _draw_f7c63559._compiledProgram),
        "_draw_f7c63559._constValues", offsetof(Circle, _draw_f7c63559._constValues),
        "_draw_f7c63559._Program", offsetof(Circle, _draw_f7c63559._Program),
        "_draw_f7c6a9b8._compiledProgram", offsetof(Circle, _draw_f7c6a9b8._compiledProgram),
        "_draw_f7c6a9b8._constValues", offsetof(Circle, _draw_f7c6a9b8._constValues),
        "_draw_f7c6a9b8._Program", offsetof(Circle, _draw_f7c6a9b8._Program),
        "_fillCoverage", offsetof(Circle, _fillCoverage),
        "_oneLimitCoverage", offsetof(Circle, _oneLimitCoverage),
        "_strokeCoverage", offsetof(Circle, _strokeCoverage));

    return type;
}

void Circle___ObjInit(Circle* __this)
{
    __this->_oneLimitCoverage = (::app::Fuse::Drawing::Primitives::LimitCoverage*)::app::Fuse::Drawing::Primitives::OneLimitCoverage__New_1(NULL);
    __this->_strokeCoverage = ::app::Fuse::Drawing::Primitives::StrokeCoverage__New_1(NULL);
    __this->_fillCoverage = ::app::Fuse::Drawing::Primitives::FillCoverage__New_1(NULL);
    __this->init_DrawCalls();
}

void Circle___TypeInit(::uStatic* __this)
{
    Circle__Singleton = Circle__New_1(NULL);
}

void Circle__Draw(Circle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Fuse::Drawing::Primitives::Coverage* cover, ::app::Fuse::Drawing::Primitives::LimitCoverage* limit, ::app::Uno::Float2 extend, ::app::Uno::Float2 center, float smoothness)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_126 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_127 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_128 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_129 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_130 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_131 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_132 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_133 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_134 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_135 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_136 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_137 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_138 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_139 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_140 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_141 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_142 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_143 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_144 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_145 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_146 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_147 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_148 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_149 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_150 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_151 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_152 = ::app::Uno::Float4();

    if (__this->_bufferVertex == NULL)
    {
        __this->InitBuffers();
    }

    if (::uIs(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))
    {
        if (::uIs(brush, ::app::Fuse::Drawing::ImageFill__typeof()))
        {
            if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))
            {
                ::app::Uno::Graphics::Texture2D* Texture_758125db_13_6_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
                ::app::Fuse::Drawing::ImageFill_DrawParams DP_758125db_13_5_7 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(dc, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                ::app::Uno::Float2 StartVec_758125db_19_2_14 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_758125db_19_3_15 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_758125db.BlendEnabled(true);
                    __this->_draw_758125db.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_758125db.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_758125db.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_758125db.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_758125db.DepthTestEnabled(false);
                    __this->_draw_758125db.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_758125db.Const_1(0, Texture_758125db_13_6_4 == NULL);
                    __this->_draw_758125db.Use();
                    __this->_draw_758125db.Attrib(1, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_758125db.Uniform_7(2, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_758125db.Uniform_7(3, center);
                    __this->_draw_758125db.Uniform_2(4, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_758125db.Uniform_7(5, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_758125db.Uniform_7(6, DP_758125db_13_5_7.Origin);
                    __this->_draw_758125db.Uniform_7(7, DP_758125db_13_5_7.Size);
                    __this->_draw_758125db.Uniform_7(8, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_123 = DP_758125db_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_123.Z, ind_123.W)), (ind_124 = DP_758125db_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_124.X, ind_124.Y))));
                    __this->_draw_758125db.Uniform_7(9, (ind_125 = DP_758125db_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_125.X, ind_125.Y)));
                    __this->_draw_758125db.Uniform_5(10, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
                    __this->_draw_758125db.Uniform_8(11, radius);
                    __this->_draw_758125db.Uniform_8(12, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_758125db.Uniform_8(13, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_758125db.Uniform_8(14, dc->ViewportPointDensity());
                    __this->_draw_758125db.Uniform_8(15, 1.0f / smoothness);
                    __this->_draw_758125db.Uniform_8(16, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
                    __this->_draw_758125db.Uniform_7(17, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_758125db_19_2_14, EndVec_758125db_19_3_15)));
                    __this->_draw_758125db.Uniform_7(18, StartVec_758125db_19_2_14);
                    __this->_draw_758125db.Uniform_7(19, EndVec_758125db_19_3_15);
                    __this->_draw_758125db.Sampler_1(20, Texture_758125db_13_6_4);
                    __this->_draw_758125db.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))
            {
                ::app::Uno::Graphics::Texture2D* Texture_75819a3a_13_6_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
                ::app::Fuse::Drawing::ImageFill_DrawParams DP_75819a3a_13_5_7 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(dc, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                ::app::Uno::Float2 StartVec_75819a3a_19_2_14 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_75819a3a_19_3_15 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_75819a3a.BlendEnabled(true);
                    __this->_draw_75819a3a.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_75819a3a.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_75819a3a.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_75819a3a.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_75819a3a.DepthTestEnabled(false);
                    __this->_draw_75819a3a.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_75819a3a.Const_1(0, Texture_75819a3a_13_6_4 == NULL);
                    __this->_draw_75819a3a.Use();
                    __this->_draw_75819a3a.Attrib(1, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_75819a3a.Uniform_7(2, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_75819a3a.Uniform_7(3, center);
                    __this->_draw_75819a3a.Uniform_2(4, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_75819a3a.Uniform_7(5, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_75819a3a.Uniform_7(6, DP_75819a3a_13_5_7.Origin);
                    __this->_draw_75819a3a.Uniform_7(7, DP_75819a3a_13_5_7.Size);
                    __this->_draw_75819a3a.Uniform_7(8, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_126 = DP_75819a3a_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_126.Z, ind_126.W)), (ind_127 = DP_75819a3a_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_127.X, ind_127.Y))));
                    __this->_draw_75819a3a.Uniform_7(9, (ind_128 = DP_75819a3a_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_128.X, ind_128.Y)));
                    __this->_draw_75819a3a.Uniform_5(10, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
                    __this->_draw_75819a3a.Uniform_8(11, radius);
                    __this->_draw_75819a3a.Uniform_8(12, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_75819a3a.Uniform_8(13, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_75819a3a.Uniform_8(14, dc->ViewportPointDensity());
                    __this->_draw_75819a3a.Uniform_8(15, 1.0f / smoothness);
                    __this->_draw_75819a3a.Uniform_8(16, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
                    __this->_draw_75819a3a.Uniform_7(17, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_75819a3a_19_2_14, EndVec_75819a3a_19_3_15)));
                    __this->_draw_75819a3a.Uniform_7(18, StartVec_75819a3a_19_2_14);
                    __this->_draw_75819a3a.Uniform_7(19, EndVec_75819a3a_19_3_15);
                    __this->_draw_75819a3a.Sampler_1(20, Texture_75819a3a_13_6_4);
                    __this->_draw_75819a3a.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::OneLimitCoverage__typeof()))
            {
                ::app::Uno::Graphics::Texture2D* Texture_75820e99_13_6_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
                ::app::Fuse::Drawing::ImageFill_DrawParams DP_75820e99_13_5_7 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(dc, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                {
                    __this->_draw_75820e99.BlendEnabled(true);
                    __this->_draw_75820e99.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_75820e99.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_75820e99.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_75820e99.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_75820e99.DepthTestEnabled(false);
                    __this->_draw_75820e99.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_75820e99.Const_1(0, Texture_75820e99_13_6_4 == NULL);
                    __this->_draw_75820e99.Use();
                    __this->_draw_75820e99.Attrib(1, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_75820e99.Uniform_7(2, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_75820e99.Uniform_7(3, center);
                    __this->_draw_75820e99.Uniform_2(4, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_75820e99.Uniform_7(5, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_75820e99.Uniform_7(6, DP_75820e99_13_5_7.Origin);
                    __this->_draw_75820e99.Uniform_7(7, DP_75820e99_13_5_7.Size);
                    __this->_draw_75820e99.Uniform_7(8, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_129 = DP_75820e99_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_129.Z, ind_129.W)), (ind_130 = DP_75820e99_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_130.X, ind_130.Y))));
                    __this->_draw_75820e99.Uniform_7(9, (ind_131 = DP_75820e99_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_131.X, ind_131.Y)));
                    __this->_draw_75820e99.Uniform_5(10, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
                    __this->_draw_75820e99.Uniform_8(11, radius);
                    __this->_draw_75820e99.Uniform_8(12, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_75820e99.Uniform_8(13, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_75820e99.Uniform_8(14, dc->ViewportPointDensity());
                    __this->_draw_75820e99.Uniform_8(15, 1.0f / smoothness);
                    __this->_draw_75820e99.Uniform_8(16, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
                    __this->_draw_75820e99.Sampler_1(17, Texture_75820e99_13_6_4);
                    __this->_draw_75820e99.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::SolidColor__typeof()))
        {
            if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 StartVec_7aa10cd5_19_2_7 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_7aa10cd5_19_3_8 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_7aa10cd5.BlendEnabled(true);
                    __this->_draw_7aa10cd5.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_7aa10cd5.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_7aa10cd5.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_7aa10cd5.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_7aa10cd5.DepthTestEnabled(false);
                    __this->_draw_7aa10cd5.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_7aa10cd5.Use();
                    __this->_draw_7aa10cd5.Attrib(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_7aa10cd5.Uniform_7(1, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_7aa10cd5.Uniform_7(2, center);
                    __this->_draw_7aa10cd5.Uniform_2(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_7aa10cd5.Uniform_8(4, radius);
                    __this->_draw_7aa10cd5.Uniform_8(5, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_7aa10cd5.Uniform_8(6, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_7aa10cd5.Uniform_8(7, dc->ViewportPointDensity());
                    __this->_draw_7aa10cd5.Uniform_8(8, 1.0f / smoothness);
                    __this->_draw_7aa10cd5.Uniform_8(9, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W);
                    __this->_draw_7aa10cd5.Uniform_6(10, (ind_132 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_132.X, ind_132.Y, ind_132.Z)));
                    __this->_draw_7aa10cd5.Uniform_8(11, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity());
                    __this->_draw_7aa10cd5.Uniform_7(12, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_7aa10cd5_19_2_7, EndVec_7aa10cd5_19_3_8)));
                    __this->_draw_7aa10cd5.Uniform_7(13, StartVec_7aa10cd5_19_2_7);
                    __this->_draw_7aa10cd5.Uniform_7(14, EndVec_7aa10cd5_19_3_8);
                    __this->_draw_7aa10cd5.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 StartVec_7aa18134_19_2_7 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_7aa18134_19_3_8 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_7aa18134.BlendEnabled(true);
                    __this->_draw_7aa18134.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_7aa18134.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_7aa18134.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_7aa18134.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_7aa18134.DepthTestEnabled(false);
                    __this->_draw_7aa18134.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_7aa18134.Use();
                    __this->_draw_7aa18134.Attrib(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_7aa18134.Uniform_7(1, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_7aa18134.Uniform_7(2, center);
                    __this->_draw_7aa18134.Uniform_2(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_7aa18134.Uniform_8(4, radius);
                    __this->_draw_7aa18134.Uniform_8(5, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_7aa18134.Uniform_8(6, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_7aa18134.Uniform_8(7, dc->ViewportPointDensity());
                    __this->_draw_7aa18134.Uniform_8(8, 1.0f / smoothness);
                    __this->_draw_7aa18134.Uniform_8(9, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W);
                    __this->_draw_7aa18134.Uniform_6(10, (ind_133 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_133.X, ind_133.Y, ind_133.Z)));
                    __this->_draw_7aa18134.Uniform_8(11, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity());
                    __this->_draw_7aa18134.Uniform_7(12, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_7aa18134_19_2_7, EndVec_7aa18134_19_3_8)));
                    __this->_draw_7aa18134.Uniform_7(13, StartVec_7aa18134_19_2_7);
                    __this->_draw_7aa18134.Uniform_7(14, EndVec_7aa18134_19_3_8);
                    __this->_draw_7aa18134.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::OneLimitCoverage__typeof()))
            {
                {
                    __this->_draw_7aa1f593.BlendEnabled(true);
                    __this->_draw_7aa1f593.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_7aa1f593.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_7aa1f593.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_7aa1f593.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_7aa1f593.DepthTestEnabled(false);
                    __this->_draw_7aa1f593.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_7aa1f593.Use();
                    __this->_draw_7aa1f593.Attrib(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_7aa1f593.Uniform_7(1, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_7aa1f593.Uniform_7(2, center);
                    __this->_draw_7aa1f593.Uniform_2(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_7aa1f593.Uniform_8(4, radius);
                    __this->_draw_7aa1f593.Uniform_8(5, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_7aa1f593.Uniform_8(6, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_7aa1f593.Uniform_8(7, dc->ViewportPointDensity());
                    __this->_draw_7aa1f593.Uniform_8(8, 1.0f / smoothness);
                    __this->_draw_7aa1f593.Uniform_8(9, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W);
                    __this->_draw_7aa1f593.Uniform_6(10, (ind_134 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_134.X, ind_134.Y, ind_134.Z)));
                    __this->_draw_7aa1f593.Uniform_8(11, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity());
                    __this->_draw_7aa1f593.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))
        {
            if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 angleSlope_7fc0f3cf_13_17_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                float angleLen_7fc0f3cf_13_16_7 = ::app::Uno::Math__Abs_8(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_8(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                ::app::Uno::Float2 StartVec_7fc0f3cf_19_2_15 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_7fc0f3cf_19_3_16 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_7fc0f3cf.BlendEnabled(true);
                    __this->_draw_7fc0f3cf.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_7fc0f3cf.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_7fc0f3cf.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_7fc0f3cf.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_7fc0f3cf.DepthTestEnabled(false);
                    __this->_draw_7fc0f3cf.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_7fc0f3cf.Use();
                    __this->_draw_7fc0f3cf.Attrib(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_7fc0f3cf.Uniform_7(1, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_7fc0f3cf.Uniform_7(2, center);
                    __this->_draw_7fc0f3cf.Uniform_2(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_7fc0f3cf.Uniform_7(4, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_7fc0f3cf.Uniform_7(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, node->ActualSize(), 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, angleSlope_7fc0f3cf_13_17_6, angleLen_7fc0f3cf_13_16_7), 2.0f)) : ::app::Uno::Float2__op_Multiply_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), node->ActualSize()));
                    __this->_draw_7fc0f3cf.Uniform_7(6, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
                    __this->_draw_7fc0f3cf.Uniform_8(7, radius);
                    __this->_draw_7fc0f3cf.Uniform_8(8, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_7fc0f3cf.Uniform_8(9, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_7fc0f3cf.Uniform_8(10, dc->ViewportPointDensity());
                    __this->_draw_7fc0f3cf.Uniform_8(11, 1.0f / smoothness);
                    __this->_draw_7fc0f3cf.Uniform_8(12, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
                    __this->_draw_7fc0f3cf.Uniform_7(13, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_7fc0f3cf_13_17_6 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_7fc0f3cf.Uniform_8(14, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_7fc0f3cf_13_16_7 : ::app::Uno::Vector__Length_2(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_7fc0f3cf.Uniform_7(15, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_7fc0f3cf_19_2_15, EndVec_7fc0f3cf_19_3_16)));
                    __this->_draw_7fc0f3cf.Uniform_7(16, StartVec_7fc0f3cf_19_2_15);
                    __this->_draw_7fc0f3cf.Uniform_7(17, EndVec_7fc0f3cf_19_3_16);
                    __this->_draw_7fc0f3cf.Sampler_1(18, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
                    __this->_draw_7fc0f3cf.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 angleSlope_77d9da69_13_17_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                float angleLen_77d9da69_13_16_7 = ::app::Uno::Math__Abs_8(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_8(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                ::app::Uno::Float2 StartVec_77d9da69_19_2_15 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_77d9da69_19_3_16 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_77d9da69.BlendEnabled(true);
                    __this->_draw_77d9da69.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_77d9da69.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_77d9da69.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_77d9da69.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_77d9da69.DepthTestEnabled(false);
                    __this->_draw_77d9da69.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_77d9da69.Use();
                    __this->_draw_77d9da69.Attrib(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_77d9da69.Uniform_7(1, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_77d9da69.Uniform_7(2, center);
                    __this->_draw_77d9da69.Uniform_2(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_77d9da69.Uniform_7(4, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_77d9da69.Uniform_7(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, node->ActualSize(), 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, angleSlope_77d9da69_13_17_6, angleLen_77d9da69_13_16_7), 2.0f)) : ::app::Uno::Float2__op_Multiply_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), node->ActualSize()));
                    __this->_draw_77d9da69.Uniform_7(6, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
                    __this->_draw_77d9da69.Uniform_8(7, radius);
                    __this->_draw_77d9da69.Uniform_8(8, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_77d9da69.Uniform_8(9, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_77d9da69.Uniform_8(10, dc->ViewportPointDensity());
                    __this->_draw_77d9da69.Uniform_8(11, 1.0f / smoothness);
                    __this->_draw_77d9da69.Uniform_8(12, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
                    __this->_draw_77d9da69.Uniform_7(13, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_77d9da69_13_17_6 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_77d9da69.Uniform_8(14, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_77d9da69_13_16_7 : ::app::Uno::Vector__Length_2(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_77d9da69.Uniform_7(15, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_77d9da69_19_2_15, EndVec_77d9da69_19_3_16)));
                    __this->_draw_77d9da69.Uniform_7(16, StartVec_77d9da69_19_2_15);
                    __this->_draw_77d9da69.Uniform_7(17, EndVec_77d9da69_19_3_16);
                    __this->_draw_77d9da69.Sampler_1(18, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
                    __this->_draw_77d9da69.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::OneLimitCoverage__typeof()))
            {
                ::app::Uno::Float2 angleSlope_77da4ec8_13_17_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                float angleLen_77da4ec8_13_16_7 = ::app::Uno::Math__Abs_8(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_8(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                {
                    __this->_draw_77da4ec8.BlendEnabled(true);
                    __this->_draw_77da4ec8.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_77da4ec8.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_77da4ec8.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_77da4ec8.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_77da4ec8.DepthTestEnabled(false);
                    __this->_draw_77da4ec8.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_77da4ec8.Use();
                    __this->_draw_77da4ec8.Attrib(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_77da4ec8.Uniform_7(1, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_77da4ec8.Uniform_7(2, center);
                    __this->_draw_77da4ec8.Uniform_2(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_77da4ec8.Uniform_7(4, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_77da4ec8.Uniform_7(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, node->ActualSize(), 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, angleSlope_77da4ec8_13_17_6, angleLen_77da4ec8_13_16_7), 2.0f)) : ::app::Uno::Float2__op_Multiply_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), node->ActualSize()));
                    __this->_draw_77da4ec8.Uniform_7(6, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
                    __this->_draw_77da4ec8.Uniform_8(7, radius);
                    __this->_draw_77da4ec8.Uniform_8(8, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_77da4ec8.Uniform_8(9, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_77da4ec8.Uniform_8(10, dc->ViewportPointDensity());
                    __this->_draw_77da4ec8.Uniform_8(11, 1.0f / smoothness);
                    __this->_draw_77da4ec8.Uniform_8(12, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
                    __this->_draw_77da4ec8.Uniform_7(13, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_77da4ec8_13_17_6 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_77da4ec8.Uniform_8(14, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_77da4ec8_13_16_7 : ::app::Uno::Vector__Length_2(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_77da4ec8.Sampler_1(15, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
                    __this->_draw_77da4ec8.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
        {
            if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 StartVec_79559021_19_2_7 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_79559021_19_3_8 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_79559021.BlendEnabled(true);
                    __this->_draw_79559021.BlendSrcRgb(__this->Draw_BlendSrcRgb_79559021_11_4_22);
                    __this->_draw_79559021.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_79559021_11_6_23);
                    __this->_draw_79559021.BlendDstRgb(__this->Draw_BlendDstRgb_79559021_11_5_24);
                    __this->_draw_79559021.BlendDstAlpha(__this->Draw_BlendDstAlpha_79559021_11_7_25);
                    __this->_draw_79559021.DepthTestEnabled(false);
                    __this->_draw_79559021.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_79559021.Use();
                    __this->_draw_79559021.Attrib(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_79559021.Uniform_7(1, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_79559021.Uniform_7(2, center);
                    __this->_draw_79559021.Uniform_2(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_79559021.Uniform_8(4, radius);
                    __this->_draw_79559021.Uniform_8(5, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_79559021.Uniform_8(6, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_79559021.Uniform_8(7, dc->ViewportPointDensity());
                    __this->_draw_79559021.Uniform_8(8, 1.0f / smoothness);
                    __this->_draw_79559021.Uniform_8(9, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W);
                    __this->_draw_79559021.Uniform_6(10, (ind_135 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_135.X, ind_135.Y, ind_135.Z)));
                    __this->_draw_79559021.Uniform_7(11, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_79559021_19_2_7, EndVec_79559021_19_3_8)));
                    __this->_draw_79559021.Uniform_7(12, StartVec_79559021_19_2_7);
                    __this->_draw_79559021.Uniform_7(13, EndVec_79559021_19_3_8);
                    __this->_draw_79559021.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 StartVec_79560480_19_2_7 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_79560480_19_3_8 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_79560480.BlendEnabled(true);
                    __this->_draw_79560480.BlendSrcRgb(__this->Draw_BlendSrcRgb_79559021_11_4_22);
                    __this->_draw_79560480.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_79559021_11_6_23);
                    __this->_draw_79560480.BlendDstRgb(__this->Draw_BlendDstRgb_79559021_11_5_24);
                    __this->_draw_79560480.BlendDstAlpha(__this->Draw_BlendDstAlpha_79559021_11_7_25);
                    __this->_draw_79560480.DepthTestEnabled(false);
                    __this->_draw_79560480.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_79560480.Use();
                    __this->_draw_79560480.Attrib(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_79560480.Uniform_7(1, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_79560480.Uniform_7(2, center);
                    __this->_draw_79560480.Uniform_2(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_79560480.Uniform_8(4, radius);
                    __this->_draw_79560480.Uniform_8(5, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_79560480.Uniform_8(6, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_79560480.Uniform_8(7, dc->ViewportPointDensity());
                    __this->_draw_79560480.Uniform_8(8, 1.0f / smoothness);
                    __this->_draw_79560480.Uniform_8(9, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W);
                    __this->_draw_79560480.Uniform_6(10, (ind_136 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_136.X, ind_136.Y, ind_136.Z)));
                    __this->_draw_79560480.Uniform_7(11, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_79560480_19_2_7, EndVec_79560480_19_3_8)));
                    __this->_draw_79560480.Uniform_7(12, StartVec_79560480_19_2_7);
                    __this->_draw_79560480.Uniform_7(13, EndVec_79560480_19_3_8);
                    __this->_draw_79560480.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::OneLimitCoverage__typeof()))
            {
                {
                    __this->_draw_795678df.BlendEnabled(true);
                    __this->_draw_795678df.BlendSrcRgb(__this->Draw_BlendSrcRgb_79559021_11_4_22);
                    __this->_draw_795678df.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_79559021_11_6_23);
                    __this->_draw_795678df.BlendDstRgb(__this->Draw_BlendDstRgb_79559021_11_5_24);
                    __this->_draw_795678df.BlendDstAlpha(__this->Draw_BlendDstAlpha_79559021_11_7_25);
                    __this->_draw_795678df.DepthTestEnabled(false);
                    __this->_draw_795678df.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_795678df.Use();
                    __this->_draw_795678df.Attrib(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_795678df.Uniform_7(1, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_795678df.Uniform_7(2, center);
                    __this->_draw_795678df.Uniform_2(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_795678df.Uniform_8(4, radius);
                    __this->_draw_795678df.Uniform_8(5, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                    __this->_draw_795678df.Uniform_8(6, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                    __this->_draw_795678df.Uniform_8(7, dc->ViewportPointDensity());
                    __this->_draw_795678df.Uniform_8(8, 1.0f / smoothness);
                    __this->_draw_795678df.Uniform_8(9, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W);
                    __this->_draw_795678df.Uniform_6(10, (ind_137 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_137.X, ind_137.Y, ind_137.Z)));
                    __this->_draw_795678df.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
        }
    }
    else if (::uIs(cover, ::app::Fuse::Drawing::Primitives::FillCoverage__typeof()))
    {
        if (::uIs(brush, ::app::Fuse::Drawing::ImageFill__typeof()))
        {
            if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))
            {
                ::app::Uno::Graphics::Texture2D* Texture_c4bd2c3a_13_6_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
                ::app::Fuse::Drawing::ImageFill_DrawParams DP_c4bd2c3a_13_5_7 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(dc, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                ::app::Uno::Float2 StartVec_c4bd2c3a_19_2_13 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_c4bd2c3a_19_3_14 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_c4bd2c3a.BlendEnabled(true);
                    __this->_draw_c4bd2c3a.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_c4bd2c3a.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_c4bd2c3a.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_c4bd2c3a.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_c4bd2c3a.DepthTestEnabled(false);
                    __this->_draw_c4bd2c3a.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_c4bd2c3a.Const_1(0, Texture_c4bd2c3a_13_6_4 == NULL);
                    __this->_draw_c4bd2c3a.Use();
                    __this->_draw_c4bd2c3a.Attrib(1, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_c4bd2c3a.Uniform_7(2, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_c4bd2c3a.Uniform_7(3, center);
                    __this->_draw_c4bd2c3a.Uniform_2(4, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_c4bd2c3a.Uniform_7(5, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_c4bd2c3a.Uniform_7(6, DP_c4bd2c3a_13_5_7.Origin);
                    __this->_draw_c4bd2c3a.Uniform_7(7, DP_c4bd2c3a_13_5_7.Size);
                    __this->_draw_c4bd2c3a.Uniform_7(8, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_138 = DP_c4bd2c3a_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_138.Z, ind_138.W)), (ind_139 = DP_c4bd2c3a_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_139.X, ind_139.Y))));
                    __this->_draw_c4bd2c3a.Uniform_7(9, (ind_140 = DP_c4bd2c3a_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_140.X, ind_140.Y)));
                    __this->_draw_c4bd2c3a.Uniform_5(10, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
                    __this->_draw_c4bd2c3a.Uniform_8(11, radius);
                    __this->_draw_c4bd2c3a.Uniform_8(12, dc->ViewportPointDensity());
                    __this->_draw_c4bd2c3a.Uniform_8(13, 1.0f / smoothness);
                    __this->_draw_c4bd2c3a.Uniform_8(14, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
                    __this->_draw_c4bd2c3a.Uniform_7(15, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_c4bd2c3a_19_2_13, EndVec_c4bd2c3a_19_3_14)));
                    __this->_draw_c4bd2c3a.Uniform_7(16, StartVec_c4bd2c3a_19_2_13);
                    __this->_draw_c4bd2c3a.Uniform_7(17, EndVec_c4bd2c3a_19_3_14);
                    __this->_draw_c4bd2c3a.Sampler_1(18, Texture_c4bd2c3a_13_6_4);
                    __this->_draw_c4bd2c3a.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))
            {
                ::app::Uno::Graphics::Texture2D* Texture_c4bda099_13_6_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
                ::app::Fuse::Drawing::ImageFill_DrawParams DP_c4bda099_13_5_7 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(dc, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                ::app::Uno::Float2 StartVec_c4bda099_19_2_13 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_c4bda099_19_3_14 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_c4bda099.BlendEnabled(true);
                    __this->_draw_c4bda099.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_c4bda099.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_c4bda099.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_c4bda099.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_c4bda099.DepthTestEnabled(false);
                    __this->_draw_c4bda099.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_c4bda099.Const_1(0, Texture_c4bda099_13_6_4 == NULL);
                    __this->_draw_c4bda099.Use();
                    __this->_draw_c4bda099.Attrib(1, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_c4bda099.Uniform_7(2, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_c4bda099.Uniform_7(3, center);
                    __this->_draw_c4bda099.Uniform_2(4, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_c4bda099.Uniform_7(5, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_c4bda099.Uniform_7(6, DP_c4bda099_13_5_7.Origin);
                    __this->_draw_c4bda099.Uniform_7(7, DP_c4bda099_13_5_7.Size);
                    __this->_draw_c4bda099.Uniform_7(8, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_141 = DP_c4bda099_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_141.Z, ind_141.W)), (ind_142 = DP_c4bda099_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_142.X, ind_142.Y))));
                    __this->_draw_c4bda099.Uniform_7(9, (ind_143 = DP_c4bda099_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_143.X, ind_143.Y)));
                    __this->_draw_c4bda099.Uniform_5(10, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
                    __this->_draw_c4bda099.Uniform_8(11, radius);
                    __this->_draw_c4bda099.Uniform_8(12, dc->ViewportPointDensity());
                    __this->_draw_c4bda099.Uniform_8(13, 1.0f / smoothness);
                    __this->_draw_c4bda099.Uniform_8(14, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
                    __this->_draw_c4bda099.Uniform_7(15, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_c4bda099_19_2_13, EndVec_c4bda099_19_3_14)));
                    __this->_draw_c4bda099.Uniform_7(16, StartVec_c4bda099_19_2_13);
                    __this->_draw_c4bda099.Uniform_7(17, EndVec_c4bda099_19_3_14);
                    __this->_draw_c4bda099.Sampler_1(18, Texture_c4bda099_13_6_4);
                    __this->_draw_c4bda099.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::OneLimitCoverage__typeof()))
            {
                ::app::Uno::Graphics::Texture2D* Texture_c4be14f8_13_6_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
                ::app::Fuse::Drawing::ImageFill_DrawParams DP_c4be14f8_13_5_7 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(dc, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                {
                    __this->_draw_c4be14f8.BlendEnabled(true);
                    __this->_draw_c4be14f8.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_c4be14f8.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_c4be14f8.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_c4be14f8.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                    __this->_draw_c4be14f8.DepthTestEnabled(false);
                    __this->_draw_c4be14f8.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_c4be14f8.Const_1(0, Texture_c4be14f8_13_6_4 == NULL);
                    __this->_draw_c4be14f8.Use();
                    __this->_draw_c4be14f8.Attrib(1, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_c4be14f8.Uniform_7(2, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_c4be14f8.Uniform_7(3, center);
                    __this->_draw_c4be14f8.Uniform_2(4, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_c4be14f8.Uniform_7(5, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_c4be14f8.Uniform_7(6, DP_c4be14f8_13_5_7.Origin);
                    __this->_draw_c4be14f8.Uniform_7(7, DP_c4be14f8_13_5_7.Size);
                    __this->_draw_c4be14f8.Uniform_7(8, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_144 = DP_c4be14f8_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_144.Z, ind_144.W)), (ind_145 = DP_c4be14f8_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_145.X, ind_145.Y))));
                    __this->_draw_c4be14f8.Uniform_7(9, (ind_146 = DP_c4be14f8_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_146.X, ind_146.Y)));
                    __this->_draw_c4be14f8.Uniform_5(10, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
                    __this->_draw_c4be14f8.Uniform_8(11, radius);
                    __this->_draw_c4be14f8.Uniform_8(12, dc->ViewportPointDensity());
                    __this->_draw_c4be14f8.Uniform_8(13, 1.0f / smoothness);
                    __this->_draw_c4be14f8.Uniform_8(14, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
                    __this->_draw_c4be14f8.Sampler_1(15, Texture_c4be14f8_13_6_4);
                    __this->_draw_c4be14f8.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::SolidColor__typeof()))
        {
            if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 StartVec_63713b1a_19_2_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_63713b1a_19_3_7 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_63713b1a.BlendEnabled(true);
                    __this->_draw_63713b1a.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_63713b1a.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_63713b1a.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_63713b1a.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_63713b1a.DepthTestEnabled(false);
                    __this->_draw_63713b1a.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_63713b1a.Use();
                    __this->_draw_63713b1a.Attrib(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_63713b1a.Uniform_7(1, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_63713b1a.Uniform_7(2, center);
                    __this->_draw_63713b1a.Uniform_2(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_63713b1a.Uniform_8(4, radius);
                    __this->_draw_63713b1a.Uniform_8(5, dc->ViewportPointDensity());
                    __this->_draw_63713b1a.Uniform_8(6, 1.0f / smoothness);
                    __this->_draw_63713b1a.Uniform_8(7, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W);
                    __this->_draw_63713b1a.Uniform_6(8, (ind_147 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_147.X, ind_147.Y, ind_147.Z)));
                    __this->_draw_63713b1a.Uniform_8(9, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity());
                    __this->_draw_63713b1a.Uniform_7(10, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_63713b1a_19_2_6, EndVec_63713b1a_19_3_7)));
                    __this->_draw_63713b1a.Uniform_7(11, StartVec_63713b1a_19_2_6);
                    __this->_draw_63713b1a.Uniform_7(12, EndVec_63713b1a_19_3_7);
                    __this->_draw_63713b1a.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 StartVec_6371af79_19_2_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_6371af79_19_3_7 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_6371af79.BlendEnabled(true);
                    __this->_draw_6371af79.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_6371af79.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_6371af79.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_6371af79.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_6371af79.DepthTestEnabled(false);
                    __this->_draw_6371af79.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_6371af79.Use();
                    __this->_draw_6371af79.Attrib(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_6371af79.Uniform_7(1, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_6371af79.Uniform_7(2, center);
                    __this->_draw_6371af79.Uniform_2(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_6371af79.Uniform_8(4, radius);
                    __this->_draw_6371af79.Uniform_8(5, dc->ViewportPointDensity());
                    __this->_draw_6371af79.Uniform_8(6, 1.0f / smoothness);
                    __this->_draw_6371af79.Uniform_8(7, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W);
                    __this->_draw_6371af79.Uniform_6(8, (ind_148 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_148.X, ind_148.Y, ind_148.Z)));
                    __this->_draw_6371af79.Uniform_8(9, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity());
                    __this->_draw_6371af79.Uniform_7(10, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_6371af79_19_2_6, EndVec_6371af79_19_3_7)));
                    __this->_draw_6371af79.Uniform_7(11, StartVec_6371af79_19_2_6);
                    __this->_draw_6371af79.Uniform_7(12, EndVec_6371af79_19_3_7);
                    __this->_draw_6371af79.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::OneLimitCoverage__typeof()))
            {
                {
                    __this->_draw_637bafa3.BlendEnabled(true);
                    __this->_draw_637bafa3.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_637bafa3.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_637bafa3.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_637bafa3.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                    __this->_draw_637bafa3.DepthTestEnabled(false);
                    __this->_draw_637bafa3.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_637bafa3.Use();
                    __this->_draw_637bafa3.Attrib(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_637bafa3.Uniform_7(1, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_637bafa3.Uniform_7(2, center);
                    __this->_draw_637bafa3.Uniform_2(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_637bafa3.Uniform_8(4, radius);
                    __this->_draw_637bafa3.Uniform_8(5, dc->ViewportPointDensity());
                    __this->_draw_637bafa3.Uniform_8(6, 1.0f / smoothness);
                    __this->_draw_637bafa3.Uniform_8(7, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W);
                    __this->_draw_637bafa3.Uniform_6(8, (ind_149 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_149.X, ind_149.Y, ind_149.Z)));
                    __this->_draw_637bafa3.Uniform_8(9, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity());
                    __this->_draw_637bafa3.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))
        {
            if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 angleSlope_5911b21a_13_17_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                float angleLen_5911b21a_13_16_7 = ::app::Uno::Math__Abs_8(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_8(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                ::app::Uno::Float2 StartVec_5911b21a_19_2_14 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_5911b21a_19_3_15 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_5911b21a.BlendEnabled(true);
                    __this->_draw_5911b21a.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_5911b21a.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_5911b21a.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_5911b21a.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_5911b21a.DepthTestEnabled(false);
                    __this->_draw_5911b21a.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_5911b21a.Use();
                    __this->_draw_5911b21a.Attrib(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_5911b21a.Uniform_7(1, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_5911b21a.Uniform_7(2, center);
                    __this->_draw_5911b21a.Uniform_2(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_5911b21a.Uniform_7(4, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_5911b21a.Uniform_7(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, node->ActualSize(), 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, angleSlope_5911b21a_13_17_6, angleLen_5911b21a_13_16_7), 2.0f)) : ::app::Uno::Float2__op_Multiply_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), node->ActualSize()));
                    __this->_draw_5911b21a.Uniform_7(6, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
                    __this->_draw_5911b21a.Uniform_8(7, radius);
                    __this->_draw_5911b21a.Uniform_8(8, dc->ViewportPointDensity());
                    __this->_draw_5911b21a.Uniform_8(9, 1.0f / smoothness);
                    __this->_draw_5911b21a.Uniform_8(10, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
                    __this->_draw_5911b21a.Uniform_7(11, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_5911b21a_13_17_6 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_5911b21a.Uniform_8(12, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_5911b21a_13_16_7 : ::app::Uno::Vector__Length_2(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_5911b21a.Uniform_7(13, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_5911b21a_19_2_14, EndVec_5911b21a_19_3_15)));
                    __this->_draw_5911b21a.Uniform_7(14, StartVec_5911b21a_19_2_14);
                    __this->_draw_5911b21a.Uniform_7(15, EndVec_5911b21a_19_3_15);
                    __this->_draw_5911b21a.Sampler_1(16, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
                    __this->_draw_5911b21a.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 angleSlope_59122679_13_17_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                float angleLen_59122679_13_16_7 = ::app::Uno::Math__Abs_8(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_8(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                ::app::Uno::Float2 StartVec_59122679_19_2_14 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_59122679_19_3_15 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_59122679.BlendEnabled(true);
                    __this->_draw_59122679.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_59122679.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_59122679.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_59122679.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_59122679.DepthTestEnabled(false);
                    __this->_draw_59122679.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_59122679.Use();
                    __this->_draw_59122679.Attrib(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_59122679.Uniform_7(1, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_59122679.Uniform_7(2, center);
                    __this->_draw_59122679.Uniform_2(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_59122679.Uniform_7(4, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_59122679.Uniform_7(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, node->ActualSize(), 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, angleSlope_59122679_13_17_6, angleLen_59122679_13_16_7), 2.0f)) : ::app::Uno::Float2__op_Multiply_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), node->ActualSize()));
                    __this->_draw_59122679.Uniform_7(6, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
                    __this->_draw_59122679.Uniform_8(7, radius);
                    __this->_draw_59122679.Uniform_8(8, dc->ViewportPointDensity());
                    __this->_draw_59122679.Uniform_8(9, 1.0f / smoothness);
                    __this->_draw_59122679.Uniform_8(10, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
                    __this->_draw_59122679.Uniform_7(11, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_59122679_13_17_6 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_59122679.Uniform_8(12, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_59122679_13_16_7 : ::app::Uno::Vector__Length_2(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_59122679.Uniform_7(13, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_59122679_19_2_14, EndVec_59122679_19_3_15)));
                    __this->_draw_59122679.Uniform_7(14, StartVec_59122679_19_2_14);
                    __this->_draw_59122679.Uniform_7(15, EndVec_59122679_19_3_15);
                    __this->_draw_59122679.Sampler_1(16, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
                    __this->_draw_59122679.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::OneLimitCoverage__typeof()))
            {
                ::app::Uno::Float2 angleSlope_59129ad8_13_17_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                float angleLen_59129ad8_13_16_7 = ::app::Uno::Math__Abs_8(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_8(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize().Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
                {
                    __this->_draw_59129ad8.BlendEnabled(true);
                    __this->_draw_59129ad8.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_59129ad8.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_59129ad8.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_59129ad8.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                    __this->_draw_59129ad8.DepthTestEnabled(false);
                    __this->_draw_59129ad8.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_59129ad8.Use();
                    __this->_draw_59129ad8.Attrib(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_59129ad8.Uniform_7(1, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_59129ad8.Uniform_7(2, center);
                    __this->_draw_59129ad8.Uniform_2(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_59129ad8.Uniform_7(4, ::uPtr< ::app::Fuse::Elements::Element*>(node)->ActualSize());
                    __this->_draw_59129ad8.Uniform_7(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, node->ActualSize(), 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, angleSlope_59129ad8_13_17_6, angleLen_59129ad8_13_16_7), 2.0f)) : ::app::Uno::Float2__op_Multiply_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), node->ActualSize()));
                    __this->_draw_59129ad8.Uniform_7(6, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
                    __this->_draw_59129ad8.Uniform_8(7, radius);
                    __this->_draw_59129ad8.Uniform_8(8, dc->ViewportPointDensity());
                    __this->_draw_59129ad8.Uniform_8(9, 1.0f / smoothness);
                    __this->_draw_59129ad8.Uniform_8(10, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
                    __this->_draw_59129ad8.Uniform_7(11, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_59129ad8_13_17_6 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_59129ad8.Uniform_8(12, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_59129ad8_13_16_7 : ::app::Uno::Vector__Length_2(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), node->ActualSize())));
                    __this->_draw_59129ad8.Sampler_1(13, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
                    __this->_draw_59129ad8.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
        {
            if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 StartVec_f7c5c0fa_19_2_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_f7c5c0fa_19_3_7 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_f7c5c0fa.BlendEnabled(true);
                    __this->_draw_f7c5c0fa.BlendSrcRgb(__this->Draw_BlendSrcRgb_79559021_11_4_22);
                    __this->_draw_f7c5c0fa.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_79559021_11_6_23);
                    __this->_draw_f7c5c0fa.BlendDstRgb(__this->Draw_BlendDstRgb_79559021_11_5_24);
                    __this->_draw_f7c5c0fa.BlendDstAlpha(__this->Draw_BlendDstAlpha_79559021_11_7_25);
                    __this->_draw_f7c5c0fa.DepthTestEnabled(false);
                    __this->_draw_f7c5c0fa.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_f7c5c0fa.Use();
                    __this->_draw_f7c5c0fa.Attrib(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_f7c5c0fa.Uniform_7(1, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_f7c5c0fa.Uniform_7(2, center);
                    __this->_draw_f7c5c0fa.Uniform_2(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_f7c5c0fa.Uniform_8(4, radius);
                    __this->_draw_f7c5c0fa.Uniform_8(5, dc->ViewportPointDensity());
                    __this->_draw_f7c5c0fa.Uniform_8(6, 1.0f / smoothness);
                    __this->_draw_f7c5c0fa.Uniform_8(7, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W);
                    __this->_draw_f7c5c0fa.Uniform_6(8, (ind_150 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_150.X, ind_150.Y, ind_150.Z)));
                    __this->_draw_f7c5c0fa.Uniform_7(9, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_f7c5c0fa_19_2_6, EndVec_f7c5c0fa_19_3_7)));
                    __this->_draw_f7c5c0fa.Uniform_7(10, StartVec_f7c5c0fa_19_2_6);
                    __this->_draw_f7c5c0fa.Uniform_7(11, EndVec_f7c5c0fa_19_3_7);
                    __this->_draw_f7c5c0fa.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))
            {
                ::app::Uno::Float2 StartVec_f7c63559_19_2_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle), -::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->StartAngle));
                ::app::Uno::Float2 EndVec_f7c63559_19_3_7 = ::app::Uno::Float2__New_2(NULL, -::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle), ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof()))->EndAngle));
                {
                    __this->_draw_f7c63559.BlendEnabled(true);
                    __this->_draw_f7c63559.BlendSrcRgb(__this->Draw_BlendSrcRgb_79559021_11_4_22);
                    __this->_draw_f7c63559.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_79559021_11_6_23);
                    __this->_draw_f7c63559.BlendDstRgb(__this->Draw_BlendDstRgb_79559021_11_5_24);
                    __this->_draw_f7c63559.BlendDstAlpha(__this->Draw_BlendDstAlpha_79559021_11_7_25);
                    __this->_draw_f7c63559.DepthTestEnabled(false);
                    __this->_draw_f7c63559.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_f7c63559.Use();
                    __this->_draw_f7c63559.Attrib(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_f7c63559.Uniform_7(1, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_f7c63559.Uniform_7(2, center);
                    __this->_draw_f7c63559.Uniform_2(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_f7c63559.Uniform_8(4, radius);
                    __this->_draw_f7c63559.Uniform_8(5, dc->ViewportPointDensity());
                    __this->_draw_f7c63559.Uniform_8(6, 1.0f / smoothness);
                    __this->_draw_f7c63559.Uniform_8(7, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W);
                    __this->_draw_f7c63559.Uniform_6(8, (ind_151 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_151.X, ind_151.Y, ind_151.Z)));
                    __this->_draw_f7c63559.Uniform_7(9, ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Addition_2(NULL, StartVec_f7c63559_19_2_6, EndVec_f7c63559_19_3_7)));
                    __this->_draw_f7c63559.Uniform_7(10, StartVec_f7c63559_19_2_6);
                    __this->_draw_f7c63559.Uniform_7(11, EndVec_f7c63559_19_3_7);
                    __this->_draw_f7c63559.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
            else if (::uIs(limit, ::app::Fuse::Drawing::Primitives::OneLimitCoverage__typeof()))
            {
                {
                    __this->_draw_f7c6a9b8.BlendEnabled(true);
                    __this->_draw_f7c6a9b8.BlendSrcRgb(__this->Draw_BlendSrcRgb_79559021_11_4_22);
                    __this->_draw_f7c6a9b8.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_79559021_11_6_23);
                    __this->_draw_f7c6a9b8.BlendDstRgb(__this->Draw_BlendDstRgb_79559021_11_5_24);
                    __this->_draw_f7c6a9b8.BlendDstAlpha(__this->Draw_BlendDstAlpha_79559021_11_7_25);
                    __this->_draw_f7c6a9b8.DepthTestEnabled(false);
                    __this->_draw_f7c6a9b8.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                    __this->_draw_f7c6a9b8.Use();
                    __this->_draw_f7c6a9b8.Attrib(0, 2, ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->GetDeviceVertex(), 8, 0);
                    __this->_draw_f7c6a9b8.Uniform_7(1, ::app::Uno::Float2__op_Addition_1(NULL, radius, ::app::Uno::Float2__op_Multiply_2(NULL, extend, 2.0f)));
                    __this->_draw_f7c6a9b8.Uniform_7(2, center);
                    __this->_draw_f7c6a9b8.Uniform_2(3, dc->GetLocalToClipTransform((::app::Fuse::Node*)node));
                    __this->_draw_f7c6a9b8.Uniform_8(4, radius);
                    __this->_draw_f7c6a9b8.Uniform_8(5, dc->ViewportPointDensity());
                    __this->_draw_f7c6a9b8.Uniform_8(6, 1.0f / smoothness);
                    __this->_draw_f7c6a9b8.Uniform_8(7, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W);
                    __this->_draw_f7c6a9b8.Uniform_6(8, (ind_152 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_152.X, ind_152.Y, ind_152.Z)));
                    __this->_draw_f7c6a9b8.Draw(::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Count(), 2, ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->GetDeviceIndex());
                }
            }
        }
    }
}

void Circle__Fill(Circle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float2 center, float smoothness)
{
    __this->Draw(dc, node, radius, brush, (::app::Fuse::Drawing::Primitives::Coverage*)__this->_fillCoverage, __this->_oneLimitCoverage, ::app::Uno::Float2__New_1(NULL, smoothness), center, smoothness);
}

void Circle__init_DrawCalls(Circle* __this)
{
    __this->Draw_BlendSrcRgb_79559021_11_4_22 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, 0);
    __this->Draw_BlendSrcAlpha_79559021_11_6_23 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, 0);
    __this->Draw_BlendDstRgb_79559021_11_5_24 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, 0);
    __this->Draw_BlendDstAlpha_79559021_11_7_25 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, 0);
    __this->_draw_758125db = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 566), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_75819a3a = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 567), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_75820e99 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 568), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_7aa10cd5 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 569), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_7aa18134 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 570), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_7aa1f593 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 571), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_7fc0f3cf = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 572), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_77d9da69 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 573), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_77da4ec8 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 574), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_79559021 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 575), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_79560480 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 576), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_795678df = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 577), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_c4bd2c3a = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 578), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_c4bda099 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 579), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_c4be14f8 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 580), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_63713b1a = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 581), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_6371af79 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 582), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_637bafa3 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 583), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_5911b21a = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 584), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_59122679 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 585), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_59129ad8 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 586), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_f7c5c0fa = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 587), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_f7c63559 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 588), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_f7c6a9b8 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 589), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

void Circle__InitBuffers(Circle* __this)
{
    __this->_bufferVertex = ::app::Fuse::Drawing::Internal::Float2Buffer__New_3(NULL);
    __this->_bufferIndex = ::app::Fuse::Drawing::Internal::UShortBuffer__New_3(NULL);
    int numSegments = 16;
    float theta = 1.57079637f - (6.28318548f / (float)numSegments);
    float len = 1.0f / ::app::Uno::Math__Sin_1(NULL, theta);
    ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->Append_1(0.0, 0.0);

    for (int i = 0; i < numSegments; ++i)
    {
        float r = (((float)i / (float)numSegments) * 3.14159274f) * 2.0f;
        ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->Append_1((double)(::app::Uno::Math__Cos_1(NULL, r) * len), (double)(::app::Uno::Math__Sin_1(NULL, r) * len));
        ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Append_1(0);
        ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Append_1((i == (numSegments - 1)) ? 1 : (i + 2));
        ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->Append_1(i + 1);
    }

    ::uPtr< ::app::Fuse::Drawing::Internal::Float2Buffer*>(__this->_bufferVertex)->InitDeviceVertex(0);
    ::uPtr< ::app::Fuse::Drawing::Internal::UShortBuffer*>(__this->_bufferIndex)->InitDeviceIndex(0);
}

Circle* Circle__New_1(::uStatic* __this)
{
    Circle* inst = (Circle*)::uAllocObject(sizeof(Circle), Circle__typeof());
    inst->_ObjInit();
    return inst;
}

void Circle__Stroke(Circle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Stroke* stroke, ::app::Uno::Float2 center, float smoothness)
{
    ::app::Uno::Float2 r = ::uPtr< ::app::Fuse::Drawing::Stroke*>(stroke)->GetDeviceAdjusted(::uPtr< ::app::Fuse::DrawContext*>(dc)->ViewportPointDensity());
    ::app::Fuse::Drawing::Primitives::StrokeCoverage* sc = __this->_strokeCoverage;
    ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(sc)->Radius = r.Item(0) / 2.0f;
    sc->Center = r.Item(1);
    float extend = ::app::Uno::Math__Max_8(NULL, 0.0f, r.Item(0) + r.Item(1)) + smoothness;
    __this->Draw(dc, node, radius, stroke->Brush(), (::app::Fuse::Drawing::Primitives::Coverage*)sc, __this->_oneLimitCoverage, ::app::Uno::Float2__New_1(NULL, extend), center, smoothness);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Primitives/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ConcaveWedgeCoverage__uType* ConcaveWedgeCoverage__typeof()
{
    static ::uStaticStrong<ConcaveWedgeCoverage__uType*> type;
    if (type != NULL) return type;

    type = (ConcaveWedgeCoverage__uType*)::uAllocClassType(sizeof(ConcaveWedgeCoverage__uType), "Fuse.Drawing.Primitives.ConcaveWedgeCoverage", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Primitives::WedgeCoverage__typeof());

    return type;
}

void ConcaveWedgeCoverage___ObjInit_2(ConcaveWedgeCoverage* __this)
{
    ::app::Fuse::Drawing::Primitives::WedgeCoverage___ObjInit_1(__this);
}

ConcaveWedgeCoverage* ConcaveWedgeCoverage__New_1(::uStatic* __this)
{
    ConcaveWedgeCoverage* inst = (ConcaveWedgeCoverage*)::uAllocObject(sizeof(ConcaveWedgeCoverage), ConcaveWedgeCoverage__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Primitives/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ConvexWedgeCoverage__uType* ConvexWedgeCoverage__typeof()
{
    static ::uStaticStrong<ConvexWedgeCoverage__uType*> type;
    if (type != NULL) return type;

    type = (ConvexWedgeCoverage__uType*)::uAllocClassType(sizeof(ConvexWedgeCoverage__uType), "Fuse.Drawing.Primitives.ConvexWedgeCoverage", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Primitives::WedgeCoverage__typeof());

    return type;
}

void ConvexWedgeCoverage___ObjInit_2(ConvexWedgeCoverage* __this)
{
    ::app::Fuse::Drawing::Primitives::WedgeCoverage___ObjInit_1(__this);
}

ConvexWedgeCoverage* ConvexWedgeCoverage__New_1(::uStatic* __this)
{
    ConvexWedgeCoverage* inst = (ConvexWedgeCoverage*)::uAllocObject(sizeof(ConvexWedgeCoverage), ConvexWedgeCoverage__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Primitives/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Coverage__uType* Coverage__typeof()
{
    static ::uStaticStrong<Coverage__uType*> type;
    if (type != NULL) return type;

    type = (Coverage__uType*)::uAllocClassType(sizeof(Coverage__uType), "Fuse.Drawing.Primitives.Coverage", false, 0, 0, 0);

    return type;
}

void Coverage___ObjInit(Coverage* __this)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Primitives/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FillCoverage__uType* FillCoverage__typeof()
{
    static ::uStaticStrong<FillCoverage__uType*> type;
    if (type != NULL) return type;

    type = (FillCoverage__uType*)::uAllocClassType(sizeof(FillCoverage__uType), "Fuse.Drawing.Primitives.FillCoverage", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Primitives::Coverage__typeof());

    return type;
}

void FillCoverage___ObjInit_1(FillCoverage* __this)
{
    ::app::Fuse::Drawing::Primitives::Coverage___ObjInit(__this);
}

FillCoverage* FillCoverage__New_1(::uStatic* __this)
{
    FillCoverage* inst = (FillCoverage*)::uAllocObject(sizeof(FillCoverage), FillCoverage__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Primitives/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LimitCoverage__uType* LimitCoverage__typeof()
{
    static ::uStaticStrong<LimitCoverage__uType*> type;
    if (type != NULL) return type;

    type = (LimitCoverage__uType*)::uAllocClassType(sizeof(LimitCoverage__uType), "Fuse.Drawing.Primitives.LimitCoverage", false, 0, 0, 0);

    return type;
}

void LimitCoverage___ObjInit(LimitCoverage* __this)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Primitives/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

OneLimitCoverage__uType* OneLimitCoverage__typeof()
{
    static ::uStaticStrong<OneLimitCoverage__uType*> type;
    if (type != NULL) return type;

    type = (OneLimitCoverage__uType*)::uAllocClassType(sizeof(OneLimitCoverage__uType), "Fuse.Drawing.Primitives.OneLimitCoverage", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Primitives::LimitCoverage__typeof());

    return type;
}

void OneLimitCoverage___ObjInit_1(OneLimitCoverage* __this)
{
    ::app::Fuse::Drawing::Primitives::LimitCoverage___ObjInit(__this);
}

OneLimitCoverage* OneLimitCoverage__New_1(::uStatic* __this)
{
    OneLimitCoverage* inst = (OneLimitCoverage*)::uAllocObject(sizeof(OneLimitCoverage), OneLimitCoverage__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Primitives/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Rectangle*> Rectangle__Singleton;

Rectangle__uType* Rectangle__typeof()
{
    static ::uStaticStrong<Rectangle__uType*> type;
    if (type != NULL) return type;

    type = (Rectangle__uType*)::uAllocClassType(sizeof(Rectangle__uType), "Fuse.Drawing.Primitives.Rectangle", false, 0, 30, 0);

    type->SetStrongRefs(
        "_bufferDistance", offsetof(Rectangle, _bufferDistance),
        "_draw_9e575d3d._compiledProgram", offsetof(Rectangle, _draw_9e575d3d._compiledProgram),
        "_draw_9e575d3d._constValues", offsetof(Rectangle, _draw_9e575d3d._constValues),
        "_draw_9e575d3d._Program", offsetof(Rectangle, _draw_9e575d3d._Program),
        "_draw_9e57d19c._compiledProgram", offsetof(Rectangle, _draw_9e57d19c._compiledProgram),
        "_draw_9e57d19c._constValues", offsetof(Rectangle, _draw_9e57d19c._constValues),
        "_draw_9e57d19c._Program", offsetof(Rectangle, _draw_9e57d19c._Program),
        "_draw_9e5845fb._compiledProgram", offsetof(Rectangle, _draw_9e5845fb._compiledProgram),
        "_draw_9e5845fb._constValues", offsetof(Rectangle, _draw_9e5845fb._constValues),
        "_draw_9e5845fb._Program", offsetof(Rectangle, _draw_9e5845fb._Program),
        "_draw_9e58ba5a._compiledProgram", offsetof(Rectangle, _draw_9e58ba5a._compiledProgram),
        "_draw_9e58ba5a._constValues", offsetof(Rectangle, _draw_9e58ba5a._constValues),
        "_draw_9e58ba5a._Program", offsetof(Rectangle, _draw_9e58ba5a._Program),
        "_draw_a52c9135._compiledProgram", offsetof(Rectangle, _draw_a52c9135._compiledProgram),
        "_draw_a52c9135._constValues", offsetof(Rectangle, _draw_a52c9135._constValues),
        "_draw_a52c9135._Program", offsetof(Rectangle, _draw_a52c9135._Program),
        "_draw_a52d0594._compiledProgram", offsetof(Rectangle, _draw_a52d0594._compiledProgram),
        "_draw_a52d0594._constValues", offsetof(Rectangle, _draw_a52d0594._constValues),
        "_draw_a52d0594._Program", offsetof(Rectangle, _draw_a52d0594._Program),
        "_draw_a52d79f3._compiledProgram", offsetof(Rectangle, _draw_a52d79f3._compiledProgram),
        "_draw_a52d79f3._constValues", offsetof(Rectangle, _draw_a52d79f3._constValues),
        "_draw_a52d79f3._Program", offsetof(Rectangle, _draw_a52d79f3._Program),
        "_draw_a52dee52._compiledProgram", offsetof(Rectangle, _draw_a52dee52._compiledProgram),
        "_draw_a52dee52._constValues", offsetof(Rectangle, _draw_a52dee52._constValues),
        "_draw_a52dee52._Program", offsetof(Rectangle, _draw_a52dee52._Program),
        "_edgeInfo.Buffer", offsetof(Rectangle, _edgeInfo.Buffer),
        "_fillCoverage", offsetof(Rectangle, _fillCoverage),
        "_strokeCoverage", offsetof(Rectangle, _strokeCoverage),
        "_uniforms", offsetof(Rectangle, _uniforms),
        "_vertexInfo.Buffer", offsetof(Rectangle, _vertexInfo.Buffer));

    return type;
}

void Rectangle___ObjInit(Rectangle* __this)
{
    __this->_strokeCoverage = ::app::Fuse::Drawing::Primitives::StrokeCoverage__New_1(NULL);
    __this->_fillCoverage = ::app::Fuse::Drawing::Primitives::FillCoverage__New_1(NULL);
    __this->_uniforms = ::uNewArray(::app::Uno::Float__typeof(), 10);
    __this->init_DrawCalls();
}

void Rectangle___TypeInit(::uStatic* __this)
{
    Rectangle__Singleton = Rectangle__New_1(NULL);
}

::uArray* Rectangle__add(Rectangle* __this, ::uArray* a, ::uArray* b)
{
    ::uArray* r = ::uNewArray(::app::Uno::Float__typeof(), ::uPtr< ::uArray*>(a)->Length());

    for (int i = 0; i < a->Length(); i++)
    {
        r->Item< float>(i) = a->Item< float>(i) + ::uPtr< ::uArray*>(b)->Item< float>(i);
    }

    return r;
}

void Rectangle__Draw(Rectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Node* node, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius, ::app::Fuse::Drawing::Brush* brush, ::app::Fuse::Drawing::Primitives::Coverage* cover, ::app::Uno::Float2 extend, ::app::Uno::Float2 position, float smoothness)
{
    ::app::Uno::Float4 ind_135 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_136 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_137 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_138 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_139 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_140 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_141 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_142 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_143 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_144 = ::app::Uno::Float4();

    if (__this->_bufferDistance == NULL)
    {
        __this->InitBuffers();
    }

    float mn = ::app::Uno::Math__Min_11(NULL, Size.X / 2.0f, Size.Y / 2.0f);

    for (int i = 0; i < 4; ++i)
    {
        CornerRadius.Item(i, ::app::Uno::Math__Clamp_8(NULL, CornerRadius.Item(i), 0.0f, mn));
    }

    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(1) = CornerRadius.Item(3);
    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(2) = CornerRadius.Item(2);
    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(3) = CornerRadius.Item(1);
    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(4) = CornerRadius.Item(0);
    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(5) = Size.X;
    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(6) = Size.Y;
    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(7) = extend.X;
    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(8) = extend.Y;
    ::uPtr< ::uArray*>(__this->_uniforms)->Item< float>(9) = mn;
    ::app::Fuse::Elements::Element* elm = ::uAs< ::app::Fuse::Elements::Element*>(node, ::app::Fuse::Elements::Element__typeof());
    ::app::Uno::Float2 csz = (elm == NULL) ? ::app::Uno::Float2__New_1(NULL, 1.0f) : ::uPtr< ::app::Fuse::Elements::Element*>(elm)->ActualSize();

    if (::uIs(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))
    {
        if (::uIs(brush, ::app::Fuse::Drawing::ImageFill__typeof()))
        {
            ::app::Uno::Graphics::Texture2D* Texture_9e575d3d_13_6_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
            ::app::Fuse::Drawing::ImageFill_DrawParams DP_9e575d3d_13_5_7 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(dc, csz);
            {
                __this->_draw_9e575d3d.BlendEnabled(true);
                __this->_draw_9e575d3d.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                __this->_draw_9e575d3d.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                __this->_draw_9e575d3d.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                __this->_draw_9e575d3d.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                __this->_draw_9e575d3d.DepthTestEnabled(false);
                __this->_draw_9e575d3d.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                __this->_draw_9e575d3d.Const(0, ::uPtr< ::uArray*>(__this->_uniforms)->Length());
                __this->_draw_9e575d3d.Const_1(1, Texture_9e575d3d_13_6_4 == NULL);
                __this->_draw_9e575d3d.Use();
                __this->_draw_9e575d3d.Attrib(2, __this->_vertexInfo.Type, __this->_vertexInfo.Buffer, __this->_vertexInfo.BufferStride, __this->_vertexInfo.BufferOffset);
                __this->_draw_9e575d3d.Attrib(3, __this->_edgeInfo.Type, __this->_edgeInfo.Buffer, __this->_edgeInfo.BufferStride, __this->_edgeInfo.BufferOffset);
                __this->_draw_9e575d3d.Attrib(4, 1, ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->GetDeviceVertex(), 4, 0);
                __this->_draw_9e575d3d.Uniform_1(5, __this->_uniforms);
                __this->_draw_9e575d3d.Uniform_7(6, position);
                __this->_draw_9e575d3d.Uniform_2(7, dc->GetLocalToClipTransform(node));
                __this->_draw_9e575d3d.Uniform_7(8, csz);
                __this->_draw_9e575d3d.Uniform_7(9, DP_9e575d3d_13_5_7.Origin);
                __this->_draw_9e575d3d.Uniform_7(10, DP_9e575d3d_13_5_7.Size);
                __this->_draw_9e575d3d.Uniform_7(11, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_135 = DP_9e575d3d_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_135.Z, ind_135.W)), (ind_136 = DP_9e575d3d_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_136.X, ind_136.Y))));
                __this->_draw_9e575d3d.Uniform_7(12, (ind_137 = DP_9e575d3d_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_137.X, ind_137.Y)));
                __this->_draw_9e575d3d.Uniform_5(13, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
                __this->_draw_9e575d3d.Uniform_8(14, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                __this->_draw_9e575d3d.Uniform_8(15, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                __this->_draw_9e575d3d.Uniform_8(16, dc->ViewportPointDensity());
                __this->_draw_9e575d3d.Uniform_8(17, 1.0f / smoothness);
                __this->_draw_9e575d3d.Uniform_8(18, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
                __this->_draw_9e575d3d.Sampler_1(19, Texture_9e575d3d_13_6_4);
                __this->_draw_9e575d3d.DrawArrays(::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->Count());
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::SolidColor__typeof()))
        {
            {
                __this->_draw_9e57d19c.BlendEnabled(true);
                __this->_draw_9e57d19c.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                __this->_draw_9e57d19c.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                __this->_draw_9e57d19c.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                __this->_draw_9e57d19c.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                __this->_draw_9e57d19c.DepthTestEnabled(false);
                __this->_draw_9e57d19c.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                __this->_draw_9e57d19c.Const(0, ::uPtr< ::uArray*>(__this->_uniforms)->Length());
                __this->_draw_9e57d19c.Use();
                __this->_draw_9e57d19c.Attrib(1, __this->_vertexInfo.Type, __this->_vertexInfo.Buffer, __this->_vertexInfo.BufferStride, __this->_vertexInfo.BufferOffset);
                __this->_draw_9e57d19c.Attrib(2, __this->_edgeInfo.Type, __this->_edgeInfo.Buffer, __this->_edgeInfo.BufferStride, __this->_edgeInfo.BufferOffset);
                __this->_draw_9e57d19c.Attrib(3, 1, ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->GetDeviceVertex(), 4, 0);
                __this->_draw_9e57d19c.Uniform_1(4, __this->_uniforms);
                __this->_draw_9e57d19c.Uniform_7(5, position);
                __this->_draw_9e57d19c.Uniform_2(6, dc->GetLocalToClipTransform(node));
                __this->_draw_9e57d19c.Uniform_8(7, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                __this->_draw_9e57d19c.Uniform_8(8, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                __this->_draw_9e57d19c.Uniform_8(9, dc->ViewportPointDensity());
                __this->_draw_9e57d19c.Uniform_8(10, 1.0f / smoothness);
                __this->_draw_9e57d19c.Uniform_8(11, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W);
                __this->_draw_9e57d19c.Uniform_6(12, (ind_138 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_138.X, ind_138.Y, ind_138.Z)));
                __this->_draw_9e57d19c.Uniform_8(13, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity());
                __this->_draw_9e57d19c.DrawArrays(::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->Count());
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))
        {
            ::app::Uno::Float2 angleSlope_9e5845fb_13_17_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
            float angleLen_9e5845fb_13_16_7 = ::app::Uno::Math__Abs_8(NULL, csz.X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_8(NULL, csz.Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
            {
                __this->_draw_9e5845fb.BlendEnabled(true);
                __this->_draw_9e5845fb.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                __this->_draw_9e5845fb.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                __this->_draw_9e5845fb.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                __this->_draw_9e5845fb.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                __this->_draw_9e5845fb.DepthTestEnabled(false);
                __this->_draw_9e5845fb.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                __this->_draw_9e5845fb.Const(0, ::uPtr< ::uArray*>(__this->_uniforms)->Length());
                __this->_draw_9e5845fb.Use();
                __this->_draw_9e5845fb.Attrib(1, __this->_vertexInfo.Type, __this->_vertexInfo.Buffer, __this->_vertexInfo.BufferStride, __this->_vertexInfo.BufferOffset);
                __this->_draw_9e5845fb.Attrib(2, __this->_edgeInfo.Type, __this->_edgeInfo.Buffer, __this->_edgeInfo.BufferStride, __this->_edgeInfo.BufferOffset);
                __this->_draw_9e5845fb.Attrib(3, 1, ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->GetDeviceVertex(), 4, 0);
                __this->_draw_9e5845fb.Uniform_1(4, __this->_uniforms);
                __this->_draw_9e5845fb.Uniform_7(5, position);
                __this->_draw_9e5845fb.Uniform_2(6, dc->GetLocalToClipTransform(node));
                __this->_draw_9e5845fb.Uniform_7(7, csz);
                __this->_draw_9e5845fb.Uniform_7(8, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, csz, 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, angleSlope_9e5845fb_13_17_6, angleLen_9e5845fb_13_16_7), 2.0f)) : ::app::Uno::Float2__op_Multiply_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), csz));
                __this->_draw_9e5845fb.Uniform_7(9, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
                __this->_draw_9e5845fb.Uniform_8(10, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                __this->_draw_9e5845fb.Uniform_8(11, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                __this->_draw_9e5845fb.Uniform_8(12, dc->ViewportPointDensity());
                __this->_draw_9e5845fb.Uniform_8(13, 1.0f / smoothness);
                __this->_draw_9e5845fb.Uniform_8(14, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
                __this->_draw_9e5845fb.Uniform_7(15, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_9e5845fb_13_17_6 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), csz)));
                __this->_draw_9e5845fb.Uniform_8(16, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_9e5845fb_13_16_7 : ::app::Uno::Vector__Length_2(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), csz)));
                __this->_draw_9e5845fb.Sampler_1(17, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
                __this->_draw_9e5845fb.DrawArrays(::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->Count());
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
        {
            {
                __this->_draw_9e58ba5a.BlendEnabled(true);
                __this->_draw_9e58ba5a.BlendSrcRgb(__this->Draw_BlendSrcRgb_9e58ba5a_11_4_15);
                __this->_draw_9e58ba5a.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_9e58ba5a_11_6_16);
                __this->_draw_9e58ba5a.BlendDstRgb(__this->Draw_BlendDstRgb_9e58ba5a_11_5_17);
                __this->_draw_9e58ba5a.BlendDstAlpha(__this->Draw_BlendDstAlpha_9e58ba5a_11_7_18);
                __this->_draw_9e58ba5a.DepthTestEnabled(false);
                __this->_draw_9e58ba5a.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                __this->_draw_9e58ba5a.Const(0, ::uPtr< ::uArray*>(__this->_uniforms)->Length());
                __this->_draw_9e58ba5a.Use();
                __this->_draw_9e58ba5a.Attrib(1, __this->_vertexInfo.Type, __this->_vertexInfo.Buffer, __this->_vertexInfo.BufferStride, __this->_vertexInfo.BufferOffset);
                __this->_draw_9e58ba5a.Attrib(2, __this->_edgeInfo.Type, __this->_edgeInfo.Buffer, __this->_edgeInfo.BufferStride, __this->_edgeInfo.BufferOffset);
                __this->_draw_9e58ba5a.Attrib(3, 1, ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->GetDeviceVertex(), 4, 0);
                __this->_draw_9e58ba5a.Uniform_1(4, __this->_uniforms);
                __this->_draw_9e58ba5a.Uniform_7(5, position);
                __this->_draw_9e58ba5a.Uniform_2(6, dc->GetLocalToClipTransform(node));
                __this->_draw_9e58ba5a.Uniform_8(7, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Center);
                __this->_draw_9e58ba5a.Uniform_8(8, ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(::uAs< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof()))->Radius);
                __this->_draw_9e58ba5a.Uniform_8(9, dc->ViewportPointDensity());
                __this->_draw_9e58ba5a.Uniform_8(10, 1.0f / smoothness);
                __this->_draw_9e58ba5a.Uniform_8(11, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W);
                __this->_draw_9e58ba5a.Uniform_6(12, (ind_139 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_139.X, ind_139.Y, ind_139.Z)));
                __this->_draw_9e58ba5a.DrawArrays(::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->Count());
            }
        }
    }
    else if (::uIs(cover, ::app::Fuse::Drawing::Primitives::FillCoverage__typeof()))
    {
        if (::uIs(brush, ::app::Fuse::Drawing::ImageFill__typeof()))
        {
            ::app::Uno::Graphics::Texture2D* Texture_a52c9135_13_6_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
            ::app::Fuse::Drawing::ImageFill_DrawParams DP_a52c9135_13_5_7 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(dc, csz);
            {
                __this->_draw_a52c9135.BlendEnabled(true);
                __this->_draw_a52c9135.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                __this->_draw_a52c9135.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                __this->_draw_a52c9135.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                __this->_draw_a52c9135.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
                __this->_draw_a52c9135.DepthTestEnabled(false);
                __this->_draw_a52c9135.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                __this->_draw_a52c9135.Const(0, ::uPtr< ::uArray*>(__this->_uniforms)->Length());
                __this->_draw_a52c9135.Const_1(1, Texture_a52c9135_13_6_4 == NULL);
                __this->_draw_a52c9135.Use();
                __this->_draw_a52c9135.Attrib(2, __this->_vertexInfo.Type, __this->_vertexInfo.Buffer, __this->_vertexInfo.BufferStride, __this->_vertexInfo.BufferOffset);
                __this->_draw_a52c9135.Attrib(3, __this->_edgeInfo.Type, __this->_edgeInfo.Buffer, __this->_edgeInfo.BufferStride, __this->_edgeInfo.BufferOffset);
                __this->_draw_a52c9135.Attrib(4, 1, ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->GetDeviceVertex(), 4, 0);
                __this->_draw_a52c9135.Uniform_1(5, __this->_uniforms);
                __this->_draw_a52c9135.Uniform_7(6, position);
                __this->_draw_a52c9135.Uniform_2(7, dc->GetLocalToClipTransform(node));
                __this->_draw_a52c9135.Uniform_7(8, csz);
                __this->_draw_a52c9135.Uniform_7(9, DP_a52c9135_13_5_7.Origin);
                __this->_draw_a52c9135.Uniform_7(10, DP_a52c9135_13_5_7.Size);
                __this->_draw_a52c9135.Uniform_7(11, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_140 = DP_a52c9135_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_140.Z, ind_140.W)), (ind_141 = DP_a52c9135_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_141.X, ind_141.Y))));
                __this->_draw_a52c9135.Uniform_7(12, (ind_142 = DP_a52c9135_13_5_7.UVClip, ::app::Uno::Float2__New_2(NULL, ind_142.X, ind_142.Y)));
                __this->_draw_a52c9135.Uniform_5(13, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
                __this->_draw_a52c9135.Uniform_8(14, dc->ViewportPointDensity());
                __this->_draw_a52c9135.Uniform_8(15, 1.0f / smoothness);
                __this->_draw_a52c9135.Uniform_8(16, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(brush, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
                __this->_draw_a52c9135.Sampler_1(17, Texture_a52c9135_13_6_4);
                __this->_draw_a52c9135.DrawArrays(::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->Count());
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::SolidColor__typeof()))
        {
            {
                __this->_draw_a52d0594.BlendEnabled(true);
                __this->_draw_a52d0594.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                __this->_draw_a52d0594.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                __this->_draw_a52d0594.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                __this->_draw_a52d0594.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
                __this->_draw_a52d0594.DepthTestEnabled(false);
                __this->_draw_a52d0594.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                __this->_draw_a52d0594.Const(0, ::uPtr< ::uArray*>(__this->_uniforms)->Length());
                __this->_draw_a52d0594.Use();
                __this->_draw_a52d0594.Attrib(1, __this->_vertexInfo.Type, __this->_vertexInfo.Buffer, __this->_vertexInfo.BufferStride, __this->_vertexInfo.BufferOffset);
                __this->_draw_a52d0594.Attrib(2, __this->_edgeInfo.Type, __this->_edgeInfo.Buffer, __this->_edgeInfo.BufferStride, __this->_edgeInfo.BufferOffset);
                __this->_draw_a52d0594.Attrib(3, 1, ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->GetDeviceVertex(), 4, 0);
                __this->_draw_a52d0594.Uniform_1(4, __this->_uniforms);
                __this->_draw_a52d0594.Uniform_7(5, position);
                __this->_draw_a52d0594.Uniform_2(6, dc->GetLocalToClipTransform(node));
                __this->_draw_a52d0594.Uniform_8(7, dc->ViewportPointDensity());
                __this->_draw_a52d0594.Uniform_8(8, 1.0f / smoothness);
                __this->_draw_a52d0594.Uniform_8(9, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W);
                __this->_draw_a52d0594.Uniform_6(10, (ind_143 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_143.X, ind_143.Y, ind_143.Z)));
                __this->_draw_a52d0594.Uniform_8(11, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(brush, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity());
                __this->_draw_a52d0594.DrawArrays(::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->Count());
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))
        {
            ::app::Uno::Float2 angleSlope_a52d79f3_13_17_6 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
            float angleLen_a52d79f3_13_16_7 = ::app::Uno::Math__Abs_8(NULL, csz.X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_8(NULL, csz.Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
            {
                __this->_draw_a52d79f3.BlendEnabled(true);
                __this->_draw_a52d79f3.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                __this->_draw_a52d79f3.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                __this->_draw_a52d79f3.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                __this->_draw_a52d79f3.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
                __this->_draw_a52d79f3.DepthTestEnabled(false);
                __this->_draw_a52d79f3.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                __this->_draw_a52d79f3.Const(0, ::uPtr< ::uArray*>(__this->_uniforms)->Length());
                __this->_draw_a52d79f3.Use();
                __this->_draw_a52d79f3.Attrib(1, __this->_vertexInfo.Type, __this->_vertexInfo.Buffer, __this->_vertexInfo.BufferStride, __this->_vertexInfo.BufferOffset);
                __this->_draw_a52d79f3.Attrib(2, __this->_edgeInfo.Type, __this->_edgeInfo.Buffer, __this->_edgeInfo.BufferStride, __this->_edgeInfo.BufferOffset);
                __this->_draw_a52d79f3.Attrib(3, 1, ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->GetDeviceVertex(), 4, 0);
                __this->_draw_a52d79f3.Uniform_1(4, __this->_uniforms);
                __this->_draw_a52d79f3.Uniform_7(5, position);
                __this->_draw_a52d79f3.Uniform_2(6, dc->GetLocalToClipTransform(node));
                __this->_draw_a52d79f3.Uniform_7(7, csz);
                __this->_draw_a52d79f3.Uniform_7(8, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, csz, 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, angleSlope_a52d79f3_13_17_6, angleLen_a52d79f3_13_16_7), 2.0f)) : ::app::Uno::Float2__op_Multiply_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), csz));
                __this->_draw_a52d79f3.Uniform_7(9, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
                __this->_draw_a52d79f3.Uniform_8(10, dc->ViewportPointDensity());
                __this->_draw_a52d79f3.Uniform_8(11, 1.0f / smoothness);
                __this->_draw_a52d79f3.Uniform_8(12, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
                __this->_draw_a52d79f3.Uniform_7(13, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_a52d79f3_13_17_6 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), csz)));
                __this->_draw_a52d79f3.Uniform_8(14, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_a52d79f3_13_16_7 : ::app::Uno::Vector__Length_2(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), csz)));
                __this->_draw_a52d79f3.Sampler_1(15, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(brush, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
                __this->_draw_a52d79f3.DrawArrays(::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->Count());
            }
        }
        else if (::uIs(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
        {
            {
                __this->_draw_a52dee52.BlendEnabled(true);
                __this->_draw_a52dee52.BlendSrcRgb(__this->Draw_BlendSrcRgb_9e58ba5a_11_4_15);
                __this->_draw_a52dee52.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_9e58ba5a_11_6_16);
                __this->_draw_a52dee52.BlendDstRgb(__this->Draw_BlendDstRgb_9e58ba5a_11_5_17);
                __this->_draw_a52dee52.BlendDstAlpha(__this->Draw_BlendDstAlpha_9e58ba5a_11_7_18);
                __this->_draw_a52dee52.DepthTestEnabled(false);
                __this->_draw_a52dee52.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
                __this->_draw_a52dee52.Const(0, ::uPtr< ::uArray*>(__this->_uniforms)->Length());
                __this->_draw_a52dee52.Use();
                __this->_draw_a52dee52.Attrib(1, __this->_vertexInfo.Type, __this->_vertexInfo.Buffer, __this->_vertexInfo.BufferStride, __this->_vertexInfo.BufferOffset);
                __this->_draw_a52dee52.Attrib(2, __this->_edgeInfo.Type, __this->_edgeInfo.Buffer, __this->_edgeInfo.BufferStride, __this->_edgeInfo.BufferOffset);
                __this->_draw_a52dee52.Attrib(3, 1, ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->GetDeviceVertex(), 4, 0);
                __this->_draw_a52dee52.Uniform_1(4, __this->_uniforms);
                __this->_draw_a52dee52.Uniform_7(5, position);
                __this->_draw_a52dee52.Uniform_2(6, dc->GetLocalToClipTransform(node));
                __this->_draw_a52dee52.Uniform_8(7, dc->ViewportPointDensity());
                __this->_draw_a52dee52.Uniform_8(8, 1.0f / smoothness);
                __this->_draw_a52dee52.Uniform_8(9, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W);
                __this->_draw_a52dee52.Uniform_6(10, (ind_144 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(brush, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_144.X, ind_144.Y, ind_144.Z)));
                __this->_draw_a52dee52.DrawArrays(::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->Count());
            }
        }
    }
}

void Rectangle__Fill(Rectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Node* node, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float2 Position, float Smoothness)
{
    __this->Draw(dc, node, Size, CornerRadius, brush, (::app::Fuse::Drawing::Primitives::Coverage*)__this->_fillCoverage, ::app::Uno::Float2__New_1(NULL, Smoothness), Position, Smoothness);
}

void Rectangle__init_DrawCalls(Rectangle* __this)
{
    __this->Draw_BlendSrcRgb_9e58ba5a_11_4_15 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, 0);
    __this->Draw_BlendSrcAlpha_9e58ba5a_11_6_16 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, 0);
    __this->Draw_BlendDstRgb_9e58ba5a_11_5_17 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, 0);
    __this->Draw_BlendDstAlpha_9e58ba5a_11_7_18 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, 0);
    __this->_draw_9e575d3d = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 590), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_9e57d19c = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 591), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_9e5845fb = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 592), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_9e58ba5a = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 593), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_a52c9135 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 594), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_a52d0594 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 595), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_a52d79f3 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 596), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_a52dee52 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 597), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

void Rectangle__InitBuffers(Rectangle* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;
    ::uArray* array_125;
    ::uArray* array_126;
    ::uArray* array_127;
    ::uArray* array_128;
    ::uArray* array_129;
    ::uArray* array_130;
    ::uArray* array_131;
    ::uArray* array_132;
    ::uArray* array_133;
    ::uArray* array_134;
    __this->_bufferDistance = ::app::Fuse::Drawing::Internal::FloatBuffer__New_3(NULL);
    array_123 = ::uNewArray(::app::Uno::Float__typeof(), 9);
    ::uPtr< ::uArray*>(array_123)->Item< float>(0) = 1.0f;
    ::uPtr< ::uArray*>(array_123)->Item< float>(1) = 0.0f;
    ::uPtr< ::uArray*>(array_123)->Item< float>(2) = 0.0f;
    ::uPtr< ::uArray*>(array_123)->Item< float>(3) = 0.0f;
    ::uPtr< ::uArray*>(array_123)->Item< float>(4) = 0.0f;
    ::uPtr< ::uArray*>(array_123)->Item< float>(5) = 0.0f;
    ::uPtr< ::uArray*>(array_123)->Item< float>(6) = 0.0f;
    ::uPtr< ::uArray*>(array_123)->Item< float>(7) = 0.0f;
    ::uPtr< ::uArray*>(array_123)->Item< float>(8) = 0.0f;
    ::uArray* CornerRadius0 = array_123;
    array_124 = ::uNewArray(::app::Uno::Float__typeof(), 9);
    ::uPtr< ::uArray*>(array_124)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(1) = 1.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(2) = 0.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(3) = 0.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(4) = 0.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(5) = 0.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(6) = 0.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(7) = 0.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(8) = 0.0f;
    ::uArray* CornerRadius1 = array_124;
    array_125 = ::uNewArray(::app::Uno::Float__typeof(), 9);
    ::uPtr< ::uArray*>(array_125)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(array_125)->Item< float>(1) = 0.0f;
    ::uPtr< ::uArray*>(array_125)->Item< float>(2) = 1.0f;
    ::uPtr< ::uArray*>(array_125)->Item< float>(3) = 0.0f;
    ::uPtr< ::uArray*>(array_125)->Item< float>(4) = 0.0f;
    ::uPtr< ::uArray*>(array_125)->Item< float>(5) = 0.0f;
    ::uPtr< ::uArray*>(array_125)->Item< float>(6) = 0.0f;
    ::uPtr< ::uArray*>(array_125)->Item< float>(7) = 0.0f;
    ::uPtr< ::uArray*>(array_125)->Item< float>(8) = 0.0f;
    ::uArray* CornerRadius2 = array_125;
    array_126 = ::uNewArray(::app::Uno::Float__typeof(), 9);
    ::uPtr< ::uArray*>(array_126)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(array_126)->Item< float>(1) = 0.0f;
    ::uPtr< ::uArray*>(array_126)->Item< float>(2) = 0.0f;
    ::uPtr< ::uArray*>(array_126)->Item< float>(3) = 1.0f;
    ::uPtr< ::uArray*>(array_126)->Item< float>(4) = 0.0f;
    ::uPtr< ::uArray*>(array_126)->Item< float>(5) = 0.0f;
    ::uPtr< ::uArray*>(array_126)->Item< float>(6) = 0.0f;
    ::uPtr< ::uArray*>(array_126)->Item< float>(7) = 0.0f;
    ::uPtr< ::uArray*>(array_126)->Item< float>(8) = 0.0f;
    ::uArray* CornerRadius3 = array_126;
    array_127 = ::uNewArray(::app::Uno::Float__typeof(), 9);
    ::uPtr< ::uArray*>(array_127)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(array_127)->Item< float>(1) = 0.0f;
    ::uPtr< ::uArray*>(array_127)->Item< float>(2) = 0.0f;
    ::uPtr< ::uArray*>(array_127)->Item< float>(3) = 0.0f;
    ::uPtr< ::uArray*>(array_127)->Item< float>(4) = 1.0f;
    ::uPtr< ::uArray*>(array_127)->Item< float>(5) = 0.0f;
    ::uPtr< ::uArray*>(array_127)->Item< float>(6) = 0.0f;
    ::uPtr< ::uArray*>(array_127)->Item< float>(7) = 0.0f;
    ::uPtr< ::uArray*>(array_127)->Item< float>(8) = 0.0f;
    ::uArray* SizeX = array_127;
    array_128 = ::uNewArray(::app::Uno::Float__typeof(), 9);
    ::uPtr< ::uArray*>(array_128)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(array_128)->Item< float>(1) = 0.0f;
    ::uPtr< ::uArray*>(array_128)->Item< float>(2) = 0.0f;
    ::uPtr< ::uArray*>(array_128)->Item< float>(3) = 0.0f;
    ::uPtr< ::uArray*>(array_128)->Item< float>(4) = 0.0f;
    ::uPtr< ::uArray*>(array_128)->Item< float>(5) = 1.0f;
    ::uPtr< ::uArray*>(array_128)->Item< float>(6) = 0.0f;
    ::uPtr< ::uArray*>(array_128)->Item< float>(7) = 0.0f;
    ::uPtr< ::uArray*>(array_128)->Item< float>(8) = 0.0f;
    ::uArray* SizeY = array_128;
    array_129 = ::uNewArray(::app::Uno::Float__typeof(), 9);
    ::uPtr< ::uArray*>(array_129)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(array_129)->Item< float>(1) = 0.0f;
    ::uPtr< ::uArray*>(array_129)->Item< float>(2) = 0.0f;
    ::uPtr< ::uArray*>(array_129)->Item< float>(3) = 0.0f;
    ::uPtr< ::uArray*>(array_129)->Item< float>(4) = 0.0f;
    ::uPtr< ::uArray*>(array_129)->Item< float>(5) = 0.0f;
    ::uPtr< ::uArray*>(array_129)->Item< float>(6) = 1.0f;
    ::uPtr< ::uArray*>(array_129)->Item< float>(7) = 0.0f;
    ::uPtr< ::uArray*>(array_129)->Item< float>(8) = 0.0f;
    ::uArray* ExtendX = array_129;
    array_130 = ::uNewArray(::app::Uno::Float__typeof(), 9);
    ::uPtr< ::uArray*>(array_130)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(array_130)->Item< float>(1) = 0.0f;
    ::uPtr< ::uArray*>(array_130)->Item< float>(2) = 0.0f;
    ::uPtr< ::uArray*>(array_130)->Item< float>(3) = 0.0f;
    ::uPtr< ::uArray*>(array_130)->Item< float>(4) = 0.0f;
    ::uPtr< ::uArray*>(array_130)->Item< float>(5) = 0.0f;
    ::uPtr< ::uArray*>(array_130)->Item< float>(6) = 0.0f;
    ::uPtr< ::uArray*>(array_130)->Item< float>(7) = 1.0f;
    ::uPtr< ::uArray*>(array_130)->Item< float>(8) = 0.0f;
    ::uArray* ExtendY = array_130;
    array_131 = ::uNewArray(::app::Uno::Float__typeof(), 9);
    ::uPtr< ::uArray*>(array_131)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(array_131)->Item< float>(1) = 0.0f;
    ::uPtr< ::uArray*>(array_131)->Item< float>(2) = 0.0f;
    ::uPtr< ::uArray*>(array_131)->Item< float>(3) = 0.0f;
    ::uPtr< ::uArray*>(array_131)->Item< float>(4) = 0.0f;
    ::uPtr< ::uArray*>(array_131)->Item< float>(5) = 0.0f;
    ::uPtr< ::uArray*>(array_131)->Item< float>(6) = 0.0f;
    ::uPtr< ::uArray*>(array_131)->Item< float>(7) = 0.0f;
    ::uPtr< ::uArray*>(array_131)->Item< float>(8) = 1.0f;
    ::uArray* Mn = array_131;
    array_132 = ::uNewArray(::uGetArrayType(::app::Uno::Float__typeof()), 56);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(0) = CornerRadius0;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(1) = __this->add(SizeY, ExtendY);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(2) = __this->sub(SizeX, CornerRadius1);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(3) = __this->add(SizeY, ExtendY);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(4) = __this->neg(ExtendX);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(5) = __this->sub(SizeY, CornerRadius0);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(6) = CornerRadius0;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(7) = __this->sub(SizeY, CornerRadius0);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(8) = __this->sub(SizeX, CornerRadius1);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(9) = __this->sub(SizeY, CornerRadius1);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(10) = __this->add(SizeX, ExtendX);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(11) = __this->sub(SizeY, CornerRadius1);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(12) = Mn;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(13) = __this->sub(SizeY, Mn);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(14) = __this->sub(SizeX, Mn);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(15) = __this->sub(SizeY, Mn);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(16) = Mn;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(17) = Mn;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(18) = __this->sub(SizeX, Mn);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(19) = Mn;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(20) = __this->neg(ExtendX);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(21) = CornerRadius3;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(22) = CornerRadius3;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(23) = CornerRadius3;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(24) = __this->sub(SizeX, CornerRadius2);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(25) = CornerRadius2;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(26) = __this->add(SizeX, ExtendX);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(27) = CornerRadius2;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(28) = CornerRadius3;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(29) = __this->neg(ExtendY);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(30) = __this->sub(SizeX, CornerRadius2);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(31) = __this->neg(ExtendY);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(32) = __this->neg(ExtendX);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(33) = __this->add(SizeY, ExtendY);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(34) = __this->add(SizeX, ExtendX);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(35) = __this->add(SizeY, ExtendY);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(36) = __this->neg(ExtendX);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(37) = __this->neg(ExtendY);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(38) = __this->add(SizeX, ExtendX);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(39) = __this->neg(ExtendY);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(40) = Mn;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(41) = __this->sub(SizeY, CornerRadius0);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(42) = __this->sub(SizeX, Mn);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(43) = __this->sub(SizeY, CornerRadius1);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(44) = Mn;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(45) = CornerRadius3;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(46) = __this->sub(SizeX, Mn);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(47) = CornerRadius2;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(48) = CornerRadius0;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(49) = __this->sub(SizeY, Mn);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(50) = __this->sub(SizeX, CornerRadius1);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(51) = __this->sub(SizeY, Mn);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(52) = CornerRadius3;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(53) = Mn;
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(54) = __this->sub(SizeX, CornerRadius2);
    ::uPtr< ::uArray*>(array_132)->ItemStrong< ::uArray*>(55) = Mn;
    ::uArray* vr = array_132;
    ::uArray* offsets = ::uNewArray(::app::Uno::Float2__typeof(), ::uPtr< ::uArray*>(vr)->Length());

    for (int i = 0; i < vr->Length(); ++i)
    {
        ::app::Uno::Int2 offset = ::app::Uno::Int2__New_2(NULL, 0, 0);
        ::uArray* v = ::uPtr< ::uArray*>(vr)->Item< ::uArray*>(i);

        for (int j = 0; j < ::uPtr< ::uArray*>(v)->Length(); ++j)
        {
            float f = ::uPtr< ::uArray*>(v)->Item< float>(j);

            if (f != 0.0f)
            {
                if (offset.Y != 0)
                {
                    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("more than two non-zero values!")));
                }

                int o = 1 + j;
                offset = ::app::Uno::Int2__New_2(NULL, (f < 0.0f) ? -o : o, offset.X);
            }
        }

        ::uPtr< ::uArray*>(offsets)->Item< ::app::Uno::Float2>(i) = ::app::Uno::Float2__op_Implicit_4(NULL, offset);
    }

    array_133 = ::uNewArray(::app::Uno::Int__typeof(), 72);
    ::uPtr< ::uArray*>(array_133)->Item< int>(0) = 10;
    ::uPtr< ::uArray*>(array_133)->Item< int>(1) = 8;
    ::uPtr< ::uArray*>(array_133)->Item< int>(2) = 11;
    ::uPtr< ::uArray*>(array_133)->Item< int>(3) = 10;
    ::uPtr< ::uArray*>(array_133)->Item< int>(4) = 6;
    ::uPtr< ::uArray*>(array_133)->Item< int>(5) = 8;
    ::uPtr< ::uArray*>(array_133)->Item< int>(6) = 10;
    ::uPtr< ::uArray*>(array_133)->Item< int>(7) = 2;
    ::uPtr< ::uArray*>(array_133)->Item< int>(8) = 6;
    ::uPtr< ::uArray*>(array_133)->Item< int>(9) = 2;
    ::uPtr< ::uArray*>(array_133)->Item< int>(10) = 3;
    ::uPtr< ::uArray*>(array_133)->Item< int>(11) = 6;
    ::uPtr< ::uArray*>(array_133)->Item< int>(12) = 14;
    ::uPtr< ::uArray*>(array_133)->Item< int>(13) = 11;
    ::uPtr< ::uArray*>(array_133)->Item< int>(14) = 8;
    ::uPtr< ::uArray*>(array_133)->Item< int>(15) = 14;
    ::uPtr< ::uArray*>(array_133)->Item< int>(16) = 8;
    ::uPtr< ::uArray*>(array_133)->Item< int>(17) = 15;
    ::uPtr< ::uArray*>(array_133)->Item< int>(18) = 8;
    ::uPtr< ::uArray*>(array_133)->Item< int>(19) = 9;
    ::uPtr< ::uArray*>(array_133)->Item< int>(20) = 15;
    ::uPtr< ::uArray*>(array_133)->Item< int>(21) = 9;
    ::uPtr< ::uArray*>(array_133)->Item< int>(22) = 12;
    ::uPtr< ::uArray*>(array_133)->Item< int>(23) = 15;
    ::uPtr< ::uArray*>(array_133)->Item< int>(24) = 3;
    ::uPtr< ::uArray*>(array_133)->Item< int>(25) = 0;
    ::uPtr< ::uArray*>(array_133)->Item< int>(26) = 6;
    ::uPtr< ::uArray*>(array_133)->Item< int>(27) = 0;
    ::uPtr< ::uArray*>(array_133)->Item< int>(28) = 1;
    ::uPtr< ::uArray*>(array_133)->Item< int>(29) = 6;
    ::uPtr< ::uArray*>(array_133)->Item< int>(30) = 6;
    ::uPtr< ::uArray*>(array_133)->Item< int>(31) = 1;
    ::uPtr< ::uArray*>(array_133)->Item< int>(32) = 4;
    ::uPtr< ::uArray*>(array_133)->Item< int>(33) = 6;
    ::uPtr< ::uArray*>(array_133)->Item< int>(34) = 4;
    ::uPtr< ::uArray*>(array_133)->Item< int>(35) = 7;
    ::uPtr< ::uArray*>(array_133)->Item< int>(36) = 7;
    ::uPtr< ::uArray*>(array_133)->Item< int>(37) = 4;
    ::uPtr< ::uArray*>(array_133)->Item< int>(38) = 5;
    ::uPtr< ::uArray*>(array_133)->Item< int>(39) = 7;
    ::uPtr< ::uArray*>(array_133)->Item< int>(40) = 5;
    ::uPtr< ::uArray*>(array_133)->Item< int>(41) = 9;
    ::uPtr< ::uArray*>(array_133)->Item< int>(42) = 9;
    ::uPtr< ::uArray*>(array_133)->Item< int>(43) = 5;
    ::uPtr< ::uArray*>(array_133)->Item< int>(44) = 13;
    ::uPtr< ::uArray*>(array_133)->Item< int>(45) = 9;
    ::uPtr< ::uArray*>(array_133)->Item< int>(46) = 13;
    ::uPtr< ::uArray*>(array_133)->Item< int>(47) = 12;
    ::uPtr< ::uArray*>(array_133)->Item< int>(48) = 2;
    ::uPtr< ::uArray*>(array_133)->Item< int>(49) = 16;
    ::uPtr< ::uArray*>(array_133)->Item< int>(50) = 3;
    ::uPtr< ::uArray*>(array_133)->Item< int>(51) = 3;
    ::uPtr< ::uArray*>(array_133)->Item< int>(52) = 16;
    ::uPtr< ::uArray*>(array_133)->Item< int>(53) = 0;
    ::uPtr< ::uArray*>(array_133)->Item< int>(54) = 1;
    ::uPtr< ::uArray*>(array_133)->Item< int>(55) = 17;
    ::uPtr< ::uArray*>(array_133)->Item< int>(56) = 4;
    ::uPtr< ::uArray*>(array_133)->Item< int>(57) = 4;
    ::uPtr< ::uArray*>(array_133)->Item< int>(58) = 17;
    ::uPtr< ::uArray*>(array_133)->Item< int>(59) = 5;
    ::uPtr< ::uArray*>(array_133)->Item< int>(60) = 15;
    ::uPtr< ::uArray*>(array_133)->Item< int>(61) = 12;
    ::uPtr< ::uArray*>(array_133)->Item< int>(62) = 19;
    ::uPtr< ::uArray*>(array_133)->Item< int>(63) = 12;
    ::uPtr< ::uArray*>(array_133)->Item< int>(64) = 13;
    ::uPtr< ::uArray*>(array_133)->Item< int>(65) = 19;
    ::uPtr< ::uArray*>(array_133)->Item< int>(66) = 11;
    ::uPtr< ::uArray*>(array_133)->Item< int>(67) = 18;
    ::uPtr< ::uArray*>(array_133)->Item< int>(68) = 10;
    ::uPtr< ::uArray*>(array_133)->Item< int>(69) = 14;
    ::uPtr< ::uArray*>(array_133)->Item< int>(70) = 18;
    ::uPtr< ::uArray*>(array_133)->Item< int>(71) = 11;
    ::uArray* vsr = array_133;
    array_134 = ::uNewArray(::app::Uno::Int__typeof(), 72);
    ::uPtr< ::uArray*>(array_134)->Item< int>(0) = 22;
    ::uPtr< ::uArray*>(array_134)->Item< int>(1) = 8;
    ::uPtr< ::uArray*>(array_134)->Item< int>(2) = 22;
    ::uPtr< ::uArray*>(array_134)->Item< int>(3) = 22;
    ::uPtr< ::uArray*>(array_134)->Item< int>(4) = 6;
    ::uPtr< ::uArray*>(array_134)->Item< int>(5) = 8;
    ::uPtr< ::uArray*>(array_134)->Item< int>(6) = 22;
    ::uPtr< ::uArray*>(array_134)->Item< int>(7) = 20;
    ::uPtr< ::uArray*>(array_134)->Item< int>(8) = 6;
    ::uPtr< ::uArray*>(array_134)->Item< int>(9) = 20;
    ::uPtr< ::uArray*>(array_134)->Item< int>(10) = 20;
    ::uPtr< ::uArray*>(array_134)->Item< int>(11) = 6;
    ::uPtr< ::uArray*>(array_134)->Item< int>(12) = 26;
    ::uPtr< ::uArray*>(array_134)->Item< int>(13) = 26;
    ::uPtr< ::uArray*>(array_134)->Item< int>(14) = 8;
    ::uPtr< ::uArray*>(array_134)->Item< int>(15) = 26;
    ::uPtr< ::uArray*>(array_134)->Item< int>(16) = 8;
    ::uPtr< ::uArray*>(array_134)->Item< int>(17) = 27;
    ::uPtr< ::uArray*>(array_134)->Item< int>(18) = 8;
    ::uPtr< ::uArray*>(array_134)->Item< int>(19) = 9;
    ::uPtr< ::uArray*>(array_134)->Item< int>(20) = 27;
    ::uPtr< ::uArray*>(array_134)->Item< int>(21) = 9;
    ::uPtr< ::uArray*>(array_134)->Item< int>(22) = 27;
    ::uPtr< ::uArray*>(array_134)->Item< int>(23) = 27;
    ::uPtr< ::uArray*>(array_134)->Item< int>(24) = 24;
    ::uPtr< ::uArray*>(array_134)->Item< int>(25) = 24;
    ::uPtr< ::uArray*>(array_134)->Item< int>(26) = 6;
    ::uPtr< ::uArray*>(array_134)->Item< int>(27) = 24;
    ::uPtr< ::uArray*>(array_134)->Item< int>(28) = 25;
    ::uPtr< ::uArray*>(array_134)->Item< int>(29) = 6;
    ::uPtr< ::uArray*>(array_134)->Item< int>(30) = 6;
    ::uPtr< ::uArray*>(array_134)->Item< int>(31) = 25;
    ::uPtr< ::uArray*>(array_134)->Item< int>(32) = 25;
    ::uPtr< ::uArray*>(array_134)->Item< int>(33) = 6;
    ::uPtr< ::uArray*>(array_134)->Item< int>(34) = 25;
    ::uPtr< ::uArray*>(array_134)->Item< int>(35) = 7;
    ::uPtr< ::uArray*>(array_134)->Item< int>(36) = 7;
    ::uPtr< ::uArray*>(array_134)->Item< int>(37) = 21;
    ::uPtr< ::uArray*>(array_134)->Item< int>(38) = 21;
    ::uPtr< ::uArray*>(array_134)->Item< int>(39) = 7;
    ::uPtr< ::uArray*>(array_134)->Item< int>(40) = 21;
    ::uPtr< ::uArray*>(array_134)->Item< int>(41) = 9;
    ::uPtr< ::uArray*>(array_134)->Item< int>(42) = 9;
    ::uPtr< ::uArray*>(array_134)->Item< int>(43) = 21;
    ::uPtr< ::uArray*>(array_134)->Item< int>(44) = 23;
    ::uPtr< ::uArray*>(array_134)->Item< int>(45) = 9;
    ::uPtr< ::uArray*>(array_134)->Item< int>(46) = 23;
    ::uPtr< ::uArray*>(array_134)->Item< int>(47) = 23;
    ::uPtr< ::uArray*>(array_134)->Item< int>(48) = 3;
    ::uPtr< ::uArray*>(array_134)->Item< int>(49) = 3;
    ::uPtr< ::uArray*>(array_134)->Item< int>(50) = 3;
    ::uPtr< ::uArray*>(array_134)->Item< int>(51) = 3;
    ::uPtr< ::uArray*>(array_134)->Item< int>(52) = 3;
    ::uPtr< ::uArray*>(array_134)->Item< int>(53) = 3;
    ::uPtr< ::uArray*>(array_134)->Item< int>(54) = 4;
    ::uPtr< ::uArray*>(array_134)->Item< int>(55) = 4;
    ::uPtr< ::uArray*>(array_134)->Item< int>(56) = 4;
    ::uPtr< ::uArray*>(array_134)->Item< int>(57) = 4;
    ::uPtr< ::uArray*>(array_134)->Item< int>(58) = 4;
    ::uPtr< ::uArray*>(array_134)->Item< int>(59) = 4;
    ::uPtr< ::uArray*>(array_134)->Item< int>(60) = 12;
    ::uPtr< ::uArray*>(array_134)->Item< int>(61) = 12;
    ::uPtr< ::uArray*>(array_134)->Item< int>(62) = 12;
    ::uPtr< ::uArray*>(array_134)->Item< int>(63) = 12;
    ::uPtr< ::uArray*>(array_134)->Item< int>(64) = 12;
    ::uPtr< ::uArray*>(array_134)->Item< int>(65) = 12;
    ::uPtr< ::uArray*>(array_134)->Item< int>(66) = 11;
    ::uPtr< ::uArray*>(array_134)->Item< int>(67) = 11;
    ::uPtr< ::uArray*>(array_134)->Item< int>(68) = 11;
    ::uPtr< ::uArray*>(array_134)->Item< int>(69) = 11;
    ::uPtr< ::uArray*>(array_134)->Item< int>(70) = 11;
    ::uPtr< ::uArray*>(array_134)->Item< int>(71) = 11;
    ::uArray* ptr = array_134;
    ::app::Uno::Buffer* bufferVertex = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(vsr)->Length() * 16);
    ::app::Uno::Buffer* bufferEdge = ::app::Uno::Buffer__New_3(NULL, vsr->Length() * 16);
    __this->_vertexInfo = ::uDefault< ::app::Uno::Graphics::VertexAttributeInfo>();
    __this->_vertexInfo.BufferOffset = 0;
    __this->_vertexInfo.BufferStride = 16;
    __this->_vertexInfo.Type = 4;
    __this->_vertexInfo.Buffer = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, 0);
    __this->_edgeInfo = ::uDefault< ::app::Uno::Graphics::VertexAttributeInfo>();
    __this->_edgeInfo.BufferOffset = 0;
    __this->_edgeInfo.BufferStride = 16;
    __this->_edgeInfo.Type = 4;
    __this->_edgeInfo.Buffer = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, 0);

    for (int i = 0; i < vsr->Length(); ++i)
    {
        ::uPtr< ::app::Uno::Buffer*>(bufferVertex)->SetFloat4(i * __this->_vertexInfo.BufferStride, ::app::Uno::Float4__New_6(NULL, ::uPtr< ::uArray*>(offsets)->Item< ::app::Uno::Float2>(::uPtr< ::uArray*>(vsr)->Item< int>(i) * 2), ::uPtr< ::uArray*>(offsets)->Item< ::app::Uno::Float2>((::uPtr< ::uArray*>(vsr)->Item< int>(i) * 2) + 1)), true);
        ::uPtr< ::app::Uno::Buffer*>(bufferEdge)->SetFloat4(i * __this->_edgeInfo.BufferStride, ::app::Uno::Float4__New_6(NULL, offsets->Item< ::app::Uno::Float2>(::uPtr< ::uArray*>(ptr)->Item< int>(i) * 2), offsets->Item< ::app::Uno::Float2>((::uPtr< ::uArray*>(ptr)->Item< int>(i) * 2) + 1)), true);
        ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->Append((float)(::uUShort)(1 + ((i < 48) ? 8 : ((i < 54) ? 0 : ((i < 60) ? 1 : ((i < 66) ? 2 : 3))))));
    }

    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->_vertexInfo.Buffer)->Update(bufferVertex);
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->_edgeInfo.Buffer)->Update(bufferEdge);
    ::uPtr< ::app::Fuse::Drawing::Internal::FloatBuffer*>(__this->_bufferDistance)->InitDeviceVertex(0);
}

::uArray* Rectangle__neg(Rectangle* __this, ::uArray* a)
{
    ::uArray* r = ::uNewArray(::app::Uno::Float__typeof(), ::uPtr< ::uArray*>(a)->Length());

    for (int i = 0; i < a->Length(); i++)
    {
        r->Item< float>(i) = -a->Item< float>(i);
    }

    return r;
}

Rectangle* Rectangle__New_1(::uStatic* __this)
{
    Rectangle* inst = (Rectangle*)::uAllocObject(sizeof(Rectangle), Rectangle__typeof());
    inst->_ObjInit();
    return inst;
}

void Rectangle__Stroke(Rectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Node* node, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius, ::app::Fuse::Drawing::Stroke* stroke, ::app::Uno::Float2 Position, float Smoothness)
{
    ::app::Uno::Float2 r = ::uPtr< ::app::Fuse::Drawing::Stroke*>(stroke)->GetDeviceAdjusted(::uPtr< ::app::Fuse::DrawContext*>(dc)->ViewportPointDensity());
    ::app::Fuse::Drawing::Primitives::StrokeCoverage* sc = __this->_strokeCoverage;
    ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(sc)->Radius = r.Item(0) / 2.0f;
    sc->Center = r.Item(1);
    float extend = ::app::Uno::Math__Max_8(NULL, 0.0f, r.Item(0) + r.Item(1)) + Smoothness;
    __this->Draw(dc, node, Size, CornerRadius, stroke->Brush(), (::app::Fuse::Drawing::Primitives::Coverage*)sc, ::app::Uno::Float2__New_1(NULL, extend), Position, Smoothness);
}

::uArray* Rectangle__sub(Rectangle* __this, ::uArray* a, ::uArray* b)
{
    ::uArray* r = ::uNewArray(::app::Uno::Float__typeof(), ::uPtr< ::uArray*>(a)->Length());

    for (int i = 0; i < a->Length(); i++)
    {
        r->Item< float>(i) = a->Item< float>(i) - ::uPtr< ::uArray*>(b)->Item< float>(i);
    }

    return r;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Primitives/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StrokeCoverage__uType* StrokeCoverage__typeof()
{
    static ::uStaticStrong<StrokeCoverage__uType*> type;
    if (type != NULL) return type;

    type = (StrokeCoverage__uType*)::uAllocClassType(sizeof(StrokeCoverage__uType), "Fuse.Drawing.Primitives.StrokeCoverage", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Primitives::Coverage__typeof());

    return type;
}

void StrokeCoverage___ObjInit_1(StrokeCoverage* __this)
{
    __this->Radius = 1.0f;
    __this->Center = 0.0f;
    ::app::Fuse::Drawing::Primitives::Coverage___ObjInit(__this);
}

StrokeCoverage* StrokeCoverage__New_1(::uStatic* __this)
{
    StrokeCoverage* inst = (StrokeCoverage*)::uAllocObject(sizeof(StrokeCoverage), StrokeCoverage__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Primitives/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Wedge*> Wedge__Singleton;

Wedge__uType* Wedge__typeof()
{
    static ::uStaticStrong<Wedge__uType*> type;
    if (type != NULL) return type;

    type = (Wedge__uType*)::uAllocClassType(sizeof(Wedge__uType), "Fuse.Drawing.Primitives.Wedge", false, 0, 4, 0);

    type->SetStrongRefs(
        "_concaveWedgeCoverage", offsetof(Wedge, _concaveWedgeCoverage),
        "_convexWedgeCoverage", offsetof(Wedge, _convexWedgeCoverage),
        "_fillCoverage", offsetof(Wedge, _fillCoverage),
        "_strokeCoverage", offsetof(Wedge, _strokeCoverage));

    return type;
}

void Wedge___ObjInit(Wedge* __this)
{
    __this->_convexWedgeCoverage = ::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__New_1(NULL);
    __this->_concaveWedgeCoverage = ::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__New_1(NULL);
    __this->_strokeCoverage = ::app::Fuse::Drawing::Primitives::StrokeCoverage__New_1(NULL);
    __this->_fillCoverage = ::app::Fuse::Drawing::Primitives::FillCoverage__New_1(NULL);
}

void Wedge___TypeInit(::uStatic* __this)
{
    Wedge__Singleton = Wedge__New_1(NULL);
}

void Wedge__Fill(Wedge* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float2 center, float startAngle, float endAngle, float smoothness)
{
    ::app::Fuse::Drawing::Primitives::WedgeCoverage* wc = __this->SetupWedgeCoverage(startAngle, endAngle);
    ::uPtr< ::app::Fuse::Drawing::Primitives::Circle*>(::app::Fuse::Drawing::Primitives::Circle__Singleton)->Draw(dc, node, radius, brush, (::app::Fuse::Drawing::Primitives::Coverage*)__this->_fillCoverage, (::app::Fuse::Drawing::Primitives::LimitCoverage*)wc, ::app::Uno::Float2__New_1(NULL, smoothness), center, smoothness);
}

Wedge* Wedge__New_1(::uStatic* __this)
{
    Wedge* inst = (Wedge*)::uAllocObject(sizeof(Wedge), Wedge__typeof());
    inst->_ObjInit();
    return inst;
}

::app::Fuse::Drawing::Primitives::WedgeCoverage* Wedge__SetupWedgeCoverage(Wedge* __this, float startAngle, float endAngle)
{
    float pStartAngle = ::app::Uno::Math__Mod_4(NULL, startAngle, 6.28318548f);
    float pEndAngle = ::app::Uno::Math__Mod_4(NULL, endAngle, 6.28318548f);

    if (pEndAngle < pStartAngle)
    {
        pEndAngle = pEndAngle + 6.28318548f;
    }

    ::app::Fuse::Drawing::Primitives::WedgeCoverage* wc = (::app::Fuse::Drawing::Primitives::WedgeCoverage*)__this->_concaveWedgeCoverage;

    if ((pEndAngle - pStartAngle) < 3.14159274f)
    {
        wc = (::app::Fuse::Drawing::Primitives::WedgeCoverage*)__this->_convexWedgeCoverage;
    }

    ::uPtr< ::app::Fuse::Drawing::Primitives::WedgeCoverage*>(wc)->StartAngle = pStartAngle;
    wc->EndAngle = pEndAngle;
    return wc;
}

void Wedge__Stroke(Wedge* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Stroke* stroke, ::app::Uno::Float2 center, float startAngle, float endAngle, float smoothness)
{
    ::app::Uno::Float2 r = ::uPtr< ::app::Fuse::Drawing::Stroke*>(stroke)->GetDeviceAdjusted(::uPtr< ::app::Fuse::DrawContext*>(dc)->ViewportPointDensity());
    ::app::Fuse::Drawing::Primitives::StrokeCoverage* sc = __this->_strokeCoverage;
    ::uPtr< ::app::Fuse::Drawing::Primitives::StrokeCoverage*>(sc)->Radius = r.Item(0) / 2.0f;
    sc->Center = r.Item(1);
    float extend = ::app::Uno::Math__Max_8(NULL, 0.0f, r.Item(0) + r.Item(1)) + smoothness;
    ::app::Fuse::Drawing::Primitives::WedgeCoverage* wc = __this->SetupWedgeCoverage(startAngle, endAngle);
    ::uPtr< ::app::Fuse::Drawing::Primitives::Circle*>(::app::Fuse::Drawing::Primitives::Circle__Singleton)->Draw(dc, node, radius, stroke->Brush(), (::app::Fuse::Drawing::Primitives::Coverage*)sc, (::app::Fuse::Drawing::Primitives::LimitCoverage*)wc, ::app::Uno::Float2__New_1(NULL, extend), center, smoothness);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Primitives/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WedgeCoverage__uType* WedgeCoverage__typeof()
{
    static ::uStaticStrong<WedgeCoverage__uType*> type;
    if (type != NULL) return type;

    type = (WedgeCoverage__uType*)::uAllocClassType(sizeof(WedgeCoverage__uType), "Fuse.Drawing.Primitives.WedgeCoverage", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Primitives::LimitCoverage__typeof());

    return type;
}

void WedgeCoverage___ObjInit_1(WedgeCoverage* __this)
{
    __this->StartAngle = 0.0f;
    __this->EndAngle = 6.28318548f;
    ::app::Fuse::Drawing::Primitives::LimitCoverage___ObjInit(__this);
}

}}}}
