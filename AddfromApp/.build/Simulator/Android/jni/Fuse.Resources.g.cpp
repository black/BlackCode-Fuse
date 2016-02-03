// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.Http.HttpLoader.h>
#include <Experimental.Http.HttpResponseHeader.h>
#include <Experimental.TextureLoader.TextureLoader.h>
#include <Fuse.Node.h>
#include <Fuse.Resources.DisposalManager.h>
#include <Fuse.Resources.DisposalPolicy.h>
#include <Fuse.Resources.DisposalRequest.h>
#include <Fuse.Resources.DoubleResourceConverter.h>
#include <Fuse.Resources.ExpirationDisposalPolicy.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.FileImageSourceCache.h>
#include <Fuse.Resources.FileImageSourceImpl.h>
#include <Fuse.Resources.FileResource.h>
#include <Fuse.Resources.FloatResourceConverter.h>
#include <Fuse.Resources.GenericResourceConverter-1.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.HttpImageSourceCache.h>
#include <Fuse.Resources.HttpImageSourceImpl.h>
#include <Fuse.Resources.IDeferredDisposable.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.ImageSourceErrorArgs.h>
#include <Fuse.Resources.ImageSourceErrorHandler.h>
#include <Fuse.Resources.ImageSourceState.h>
#include <Fuse.Resources.IMemoryResource.h>
#include <Fuse.Resources.IntResourceConverter.h>
#include <Fuse.Resources.IResourceConverter-1.h>
#include <Fuse.Resources.ISoftDisposable.h>
#include <Fuse.Resources.LoadingImageSource.CleanupReason.h>
#include <Fuse.Resources.LoadingImageSource.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.Resources.MultiDensityImageSource.h>
#include <Fuse.Resources.NumericResourceConverter-1.h>
#include <Fuse.Resources.PolicyDeferredDisposable.h>
#include <Fuse.Resources.ProxyImageSource.h>
#include <Fuse.Resources.ResourceBinding-1.h>
#include <Fuse.Resources.ResourceBool.h>
#include <Fuse.Resources.ResourceConverters.h>
#include <Fuse.Resources.ResourceFloat.h>
#include <Fuse.Resources.ResourceFloat2.h>
#include <Fuse.Resources.ResourceFloat3.h>
#include <Fuse.Resources.ResourceFloat4.h>
#include <Fuse.Resources.ResourceObject.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.Resources.ResourceSetter-1.h>
#include <Fuse.Resources.ResourceString.h>
#include <Fuse.Resources.RetainDisposalPolicy.h>
#include <Fuse.Resources.TextureImageSource.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.Stream.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
#include <Uno.WeakReference-1.h>
static uString* STRINGS[13];
static uType* TYPES[48];

namespace g{
namespace Fuse{
namespace Resources{

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Resources\$.uno(420)
// ---------------------------------------------------------------------

// protected enum LoadingImageSource.CleanupReason :420
uEnumType* LoadingImageSource__CleanupReason_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Resources.LoadingImageSource.CleanupReason", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Normal", 0LL,
        "Failed", 1LL,
        "Disposed", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(9)
// --------------------------------------------------------------

// internal static class DisposalManager :9
// {
// static DisposalManager() :9
static void DisposalManager__cctor__fn(uType* __type)
{
    DisposalManager::_items_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Resources.IMemoryResource>*/]));
    DisposalManager::_softDisposables_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Resources.ISoftDisposable>*/]));
}

uClassType* DisposalManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.DisposalManager", options);
    type->fp_cctor_ = DisposalManager__cctor__fn;
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Resources::IMemoryResource_typeof());
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Resources::ISoftDisposable_typeof());
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Fuse::Resources::IMemoryResource_typeof();
    ::TYPES[4] = ::g::Uno::Int_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Resources::DisposalManager::_actionAdded_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Resources::DisposalManager::_disposeAt_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Resources::IMemoryResource_typeof()), (uintptr_t)&::g::Fuse::Resources::DisposalManager::_items_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Resources::ISoftDisposable_typeof()), (uintptr_t)&::g::Fuse::Resources::DisposalManager::_softDisposables_, uFieldFlagsStatic);
    return type;
}

// public static void Add(Fuse.Resources.IMemoryResource item) :13
void DisposalManager__Add_fn(uObject* item)
{
    DisposalManager::Add(item);
}

// public static void Add(Fuse.Resources.ISoftDisposable item) :85
void DisposalManager__Add1_fn(uObject* item)
{
    DisposalManager::Add1(item);
}

// public static void Clean(Fuse.Resources.DisposalRequest dr) :65
void DisposalManager__Clean_fn(int* dr)
{
    DisposalManager::Clean(*dr);
}

// public static void Remove(Fuse.Resources.IMemoryResource item) :19
void DisposalManager__Remove_fn(uObject* item)
{
    DisposalManager::Remove(item);
}

// public static void Remove(Fuse.Resources.ISoftDisposable item) :90
void DisposalManager__Remove1_fn(uObject* item)
{
    DisposalManager::Remove1(item);
}

// private static void Update() :44
void DisposalManager__Update_fn()
{
    DisposalManager::Update();
}

// private static void VerifyAttach() :27
void DisposalManager__VerifyAttach_fn()
{
    DisposalManager::VerifyAttach();
}

bool DisposalManager::_actionAdded_;
int DisposalManager::_disposeAt_;
uSStrong< ::g::Uno::Collections::List*> DisposalManager::_items_;
uSStrong< ::g::Uno::Collections::List*> DisposalManager::_softDisposables_;

// public static void Add(Fuse.Resources.IMemoryResource item) [static] :13
void DisposalManager::Add(uObject* item)
{
    DisposalManager_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(DisposalManager::_items()), item);
    DisposalManager::VerifyAttach();
}

// public static void Add(Fuse.Resources.ISoftDisposable item) [static] :85
void DisposalManager::Add1(uObject* item)
{
    DisposalManager_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(DisposalManager::_softDisposables()), item);
}

// public static void Clean(Fuse.Resources.DisposalRequest dr) [static] :65
void DisposalManager::Clean(int dr)
{
    DisposalManager_typeof()->Init();
    uObject* ret1;
    uObject* ret2;

    for (int i = uPtr(DisposalManager::_items())->Count() - 1; i >= 0; --i)
    {
        uObject* item = (::g::Uno::Collections::List__get_Item_fn(uPtr(DisposalManager::_items()), uCRef<int>(i), &ret1), ret1);

        if (!uPtr(::g::Fuse::Resources::IMemoryResource::MemoryPolicy(uInterface(uPtr(item), ::TYPES[3/*Fuse.Resources.IMemoryResource*/])))->ShouldSoftDispose(dr, item))
            continue;

        uPtr(DisposalManager::_items())->RemoveAt(i);
        ::g::Fuse::Resources::IMemoryResource::SoftDispose(uInterface(uPtr(item), ::TYPES[3/*Fuse.Resources.IMemoryResource*/]));
    }

    if ((dr == 1) || (dr == 2))

        for (int i1 = 0; i1 < uPtr(DisposalManager::_softDisposables())->Count(); ++i1)
            ::g::Fuse::Resources::ISoftDisposable::SoftDispose(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(DisposalManager::_softDisposables()), uCRef<int>(i1), &ret2), ret2)), ::g::Fuse::Resources::ISoftDisposable_typeof()));
}

// public static void Remove(Fuse.Resources.IMemoryResource item) [static] :19
void DisposalManager::Remove(uObject* item)
{
    DisposalManager_typeof()->Init();
    bool ret3;
    ::g::Uno::Collections::List__Remove_fn(uPtr(DisposalManager::_items()), item, &ret3);
    DisposalManager::VerifyAttach();
}

// public static void Remove(Fuse.Resources.ISoftDisposable item) [static] :90
void DisposalManager::Remove1(uObject* item)
{
    DisposalManager_typeof()->Init();
    bool ret4;
    ::g::Uno::Collections::List__Remove_fn(uPtr(DisposalManager::_softDisposables()), item, &ret4);
}

// private static void Update() [static] :44
void DisposalManager::Update()
{
    DisposalManager_typeof()->Init();
    uObject* ret5;

    for (int i = 0; i < 2; ++i)
    {
        if (uPtr(DisposalManager::_items())->Count() == 0)
            return;

        DisposalManager::_disposeAt()++;

        if (DisposalManager::_disposeAt() >= uPtr(DisposalManager::_items())->Count())
            DisposalManager::_disposeAt() = 0;

        uObject* item = (::g::Uno::Collections::List__get_Item_fn(uPtr(DisposalManager::_items()), uCRef<int>(DisposalManager::_disposeAt()), &ret5), ret5);

        if (!uPtr(::g::Fuse::Resources::IMemoryResource::MemoryPolicy(uInterface(uPtr(item), ::TYPES[3/*Fuse.Resources.IMemoryResource*/])))->ShouldSoftDispose(0, item))
            continue;

        uPtr(DisposalManager::_items())->RemoveAt(DisposalManager::_disposeAt());
        ::g::Fuse::Resources::IMemoryResource::SoftDispose(uInterface(uPtr(item), ::TYPES[3/*Fuse.Resources.IMemoryResource*/]));
    }
}

// private static void VerifyAttach() [static] :27
void DisposalManager::VerifyAttach()
{
    DisposalManager_typeof()->Init();
    bool on = uPtr(DisposalManager::_items())->Count() > 0;

    if (on == DisposalManager::_actionAdded())
        return;

    if (on)
        ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)DisposalManager__Update_fn), 0);
    else
        ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)DisposalManager__Update_fn), 0);

    DisposalManager::_actionAdded() = on;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(105)
// ----------------------------------------------------------------

// internal abstract class DisposalPolicy :105
// {
DisposalPolicy_type* DisposalPolicy_typeof()
{
    static uSStrong<DisposalPolicy_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(DisposalPolicy);
    options.TypeSize = sizeof(DisposalPolicy_type);
    type = (DisposalPolicy_type*)uClassType::New("Fuse.Resources.DisposalPolicy", options);
    return type;
}

// protected generated DisposalPolicy() :105
void DisposalPolicy__ctor__fn(DisposalPolicy* __this)
{
    __this->ctor_();
}

// protected generated DisposalPolicy() [instance] :105
void DisposalPolicy::ctor_()
{
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(182)
// ----------------------------------------------------------------

// public enum DisposalRequest :182
uEnumType* DisposalRequest_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Resources.DisposalRequest", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Regular", 0LL,
        "Background", 1LL,
        "LowMemory", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(324)
// ----------------------------------------------------------------

// internal sealed class DoubleResourceConverter :324
// {
::g::Fuse::Resources::NumericResourceConverter_type* DoubleResourceConverter_typeof()
{
    static uSStrong< ::g::Fuse::Resources::NumericResourceConverter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DoubleResourceConverter);
    options.TypeSize = sizeof(::g::Fuse::Resources::NumericResourceConverter_type);
    type = (::g::Fuse::Resources::NumericResourceConverter_type*)uClassType::New("Fuse.Resources.DoubleResourceConverter", options);
    type->SetBase(::g::Fuse::Resources::NumericResourceConverter_typeof()->MakeType(::g::Uno::Double_typeof()));
    type->fp_ctor_ = (void*)DoubleResourceConverter__New1_fn;
    type->fp_Convert = (void(*)(::g::Fuse::Resources::NumericResourceConverter*, uObject*, uTRef))DoubleResourceConverter__Convert_fn;
    type->interface0.fp_Accept = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Resources::NumericResourceConverter__Accept_fn;
    type->interface0.fp_Convert = (void(*)(uObject*, uObject*, uTRef))DoubleResourceConverter__Convert_fn;
    type->SetInterfaces(
        ::g::Fuse::Resources::IResourceConverter_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Resources::NumericResourceConverter_type, interface0));
    return type;
}

// public generated DoubleResourceConverter() :324
void DoubleResourceConverter__ctor_1_fn(DoubleResourceConverter* __this)
{
    __this->ctor_1();
}

// public override sealed double Convert(object o) :326
void DoubleResourceConverter__Convert_fn(DoubleResourceConverter* __this, uObject* o, double* __retval)
{
    return *__retval = __this->InternConvert(o), void();
}

// public generated DoubleResourceConverter New() :324
void DoubleResourceConverter__New1_fn(DoubleResourceConverter** __retval)
{
    *__retval = DoubleResourceConverter::New1();
}

// public generated DoubleResourceConverter() [instance] :324
void DoubleResourceConverter::ctor_1()
{
    ctor_();
}

// public generated DoubleResourceConverter New() [static] :324
DoubleResourceConverter* DoubleResourceConverter::New1()
{
    DoubleResourceConverter* obj1 = (DoubleResourceConverter*)uNew(DoubleResourceConverter_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(112)
// ----------------------------------------------------------------

// internal sealed class ExpirationDisposalPolicy :112
// {
::g::Fuse::Resources::DisposalPolicy_type* ExpirationDisposalPolicy_typeof()
{
    static uSStrong< ::g::Fuse::Resources::DisposalPolicy_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ExpirationDisposalPolicy);
    options.TypeSize = sizeof(::g::Fuse::Resources::DisposalPolicy_type);
    type = (::g::Fuse::Resources::DisposalPolicy_type*)uClassType::New("Fuse.Resources.ExpirationDisposalPolicy", options);
    type->SetBase(::g::Fuse::Resources::DisposalPolicy_typeof());
    type->fp_ctor_ = (void*)ExpirationDisposalPolicy__New1_fn;
    type->fp_CanDispose = (void(*)(::g::Fuse::Resources::DisposalPolicy*, int*, bool*, bool*))ExpirationDisposalPolicy__CanDispose_fn;
    type->fp_Clone = (void(*)(::g::Fuse::Resources::DisposalPolicy*, ::g::Fuse::Resources::DisposalPolicy**))ExpirationDisposalPolicy__Clone_fn;
    type->fp_MarkUsed = (void(*)(::g::Fuse::Resources::DisposalPolicy*))ExpirationDisposalPolicy__MarkUsed_fn;
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[6] = ::g::Fuse::Time_typeof();
    ::TYPES[4] = ::g::Uno::Int_typeof();
    ::TYPES[7] = ::g::Fuse::Resources::DisposalPolicy_typeof();
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Resources::ExpirationDisposalPolicy, lastUsedFrameTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Resources::ExpirationDisposalPolicy, _Timeout), 0);
    return type;
}

// public generated ExpirationDisposalPolicy() :112
void ExpirationDisposalPolicy__ctor_1_fn(ExpirationDisposalPolicy* __this)
{
    __this->ctor_1();
}

// public override sealed bool CanDispose(Fuse.Resources.DisposalRequest dr, bool pinned) :123
void ExpirationDisposalPolicy__CanDispose_fn(ExpirationDisposalPolicy* __this, int* dr, bool* pinned, bool* __retval)
{
    bool pinned_ = *pinned;
    int dr_ = *dr;

    if (!pinned_ && (__this->Timeout() > 0.0))
    {
        double elapsed = ::g::Fuse::Time::FrameTime() - __this->lastUsedFrameTime;

        if (elapsed > __this->Timeout())
            return *__retval = true, void();
    }

    return *__retval = dr_ != 0, void();
}

// public override sealed Fuse.Resources.DisposalPolicy Clone() :136
void ExpirationDisposalPolicy__Clone_fn(ExpirationDisposalPolicy* __this, ::g::Fuse::Resources::DisposalPolicy** __retval)
{
    ExpirationDisposalPolicy* p = ExpirationDisposalPolicy::New1();
    p->Timeout(__this->Timeout());
    return *__retval = p, void();
}

// public override sealed void MarkUsed() :118
void ExpirationDisposalPolicy__MarkUsed_fn(ExpirationDisposalPolicy* __this)
{
    __this->lastUsedFrameTime = ::g::Fuse::Time::FrameTime();
}

// public generated ExpirationDisposalPolicy New() :112
void ExpirationDisposalPolicy__New1_fn(ExpirationDisposalPolicy** __retval)
{
    *__retval = ExpirationDisposalPolicy::New1();
}

// public generated double get_Timeout() :116
void ExpirationDisposalPolicy__get_Timeout_fn(ExpirationDisposalPolicy* __this, double* __retval)
{
    *__retval = __this->Timeout();
}

// public generated void set_Timeout(double value) :116
void ExpirationDisposalPolicy__set_Timeout_fn(ExpirationDisposalPolicy* __this, double* value)
{
    __this->Timeout(*value);
}

// public generated ExpirationDisposalPolicy() [instance] :112
void ExpirationDisposalPolicy::ctor_1()
{
    ctor_();
}

// public generated double get_Timeout() [instance] :116
double ExpirationDisposalPolicy::Timeout()
{
    return _Timeout;
}

// public generated void set_Timeout(double value) [instance] :116
void ExpirationDisposalPolicy::Timeout(double value)
{
    _Timeout = value;
}

