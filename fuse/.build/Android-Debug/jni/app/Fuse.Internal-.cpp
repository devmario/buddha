#include <app/Fuse.Drawing.ResampleMode.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.AlignmentHelpers.h>
#include <app/Fuse.Elements.StretchDirection.h>
#include <app/Fuse.Elements.StretchMode.h>
#include <app/Fuse.Elements.StretchSizing.h>
#include <app/Fuse.Elements.Visibility.h>
#include <app/Fuse.Internal.Blender__bool.h>
#include <app/Fuse.Internal.Blender__float.h>
#include <app/Fuse.Internal.Blender__float2.h>
#include <app/Fuse.Internal.Blender__float4.h>
#include <app/Fuse.Internal.Blender__Fuse_Elements_Visibility.h>
#include <app/Fuse.Internal.BlenderMap.h>
#include <app/Fuse.Internal.DoubleBlender.h>
#include <app/Fuse.Internal.Float2Blender.h>
#include <app/Fuse.Internal.Float3Blender.h>
#include <app/Fuse.Internal.Float4Blender.h>
#include <app/Fuse.Internal.FloatBlender.h>
#include <app/Fuse.Internal.FrustumMatrix.h>
#include <app/Fuse.Internal.IImageContainerOwner.h>
#include <app/Fuse.Internal.ImageContainer.h>
#include <app/Fuse.Internal.RectExtensions.h>
#include <app/Fuse.Internal.SizingContainer.h>
#include <app/Fuse.Internal.Statistics.h>
#include <app/Fuse.Resources.FileImageSource.h>
#include <app/Fuse.Resources.HttpImageSource.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Resources.MemoryPolicy.h>
#include <app/Fuse.Resources.MultiDensityImageSource.h>
#include <app/Fuse.SizeFlags.h>
#include <app/Uno.Action__Uno_UX_FileSource.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__Uno_Type__object.h>
#include <app/Uno.Collections.ICollection__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.ICollection__Uno_UX_FileSource.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_FileSource.h>
#include <app/Uno.Collections.IList__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IList__Uno_UX_FileSource.h>
#include <app/Uno.Collections.ObservableList__Uno_UX_FileSource.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Rect.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Internal {

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__Uno_Type__object*> BlenderMap___blenders;

BlenderMap__uType* BlenderMap__typeof()
{
    static ::uStaticStrong<BlenderMap__uType*> type;
    if (type != NULL) return type;

    type = (BlenderMap__uType*)::uAllocClassType(sizeof(BlenderMap__uType), "Fuse.Internal.BlenderMap", false, 0, 0, 0);

    return type;
}

void BlenderMap___TypeInit(::uStatic* __this)
{
    BlenderMap___blenders = ::app::Uno::Collections::Dictionary__Uno_Type__object__New_1(NULL);
}

::app::Fuse::Internal::Blender__bool* BlenderMap__Get__bool(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Bool__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Bool__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Bool__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__bool*>(blender, ::app::Fuse::Internal::Blender__bool__typeof());
}

::app::Fuse::Internal::Blender__float* BlenderMap__Get__float(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Float__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Float__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Float__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__float*>(blender, ::app::Fuse::Internal::Blender__float__typeof());
}

::app::Fuse::Internal::Blender__float2* BlenderMap__Get__float2(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Float2__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Float2__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Float2__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__float2*>(blender, ::app::Fuse::Internal::Blender__float2__typeof());
}

::app::Fuse::Internal::Blender__float4* BlenderMap__Get__float4(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Float4__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Float4__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Float4__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__float4*>(blender, ::app::Fuse::Internal::Blender__float4__typeof());
}

