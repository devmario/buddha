#include <app/Experimental.Http.HttpLoader.h>
#include <app/Experimental.Http.HttpResponseHeader.h>
#include <app/Experimental.TextureLoader.TextureLoader.h>
#include <app/Fuse.Resources.DisposalManager.h>
#include <app/Fuse.Resources.DisposalRequest.h>
#include <app/Fuse.Resources.FileImageSource.h>
#include <app/Fuse.Resources.FileImageSourceCache.h>
#include <app/Fuse.Resources.FileImageSourceImpl.h>
#include <app/Fuse.Resources.FileResource.h>
#include <app/Fuse.Resources.HttpImageSource.h>
#include <app/Fuse.Resources.HttpImageSourceCache.h>
#include <app/Fuse.Resources.HttpImageSourceImpl.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Resources.ImageSourceErrorArgs.h>
#include <app/Fuse.Resources.ImageSourceErrorHandler.h>
#include <app/Fuse.Resources.IMemoryResource.h>
#include <app/Fuse.Resources.ISoftDisposable.h>
#include <app/Fuse.Resources.LoadingImageSource.h>
#include <app/Fuse.Resources.LoadingImageSource_CleanupReason.h>
#include <app/Fuse.Resources.MemoryPolicy.h>
#include <app/Fuse.Resources.MultiDensityImageSource.h>
#include <app/Fuse.Resources.ProxyImageSource.h>
#include <app/Fuse.Resources.ResourceRegistry.h>
#include <app/Fuse.Resources.TextureImageSource.h>
#include <app/Fuse.RootViewport.h>
#include <app/Fuse.Time.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Fuse.UpdateStage.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Experimental_Http_HttpResponseHeader__Uno_Buffer.h>
#include <app/Uno.Action__Fuse_Resources_ImageSource.h>
#include <app/Uno.Action__string.h>
#include <app/Uno.Action__texture2D.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Collections.Dictionary__string__string.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Collections_List_Uno_Action_.h>
#include <app/Uno.Collections.Dictionary__string__Uno_WeakReference_Fuse_Reso-25b46c3c.h>
#include <app/Uno.Collections.Dictionary__Uno_UX_FileSource__Uno_WeakReferenc-f005e285.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IList__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.List__Fuse_Resources_IMemoryResource.h>
#include <app/Uno.Collections.List__Fuse_Resources_ISoftDisposable.h>
#include <app/Uno.Collections.List__Uno_Action.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Action.h>
#include <app/Uno.Collections.ObservableList__Fuse_Resources_ImageSource.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Uno_EventArgs.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.WeakReference__Fuse_Resources_FileImageSourceImpl.h>
#include <app/Uno.WeakReference__Fuse_Resources_HttpImageSourceImpl.h>

namespace app {
namespace Fuse {
namespace Resources {

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

bool DisposalManager___actionAdded;
int DisposalManager___disposeAt;
::uStaticStrong< ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource*> DisposalManager___items;
::uStaticStrong< ::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable*> DisposalManager___softDisposables;

DisposalManager__uType* DisposalManager__typeof()
{
    static ::uStaticStrong<DisposalManager__uType*> type;
    if (type != NULL) return type;

    type = (DisposalManager__uType*)::uAllocClassType(sizeof(DisposalManager__uType), "Fuse.Resources.DisposalManager");

    return type;
}

void DisposalManager___TypeInit(::uStatic* __this)
{
    DisposalManager___items = ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource__New_1(NULL);
    DisposalManager___softDisposables = ::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable__New_1(NULL);
}

void DisposalManager__Add(::uStatic* __this, ::uObject* item)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource*>(DisposalManager___items)->Add(item);
    DisposalManager__VerifyAttach(NULL);
}

void DisposalManager__Add_1(::uStatic* __this, ::uObject* item)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable*>(DisposalManager___softDisposables)->Add(item);
}

void DisposalManager__Clean(::uStatic* __this, int dr)
{
    for (int i = ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource*>(DisposalManager___items)->Count() - 1; i >= 0; --i)
    {
        ::uObject* item = ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource*>(DisposalManager___items)->Item(i);

        if (!::uPtr< ::app::Fuse::Resources::MemoryPolicy*>(::app::Fuse::Resources::IMemoryResource::MemoryPolicy(::uPtr< ::uObject*>(item)))->ShouldSoftDispose(dr, item))
        {
            continue;
        }

        ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource*>(DisposalManager___items)->RemoveAt(i);
        ::app::Fuse::Resources::IMemoryResource::SoftDispose(::uPtr< ::uObject*>(item));
    }

    if ((dr == 1) || (dr == 2))
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable*>(DisposalManager___softDisposables)->Count(); ++i)
        {
            ::app::Fuse::Resources::ISoftDisposable::SoftDispose(::uPtr< ::uObject*>(::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable*>(DisposalManager___softDisposables)->Item(i)));
        }
    }
}

void DisposalManager__Remove_1(::uStatic* __this, ::uObject* item)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource*>(DisposalManager___items)->Remove(item);
    DisposalManager__VerifyAttach(NULL);
}

void DisposalManager__Update(::uStatic* __this)
{
    for (int i = 0; i < 2; ++i)
    {
        if (::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource*>(DisposalManager___items)->Count() == 0)
        {
            return;
        }

        DisposalManager___disposeAt++;

        if (DisposalManager___disposeAt >= ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource*>(DisposalManager___items)->Count())
        {
            DisposalManager___disposeAt = 0;
        }

        ::uObject* item = ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource*>(DisposalManager___items)->Item(DisposalManager___disposeAt);

        if (!::uPtr< ::app::Fuse::Resources::MemoryPolicy*>(::app::Fuse::Resources::IMemoryResource::MemoryPolicy(::uPtr< ::uObject*>(item)))->ShouldSoftDispose(0, item))
        {
            continue;
        }

        ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource*>(DisposalManager___items)->RemoveAt(DisposalManager___disposeAt);
        ::app::Fuse::Resources::IMemoryResource::SoftDispose(::uPtr< ::uObject*>(item));
    }
}

void DisposalManager__VerifyAttach(::uStatic* __this)
{
    bool on = ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource*>(DisposalManager___items)->Count() > 0;

    if (on == DisposalManager___actionAdded)
    {
        return;
    }

    if (on)
    {
        ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)DisposalManager__Update), 0);
    }
    else
    {
        ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)DisposalManager__Update), 0);
    }

    DisposalManager___actionAdded = on;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* DisposalRequest__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Resources.DisposalRequest", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Regular", 0LL,
        "Background", 1LL,
        "LowMemory", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FileImageSource__uType* FileImageSource__typeof()
{
    static ::uStaticStrong<FileImageSource__uType*> type;
    if (type != NULL) return type;

    type = (FileImageSource__uType*)::uAllocClassType(sizeof(FileImageSource__uType), "Fuse.Resources.FileImageSource", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Resources::ImageSource__typeof());
    type->__fp_get_PixelSize = (::app::Uno::Int2(*)(::app::Fuse::Resources::ImageSource*))FileImageSource__get_PixelSize;
    type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::Resources::ImageSource*))FileImageSource__get_Size;
    type->__fp_get_SizeDensity = (float(*)(::app::Fuse::Resources::ImageSource*))FileImageSource__get_SizeDensity;
    type->__fp_GetTexture = (::app::Uno::Graphics::Texture2D*(*)(::app::Fuse::Resources::ImageSource*))FileImageSource__GetTexture;
    type->__fp_OnPinChanged = (void(*)(::app::Fuse::Resources::ImageSource*))FileImageSource__OnPinChanged;

    type->SetStrongRefs(
        "_proxy", offsetof(FileImageSource, _proxy));

    return type;
}