// public generated ExpirationDisposalPolicy New() [static] :112
ExpirationDisposalPolicy* ExpirationDisposalPolicy::New1()
{
    ExpirationDisposalPolicy* obj1 = (ExpirationDisposalPolicy*)uNew(ExpirationDisposalPolicy_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Resources\$.uno(34)
// --------------------------------------------------------------------

// public sealed class FileImageSource :34
// {
::g::Fuse::Resources::ImageSource_type* FileImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(FileImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.FileImageSource", options);
    type->SetBase(::g::Fuse::Resources::ImageSource_typeof());
    type->fp_ctor_ = (void*)FileImageSource__New1_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))FileImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))FileImageSource__OnPinChanged_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))FileImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))FileImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))FileImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))FileImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))FileImageSource__get_State_fn;
    ::TYPES[8] = ::g::Fuse::Resources::ImageSource_typeof();
    ::TYPES[9] = ::g::Fuse::Resources::MemoryPolicy_typeof();
    ::TYPES[10] = ::g::Fuse::Resources::ProxyImageSource_typeof();
    ::TYPES[11] = ::g::Fuse::Resources::FileImageSourceImpl_typeof();
    ::TYPES[12] = ::g::Uno::UX::FileSource_typeof();
    type->SetFields(3,
        ::g::Fuse::Resources::ProxyImageSource_typeof(), offsetof(::g::Fuse::Resources::FileImageSource, _proxy), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("set_DefaultPolicy", NULL, (void*)FileImageSource__set_DefaultPolicy_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::MemoryPolicy_typeof()),
        new uFunction("get_Density", NULL, (void*)FileImageSource__get_Density_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Density", NULL, (void*)FileImageSource__set_Density_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_File", NULL, (void*)FileImageSource__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)FileImageSource__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction(".ctor", NULL, (void*)FileImageSource__New1_fn, 0, true, FileImageSource_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)FileImageSource__New2_fn, 0, true, FileImageSource_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("get_Policy", NULL, (void*)FileImageSource__get_Policy_fn, 0, false, ::g::Fuse::Resources::MemoryPolicy_typeof(), 0),
        new uFunction("set_Policy", NULL, (void*)FileImageSource__set_Policy_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::MemoryPolicy_typeof()));
    return type;
}

// public FileImageSource() :59
void FileImageSource__ctor_1_fn(FileImageSource* __this)
{
    __this->ctor_1();
}

// public FileImageSource(Uno.UX.FileSource file) :53
void FileImageSource__ctor_2_fn(FileImageSource* __this, ::g::Uno::UX::FileSource* file)
{
    __this->ctor_2(file);
}

// private void CheckPolicy() :64
void FileImageSource__CheckPolicy_fn(FileImageSource* __this)
{
    __this->CheckPolicy();
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) :76
void FileImageSource__set_DefaultPolicy_fn(FileImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->DefaultPolicy(value);
}

// public float get_Density() :100
void FileImageSource__get_Density_fn(FileImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :100
void FileImageSource__set_Density_fn(FileImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public Uno.UX.FileSource get_File() :38
void FileImageSource__get_File_fn(FileImageSource* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :39
void FileImageSource__set_File_fn(FileImageSource* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public override sealed texture2D GetTexture() :95
void FileImageSource__GetTexture_fn(FileImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    return *__retval = uPtr(__this->_proxy)->GetTexture(), void();
}

// public FileImageSource New() :59
void FileImageSource__New1_fn(FileImageSource** __retval)
{
    *__retval = FileImageSource::New1();
}

// public FileImageSource New(Uno.UX.FileSource file) :53
void FileImageSource__New2_fn(::g::Uno::UX::FileSource* file, FileImageSource** __retval)
{
    *__retval = FileImageSource::New2(file);
}

// protected override sealed void OnPinChanged() :91
void FileImageSource__OnPinChanged_fn(FileImageSource* __this)
{
    uPtr(__this->_proxy)->OnPinChanged();
}

// public override sealed int2 get_PixelSize() :93
void FileImageSource__get_PixelSize_fn(FileImageSource* __this, ::g::Uno::Int2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->PixelSize(), void();
}

// public Fuse.Resources.MemoryPolicy get_Policy() :84
void FileImageSource__get_Policy_fn(FileImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) :85
void FileImageSource__set_Policy_fn(FileImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->Policy(value);
}

// public override sealed void Reload() :96
void FileImageSource__Reload_fn(FileImageSource* __this)
{
    uPtr(__this->_proxy)->Reload();
}

// public override sealed float2 get_Size() :92
void FileImageSource__get_Size_fn(FileImageSource* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Size(), void();
}

// public override sealed float get_SizeDensity() :97
void FileImageSource__get_SizeDensity_fn(FileImageSource* __this, float* __retval)
{
    return *__retval = __this->Density(), void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :94
void FileImageSource__get_State_fn(FileImageSource* __this, int* __retval)
{
    return *__retval = uPtr(__this->_proxy)->State(), void();
}

// public FileImageSource() [instance] :59
void FileImageSource::ctor_1()
{
    ctor_();
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
}

// public FileImageSource(Uno.UX.FileSource file) [instance] :53
void FileImageSource::ctor_2(::g::Uno::UX::FileSource* file)
{
    ctor_();
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
    File(file);
}

// private void CheckPolicy() [instance] :64
void FileImageSource::CheckPolicy()
{
    if (uPtr(uPtr(_proxy)->Policy())->BundlePreload())
    {
        ::g::Fuse::Resources::FileImageSourceImpl* bfi = uAs< ::g::Fuse::Resources::FileImageSourceImpl*>(uPtr(_proxy)->Impl(), ::TYPES[11/*Fuse.Resources.FileImageSourceImpl*/]);

        if (bfi != NULL)
            uPtr(bfi)->SyncLoad();
    }
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) [instance] :76
void FileImageSource::DefaultPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uPtr(_proxy)->DefaultSetPolicy(value);
    CheckPolicy();
}

// public float get_Density() [instance] :100
float FileImageSource::Density()
{
    return uPtr(_proxy)->Density();
}

// public void set_Density(float value) [instance] :100
void FileImageSource::Density(float value)
{
    uPtr(_proxy)->Density(value);
}

// public Uno.UX.FileSource get_File() [instance] :38
::g::Uno::UX::FileSource* FileImageSource::File()
{
    return (uPtr(_proxy)->Impl() == NULL) ? uCast< ::g::Uno::UX::FileSource*>(NULL, ::TYPES[12/*Uno.UX.FileSource*/]) : (::g::Uno::UX::FileSource*)uPtr(uAs< ::g::Fuse::Resources::FileImageSourceImpl*>(uPtr(_proxy)->Impl(), ::TYPES[11/*Fuse.Resources.FileImageSourceImpl*/]))->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :39
void FileImageSource::File(::g::Uno::UX::FileSource* value)
{
    uPtr(_proxy)->Release();

    if (value == NULL)
        return;

    ::g::Fuse::Resources::FileImageSourceImpl* bf = ::g::Fuse::Resources::FileImageSourceCache::GetFileSource(value);

    if (uPtr(Policy())->BundlePreload())
        uPtr(bf)->SyncLoad();

    uPtr(_proxy)->Attach(bf);
}

// public Fuse.Resources.MemoryPolicy get_Policy() [instance] :84
::g::Fuse::Resources::MemoryPolicy* FileImageSource::Policy()
{
    return uPtr(_proxy)->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) [instance] :85
void FileImageSource::Policy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uPtr(_proxy)->Policy(value);
    CheckPolicy();
}

// public FileImageSource New() [static] :59
FileImageSource* FileImageSource::New1()
{
    FileImageSource* obj2 = (FileImageSource*)uNew(FileImageSource_typeof());
    obj2->ctor_1();
    return obj2;
}

// public FileImageSource New(Uno.UX.FileSource file) [static] :53
FileImageSource* FileImageSource::New2(::g::Uno::UX::FileSource* file)
{
    FileImageSource* obj1 = (FileImageSource*)uNew(FileImageSource_typeof());
    obj1->ctor_2(file);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Resources\$.uno(13)
// --------------------------------------------------------------------

// internal static class FileImageSourceCache :13
// {
// static FileImageSourceCache() :13
static void FileImageSourceCache__cctor__fn(uType* __type)
{
    FileImageSourceCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[13/*Uno.Collections.Dictionary<Uno.UX.FileSource, Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>*/]));
}

uClassType* FileImageSourceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.FileImageSourceCache", options);
    type->fp_cctor_ = FileImageSourceCache__cctor__fn;
    ::TYPES[13] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::FileImageSourceImpl_typeof()));
    ::TYPES[14] = ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::FileImageSourceImpl_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::FileImageSourceImpl_typeof())), (uintptr_t)&::g::Fuse::Resources::FileImageSourceCache::_cache_, uFieldFlagsStatic);
    return type;
}

// public static Fuse.Resources.FileImageSourceImpl GetFileSource(Uno.UX.FileSource file) :17
void FileImageSourceCache__GetFileSource_fn(::g::Uno::UX::FileSource* file, ::g::Fuse::Resources::FileImageSourceImpl** __retval)
{
    *__retval = FileImageSourceCache::GetFileSource(file);
}

uSStrong< ::g::Uno::Collections::Dictionary*> FileImageSourceCache::_cache_;

// public static Fuse.Resources.FileImageSourceImpl GetFileSource(Uno.UX.FileSource file) [static] :17
::g::Fuse::Resources::FileImageSourceImpl* FileImageSourceCache::GetFileSource(::g::Uno::UX::FileSource* file)
{
    FileImageSourceCache_typeof()->Init();
    bool ret1;
    bool ret2;
    ::g::Uno::WeakReference* value = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(FileImageSourceCache::_cache()), file, (void**)(&value), &ret1), ret1))
    {
        ::g::Fuse::Resources::FileImageSourceImpl* his;

        if (uPtr(value)->TryGetTarget((uObject**)(&his)))
            return his;

        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(FileImageSourceCache::_cache()), file, &ret2);
    }

    ::g::Fuse::Resources::FileImageSourceImpl* nv = ::g::Fuse::Resources::FileImageSourceImpl::New1(file);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(FileImageSourceCache::_cache()), file, (::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[14/*Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>*/], nv));
    return nv;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Resources\$.uno(103)
// ---------------------------------------------------------------------

// internal sealed class FileImageSourceImpl :103
// {
//  ~FileImageSourceImpl() :122
static void FileImageSourceImpl__Finalize_fn(FileImageSourceImpl* __this)
{
    uPtr(__this->_file)->remove_DataChanged(uDelegate::New(::TYPES[15/*Uno.EventHandler<Uno.EventArgs>*/], (void*)FileImageSourceImpl__OnDataChanged_fn, __this));
}

::g::Fuse::Resources::LoadingImageSource_type* FileImageSourceImpl_typeof()
{
    static uSStrong< ::g::Fuse::Resources::LoadingImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FileImageSourceImpl);
    options.TypeSize = sizeof(::g::Fuse::Resources::LoadingImageSource_type);
    type = (::g::Fuse::Resources::LoadingImageSource_type*)uClassType::New("Fuse.Resources.FileImageSourceImpl", options);
    type->SetBase(::g::Fuse::Resources::LoadingImageSource_typeof());
    type->fp_Finalize = (void(*)(uObject*))FileImageSourceImpl__Finalize_fn;
    type->fp_AttemptLoad = (void(*)(::g::Fuse::Resources::LoadingImageSource*))FileImageSourceImpl__AttemptLoad_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))::g::Fuse::Resources::LoadingImageSource__Fuse_Resources_IMemoryResource_SoftDispose_fn;
    type->interface0.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))::g::Fuse::Resources::LoadingImageSource__Fuse_Resources_IMemoryResource_get_MemoryPolicy_fn;
    type->interface0.fp_get_IsPinned = (void(*)(uObject*, bool*))::g::Fuse::Resources::LoadingImageSource__Fuse_Resources_IMemoryResource_get_IsPinned_fn;
    type->interface0.fp_get_LastUsed = (void(*)(uObject*, double*))::g::Fuse::Resources::LoadingImageSource__Fuse_Resources_IMemoryResource_get_LastUsed_fn;
    ::STRINGS[0] = uString::Const("bundleFile");
    ::STRINGS[1] = uString::Const("BundleFileImageSource-failed-conversion");
    ::TYPES[12] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[15] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof());
    ::TYPES[16] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof());
    ::TYPES[17] = ::g::Fuse::Resources::LoadingImageSource_typeof();
    type->SetInterfaces(
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource_type, interface0));
    type->SetFields(12,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Resources::FileImageSourceImpl, _file), 0);
    return type;
}

// public FileImageSourceImpl(Uno.UX.FileSource file) :113
void FileImageSourceImpl__ctor_2_fn(FileImageSourceImpl* __this, ::g::Uno::UX::FileSource* file)
{
    __this->ctor_2(file);
}

// protected override sealed void AttemptLoad() :145
void FileImageSourceImpl__AttemptLoad_fn(FileImageSourceImpl* __this)
{
    try
    {
        uArray* data = uPtr(__this->_file)->ReadAllBytes();
        ::g::Experimental::TextureLoader::TextureLoader::ByteArrayToTexture2DFilename(::g::Uno::Buffer::New1(data), uPtr(__this->_file)->Name, uDelegate::New(::TYPES[16/*Uno.Action<texture2D>*/], (void*)::g::Fuse::Resources::LoadingImageSource__SetTexture_fn, __this));
        __this->OnChanged();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        __this->Cleanup(1);
        __this->OnError(::STRINGS[1/*"BundleFileI...*/], e);
    }
}

// public Uno.UX.FileSource get_File() :110
void FileImageSourceImpl__get_File_fn(FileImageSourceImpl* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public FileImageSourceImpl New(Uno.UX.FileSource file) :113
void FileImageSourceImpl__New1_fn(::g::Uno::UX::FileSource* file, FileImageSourceImpl** __retval)
{
    *__retval = FileImageSourceImpl::New1(file);
}

// private void OnDataChanged(object s, object a) :127
void FileImageSourceImpl__OnDataChanged_fn(FileImageSourceImpl* __this, uObject* s, uObject* a)
{
    __this->OnDataChanged(s, a);
}

// public void SyncLoad() :132
void FileImageSourceImpl__SyncLoad_fn(FileImageSourceImpl* __this)
{
    __this->SyncLoad();
}

// public FileImageSourceImpl(Uno.UX.FileSource file) [instance] :113
void FileImageSourceImpl::ctor_2(::g::Uno::UX::FileSource* file)
{
    ctor_1();

    if (file == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"bundleFile"*/]));

    _file = file;
    uPtr(_file)->add_DataChanged(uDelegate::New(::TYPES[15/*Uno.EventHandler<Uno.EventArgs>*/], (void*)FileImageSourceImpl__OnDataChanged_fn, this));
}

// public Uno.UX.FileSource get_File() [instance] :110
::g::Uno::UX::FileSource* FileImageSourceImpl::File()
{
    return _file;
}

// private void OnDataChanged(object s, object a) [instance] :127
void FileImageSourceImpl::OnDataChanged(uObject* s, uObject* a)
{
    Reload();
}

// public void SyncLoad() [instance] :132
void FileImageSourceImpl::SyncLoad()
{
    if (IsLoaded())
    {
        MarkUsed();
        return;
    }

    uArray* data = uPtr(_file)->ReadAllBytes();
    ::g::Experimental::TextureLoader::TextureLoader::ByteArrayToTexture2DFilename(::g::Uno::Buffer::New1(data), uPtr(_file)->Name, uDelegate::New(::TYPES[16/*Uno.Action<texture2D>*/], (void*)::g::Fuse::Resources::LoadingImageSource__SetTexture_fn, this));
    OnChanged();
}

// public FileImageSourceImpl New(Uno.UX.FileSource file) [static] :113
FileImageSourceImpl* FileImageSourceImpl::New1(::g::Uno::UX::FileSource* file)
{
    FileImageSourceImpl* obj1 = (FileImageSourceImpl*)uNew(FileImageSourceImpl_typeof());
    obj1->ctor_2(file);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(161)
// ----------------------------------------------------------------

// public sealed class FileResource :161
// {
::g::Uno::UX::FileSource_type* FileResource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FileResource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Fuse.Resources.FileResource", options);
    type->SetBase(::g::Uno::UX::FileSource_typeof());
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))FileResource__OpenRead_fn;
    ::TYPES[12] = ::g::Uno::UX::FileSource_typeof();
    type->SetFields(2,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Resources::FileResource, _file), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FileResource__New1_fn, 0, true, FileResource_typeof(), 1, ::g::Uno::UX::FileSource_typeof()));
    return type;
}

// public FileResource(Uno.UX.FileSource file) :166
void FileResource__ctor_1_fn(FileResource* __this, ::g::Uno::UX::FileSource* file)
{
    __this->ctor_1(file);
}

// public FileResource New(Uno.UX.FileSource file) :166
void FileResource__New1_fn(::g::Uno::UX::FileSource* file, FileResource** __retval)
{
    *__retval = FileResource::New1(file);
}

// public override sealed Uno.IO.Stream OpenRead() :171
void FileResource__OpenRead_fn(FileResource* __this, ::g::Uno::IO::Stream** __retval)
{
    return *__retval = uPtr(__this->_file)->OpenRead(), void();
}