::app::Fuse::Internal::Blender__Fuse_Elements_Visibility* BlenderMap__Get__Fuse_Elements_Visibility(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Fuse::Elements::Visibility__typeof(), &blender))
    {
        if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::DoubleBlender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Fuse::Elements::Visibility__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Fuse::Elements::Visibility__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__Fuse_Elements_Visibility*>(blender, ::app::Fuse::Internal::Blender__Fuse_Elements_Visibility__typeof());
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DoubleBlender__uType* DoubleBlender__typeof()
{
    static ::uStaticStrong<DoubleBlender__uType*> type;
    if (type != NULL) return type;

    type = (DoubleBlender__uType*)::uAllocClassType(sizeof(DoubleBlender__uType), "Fuse.Internal.DoubleBlender", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Internal::Blender__double__typeof());

    return type;
}

void DoubleBlender___ObjInit_1(DoubleBlender* __this)
{
    ::app::Fuse::Internal::Blender__double___ObjInit(__this);
}

DoubleBlender* DoubleBlender__New_1(::uStatic* __this)
{
    DoubleBlender* inst = (DoubleBlender*)::uAllocObject(sizeof(DoubleBlender), DoubleBlender__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Float2Blender__uType* Float2Blender__typeof()
{
    static ::uStaticStrong<Float2Blender__uType*> type;
    if (type != NULL) return type;

    type = (Float2Blender__uType*)::uAllocClassType(sizeof(Float2Blender__uType), "Fuse.Internal.Float2Blender", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Internal::Blender__float2__typeof());
    type->__fp_Add = (::app::Uno::Float2(*)(::app::Fuse::Internal::Blender__float2*, ::app::Uno::Float2, ::app::Uno::Float2))Float2Blender__Add;
    type->__fp_get_Zero = (::app::Uno::Float2(*)(::app::Fuse::Internal::Blender__float2*))Float2Blender__get_Zero;
    type->__fp_Length = (double(*)(::app::Fuse::Internal::Blender__float2*, ::app::Uno::Float2))Float2Blender__Length;
    type->__fp_Lerp = (::app::Uno::Float2(*)(::app::Fuse::Internal::Blender__float2*, ::app::Uno::Float2, ::app::Uno::Float2, double))Float2Blender__Lerp;
    type->__fp_Sub = (::app::Uno::Float2(*)(::app::Fuse::Internal::Blender__float2*, ::app::Uno::Float2, ::app::Uno::Float2))Float2Blender__Sub;
    type->__fp_ToUnit = (::app::Uno::Float2(*)(::app::Fuse::Internal::Blender__float2*, ::app::Uno::Float2, double*))Float2Blender__ToUnit;
    type->__fp_Weight = (::app::Uno::Float2(*)(::app::Fuse::Internal::Blender__float2*, ::app::Uno::Float2, double))Float2Blender__Weight;

    return type;
}

void Float2Blender___ObjInit_1(Float2Blender* __this)
{
    ::app::Fuse::Internal::Blender__float2___ObjInit(__this);
}

::app::Uno::Float2 Float2Blender__Add(Float2Blender* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    return ::app::Uno::Float2__op_Addition_2(NULL, a, b);
}

::app::Uno::Float2 Float2Blender__get_Zero(Float2Blender* __this)
{
    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

double Float2Blender__Length(Float2Blender* __this, ::app::Uno::Float2 a)
{
    return (double)::app::Uno::Vector__Length_2(NULL, a);
}

::app::Uno::Float2 Float2Blender__Lerp(Float2Blender* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b, double d)
{
    return ::app::Uno::Math__Lerp_6(NULL, a, b, (float)d);
}

Float2Blender* Float2Blender__New_1(::uStatic* __this)
{
    Float2Blender* inst = (Float2Blender*)::uAllocObject(sizeof(Float2Blender), Float2Blender__typeof());
    inst->_ObjInit_1();
    return inst;
}

::app::Uno::Float2 Float2Blender__Sub(Float2Blender* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    return ::app::Uno::Float2__op_Subtraction_2(NULL, a, b);
}

::app::Uno::Float2 Float2Blender__ToUnit(Float2Blender* __this, ::app::Uno::Float2 a, double* length)
{
    *length = (double)::app::Uno::Vector__Length_2(NULL, a);
    return ::app::Uno::Vector__Normalize(NULL, a);
}

::app::Uno::Float2 Float2Blender__Weight(Float2Blender* __this, ::app::Uno::Float2 v, double w)
{
    return ::app::Uno::Float2__op_Multiply_2(NULL, v, (float)w);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Float3Blender__uType* Float3Blender__typeof()
{
    static ::uStaticStrong<Float3Blender__uType*> type;
    if (type != NULL) return type;

    type = (Float3Blender__uType*)::uAllocClassType(sizeof(Float3Blender__uType), "Fuse.Internal.Float3Blender", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Internal::Blender__float3__typeof());

    return type;
}

void Float3Blender___ObjInit_1(Float3Blender* __this)
{
    ::app::Fuse::Internal::Blender__float3___ObjInit(__this);
}

Float3Blender* Float3Blender__New_1(::uStatic* __this)
{
    Float3Blender* inst = (Float3Blender*)::uAllocObject(sizeof(Float3Blender), Float3Blender__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Float4Blender__uType* Float4Blender__typeof()
{
    static ::uStaticStrong<Float4Blender__uType*> type;
    if (type != NULL) return type;

    type = (Float4Blender__uType*)::uAllocClassType(sizeof(Float4Blender__uType), "Fuse.Internal.Float4Blender", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Internal::Blender__float4__typeof());
    type->__fp_Add = (::app::Uno::Float4(*)(::app::Fuse::Internal::Blender__float4*, ::app::Uno::Float4, ::app::Uno::Float4))Float4Blender__Add;
    type->__fp_Weight = (::app::Uno::Float4(*)(::app::Fuse::Internal::Blender__float4*, ::app::Uno::Float4, double))Float4Blender__Weight;

    return type;
}

void Float4Blender___ObjInit_1(Float4Blender* __this)
{
    ::app::Fuse::Internal::Blender__float4___ObjInit(__this);
}

::app::Uno::Float4 Float4Blender__Add(Float4Blender* __this, ::app::Uno::Float4 a, ::app::Uno::Float4 b)
{
    return ::app::Uno::Float4__op_Addition(NULL, a, b);
}

Float4Blender* Float4Blender__New_1(::uStatic* __this)
{
    Float4Blender* inst = (Float4Blender*)::uAllocObject(sizeof(Float4Blender), Float4Blender__typeof());
    inst->_ObjInit_1();
    return inst;
}

::app::Uno::Float4 Float4Blender__Weight(Float4Blender* __this, ::app::Uno::Float4 v, double w)
{
    return ::app::Uno::Float4__op_Multiply_2(NULL, v, (float)w);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FloatBlender__uType* FloatBlender__typeof()
{
    static ::uStaticStrong<FloatBlender__uType*> type;
    if (type != NULL) return type;

    type = (FloatBlender__uType*)::uAllocClassType(sizeof(FloatBlender__uType), "Fuse.Internal.FloatBlender", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Internal::Blender__float__typeof());
    type->__fp_Add = (float(*)(::app::Fuse::Internal::Blender__float*, float, float))FloatBlender__Add;
    type->__fp_get_Zero = (float(*)(::app::Fuse::Internal::Blender__float*))FloatBlender__get_Zero;
    type->__fp_Length = (double(*)(::app::Fuse::Internal::Blender__float*, float))FloatBlender__Length;
    type->__fp_Lerp = (float(*)(::app::Fuse::Internal::Blender__float*, float, float, double))FloatBlender__Lerp;
    type->__fp_Sub = (float(*)(::app::Fuse::Internal::Blender__float*, float, float))FloatBlender__Sub;
    type->__fp_ToUnit = (float(*)(::app::Fuse::Internal::Blender__float*, float, double*))FloatBlender__ToUnit;
    type->__fp_Weight = (float(*)(::app::Fuse::Internal::Blender__float*, float, double))FloatBlender__Weight;

    return type;
}

void FloatBlender___ObjInit_1(FloatBlender* __this)
{
    ::app::Fuse::Internal::Blender__float___ObjInit(__this);
}

float FloatBlender__Add(FloatBlender* __this, float a, float b)
{
    return a + b;
}

float FloatBlender__get_Zero(FloatBlender* __this)
{
    return 0.0f;
}

double FloatBlender__Length(FloatBlender* __this, float a)
{
    return (double)::app::Uno::Math__Abs_8(NULL, a);
}

float FloatBlender__Lerp(FloatBlender* __this, float a, float b, double d)
{
    return a + ((b - a) * (float)d);
}

FloatBlender* FloatBlender__New_1(::uStatic* __this)
{
    FloatBlender* inst = (FloatBlender*)::uAllocObject(sizeof(FloatBlender), FloatBlender__typeof());
    inst->_ObjInit_1();
    return inst;
}

float FloatBlender__Sub(FloatBlender* __this, float a, float b)
{
    return a - b;
}

float FloatBlender__ToUnit(FloatBlender* __this, float a, double* length)
{
    *length = (double)::app::Uno::Math__Abs_8(NULL, a);
    return (float)((a < 0.0f) ? -1 : 1);
}

float FloatBlender__Weight(FloatBlender* __this, float v, double w)
{
    return v * (float)w;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FrustumMatrix__uType* FrustumMatrix__typeof()
{
    static ::uStaticStrong<FrustumMatrix__uType*> type;
    if (type != NULL) return type;

    type = (FrustumMatrix__uType*)::uAllocClassType(sizeof(FrustumMatrix__uType), "Fuse.Internal.FrustumMatrix");

    return type;
}

::app::Uno::Float4x4 FrustumMatrix__OrthoLH(::uStatic* __this, float width, float height, float near, float far)
{
    float halfWidth = width * 0.5f;
    float halfHeight = height * 0.5f;
    float left = -halfWidth;
    float right = halfWidth;
    float bottom = -halfHeight;
    float top = halfHeight;
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M11 = 2.0f / (right - left);
    result.M22 = 2.0f / (top - bottom);
    result.M33 = -2.0f / (far - near);
    result.M41 = -(right + left) / (right - left);
    result.M42 = -(top + bottom) / (top - bottom);
    result.M43 = (far + near) / (far - near);
    return result;
}

::app::Uno::Float4x4 FrustumMatrix__OrthoLHInverse(::uStatic* __this, float width, float height, float near, float far)
{
    float halfWidth = width * 0.5f;
    float halfHeight = height * 0.5f;
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M11 = halfWidth;
    result.M22 = halfHeight;
    result.M33 = -(far - near) / 2.0f;
    result.M43 = (near + far) / 2.0f;
    return result;
}

::app::Uno::Float4x4 FrustumMatrix__OrthoRH(::uStatic* __this, float width, float height, float zNear, float zFar)
{
    ::app::Uno::Float4x4 result = FrustumMatrix__OrthoLH(NULL, width, height, zNear, zFar);
    result.M33 = result.M33 * -1.0f;
    return result;
}

::app::Uno::Float4x4 FrustumMatrix__OrthoRHInverse(::uStatic* __this, float width, float height, float zNear, float zFar)
{
    ::app::Uno::Float4x4 result = FrustumMatrix__OrthoLHInverse(NULL, width, height, zNear, zFar);
    result.M33 = result.M33 * -1.0f;
    result.M43 = result.M43 * -1.0f;
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IImageContainerOwner__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Internal.IImageContainerOwner");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ImageContainer__uType* ImageContainer__typeof()
{
    static ::uStaticStrong<ImageContainer__uType*> type;
    if (type != NULL) return type;

    type = (ImageContainer__uType*)::uAllocClassType(sizeof(ImageContainer__uType), "Fuse.Internal.ImageContainer", false, 0, 6, 1);

    type->SetStrongRefs(
        "_files", offsetof(ImageContainer, _files),
        "_memoryPolicy", offsetof(ImageContainer, _memoryPolicy),
        "_source", offsetof(ImageContainer, _source),
        "ParamChanged", offsetof(ImageContainer, ParamChanged),
        "Sizing", offsetof(ImageContainer, Sizing),
        "SourceChanged", offsetof(ImageContainer, SourceChanged));

    type->SetWeakRefs(
        "_owner", offsetof(ImageContainer, _owner));

    return type;
}

void ImageContainer___ObjInit(ImageContainer* __this, ::uObject* owner)
{
    __this->Sizing = ::app::Fuse::Internal::SizingContainer__New_1(NULL);
    __this->_density = 1.0f;
    __this->_memoryPolicy = ::app::Fuse::Resources::MemoryPolicy__PreloadRetain;
    __this->_resampleMode = 2;
    __this->_isVisible = true;
    __this->_owner = owner;
}

void ImageContainer__add_ParamChanged(ImageContainer* __this, ::uDelegate* value)
{
    __this->ParamChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ParamChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void ImageContainer__add_SourceChanged(ImageContainer* __this, ::uDelegate* value)
{
    __this->SourceChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->SourceChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void ImageContainer__CheckPinning(ImageContainer* __this)
{
    if (__this->_source == NULL)
    {
        return;
    }

    bool on = __this->_isRooted;

    if (::uPtr< ::app::Fuse::Resources::MemoryPolicy*>(__this->MemoryPolicy())->UnpinInvisible() && !__this->_isVisible)
    {
        on = false;
    }

    if (on != __this->_sourcePinned)
    {
        if (on)
        {
            ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_source)->Pin();
        }
        else
        {
            ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_source)->Unpin();
        }

        __this->_sourcePinned = on;
    }
}

void ImageContainer__CreateMultiDensitySource(ImageContainer* __this)
{
    float ind_133 = float();
    ::app::Fuse::Resources::MemoryPolicy* ind_134;
    ::app::Fuse::Resources::FileImageSource* collection_128;
    ::app::Fuse::Resources::MultiDensityImageSource* s = ::app::Fuse::Resources::MultiDensityImageSource__New_1(NULL);

    for (::uObject* enum_127 = ::uPtr< ::app::Uno::Collections::ObservableList__Uno_UX_FileSource*>(__this->_files)->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_127)); )
    {
        ::app::Uno::UX::FileSource* f = ::app::Uno::Collections::IEnumerator__Uno_UX_FileSource::Current(::uPtr< ::uObject*>(enum_127));
        ::app::Uno::Collections::ICollection__Fuse_Resources_ImageSource::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Resources::MultiDensityImageSource*>(s)->Sources()), (::app::Fuse::Resources::ImageSource*)(collection_128 = ::app::Fuse::Resources::FileImageSource__New_1(NULL, f), ind_133 = __this->Density(), ::uPtr< ::app::Fuse::Resources::FileImageSource*>(collection_128)->Density(ind_133), ind_133, ind_134 = __this->MemoryPolicy(), ::uPtr< ::app::Fuse::Resources::FileImageSource*>(collection_128)->DefaultPolicy(ind_134), ind_134, collection_128));
    }

    __this->Source((::app::Fuse::Resources::ImageSource*)s);
}

int ImageContainer__get_ContentAlignment(ImageContainer* __this)
{
    return ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->Sizing)->align;
}

float ImageContainer__get_Density(ImageContainer* __this)
{
    return __this->_density;
}

::app::Uno::UX::FileSource* ImageContainer__get_File(ImageContainer* __this)
{
    if (__this->_files == NULL)
    {
        return NULL;
    }
    else
    {
        return ::uPtr< ::app::Uno::Collections::ObservableList__Uno_UX_FileSource*>(__this->_files)->Item(0);
    }
}

::uObject* ImageContainer__get_Files(ImageContainer* __this)
{
    if (__this->_files == NULL)
    {
        __this->_files = ::app::Uno::Collections::ObservableList__Uno_UX_FileSource__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_FileSource__typeof(), (const void*)ImageContainer__OnFileAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Uno_UX_FileSource__typeof(), (const void*)ImageContainer__OnFileRemoved, __this));
    }

    return (::uObject*)__this->_files;
}

bool ImageContainer__get_IsRooted(ImageContainer* __this)
{
    return __this->_isRooted;
}

bool ImageContainer__get_IsVisible(ImageContainer* __this)
{
    return __this->_isVisible;
}

::app::Fuse::Resources::MemoryPolicy* ImageContainer__get_MemoryPolicy(ImageContainer* __this)
{
    return __this->_memoryPolicy;
}

int ImageContainer__get_ResampleMode(ImageContainer* __this)
{
    return __this->_resampleMode;
}

::app::Fuse::Resources::ImageSource* ImageContainer__get_Source(ImageContainer* __this)
{
    return __this->_source;
}

int ImageContainer__get_StretchDirection(ImageContainer* __this)
{
    return ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->Sizing)->stretchDirection;
}

int ImageContainer__get_StretchMode(ImageContainer* __this)
{
    return ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->Sizing)->stretchMode;
}

int ImageContainer__get_StretchSizing(ImageContainer* __this)
{
    return ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->Sizing)->stretchSizing;
}

