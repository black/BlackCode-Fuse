#include <app/Experimental.Http.HttpLoader.h>
#include <app/Experimental.Http.HttpResponseHeader.h>
#include <app/Experimental.TextureLoader.TextureLoader.h>
#include <app/Fuse.Resources.DisposalManager.h>
#include <app/Fuse.Resources.DisposalPolicy.h>
#include <app/Fuse.Resources.DisposalRequest.h>
#include <app/Fuse.Resources.ExpirationDisposalPolicy.h>
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
#include <app/Fuse.Resources.ImageSourceState.h>
#include <app/Fuse.Resources.IMemoryResource.h>
#include <app/Fuse.Resources.ISoftDisposable.h>
#include <app/Fuse.Resources.LoadingImageSource.h>
#include <app/Fuse.Resources.LoadingImageSource_CleanupReason.h>
#include <app/Fuse.Resources.MemoryPolicy.h>
#include <app/Fuse.Resources.MultiDensityImageSource.h>
#include <app/Fuse.Resources.ProxyImageSource.h>
#include <app/Fuse.Resources.ResourceBool.h>
#include <app/Fuse.Resources.ResourceFloat.h>
#include <app/Fuse.Resources.ResourceFloat2.h>
#include <app/Fuse.Resources.ResourceFloat3.h>
#include <app/Fuse.Resources.ResourceFloat4.h>
#include <app/Fuse.Resources.ResourceObject.h>
#include <app/Fuse.Resources.ResourceRegistry.h>
#include <app/Fuse.Resources.ResourceString.h>
#include <app/Fuse.Resources.RetainDisposalPolicy.h>
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
#include <app/Uno.Collections.Dictionary__string__Uno_WeakReference_Fuse_Reso-7f4f8b85.h>
#include <app/Uno.Collections.Dictionary__Uno_UX_FileSource__Uno_WeakReferenc-1152b5e6.h>
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

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
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

    type->SetFields(4,
        ::uNewField("_actionAdded", &DisposalManager___actionAdded, 0, ::app::Uno::Bool__typeof()),
        ::uNewField("_disposeAt", &DisposalManager___disposeAt, 0, ::app::Uno::Int__typeof()),
        ::uNewField("_items", &DisposalManager___items, 0, ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource__typeof()),
        ::uNewField("_softDisposables", &DisposalManager___softDisposables, 0, ::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable__typeof()));

    type->SetFunctions(7,
        ::uNewFunctionVoid("Add", DisposalManager__Add, 0, true, ::app::Fuse::Resources::IMemoryResource__typeof()),
        ::uNewFunctionVoid("Add", DisposalManager__Add_1, 0, true, ::app::Fuse::Resources::ISoftDisposable__typeof()),
        ::uNewFunctionVoid("Clean", DisposalManager__Clean, 0, true, ::app::Fuse::Resources::DisposalRequest__typeof()),
        ::uNewFunctionVoid("Remove", DisposalManager__Remove, 0, true, ::app::Fuse::Resources::IMemoryResource__typeof()),
        ::uNewFunctionVoid("Remove", DisposalManager__Remove_1, 0, true, ::app::Fuse::Resources::ISoftDisposable__typeof()),
        ::uNewFunctionVoid("Update", DisposalManager__Update, 0, true),
        ::uNewFunctionVoid("VerifyAttach", DisposalManager__VerifyAttach, 0, true));

    ::uRegisterType(type);
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

void DisposalManager__Remove(::uStatic* __this, ::uObject* item)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IMemoryResource*>(DisposalManager___items)->Remove(item);
    DisposalManager__VerifyAttach(NULL);
}