// public FileResource(Uno.UX.FileSource file) [instance] :166
void FileResource::ctor_1(::g::Uno::UX::FileSource* file)
{
    ctor_(uPtr(file)->Name);
    _file = file;
}

// public FileResource New(Uno.UX.FileSource file) [static] :166
FileResource* FileResource::New1(::g::Uno::UX::FileSource* file)
{
    FileResource* obj1 = (FileResource*)uNew(FileResource_typeof());
    obj1->ctor_1(file);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(320)
// ----------------------------------------------------------------

// internal sealed class FloatResourceConverter :320
// {
::g::Fuse::Resources::NumericResourceConverter_type* FloatResourceConverter_typeof()
{
    static uSStrong< ::g::Fuse::Resources::NumericResourceConverter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FloatResourceConverter);
    options.TypeSize = sizeof(::g::Fuse::Resources::NumericResourceConverter_type);
    type = (::g::Fuse::Resources::NumericResourceConverter_type*)uClassType::New("Fuse.Resources.FloatResourceConverter", options);
    type->SetBase(::g::Fuse::Resources::NumericResourceConverter_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_ctor_ = (void*)FloatResourceConverter__New1_fn;
    type->fp_Convert = (void(*)(::g::Fuse::Resources::NumericResourceConverter*, uObject*, uTRef))FloatResourceConverter__Convert_fn;
    type->interface0.fp_Accept = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Resources::NumericResourceConverter__Accept_fn;
    type->interface0.fp_Convert = (void(*)(uObject*, uObject*, uTRef))FloatResourceConverter__Convert_fn;
    ::TYPES[18] = ::g::Uno::Float_typeof();
    type->SetInterfaces(
        ::g::Fuse::Resources::IResourceConverter_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Resources::NumericResourceConverter_type, interface0));
    return type;
}

// public generated FloatResourceConverter() :320
void FloatResourceConverter__ctor_1_fn(FloatResourceConverter* __this)
{
    __this->ctor_1();
}

// public override sealed float Convert(object o) :322
void FloatResourceConverter__Convert_fn(FloatResourceConverter* __this, uObject* o, float* __retval)
{
    return *__retval = (float)__this->InternConvert(o), void();
}

// public generated FloatResourceConverter New() :320
void FloatResourceConverter__New1_fn(FloatResourceConverter** __retval)
{
    *__retval = FloatResourceConverter::New1();
}

// public generated FloatResourceConverter() [instance] :320
void FloatResourceConverter::ctor_1()
{
    ctor_();
}

// public generated FloatResourceConverter New() [static] :320
FloatResourceConverter* FloatResourceConverter::New1()
{
    FloatResourceConverter* obj1 = (FloatResourceConverter*)uNew(FloatResourceConverter_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(333)
// ----------------------------------------------------------------

// internal sealed class GenericResourceConverter<T> :333
// {
GenericResourceConverter_type* GenericResourceConverter_typeof()
{
    static uSStrong<GenericResourceConverter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GenericResourceConverter);
    options.TypeSize = sizeof(GenericResourceConverter_type);
    type = (GenericResourceConverter_type*)uClassType::New("Fuse.Resources.GenericResourceConverter`1", options);
    type->fp_ctor_ = (void*)GenericResourceConverter__New1_fn;
    type->interface0.fp_Accept = (void(*)(uObject*, uObject*, bool*))GenericResourceConverter__Accept_fn;
    type->interface0.fp_Convert = (void(*)(uObject*, uObject*, uTRef))GenericResourceConverter__Convert_fn;
    type->SetInterfaces(
        ::g::Fuse::Resources::IResourceConverter_typeof()->MakeType(type->T(0)), offsetof(GenericResourceConverter_type, interface0));
    return type;
}

// public generated GenericResourceConverter() :333
void GenericResourceConverter__ctor__fn(GenericResourceConverter* __this)
{
    __this->ctor_();
}

// public bool Accept(object o) :335
void GenericResourceConverter__Accept_fn(GenericResourceConverter* __this, uObject* o, bool* __retval)
{
    *__retval = __this->Accept(o);
}

// public T Convert(object o) :340
void GenericResourceConverter__Convert_fn(GenericResourceConverter* __this, uObject* o, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    return __retval.Store(__types[0], uUnboxAny(__types[0], o)), void();
}

// public generated GenericResourceConverter New() :333
void GenericResourceConverter__New1_fn(uType* __type, GenericResourceConverter** __retval)
{
    *__retval = GenericResourceConverter::New1(__type);
}

// public generated GenericResourceConverter() [instance] :333
void GenericResourceConverter::ctor_()
{
}

// public bool Accept(object o) [instance] :335
bool GenericResourceConverter::Accept(uObject* o)
{
    uType* __types[] = {
        __type->T(0),
    };
    return uIs(o, __types[0]);
}

// public generated GenericResourceConverter New() [static] :333
GenericResourceConverter* GenericResourceConverter::New1(uType* __type)
{
    GenericResourceConverter* obj1 = (GenericResourceConverter*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Resources\$.uno(177)
// ---------------------------------------------------------------------

// public sealed class HttpImageSource :177
// {
::g::Fuse::Resources::ImageSource_type* HttpImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(HttpImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.HttpImageSource", options);
    type->SetBase(::g::Fuse::Resources::ImageSource_typeof());
    type->fp_ctor_ = (void*)HttpImageSource__New1_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))HttpImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))HttpImageSource__OnPinChanged_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))HttpImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))HttpImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))HttpImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))HttpImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))HttpImageSource__get_State_fn;
    ::STRINGS[2] = uString::Const("");
    ::TYPES[8] = ::g::Fuse::Resources::ImageSource_typeof();
    ::TYPES[10] = ::g::Fuse::Resources::ProxyImageSource_typeof();
    ::TYPES[19] = ::g::Fuse::Resources::HttpImageSourceImpl_typeof();
    type->SetFields(3,
        ::g::Fuse::Resources::ProxyImageSource_typeof(), offsetof(::g::Fuse::Resources::HttpImageSource, _proxy), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("set_DefaultPolicy", NULL, (void*)HttpImageSource__set_DefaultPolicy_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::MemoryPolicy_typeof()),
        new uFunction("get_Density", NULL, (void*)HttpImageSource__get_Density_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Density", NULL, (void*)HttpImageSource__set_Density_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)HttpImageSource__New1_fn, 0, true, HttpImageSource_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)HttpImageSource__New2_fn, 0, true, HttpImageSource_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Policy", NULL, (void*)HttpImageSource__get_Policy_fn, 0, false, ::g::Fuse::Resources::MemoryPolicy_typeof(), 0),
        new uFunction("set_Policy", NULL, (void*)HttpImageSource__set_Policy_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::MemoryPolicy_typeof()),
        new uFunction("get_Url", NULL, (void*)HttpImageSource__get_Url_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Url", NULL, (void*)HttpImageSource__set_Url_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public HttpImageSource() :194
void HttpImageSource__ctor_1_fn(HttpImageSource* __this)
{
    __this->ctor_1();
}

// public HttpImageSource(string url) :199
void HttpImageSource__ctor_2_fn(HttpImageSource* __this, uString* url)
{
    __this->ctor_2(url);
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) :205
void HttpImageSource__set_DefaultPolicy_fn(HttpImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->DefaultPolicy(value);
}

// public float get_Density() :216
void HttpImageSource__get_Density_fn(HttpImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :216
void HttpImageSource__set_Density_fn(HttpImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public override sealed texture2D GetTexture() :211
void HttpImageSource__GetTexture_fn(HttpImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    return *__retval = uPtr(__this->_proxy)->GetTexture(), void();
}

// public HttpImageSource New() :194
void HttpImageSource__New1_fn(HttpImageSource** __retval)
{
    *__retval = HttpImageSource::New1();
}

// public HttpImageSource New(string url) :199
void HttpImageSource__New2_fn(uString* url, HttpImageSource** __retval)
{
    *__retval = HttpImageSource::New2(url);
}

// protected override sealed void OnPinChanged() :207
void HttpImageSource__OnPinChanged_fn(HttpImageSource* __this)
{
    uPtr(__this->_proxy)->OnPinChanged();
}

// public override sealed int2 get_PixelSize() :209
void HttpImageSource__get_PixelSize_fn(HttpImageSource* __this, ::g::Uno::Int2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->PixelSize(), void();
}

// public Fuse.Resources.MemoryPolicy get_Policy() :206
void HttpImageSource__get_Policy_fn(HttpImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) :206
void HttpImageSource__set_Policy_fn(HttpImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->Policy(value);
}

// public override sealed void Reload() :212
void HttpImageSource__Reload_fn(HttpImageSource* __this)
{
    uPtr(__this->_proxy)->Reload();
}

// public override sealed float2 get_Size() :208
void HttpImageSource__get_Size_fn(HttpImageSource* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Size(), void();
}

// public override sealed float get_SizeDensity() :213
void HttpImageSource__get_SizeDensity_fn(HttpImageSource* __this, float* __retval)
{
    return *__retval = __this->Density(), void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :210
void HttpImageSource__get_State_fn(HttpImageSource* __this, int* __retval)
{
    return *__retval = uPtr(__this->_proxy)->State(), void();
}

// public string get_Url() :181
void HttpImageSource__get_Url_fn(HttpImageSource* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :182
void HttpImageSource__set_Url_fn(HttpImageSource* __this, uString* value)
{
    __this->Url(value);
}

// public HttpImageSource() [instance] :194
void HttpImageSource::ctor_1()
{
    ctor_();
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
}

// public HttpImageSource(string url) [instance] :199
void HttpImageSource::ctor_2(uString* url)
{
    ctor_();
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
    Url(url);
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) [instance] :205
void HttpImageSource::DefaultPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uPtr(_proxy)->DefaultSetPolicy(value);
}

// public float get_Density() [instance] :216
float HttpImageSource::Density()
{
    return uPtr(_proxy)->Density();
}

// public void set_Density(float value) [instance] :216
void HttpImageSource::Density(float value)
{
    uPtr(_proxy)->Density(value);
}

// public Fuse.Resources.MemoryPolicy get_Policy() [instance] :206
::g::Fuse::Resources::MemoryPolicy* HttpImageSource::Policy()
{
    return uPtr(_proxy)->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) [instance] :206
void HttpImageSource::Policy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uPtr(_proxy)->Policy(value);
}

// public string get_Url() [instance] :181
uString* HttpImageSource::Url()
{
    return (uPtr(_proxy)->Impl() == NULL) ? ::STRINGS[2/*""*/] : (uString*)uPtr(uAs< ::g::Fuse::Resources::HttpImageSourceImpl*>(uPtr(_proxy)->Impl(), ::TYPES[19/*Fuse.Resources.HttpImageSourceImpl*/]))->Url();
}

// public void set_Url(string value) [instance] :182
void HttpImageSource::Url(uString* value)
{
    uPtr(_proxy)->Release();

    if (::g::Uno::String::op_Equality(value, NULL) || ::g::Uno::String::op_Equality(value, ::STRINGS[2/*""*/]))
        return;

    uPtr(_proxy)->Attach(::g::Fuse::Resources::HttpImageSourceCache::GetUrl(value));
}

// public HttpImageSource New() [static] :194
HttpImageSource* HttpImageSource::New1()
{
    HttpImageSource* obj1 = (HttpImageSource*)uNew(HttpImageSource_typeof());
    obj1->ctor_1();
    return obj1;
}

// public HttpImageSource New(string url) [static] :199
HttpImageSource* HttpImageSource::New2(uString* url)
{
    HttpImageSource* obj2 = (HttpImageSource*)uNew(HttpImageSource_typeof());
    obj2->ctor_2(url);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Resources\$.uno(219)
// ---------------------------------------------------------------------

// internal static class HttpImageSourceCache :219
// {
// static HttpImageSourceCache() :219
static void HttpImageSourceCache__cctor__fn(uType* __type)
{
    HttpImageSourceCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[20/*Uno.Collections.Dictionary<string, Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>*/]));
}

uClassType* HttpImageSourceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.HttpImageSourceCache", options);
    type->fp_cctor_ = HttpImageSourceCache__cctor__fn;
    ::TYPES[20] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::HttpImageSourceImpl_typeof()));
    ::TYPES[21] = ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::HttpImageSourceImpl_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::HttpImageSourceImpl_typeof())), (uintptr_t)&::g::Fuse::Resources::HttpImageSourceCache::_cache_, uFieldFlagsStatic);
    return type;
}

// public static Fuse.Resources.HttpImageSourceImpl GetUrl(string url) :222
void HttpImageSourceCache__GetUrl_fn(uString* url, ::g::Fuse::Resources::HttpImageSourceImpl** __retval)
{
    *__retval = HttpImageSourceCache::GetUrl(url);
}

uSStrong< ::g::Uno::Collections::Dictionary*> HttpImageSourceCache::_cache_;

// public static Fuse.Resources.HttpImageSourceImpl GetUrl(string url) [static] :222
::g::Fuse::Resources::HttpImageSourceImpl* HttpImageSourceCache::GetUrl(uString* url)
{
    HttpImageSourceCache_typeof()->Init();
    bool ret1;
    bool ret2;
    ::g::Uno::WeakReference* value = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(HttpImageSourceCache::_cache()), url, (void**)(&value), &ret1), ret1))
    {
        ::g::Fuse::Resources::HttpImageSourceImpl* his;

        if (uPtr(value)->TryGetTarget((uObject**)(&his)))
            return his;

        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(HttpImageSourceCache::_cache()), url, &ret2);
    }

    ::g::Fuse::Resources::HttpImageSourceImpl* nv = ::g::Fuse::Resources::HttpImageSourceImpl::New1(url);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(HttpImageSourceCache::_cache()), url, (::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[21/*Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>*/], nv));
    return nv;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Resources\$.uno(239)
// ---------------------------------------------------------------------

// internal sealed class HttpImageSourceImpl :239
// {
::g::Fuse::Resources::LoadingImageSource_type* HttpImageSourceImpl_typeof()
{
    static uSStrong< ::g::Fuse::Resources::LoadingImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpImageSourceImpl);
    options.TypeSize = sizeof(::g::Fuse::Resources::LoadingImageSource_type);
    type = (::g::Fuse::Resources::LoadingImageSource_type*)uClassType::New("Fuse.Resources.HttpImageSourceImpl", options);
    type->SetBase(::g::Fuse::Resources::LoadingImageSource_typeof());
    type->fp_AttemptLoad = (void(*)(::g::Fuse::Resources::LoadingImageSource*))HttpImageSourceImpl__AttemptLoad_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))::g::Fuse::Resources::LoadingImageSource__Fuse_Resources_IMemoryResource_SoftDispose_fn;
    type->interface0.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))::g::Fuse::Resources::LoadingImageSource__Fuse_Resources_IMemoryResource_get_MemoryPolicy_fn;
    type->interface0.fp_get_IsPinned = (void(*)(uObject*, bool*))::g::Fuse::Resources::LoadingImageSource__Fuse_Resources_IMemoryResource_get_IsPinned_fn;
    type->interface0.fp_get_LastUsed = (void(*)(uObject*, double*))::g::Fuse::Resources::LoadingImageSource__Fuse_Resources_IMemoryResource_get_LastUsed_fn;
    ::STRINGS[3] = uString::Const("HttpImageSource-failed-request");
    ::STRINGS[4] = uString::Const("HttpImageSource-failed-status: ");
    ::STRINGS[5] = uString::Const(" ");
    ::STRINGS[6] = uString::Const("content-type");
    ::STRINGS[7] = uString::Const("x-missing");
    ::STRINGS[8] = uString::Const("HttpImageSource-failed-converson");
    ::STRINGS[9] = uString::Const("HttpImageSource-protocol-failure: ");
    ::TYPES[22] = ::g::Uno::Action2_typeof()->MakeType(::g::Experimental::Http::HttpResponseHeader_typeof(), ::g::Uno::Buffer_typeof());
    ::TYPES[23] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[17] = ::g::Fuse::Resources::LoadingImageSource_typeof();
    ::TYPES[24] = ::g::Experimental::Http::HttpResponseHeader_typeof();
    ::TYPES[25] = uObject_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[16] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof());
    type->SetInterfaces(
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource_type, interface0));
    type->SetFields(12,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Resources::HttpImageSourceImpl, _contentType), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Resources::HttpImageSourceImpl, _url), 0);
    return type;
}

// public HttpImageSourceImpl(string url) :245
void HttpImageSourceImpl__ctor_2_fn(HttpImageSourceImpl* __this, uString* url)
{
    __this->ctor_2(url);
}

// protected override sealed void AttemptLoad() :250
void HttpImageSourceImpl__AttemptLoad_fn(HttpImageSourceImpl* __this)
{
    try
    {
        ::g::Experimental::Http::HttpLoader::LoadBinary(__this->Url(), uDelegate::New(::TYPES[22/*Uno.Action<Experimental.Http.HttpResponseHeader, Uno.Buffer>*/], (void*)HttpImageSourceImpl__HttpCallback_fn, __this), uDelegate::New(::TYPES[23/*Uno.Action<string>*/], (void*)HttpImageSourceImpl__LoadFailed_fn, __this));
        __this->_loading = true;
        __this->OnChanged();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        __this->Fail(::STRINGS[3/*"HttpImageSo...*/], e);
    }
}