::app::Uno::Graphics::Texture2D* ImageContainer__GetTexture(ImageContainer* __this)
{
    if (__this->Source() != NULL)
    {
        return ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->Source())->GetTexture();
    }

    return NULL;
}

ImageContainer* ImageContainer__New_1(::uStatic* __this, ::uObject* owner)
{
    ImageContainer* inst = (ImageContainer*)::uAllocObject(sizeof(ImageContainer), ImageContainer__typeof());
    inst->_ObjInit(owner);
    return inst;
}

void ImageContainer__OnFileAdded(ImageContainer* __this, ::app::Uno::UX::FileSource* file)
{
    float ind_129 = float();
    ::app::Fuse::Resources::MemoryPolicy* ind_130;
    ::app::Fuse::Resources::FileImageSource* collection_125;

    if (::uPtr< ::app::Uno::Collections::ObservableList__Uno_UX_FileSource*>(__this->_files)->Count() == 1)
    {
        __this->Source((::app::Fuse::Resources::ImageSource*)(collection_125 = ::app::Fuse::Resources::FileImageSource__New_2(NULL), ind_129 = __this->Density(), ::uPtr< ::app::Fuse::Resources::FileImageSource*>(collection_125)->Density(ind_129), ind_129, ::uPtr< ::app::Fuse::Resources::FileImageSource*>(collection_125)->File(file), file, ind_130 = __this->MemoryPolicy(), ::uPtr< ::app::Fuse::Resources::FileImageSource*>(collection_125)->DefaultPolicy(ind_130), ind_130, collection_125));
    }
    else
    {
        __this->CreateMultiDensitySource();
    }
}