void FileImageSource___ObjInit_1(FileImageSource* __this)
{
    ::app::Fuse::Resources::ImageSource___ObjInit(__this);
    __this->_proxy = ::app::Fuse::Resources::ProxyImageSource__New_1(NULL, (::app::Fuse::Resources::ImageSource*)__this);
}

void FileImageSource___ObjInit_2(FileImageSource* __this, ::app::Uno::UX::FileSource* file)
{
    ::app::Fuse::Resources::ImageSource___ObjInit(__this);
    __this->_proxy = ::app::Fuse::Resources::ProxyImageSource__New_1(NULL, (::app::Fuse::Resources::ImageSource*)__this);
    __this->File(file);
}

void FileImageSource__CheckPolicy(FileImageSource* __this)
{
    if (::uPtr< ::app::Fuse::Resources::MemoryPolicy*>(::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Policy())->BundlePreload())
    {
        ::app::Fuse::Resources::FileImageSourceImpl* bfi = ::uAs< ::app::Fuse::Resources::FileImageSourceImpl*>(::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Impl(), ::app::Fuse::Resources::FileImageSourceImpl__typeof());

        if (bfi != NULL)
        {
            ::uPtr< ::app::Fuse::Resources::FileImageSourceImpl*>(bfi)->SyncLoad();
        }
    }
}

float FileImageSource__get_Density(FileImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Density();
}

::app::Uno::UX::FileSource* FileImageSource__get_File(FileImageSource* __this)
{
    return (::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Impl() == NULL) ? (::app::Uno::UX::FileSource*)NULL : ::uPtr< ::app::Fuse::Resources::FileImageSourceImpl*>(::uAs< ::app::Fuse::Resources::FileImageSourceImpl*>(::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Impl(), ::app::Fuse::Resources::FileImageSourceImpl__typeof()))->File();
}

::app::Uno::Int2 FileImageSource__get_PixelSize(FileImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->PixelSize();
}

::app::Fuse::Resources::MemoryPolicy* FileImageSource__get_Policy(FileImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Policy();
}

::app::Uno::Float2 FileImageSource__get_Size(FileImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Size();
}

float FileImageSource__get_SizeDensity(FileImageSource* __this)
{
    return __this->Density();
}

::app::Uno::Graphics::Texture2D* FileImageSource__GetTexture(FileImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->GetTexture();
}

FileImageSource* FileImageSource__New_1(::uStatic* __this, ::app::Uno::UX::FileSource* file)
{
    FileImageSource* inst = (FileImageSource*)::uAllocObject(sizeof(FileImageSource), FileImageSource__typeof());
    inst->_ObjInit_2(file);
    return inst;
}

FileImageSource* FileImageSource__New_2(::uStatic* __this)
{
    FileImageSource* inst = (FileImageSource*)::uAllocObject(sizeof(FileImageSource), FileImageSource__typeof());
    inst->_ObjInit_1();
    return inst;
}

void FileImageSource__OnPinChanged(FileImageSource* __this)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->OnPinChanged();
}

void FileImageSource__set_DefaultPolicy(FileImageSource* __this, ::app::Fuse::Resources::MemoryPolicy* value)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->DefaultSetPolicy(value);
    __this->CheckPolicy();
}

void FileImageSource__set_Density(FileImageSource* __this, float value)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Density(value);
}

void FileImageSource__set_File(FileImageSource* __this, ::app::Uno::UX::FileSource* value)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Release();

    if (value == NULL)
    {
        return;
    }

    ::app::Fuse::Resources::FileImageSourceImpl* bf = ::app::Fuse::Resources::FileImageSourceCache__GetFileSource(NULL, value);

    if (::uPtr< ::app::Fuse::Resources::MemoryPolicy*>(__this->Policy())->BundlePreload())
    {
        ::uPtr< ::app::Fuse::Resources::FileImageSourceImpl*>(bf)->SyncLoad();
    }

    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Attach((::app::Fuse::Resources::ImageSource*)bf);
}

void FileImageSource__set_Policy(FileImageSource* __this, ::app::Fuse::Resources::MemoryPolicy* value)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Policy(value);
    __this->CheckPolicy();
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_*> FileImageSourceCache___cache;

FileImageSourceCache__uType* FileImageSourceCache__typeof()
{
    static ::uStaticStrong<FileImageSourceCache__uType*> type;
    if (type != NULL) return type;

    type = (FileImageSourceCache__uType*)::uAllocClassType(sizeof(FileImageSourceCache__uType), "Fuse.Resources.FileImageSourceCache");

    return type;
}

void FileImageSourceCache___TypeInit(::uStatic* __this)
{
    FileImageSourceCache___cache = ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___New_1(NULL);
}

::app::Fuse::Resources::FileImageSourceImpl* FileImageSourceCache__GetFileSource(::uStatic* __this, ::app::Uno::UX::FileSource* file)
{
    ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl* value = NULL;

    if (::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_*>(FileImageSourceCache___cache)->TryGetValue(file, &value))
    {
        ::app::Fuse::Resources::FileImageSourceImpl* his;

        if (::uPtr< ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl*>(value)->TryGetTarget(&his))
        {
            return his;
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_*>(FileImageSourceCache___cache)->Remove(file);
    }

    ::app::Fuse::Resources::FileImageSourceImpl* nv = ::app::Fuse::Resources::FileImageSourceImpl__New_1(NULL, file);
    ::uPtr< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_*>(FileImageSourceCache___cache)->Add(file, ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl__New_1(NULL, nv));
    return nv;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FileImageSourceImpl__uType* FileImageSourceImpl__typeof()
{
    static ::uStaticStrong<FileImageSourceImpl__uType*> type;
    if (type != NULL) return type;

    type = (FileImageSourceImpl__uType*)::uAllocClassType(sizeof(FileImageSourceImpl__uType), "Fuse.Resources.FileImageSourceImpl", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Resources::LoadingImageSource__typeof());
    type->__fp_Finalize = (void(*)(::uObject*))FileImageSourceImpl__Finalize;
    type->__fp_AttemptLoad = (void(*)(::app::Fuse::Resources::LoadingImageSource*))FileImageSourceImpl__AttemptLoad;

    type->SetInterfaces(
        ::app::Fuse::Resources::IMemoryResource__typeof(), offsetof(FileImageSourceImpl__uType, __interface_0));

    type->SetStrongRefs(
        "_file", offsetof(FileImageSourceImpl, _file));

    return type;
}

void FileImageSourceImpl__Finalize(FileImageSourceImpl* __this)
{
    ::uPtr< ::app::Uno::UX::FileSource*>(__this->_file)->remove_DataChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_EventArgs__typeof(), (const void*)FileImageSourceImpl__OnDataChanged, __this));
}