// private void Fail(string msg, [Uno.Exception e]) :296
void HttpImageSourceImpl__Fail_fn(HttpImageSourceImpl* __this, uString* msg, ::g::Uno::Exception* e)
{
    __this->Fail(msg, e);
}

// private void HttpCallback(Experimental.Http.HttpResponseHeader response, Uno.Buffer data) :264
void HttpImageSourceImpl__HttpCallback_fn(HttpImageSourceImpl* __this, ::g::Experimental::Http::HttpResponseHeader* response, ::g::Uno::Buffer* data)
{
    __this->HttpCallback(response, data);
}

// private void LoadFailed(string reason) :291
void HttpImageSourceImpl__LoadFailed_fn(HttpImageSourceImpl* __this, uString* reason)
{
    __this->LoadFailed(reason);
}

// public HttpImageSourceImpl New(string url) :245
void HttpImageSourceImpl__New1_fn(uString* url, HttpImageSourceImpl** __retval)
{
    *__retval = HttpImageSourceImpl::New1(url);
}

// public string get_Url() :242
void HttpImageSourceImpl__get_Url_fn(HttpImageSourceImpl* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public HttpImageSourceImpl(string url) [instance] :245
void HttpImageSourceImpl::ctor_2(uString* url)
{
    ctor_1();
    _url = url;
}

// private void Fail(string msg, [Uno.Exception e]) [instance] :296
void HttpImageSourceImpl::Fail(uString* msg, ::g::Uno::Exception* e)
{
    Cleanup(1);
    OnError(msg, e);
    ::g::Experimental::Http::HttpLoader::Discard(_url);
}

// private void HttpCallback(Experimental.Http.HttpResponseHeader response, Uno.Buffer data) [instance] :264
void HttpImageSourceImpl::HttpCallback(::g::Experimental::Http::HttpResponseHeader* response, ::g::Uno::Buffer* data)
{
    bool ret2;

    if (uPtr(response)->StatusCode() != 200)
    {
        Fail(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[4/*"HttpImageSo...*/], uBox<int>(::TYPES[4/*int*/], uPtr(response)->StatusCode())), ::STRINGS[5/*" "*/]), uPtr(response)->ReasonPhrase()), NULL);
        return;
    }

    uString* ct;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(response)->Headers()), ::STRINGS[6/*"content-type"*/], (void**)(&ct), &ret2), ret2))
        _contentType = ::STRINGS[7/*"x-missing"*/];
    else
        _contentType = ct;

    _loading = false;

    try
    {
        ::g::Experimental::TextureLoader::TextureLoader::ByteArrayToTexture2DContentType(data, _contentType, uDelegate::New(::TYPES[16/*Uno.Action<texture2D>*/], (void*)::g::Fuse::Resources::LoadingImageSource__SetTexture_fn, this));
        OnChanged();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        Fail(::STRINGS[8/*"HttpImageSo...*/], e);
    }
}

// private void LoadFailed(string reason) [instance] :291
void HttpImageSourceImpl::LoadFailed(uString* reason)
{
    Fail(::g::Uno::String::op_Addition2(::STRINGS[9/*"HttpImageSo...*/], reason), NULL);
}

// public string get_Url() [instance] :242
uString* HttpImageSourceImpl::Url()
{
    return _url;
}

// public HttpImageSourceImpl New(string url) [static] :245
HttpImageSourceImpl* HttpImageSourceImpl::New1(uString* url)
{
    HttpImageSourceImpl* obj1 = (HttpImageSourceImpl*)uNew(HttpImageSourceImpl_typeof());
    obj1->ctor_2(url);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(189)
// ----------------------------------------------------------------

// internal abstract interface IDeferredDisposable :189
// {
uInterfaceType* IDeferredDisposable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Resources.IDeferredDisposable", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Resources\$.uno(347)
// ---------------------------------------------------------------------

// public abstract class ImageSource :347
// {
ImageSource_type* ImageSource_typeof()
{
    static uSStrong<ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ImageSource);
    options.TypeSize = sizeof(ImageSource_type);
    type = (ImageSource_type*)uClassType::New("Fuse.Resources.ImageSource", options);
    type->fp_OnPinChanged = ImageSource__OnPinChanged_fn;
    type->fp_Reload = ImageSource__Reload_fn;
    ::TYPES[26] = ::g::Uno::Delegate_typeof();
    ::TYPES[27] = ::g::Uno::EventHandler_typeof();
    ::TYPES[25] = uObject_typeof();
    ::TYPES[28] = ::g::Uno::EventArgs_typeof();
    ::TYPES[29] = ::g::Fuse::Resources::ImageSourceErrorArgs_typeof();
    ::TYPES[30] = ::g::Fuse::Resources::ImageSourceErrorHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Resources::ImageSource, _pinCount), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Resources::ImageSource, Changed1), 0,
        ::g::Fuse::Resources::ImageSourceErrorHandler_typeof(), offsetof(::g::Fuse::Resources::ImageSource, Error1), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("add_Changed", NULL, (void*)ImageSource__add_Changed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_Changed", NULL, (void*)ImageSource__remove_Changed_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("add_Error", NULL, (void*)ImageSource__add_Error_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::ImageSourceErrorHandler_typeof()),
        new uFunction("remove_Error", NULL, (void*)ImageSource__remove_Error_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::ImageSourceErrorHandler_typeof()),
        new uFunction("GetTexture", NULL, NULL, offsetof(ImageSource_type, fp_GetTexture), false, ::g::Uno::Graphics::Texture2D_typeof(), 0),
        new uFunction("get_IsPinned", NULL, (void*)ImageSource__get_IsPinned_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Pin", NULL, (void*)ImageSource__Pin_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_PixelSize", NULL, NULL, offsetof(ImageSource_type, fp_get_PixelSize), false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("Reload", NULL, NULL, offsetof(ImageSource_type, fp_Reload), false, uVoid_typeof(), 0),
        new uFunction("get_Size", NULL, NULL, offsetof(ImageSource_type, fp_get_Size), false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_SizeDensity", NULL, NULL, offsetof(ImageSource_type, fp_get_SizeDensity), false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_State", NULL, NULL, offsetof(ImageSource_type, fp_get_State), false, ::g::Fuse::Resources::ImageSourceState_typeof(), 0),
        new uFunction("Unpin", NULL, (void*)ImageSource__Unpin_fn, 0, false, uVoid_typeof(), 0));
    return type;
}

// protected generated ImageSource() :347
void ImageSource__ctor__fn(ImageSource* __this)
{
    __this->ctor_();
}

// public generated void add_Changed(Uno.EventHandler value) :349
void ImageSource__add_Changed_fn(ImageSource* __this, uDelegate* value)
{
    __this->add_Changed(value);
}

// public generated void remove_Changed(Uno.EventHandler value) :349
void ImageSource__remove_Changed_fn(ImageSource* __this, uDelegate* value)
{
    __this->remove_Changed(value);
}

// public generated void add_Error(Fuse.Resources.ImageSourceErrorHandler value) :361
void ImageSource__add_Error_fn(ImageSource* __this, uDelegate* value)
{
    __this->add_Error(value);
}

// public generated void remove_Error(Fuse.Resources.ImageSourceErrorHandler value) :361
void ImageSource__remove_Error_fn(ImageSource* __this, uDelegate* value)
{
    __this->remove_Error(value);
}

// public bool get_IsPinned() :393
void ImageSource__get_IsPinned_fn(ImageSource* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// protected void OnChanged() :350
void ImageSource__OnChanged_fn(ImageSource* __this)
{
    __this->OnChanged();
}

// protected void OnError(string msg, [Uno.Exception e]) :362
void ImageSource__OnError_fn(ImageSource* __this, uString* msg, ::g::Uno::Exception* e)
{
    __this->OnError(msg, e);
}

// protected virtual void OnPinChanged() :395
void ImageSource__OnPinChanged_fn(ImageSource* __this)
{
}

// public void Pin() :379
void ImageSource__Pin_fn(ImageSource* __this)
{
    __this->Pin();
}

// internal void ProxyChanged(object s, Uno.EventArgs a) :355
void ImageSource__ProxyChanged_fn(ImageSource* __this, uObject* s, ::g::Uno::EventArgs* a)
{
    __this->ProxyChanged(s, a);
}

// internal void ProxyError(object s, Fuse.Resources.ImageSourceErrorArgs a) :372
void ImageSource__ProxyError_fn(ImageSource* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    __this->ProxyError(s, a);
}

// public virtual void Reload() :401
void ImageSource__Reload_fn(ImageSource* __this)
{
}

// public void Unpin() :385
void ImageSource__Unpin_fn(ImageSource* __this)
{
    __this->Unpin();
}

// protected generated ImageSource() [instance] :347
void ImageSource::ctor_()
{
}

// public generated void add_Changed(Uno.EventHandler value) [instance] :349
void ImageSource::add_Changed(uDelegate* value)
{
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Changed1, value), ::TYPES[27/*Uno.EventHandler*/]);
}

// public generated void remove_Changed(Uno.EventHandler value) [instance] :349
void ImageSource::remove_Changed(uDelegate* value)
{
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Changed1, value), ::TYPES[27/*Uno.EventHandler*/]);
}

// public generated void add_Error(Fuse.Resources.ImageSourceErrorHandler value) [instance] :361
void ImageSource::add_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Error1, value), ::TYPES[30/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// public generated void remove_Error(Fuse.Resources.ImageSourceErrorHandler value) [instance] :361
void ImageSource::remove_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Error1, value), ::TYPES[30/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// public bool get_IsPinned() [instance] :393
bool ImageSource::IsPinned()
{
    return _pinCount > 0;
}

// protected void OnChanged() [instance] :350
void ImageSource::OnChanged()
{
    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// protected void OnError(string msg, [Uno.Exception e]) [instance] :362
void ImageSource::OnError(uString* msg, ::g::Uno::Exception* e)
{
    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
    {
        ::g::Fuse::Resources::ImageSourceErrorArgs* sa = ::g::Fuse::Resources::ImageSourceErrorArgs::New2();
        sa->Reason = msg;
        sa->ExceptionCause = e;
        uPtr(Error1)->Invoke(2, this, sa);
    }
}

// public void Pin() [instance] :379
void ImageSource::Pin()
{
    _pinCount++;

    if (_pinCount == 1)
        OnPinChanged();
}

// internal void ProxyChanged(object s, Uno.EventArgs a) [instance] :355
void ImageSource::ProxyChanged(uObject* s, ::g::Uno::EventArgs* a)
{
    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->Invoke(2, s, a);
}

// internal void ProxyError(object s, Fuse.Resources.ImageSourceErrorArgs a) [instance] :372
void ImageSource::ProxyError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
        uPtr(Error1)->Invoke(2, s, a);
}

// public void Unpin() [instance] :385
void ImageSource::Unpin()
{
    _pinCount--;

    if (_pinCount == 0)
        OnPinChanged();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Resources\$.uno(333)
// ---------------------------------------------------------------------

// public sealed class ImageSourceErrorArgs :333
// {
ImageSourceErrorArgs_type* ImageSourceErrorArgs_typeof()
{
    static uSStrong<ImageSourceErrorArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ImageSourceErrorArgs);
    options.TypeSize = sizeof(ImageSourceErrorArgs_type);
    type = (ImageSourceErrorArgs_type*)uClassType::New("Fuse.Resources.ImageSourceErrorArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->fp_ctor_ = (void*)ImageSourceErrorArgs__New2_fn;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))ImageSourceErrorArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    ::STRINGS[10] = uString::Const("reason");
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(ImageSourceErrorArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::Exception_typeof(), offsetof(::g::Fuse::Resources::ImageSourceErrorArgs, ExceptionCause), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Resources::ImageSourceErrorArgs, Reason), 0);
    type->Reflection.SetFields(2,
        new uField("ExceptionCause", 0),
        new uField("Reason", 1));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ImageSourceErrorArgs__New2_fn, 0, true, ImageSourceErrorArgs_typeof(), 0));
    return type;
}

// public generated ImageSourceErrorArgs() :333
void ImageSourceErrorArgs__ctor_1_fn(ImageSourceErrorArgs* __this)
{
    __this->ctor_1();
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :339
void ImageSourceErrorArgs__Fuse_Scripting_IScriptEvent_Serialize_fn(ImageSourceErrorArgs* __this, uObject* s)
{
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::g::Fuse::Scripting::IEventSerializer_typeof()), ::STRINGS[10/*"reason"*/], __this->Reason);
}

// public generated ImageSourceErrorArgs New() :333
void ImageSourceErrorArgs__New2_fn(ImageSourceErrorArgs** __retval)
{
    *__retval = ImageSourceErrorArgs::New2();
}

// public generated ImageSourceErrorArgs() [instance] :333
void ImageSourceErrorArgs::ctor_1()
{
    ctor_();
}

// public generated ImageSourceErrorArgs New() [static] :333
ImageSourceErrorArgs* ImageSourceErrorArgs::New2()
{
    ImageSourceErrorArgs* obj1 = (ImageSourceErrorArgs*)uNew(ImageSourceErrorArgs_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Resources\$.uno(345)
// ---------------------------------------------------------------------

// public delegate void ImageSourceErrorHandler(object sender, Fuse.Resources.ImageSourceErrorArgs args) :345
uDelegateType* ImageSourceErrorHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Resources.ImageSourceErrorHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Resources::ImageSourceErrorArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Resources\$.uno(321)
// ---------------------------------------------------------------------

// public enum ImageSourceState :321
uEnumType* ImageSourceState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Resources.ImageSourceState", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Pending", 0LL,
        "Ready", 1LL,
        "Loading", 2LL,
        "Failed", 3LL);
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(279)
// ----------------------------------------------------------------

// internal abstract interface IMemoryResource :279
// {
uInterfaceType* IMemoryResource_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Resources.IMemoryResource", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(328)
// ----------------------------------------------------------------

// internal sealed class IntResourceConverter :328
// {
::g::Fuse::Resources::NumericResourceConverter_type* IntResourceConverter_typeof()
{
    static uSStrong< ::g::Fuse::Resources::NumericResourceConverter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IntResourceConverter);
    options.TypeSize = sizeof(::g::Fuse::Resources::NumericResourceConverter_type);
    type = (::g::Fuse::Resources::NumericResourceConverter_type*)uClassType::New("Fuse.Resources.IntResourceConverter", options);
    type->SetBase(::g::Fuse::Resources::NumericResourceConverter_typeof()->MakeType(::g::Uno::Int_typeof()));
    type->fp_ctor_ = (void*)IntResourceConverter__New1_fn;
    type->fp_Convert = (void(*)(::g::Fuse::Resources::NumericResourceConverter*, uObject*, uTRef))IntResourceConverter__Convert_fn;
    type->interface0.fp_Accept = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Resources::NumericResourceConverter__Accept_fn;
    type->interface0.fp_Convert = (void(*)(uObject*, uObject*, uTRef))IntResourceConverter__Convert_fn;
    ::TYPES[4] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Fuse::Resources::IResourceConverter_typeof()->MakeType(::g::Uno::Int_typeof()), offsetof(::g::Fuse::Resources::NumericResourceConverter_type, interface0));
    return type;
}

// public generated IntResourceConverter() :328
void IntResourceConverter__ctor_1_fn(IntResourceConverter* __this)
{
    __this->ctor_1();
}

// public override sealed int Convert(object o) :330
void IntResourceConverter__Convert_fn(IntResourceConverter* __this, uObject* o, int* __retval)
{
    return *__retval = (int)__this->InternConvert(o), void();
}

// public generated IntResourceConverter New() :328
void IntResourceConverter__New1_fn(IntResourceConverter** __retval)
{
    *__retval = IntResourceConverter::New1();
}

// public generated IntResourceConverter() [instance] :328
void IntResourceConverter::ctor_1()
{
    ctor_();
}