void ImageContainer__OnFileRemoved(ImageContainer* __this, ::app::Uno::UX::FileSource* file)
{
    float ind_131 = float();
    ::app::Fuse::Resources::MemoryPolicy* ind_132;
    ::app::Fuse::Resources::FileImageSource* collection_126;

    if (::uPtr< ::app::Uno::Collections::ObservableList__Uno_UX_FileSource*>(__this->_files)->Count() == 0)
    {
        __this->Source(NULL);
    }
    else if (::uPtr< ::app::Uno::Collections::ObservableList__Uno_UX_FileSource*>(__this->_files)->Count() == 1)
    {
        __this->Source((::app::Fuse::Resources::ImageSource*)(collection_126 = ::app::Fuse::Resources::FileImageSource__New_2(NULL), ind_131 = __this->Density(), ::uPtr< ::app::Fuse::Resources::FileImageSource*>(collection_126)->Density(ind_131), ind_131, ::uPtr< ::app::Fuse::Resources::FileImageSource*>(collection_126)->File(file), file, ind_132 = __this->MemoryPolicy(), ::uPtr< ::app::Fuse::Resources::FileImageSource*>(collection_126)->DefaultPolicy(ind_132), ind_132, collection_126));
    }
    else
    {
        __this->CreateMultiDensitySource();
    }
}

