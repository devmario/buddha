#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.AnimatorState.h>
#include <app/Fuse.Animations.Change__bool.h>
#include <app/Fuse.Animations.Change__float.h>
#include <app/Fuse.Animations.Change__float4.h>
#include <app/Fuse.Animations.Change__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__bool.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__float.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__float4.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.Converter__bool.h>
#include <app/Fuse.Animations.Converter__float.h>
#include <app/Fuse.Animations.Converter__float4.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.ConverterDouble.h>
#include <app/Fuse.Animations.ConverterFloat.h>
#include <app/Fuse.Animations.ConverterFloat2.h>
#include <app/Fuse.Animations.ConverterFloat3.h>
#include <app/Fuse.Animations.ConverterFloat4.h>
#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__bool.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__float.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__float4.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.IMixer.h>
#include <app/Fuse.Animations.Mixer.h>
#include <app/Fuse.Elements.Visibility.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>
#include <app/Uno.UX.Property__bool.h>
#include <app/Uno.UX.Property__float.h>
#include <app/Uno.UX.Property__float4.h>
#include <app/Uno.UX.Property__Fuse_Elements_Visibility.h>

namespace app {
namespace Fuse {
namespace Animations {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__bool__uType* Change__bool__typeof()
{
    static ::uStaticStrong<Change__bool__uType*> type;
    if (type != NULL) return type;

    type = (Change__bool__uType*)::uAllocClassType(sizeof(Change__bool__uType), "Fuse.Animations.Change<bool>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__bool__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__bool, _Target),
        "ContinuousConverter", offsetof(Change__bool, ContinuousConverter));