void FileImageSourceImpl___ObjInit_2(FileImageSourceImpl* __this, ::app::Uno::UX::FileSource* file)
{
    ::app::Fuse::Resources::LoadingImageSource___ObjInit_1(__this);

    if (file == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("bundleFile")));
    }

    __this->_file = file;
    ::uPtr< ::app::Uno::UX::FileSource*>(__this->_file)->add_DataChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_EventArgs__typeof(), (const void*)FileImageSourceImpl__OnDataChanged, __this));
}

void FileImageSourceImpl__AttemptLoad(FileImageSourceImpl* __this)
{
    try
    {
        ::uArray* data = ::uPtr< ::app::Uno::UX::FileSource*>(__this->_file)->ReadAllBytes();
        ::app::Experimental::TextureLoader::TextureLoader__ByteArrayToTexture2DFilename(NULL, ::app::Uno::Buffer__New_2(NULL, data), ::uPtr< ::app::Uno::UX::FileSource*>(__this->_file)->Name, ::uNewDelegateNonVirt(::app::Uno::Action__texture2D__typeof(), (const void*)::app::Fuse::Resources::LoadingImageSource__SetTexture, __this));
        __this->OnChanged();
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            __this->Cleanup(1);
            __this->OnError(::uGetConstString("BundleFileImageSource-failed-conversion"), e);
        }
        else
        {
            throw __t;
        }
    }
}

::app::Uno::UX::FileSource* FileImageSourceImpl__get_File(FileImageSourceImpl* __this)
{
    return __this->_file;
}

FileImageSourceImpl* FileImageSourceImpl__New_1(::uStatic* __this, ::app::Uno::UX::FileSource* file)
{
    FileImageSourceImpl* inst = (FileImageSourceImpl*)::uAllocObject(sizeof(FileImageSourceImpl), FileImageSourceImpl__typeof());
    inst->_ObjInit_2(file);
    return inst;
}

void FileImageSourceImpl__OnDataChanged(FileImageSourceImpl* __this, ::uObject* s, ::uObject* a)
{
    __this->Reload();
}

void FileImageSourceImpl__SyncLoad(FileImageSourceImpl* __this)
{
    if (__this->IsLoaded())
    {
        __this->MarkUsed();
        return;
    }

    ::uArray* data = ::uPtr< ::app::Uno::UX::FileSource*>(__this->_file)->ReadAllBytes();
    ::app::Experimental::TextureLoader::TextureLoader__ByteArrayToTexture2DFilename(NULL, ::app::Uno::Buffer__New_2(NULL, data), ::uPtr< ::app::Uno::UX::FileSource*>(__this->_file)->Name, ::uNewDelegateNonVirt(::app::Uno::Action__texture2D__typeof(), (const void*)::app::Fuse::Resources::LoadingImageSource__SetTexture, __this));
    __this->OnChanged();
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FileResource__uType* FileResource__typeof()
{
    static ::uStaticStrong<FileResource__uType*> type;
    if (type != NULL) return type;

    type = (FileResource__uType*)::uAllocClassType(sizeof(FileResource__uType), "Fuse.Resources.FileResource", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::FileSource__typeof());
    type->__fp_OpenRead = (::app::Uno::IO::Stream*(*)(::app::Uno::UX::FileSource*))FileResource__OpenRead;

    type->SetStrongRefs(
        "_file", offsetof(FileResource, _file));

    return type;
}

::app::Uno::IO::Stream* FileResource__OpenRead(FileResource* __this)
{
    return ::uPtr< ::app::Uno::UX::FileSource*>(__this->_file)->OpenRead();
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HttpImageSource__uType* HttpImageSource__typeof()
{
    static ::uStaticStrong<HttpImageSource__uType*> type;
    if (type != NULL) return type;

    type = (HttpImageSource__uType*)::uAllocClassType(sizeof(HttpImageSource__uType), "Fuse.Resources.HttpImageSource", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Resources::ImageSource__typeof());
    type->__fp_get_PixelSize = (::app::Uno::Int2(*)(::app::Fuse::Resources::ImageSource*))HttpImageSource__get_PixelSize;
    type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::Resources::ImageSource*))HttpImageSource__get_Size;
    type->__fp_get_SizeDensity = (float(*)(::app::Fuse::Resources::ImageSource*))HttpImageSource__get_SizeDensity;
    type->__fp_GetTexture = (::app::Uno::Graphics::Texture2D*(*)(::app::Fuse::Resources::ImageSource*))HttpImageSource__GetTexture;
    type->__fp_OnPinChanged = (void(*)(::app::Fuse::Resources::ImageSource*))HttpImageSource__OnPinChanged;

    type->SetStrongRefs(
        "_proxy", offsetof(HttpImageSource, _proxy));

    return type;
}

float HttpImageSource__get_Density(HttpImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Density();
}

::app::Uno::Int2 HttpImageSource__get_PixelSize(HttpImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->PixelSize();
}

::app::Uno::Float2 HttpImageSource__get_Size(HttpImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Size();
}

float HttpImageSource__get_SizeDensity(HttpImageSource* __this)
{
    return __this->Density();
}

::uString* HttpImageSource__get_Url(HttpImageSource* __this)
{
    return (::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Impl() == NULL) ? ::uGetConstString("") : ::uPtr< ::app::Fuse::Resources::HttpImageSourceImpl*>(::uAs< ::app::Fuse::Resources::HttpImageSourceImpl*>(::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Impl(), ::app::Fuse::Resources::HttpImageSourceImpl__typeof()))->Url();
}

::app::Uno::Graphics::Texture2D* HttpImageSource__GetTexture(HttpImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->GetTexture();
}

void HttpImageSource__OnPinChanged(HttpImageSource* __this)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->OnPinChanged();
}

void HttpImageSource__set_DefaultPolicy(HttpImageSource* __this, ::app::Fuse::Resources::MemoryPolicy* value)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->DefaultSetPolicy(value);
}

void HttpImageSource__set_Density(HttpImageSource* __this, float value)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Density(value);
}