void ImageContainer__OnParamChanged(ImageContainer* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ParamChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ParamChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }

    if (__this->_owner != NULL)
    {
        ::app::Fuse::Internal::IImageContainerOwner::OnParamChanged(::uPtr< ::uObject*>(__this->_owner));
    }
}

void ImageContainer__OnSizingChanged(ImageContainer* __this)
{
    __this->OnParamChanged();

    if (__this->_owner != NULL)
    {
        ::app::Fuse::Internal::IImageContainerOwner::OnSizingChanged(::uPtr< ::uObject*>(__this->_owner));
    }
}

void ImageContainer__OnSourceChanged(ImageContainer* __this, ::uObject* s, ::uObject* a)
{
    __this->CheckPinning();

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->SourceChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->SourceChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }

    if (__this->_owner != NULL)
    {
        ::app::Fuse::Internal::IImageContainerOwner::OnSourceChanged(::uPtr< ::uObject*>(__this->_owner));
    }
}

void ImageContainer__ReapplyOptions(ImageContainer* __this, ::app::Fuse::Resources::ImageSource* src)
{
    ::app::Fuse::Resources::FileImageSource* f = ::uAs< ::app::Fuse::Resources::FileImageSource*>(src, ::app::Fuse::Resources::FileImageSource__typeof());

    if ((f != NULL) && (__this->MemoryPolicy() != NULL))
    {
        ::uPtr< ::app::Fuse::Resources::FileImageSource*>(f)->DefaultPolicy(__this->MemoryPolicy());
    }

    ::app::Fuse::Resources::HttpImageSource* hf = ::uAs< ::app::Fuse::Resources::HttpImageSource*>(src, ::app::Fuse::Resources::HttpImageSource__typeof());

    if ((hf != NULL) && (__this->MemoryPolicy() != NULL))
    {
        ::uPtr< ::app::Fuse::Resources::HttpImageSource*>(hf)->DefaultPolicy(__this->MemoryPolicy());
    }

    ::app::Fuse::Resources::MultiDensityImageSource* mf = ::uAs< ::app::Fuse::Resources::MultiDensityImageSource*>(__this->Source(), ::app::Fuse::Resources::MultiDensityImageSource__typeof());

    if (mf != NULL)
    {
        for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Resources_ImageSource::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Resources::MultiDensityImageSource*>(mf)->Sources())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
        {
            ::app::Fuse::Resources::ImageSource* s = ::app::Uno::Collections::IEnumerator__Fuse_Resources_ImageSource::Current(::uPtr< ::uObject*>(enum_124));
            __this->ReapplyOptions(s);
        }
    }
}

void ImageContainer__ReleaseSource(ImageContainer* __this)
{
    if (__this->_source == NULL)
    {
        return;
    }

    ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_source)->remove_Changed(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ImageContainer__OnSourceChanged, __this));

    if (__this->_sourcePinned)
    {
        ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_source)->Unpin();
        __this->_sourcePinned = false;
    }

    __this->_source = NULL;
}

