// This file was generated based on '/Users/jangwonhee/Documents/Buddha_2/fuse/MainView.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.AudioModule.h>
#include <app/-.MainView.h>
#include <app/Fuse.Scripting.Context.h>
#include <app/Fuse.Scripting.NativeCallback.h>
#include <app/Fuse.Scripting.NativeFunction.h>
#include <app/Fuse.Scripting.NativeMember.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {

AudioModule__uType* AudioModule__typeof()
{
    static ::uStaticStrong<AudioModule__uType*> type;
    if (type != NULL) return type;

    type = (AudioModule__uType*)::uAllocClassType(sizeof(AudioModule__uType), "AudioModule", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Scripting::NativeModule__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IModule__typeof(), offsetof(AudioModule__uType, __interface_0));

    return type;
}

void AudioModule___ObjInit_1(AudioModule* __this)
{
    ::app::Fuse::Scripting::NativeModule___ObjInit(__this, ::uNewArray(::app::Fuse::Scripting::NativeMember__typeof(), 0));
    __this->AddMember((::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativeFunction__New_1(NULL, ::uGetConstString("play"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::NativeCallback__typeof(), (const void*)AudioModule__play)));
    __this->AddMember((::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativeFunction__New_1(NULL, ::uGetConstString("disposePlayer"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::NativeCallback__typeof(), (const void*)AudioModule__disposePlayer)));
    __this->AddMember((::app::Fuse::Scripting::NativeMember*)::app::Fuse::Scripting::NativeFunction__New_1(NULL, ::uGetConstString("changeVolume"), ::uNewDelegateNonVirt(::app::Fuse::Scripting::NativeCallback__typeof(), (const void*)AudioModule__changeVolumne)));
}

::uObject* AudioModule__changeVolumne(::uStatic* __this, ::app::Fuse::Scripting::Context* c, ::uArray* args)
{
    ::app::MainView__changeVolumne(NULL, ::app::Uno::Object::ToString(::uPtr< ::uObject*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0))), ::app::Uno::Float__Parse(NULL, ::app::Uno::Object::ToString(::uPtr< ::uObject*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(1)))));
    return NULL;
}

::uObject* AudioModule__disposePlayer(::uStatic* __this, ::app::Fuse::Scripting::Context* c, ::uArray* args)
{
    ::app::MainView__disposePlayer(NULL, ::app::Uno::Object::ToString(::uPtr< ::uObject*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0))));
    return NULL;
}

AudioModule* AudioModule__New_2(::uStatic* __this)
{
    AudioModule* inst = (AudioModule*)::uAllocObject(sizeof(AudioModule), AudioModule__typeof());
    inst->_ObjInit_1();
    return inst;
}

::uObject* AudioModule__play(::uStatic* __this, ::app::Fuse::Scripting::Context* c, ::uArray* args)
{
    ::app::MainView__play(NULL, ::app::Uno::Object::ToString(::uPtr< ::uObject*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0))), ::app::Uno::Object::ToString(::uPtr< ::uObject*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(1))), ::app::Uno::String__op_Equality(NULL, ::app::Uno::Object::ToString(::uPtr< ::uObject*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(2))), ::uGetConstString("true")));
    return NULL;
}

}