// public generated IntResourceConverter New() [static] :328
IntResourceConverter* IntResourceConverter::New1()
{
    IntResourceConverter* obj1 = (IntResourceConverter*)uNew(IntResourceConverter_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(295)
// ----------------------------------------------------------------

// internal abstract interface IResourceConverter<T> :295
// {
uInterfaceType* IResourceConverter_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Resources.IResourceConverter`1", 1, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(227)
// ----------------------------------------------------------------

// internal abstract interface ISoftDisposable :227
// {
uInterfaceType* ISoftDisposable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Resources.ISoftDisposable", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Resources\$.uno(418)
// ---------------------------------------------------------------------

// internal abstract class LoadingImageSource :418
// {
LoadingImageSource_type* LoadingImageSource_typeof()
{
    static uSStrong<LoadingImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LoadingImageSource);
    options.TypeSize = sizeof(LoadingImageSource_type);
    type = (LoadingImageSource_type*)uClassType::New("Fuse.Resources.LoadingImageSource", options);
    type->SetBase(::g::Fuse::Resources::ImageSource_typeof());
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))LoadingImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))LoadingImageSource__OnPinChanged_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))LoadingImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))LoadingImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))LoadingImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))LoadingImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))LoadingImageSource__get_State_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))LoadingImageSource__Fuse_Resources_IMemoryResource_SoftDispose_fn;
    type->interface0.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))LoadingImageSource__Fuse_Resources_IMemoryResource_get_MemoryPolicy_fn;
    type->interface0.fp_get_IsPinned = (void(*)(uObject*, bool*))LoadingImageSource__Fuse_Resources_IMemoryResource_get_IsPinned_fn;
    type->interface0.fp_get_LastUsed = (void(*)(uObject*, double*))LoadingImageSource__Fuse_Resources_IMemoryResource_get_LastUsed_fn;
    ::STRINGS[11] = uString::Const("value-cannot-be-null");
    ::TYPES[9] = ::g::Fuse::Resources::MemoryPolicy_typeof();
    ::TYPES[4] = ::g::Uno::Int_typeof();
    ::TYPES[3] = ::g::Fuse::Resources::IMemoryResource_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    ::TYPES[6] = ::g::Fuse::Time_typeof();
    ::TYPES[31] = ::g::Uno::Graphics::Texture2D_typeof();
    ::TYPES[8] = ::g::Fuse::Resources::ImageSource_typeof();
    ::TYPES[18] = ::g::Uno::Float_typeof();
    ::TYPES[32] = ::g::Uno::Int2_typeof();
    type->SetInterfaces(
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(LoadingImageSource_type, interface0));
    type->SetFields(3,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _density), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _failed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _haveAction), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _inDisposal), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _lastUsed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _loading), 0,
        ::g::Fuse::Resources::MemoryPolicy_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _policy), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _texture), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource, _textureSize), 0);
    return type;
}

// protected generated LoadingImageSource() :418
void LoadingImageSource__ctor_1_fn(LoadingImageSource* __this)
{
    __this->ctor_1();
}

// private void AsyncLoadTexture() :485
void LoadingImageSource__AsyncLoadTexture_fn(LoadingImageSource* __this)
{
    __this->AsyncLoadTexture();
}

// protected void Cleanup(Fuse.Resources.LoadingImageSource.CleanupReason reason) :505
void LoadingImageSource__Cleanup_fn(LoadingImageSource* __this, int* reason)
{
    __this->Cleanup(*reason);
}

// private bool Fuse.Resources.IMemoryResource.get_IsPinned() :428
void LoadingImageSource__Fuse_Resources_IMemoryResource_get_IsPinned_fn(LoadingImageSource* __this, bool* __retval)
{
    return *__retval = __this->IsPinned(), void();
}

// private double Fuse.Resources.IMemoryResource.get_LastUsed() :430
void LoadingImageSource__Fuse_Resources_IMemoryResource_get_LastUsed_fn(LoadingImageSource* __this, double* __retval)
{
    return *__retval = __this->_lastUsed, void();
}

// private Fuse.Resources.MemoryPolicy Fuse.Resources.IMemoryResource.get_MemoryPolicy() :427
void LoadingImageSource__Fuse_Resources_IMemoryResource_get_MemoryPolicy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    return *__retval = __this->Policy(), void();
}

// private void Fuse.Resources.IMemoryResource.SoftDispose() :431
void LoadingImageSource__Fuse_Resources_IMemoryResource_SoftDispose_fn(LoadingImageSource* __this)
{
    __this->Cleanup(2);
}

// public override sealed texture2D GetTexture() :459
void LoadingImageSource__GetTexture_fn(LoadingImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    if (__this->_texture != NULL)
    {
        __this->MarkUsed();
        return *__retval = __this->_texture, void();
    }

    __this->LoadTexture();
    return *__retval = NULL, void();
}

// protected bool get_IsLoaded() :526
void LoadingImageSource__get_IsLoaded_fn(LoadingImageSource* __this, bool* __retval)
{
    *__retval = __this->IsLoaded();
}

// private void LoadTexture() :472
void LoadingImageSource__LoadTexture_fn(LoadingImageSource* __this)
{
    __this->LoadTexture();
}

// protected void MarkUsed() :436
void LoadingImageSource__MarkUsed_fn(LoadingImageSource* __this)
{
    __this->MarkUsed();
}

// protected override sealed void OnPinChanged() :583
void LoadingImageSource__OnPinChanged_fn(LoadingImageSource* __this)
{
    ::g::Fuse::Resources::ImageSource__OnPinChanged_fn(__this);
    __this->MarkUsed();
}

// public override sealed int2 get_PixelSize() :573
void LoadingImageSource__get_PixelSize_fn(LoadingImageSource* __this, ::g::Uno::Int2* __retval)
{
    if (__this->_texture == NULL)
        __this->LoadTexture();

    __this->MarkUsed();
    return *__retval = __this->_textureSize, void();
}

// public Fuse.Resources.MemoryPolicy get_Policy() :444
void LoadingImageSource__get_Policy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) :445
void LoadingImageSource__set_Policy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->Policy(value);
}

// public override sealed void Reload() :493
void LoadingImageSource__Reload_fn(LoadingImageSource* __this)
{
    __this->Cleanup(0);
    __this->LoadTexture();
}

// protected void SetTexture(texture2D texture) :528
void LoadingImageSource__SetTexture_fn(LoadingImageSource* __this, ::g::Uno::Graphics::Texture2D* texture)
{
    __this->SetTexture(texture);
}

// public override sealed float2 get_Size() :564
void LoadingImageSource__get_Size_fn(LoadingImageSource* __this, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Int2 ts = __this->PixelSize();
    return *__retval = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)ts.X, (float)ts.Y), __this->_density), void();
}

// public override sealed float get_SizeDensity() :559
void LoadingImageSource__get_SizeDensity_fn(LoadingImageSource* __this, float* __retval)
{
    return *__retval = __this->_density, void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :544
void LoadingImageSource__get_State_fn(LoadingImageSource* __this, int* __retval)
{
    if (__this->_texture != NULL)
        return *__retval = 1, void();

    if (__this->_failed)
        return *__retval = 3, void();

    if (__this->_loading)
        return *__retval = 2, void();

    return *__retval = 0, void();
}

// protected generated LoadingImageSource() [instance] :418
void LoadingImageSource::ctor_1()
{
    _policy = ::g::Fuse::Resources::MemoryPolicy::PreloadRetain();
    _density = 1.0f;
    ctor_();
}

// private void AsyncLoadTexture() [instance] :485
void LoadingImageSource::AsyncLoadTexture()
{
    _haveAction = false;

    if (_loading || _failed)
        return;

    AttemptLoad();
}

// protected void Cleanup(Fuse.Resources.LoadingImageSource.CleanupReason reason) [instance] :505
void LoadingImageSource::Cleanup(int reason)
{
    if (_texture != NULL)
    {
        uPtr(_texture)->Dispose();
        _texture = NULL;
    }

    _textureSize = ::g::Uno::Int2__New1(0);
    _loading = false;
    _failed = (reason == 1);

    if (_inDisposal)
        ::g::Fuse::Resources::DisposalManager::Remove((uObject*)this);

    _inDisposal = false;

    if (reason != 2)
        OnChanged();
}

// protected bool get_IsLoaded() [instance] :526
bool LoadingImageSource::IsLoaded()
{
    return _texture != NULL;
}

// private void LoadTexture() [instance] :472
void LoadingImageSource::LoadTexture()
{
    if (_loading || _failed)
        return;

    if (!_haveAction)
    {
        ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)LoadingImageSource__AsyncLoadTexture_fn, this), 0);
        _haveAction = true;
    }
}

// protected void MarkUsed() [instance] :436
void LoadingImageSource::MarkUsed()
{
    _lastUsed = ::g::Fuse::Time::FrameTime();
}

// public Fuse.Resources.MemoryPolicy get_Policy() [instance] :444
::g::Fuse::Resources::MemoryPolicy* LoadingImageSource::Policy()
{
    return _policy;
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) [instance] :445
void LoadingImageSource::Policy(::g::Fuse::Resources::MemoryPolicy* value)
{
    if (value == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[11/*"value-canno...*/]));

    _policy = value;
}

// protected void SetTexture(texture2D texture) [instance] :528
void LoadingImageSource::SetTexture(::g::Uno::Graphics::Texture2D* texture)
{
    _texture = texture;
    _textureSize = uPtr(texture)->Size();

    if (!_inDisposal)
    {
        ::g::Fuse::Resources::DisposalManager::Add((uObject*)this);
        _inDisposal = true;
    }

    MarkUsed();
    OnChanged();
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(239)
// ----------------------------------------------------------------

// public sealed class MemoryPolicy :239
// {
// static MemoryPolicy() :239
static void MemoryPolicy__cctor__fn(uType* __type)
{
    MemoryPolicy* collection2;
    MemoryPolicy* collection1;
    MemoryPolicy::PreloadRetain_ = (collection2 = MemoryPolicy::New1(), uPtr(collection2)->BundlePreload(true), true, collection2);
    MemoryPolicy::UnloadUnused_ = (collection1 = MemoryPolicy::New1(), uPtr(collection1)->UnloadInBackground(true), true, uPtr(collection1)->UnusedTimeout(60.0), 60.0, uPtr(collection1)->UnpinInvisible(true), true, collection1);
}

uType* MemoryPolicy_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(MemoryPolicy);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.MemoryPolicy", options);
    type->fp_ctor_ = (void*)MemoryPolicy__New1_fn;
    type->fp_cctor_ = MemoryPolicy__cctor__fn;
    ::TYPES[4] = ::g::Uno::Int_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Fuse::Resources::IMemoryResource_typeof();
    ::TYPES[6] = ::g::Fuse::Time_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::MemoryPolicy, _AllowPinnedFree), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::MemoryPolicy, _BundlePreload), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::MemoryPolicy, _UnloadInBackground), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::MemoryPolicy, _UnpinInvisible), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Resources::MemoryPolicy, _UnusedTimeout), 0,
        MemoryPolicy_typeof(), (uintptr_t)&::g::Fuse::Resources::MemoryPolicy::PreloadRetain_, uFieldFlagsStatic,
        MemoryPolicy_typeof(), (uintptr_t)&::g::Fuse::Resources::MemoryPolicy::UnloadUnused_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("PreloadRetain", 5),
        new uField("UnloadUnused", 6));
    type->Reflection.SetFunctions(11,
        new uFunction("get_AllowPinnedFree", NULL, (void*)MemoryPolicy__get_AllowPinnedFree_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowPinnedFree", NULL, (void*)MemoryPolicy__set_AllowPinnedFree_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_BundlePreload", NULL, (void*)MemoryPolicy__get_BundlePreload_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_BundlePreload", NULL, (void*)MemoryPolicy__set_BundlePreload_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)MemoryPolicy__New1_fn, 0, true, MemoryPolicy_typeof(), 0),
        new uFunction("get_UnloadInBackground", NULL, (void*)MemoryPolicy__get_UnloadInBackground_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_UnloadInBackground", NULL, (void*)MemoryPolicy__set_UnloadInBackground_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_UnpinInvisible", NULL, (void*)MemoryPolicy__get_UnpinInvisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_UnpinInvisible", NULL, (void*)MemoryPolicy__set_UnpinInvisible_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_UnusedTimeout", NULL, (void*)MemoryPolicy__get_UnusedTimeout_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_UnusedTimeout", NULL, (void*)MemoryPolicy__set_UnusedTimeout_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
    return type;
}

// public generated MemoryPolicy() :239
void MemoryPolicy__ctor__fn(MemoryPolicy* __this)
{
    __this->ctor_();
}

// public generated bool get_AllowPinnedFree() :259
void MemoryPolicy__get_AllowPinnedFree_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->AllowPinnedFree();
}

// public generated void set_AllowPinnedFree(bool value) :259
void MemoryPolicy__set_AllowPinnedFree_fn(MemoryPolicy* __this, bool* value)
{
    __this->AllowPinnedFree(*value);
}

// public generated bool get_BundlePreload() :253
void MemoryPolicy__get_BundlePreload_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->BundlePreload();
}

// public generated void set_BundlePreload(bool value) :253
void MemoryPolicy__set_BundlePreload_fn(MemoryPolicy* __this, bool* value)
{
    __this->BundlePreload(*value);
}

// public generated MemoryPolicy New() :239
void MemoryPolicy__New1_fn(MemoryPolicy** __retval)
{
    *__retval = MemoryPolicy::New1();
}

// internal bool ShouldSoftDispose(Fuse.Resources.DisposalRequest dr, Fuse.Resources.IMemoryResource resource) :263
void MemoryPolicy__ShouldSoftDispose_fn(MemoryPolicy* __this, int* dr, uObject* resource, bool* __retval)
{
    *__retval = __this->ShouldSoftDispose(*dr, resource);
}

// public generated bool get_UnloadInBackground() :255
void MemoryPolicy__get_UnloadInBackground_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->UnloadInBackground();
}

// public generated void set_UnloadInBackground(bool value) :255
void MemoryPolicy__set_UnloadInBackground_fn(MemoryPolicy* __this, bool* value)
{
    __this->UnloadInBackground(*value);
}

// public generated bool get_UnpinInvisible() :261
void MemoryPolicy__get_UnpinInvisible_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->UnpinInvisible();
}

// public generated void set_UnpinInvisible(bool value) :261
void MemoryPolicy__set_UnpinInvisible_fn(MemoryPolicy* __this, bool* value)
{
    __this->UnpinInvisible(*value);
}

// public generated double get_UnusedTimeout() :257
void MemoryPolicy__get_UnusedTimeout_fn(MemoryPolicy* __this, double* __retval)
{
    *__retval = __this->UnusedTimeout();
}

// public generated void set_UnusedTimeout(double value) :257
void MemoryPolicy__set_UnusedTimeout_fn(MemoryPolicy* __this, double* value)
{
    __this->UnusedTimeout(*value);
}

uSStrong<MemoryPolicy*> MemoryPolicy::PreloadRetain_;
uSStrong<MemoryPolicy*> MemoryPolicy::UnloadUnused_;

// public generated MemoryPolicy() [instance] :239
void MemoryPolicy::ctor_()
{
}

// public generated bool get_AllowPinnedFree() [instance] :259
bool MemoryPolicy::AllowPinnedFree()
{
    return _AllowPinnedFree;
}

// public generated void set_AllowPinnedFree(bool value) [instance] :259
void MemoryPolicy::AllowPinnedFree(bool value)
{
    _AllowPinnedFree = value;
}

// public generated bool get_BundlePreload() [instance] :253
bool MemoryPolicy::BundlePreload()
{
    return _BundlePreload;
}

// public generated void set_BundlePreload(bool value) [instance] :253
void MemoryPolicy::BundlePreload(bool value)
{
    _BundlePreload = value;
}

// internal bool ShouldSoftDispose(Fuse.Resources.DisposalRequest dr, Fuse.Resources.IMemoryResource resource) [instance] :263
bool MemoryPolicy::ShouldSoftDispose(int dr, uObject* resource)
{
    if ((dr == 1) && UnloadInBackground())
        return true;

    if ((AllowPinnedFree() || !::g::Fuse::Resources::IMemoryResource::IsPinned(uInterface(uPtr(resource), ::TYPES[3/*Fuse.Resources.IMemoryResource*/]))) && (UnusedTimeout() > 0.0))
    {
        double elapsed = ::g::Fuse::Time::FrameTime() - ::g::Fuse::Resources::IMemoryResource::LastUsed(uInterface(uPtr(resource), ::TYPES[3/*Fuse.Resources.IMemoryResource*/]));

        if (elapsed > UnusedTimeout())
            return true;
    }

    return false;
}

// public generated bool get_UnloadInBackground() [instance] :255
bool MemoryPolicy::UnloadInBackground()
{
    return _UnloadInBackground;
}

// public generated void set_UnloadInBackground(bool value) [instance] :255
void MemoryPolicy::UnloadInBackground(bool value)
{
    _UnloadInBackground = value;
}

// public generated bool get_UnpinInvisible() [instance] :261
bool MemoryPolicy::UnpinInvisible()
{
    return _UnpinInvisible;
}

// public generated void set_UnpinInvisible(bool value) [instance] :261
void MemoryPolicy::UnpinInvisible(bool value)
{
    _UnpinInvisible = value;
}

// public generated double get_UnusedTimeout() [instance] :257
double MemoryPolicy::UnusedTimeout()
{
    return _UnusedTimeout;
}

// public generated void set_UnusedTimeout(double value) [instance] :257
void MemoryPolicy::UnusedTimeout(double value)
{
    _UnusedTimeout = value;
}

// public generated MemoryPolicy New() [static] :239
MemoryPolicy* MemoryPolicy::New1()
{
    MemoryPolicy* obj3 = (MemoryPolicy*)uNew(MemoryPolicy_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Resources\$.uno(606)
// ---------------------------------------------------------------------

// public sealed class MultiDensityImageSource :606
// {
::g::Fuse::Resources::ImageSource_type* MultiDensityImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(MultiDensityImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.MultiDensityImageSource", options);
    type->SetBase(::g::Fuse::Resources::ImageSource_typeof());
    type->fp_ctor_ = (void*)MultiDensityImageSource__New1_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))MultiDensityImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))MultiDensityImageSource__OnPinChanged_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))MultiDensityImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))MultiDensityImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))MultiDensityImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))MultiDensityImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))MultiDensityImageSource__get_State_fn;
    ::TYPES[33] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof());
    ::TYPES[34] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof());
    ::TYPES[8] = ::g::Fuse::Resources::ImageSource_typeof();
    ::TYPES[35] = ::g::Fuse::RootViewport_typeof();
    ::TYPES[36] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof());
    ::TYPES[10] = ::g::Fuse::Resources::ProxyImageSource_typeof();
    ::TYPES[37] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof());
    type->SetFields(3,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(::g::Fuse::Resources::MultiDensityImageSource, _active), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::MultiDensityImageSource, _hasMatchDensity), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Resources::MultiDensityImageSource, _matchDensity), 0,
        ::g::Fuse::Resources::ProxyImageSource_typeof(), offsetof(::g::Fuse::Resources::MultiDensityImageSource, _proxy), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof()), offsetof(::g::Fuse::Resources::MultiDensityImageSource, _sources), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_MatchDensity", NULL, (void*)MultiDensityImageSource__get_MatchDensity_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_MatchDensity", NULL, (void*)MultiDensityImageSource__set_MatchDensity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)MultiDensityImageSource__New1_fn, 0, true, MultiDensityImageSource_typeof(), 0),
        new uFunction("get_Sources", NULL, (void*)MultiDensityImageSource__get_Sources_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof()), 0));
    return type;
}

// public MultiDensityImageSource() :620
void MultiDensityImageSource__ctor_1_fn(MultiDensityImageSource* __this)
{
    __this->ctor_1();
}

// public override sealed texture2D GetTexture() :722
void MultiDensityImageSource__GetTexture_fn(MultiDensityImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    return *__retval = uPtr(__this->_proxy)->GetTexture(), void();
}

// public float get_MatchDensity() :642
void MultiDensityImageSource__get_MatchDensity_fn(MultiDensityImageSource* __this, float* __retval)
{
    *__retval = __this->MatchDensity();
}

// public void set_MatchDensity(float value) :643
void MultiDensityImageSource__set_MatchDensity_fn(MultiDensityImageSource* __this, float* value)
{
    __this->MatchDensity(*value);
}

// public MultiDensityImageSource New() :620
void MultiDensityImageSource__New1_fn(MultiDensityImageSource** __retval)
{
    *__retval = MultiDensityImageSource::New1();
}

// private void OnImageAdded(Fuse.Resources.ImageSource img) :626
void MultiDensityImageSource__OnImageAdded_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* img)
{
    __this->OnImageAdded(img);
}

// private void OnImageRemoved(Fuse.Resources.ImageSource img) :632
void MultiDensityImageSource__OnImageRemoved_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* img)
{
    __this->OnImageRemoved(img);
}

// protected override sealed void OnPinChanged() :692
void MultiDensityImageSource__OnPinChanged_fn(MultiDensityImageSource* __this)
{
    __this->SelectActive();
    uPtr(__this->_proxy)->OnPinChanged();
}

// public override sealed int2 get_PixelSize() :708
void MultiDensityImageSource__get_PixelSize_fn(MultiDensityImageSource* __this, ::g::Uno::Int2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->PixelSize(), void();
}

// public override sealed void Reload() :727
void MultiDensityImageSource__Reload_fn(MultiDensityImageSource* __this)
{
    uPtr(__this->_proxy)->Reload();
}

// private void SelectActive() :655
void MultiDensityImageSource__SelectActive_fn(MultiDensityImageSource* __this)
{
    __this->SelectActive();
}

// public override sealed float2 get_Size() :700
void MultiDensityImageSource__get_Size_fn(MultiDensityImageSource* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Size(), void();
}

// public override sealed float get_SizeDensity() :734
void MultiDensityImageSource__get_SizeDensity_fn(MultiDensityImageSource* __this, float* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Density(), void();
}

// public Uno.Collections.IList<Fuse.Resources.ImageSource> get_Sources() :612
void MultiDensityImageSource__get_Sources_fn(MultiDensityImageSource* __this, uObject** __retval)
{
    *__retval = __this->Sources();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :716
void MultiDensityImageSource__get_State_fn(MultiDensityImageSource* __this, int* __retval)
{
    return *__retval = uPtr(__this->_proxy)->State(), void();
}

// private void SwapActive(Fuse.Resources.ImageSource use) :674
void MultiDensityImageSource__SwapActive_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* use)
{
    __this->SwapActive(use);
}

// public MultiDensityImageSource() [instance] :620
void MultiDensityImageSource::ctor_1()
{
    ctor_();
    _sources = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[33/*Uno.Collections.ObservableList<Fuse.Resources.ImageSource>*/], uDelegate::New(::TYPES[34/*Uno.Action<Fuse.Resources.ImageSource>*/], (void*)MultiDensityImageSource__OnImageAdded_fn, this), uDelegate::New(::TYPES[34/*Uno.Action<Fuse.Resources.ImageSource>*/], (void*)MultiDensityImageSource__OnImageRemoved_fn, this)));
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
}

// public float get_MatchDensity() [instance] :642
float MultiDensityImageSource::MatchDensity()
{
    return _matchDensity;
}

// public void set_MatchDensity(float value) [instance] :643
void MultiDensityImageSource::MatchDensity(float value)
{
    if (_hasMatchDensity && (_matchDensity == value))
        return;

    _hasMatchDensity = true;
    _matchDensity = value;
    SelectActive();
}

// private void OnImageAdded(Fuse.Resources.ImageSource img) [instance] :626
void MultiDensityImageSource::OnImageAdded(::g::Fuse::Resources::ImageSource* img)
{
    if (IsPinned())
        SelectActive();
}

// private void OnImageRemoved(Fuse.Resources.ImageSource img) [instance] :632
void MultiDensityImageSource::OnImageRemoved(::g::Fuse::Resources::ImageSource* img)
{
    if (IsPinned())
        SelectActive();
}

// private void SelectActive() [instance] :655
void MultiDensityImageSource::SelectActive()
{
    ::g::Fuse::Resources::ImageSource* ret3;
    float screen = _hasMatchDensity ? _matchDensity : ::g::Fuse::RootViewport::DefaultDensity();
    float diff = FLT_INF;
    ::g::Fuse::Resources::ImageSource* use = NULL;

    for (uObject* enum1 = (uObject*)uPtr(_sources)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Resources::ImageSource* source = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[36/*Uno.Collections.IEnumerator<Fuse.Resources.ImageSource>*/]), &ret3), ret3);
        float d = ::g::Uno::Math::Abs1(uPtr(source)->SizeDensity() - screen);

        if (d < diff)
        {
            use = source;
            diff = d;
        }
    }

    SwapActive(use);
}

// public Uno.Collections.IList<Fuse.Resources.ImageSource> get_Sources() [instance] :612
uObject* MultiDensityImageSource::Sources()
{
    return (uObject*)_sources;
}

// private void SwapActive(Fuse.Resources.ImageSource use) [instance] :674
void MultiDensityImageSource::SwapActive(::g::Fuse::Resources::ImageSource* use)
{
    if (use == _active)
        return;

    if (_active != NULL)
        uPtr(_proxy)->Release();

    _active = use;

    if (use != NULL)
        uPtr(_proxy)->Attach(use);
}

// public MultiDensityImageSource New() [static] :620
MultiDensityImageSource* MultiDensityImageSource::New1()
{
    MultiDensityImageSource* obj2 = (MultiDensityImageSource*)uNew(MultiDensityImageSource_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(301)
// ----------------------------------------------------------------

// internal abstract class NumericResourceConverter<T> :301
// {
NumericResourceConverter_type* NumericResourceConverter_typeof()
{
    static uSStrong<NumericResourceConverter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NumericResourceConverter);
    options.TypeSize = sizeof(NumericResourceConverter_type);
    type = (NumericResourceConverter_type*)uClassType::New("Fuse.Resources.NumericResourceConverter`1", options);
    type->interface0.fp_Accept = (void(*)(uObject*, uObject*, bool*))NumericResourceConverter__Accept_fn;
    ::TYPES[18] = ::g::Uno::Float_typeof();
    ::TYPES[4] = ::g::Uno::Int_typeof();
    ::TYPES[38] = ::g::Uno::Double_typeof();
    type->SetInterfaces(
        ::g::Fuse::Resources::IResourceConverter_typeof()->MakeType(type->T(0)), offsetof(NumericResourceConverter_type, interface0));
    return type;
}

// protected generated NumericResourceConverter() :301
void NumericResourceConverter__ctor__fn(NumericResourceConverter* __this)
{
    __this->ctor_();
}

// public bool Accept(object o) :303
void NumericResourceConverter__Accept_fn(NumericResourceConverter* __this, uObject* o, bool* __retval)
{
    *__retval = __this->Accept(o);
}

// protected double InternConvert(object o) :308
void NumericResourceConverter__InternConvert_fn(NumericResourceConverter* __this, uObject* o, double* __retval)
{
    *__retval = __this->InternConvert(o);
}

// protected generated NumericResourceConverter() [instance] :301
void NumericResourceConverter::ctor_()
{
}

// public bool Accept(object o) [instance] :303
bool NumericResourceConverter::Accept(uObject* o)
{
    bool q = (uIs(o, ::TYPES[18/*float*/]) || uIs(o, ::TYPES[4/*int*/])) || uIs(o, ::TYPES[38/*double*/]);
    return q;
}

// protected double InternConvert(object o) [instance] :308
double NumericResourceConverter::InternConvert(uObject* o)
{
    if (uIs(o, ::TYPES[18/*float*/]))
        return (double)uUnbox<float>(::TYPES[18/*float*/], o);

    if (uIs(o, ::TYPES[38/*double*/]))
        return uUnbox<double>(::TYPES[38/*double*/], o);

    if (uIs(o, ::TYPES[4/*int*/]))
        return (double)uUnbox<int>(::TYPES[4/*int*/], o);

    return 0.0;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(196)
// ----------------------------------------------------------------

// internal abstract class PolicyDeferredDisposable :196
// {
PolicyDeferredDisposable_type* PolicyDeferredDisposable_typeof()
{
    static uSStrong<PolicyDeferredDisposable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(PolicyDeferredDisposable);
    options.TypeSize = sizeof(PolicyDeferredDisposable_type);
    type = (PolicyDeferredDisposable_type*)uClassType::New("Fuse.Resources.PolicyDeferredDisposable", options);
    type->interface0.fp_MarkUsed = (void(*)(uObject*))PolicyDeferredDisposable__MarkUsed_fn;
    type->interface0.fp_CanDispose = (void(*)(uObject*, int*, bool*))PolicyDeferredDisposable__CanDispose_fn;
    type->SetInterfaces(
        ::g::Fuse::Resources::IDeferredDisposable_typeof(), offsetof(PolicyDeferredDisposable_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(PolicyDeferredDisposable_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Resources::DisposalPolicy_typeof(), offsetof(::g::Fuse::Resources::PolicyDeferredDisposable, Policy), 0);
    return type;
}

// protected generated PolicyDeferredDisposable() :196
void PolicyDeferredDisposable__ctor__fn(PolicyDeferredDisposable* __this)
{
    __this->ctor_();
}

// public bool CanDispose(Fuse.Resources.DisposalRequest dr) :206
void PolicyDeferredDisposable__CanDispose_fn(PolicyDeferredDisposable* __this, int* dr, bool* __retval)
{
    *__retval = __this->CanDispose(*dr);
}

// protected bool get_IsPinned() :215
void PolicyDeferredDisposable__get_IsPinned_fn(PolicyDeferredDisposable* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// public void MarkUsed() :200
void PolicyDeferredDisposable__MarkUsed_fn(PolicyDeferredDisposable* __this)
{
    __this->MarkUsed();
}

// protected generated PolicyDeferredDisposable() [instance] :196
void PolicyDeferredDisposable::ctor_()
{
}

// public bool CanDispose(Fuse.Resources.DisposalRequest dr) [instance] :206
bool PolicyDeferredDisposable::CanDispose(int dr)
{
    if (Policy != NULL)
        return uPtr(Policy)->CanDispose(dr, IsPinned());

    return true;
}

// protected bool get_IsPinned() [instance] :215
bool PolicyDeferredDisposable::IsPinned()
{
    return false;
}

// public void MarkUsed() [instance] :200
void PolicyDeferredDisposable::MarkUsed()
{
    if (Policy != NULL)
        uPtr(Policy)->MarkUsed();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Resources\$.uno(749)
// ---------------------------------------------------------------------

// internal sealed class ProxyImageSource :749
// {
uType* ProxyImageSource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(ProxyImageSource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.ProxyImageSource", options);
    ::TYPES[9] = ::g::Fuse::Resources::MemoryPolicy_typeof();
    ::TYPES[8] = ::g::Fuse::Resources::ImageSource_typeof();
    ::TYPES[27] = ::g::Uno::EventHandler_typeof();
    ::TYPES[30] = ::g::Fuse::Resources::ImageSourceErrorHandler_typeof();
    ::TYPES[17] = ::g::Fuse::Resources::LoadingImageSource_typeof();
    ::TYPES[25] = uObject_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[31] = ::g::Uno::Graphics::Texture2D_typeof();
    ::TYPES[18] = ::g::Uno::Float_typeof();
    ::TYPES[32] = ::g::Uno::Int2_typeof();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Resources::ProxyImageSource, _density), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::ProxyImageSource, _hasDensity), 0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(::g::Fuse::Resources::ProxyImageSource, _impl), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Resources::ProxyImageSource, _isDefaultPolicy), 0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(::g::Fuse::Resources::ProxyImageSource, _outer), 0,
        ::g::Fuse::Resources::MemoryPolicy_typeof(), offsetof(::g::Fuse::Resources::ProxyImageSource, _policy), 0);
    return type;
}

// public ProxyImageSource(Fuse.Resources.ImageSource outer) :752
void ProxyImageSource__ctor__fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource* outer)
{
    __this->ctor_(outer);
}

// public void Attach(Fuse.Resources.ImageSource impl) :881
void ProxyImageSource__Attach_fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource* impl)
{
    __this->Attach(impl);
}