void ImageContainer__remove_ParamChanged(ImageContainer* __this, ::uDelegate* value)
{
    __this->ParamChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ParamChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void ImageContainer__remove_SourceChanged(ImageContainer* __this, ::uDelegate* value)
{
    __this->SourceChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->SourceChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void ImageContainer__set_ContentAlignment(ImageContainer* __this, int value)
{
    if (::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->Sizing)->SetAlignment(value))
    {
        __this->OnSizingChanged();
    }
}

void ImageContainer__set_Density(ImageContainer* __this, float value)
{
    if (__this->_density != value)
    {
        __this->_density = value;
        __this->OnParamChanged();
    }
}

void ImageContainer__set_File(ImageContainer* __this, ::app::Uno::UX::FileSource* value)
{
    if ((((__this->_files == NULL) || (::uPtr< ::app::Uno::Collections::ObservableList__Uno_UX_FileSource*>(__this->_files)->Count() == 0)) || (::uPtr< ::app::Uno::Collections::ObservableList__Uno_UX_FileSource*>(__this->_files)->Count() > 1)) || (::uPtr< ::app::Uno::Collections::ObservableList__Uno_UX_FileSource*>(__this->_files)->Item(0) != value))
    {
        __this->_files = NULL;
        ::app::Uno::Collections::ICollection__Uno_UX_FileSource::Add(::uPtr< ::uObject*>(__this->Files()), value);
    }
}

void ImageContainer__set_IsRooted(ImageContainer* __this, bool value)
{
    __this->_isRooted = value;
    __this->CheckPinning();
}

void ImageContainer__set_IsVisible(ImageContainer* __this, bool value)
{
    if (__this->_isVisible != value)
    {
        __this->_isVisible = value;
        __this->CheckPinning();
    }
}

void ImageContainer__set_MemoryPolicy(ImageContainer* __this, ::app::Fuse::Resources::MemoryPolicy* value)
{
    __this->_memoryPolicy = value;
    __this->ReapplyOptions(__this->Source());
    __this->CheckPinning();
}

void ImageContainer__set_ResampleMode(ImageContainer* __this, int value)
{
    if (__this->_resampleMode != value)
    {
        __this->_resampleMode = value;
        __this->OnParamChanged();
    }
}

void ImageContainer__set_Source(ImageContainer* __this, ::app::Fuse::Resources::ImageSource* value)
{
    if (__this->_source != value)
    {
        __this->ReleaseSource();
        __this->_source = value;

        if (__this->_source != NULL)
        {
            ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_source)->add_Changed(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ImageContainer__OnSourceChanged, __this));
        }

        __this->OnSourceChanged(NULL, NULL);
    }
}

void ImageContainer__set_StretchDirection(ImageContainer* __this, int value)
{
    if (::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->Sizing)->SetStretchDirection(value))
    {
        __this->OnSizingChanged();
    }
}

void ImageContainer__set_StretchMode(ImageContainer* __this, int value)
{
    if (::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->Sizing)->SetStretchMode(value))
    {
        __this->OnSizingChanged();
    }
}

void ImageContainer__set_StretchSizing(ImageContainer* __this, int value)
{
    if (::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->Sizing)->SetStretchSizing(value))
    {
        __this->OnSizingChanged();
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RectExtensions__uType* RectExtensions__typeof()
{
    static ::uStaticStrong<RectExtensions__uType*> type;
    if (type != NULL) return type;

    type = (RectExtensions__uType*)::uAllocClassType(sizeof(RectExtensions__uType), "Fuse.Internal.RectExtensions");

    return type;
}

::app::Uno::Rect RectExtensions__MoveRectInsideRect(::uStatic* __this, ::app::Uno::Rect a, ::app::Uno::Rect b)
{
    ::app::Uno::Float2 pos = a.Position();
    float newX = pos.X;
    float newY = pos.Y;

    if (b.Left > a.Left)
    {
        newX = b.Left;
    }
    else if (b.Right < a.Right)
    {
        newX = newX - (a.Right - b.Right);
    }

    if (b.Top > a.Top)
    {
        newY = b.Left;
    }
    else if (b.Bottom < a.Bottom)
    {
        newY = newY - (a.Bottom - b.Bottom);
    }

    return ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_2(NULL, newX, newY), a.Size());
}

::app::Uno::Rect RectExtensions__MoveRectToContainRect(::uStatic* __this, ::app::Uno::Rect a, ::app::Uno::Rect b)
{
    ::app::Uno::Float2 pos = a.Position();
    float newX = pos.X;
    float newY = pos.Y;

    if ((a.Size().X < b.Size().X) || (b.Left < a.Left))
    {
        newX = b.Left;
    }
    else if (b.Right > a.Right)
    {
        newX = newX + (b.Right - a.Right);
    }

    if ((a.Size().Y < b.Size().Y) || (b.Top < a.Top))
    {
        newY = b.Top;
    }
    else if (b.Bottom > a.Bottom)
    {
        newY = newY + (b.Bottom - a.Bottom);
    }

    return ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_2(NULL, newX, newY), a.Size());
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SizingContainer__uType* SizingContainer__typeof()
{
    static ::uStaticStrong<SizingContainer__uType*> type;
    if (type != NULL) return type;

    type = (SizingContainer__uType*)::uAllocClassType(sizeof(SizingContainer__uType), "Fuse.Internal.SizingContainer", false, 0, 0, 0);

    return type;
}

void SizingContainer___ObjInit(SizingContainer* __this)
{
    __this->stretchMode = 5;
    __this->align = 10;
    __this->stretchSizing = 1;
    __this->absoluteZoom = 1.0f;
}