void HttpImageSource__set_Url(HttpImageSource* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Release();

    if (::app::Uno::String__op_Equality(NULL, value, ::uGetConstString("")))
    {
        return;
    }

    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Attach((::app::Fuse::Resources::ImageSource*)::app::Fuse::Resources::HttpImageSourceCache__GetUrl(NULL, value));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_*> HttpImageSourceCache___cache;

HttpImageSourceCache__uType* HttpImageSourceCache__typeof()
{
    static ::uStaticStrong<HttpImageSourceCache__uType*> type;
    if (type != NULL) return type;

    type = (HttpImageSourceCache__uType*)::uAllocClassType(sizeof(HttpImageSourceCache__uType), "Fuse.Resources.HttpImageSourceCache");

    return type;
}

void HttpImageSourceCache___TypeInit(::uStatic* __this)
{
    HttpImageSourceCache___cache = ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___New_1(NULL);
}

::app::Fuse::Resources::HttpImageSourceImpl* HttpImageSourceCache__GetUrl(::uStatic* __this, ::uString* url)
{
    ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl* value = NULL;

    if (::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_*>(HttpImageSourceCache___cache)->TryGetValue(url, &value))
    {
        ::app::Fuse::Resources::HttpImageSourceImpl* his;

        if (::uPtr< ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl*>(value)->TryGetTarget(&his))
        {
            return his;
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_*>(HttpImageSourceCache___cache)->Remove(url);
    }

    ::app::Fuse::Resources::HttpImageSourceImpl* nv = ::app::Fuse::Resources::HttpImageSourceImpl__New_1(NULL, url);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_*>(HttpImageSourceCache___cache)->Add(url, ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl__New_1(NULL, nv));
    return nv;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HttpImageSourceImpl__uType* HttpImageSourceImpl__typeof()
{
    static ::uStaticStrong<HttpImageSourceImpl__uType*> type;
    if (type != NULL) return type;

    type = (HttpImageSourceImpl__uType*)::uAllocClassType(sizeof(HttpImageSourceImpl__uType), "Fuse.Resources.HttpImageSourceImpl", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Resources::LoadingImageSource__typeof());
    type->__fp_AttemptLoad = (void(*)(::app::Fuse::Resources::LoadingImageSource*))HttpImageSourceImpl__AttemptLoad;

    type->SetInterfaces(
        ::app::Fuse::Resources::IMemoryResource__typeof(), offsetof(HttpImageSourceImpl__uType, __interface_0));

    type->SetStrongRefs(
        "_contentType", offsetof(HttpImageSourceImpl, _contentType),
        "_url", offsetof(HttpImageSourceImpl, _url));

    return type;
}

void HttpImageSourceImpl___ObjInit_2(HttpImageSourceImpl* __this, ::uString* url)
{
    ::app::Fuse::Resources::LoadingImageSource___ObjInit_1(__this);
    __this->_url = url;
}

void HttpImageSourceImpl__AttemptLoad(HttpImageSourceImpl* __this)
{
    try
    {
        ::app::Experimental::Http::HttpLoader__LoadBinary(NULL, __this->Url(), ::uNewDelegateNonVirt(::app::Uno::Action__Experimental_Http_HttpResponseHeader__Uno_Buffer__typeof(), (const void*)HttpImageSourceImpl__HttpCallback, __this), ::uNewDelegateNonVirt(::app::Uno::Action__string__typeof(), (const void*)HttpImageSourceImpl__LoadFailed, __this));
        __this->_loading = true;
        __this->OnChanged();
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            __this->Fail(::uGetConstString("HttpImageSource-failed-request"), e);
        }
        else
        {
            throw __t;
        }
    }
}

void HttpImageSourceImpl__Fail(HttpImageSourceImpl* __this, ::uString* msg, ::app::Uno::Exception* e)
{
    __this->Cleanup(1);
    __this->OnError(msg, e);
    ::app::Experimental::Http::HttpLoader__Discard(NULL, __this->_url);
}

::uString* HttpImageSourceImpl__get_Url(HttpImageSourceImpl* __this)
{
    return __this->_url;
}

void HttpImageSourceImpl__HttpCallback(HttpImageSourceImpl* __this, ::app::Experimental::Http::HttpResponseHeader* response, ::app::Uno::Buffer* data)
{
    if (::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(response)->StatusCode() != 200)
    {
        __this->Fail(::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("HttpImageSource-failed-status: "), ::uBox< int>(::app::Uno::Int__typeof(), ::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(response)->StatusCode())), ::uGetConstString(" ")), ::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(response)->ReasonPhrase()), NULL);
        return;
    }

    ::uString* ct;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(response)->Headers())->TryGetValue(::uGetConstString("content-type"), &ct))
    {
        __this->_contentType = ::uGetConstString("x-missing");
    }
    else
    {
        __this->_contentType = ct;
    }

    __this->_loading = false;

    try
    {
        ::app::Experimental::TextureLoader::TextureLoader__ByteArrayToTexture2DContentType(NULL, data, __this->_contentType, ::uNewDelegateNonVirt(::app::Uno::Action__texture2D__typeof(), (const void*)::app::Fuse::Resources::LoadingImageSource__SetTexture, __this));
        __this->OnChanged();
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            __this->Fail(::uGetConstString("HttpImageSource-failed-converson"), e);
        }
        else
        {
            throw __t;
        }
    }
}

void HttpImageSourceImpl__LoadFailed(HttpImageSourceImpl* __this, ::uString* reason)
{
    __this->Fail(::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("HttpImageSource-protocol-failure: "), reason), NULL);
}

HttpImageSourceImpl* HttpImageSourceImpl__New_1(::uStatic* __this, ::uString* url)
{
    HttpImageSourceImpl* inst = (HttpImageSourceImpl*)::uAllocObject(sizeof(HttpImageSourceImpl), HttpImageSourceImpl__typeof());
    inst->_ObjInit_2(url);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ImageSource__uType* ImageSource__typeof()
{
    static ::uStaticStrong<ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (ImageSource__uType*)::uAllocClassType(sizeof(ImageSource__uType), "Fuse.Resources.ImageSource", false, 0, 2, 0);

    type->__fp_OnPinChanged = ImageSource__OnPinChanged;

    type->SetStrongRefs(
        "Changed", offsetof(ImageSource, Changed),
        "Error", offsetof(ImageSource, Error));

    return type;
}

void ImageSource___ObjInit(ImageSource* __this)
{
}

void ImageSource__add_Changed(ImageSource* __this, ::uDelegate* value)
{
    __this->Changed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Changed, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void ImageSource__add_Error(ImageSource* __this, ::uDelegate* value)
{
    __this->Error = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Error, (::uDelegate*)value), ::app::Fuse::Resources::ImageSourceErrorHandler__typeof());
}

bool ImageSource__get_IsPinned(ImageSource* __this)
{
    return __this->_pinCount > 0;
}

void ImageSource__OnChanged(ImageSource* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Changed, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Changed)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void ImageSource__OnError(ImageSource* __this, ::uString* msg, ::app::Uno::Exception* e)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Error, NULL))
    {
        ::app::Fuse::Resources::ImageSourceErrorArgs* sa = ::app::Fuse::Resources::ImageSourceErrorArgs__New_2(NULL);
        ::uPtr< ::app::Fuse::Resources::ImageSourceErrorArgs*>(sa)->Reason = msg;
        sa->ExceptionCause = e;
        ::uPtr< ::uDelegate*>(__this->Error)->InvokeVoid< ::uObject*, ::app::Fuse::Resources::ImageSourceErrorArgs*>((::uObject*)__this, sa);
    }
}