// public void DefaultSetPolicy(Fuse.Resources.MemoryPolicy mp) :785
void ProxyImageSource__DefaultSetPolicy_fn(ProxyImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* mp)
{
    __this->DefaultSetPolicy(mp);
}

// public float get_Density() :830
void ProxyImageSource__get_Density_fn(ProxyImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :836
void ProxyImageSource__set_Density_fn(ProxyImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public texture2D GetTexture() :848
void ProxyImageSource__GetTexture_fn(ProxyImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->GetTexture();
}

// public Fuse.Resources.ImageSource get_Impl() :758
void ProxyImageSource__get_Impl_fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Impl();
}

// public ProxyImageSource New(Fuse.Resources.ImageSource outer) :752
void ProxyImageSource__New1_fn(::g::Fuse::Resources::ImageSource* outer, ProxyImageSource** __retval)
{
    *__retval = ProxyImageSource::New1(outer);
}

// public void OnPinChanged() :760
void ProxyImageSource__OnPinChanged_fn(ProxyImageSource* __this)
{
    __this->OnPinChanged();
}

// public int2 get_PixelSize() :815
void ProxyImageSource__get_PixelSize_fn(ProxyImageSource* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->PixelSize();
}

// public Fuse.Resources.MemoryPolicy get_Policy() :775
void ProxyImageSource__get_Policy_fn(ProxyImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) :776
void ProxyImageSource__set_Policy_fn(ProxyImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->Policy(value);
}

// private void ProxyOnChanged(object s, Uno.EventArgs a) :871
void ProxyImageSource__ProxyOnChanged_fn(ProxyImageSource* __this, uObject* s, ::g::Uno::EventArgs* a)
{
    __this->ProxyOnChanged(s, a);
}

// private void ProxyOnError(object s, Fuse.Resources.ImageSourceErrorArgs a) :876
void ProxyImageSource__ProxyOnError_fn(ProxyImageSource* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    __this->ProxyOnError(s, a);
}

// public void Release() :859
void ProxyImageSource__Release_fn(ProxyImageSource* __this)
{
    __this->Release();
}

// public void Reload() :853
void ProxyImageSource__Reload_fn(ProxyImageSource* __this)
{
    __this->Reload();
}

// public float2 get_Size() :803
void ProxyImageSource__get_Size_fn(ProxyImageSource* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public Fuse.Resources.ImageSourceState get_State() :845
void ProxyImageSource__get_State_fn(ProxyImageSource* __this, int* __retval)
{
    *__retval = __this->State();
}

// private void UpdatePolicy() :794
void ProxyImageSource__UpdatePolicy_fn(ProxyImageSource* __this)
{
    __this->UpdatePolicy();
}

// public ProxyImageSource(Fuse.Resources.ImageSource outer) [instance] :752
void ProxyImageSource::ctor_(::g::Fuse::Resources::ImageSource* outer)
{
    _isDefaultPolicy = true;
    _policy = ::g::Fuse::Resources::MemoryPolicy::PreloadRetain();
    _density = 1.0f;
    _outer = outer;
}

// public void Attach(Fuse.Resources.ImageSource impl) [instance] :881
void ProxyImageSource::Attach(::g::Fuse::Resources::ImageSource* impl)
{
    _impl = impl;
    uPtr(_impl)->add_Changed(uDelegate::New(::TYPES[27/*Uno.EventHandler*/], (void*)ProxyImageSource__ProxyOnChanged_fn, this));
    uPtr(_impl)->add_Error(uDelegate::New(::TYPES[30/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ProxyImageSource__ProxyOnError_fn, this));

    if (uPtr(_outer)->IsPinned())
        uPtr(_impl)->Pin();

    ::g::Fuse::Resources::LoadingImageSource* loading = uAs< ::g::Fuse::Resources::LoadingImageSource*>(impl, ::TYPES[17/*Fuse.Resources.LoadingImageSource*/]);

    if (loading != NULL)
        uPtr(loading)->Policy(_policy);

    uPtr(_outer)->ProxyChanged(this, ::g::Uno::EventArgs::New1());
}

// public void DefaultSetPolicy(Fuse.Resources.MemoryPolicy mp) [instance] :785
void ProxyImageSource::DefaultSetPolicy(::g::Fuse::Resources::MemoryPolicy* mp)
{
    if (!_isDefaultPolicy)
        return;

    _policy = mp;
    UpdatePolicy();
}

// public float get_Density() [instance] :830
float ProxyImageSource::Density()
{
    if (_hasDensity || (_impl == NULL))
        return _density;

    return uPtr(_impl)->SizeDensity();
}

// public void set_Density(float value) [instance] :836
void ProxyImageSource::Density(float value)
{
    _density = value;
    _hasDensity = true;
}

// public texture2D GetTexture() [instance] :848
::g::Uno::Graphics::Texture2D* ProxyImageSource::GetTexture()
{
    return (_impl == NULL) ? uCast< ::g::Uno::Graphics::Texture2D*>(NULL, ::TYPES[31/*texture2D*/]) : (::g::Uno::Graphics::Texture2D*)uPtr(_impl)->GetTexture();
}

// public Fuse.Resources.ImageSource get_Impl() [instance] :758
::g::Fuse::Resources::ImageSource* ProxyImageSource::Impl()
{
    return _impl;
}

// public void OnPinChanged() [instance] :760
void ProxyImageSource::OnPinChanged()
{
    if (_impl == NULL)
        return;

    if (uPtr(_outer)->IsPinned())
        uPtr(_impl)->Pin();
    else
        uPtr(_impl)->Unpin();
}

// public int2 get_PixelSize() [instance] :815
::g::Uno::Int2 ProxyImageSource::PixelSize()
{
    if (_impl == NULL)
        return ::g::Uno::Int2__New1(0);

    return uPtr(_impl)->PixelSize();
}

// public Fuse.Resources.MemoryPolicy get_Policy() [instance] :775
::g::Fuse::Resources::MemoryPolicy* ProxyImageSource::Policy()
{
    return _policy;
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) [instance] :776
void ProxyImageSource::Policy(::g::Fuse::Resources::MemoryPolicy* value)
{
    _policy = value;
    _isDefaultPolicy = false;
    UpdatePolicy();
}

// private void ProxyOnChanged(object s, Uno.EventArgs a) [instance] :871
void ProxyImageSource::ProxyOnChanged(uObject* s, ::g::Uno::EventArgs* a)
{
    uPtr(_outer)->ProxyChanged(this, a);
}

// private void ProxyOnError(object s, Fuse.Resources.ImageSourceErrorArgs a) [instance] :876
void ProxyImageSource::ProxyOnError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    uPtr(_outer)->ProxyError(this, a);
}

// public void Release() [instance] :859
void ProxyImageSource::Release()
{
    if (_impl != NULL)
    {
        if (uPtr(_outer)->IsPinned())
            uPtr(_impl)->Unpin();

        uPtr(_impl)->remove_Changed(uDelegate::New(::TYPES[27/*Uno.EventHandler*/], (void*)ProxyImageSource__ProxyOnChanged_fn, this));
        uPtr(_impl)->remove_Error(uDelegate::New(::TYPES[30/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ProxyImageSource__ProxyOnError_fn, this));
        _impl = NULL;
    }
}

// public void Reload() [instance] :853
void ProxyImageSource::Reload()
{
    if (_impl != NULL)
        uPtr(_impl)->Reload();
}

// public float2 get_Size() [instance] :803
::g::Uno::Float2 ProxyImageSource::Size()
{
    if (_impl == NULL)
        return ::g::Uno::Float2__New1(0.0f);

    ::g::Uno::Int2 ps = uPtr(_impl)->PixelSize();
    return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)ps.X, (float)ps.Y), _density);
}