::app::Uno::Float4 SizingContainer__CalcClip(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2* origin, ::app::Uno::Float2* contentActualSize)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();

    if (((((*origin).X > availableSize.X) || (((*origin).X + (*contentActualSize).X) < 0.0f)) || ((*origin).Y > availableSize.Y)) || (((*origin).Y + (*contentActualSize).Y) < 0.0f))
    {
        *origin = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
        *contentActualSize = ::app::Uno::Float2__New_1(NULL, 0.0f);
        return ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 1.0f, 1.0f);
    }

    ::app::Uno::Float2 tl = ::app::Uno::Math__Max_10(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_123 = __this->padding, ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y)), *origin), *contentActualSize));
    ::app::Uno::Float2 br = ::app::Uno::Math__Min_13(NULL, ::app::Uno::Float2__New_1(NULL, 1.0f), ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, availableSize, *origin), (ind_124 = __this->padding, ::app::Uno::Float2__New_2(NULL, ind_124.Z, ind_124.W))), *contentActualSize));
    float dx = __this->padding.X - (*origin).X;

    if (dx > 0.0f)
    {
        (*contentActualSize).X = (*contentActualSize).X - dx;
        (*origin).X = __this->padding.X;
    }

    dx = (((*origin).X + (*contentActualSize).X) - availableSize.X) + __this->padding.Z;

    if (dx > 0.0f)
    {
        (*contentActualSize).X = (*contentActualSize).X - dx;
    }

    float dy = __this->padding.Y - (*origin).Y;

    if (dy > 0.0f)
    {
        (*contentActualSize).Y = (*contentActualSize).Y - dy;
        (*origin).Y = __this->padding.Y;
    }

    dy = (((*origin).Y + (*contentActualSize).Y) - availableSize.Y) + __this->padding.W;

    if (dy > 0.0f)
    {
        (*contentActualSize).Y = (*contentActualSize).Y - dy;
    }

    return ::app::Uno::Float4__New_2(NULL, tl.X, tl.Y, br.X, br.Y);
}

::app::Uno::Float2 SizingContainer__CalcContentSize(SizingContainer* __this, ::app::Uno::Float2 size, ::app::Uno::Int2 pixelSize)
{
    switch (__this->stretchMode)
    {
        case 1:
        {
            {
                if ((pixelSize.X == 0) || (pixelSize.Y == 0))
                {
                    return ::app::Uno::Float2__New_1(NULL, 0.0f);
                }

                return ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)pixelSize.X, (float)pixelSize.Y), __this->absoluteZoom);
            }
        }
        case 2:
        {
            {
                if ((pixelSize.X == 0) || (pixelSize.Y == 0))
                {
                    return ::app::Uno::Float2__New_1(NULL, 0.0f);
                }

                ::app::Uno::Float2 exact = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)pixelSize.X, (float)pixelSize.Y), __this->absoluteZoom);
                ::app::Uno::Float2 scale = ::app::Uno::Float2__op_Division_2(NULL, size, exact);

                if (((double)scale.X > 0.75) && ((double)scale.X < 1.5))
                {
                    return exact;
                }

                break;
            }
        }
        default:
        {
            break;
        }
    }

    if (!__this->snapToPixels)
    {
        return size;
    }

    return __this->SnapSize(size);
}

::app::Uno::Float2 SizingContainer__CalcOrigin(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2 contentActualSize)
{
    ::app::Uno::Float2 origin = ::app::Uno::Float2__New_1(NULL, 0.0f);

    switch (::app::Fuse::Elements::AlignmentHelpers__GetHorizontalAlign(NULL, __this->align))
    {
        case 0:
        case 1:
        {
            origin.X = __this->padding.Item(0);
            break;
        }
        case 2:
        {
            origin.X = ((((availableSize.X - __this->padding.Item(0)) - __this->padding.Item(2)) / 2.0f) - (contentActualSize.X / 2.0f)) + __this->padding.Item(0);
            break;
        }
        case 3:
        {
            origin.X = (availableSize.X - __this->padding.Item(2)) - contentActualSize.X;
            break;
        }
    }

    switch (::app::Fuse::Elements::AlignmentHelpers__GetVerticalAlign(NULL, __this->align))
    {
        case 0:
        case 4:
        {
            origin.Y = __this->padding.Item(1);
            break;
        }
        case 8:
        {
            origin.Y = ((((availableSize.Y - __this->padding.Item(1)) - __this->padding.Item(3)) / 2.0f) - (contentActualSize.Y / 2.0f)) + __this->padding.Item(1);
            break;
        }
        case 12:
        {
            origin.Y = (availableSize.Y - __this->padding.Item(3)) - contentActualSize.Y;
            break;
        }
    }

    if (__this->snapToPixels)
    {
        origin = __this->SnapSize(origin);
    }

    return origin;
}