void ImageSource__OnPinChanged(ImageSource* __this)
{
}

void ImageSource__Pin(ImageSource* __this)
{
    __this->_pinCount++;

    if (__this->_pinCount == 1)
    {
        __this->OnPinChanged();
    }
}

void ImageSource__ProxyChanged(ImageSource* __this, ::uObject* s, ::app::Uno::EventArgs* a)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Changed, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Changed)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>(s, a);
    }
}

void ImageSource__ProxyError(ImageSource* __this, ::uObject* s, ::app::Fuse::Resources::ImageSourceErrorArgs* a)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Error, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Error)->InvokeVoid< ::uObject*, ::app::Fuse::Resources::ImageSourceErrorArgs*>(s, a);
    }
}

void ImageSource__remove_Changed(ImageSource* __this, ::uDelegate* value)
{
    __this->Changed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Changed, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void ImageSource__remove_Error(ImageSource* __this, ::uDelegate* value)
{
    __this->Error = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Error, (::uDelegate*)value), ::app::Fuse::Resources::ImageSourceErrorHandler__typeof());
}

void ImageSource__Unpin(ImageSource* __this)
{
    __this->_pinCount--;

    if (__this->_pinCount == 0)
    {
        __this->OnPinChanged();
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ImageSourceErrorArgs__uType* ImageSourceErrorArgs__typeof()
{
    static ::uStaticStrong<ImageSourceErrorArgs__uType*> type;
    if (type != NULL) return type;

    type = (ImageSourceErrorArgs__uType*)::uAllocClassType(sizeof(ImageSourceErrorArgs__uType), "Fuse.Resources.ImageSourceErrorArgs", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "ExceptionCause", offsetof(ImageSourceErrorArgs, ExceptionCause),
        "Reason", offsetof(ImageSourceErrorArgs, Reason));

    return type;
}

void ImageSourceErrorArgs___ObjInit_1(ImageSourceErrorArgs* __this)
{
    ::app::Uno::EventArgs___ObjInit(__this);
}

ImageSourceErrorArgs* ImageSourceErrorArgs__New_2(::uStatic* __this)
{
    ImageSourceErrorArgs* inst = (ImageSourceErrorArgs*)::uAllocObject(sizeof(ImageSourceErrorArgs), ImageSourceErrorArgs__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ImageSourceErrorHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Resources.ImageSourceErrorHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Resources::ImageSourceErrorArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMemoryResource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Resources.IMemoryResource");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ISoftDisposable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Resources.ISoftDisposable");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LoadingImageSource__uType* LoadingImageSource__typeof()
{
    static ::uStaticStrong<LoadingImageSource__uType*> type;
    if (type != NULL) return type;

    type = (LoadingImageSource__uType*)::uAllocClassType(sizeof(LoadingImageSource__uType), "Fuse.Resources.LoadingImageSource", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Resources::ImageSource__typeof());
    type->__fp_get_PixelSize = (::app::Uno::Int2(*)(::app::Fuse::Resources::ImageSource*))LoadingImageSource__get_PixelSize;
    type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::Resources::ImageSource*))LoadingImageSource__get_Size;
    type->__fp_get_SizeDensity = (float(*)(::app::Fuse::Resources::ImageSource*))LoadingImageSource__get_SizeDensity;
    type->__fp_GetTexture = (::app::Uno::Graphics::Texture2D*(*)(::app::Fuse::Resources::ImageSource*))LoadingImageSource__GetTexture;
    type->__fp_OnPinChanged = (void(*)(::app::Fuse::Resources::ImageSource*))LoadingImageSource__OnPinChanged;
    type->__interface_0.__fp_SoftDispose = (void(*)(void*))LoadingImageSource__Fuse_Resources_IMemoryResource_SoftDispose;
    type->__interface_0.__fp_get_MemoryPolicy = (::app::Fuse::Resources::MemoryPolicy*(*)(void*))LoadingImageSource__Fuse_Resources_IMemoryResource_get_MemoryPolicy;
    type->__interface_0.__fp_get_IsPinned = (bool(*)(void*))LoadingImageSource__Fuse_Resources_IMemoryResource_get_IsPinned;
    type->__interface_0.__fp_get_LastUsed = (double(*)(void*))LoadingImageSource__Fuse_Resources_IMemoryResource_get_LastUsed;

    type->SetInterfaces(
        ::app::Fuse::Resources::IMemoryResource__typeof(), offsetof(LoadingImageSource__uType, __interface_0));

    type->SetStrongRefs(
        "_policy", offsetof(LoadingImageSource, _policy),
        "_texture", offsetof(LoadingImageSource, _texture));

    return type;
}

void LoadingImageSource___ObjInit_1(LoadingImageSource* __this)
{
    __this->_policy = ::app::Fuse::Resources::MemoryPolicy__PreloadRetain;
    __this->_density = 1.0f;
    ::app::Fuse::Resources::ImageSource___ObjInit(__this);
}

void LoadingImageSource__AsyncLoadTexture(LoadingImageSource* __this)
{
    __this->_haveAction = false;

    if (__this->_loading || __this->_failed)
    {
        return;
    }

    __this->AttemptLoad();
}

void LoadingImageSource__Cleanup(LoadingImageSource* __this, int reason)
{
    if (__this->_texture != NULL)
    {
        ::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->_texture)->Dispose();
        __this->_texture = NULL;
    }

    __this->_textureSize = ::app::Uno::Int2__New_1(NULL, 0);
    __this->_loading = false;
    __this->_failed = reason == 1;

    if (__this->_inDisposal)
    {
        ::app::Fuse::Resources::DisposalManager__Remove_1(NULL, (::uObject*)__this);
    }

    __this->_inDisposal = false;

    if (reason != 2)
    {
        __this->OnChanged();
    }
}

bool LoadingImageSource__Fuse_Resources_IMemoryResource_get_IsPinned(LoadingImageSource* __this)
{
    return __this->IsPinned();
}

double LoadingImageSource__Fuse_Resources_IMemoryResource_get_LastUsed(LoadingImageSource* __this)
{
    return __this->_lastUsed;
}

::app::Fuse::Resources::MemoryPolicy* LoadingImageSource__Fuse_Resources_IMemoryResource_get_MemoryPolicy(LoadingImageSource* __this)
{
    return __this->Policy();
}

void LoadingImageSource__Fuse_Resources_IMemoryResource_SoftDispose(LoadingImageSource* __this)
{
    __this->Cleanup(2);
}

bool LoadingImageSource__get_IsLoaded(LoadingImageSource* __this)
{
    return __this->_texture != NULL;
}

::app::Uno::Int2 LoadingImageSource__get_PixelSize(LoadingImageSource* __this)
{
    if (__this->_texture == NULL)
    {
        __this->LoadTexture();
    }

    __this->MarkUsed();
    return __this->_textureSize;
}