void DisposalManager__Remove_1(::uStatic* __this, ::uObject* item)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable*>(DisposalManager___softDisposables)->Remove(item);
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

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DisposalPolicy__uType* DisposalPolicy__typeof()
{
    static ::uStaticStrong<DisposalPolicy__uType*> type;
    if (type != NULL) return type;

    type = (DisposalPolicy__uType*)::uAllocClassType(sizeof(DisposalPolicy__uType), "Fuse.Resources.DisposalPolicy", false, 0, 0, 0);

    type->SetFunctions(3,
        ::uNewFunction("CanDispose", type->__fp_CanDispose, offsetof(DisposalPolicy__uType, __fp_CanDispose), false, ::app::Uno::Bool__typeof(), ::app::Fuse::Resources::DisposalRequest__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("Clone", type->__fp_Clone, offsetof(DisposalPolicy__uType, __fp_Clone), false, DisposalPolicy__typeof()),
        ::uNewFunctionVoid("MarkUsed", type->__fp_MarkUsed, offsetof(DisposalPolicy__uType, __fp_MarkUsed), false));

    ::uRegisterType(type);
    return type;
}

void DisposalPolicy___ObjInit(DisposalPolicy* __this)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
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

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ExpirationDisposalPolicy__uType* ExpirationDisposalPolicy__typeof()
{
    static ::uStaticStrong<ExpirationDisposalPolicy__uType*> type;
    if (type != NULL) return type;

    type = (ExpirationDisposalPolicy__uType*)::uAllocClassType(sizeof(ExpirationDisposalPolicy__uType), "Fuse.Resources.ExpirationDisposalPolicy", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Resources::DisposalPolicy__typeof());
    type->__fp_CanDispose = (bool(*)(::app::Fuse::Resources::DisposalPolicy*, int, bool))ExpirationDisposalPolicy__CanDispose;
    type->__fp_Clone = (::app::Fuse::Resources::DisposalPolicy*(*)(::app::Fuse::Resources::DisposalPolicy*))ExpirationDisposalPolicy__Clone;
    type->__fp_MarkUsed = (void(*)(::app::Fuse::Resources::DisposalPolicy*))ExpirationDisposalPolicy__MarkUsed;

    type->SetFields(1,
        ::uNewField("lastUsedFrameTime", NULL, offsetof(ExpirationDisposalPolicy, lastUsedFrameTime), ::app::Uno::Double__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Timeout", ExpirationDisposalPolicy__get_Timeout, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction(".ctor", ExpirationDisposalPolicy__New_1, 0, true, ExpirationDisposalPolicy__typeof()),
        ::uNewFunctionVoid("set_Timeout", ExpirationDisposalPolicy__set_Timeout, 0, false, ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

void ExpirationDisposalPolicy___ObjInit_1(ExpirationDisposalPolicy* __this)
{
    ::app::Fuse::Resources::DisposalPolicy___ObjInit(__this);
}

bool ExpirationDisposalPolicy__CanDispose(ExpirationDisposalPolicy* __this, int dr, bool pinned)
{
    if (!pinned && (__this->Timeout() > 0.0))
    {
        double elapsed = ::app::Fuse::Time__get_FrameTime(NULL) - __this->lastUsedFrameTime;

        if (elapsed > __this->Timeout())
        {
            return true;
        }
    }

    return dr != 0;
}

::app::Fuse::Resources::DisposalPolicy* ExpirationDisposalPolicy__Clone(ExpirationDisposalPolicy* __this)
{
    ExpirationDisposalPolicy* p = ExpirationDisposalPolicy__New_1(NULL);
    ::uPtr< ExpirationDisposalPolicy*>(p)->Timeout(__this->Timeout());
    return (::app::Fuse::Resources::DisposalPolicy*)p;
}

double ExpirationDisposalPolicy__get_Timeout(ExpirationDisposalPolicy* __this)
{
    return __this->_Timeout;
}

void ExpirationDisposalPolicy__MarkUsed(ExpirationDisposalPolicy* __this)
{
    __this->lastUsedFrameTime = ::app::Fuse::Time__get_FrameTime(NULL);
}

ExpirationDisposalPolicy* ExpirationDisposalPolicy__New_1(::uStatic* __this)
{
    ExpirationDisposalPolicy* inst = (ExpirationDisposalPolicy*)::uAllocObject(sizeof(ExpirationDisposalPolicy), ExpirationDisposalPolicy__typeof());
    inst->_ObjInit_1();
    return inst;
}

void ExpirationDisposalPolicy__set_Timeout(ExpirationDisposalPolicy* __this, double value)
{
    __this->_Timeout = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
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
    type->__fp_get_State = (int(*)(::app::Fuse::Resources::ImageSource*))FileImageSource__get_State;
    type->__fp_GetTexture = (::app::Uno::Graphics::Texture2D*(*)(::app::Fuse::Resources::ImageSource*))FileImageSource__GetTexture;
    type->__fp_OnPinChanged = (void(*)(::app::Fuse::Resources::ImageSource*))FileImageSource__OnPinChanged;
    type->__fp_Reload = (void(*)(::app::Fuse::Resources::ImageSource*))FileImageSource__Reload;

    type->SetStrongRefs(
        "_proxy", offsetof(FileImageSource, _proxy));

    type->SetFields(1,
        ::uNewField("_proxy", NULL, offsetof(FileImageSource, _proxy), ::app::Fuse::Resources::ProxyImageSource__typeof()));

    type->SetFunctions(10,
        ::uNewFunctionVoid("CheckPolicy", FileImageSource__CheckPolicy, 0, false),
        ::uNewFunction("get_Density", FileImageSource__get_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_File", FileImageSource__get_File, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction("get_Policy", FileImageSource__get_Policy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunction(".ctor", FileImageSource__New_1, 0, true, FileImageSource__typeof()),
        ::uNewFunction(".ctor", FileImageSource__New_2, 0, true, FileImageSource__typeof(), ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunctionVoid("set_DefaultPolicy", FileImageSource__set_DefaultPolicy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunctionVoid("set_Density", FileImageSource__set_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_File", FileImageSource__set_File, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunctionVoid("set_Policy", FileImageSource__set_Policy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()));

    ::uRegisterType(type);
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

int FileImageSource__get_State(FileImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->State();
}

::app::Uno::Graphics::Texture2D* FileImageSource__GetTexture(FileImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->GetTexture();
}

FileImageSource* FileImageSource__New_1(::uStatic* __this)
{
    FileImageSource* inst = (FileImageSource*)::uAllocObject(sizeof(FileImageSource), FileImageSource__typeof());
    inst->_ObjInit_1();
    return inst;
}

FileImageSource* FileImageSource__New_2(::uStatic* __this, ::app::Uno::UX::FileSource* file)
{
    FileImageSource* inst = (FileImageSource*)::uAllocObject(sizeof(FileImageSource), FileImageSource__typeof());
    inst->_ObjInit_2(file);
    return inst;
}

void FileImageSource__OnPinChanged(FileImageSource* __this)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->OnPinChanged();
}

void FileImageSource__Reload(FileImageSource* __this)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Reload();
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

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_*> FileImageSourceCache___cache;

FileImageSourceCache__uType* FileImageSourceCache__typeof()
{
    static ::uStaticStrong<FileImageSourceCache__uType*> type;
    if (type != NULL) return type;

    type = (FileImageSourceCache__uType*)::uAllocClassType(sizeof(FileImageSourceCache__uType), "Fuse.Resources.FileImageSourceCache");

    type->SetFields(1,
        ::uNewField("_cache", &FileImageSourceCache___cache, 0, ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof()));

    type->SetFunctions(1,
        ::uNewFunction("GetFileSource", FileImageSourceCache__GetFileSource, 0, true, ::app::Fuse::Resources::FileImageSourceImpl__typeof(), ::app::Uno::UX::FileSource__typeof()));

    ::uRegisterType(type);
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

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
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

    type->SetFields(1,
        ::uNewField("_file", NULL, offsetof(FileImageSourceImpl, _file), ::app::Uno::UX::FileSource__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_File", FileImageSourceImpl__get_File, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction(".ctor", FileImageSourceImpl__New_1, 0, true, FileImageSourceImpl__typeof(), ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunctionVoid("OnDataChanged", FileImageSourceImpl__OnDataChanged, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SyncLoad", FileImageSourceImpl__SyncLoad, 0, false));

    ::uRegisterType(type);
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
        ::app::Experimental::TextureLoader::TextureLoader__ByteArrayToTexture2DFilename(NULL, ::app::Uno::Buffer__New_1(NULL, data), ::uPtr< ::app::Uno::UX::FileSource*>(__this->_file)->Name, ::uNewDelegateNonVirt(::app::Uno::Action__texture2D__typeof(), (const void*)::app::Fuse::Resources::LoadingImageSource__SetTexture, __this));
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
    ::app::Experimental::TextureLoader::TextureLoader__ByteArrayToTexture2DFilename(NULL, ::app::Uno::Buffer__New_1(NULL, data), ::uPtr< ::app::Uno::UX::FileSource*>(__this->_file)->Name, ::uNewDelegateNonVirt(::app::Uno::Action__texture2D__typeof(), (const void*)::app::Fuse::Resources::LoadingImageSource__SetTexture, __this));
    __this->OnChanged();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
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

    type->SetFields(1,
        ::uNewField("_file", NULL, offsetof(FileResource, _file), ::app::Uno::UX::FileSource__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FileResource__New_1, 0, true, FileResource__typeof(), ::app::Uno::UX::FileSource__typeof()));

    ::uRegisterType(type);
    return type;
}

void FileResource___ObjInit_1(FileResource* __this, ::app::Uno::UX::FileSource* file)
{
    ::app::Uno::UX::FileSource___ObjInit(__this, ::uPtr< ::app::Uno::UX::FileSource*>(file)->Name);
    __this->_file = file;
}

FileResource* FileResource__New_1(::uStatic* __this, ::app::Uno::UX::FileSource* file)
{
    FileResource* inst = (FileResource*)::uAllocObject(sizeof(FileResource), FileResource__typeof());
    inst->_ObjInit_1(file);
    return inst;
}

::app::Uno::IO::Stream* FileResource__OpenRead(FileResource* __this)
{
    return ::uPtr< ::app::Uno::UX::FileSource*>(__this->_file)->OpenRead();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
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
    type->__fp_get_State = (int(*)(::app::Fuse::Resources::ImageSource*))HttpImageSource__get_State;
    type->__fp_GetTexture = (::app::Uno::Graphics::Texture2D*(*)(::app::Fuse::Resources::ImageSource*))HttpImageSource__GetTexture;
    type->__fp_OnPinChanged = (void(*)(::app::Fuse::Resources::ImageSource*))HttpImageSource__OnPinChanged;
    type->__fp_Reload = (void(*)(::app::Fuse::Resources::ImageSource*))HttpImageSource__Reload;

    type->SetStrongRefs(
        "_proxy", offsetof(HttpImageSource, _proxy));

    type->SetFields(1,
        ::uNewField("_proxy", NULL, offsetof(HttpImageSource, _proxy), ::app::Fuse::Resources::ProxyImageSource__typeof()));

    type->SetFunctions(9,
        ::uNewFunction("get_Density", HttpImageSource__get_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Policy", HttpImageSource__get_Policy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunction("get_Url", HttpImageSource__get_Url, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", HttpImageSource__New_1, 0, true, HttpImageSource__typeof()),
        ::uNewFunction(".ctor", HttpImageSource__New_2, 0, true, HttpImageSource__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_DefaultPolicy", HttpImageSource__set_DefaultPolicy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunctionVoid("set_Density", HttpImageSource__set_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Policy", HttpImageSource__set_Policy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunctionVoid("set_Url", HttpImageSource__set_Url, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void HttpImageSource___ObjInit_1(HttpImageSource* __this)
{
    ::app::Fuse::Resources::ImageSource___ObjInit(__this);
    __this->_proxy = ::app::Fuse::Resources::ProxyImageSource__New_1(NULL, (::app::Fuse::Resources::ImageSource*)__this);
}

void HttpImageSource___ObjInit_2(HttpImageSource* __this, ::uString* url)
{
    ::app::Fuse::Resources::ImageSource___ObjInit(__this);
    __this->_proxy = ::app::Fuse::Resources::ProxyImageSource__New_1(NULL, (::app::Fuse::Resources::ImageSource*)__this);
    __this->Url(url);
}

float HttpImageSource__get_Density(HttpImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Density();
}

::app::Uno::Int2 HttpImageSource__get_PixelSize(HttpImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->PixelSize();
}

::app::Fuse::Resources::MemoryPolicy* HttpImageSource__get_Policy(HttpImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Policy();
}

::app::Uno::Float2 HttpImageSource__get_Size(HttpImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Size();
}

float HttpImageSource__get_SizeDensity(HttpImageSource* __this)
{
    return __this->Density();
}

int HttpImageSource__get_State(HttpImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->State();
}

::uString* HttpImageSource__get_Url(HttpImageSource* __this)
{
    return (::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Impl() == NULL) ? ::uGetConstString("") : ::uPtr< ::app::Fuse::Resources::HttpImageSourceImpl*>(::uAs< ::app::Fuse::Resources::HttpImageSourceImpl*>(::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Impl(), ::app::Fuse::Resources::HttpImageSourceImpl__typeof()))->Url();
}

::app::Uno::Graphics::Texture2D* HttpImageSource__GetTexture(HttpImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->GetTexture();
}

HttpImageSource* HttpImageSource__New_1(::uStatic* __this)
{
    HttpImageSource* inst = (HttpImageSource*)::uAllocObject(sizeof(HttpImageSource), HttpImageSource__typeof());
    inst->_ObjInit_1();
    return inst;
}

HttpImageSource* HttpImageSource__New_2(::uStatic* __this, ::uString* url)
{
    HttpImageSource* inst = (HttpImageSource*)::uAllocObject(sizeof(HttpImageSource), HttpImageSource__typeof());
    inst->_ObjInit_2(url);
    return inst;
}

void HttpImageSource__OnPinChanged(HttpImageSource* __this)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->OnPinChanged();
}

void HttpImageSource__Reload(HttpImageSource* __this)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Reload();
}

void HttpImageSource__set_DefaultPolicy(HttpImageSource* __this, ::app::Fuse::Resources::MemoryPolicy* value)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->DefaultSetPolicy(value);
}

void HttpImageSource__set_Density(HttpImageSource* __this, float value)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Density(value);
}

void HttpImageSource__set_Policy(HttpImageSource* __this, ::app::Fuse::Resources::MemoryPolicy* value)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Policy(value);
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

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_*> HttpImageSourceCache___cache;

HttpImageSourceCache__uType* HttpImageSourceCache__typeof()
{
    static ::uStaticStrong<HttpImageSourceCache__uType*> type;
    if (type != NULL) return type;

    type = (HttpImageSourceCache__uType*)::uAllocClassType(sizeof(HttpImageSourceCache__uType), "Fuse.Resources.HttpImageSourceCache");

    type->SetFields(1,
        ::uNewField("_cache", &HttpImageSourceCache___cache, 0, ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof()));

    type->SetFunctions(1,
        ::uNewFunction("GetUrl", HttpImageSourceCache__GetUrl, 0, true, ::app::Fuse::Resources::HttpImageSourceImpl__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
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

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
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

    type->SetFields(2,
        ::uNewField("_contentType", NULL, offsetof(HttpImageSourceImpl, _contentType), ::app::Uno::String__typeof()),
        ::uNewField("_url", NULL, offsetof(HttpImageSourceImpl, _url), ::app::Uno::String__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("Fail", HttpImageSourceImpl__Fail, 0, false, ::app::Uno::String__typeof(), ::app::Uno::Exception__typeof()),
        ::uNewFunction("get_Url", HttpImageSourceImpl__get_Url, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("HttpCallback", HttpImageSourceImpl__HttpCallback, 0, false, ::app::Experimental::Http::HttpResponseHeader__typeof(), ::app::Uno::Buffer__typeof()),
        ::uNewFunctionVoid("LoadFailed", HttpImageSourceImpl__LoadFailed, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", HttpImageSourceImpl__New_1, 0, true, HttpImageSourceImpl__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
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
        __this->Fail(::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("HttpImageSource-failed-status: "), ::uBox< int>(::app::Uno::Int__typeof(), ::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(response)->StatusCode())), ::uGetConstString(" ")), ::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(response)->ReasonPhrase()), NULL);
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
    __this->Fail(::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("HttpImageSource-protocol-failure: "), reason), NULL);
}

HttpImageSourceImpl* HttpImageSourceImpl__New_1(::uStatic* __this, ::uString* url)
{
    HttpImageSourceImpl* inst = (HttpImageSourceImpl*)::uAllocObject(sizeof(HttpImageSourceImpl), HttpImageSourceImpl__typeof());
    inst->_ObjInit_2(url);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ImageSource__uType* ImageSource__typeof()
{
    static ::uStaticStrong<ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (ImageSource__uType*)::uAllocClassType(sizeof(ImageSource__uType), "Fuse.Resources.ImageSource", false, 0, 2, 0);

    type->__fp_OnPinChanged = ImageSource__OnPinChanged;
    type->__fp_Reload = ImageSource__Reload;

    type->SetStrongRefs(
        "Changed", offsetof(ImageSource, Changed),
        "Error", offsetof(ImageSource, Error));

    type->SetFields(1,
        ::uNewField("_pinCount", NULL, offsetof(ImageSource, _pinCount), ::app::Uno::Int__typeof()));

    type->SetFunctions(18,
        ::uNewFunctionVoid("add_Changed", ImageSource__add_Changed, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_Error", ImageSource__add_Error, 0, false, ::app::Fuse::Resources::ImageSourceErrorHandler__typeof()),
        ::uNewFunction("get_IsPinned", ImageSource__get_IsPinned, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_PixelSize", type->__fp_get_PixelSize, offsetof(ImageSource__uType, __fp_get_PixelSize), false, ::app::Uno::Int2__typeof()),
        ::uNewFunction("get_Size", type->__fp_get_Size, offsetof(ImageSource__uType, __fp_get_Size), false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_SizeDensity", type->__fp_get_SizeDensity, offsetof(ImageSource__uType, __fp_get_SizeDensity), false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_State", type->__fp_get_State, offsetof(ImageSource__uType, __fp_get_State), false, ::app::Fuse::Resources::ImageSourceState__typeof()),
        ::uNewFunction("GetTexture", type->__fp_GetTexture, offsetof(ImageSource__uType, __fp_GetTexture), false, ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewFunctionVoid("OnChanged", ImageSource__OnChanged, 0, false),
        ::uNewFunctionVoid("OnError", ImageSource__OnError, 0, false, ::app::Uno::String__typeof(), ::app::Uno::Exception__typeof()),
        ::uNewFunctionVoid("OnPinChanged", type->__fp_OnPinChanged, offsetof(ImageSource__uType, __fp_OnPinChanged), false),
        ::uNewFunctionVoid("Pin", ImageSource__Pin, 0, false),
        ::uNewFunctionVoid("ProxyChanged", ImageSource__ProxyChanged, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("ProxyError", ImageSource__ProxyError, 0, false, ::uObject__typeof(), ::app::Fuse::Resources::ImageSourceErrorArgs__typeof()),
        ::uNewFunctionVoid("Reload", type->__fp_Reload, offsetof(ImageSource__uType, __fp_Reload), false),
        ::uNewFunctionVoid("remove_Changed", ImageSource__remove_Changed, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_Error", ImageSource__remove_Error, 0, false, ::app::Fuse::Resources::ImageSourceErrorHandler__typeof()),
        ::uNewFunctionVoid("Unpin", ImageSource__Unpin, 0, false));

    ::uRegisterType(type);
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

void ImageSource__Reload(ImageSource* __this)
{
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

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
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

    type->SetFields(2,
        ::uNewField("ExceptionCause", NULL, offsetof(ImageSourceErrorArgs, ExceptionCause), ::app::Uno::Exception__typeof()),
        ::uNewField("Reason", NULL, offsetof(ImageSourceErrorArgs, Reason), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ImageSourceErrorArgs__New_2, 0, true, ImageSourceErrorArgs__typeof()));

    ::uRegisterType(type);
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

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ImageSourceErrorHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Resources.ImageSourceErrorHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Resources::ImageSourceErrorArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* ImageSourceState__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Resources.ImageSourceState", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "Pending", 0LL,
        "Ready", 1LL,
        "Loading", 2LL,
        "Failed", 3LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMemoryResource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Resources.IMemoryResource");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ISoftDisposable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Resources.ISoftDisposable");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
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
    type->__fp_get_State = (int(*)(::app::Fuse::Resources::ImageSource*))LoadingImageSource__get_State;
    type->__fp_GetTexture = (::app::Uno::Graphics::Texture2D*(*)(::app::Fuse::Resources::ImageSource*))LoadingImageSource__GetTexture;
    type->__fp_OnPinChanged = (void(*)(::app::Fuse::Resources::ImageSource*))LoadingImageSource__OnPinChanged;
    type->__fp_Reload = (void(*)(::app::Fuse::Resources::ImageSource*))LoadingImageSource__Reload;
    type->__interface_0.__fp_SoftDispose = (void(*)(void*))LoadingImageSource__Fuse_Resources_IMemoryResource_SoftDispose;
    type->__interface_0.__fp_get_MemoryPolicy = (::app::Fuse::Resources::MemoryPolicy*(*)(void*))LoadingImageSource__Fuse_Resources_IMemoryResource_get_MemoryPolicy;
    type->__interface_0.__fp_get_IsPinned = (bool(*)(void*))LoadingImageSource__Fuse_Resources_IMemoryResource_get_IsPinned;
    type->__interface_0.__fp_get_LastUsed = (double(*)(void*))LoadingImageSource__Fuse_Resources_IMemoryResource_get_LastUsed;

    type->SetInterfaces(
        ::app::Fuse::Resources::IMemoryResource__typeof(), offsetof(LoadingImageSource__uType, __interface_0));

    type->SetStrongRefs(
        "_policy", offsetof(LoadingImageSource, _policy),
        "_texture", offsetof(LoadingImageSource, _texture));

    type->SetFields(9,
        ::uNewField("_density", NULL, offsetof(LoadingImageSource, _density), ::app::Uno::Float__typeof()),
        ::uNewField("_failed", NULL, offsetof(LoadingImageSource, _failed), ::app::Uno::Bool__typeof()),
        ::uNewField("_haveAction", NULL, offsetof(LoadingImageSource, _haveAction), ::app::Uno::Bool__typeof()),
        ::uNewField("_inDisposal", NULL, offsetof(LoadingImageSource, _inDisposal), ::app::Uno::Bool__typeof()),
        ::uNewField("_lastUsed", NULL, offsetof(LoadingImageSource, _lastUsed), ::app::Uno::Double__typeof()),
        ::uNewField("_loading", NULL, offsetof(LoadingImageSource, _loading), ::app::Uno::Bool__typeof()),
        ::uNewField("_policy", NULL, offsetof(LoadingImageSource, _policy), ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewField("_texture", NULL, offsetof(LoadingImageSource, _texture), ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewField("_textureSize", NULL, offsetof(LoadingImageSource, _textureSize), ::app::Uno::Int2__typeof()));

    type->SetFunctions(14,
        ::uNewFunctionVoid("AsyncLoadTexture", LoadingImageSource__AsyncLoadTexture, 0, false),
        ::uNewFunctionVoid("AttemptLoad", type->__fp_AttemptLoad, offsetof(LoadingImageSource__uType, __fp_AttemptLoad), false),
        ::uNewFunctionVoid("ChangePrep", LoadingImageSource__ChangePrep, 0, false),
        ::uNewFunctionVoid("Cleanup", LoadingImageSource__Cleanup, 0, false, ::app::Fuse::Resources::LoadingImageSource_CleanupReason__typeof()),
        ::uNewFunction("Fuse.Resources.IMemoryResource.get_IsPinned", LoadingImageSource__Fuse_Resources_IMemoryResource_get_IsPinned, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("Fuse.Resources.IMemoryResource.get_LastUsed", LoadingImageSource__Fuse_Resources_IMemoryResource_get_LastUsed, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("Fuse.Resources.IMemoryResource.get_MemoryPolicy", LoadingImageSource__Fuse_Resources_IMemoryResource_get_MemoryPolicy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunctionVoid("Fuse.Resources.IMemoryResource.SoftDispose", LoadingImageSource__Fuse_Resources_IMemoryResource_SoftDispose, 0, false),
        ::uNewFunction("get_IsLoaded", LoadingImageSource__get_IsLoaded, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Policy", LoadingImageSource__get_Policy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunctionVoid("LoadTexture", LoadingImageSource__LoadTexture, 0, false),
        ::uNewFunctionVoid("MarkUsed", LoadingImageSource__MarkUsed, 0, false),
        ::uNewFunctionVoid("set_Policy", LoadingImageSource__set_Policy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunctionVoid("SetTexture", LoadingImageSource__SetTexture, 0, false, ::app::Uno::Graphics::Texture2D__typeof()));

    ::uRegisterType(type);
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

void LoadingImageSource__ChangePrep(LoadingImageSource* __this)
{
    __this->Cleanup(0);
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
        ::app::Fuse::Resources::DisposalManager__Remove(NULL, (::uObject*)__this);
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

int LoadingImageSource__get_State(LoadingImageSource* __this)
{
    if (__this->_texture != NULL)
    {
        return 1;
    }

    if (__this->_failed)
    {
        return 3;
    }

    if (__this->_loading)
    {
        return 2;
    }

    return 0;
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

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
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

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< MemoryPolicy*> MemoryPolicy__PreloadRetain;
::uStaticStrong< MemoryPolicy*> MemoryPolicy__UnloadUnused;

MemoryPolicy__uType* MemoryPolicy__typeof()
{
    static ::uStaticStrong<MemoryPolicy__uType*> type;
    if (type != NULL) return type;

    type = (MemoryPolicy__uType*)::uAllocClassType(sizeof(MemoryPolicy__uType), "Fuse.Resources.MemoryPolicy", false, 0, 0, 0);

    type->SetFields(2,
        ::uNewField("PreloadRetain", &MemoryPolicy__PreloadRetain, 0, MemoryPolicy__typeof()),
        ::uNewField("UnloadUnused", &MemoryPolicy__UnloadUnused, 0, MemoryPolicy__typeof()));

    type->SetFunctions(12,
        ::uNewFunction("get_AllowPinnedFree", MemoryPolicy__get_AllowPinnedFree, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_BundlePreload", MemoryPolicy__get_BundlePreload, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_UnloadInBackground", MemoryPolicy__get_UnloadInBackground, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_UnpinInvisible", MemoryPolicy__get_UnpinInvisible, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_UnusedTimeout", MemoryPolicy__get_UnusedTimeout, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction(".ctor", MemoryPolicy__New_1, 0, true, MemoryPolicy__typeof()),
        ::uNewFunctionVoid("set_AllowPinnedFree", MemoryPolicy__set_AllowPinnedFree, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_BundlePreload", MemoryPolicy__set_BundlePreload, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_UnloadInBackground", MemoryPolicy__set_UnloadInBackground, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_UnpinInvisible", MemoryPolicy__set_UnpinInvisible, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_UnusedTimeout", MemoryPolicy__set_UnusedTimeout, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("ShouldSoftDispose", MemoryPolicy__ShouldSoftDispose, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Resources::DisposalRequest__typeof(), ::app::Fuse::Resources::IMemoryResource__typeof()));

    ::uRegisterType(type);
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

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
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
    type->__fp_get_State = (int(*)(::app::Fuse::Resources::ImageSource*))MultiDensityImageSource__get_State;
    type->__fp_GetTexture = (::app::Uno::Graphics::Texture2D*(*)(::app::Fuse::Resources::ImageSource*))MultiDensityImageSource__GetTexture;
    type->__fp_OnPinChanged = (void(*)(::app::Fuse::Resources::ImageSource*))MultiDensityImageSource__OnPinChanged;
    type->__fp_Reload = (void(*)(::app::Fuse::Resources::ImageSource*))MultiDensityImageSource__Reload;

    type->SetStrongRefs(
        "_active", offsetof(MultiDensityImageSource, _active),
        "_proxy", offsetof(MultiDensityImageSource, _proxy),
        "_sources", offsetof(MultiDensityImageSource, _sources));

    type->SetFields(5,
        ::uNewField("_active", NULL, offsetof(MultiDensityImageSource, _active), ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewField("_hasMatchDensity", NULL, offsetof(MultiDensityImageSource, _hasMatchDensity), ::app::Uno::Bool__typeof()),
        ::uNewField("_matchDensity", NULL, offsetof(MultiDensityImageSource, _matchDensity), ::app::Uno::Float__typeof()),
        ::uNewField("_proxy", NULL, offsetof(MultiDensityImageSource, _proxy), ::app::Fuse::Resources::ProxyImageSource__typeof()),
        ::uNewField("_sources", NULL, offsetof(MultiDensityImageSource, _sources), ::app::Uno::Collections::ObservableList__Fuse_Resources_ImageSource__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("get_MatchDensity", MultiDensityImageSource__get_MatchDensity, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Policy", MultiDensityImageSource__get_Policy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunction("get_Sources", MultiDensityImageSource__get_Sources, 0, false, ::app::Uno::Collections::IList__Fuse_Resources_ImageSource__typeof()),
        ::uNewFunction(".ctor", MultiDensityImageSource__New_1, 0, true, MultiDensityImageSource__typeof()),
        ::uNewFunctionVoid("OnImageAdded", MultiDensityImageSource__OnImageAdded, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunctionVoid("OnImageRemoved", MultiDensityImageSource__OnImageRemoved, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunctionVoid("SelectActive", MultiDensityImageSource__SelectActive, 0, false),
        ::uNewFunctionVoid("set_MatchDensity", MultiDensityImageSource__set_MatchDensity, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Policy", MultiDensityImageSource__set_Policy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunctionVoid("SwapActive", MultiDensityImageSource__SwapActive, 0, false, ::app::Fuse::Resources::ImageSource__typeof()));

    ::uRegisterType(type);
    return type;
}

void MultiDensityImageSource___ObjInit_1(MultiDensityImageSource* __this)
{
    ::app::Fuse::Resources::ImageSource___ObjInit(__this);
    __this->_sources = ::app::Uno::Collections::ObservableList__Fuse_Resources_ImageSource__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Resources_ImageSource__typeof(), (const void*)MultiDensityImageSource__OnImageAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Resources_ImageSource__typeof(), (const void*)MultiDensityImageSource__OnImageRemoved, __this));
    __this->_proxy = ::app::Fuse::Resources::ProxyImageSource__New_1(NULL, (::app::Fuse::Resources::ImageSource*)__this);
}

float MultiDensityImageSource__get_MatchDensity(MultiDensityImageSource* __this)
{
    return __this->_matchDensity;
}

::app::Uno::Int2 MultiDensityImageSource__get_PixelSize(MultiDensityImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->PixelSize();
}

::app::Fuse::Resources::MemoryPolicy* MultiDensityImageSource__get_Policy(MultiDensityImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Policy();
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

int MultiDensityImageSource__get_State(MultiDensityImageSource* __this)
{
    return ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->State();
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

void MultiDensityImageSource__Reload(MultiDensityImageSource* __this)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Reload();
}

void MultiDensityImageSource__SelectActive(MultiDensityImageSource* __this)
{
    float screen = __this->_hasMatchDensity ? __this->_matchDensity : ::app::Fuse::RootViewport__get_DefaultDensity(NULL);
    float diff = FLT_INF;
    ::app::Fuse::Resources::ImageSource* use = NULL;

    for (::uObject* enum_123 = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Resources_ImageSource*>(__this->_sources)->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Resources::ImageSource* source = ::app::Uno::Collections::IEnumerator__Fuse_Resources_ImageSource::Current(::uPtr< ::uObject*>(enum_123));
        float d = ::app::Uno::Math__Abs_1(NULL, ::uPtr< ::app::Fuse::Resources::ImageSource*>(source)->SizeDensity() - screen);

        if (d < diff)
        {
            use = source;
            diff = d;
        }
    }

    __this->SwapActive(use);
}

void MultiDensityImageSource__set_MatchDensity(MultiDensityImageSource* __this, float value)
{
    if (__this->_hasMatchDensity && (__this->_matchDensity == value))
    {
        return;
    }

    __this->_hasMatchDensity = true;
    __this->_matchDensity = value;
    __this->SelectActive();
}

void MultiDensityImageSource__set_Policy(MultiDensityImageSource* __this, ::app::Fuse::Resources::MemoryPolicy* value)
{
    ::uPtr< ::app::Fuse::Resources::ProxyImageSource*>(__this->_proxy)->Policy(value);
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

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
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

    type->SetFields(6,
        ::uNewField("_density", NULL, offsetof(ProxyImageSource, _density), ::app::Uno::Float__typeof()),
        ::uNewField("_hasDensity", NULL, offsetof(ProxyImageSource, _hasDensity), ::app::Uno::Bool__typeof()),
        ::uNewField("_impl", NULL, offsetof(ProxyImageSource, _impl), ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewField("_isDefaultPolicy", NULL, offsetof(ProxyImageSource, _isDefaultPolicy), ::app::Uno::Bool__typeof()),
        ::uNewField("_outer", NULL, offsetof(ProxyImageSource, _outer), ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewField("_policy", NULL, offsetof(ProxyImageSource, _policy), ::app::Fuse::Resources::MemoryPolicy__typeof()));

    type->SetFunctions(18,
        ::uNewFunctionVoid("Attach", ProxyImageSource__Attach, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunctionVoid("DefaultSetPolicy", ProxyImageSource__DefaultSetPolicy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunction("get_Density", ProxyImageSource__get_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Impl", ProxyImageSource__get_Impl, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunction("get_PixelSize", ProxyImageSource__get_PixelSize, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunction("get_Policy", ProxyImageSource__get_Policy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunction("get_Size", ProxyImageSource__get_Size, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_State", ProxyImageSource__get_State, 0, false, ::app::Fuse::Resources::ImageSourceState__typeof()),
        ::uNewFunction("GetTexture", ProxyImageSource__GetTexture, 0, false, ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewFunction(".ctor", ProxyImageSource__New_1, 0, true, ProxyImageSource__typeof(), ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunctionVoid("OnPinChanged", ProxyImageSource__OnPinChanged, 0, false),
        ::uNewFunctionVoid("ProxyOnChanged", ProxyImageSource__ProxyOnChanged, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("ProxyOnError", ProxyImageSource__ProxyOnError, 0, false, ::uObject__typeof(), ::app::Fuse::Resources::ImageSourceErrorArgs__typeof()),
        ::uNewFunctionVoid("Release", ProxyImageSource__Release, 0, false),
        ::uNewFunctionVoid("Reload", ProxyImageSource__Reload, 0, false),
        ::uNewFunctionVoid("set_Density", ProxyImageSource__set_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Policy", ProxyImageSource__set_Policy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunctionVoid("UpdatePolicy", ProxyImageSource__UpdatePolicy, 0, false));

    ::uRegisterType(type);
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

int ProxyImageSource__get_State(ProxyImageSource* __this)
{
    return (__this->_impl == NULL) ? 0 : ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->State();
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

void ProxyImageSource__Reload(ProxyImageSource* __this)
{
    if (__this->_impl != NULL)
    {
        ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->_impl)->Reload();
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

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceBool__uType* ResourceBool__typeof()
{
    static ::uStaticStrong<ResourceBool__uType*> type;
    if (type != NULL) return type;

    type = (ResourceBool__uType*)::uAllocClassType(sizeof(ResourceBool__uType), "Fuse.Resources.ResourceBool", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Resources::ResourceSetter__bool__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ResourceBool__New_1, 0, true, ResourceBool__typeof()));

    ::uRegisterType(type);
    return type;
}

void ResourceBool___ObjInit_2(ResourceBool* __this)
{
    ::app::Fuse::Resources::ResourceSetter__bool___ObjInit_1(__this);
}

ResourceBool* ResourceBool__New_1(::uStatic* __this)
{
    ResourceBool* inst = (ResourceBool*)::uAllocObject(sizeof(ResourceBool), ResourceBool__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceFloat__uType* ResourceFloat__typeof()
{
    static ::uStaticStrong<ResourceFloat__uType*> type;
    if (type != NULL) return type;

    type = (ResourceFloat__uType*)::uAllocClassType(sizeof(ResourceFloat__uType), "Fuse.Resources.ResourceFloat", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Resources::ResourceSetter__float__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ResourceFloat__New_1, 0, true, ResourceFloat__typeof()));

    ::uRegisterType(type);
    return type;
}

void ResourceFloat___ObjInit_2(ResourceFloat* __this)
{
    ::app::Fuse::Resources::ResourceSetter__float___ObjInit_1(__this);
}

ResourceFloat* ResourceFloat__New_1(::uStatic* __this)
{
    ResourceFloat* inst = (ResourceFloat*)::uAllocObject(sizeof(ResourceFloat), ResourceFloat__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceFloat2__uType* ResourceFloat2__typeof()
{
    static ::uStaticStrong<ResourceFloat2__uType*> type;
    if (type != NULL) return type;

    type = (ResourceFloat2__uType*)::uAllocClassType(sizeof(ResourceFloat2__uType), "Fuse.Resources.ResourceFloat2", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Resources::ResourceSetter__float2__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ResourceFloat2__New_1, 0, true, ResourceFloat2__typeof()));

    ::uRegisterType(type);
    return type;
}

void ResourceFloat2___ObjInit_2(ResourceFloat2* __this)
{
    ::app::Fuse::Resources::ResourceSetter__float2___ObjInit_1(__this);
}

ResourceFloat2* ResourceFloat2__New_1(::uStatic* __this)
{
    ResourceFloat2* inst = (ResourceFloat2*)::uAllocObject(sizeof(ResourceFloat2), ResourceFloat2__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceFloat3__uType* ResourceFloat3__typeof()
{
    static ::uStaticStrong<ResourceFloat3__uType*> type;
    if (type != NULL) return type;

    type = (ResourceFloat3__uType*)::uAllocClassType(sizeof(ResourceFloat3__uType), "Fuse.Resources.ResourceFloat3", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Resources::ResourceSetter__float3__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ResourceFloat3__New_1, 0, true, ResourceFloat3__typeof()));

    ::uRegisterType(type);
    return type;
}

void ResourceFloat3___ObjInit_2(ResourceFloat3* __this)
{
    ::app::Fuse::Resources::ResourceSetter__float3___ObjInit_1(__this);
}

ResourceFloat3* ResourceFloat3__New_1(::uStatic* __this)
{
    ResourceFloat3* inst = (ResourceFloat3*)::uAllocObject(sizeof(ResourceFloat3), ResourceFloat3__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceFloat4__uType* ResourceFloat4__typeof()
{
    static ::uStaticStrong<ResourceFloat4__uType*> type;
    if (type != NULL) return type;

    type = (ResourceFloat4__uType*)::uAllocClassType(sizeof(ResourceFloat4__uType), "Fuse.Resources.ResourceFloat4", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Resources::ResourceSetter__float4__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ResourceFloat4__New_1, 0, true, ResourceFloat4__typeof()));

    ::uRegisterType(type);
    return type;
}

void ResourceFloat4___ObjInit_2(ResourceFloat4* __this)
{
    ::app::Fuse::Resources::ResourceSetter__float4___ObjInit_1(__this);
}

ResourceFloat4* ResourceFloat4__New_1(::uStatic* __this)
{
    ResourceFloat4* inst = (ResourceFloat4*)::uAllocObject(sizeof(ResourceFloat4), ResourceFloat4__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceObject__uType* ResourceObject__typeof()
{
    static ::uStaticStrong<ResourceObject__uType*> type;
    if (type != NULL) return type;

    type = (ResourceObject__uType*)::uAllocClassType(sizeof(ResourceObject__uType), "Fuse.Resources.ResourceObject", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Resources::ResourceSetter__object__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ResourceObject__New_1, 0, true, ResourceObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void ResourceObject___ObjInit_2(ResourceObject* __this)
{
    ::app::Fuse::Resources::ResourceSetter__object___ObjInit_1(__this);
}

ResourceObject* ResourceObject__New_1(::uStatic* __this)
{
    ResourceObject* inst = (ResourceObject*)::uAllocObject(sizeof(ResourceObject), ResourceObject__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*> ResourceRegistry___handlers;

ResourceRegistry__uType* ResourceRegistry__typeof()
{
    static ::uStaticStrong<ResourceRegistry__uType*> type;
    if (type != NULL) return type;

    type = (ResourceRegistry__uType*)::uAllocClassType(sizeof(ResourceRegistry__uType), "Fuse.Resources.ResourceRegistry");

    type->SetFields(1,
        ::uNewField("_handlers", &ResourceRegistry___handlers, 0, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action___typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("AddResourceChangedHandler", ResourceRegistry__AddResourceChangedHandler, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Action__typeof()),
        ::uNewFunctionVoid("NotifyResourceChanged", ResourceRegistry__NotifyResourceChanged, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("RemoveResourceChangedHandler", ResourceRegistry__RemoveResourceChangedHandler, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Action__typeof()));

    ::uRegisterType(type);
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

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceString__uType* ResourceString__typeof()
{
    static ::uStaticStrong<ResourceString__uType*> type;
    if (type != NULL) return type;

    type = (ResourceString__uType*)::uAllocClassType(sizeof(ResourceString__uType), "Fuse.Resources.ResourceString", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Resources::ResourceSetter__string__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ResourceString__New_1, 0, true, ResourceString__typeof()));

    ::uRegisterType(type);
    return type;
}

void ResourceString___ObjInit_2(ResourceString* __this)
{
    ::app::Fuse::Resources::ResourceSetter__string___ObjInit_1(__this);
}

ResourceString* ResourceString__New_1(::uStatic* __this)
{
    ResourceString* inst = (ResourceString*)::uAllocObject(sizeof(ResourceString), ResourceString__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RetainDisposalPolicy__uType* RetainDisposalPolicy__typeof()
{
    static ::uStaticStrong<RetainDisposalPolicy__uType*> type;
    if (type != NULL) return type;

    type = (RetainDisposalPolicy__uType*)::uAllocClassType(sizeof(RetainDisposalPolicy__uType), "Fuse.Resources.RetainDisposalPolicy", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Resources::DisposalPolicy__typeof());
    type->__fp_CanDispose = (bool(*)(::app::Fuse::Resources::DisposalPolicy*, int, bool))RetainDisposalPolicy__CanDispose;
    type->__fp_Clone = (::app::Fuse::Resources::DisposalPolicy*(*)(::app::Fuse::Resources::DisposalPolicy*))RetainDisposalPolicy__Clone;
    type->__fp_MarkUsed = (void(*)(::app::Fuse::Resources::DisposalPolicy*))RetainDisposalPolicy__MarkUsed;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", RetainDisposalPolicy__New_1, 0, true, RetainDisposalPolicy__typeof()));

    ::uRegisterType(type);
    return type;
}

void RetainDisposalPolicy___ObjInit_1(RetainDisposalPolicy* __this)
{
    ::app::Fuse::Resources::DisposalPolicy___ObjInit(__this);
}

bool RetainDisposalPolicy__CanDispose(RetainDisposalPolicy* __this, int dr, bool pinned)
{
    return false;
}

::app::Fuse::Resources::DisposalPolicy* RetainDisposalPolicy__Clone(RetainDisposalPolicy* __this)
{
    return (::app::Fuse::Resources::DisposalPolicy*)RetainDisposalPolicy__New_1(NULL);
}

void RetainDisposalPolicy__MarkUsed(RetainDisposalPolicy* __this)
{
}

RetainDisposalPolicy* RetainDisposalPolicy__New_1(::uStatic* __this)
{
    RetainDisposalPolicy* inst = (RetainDisposalPolicy*)::uAllocObject(sizeof(RetainDisposalPolicy), RetainDisposalPolicy__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
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
    type->__fp_get_State = (int(*)(::app::Fuse::Resources::ImageSource*))TextureImageSource__get_State;
    type->__fp_GetTexture = (::app::Uno::Graphics::Texture2D*(*)(::app::Fuse::Resources::ImageSource*))TextureImageSource__GetTexture;

    type->SetStrongRefs(
        "_texture", offsetof(TextureImageSource, _texture));

    type->SetFields(2,
        ::uNewField("_density", NULL, offsetof(TextureImageSource, _density), ::app::Uno::Float__typeof()),
        ::uNewField("_texture", NULL, offsetof(TextureImageSource, _texture), ::app::Uno::Graphics::Texture2D__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_Density", TextureImageSource__get_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Texture", TextureImageSource__get_Texture, 0, false, ::app::Uno::Graphics::Texture2D__typeof()),
        ::uNewFunction(".ctor", TextureImageSource__New_1, 0, true, TextureImageSource__typeof()),
        ::uNewFunctionVoid("set_Density", TextureImageSource__set_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Texture", TextureImageSource__set_Texture, 0, false, ::app::Uno::Graphics::Texture2D__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextureImageSource___ObjInit_1(TextureImageSource* __this)
{
    __this->_density = 1.0f;
    ::app::Fuse::Resources::ImageSource___ObjInit(__this);
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

int TextureImageSource__get_State(TextureImageSource* __this)
{
    if (__this->_texture != NULL)
    {
        return 1;
    }

    return 0;
}

::app::Uno::Graphics::Texture2D* TextureImageSource__get_Texture(TextureImageSource* __this)
{
    return __this->_texture;
}

::app::Uno::Graphics::Texture2D* TextureImageSource__GetTexture(TextureImageSource* __this)
{
    return __this->_texture;
}

TextureImageSource* TextureImageSource__New_1(::uStatic* __this)
{
    TextureImageSource* inst = (TextureImageSource*)::uAllocObject(sizeof(TextureImageSource), TextureImageSource__typeof());
    inst->_ObjInit_1();
    return inst;
}

void TextureImageSource__set_Density(TextureImageSource* __this, float value)
{
    if (__this->_density != value)
    {
        __this->_density = value;
        __this->OnChanged();
    }
}

void TextureImageSource__set_Texture(TextureImageSource* __this, ::app::Uno::Graphics::Texture2D* value)
{
    if (__this->_texture != value)
    {
        __this->_texture = value;
        __this->OnChanged();
    }
}

}}}