::app::Uno::Float2 SizingContainer__CalcScale(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2 desiredSize, bool autoWidth, bool autoHeight)
{
    ::app::Uno::Float2 d = availableSize;
    d.X = d.X - __this->PaddingWidth();
    d.Y = d.Y - __this->PaddingHeight();
    ::app::Uno::Float2 scale = ::app::Uno::Float2__New_1(NULL, 1.0f);

    if ((autoWidth && autoHeight) && !(((__this->stretchMode == 0) || (__this->stretchMode == 1)) || (__this->stretchMode == 2)))
    {
        if (__this->stretchSizing == 0)
        {
            scale = ::app::Uno::Float2__New_1(NULL, 0.0f);
        }
        else
        {
            scale = ::app::Uno::Float2__New_1(NULL, 1.0f);
        }
    }
    else
    {
        ::app::Uno::Float2 s = ::app::Uno::Float2__New_2(NULL, (desiredSize.X < 1e-05f) ? 0.0f : (d.X / desiredSize.X), (desiredSize.Y < 1e-05f) ? 0.0f : (d.Y / desiredSize.Y));

        switch (__this->stretchMode)
        {
            case 0:
            case 1:
            case 2:
            {
                scale = ::app::Uno::Float2__New_1(NULL, 1.0f);
                break;
            }
            case 4:
            case 3:
            {
                {
                    scale = autoWidth ? ::app::Uno::Float2__New_1(NULL, s.Y) : (autoHeight ? ::app::Uno::Float2__New_1(NULL, s.X) : s);
                    break;
                }
            }
            case 5:
            {
                {
                    float sm = autoWidth ? s.Y : (autoHeight ? s.X : ::app::Uno::Math__Min_11(NULL, s.X, s.Y));
                    scale = ::app::Uno::Float2__New_1(NULL, sm);
                    break;
                }
            }
            case 6:
            {
                {
                    float sm = autoWidth ? s.Y : (autoHeight ? s.X : ::app::Uno::Math__Max_8(NULL, s.X, s.Y));
                    scale = ::app::Uno::Float2__New_1(NULL, sm);
                    break;
                }
            }
        }
    }

    switch (__this->stretchDirection)
    {
        case 0:
        {
            break;
        }
        case 2:
        {
            scale.X = ::app::Uno::Math__Min_11(NULL, scale.X, 1.0f);
            scale.Y = ::app::Uno::Math__Min_11(NULL, scale.Y, 1.0f);
            break;
        }
        case 1:
        {
            scale.X = ::app::Uno::Math__Max_8(NULL, 1.0f, scale.X);
            scale.Y = ::app::Uno::Math__Max_8(NULL, 1.0f, scale.Y);
            break;
        }
    }

    if ((__this->snapToPixels && (desiredSize.X > 1e-05f)) && (desiredSize.Y > 1e-05f))
    {
        scale = ::app::Uno::Float2__op_Division_2(NULL, __this->SnapSize(::app::Uno::Float2__op_Multiply_1(NULL, scale, desiredSize)), desiredSize);
    }

    return scale;
}

::app::Uno::Float2 SizingContainer__CalcScale_1(SizingContainer* __this, ::app::Uno::Float2 availableSize, ::app::Uno::Float2 desiredSize)
{
    return __this->CalcScale(availableSize, desiredSize, false, false);
}

::app::Uno::Float2 SizingContainer__ExpandFillSize(SizingContainer* __this, ::app::Uno::Float2 size, ::app::Uno::Float2 fillSize, int fillSet)
{
    bool autoWidth = !((fillSet & 1) == 1);
    bool autoHeight = !((fillSet & 2) == 2);
    ::app::Uno::Float2 scale = __this->CalcScale(fillSize, size, autoWidth, autoHeight);
    return ::app::Uno::Float2__op_Multiply_1(NULL, scale, size);
}

float SizingContainer__get_PaddingHeight(SizingContainer* __this)
{
    return __this->padding.Item(1) + __this->padding.Item(3);
}

float SizingContainer__get_PaddingWidth(SizingContainer* __this)
{
    return __this->padding.Item(0) + __this->padding.Item(2);
}

SizingContainer* SizingContainer__New_1(::uStatic* __this)
{
    SizingContainer* inst = (SizingContainer*)::uAllocObject(sizeof(SizingContainer), SizingContainer__typeof());
    inst->_ObjInit();
    return inst;
}

bool SizingContainer__SetAlignment(SizingContainer* __this, int a)
{
    if (a == __this->align)
    {
        return false;
    }

    __this->align = a;
    return true;
}

bool SizingContainer__SetStretchDirection(SizingContainer* __this, int dir)
{
    if (dir == __this->stretchDirection)
    {
        return false;
    }

    __this->stretchDirection = dir;
    return true;
}

bool SizingContainer__SetStretchMode(SizingContainer* __this, int mode)
{
    if (mode == __this->stretchMode)
    {
        return false;
    }

    __this->stretchMode = mode;
    return true;
}

bool SizingContainer__SetStretchSizing(SizingContainer* __this, int ss)
{
    if (ss == __this->stretchSizing)
    {
        return false;
    }

    __this->stretchSizing = ss;
    return true;
}

::app::Uno::Float2 SizingContainer__SnapSize(SizingContainer* __this, ::app::Uno::Float2 sz)
{
    return ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Math__Round_4(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, sz, __this->absoluteZoom)), __this->absoluteZoom);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Statistics__uType* Statistics__typeof()
{
    static ::uStaticStrong<Statistics__uType*> type;
    if (type != NULL) return type;

    type = (Statistics__uType*)::uAllocClassType(sizeof(Statistics__uType), "Fuse.Internal.Statistics");

    return type;
}

float Statistics__ContinuousFilterAlpha(::uStatic* __this, float elapsed, float period)
{
    return (float)(1.0 - ::app::Uno::Math__Pow(NULL, 2.7182818284590451, (double)(-elapsed / period)));
}

}}}