::app::Fuse::Resources::MemoryPolicy* LoadingImageSource__get_Policy(LoadingImageSource* __this)
{
    return __this->_policy;
}

::app::Uno::Float2 LoadingImageSource__get_Size(LoadingImageSource* __this)
{
    ::app::Uno::Int2 ts = __this->PixelSize();
    return ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)ts.X, (float)ts.Y), __this->_density);
}

float LoadingImageSource__get_SizeDensity(LoadingImageSource* __this)
{
    return __this->_density;
}

::app::Uno::Graphics::Texture2D* LoadingImageSource__GetTexture(LoadingImageSource* __this)
{
    if (__this->_texture != NULL)
    {
        __this->MarkUsed();
        return __this->_texture;
    }

    __this->LoadTexture();
    return NULL;
}

void LoadingImageSource__LoadTexture(LoadingImageSource* __this)
{
    if (__this->_loading || __this->_failed)
    {
        return;
    }

    if (!__this->_haveAction)
    {
        ::app::Fuse::UpdateManager__AddOnceAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)LoadingImageSource__AsyncLoadTexture, __this), 0);
        __this->_haveAction = true;
    }
}

void LoadingImageSource__MarkUsed(LoadingImageSource* __this)
{
    __this->_lastUsed = ::app::Fuse::Time__get_FrameTime(NULL);
}

void LoadingImageSource__OnPinChanged(LoadingImageSource* __this)
{
    ::app::Fuse::Resources::ImageSource__OnPinChanged(__this);
    __this->MarkUsed();
}

void LoadingImageSource__Reload(LoadingImageSource* __this)
{
    __this->Cleanup(0);
    __this->LoadTexture();
}

void LoadingImageSource__set_Policy(LoadingImageSource* __this, ::app::Fuse::Resources::MemoryPolicy* value)
{
    if (value == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("value-cannot-be-null")));
    }

    __this->_policy = value;
}

void LoadingImageSource__SetTexture(LoadingImageSource* __this, ::app::Uno::Graphics::Texture2D* texture)
{
    __this->_texture = texture;
    __this->_textureSize = ::uPtr< ::app::Uno::Graphics::Texture2D*>(texture)->Size();

    if (!__this->_inDisposal)
    {
        ::app::Fuse::Resources::DisposalManager__Add(NULL, (::uObject*)__this);
        __this->_inDisposal = true;
    }

    __this->MarkUsed();
    __this->OnChanged();
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* LoadingImageSource_CleanupReason__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Resources.LoadingImageSource.CleanupReason", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Normal", 0LL,
        "Failed", 1LL,
        "Disposed", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< MemoryPolicy*> MemoryPolicy__PreloadRetain;
::uStaticStrong< MemoryPolicy*> MemoryPolicy__UnloadUnused;

MemoryPolicy__uType* MemoryPolicy__typeof()
{
    static ::uStaticStrong<MemoryPolicy__uType*> type;
    if (type != NULL) return type;

    type = (MemoryPolicy__uType*)::uAllocClassType(sizeof(MemoryPolicy__uType), "Fuse.Resources.MemoryPolicy", false, 0, 0, 0);

    return type;
}

void MemoryPolicy___ObjInit(MemoryPolicy* __this)
{
}

void MemoryPolicy___TypeInit(::uStatic* __this)
{
    MemoryPolicy* collection_124;
    MemoryPolicy* collection_123;
    MemoryPolicy__PreloadRetain = (collection_124 = MemoryPolicy__New_1(NULL), ::uPtr< MemoryPolicy*>(collection_124)->BundlePreload(true), true, collection_124);
    MemoryPolicy__UnloadUnused = (collection_123 = MemoryPolicy__New_1(NULL), ::uPtr< MemoryPolicy*>(collection_123)->UnloadInBackground(true), true, ::uPtr< MemoryPolicy*>(collection_123)->UnusedTimeout(60.0), 60.0, ::uPtr< MemoryPolicy*>(collection_123)->UnpinInvisible(true), true, collection_123);
}

bool MemoryPolicy__get_AllowPinnedFree(MemoryPolicy* __this)
{
    return __this->_AllowPinnedFree;
}

bool MemoryPolicy__get_BundlePreload(MemoryPolicy* __this)
{
    return __this->_BundlePreload;
}

bool MemoryPolicy__get_UnloadInBackground(MemoryPolicy* __this)
{
    return __this->_UnloadInBackground;
}

bool MemoryPolicy__get_UnpinInvisible(MemoryPolicy* __this)
{
    return __this->_UnpinInvisible;
}

double MemoryPolicy__get_UnusedTimeout(MemoryPolicy* __this)
{
    return __this->_UnusedTimeout;
}

MemoryPolicy* MemoryPolicy__New_1(::uStatic* __this)
{
    MemoryPolicy* inst = (MemoryPolicy*)::uAllocObject(sizeof(MemoryPolicy), MemoryPolicy__typeof());
    inst->_ObjInit();
    return inst;
}

void MemoryPolicy__set_AllowPinnedFree(MemoryPolicy* __this, bool value)
{
    __this->_AllowPinnedFree = value;
}

void MemoryPolicy__set_BundlePreload(MemoryPolicy* __this, bool value)
{
    __this->_BundlePreload = value;
}

void MemoryPolicy__set_UnloadInBackground(MemoryPolicy* __this, bool value)
{
    __this->_UnloadInBackground = value;
}

void MemoryPolicy__set_UnpinInvisible(MemoryPolicy* __this, bool value)
{
    __this->_UnpinInvisible = value;
}

void MemoryPolicy__set_UnusedTimeout(MemoryPolicy* __this, double value)
{
    __this->_UnusedTimeout = value;
}

bool MemoryPolicy__ShouldSoftDispose(MemoryPolicy* __this, int dr, ::uObject* resource)
{
    if ((dr == 1) && __this->UnloadInBackground())
    {
        return true;
    }

    if ((__this->AllowPinnedFree() || !::app::Fuse::Resources::IMemoryResource::IsPinned(::uPtr< ::uObject*>(resource))) && (__this->UnusedTimeout() > 0.0))
    {
        double elapsed = ::app::Fuse::Time__get_FrameTime(NULL) - ::app::Fuse::Resources::IMemoryResource::LastUsed(::uPtr< ::uObject*>(resource));

        if (elapsed > __this->UnusedTimeout())
        {
            return true;
        }
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MultiDensityImageSource__uType* MultiDensityImageSource__typeof()
{
    static ::uStaticStrong<MultiDensityImageSource__uType*> type;
    if (type != NULL) return type;

    type = (MultiDensityImageSource__uType*)::uAllocClassType(sizeof(MultiDensityImageSource__uType), "Fuse.Resources.MultiDensityImageSource", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Resources::ImageSource__typeof());
    type->__fp_get_PixelSize = (::app::Uno::Int2(*)(::app::Fuse::Resources::ImageSource*))MultiDensityImageSource__get_PixelSize;
    type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::Resources::ImageSource*))MultiDensityImageSource__get_Size;
    type->__fp_get_SizeDensity = (float(*)(::app::Fuse::Resources::ImageSource*))MultiDensityImageSource__get_SizeDensity;
    type->__fp_GetTexture = (::app::Uno::Graphics::Texture2D*(*)(::app::Fuse::Resources::ImageSource*))MultiDensityImageSource__GetTexture;
    type->__fp_OnPinChanged = (void(*)(::app::Fuse::Resources::ImageSource*))MultiDensityImageSource__OnPinChanged;

    type->SetStrongRefs(
        "_active", offsetof(MultiDensityImageSource, _active),
        "_proxy", offsetof(MultiDensityImageSource, _proxy),
        "_sources", offsetof(MultiDensityImageSource, _sources));

    return type;
}

void MultiDensityImageSource___ObjInit_1(MultiDensityImageSource* __this)
{
    ::app::Fuse::Resources::ImageSource___ObjInit(__this);
    __this->_sources = ::app::Uno::Collections::ObservableList__Fuse_Resources_ImageSource__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Resources_ImageSource__typeof(), (const void*)MultiDensityImageSource__OnImageAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Resources_ImageSource__typeof(), (const void*)MultiDensityImageSource__OnImageRemoved, __this));
    __this->_proxy = ::app::Fuse::Resources::ProxyImageSource__New_1(NULL, (::app::Fuse::Resources::ImageSource*)__this);
}