    return type;
}

::app::Fuse::Animations::AnimatorState* Change__bool__CreateState(Change__bool* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__bool__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__bool__New_1(NULL, __this, p);
}

bool Change__bool__get_IsContinuous(Change__bool* __this)
{
    return (((((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__bool* Change__bool__get_Target(Change__bool* __this)
{
    return __this->_Target;
}

void Change__bool__set_Target(Change__bool* __this, ::app::Uno::UX::Property__bool* value)
{
    __this->_Target = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__float__uType* Change__float__typeof()
{
    static ::uStaticStrong<Change__float__uType*> type;
    if (type != NULL) return type;

    type = (Change__float__uType*)::uAllocClassType(sizeof(Change__float__uType), "Fuse.Animations.Change<float>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__float__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__float, _Target),
        "ContinuousConverter", offsetof(Change__float, ContinuousConverter));

    return type;
}

void Change__float___ObjInit_2(Change__float* __this, ::app::Uno::UX::Property__float* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Uno::Float__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__float*>(v, ::app::Fuse::Animations::Converter__float__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__float__CreateState(Change__float* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__float__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__float__New_1(NULL, __this, p);
}

bool Change__float__get_IsContinuous(Change__float* __this)
{
    return (((((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__float* Change__float__get_Target(Change__float* __this)
{
    return __this->_Target;
}

float Change__float__get_Value(Change__float* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__float*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< float>(::app::Uno::Float__typeof(), __this->_objectValue);
}

Change__float* Change__float__New_1(::uStatic* __this, ::app::Uno::UX::Property__float* target)
{
    Change__float* inst = (Change__float*)::uAllocObject(sizeof(Change__float), Change__float__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__float__set_Target(Change__float* __this, ::app::Uno::UX::Property__float* value)
{
    __this->_Target = value;
}

void Change__float__set_Value(Change__float* __this, float value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__float*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox(::app::Uno::Float__typeof(), value);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__float4__uType* Change__float4__typeof()
{
    static ::uStaticStrong<Change__float4__uType*> type;
    if (type != NULL) return type;

    type = (Change__float4__uType*)::uAllocClassType(sizeof(Change__float4__uType), "Fuse.Animations.Change<float4>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__float4__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__float4, _Target),
        "ContinuousConverter", offsetof(Change__float4, ContinuousConverter));

    return type;
}

void Change__float4___ObjInit_2(Change__float4* __this, ::app::Uno::UX::Property__float4* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Uno::Float4__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__float4*>(v, ::app::Fuse::Animations::Converter__float4__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__float4__CreateState(Change__float4* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__float4__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__float4__New_1(NULL, __this, p);
}

bool Change__float4__get_IsContinuous(Change__float4* __this)
{
    return (((((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__float4* Change__float4__get_Target(Change__float4* __this)
{
    return __this->_Target;
}

::app::Uno::Float4 Change__float4__get_Value(Change__float4* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__float4*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), __this->_objectValue);
}

Change__float4* Change__float4__New_1(::uStatic* __this, ::app::Uno::UX::Property__float4* target)
{
    Change__float4* inst = (Change__float4*)::uAllocObject(sizeof(Change__float4), Change__float4__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__float4__set_Target(Change__float4* __this, ::app::Uno::UX::Property__float4* value)
{
    __this->_Target = value;
}

void Change__float4__set_Value(Change__float4* __this, ::app::Uno::Float4 value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__float4*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox(::app::Uno::Float4__typeof(), value);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Change__Fuse_Elements_Visibility__uType* Change__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<Change__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (Change__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(Change__Fuse_Elements_Visibility__uType), "Fuse.Animations.Change<Fuse.Elements.Visibility>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Change__Fuse_Elements_Visibility__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Change__Fuse_Elements_Visibility, _Target),
        "ContinuousConverter", offsetof(Change__Fuse_Elements_Visibility, ContinuousConverter));

    return type;
}

void Change__Fuse_Elements_Visibility___ObjInit_2(Change__Fuse_Elements_Visibility* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* target)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);

    if (__this->IsContinuous())
    {
        ::uObject* v;

        if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat2__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat3__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterFloat4__Singleton;
        }
        else if ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Double__typeof())
        {
            v = (::uObject*)::app::Fuse::Animations::ConverterDouble__Singleton;
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Unsupported change type: "), (::uObject*)(::uType*)::app::Fuse::Elements::Visibility__typeof())));
        }

        __this->ContinuousConverter = ::uCast< ::app::Fuse::Animations::Converter__Fuse_Elements_Visibility*>(v, ::app::Fuse::Animations::Converter__Fuse_Elements_Visibility__typeof());
    }
    else
    {
        __this->Mixer = ::app::Fuse::Animations::Mixer__get_DefaultDiscrete(NULL);
        __this->MarkDiscrete();
    }
}

::app::Fuse::Animations::AnimatorState* Change__Fuse_Elements_Visibility__CreateState(Change__Fuse_Elements_Visibility* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    if (__this->IsContinuous())
    {
        return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Elements_Visibility__New_1(NULL, __this, p);
    }

    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Elements_Visibility__New_1(NULL, __this, p);
}

bool Change__Fuse_Elements_Visibility__get_IsContinuous(Change__Fuse_Elements_Visibility* __this)
{
    return (((((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float__typeof()) || ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float2__typeof())) || ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float3__typeof())) || ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Float4__typeof())) || ((::uType*)::app::Fuse::Elements::Visibility__typeof() == (::uType*)::app::Uno::Double__typeof());
}

::app::Uno::UX::Property__Fuse_Elements_Visibility* Change__Fuse_Elements_Visibility__get_Target(Change__Fuse_Elements_Visibility* __this)
{
    return __this->_Target;
}

int Change__Fuse_Elements_Visibility__get_Value(Change__Fuse_Elements_Visibility* __this)
{
    return __this->IsContinuous() ? ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_Visibility*>(__this->ContinuousConverter)->Out(__this->_vectorValue) : ::uUnbox< int>(::app::Fuse::Elements::Visibility__typeof(), __this->_objectValue);
}

Change__Fuse_Elements_Visibility* Change__Fuse_Elements_Visibility__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* target)
{
    Change__Fuse_Elements_Visibility* inst = (Change__Fuse_Elements_Visibility*)::uAllocObject(sizeof(Change__Fuse_Elements_Visibility), Change__Fuse_Elements_Visibility__typeof());
    inst->_ObjInit_2(target);
    return inst;
}

void Change__Fuse_Elements_Visibility__set_Target(Change__Fuse_Elements_Visibility* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* value)
{
    __this->_Target = value;
}

void Change__Fuse_Elements_Visibility__set_Value(Change__Fuse_Elements_Visibility* __this, int value)
{
    if (__this->IsContinuous())
    {
        __this->_vectorValue = ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_Visibility*>(__this->ContinuousConverter)->In(value);
    }
    else
    {
        __this->_objectValue = ::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), value);
    }
}

}}}