// public Fuse.Resources.ImageSourceState get_State() [instance] :845
int ProxyImageSource::State()
{
    return (_impl == NULL) ? 0 : uPtr(_impl)->State();
}

// private void UpdatePolicy() [instance] :794
void ProxyImageSource::UpdatePolicy()
{
    ::g::Fuse::Resources::LoadingImageSource* loading = uAs< ::g::Fuse::Resources::LoadingImageSource*>(_impl, ::TYPES[17/*Fuse.Resources.LoadingImageSource*/]);

    if (loading != NULL)
        uPtr(loading)->Policy(_policy);
}

// public ProxyImageSource New(Fuse.Resources.ImageSource outer) [static] :752
ProxyImageSource* ProxyImageSource::New1(::g::Fuse::Resources::ImageSource* outer)
{
    ProxyImageSource* obj1 = (ProxyImageSource*)uNew(ProxyImageSource_typeof());
    obj1->ctor_(outer);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(378)
// ----------------------------------------------------------------

// public sealed class ResourceBinding<T> :378
// {
::g::Fuse::Behavior_type* ResourceBinding_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ResourceBinding);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Resources.ResourceBinding`1", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ResourceBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ResourceBinding__OnUnrooted_fn;
    ::STRINGS[12] = uString::Const("target");
    ::TYPES[39] = ::g::Fuse::Behavior_typeof();
    ::TYPES[40] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[25] = uObject_typeof();
    ::TYPES[41] = ::g::Fuse::Resources::ResourceConverters_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    type->SetPrecalc(
        ::TYPES[41/*Fuse.Resources.ResourceConverters*/]->MakeMethod(1, type->T(0)));
    type->SetFields(3,
        ::g::Fuse::Resources::IResourceConverter_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Resources::ResourceBinding, _converter), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Resources::ResourceBinding, _Key), 0,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Resources::ResourceBinding, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Key", NULL, (void*)ResourceBinding__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", type, (void*)ResourceBinding__New1_fn, 0, true, type, 2, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), ::g::Uno::String_typeof()),
        new uFunction("get_Target", NULL, (void*)ResourceBinding__get_Target_fn, 0, false, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), 0));
    return type;
}

// public ResourceBinding(Uno.UX.Property<T> target, string key) :387
void ResourceBinding__ctor_1_fn(ResourceBinding* __this, ::g::Uno::UX::Property* target, uString* key)
{
    __this->ctor_1(target, key);
}

// public generated string get_Key() :384
void ResourceBinding__get_Key_fn(ResourceBinding* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :384
void ResourceBinding__set_Key_fn(ResourceBinding* __this, uString* value)
{
    __this->Key(value);
}

// public ResourceBinding New(Uno.UX.Property<T> target, string key) :387
void ResourceBinding__New1_fn(uType* __type, ::g::Uno::UX::Property* target, uString* key, ResourceBinding** __retval)
{
    *__retval = ResourceBinding::New1(__type, target, key);
}

// private void OnChanged() :408
void ResourceBinding__OnChanged_fn(ResourceBinding* __this)
{
    __this->OnChanged();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :396
void ResourceBinding__OnRooted_fn(ResourceBinding* __this, ::g::Fuse::Node* parentNode)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Resources.ResourceConverters.Get<T>*/),
        __this->__type->T(0),
    };
    __this->_converter = ((uObject*)::g::Fuse::Resources::ResourceConverters::Get(__types[0]));
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(__this->Key(), uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)ResourceBinding__OnChanged_fn, __this));
    __this->OnChanged();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :403
void ResourceBinding__OnUnrooted_fn(ResourceBinding* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(__this->Key(), uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)ResourceBinding__OnChanged_fn, __this));
}

// public generated Uno.UX.Property<T> get_Target() :381
void ResourceBinding__get_Target_fn(ResourceBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :381
void ResourceBinding__set_Target_fn(ResourceBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// public ResourceBinding(Uno.UX.Property<T> target, string key) [instance] :387
void ResourceBinding::ctor_1(::g::Uno::UX::Property* target, uString* key)
{
    ctor_();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[12/*"target"*/]));

    Target(target);
    Key(key);
}

// public generated string get_Key() [instance] :384
uString* ResourceBinding::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :384
void ResourceBinding::Key(uString* value)
{
    _Key = value;
}

// private void OnChanged() [instance] :408
void ResourceBinding::OnChanged()
{
    uType* __types[] = {
        __type->T(0),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    uObject* resource;

    if (uPtr(ParentNode())->TryGetResource(Key(), uDelegate::New(::TYPES[40/*Uno.Predicate<object>*/], uInterface(uPtr(_converter), ::TYPES[44/*Fuse.Resources.IResourceConverter`1*/]->MakeType(__types[0])), offsetof(::g::Fuse::Resources::IResourceConverter, fp_Accept)), &resource))
        ::g::Uno::UX::Property__SetRestState_fn(uPtr(Target()), (::g::Fuse::Resources::IResourceConverter::Convert_ex(uInterface(uPtr(_converter), ::TYPES[44/*Fuse.Resources.IResourceConverter`1*/]->MakeType(__types[0])), resource, &ret2), ret2), this);
}

// public generated Uno.UX.Property<T> get_Target() [instance] :381
::g::Uno::UX::Property* ResourceBinding::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :381
void ResourceBinding::Target(::g::Uno::UX::Property* value)
{
    _Target = value;
}

// public ResourceBinding New(Uno.UX.Property<T> target, string key) [static] :387
ResourceBinding* ResourceBinding::New1(uType* __type, ::g::Uno::UX::Property* target, uString* key)
{
    ResourceBinding* obj1 = (ResourceBinding*)uNew(__type);
    obj1->ctor_1(target, key);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(511)
// ----------------------------------------------------------------

// public sealed class ResourceBool :511
// {
::g::Fuse::Behavior_type* ResourceBool_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ResourceBool);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Resources.ResourceBool", options);
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_ctor_ = (void*)ResourceBool__New1_fn;
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceBool__New1_fn, 0, true, ResourceBool_typeof(), 0));
    return type;
}

// public generated ResourceBool() :511
void ResourceBool__ctor_2_fn(ResourceBool* __this)
{
    __this->ctor_2();
}

// public generated ResourceBool New() :511
void ResourceBool__New1_fn(ResourceBool** __retval)
{
    *__retval = ResourceBool::New1();
}

// public generated ResourceBool() [instance] :511
void ResourceBool::ctor_2()
{
    ctor_1();
}

// public generated ResourceBool New() [static] :511
ResourceBool* ResourceBool::New1()
{
    ResourceBool* obj1 = (ResourceBool*)uNew(ResourceBool_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(350)
// ----------------------------------------------------------------

// internal static class ResourceConverters :350
// {
// static ResourceConverters() :350
static void ResourceConverters__cctor__fn(uType* __type)
{
    ResourceConverters::_converters_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[42/*Uno.Collections.Dictionary<Uno.Type, object>*/]));
}

uClassType* ResourceConverters_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.ResourceConverters", options);
    type->fp_cctor_ = ResourceConverters__cctor__fn;
    ::TYPES[42] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), uObject_typeof());
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[18] = ::g::Uno::Float_typeof();
    ::TYPES[25] = uObject_typeof();
    ::TYPES[38] = ::g::Uno::Double_typeof();
    ::TYPES[4] = ::g::Uno::Int_typeof();
    ::TYPES[43] = ::g::Fuse::Resources::GenericResourceConverter_typeof();
    ::TYPES[44] = ::g::Fuse::Resources::IResourceConverter_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), uObject_typeof()), (uintptr_t)&::g::Fuse::Resources::ResourceConverters::_converters_, uFieldFlagsStatic);
    return type;
}

// public static Fuse.Resources.IResourceConverter<T> Get<T>() :354
void ResourceConverters__Get_fn(uType* __type, uObject** __retval)
{
    *__retval = ResourceConverters::Get(__type);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ResourceConverters::_converters_;

// public static Fuse.Resources.IResourceConverter<T> Get<T>() [static] :354
uObject* ResourceConverters::Get(uType* __type)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[43/*Fuse.Resources.GenericResourceConverter`1*/]->MakeType(__type->U(0)),
        ::TYPES[44/*Fuse.Resources.IResourceConverter`1*/]->MakeType(__type->U(0)),
    };
    ResourceConverters_typeof()->Init();
    bool ret1;
    uObject* converter;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ResourceConverters::_converters()), __types[0], (void**)(&converter), &ret1), ret1))
    {
        if (::g::Uno::Type::op_Equality(__types[0], ::TYPES[18/*float*/]))
            converter = ::g::Fuse::Resources::FloatResourceConverter::New1();
        else if (::g::Uno::Type::op_Equality(__types[0], ::TYPES[38/*double*/]))
            converter = ::g::Fuse::Resources::DoubleResourceConverter::New1();
        else if (::g::Uno::Type::op_Equality(__types[0], ::TYPES[4/*int*/]))
            converter = ::g::Fuse::Resources::IntResourceConverter::New1();
        else
            converter = (::g::Fuse::Resources::GenericResourceConverter*)::g::Fuse::Resources::GenericResourceConverter::New1(__types[1]);

        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ResourceConverters::_converters()), __types[0], converter);
    }

    return (uObject*)converter;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(512)
// ----------------------------------------------------------------

// public sealed class ResourceFloat :512
// {
::g::Fuse::Behavior_type* ResourceFloat_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ResourceFloat);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Resources.ResourceFloat", options);
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_ctor_ = (void*)ResourceFloat__New1_fn;
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceFloat__New1_fn, 0, true, ResourceFloat_typeof(), 0));
    return type;
}

// public generated ResourceFloat() :512
void ResourceFloat__ctor_2_fn(ResourceFloat* __this)
{
    __this->ctor_2();
}

// public generated ResourceFloat New() :512
void ResourceFloat__New1_fn(ResourceFloat** __retval)
{
    *__retval = ResourceFloat::New1();
}

// public generated ResourceFloat() [instance] :512
void ResourceFloat::ctor_2()
{
    ctor_1();
}

// public generated ResourceFloat New() [static] :512
ResourceFloat* ResourceFloat::New1()
{
    ResourceFloat* obj1 = (ResourceFloat*)uNew(ResourceFloat_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(513)
// ----------------------------------------------------------------

// public sealed class ResourceFloat2 :513
// {
::g::Fuse::Behavior_type* ResourceFloat2_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ResourceFloat2);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Resources.ResourceFloat2", options);
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(::g::Uno::Float2_typeof()));
    type->fp_ctor_ = (void*)ResourceFloat2__New1_fn;
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceFloat2__New1_fn, 0, true, ResourceFloat2_typeof(), 0));
    return type;
}

// public generated ResourceFloat2() :513
void ResourceFloat2__ctor_2_fn(ResourceFloat2* __this)
{
    __this->ctor_2();
}

// public generated ResourceFloat2 New() :513
void ResourceFloat2__New1_fn(ResourceFloat2** __retval)
{
    *__retval = ResourceFloat2::New1();
}

// public generated ResourceFloat2() [instance] :513
void ResourceFloat2::ctor_2()
{
    ctor_1();
}

// public generated ResourceFloat2 New() [static] :513
ResourceFloat2* ResourceFloat2::New1()
{
    ResourceFloat2* obj1 = (ResourceFloat2*)uNew(ResourceFloat2_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(514)
// ----------------------------------------------------------------

// public sealed class ResourceFloat3 :514
// {
::g::Fuse::Behavior_type* ResourceFloat3_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ResourceFloat3);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Resources.ResourceFloat3", options);
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(::g::Uno::Float3_typeof()));
    type->fp_ctor_ = (void*)ResourceFloat3__New1_fn;
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceFloat3__New1_fn, 0, true, ResourceFloat3_typeof(), 0));
    return type;
}

// public generated ResourceFloat3() :514
void ResourceFloat3__ctor_2_fn(ResourceFloat3* __this)
{
    __this->ctor_2();
}

// public generated ResourceFloat3 New() :514
void ResourceFloat3__New1_fn(ResourceFloat3** __retval)
{
    *__retval = ResourceFloat3::New1();
}