::app::Uno::Int2 MultiDensityImageSource__get_PixelSize(MultiDensityImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->PixelSize();
}

::app::Uno::Float2 MultiDensityImageSource__get_Size(MultiDensityImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Size();
}

float MultiDensityImageSource__get_SizeDensity(MultiDensityImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Density();
}

::uObject* MultiDensityImageSource__get_Sources(MultiDensityImageSource* __this)
{
    return (::uObject*)__this->_sources;
}

::app::Uno::Graphics::Texture2D* MultiDensityImageSource__GetTexture(MultiDensityImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->GetTexture();
}

MultiDensityImageSource* MultiDensityImageSource__New_1(::uStatic* __this)
{
    MultiDensityImageSource* inst = (MultiDensityImageSource*)::uAllocObject(sizeof(MultiDensityImageSource), MultiDensityImageSource__typeof());
    inst->_ObjInit_1();
    return inst;
}

void MultiDensityImageSource__OnImageAdded(MultiDensityImageSource* __this, ::app::Fuse::Resources::ImageSource* img)
{
    __this->SelectActive();
}

void MultiDensityImageSource__OnImageRemoved(MultiDensityImageSource* __this, ::app::Fuse::Resources::ImageSource* img)
{
    __this->SelectActive();
}

void MultiDensityImageSource__OnPinChanged(MultiDensityImageSource* __this)
{
    __this->SelectActive();
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->OnPinChanged();
}

void MultiDensityImageSource__SelectActive(MultiDensityImageSource* __this)
{
    float screen = __this->_hasMatchDensity ? __this->_matchDensity : ::app::Fuse::RootViewport__get_DefaultDensity(NULL);
    float diff = FLT_INF;
    ::app::Fuse::Resources::ImageSource* use = NULL;

    for (::uObject* enum_123 = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Resources_ImageSource*>(__this->_sources)->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Resources::ImageSource* source = ::app::Uno::Collections::IEnumerator__Fuse_Resources_ImageSource::Current(::uPtr< ::uObject*>(enum_123));
        float d = ::app::Uno::Math__Abs_8(NULL, ::uPtr< ::app::Fuse::Resources::ImageSource*>(source)->SizeDensity() - screen);

        if (d < diff)
        {
            use = source;
            diff = d;
        }
    }

    __this->SwapActive(use);
}

void MultiDensityImageSource__SwapActive(MultiDensityImageSource* __this, ::app::Fuse::Resources::ImageSource* use)
{
    if (use == __this->_active)
    {
        return;
    }

    if (__this->_active != NULL)
    {
        ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Release();
    }

    __this->_active = use;

    if (use != NULL)
    {
        ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Attach(use);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ProxyImageSource__uType* ProxyImageSource__typeof()
{
    static ::uStaticStrong<ProxyImageSource__uType*> type;
    if (type != NULL) return type;

    type = (ProxyImageSource__uType*)::uAllocClassType(sizeof(ProxyImageSource__uType), "Fuse.Resources.ProxyImageSource", false, 0, 3, 0);

    type->SetStrongRefs(
        "_impl", offsetof(ProxyImageSource, _impl),
        "_outer", offsetof(ProxyImageSource, _outer),
        "_policy", offsetof(ProxyImageSource, _policy));

    return type;
}

void ProxyImageSource___ObjInit(ProxyImageSource* __this, ::app::Fuse::Resources::ImageSource* outer)
{
    __this->_isDefaultPolicy = true;
    __this->_policy = ::app::Fuse::Resources::MemoryPolicy__PreloadRetain;
    __this->_density = 1.0f;
    __this->_outer = outer;
}

void ProxyImageSource__Attach(ProxyImageSource* __this, ::app::Fuse::Resources::ImageSource* impl)
{
    __this->_impl = impl;
    ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->add_Changed(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ProxyImageSource__ProxyOnChanged, __this));
    ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->add_Error(::uNewDelegateNonVirt(::app::Fuse::Resources::ImageSourceErrorHandler__typeof(), (const void*)ProxyImageSource__ProxyOnError, __this));

    if (::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_outer)->IsPinned())
    {
        ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->Pin();
    }

    ::app::Fuse::Resources::LoadingImageSource* loading = ::uAs< ::app::Fuse::Resources::LoadingImageSource*>(impl, ::app::Fuse::Resources::LoadingImageSource__typeof());

    if (loading != NULL)
    {
        ::uPtr< ::app::Fuse::Resources::LoadingImageSource*>(loading)->Policy(__this->_policy);
    }

    ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_outer)->ProxyChanged((::uObject*)__this, ::app::Uno::EventArgs__New_1(NULL));
}

void ProxyImageSource__DefaultSetPolicy(ProxyImageSource* __this, ::app::Fuse::Resources::MemoryPolicy* mp)
{
    if (!__this->_isDefaultPolicy)
    {
        return;
    }

    __this->_policy = mp;
    __this->UpdatePolicy();
}

float ProxyImageSource__get_Density(ProxyImageSource* __this)
{
    if (__this->_hasDensity || (__this->_impl == NULL))
    {
        return __this->_density;
    }

    return ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->SizeDensity();
}

::app::Fuse::Resources::ImageSource* ProxyImageSource__get_Impl(ProxyImageSource* __this)
{
    return __this->_impl;
}

::app::Uno::Int2 ProxyImageSource__get_PixelSize(ProxyImageSource* __this)
{
    if (__this->_impl == NULL)
    {
        return ::app::Uno::Int2__New_1(NULL, 0);
    }

    return ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->PixelSize();
}

::app::Fuse::Resources::MemoryPolicy* ProxyImageSource__get_Policy(ProxyImageSource* __this)
{
    return __this->_policy;
}

::app::Uno::Float2 ProxyImageSource__get_Size(ProxyImageSource* __this)
{
    if (__this->_impl == NULL)
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    ::app::Uno::Int2 ps = ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->PixelSize();
    return ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)ps.X, (float)ps.Y), __this->_density);
}

::app::Uno::Graphics::Texture2D* ProxyImageSource__GetTexture(ProxyImageSource* __this)
{
    return (__this->_impl == NULL) ? (::app::Uno::Graphics::Texture2D*)NULL : ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->GetTexture();
}

ProxyImageSource* ProxyImageSource__New_1(::uStatic* __this, ::app::Fuse::Resources::ImageSource* outer)
{
    ProxyImageSource* inst = (ProxyImageSource*)::uAllocObject(sizeof(ProxyImageSource), ProxyImageSource__typeof());
    inst->_ObjInit(outer);
    return inst;
}

void ProxyImageSource__OnPinChanged(ProxyImageSource* __this)
{
    if (__this->_impl == NULL)
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_outer)->IsPinned())
    {
        ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->Pin();
    }
    else
    {
        ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->Unpin();
    }
}

void ProxyImageSource__ProxyOnChanged(ProxyImageSource* __this, ::uObject* s, ::app::Uno::EventArgs* a)
{
    ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_outer)->ProxyChanged((::uObject*)__this, a);
}

void ProxyImageSource__ProxyOnError(ProxyImageSource* __this, ::uObject* s, ::app::Fuse::Resources::ImageSourceErrorArgs* a)
{
    ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_outer)->ProxyError((::uObject*)__this, a);
}

void ProxyImageSource__Release(ProxyImageSource* __this)
{
    if (__this->_impl != NULL)
    {
        if (::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_outer)->IsPinned())
        {
            ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->Unpin();
        }

        ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->remove_Changed(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ProxyImageSource__ProxyOnChanged, __this));
        ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->remove_Error(::uNewDelegateNonVirt(::app::Fuse::Resources::ImageSourceErrorHandler__typeof(), (const void*)ProxyImageSource__ProxyOnError, __this));
        __this->_impl = NULL;
    }
}

void ProxyImageSource__set_Density(ProxyImageSource* __this, float value)
{
    __this->_density = value;
    __this->_hasDensity = true;
}

void ProxyImageSource__set_Policy(ProxyImageSource* __this, ::app::Fuse::Resources::MemoryPolicy* value)
{
    __this->_policy = value;
    __this->_isDefaultPolicy = false;
    __this->UpdatePolicy();
}

void ProxyImageSource__UpdatePolicy(ProxyImageSource* __this)
{
    ::app::Fuse::Resources::LoadingImageSource* loading = ::uAs< ::app::Fuse::Resources::LoadingImageSource*>(__this->_impl, ::app::Fuse::Resources::LoadingImageSource__typeof());

    if (loading != NULL)
    {
        ::uPtr< ::app::Fuse::Resources::LoadingImageSource*>(loading)->Policy(__this->_policy);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*> ResourceRegistry___handlers;

ResourceRegistry__uType* ResourceRegistry__typeof()
{
    static ::uStaticStrong<ResourceRegistry__uType*> type;
    if (type != NULL) return type;

    type = (ResourceRegistry__uType*)::uAllocClassType(sizeof(ResourceRegistry__uType), "Fuse.Resources.ResourceRegistry");

    return type;
}

void ResourceRegistry___TypeInit(::uStatic* __this)
{
    ResourceRegistry___handlers = ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action___New_1(NULL);
}

void ResourceRegistry__AddResourceChangedHandler(::uStatic* __this, ::uString* key, ::uDelegate* handler)
{
    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*>(ResourceRegistry___handlers)->ContainsKey(key))
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*>(ResourceRegistry___handlers)->Add(key, ::app::Uno::Collections::List__Uno_Action__New_1(NULL));
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*>(ResourceRegistry___handlers)->Item(key))->Add(handler);
}

void ResourceRegistry__NotifyResourceChanged(::uStatic* __this, ::uString* key)
{
    ::app::Uno::Collections::List__Uno_Action* list;

    if (::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*>(ResourceRegistry___handlers)->TryGetValue(key, &list))
    {
        for (::app::Uno::Collections::List1_Enumerator__Uno_Action enum_123 = ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(list)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::uDelegate* h = enum_123.Current();
            ::uPtr< ::uDelegate*>(h)->InvokeVoid();
        }
    }
}

void ResourceRegistry__RemoveResourceChangedHandler(::uStatic* __this, ::uString* key, ::uDelegate* handler)
{
    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*>(ResourceRegistry___handlers)->ContainsKey(key))
    {
        U_THROW(::app::Uno::Exception__New_1(NULL));
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*>(ResourceRegistry___handlers)->Item(key))->Remove(handler);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextureImageSource__uType* TextureImageSource__typeof()
{
    static ::uStaticStrong<TextureImageSource__uType*> type;
    if (type != NULL) return type;

    type = (TextureImageSource__uType*)::uAllocClassType(sizeof(TextureImageSource__uType), "Fuse.Resources.TextureImageSource", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Resources::ImageSource__typeof());
    type->__fp_get_PixelSize = (::app::Uno::Int2(*)(::app::Fuse::Resources::ImageSource*))TextureImageSource__get_PixelSize;
    type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::Resources::ImageSource*))TextureImageSource__get_Size;
    type->__fp_get_SizeDensity = (float(*)(::app::Fuse::Resources::ImageSource*))TextureImageSource__get_SizeDensity;
    type->__fp_GetTexture = (::app::Uno::Graphics::Texture2D*(*)(::app::Fuse::Resources::ImageSource*))TextureImageSource__GetTexture;

    type->SetStrongRefs(
        "_texture", offsetof(TextureImageSource, _texture));

    return type;
}

float TextureImageSource__get_Density(TextureImageSource* __this)
{
    return __this->_density;
}

::app::Uno::Int2 TextureImageSource__get_PixelSize(TextureImageSource* __this)
{
    if (__this->_texture != NULL)
    {
        return ::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->_texture)->Size();
    }

    return ::app::Uno::Int2__New_1(NULL, 0);
}

::app::Uno::Float2 TextureImageSource__get_Size(TextureImageSource* __this)
{
    if (__this->_texture != NULL)
    {
        return ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->_texture)->Size().X, (float)::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->_texture)->Size().Y), __this->_density);
    }

    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

float TextureImageSource__get_SizeDensity(TextureImageSource* __this)
{
    return __this->Density();
}

::app::Uno::Graphics::Texture2D* TextureImageSource__GetTexture(TextureImageSource* __this)
{
    return __this->_texture;
}

void TextureImageSource__set_Density(TextureImageSource* __this, float value)
{
    if (__this->_density != value)
    {
        __this->_density = value;
        __this->OnChanged();
    }
}

}}}