// public generated ResourceFloat3() [instance] :514
void ResourceFloat3::ctor_2()
{
    ctor_1();
}

// public generated ResourceFloat3 New() [static] :514
ResourceFloat3* ResourceFloat3::New1()
{
    ResourceFloat3* obj1 = (ResourceFloat3*)uNew(ResourceFloat3_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(515)
// ----------------------------------------------------------------

// public sealed class ResourceFloat4 :515
// {
::g::Fuse::Behavior_type* ResourceFloat4_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ResourceFloat4);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Resources.ResourceFloat4", options);
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_ctor_ = (void*)ResourceFloat4__New1_fn;
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceFloat4__New1_fn, 0, true, ResourceFloat4_typeof(), 0));
    return type;
}

// public generated ResourceFloat4() :515
void ResourceFloat4__ctor_2_fn(ResourceFloat4* __this)
{
    __this->ctor_2();
}

// public generated ResourceFloat4 New() :515
void ResourceFloat4__New1_fn(ResourceFloat4** __retval)
{
    *__retval = ResourceFloat4::New1();
}

// public generated ResourceFloat4() [instance] :515
void ResourceFloat4::ctor_2()
{
    ctor_1();
}

// public generated ResourceFloat4 New() [static] :515
ResourceFloat4* ResourceFloat4::New1()
{
    ResourceFloat4* obj1 = (ResourceFloat4*)uNew(ResourceFloat4_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(510)
// ----------------------------------------------------------------

// public sealed class ResourceObject :510
// {
::g::Fuse::Behavior_type* ResourceObject_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ResourceObject);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Resources.ResourceObject", options);
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(uObject_typeof()));
    type->fp_ctor_ = (void*)ResourceObject__New1_fn;
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceObject__New1_fn, 0, true, ResourceObject_typeof(), 0));
    return type;
}

// public generated ResourceObject() :510
void ResourceObject__ctor_2_fn(ResourceObject* __this)
{
    __this->ctor_2();
}

// public generated ResourceObject New() :510
void ResourceObject__New1_fn(ResourceObject** __retval)
{
    *__retval = ResourceObject::New1();
}

// public generated ResourceObject() [instance] :510
void ResourceObject::ctor_2()
{
    ctor_1();
}

// public generated ResourceObject New() [static] :510
ResourceObject* ResourceObject::New1()
{
    ResourceObject* obj1 = (ResourceObject*)uNew(ResourceObject_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(428)
// ----------------------------------------------------------------

// public static class ResourceRegistry :428
// {
// static ResourceRegistry() :428
static void ResourceRegistry__cctor__fn(uType* __type)
{
    ResourceRegistry::_handlers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[45/*Uno.Collections.Dictionary<string, Uno.Collections.List<Uno.Action>>*/]));
}

uClassType* ResourceRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.ResourceRegistry", options);
    type->fp_cctor_ = ResourceRegistry__cctor__fn;
    ::TYPES[45] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof()));
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[46] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[47] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[5] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof())), (uintptr_t)&::g::Fuse::Resources::ResourceRegistry::_handlers_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("AddResourceChangedHandler", NULL, (void*)ResourceRegistry__AddResourceChangedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Action_typeof()),
        new uFunction("NotifyResourceChanged", NULL, (void*)ResourceRegistry__NotifyResourceChanged_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("RemoveResourceChangedHandler", NULL, (void*)ResourceRegistry__RemoveResourceChangedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Action_typeof()));
    return type;
}

// public static void AddResourceChangedHandler(string key, Uno.Action handler) :432
void ResourceRegistry__AddResourceChangedHandler_fn(uString* key, uDelegate* handler)
{
    ResourceRegistry::AddResourceChangedHandler(key, handler);
}

// public static void NotifyResourceChanged(string key) :448
void ResourceRegistry__NotifyResourceChanged_fn(uString* key)
{
    ResourceRegistry::NotifyResourceChanged(key);
}

// public static void RemoveResourceChangedHandler(string key, Uno.Action handler) :442
void ResourceRegistry__RemoveResourceChangedHandler_fn(uString* key, uDelegate* handler)
{
    ResourceRegistry::RemoveResourceChangedHandler(key, handler);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ResourceRegistry::_handlers_;

// public static void AddResourceChangedHandler(string key, Uno.Action handler) [static] :432
void ResourceRegistry::AddResourceChangedHandler(uString* key, uDelegate* handler)
{
    ResourceRegistry_typeof()->Init();
    bool ret2;
    ::g::Uno::Collections::List* ret3;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ResourceRegistry::_handlers()), key, &ret2), ret2))
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ResourceRegistry::_handlers()), key, (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[46/*Uno.Collections.List<Uno.Action>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ResourceRegistry::_handlers()), key, &ret3), ret3)), handler);
}

// public static void NotifyResourceChanged(string key) [static] :448
void ResourceRegistry::NotifyResourceChanged(uString* key)
{
    ResourceRegistry_typeof()->Init();
    bool ret4;
    ::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > ret5;
    ::g::Uno::Collections::List* list;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ResourceRegistry::_handlers()), key, (void**)(&list), &ret4), ret4))

        for (::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(list), &ret5), ret5); enum1.MoveNext(::TYPES[47/*Uno.Collections.List<Uno.Action>.Enumerator*/]); )
        {
            uDelegate* h = enum1.Current(::TYPES[47/*Uno.Collections.List<Uno.Action>.Enumerator*/]);
            uPtr(h)->InvokeVoid();
        }
}

// public static void RemoveResourceChangedHandler(string key, Uno.Action handler) [static] :442
void ResourceRegistry::RemoveResourceChangedHandler(uString* key, uDelegate* handler)
{
    ResourceRegistry_typeof()->Init();
    bool ret6;
    bool ret7;
    ::g::Uno::Collections::List* ret8;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ResourceRegistry::_handlers()), key, &ret6), ret6))
        U_THROW(::g::Uno::Exception::New1());

    ::g::Uno::Collections::List__Remove_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ResourceRegistry::_handlers()), key, &ret8), ret8)), handler, &ret7);
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(466)
// ----------------------------------------------------------------

// public abstract class ResourceSetter<T> :466
// {
::g::Fuse::Behavior_type* ResourceSetter_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ResourceSetter);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Resources.ResourceSetter`1", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ResourceSetter__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ResourceSetter__OnUnrooted_fn;
    ::TYPES[39] = ::g::Fuse::Behavior_typeof();
    ::TYPES[25] = uObject_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    type->SetFields(3,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Resources::ResourceSetter, _key), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Key", NULL, (void*)ResourceSetter__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Key", NULL, (void*)ResourceSetter__set_Key_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)ResourceSetter__get_Value_fn, 0, false, type->T(0), 0),
        new uFunction("set_Value", NULL, (void*)ResourceSetter__set_Value_fn, 0, false, uVoid_typeof(), 1, type->T(0)));
    return type;
}

// protected generated ResourceSetter() :466
void ResourceSetter__ctor_1_fn(ResourceSetter* __this)
{
    __this->ctor_1();
}

// public string get_Key() :471
void ResourceSetter__get_Key_fn(ResourceSetter* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// public void set_Key(string value) :472
void ResourceSetter__set_Key_fn(ResourceSetter* __this, uString* value)
{
    __this->Key(value);
}

// private void OnChanged() :502
void ResourceSetter__OnChanged_fn(ResourceSetter* __this)
{
    __this->OnChanged();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :493
void ResourceSetter__OnRooted_fn(ResourceSetter* __this, ::g::Fuse::Node* parentNode)
{
    __this->OnChanged();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :498
void ResourceSetter__OnUnrooted_fn(ResourceSetter* __this, ::g::Fuse::Node* parentNode)
{
}

// public T get_Value() :482
void ResourceSetter__get_Value_fn(ResourceSetter* __this, uTRef __retval)
{
    return __retval.Store(__this->_value()), void();
}

// public void set_Value(T value) :483
void ResourceSetter__set_Value_fn(ResourceSetter* __this, void* value)
{
    uType* __types[] = {
        __this->__type->GetBase(ResourceSetter_typeof())->T(0),
    };

    if (!::g::Uno::Object::Equals1(uBoxPtr(__types[0], __this->_value()), uBoxPtr(__types[0], value)))
    {
        __this->_value() = value;
        __this->OnChanged();
    }
}

// protected generated ResourceSetter() [instance] :466
void ResourceSetter::ctor_1()
{
    ctor_();
}

// public string get_Key() [instance] :471
uString* ResourceSetter::Key()
{
    return _key;
}

// public void set_Key(string value) [instance] :472
void ResourceSetter::Key(uString* value)
{
    _key = value;
    OnChanged();
}

// private void OnChanged() [instance] :502
void ResourceSetter::OnChanged()
{
    if ((ParentNode() != NULL) && ::g::Uno::String::op_Inequality(_key, NULL))
        uPtr(ParentNode())->SetResource(_key, uBoxPtr(__type->GetBase(ResourceSetter_typeof())->T(0), _value()));
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(509)
// ----------------------------------------------------------------

// public sealed class ResourceString :509
// {
::g::Fuse::Behavior_type* ResourceString_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ResourceString);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Resources.ResourceString", options);
    type->SetBase(::g::Fuse::Resources::ResourceSetter_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_ctor_ = (void*)ResourceString__New1_fn;
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceString__New1_fn, 0, true, ResourceString_typeof(), 0));
    return type;
}

// public generated ResourceString() :509
void ResourceString__ctor_2_fn(ResourceString* __this)
{
    __this->ctor_2();
}

// public generated ResourceString New() :509
void ResourceString__New1_fn(ResourceString** __retval)
{
    *__retval = ResourceString::New1();
}

// public generated ResourceString() [instance] :509
void ResourceString::ctor_2()
{
    ctor_1();
}

// public generated ResourceString New() [static] :509
ResourceString* ResourceString::New1()
{
    ResourceString* obj1 = (ResourceString*)uNew(ResourceString_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Resources\$.uno(145)
// ----------------------------------------------------------------

// internal sealed class RetainDisposalPolicy :145
// {
::g::Fuse::Resources::DisposalPolicy_type* RetainDisposalPolicy_typeof()
{
    static uSStrong< ::g::Fuse::Resources::DisposalPolicy_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(RetainDisposalPolicy);
    options.TypeSize = sizeof(::g::Fuse::Resources::DisposalPolicy_type);
    type = (::g::Fuse::Resources::DisposalPolicy_type*)uClassType::New("Fuse.Resources.RetainDisposalPolicy", options);
    type->SetBase(::g::Fuse::Resources::DisposalPolicy_typeof());
    type->fp_ctor_ = (void*)RetainDisposalPolicy__New1_fn;
    type->fp_CanDispose = (void(*)(::g::Fuse::Resources::DisposalPolicy*, int*, bool*, bool*))RetainDisposalPolicy__CanDispose_fn;
    type->fp_Clone = (void(*)(::g::Fuse::Resources::DisposalPolicy*, ::g::Fuse::Resources::DisposalPolicy**))RetainDisposalPolicy__Clone_fn;
    type->fp_MarkUsed = (void(*)(::g::Fuse::Resources::DisposalPolicy*))RetainDisposalPolicy__MarkUsed_fn;
    ::TYPES[7] = ::g::Fuse::Resources::DisposalPolicy_typeof();
    return type;
}

// public generated RetainDisposalPolicy() :145
void RetainDisposalPolicy__ctor_1_fn(RetainDisposalPolicy* __this)
{
    __this->ctor_1();
}

// public override sealed bool CanDispose(Fuse.Resources.DisposalRequest dr, bool pinned) :148
void RetainDisposalPolicy__CanDispose_fn(RetainDisposalPolicy* __this, int* dr, bool* pinned, bool* __retval)
{
    return *__retval = false, void();
}

// public override sealed Fuse.Resources.DisposalPolicy Clone() :149
void RetainDisposalPolicy__Clone_fn(RetainDisposalPolicy* __this, ::g::Fuse::Resources::DisposalPolicy** __retval)
{
    return *__retval = RetainDisposalPolicy::New1(), void();
}

// public override sealed void MarkUsed() :147
void RetainDisposalPolicy__MarkUsed_fn(RetainDisposalPolicy* __this)
{
}

// public generated RetainDisposalPolicy New() :145
void RetainDisposalPolicy__New1_fn(RetainDisposalPolicy** __retval)
{
    *__retval = RetainDisposalPolicy::New1();
}

// public generated RetainDisposalPolicy() [instance] :145
void RetainDisposalPolicy::ctor_1()
{
    ctor_();
}

// public generated RetainDisposalPolicy New() [static] :145
RetainDisposalPolicy* RetainDisposalPolicy::New1()
{
    RetainDisposalPolicy* obj1 = (RetainDisposalPolicy*)uNew(RetainDisposalPolicy_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Resources\$.uno(907)
// ---------------------------------------------------------------------

// public sealed class TextureImageSource :907
// {
::g::Fuse::Resources::ImageSource_type* TextureImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(TextureImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.TextureImageSource", options);
    type->SetBase(::g::Fuse::Resources::ImageSource_typeof());
    type->fp_ctor_ = (void*)TextureImageSource__New1_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))TextureImageSource__GetTexture_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))TextureImageSource__get_PixelSize_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))TextureImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))TextureImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int*))TextureImageSource__get_State_fn;
    ::TYPES[31] = ::g::Uno::Graphics::Texture2D_typeof();
    ::TYPES[18] = ::g::Uno::Float_typeof();
    ::TYPES[32] = ::g::Uno::Int2_typeof();
    type->SetFields(3,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Resources::TextureImageSource, _density), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Resources::TextureImageSource, _texture), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Density", NULL, (void*)TextureImageSource__get_Density_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Density", NULL, (void*)TextureImageSource__set_Density_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)TextureImageSource__New1_fn, 0, true, TextureImageSource_typeof(), 0),
        new uFunction("get_Texture", NULL, (void*)TextureImageSource__get_Texture_fn, 0, false, ::g::Uno::Graphics::Texture2D_typeof(), 0),
        new uFunction("set_Texture", NULL, (void*)TextureImageSource__set_Texture_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::Texture2D_typeof()));
    return type;
}

// public generated TextureImageSource() :907
void TextureImageSource__ctor_1_fn(TextureImageSource* __this)
{
    __this->ctor_1();
}

// public float get_Density() :927
void TextureImageSource__get_Density_fn(TextureImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :928
void TextureImageSource__set_Density_fn(TextureImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public override sealed texture2D GetTexture() :973
void TextureImageSource__GetTexture_fn(TextureImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    return *__retval = __this->_texture, void();
}

// public generated TextureImageSource New() :907
void TextureImageSource__New1_fn(TextureImageSource** __retval)
{
    *__retval = TextureImageSource::New1();
}

// public override sealed int2 get_PixelSize() :955
void TextureImageSource__get_PixelSize_fn(TextureImageSource* __this, ::g::Uno::Int2* __retval)
{
    if (__this->_texture != NULL)
        return *__retval = uPtr(__this->_texture)->Size(), void();

    return *__retval = ::g::Uno::Int2__New1(0), void();
}

// public override sealed float2 get_Size() :945
void TextureImageSource__get_Size_fn(TextureImageSource* __this, ::g::Uno::Float2* __retval)
{
    if (__this->_texture != NULL)
        return *__retval = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)uPtr(__this->_texture)->Size().X, (float)uPtr(__this->_texture)->Size().Y), __this->_density), void();

    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public override sealed float get_SizeDensity() :940
void TextureImageSource__get_SizeDensity_fn(TextureImageSource* __this, float* __retval)
{
    return *__retval = __this->Density(), void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State() :965
void TextureImageSource__get_State_fn(TextureImageSource* __this, int* __retval)
{
    if (__this->_texture != NULL)
        return *__retval = 1, void();

    return *__retval = 0, void();
}

// public texture2D get_Texture() :913
void TextureImageSource__get_Texture_fn(TextureImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->Texture();
}

// public void set_Texture(texture2D value) :914
void TextureImageSource__set_Texture_fn(TextureImageSource* __this, ::g::Uno::Graphics::Texture2D* value)
{
    __this->Texture(value);
}

// public generated TextureImageSource() [instance] :907
void TextureImageSource::ctor_1()
{
    _density = 1.0f;
    ctor_();
}

// public float get_Density() [instance] :927
float TextureImageSource::Density()
{
    return _density;
}

// public void set_Density(float value) [instance] :928
void TextureImageSource::Density(float value)
{
    if (_density != value)
    {
        _density = value;
        OnChanged();
    }
}

// public texture2D get_Texture() [instance] :913
::g::Uno::Graphics::Texture2D* TextureImageSource::Texture()
{
    return _texture;
}

// public void set_Texture(texture2D value) [instance] :914
void TextureImageSource::Texture(::g::Uno::Graphics::Texture2D* value)
{
    if (_texture != value)
    {
        _texture = value;
        OnChanged();
    }
}

// public generated TextureImageSource New() [static] :907
TextureImageSource* TextureImageSource::New1()
{
    TextureImageSource* obj1 = (TextureImageSource*)uNew(TextureImageSource_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}} // ::g::Fuse::Resources
