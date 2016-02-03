// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.BundleFile.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.IO.BinaryReader.h>
#include <Uno.IO.MemoryStream.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.StreamReader.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.Expression-1.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.IFactory.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.StreamExtensions.h>
#include <Uno.UX.Template-1.h>
#include <Uno.UX.UXComponentsAttribute.h>
#include <Uno.UX.UXConstructorAttribute.h>
#include <Uno.UX.UXContentAttribute.h>
#include <Uno.UX.UXFileNameAttribute.h>
#include <Uno.UX.UXGlobalResourceAttribute.h>
#include <Uno.UX.UXLineNumberAttribute.h>
#include <Uno.UX.UXNameAttribute.h>
#include <Uno.UX.UXPrimaryAttribute.h>
#include <Uno.UX.UXSourceFileNameAttribute.h>
#include <Uno.UX.UXValueBindingArgumentAttribute.h>
#include <Uno.UX.UXValueBindingTargetAttribute.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[1];
static uType* TYPES[19];

namespace g{
namespace Uno{
namespace UX{

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\$.uno(8)
// -----------------------------------------------------------------

// public sealed class BundleFileSource :8
// {
::g::Uno::UX::FileSource_type* BundleFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(BundleFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Uno.UX.BundleFileSource", options);
    type->SetBase(::g::Uno::UX::FileSource_typeof());
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))BundleFileSource__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))BundleFileSource__GetHashCode_fn;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))BundleFileSource__OpenRead_fn;
    type->fp_ReadAllBytes = (void(*)(::g::Uno::UX::FileSource*, uArray**))BundleFileSource__ReadAllBytes_fn;
    type->fp_ReadAllText = (void(*)(::g::Uno::UX::FileSource*, uString**))BundleFileSource__ReadAllText_fn;
    ::TYPES[0] = ::g::Uno::BundleFile_typeof();
    ::TYPES[1] = uObject_typeof();
    type->SetFields(2,
        ::g::Uno::BundleFile_typeof(), offsetof(::g::Uno::UX::BundleFileSource, BundleFile), 0);
    type->Reflection.SetFields(1,
        new uField("BundleFile", 2));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BundleFileSource__New1_fn, 0, true, BundleFileSource_typeof(), 1, ::g::Uno::BundleFile_typeof()));
    return type;
}

// public BundleFileSource(Uno.BundleFile bundleFile) :11
void BundleFileSource__ctor_1_fn(BundleFileSource* __this, ::g::Uno::BundleFile* bundleFile)
{
    __this->ctor_1(bundleFile);
}

// public override sealed bool Equals(object o) :31
void BundleFileSource__Equals_fn(BundleFileSource* __this, uObject* o, bool* __retval)
{
    BundleFileSource* bfs = uAs<BundleFileSource*>(o, BundleFileSource_typeof());

    if (bfs == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Uno::Object::Equals(uPtr(uPtr(bfs)->BundleFile), __this->BundleFile), void();
}

// public override sealed int GetHashCode() :40
void BundleFileSource__GetHashCode_fn(BundleFileSource* __this, int* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->BundleFile)), void();
}

// public BundleFileSource New(Uno.BundleFile bundleFile) :11
void BundleFileSource__New1_fn(::g::Uno::BundleFile* bundleFile, BundleFileSource** __retval)
{
    *__retval = BundleFileSource::New1(bundleFile);
}

// public override sealed Uno.IO.Stream OpenRead() :16
void BundleFileSource__OpenRead_fn(BundleFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    return *__retval = uPtr(__this->BundleFile)->OpenRead(), void();
}

// public override sealed byte[] ReadAllBytes() :21
void BundleFileSource__ReadAllBytes_fn(BundleFileSource* __this, uArray** __retval)
{
    return *__retval = uPtr(__this->BundleFile)->ReadAllBytes(), void();
}

// public override sealed string ReadAllText() :26
void BundleFileSource__ReadAllText_fn(BundleFileSource* __this, uString** __retval)
{
    return *__retval = uPtr(__this->BundleFile)->ReadAllText(), void();
}

// public BundleFileSource(Uno.BundleFile bundleFile) [instance] :11
void BundleFileSource::ctor_1(::g::Uno::BundleFile* bundleFile)
{
    ctor_(uPtr(bundleFile)->Name());
    BundleFile = bundleFile;
}

// public BundleFileSource New(Uno.BundleFile bundleFile) [static] :11
BundleFileSource* BundleFileSource::New1(::g::Uno::BundleFile* bundleFile)
{
    BundleFileSource* obj1 = (BundleFileSource*)uNew(BundleFileSource_typeof());
    obj1->ctor_1(bundleFile);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\Actions\$.uno(206)
// -------------------------------------------------------------------

// public delegate T Expression<T>() :206
uDelegateType* Expression_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.UX.Expression`1", 0, 1);
    type->SetSignature(type->T(0));
    return type;
}

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\$.uno(117)
// -------------------------------------------------------------------

// public abstract class FileSource :117
// {
FileSource_type* FileSource_typeof()
{
    static uSStrong<FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FileSource);
    options.TypeSize = sizeof(FileSource_type);
    type = (FileSource_type*)uClassType::New("Uno.UX.FileSource", options);
    type->fp_ReadAllBytes = FileSource__ReadAllBytes_fn;
    type->fp_ReadAllText = FileSource__ReadAllText_fn;
    ::TYPES[2] = ::g::Uno::Delegate_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof());
    ::TYPES[1] = uObject_typeof();
    ::TYPES[4] = ::g::Uno::EventArgs_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::FileSource, Name), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof()), offsetof(::g::Uno::UX::FileSource, DataChanged1), 0);
    type->Reflection.SetFields(1,
        new uField("Name", 0));
    type->Reflection.SetFunctions(6,
        new uFunction("add_DataChanged", NULL, (void*)FileSource__add_DataChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof())),
        new uFunction("remove_DataChanged", NULL, (void*)FileSource__remove_DataChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof())),
        new uFunction("OnDataChanged", NULL, (void*)FileSource__OnDataChanged_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("OpenRead", NULL, NULL, offsetof(FileSource_type, fp_OpenRead), false, ::g::Uno::IO::Stream_typeof(), 0),
        new uFunction("ReadAllBytes", NULL, NULL, offsetof(FileSource_type, fp_ReadAllBytes), false, ::g::Uno::Byte_typeof()->Array(), 0),
        new uFunction("ReadAllText", NULL, NULL, offsetof(FileSource_type, fp_ReadAllText), false, ::g::Uno::String_typeof(), 0));
    return type;
}

// protected FileSource(string name) :130
void FileSource__ctor__fn(FileSource* __this, uString* name)
{
    __this->ctor_(name);
}

// public generated void add_DataChanged(Uno.EventHandler<Uno.EventArgs> value) :121
void FileSource__add_DataChanged_fn(FileSource* __this, uDelegate* value)
{
    __this->add_DataChanged(value);
}

// public generated void remove_DataChanged(Uno.EventHandler<Uno.EventArgs> value) :121
void FileSource__remove_DataChanged_fn(FileSource* __this, uDelegate* value)
{
    __this->remove_DataChanged(value);
}

// public void OnDataChanged() :123
void FileSource__OnDataChanged_fn(FileSource* __this)
{
    __this->OnDataChanged();
}

// public static implicit operator Uno.UX.FileSource(Uno.BundleFile bundleFile) :135
void FileSource__op_Implicit_fn(::g::Uno::BundleFile* bundleFile, FileSource** __retval)
{
    *__retval = FileSource::op_Implicit(bundleFile);
}

// public virtual byte[] ReadAllBytes() :142
void FileSource__ReadAllBytes_fn(FileSource* __this, uArray** __retval)
{
    return *__retval = ::g::Uno::UX::StreamExtensions::ReadAllBytes(::g::Uno::IO::BinaryReader::New1(__this->OpenRead())), void();
}

// public virtual string ReadAllText() :147
void FileSource__ReadAllText_fn(FileSource* __this, uString** __retval)
{
    return *__retval = ::g::Uno::IO::StreamReader::New1(__this->OpenRead())->ReadToEnd(), void();
}

// protected FileSource(string name) [instance] :130
void FileSource::ctor_(uString* name)
{
    Name = name;
}

// public generated void add_DataChanged(Uno.EventHandler<Uno.EventArgs> value) [instance] :121
void FileSource::add_DataChanged(uDelegate* value)
{
    DataChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(DataChanged1, value), ::TYPES[3/*Uno.EventHandler<Uno.EventArgs>*/]);
}

// public generated void remove_DataChanged(Uno.EventHandler<Uno.EventArgs> value) [instance] :121
void FileSource::remove_DataChanged(uDelegate* value)
{
    DataChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(DataChanged1, value), ::TYPES[3/*Uno.EventHandler<Uno.EventArgs>*/]);
}

// public void OnDataChanged() [instance] :123
void FileSource::OnDataChanged()
{
    uDelegate* dataChanged = DataChanged1;

    if (::g::Uno::Delegate::op_Inequality(dataChanged, NULL))
        uPtr(dataChanged)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public static implicit operator Uno.UX.FileSource(Uno.BundleFile bundleFile) [static] :135
FileSource* FileSource::op_Implicit(::g::Uno::BundleFile* bundleFile)
{
    return ::g::Uno::UX::BundleFileSource::New1(bundleFile);
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\$.uno(105)
// -------------------------------------------------------------------

// public abstract interface IFactory :105
// {
uInterfaceType* IFactory_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.UX.IFactory", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("New", NULL, NULL, offsetof(IFactory, fp_New1), false, uObject_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\$.uno(201)
// -------------------------------------------------------------------

// public abstract interface ITemplate :201
// {
uInterfaceType* ITemplate_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.UX.ITemplate", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Apply", NULL, NULL, offsetof(ITemplate, fp_Apply), false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\$.uno(231)
// -------------------------------------------------------------------

// public abstract class Property<T> :231
// {
Property_type* Property_typeof()
{
    static uSStrong<Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Property);
    options.TypeSize = sizeof(Property_type);
    type = (Property_type*)uClassType::New("Uno.UX.Property`1", options);
    type->fp_OnAddListener = Property__OnAddListener_fn;
    type->fp_OnGet = Property__OnGet_fn;
    type->fp_OnRemoveListener = Property__OnRemoveListener_fn;
    type->fp_OnSet = Property__OnSet_fn;
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::UX::Property, _hasRestState), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(6,
        new uFunction("Get", NULL, (void*)Property__Get_fn, 0, false, type->T(0), 0),
        new uFunction("GetRestState", NULL, (void*)Property__GetRestState_fn, 0, false, type->T(0), 0),
        new uFunction("Set", NULL, (void*)Property__Set_fn, 0, false, uVoid_typeof(), 2, type->T(0), uObject_typeof()),
        new uFunction("SetRestState", NULL, (void*)Property__SetRestState_fn, 0, false, uVoid_typeof(), 2, type->T(0), uObject_typeof()),
        new uFunction("add_ValueChanged", NULL, (void*)Property__add_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0))),
        new uFunction("remove_ValueChanged", NULL, (void*)Property__remove_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0))));
    return type;
}

// protected generated Property() :231
void Property__ctor__fn(Property* __this)
{
    __this->ctor_();
}

// public T Get() :267
void Property__Get_fn(Property* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Property_typeof())->T(0),
    };
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    __this->RetainRestState();
    return __retval.Store((__this->OnGet_ex(&ret1), ret1)), void();
}

// public T GetRestState() :248
void Property__GetRestState_fn(Property* __this, uTRef __retval)
{
    __this->RetainRestState();
    return __retval.Store(__this->_restState()), void();
}

// protected virtual void OnAddListener(Uno.UX.ValueChangedHandler<T> listener) :283
void Property__OnAddListener_fn(Property* __this, uDelegate* listener)
{
}

// protected virtual T OnGet() :281
void Property__OnGet_fn(Property* __this, uTRef __retval)
{
    U_THROW(::g::Uno::Exception::New1());
}

// protected virtual void OnRemoveListener(Uno.UX.ValueChangedHandler<T> listener) :284
void Property__OnRemoveListener_fn(Property* __this, uDelegate* listener)
{
}

// protected virtual void OnSet(T value, object origin) :280
void Property__OnSet_fn(Property* __this, void* value, uObject* origin)
{
    uType* __types[] = {
        __this->__type->GetBase(Property_typeof())->T(0),
    };
    U_THROW(::g::Uno::Exception::New1());
}

// private void RetainRestState() :236
void Property__RetainRestState_fn(Property* __this)
{
    __this->RetainRestState();
}

// public void Set(T value, object origin) :254
void Property__Set_fn(Property* __this, void* value, uObject* origin)
{
    uType* __types[] = {
        __this->__type->GetBase(Property_typeof())->T(0),
    };
    __this->RetainRestState();
    __this->OnSet_ex(value, origin);
}

// public void SetRestState(T value, object origin) :260
void Property__SetRestState_fn(Property* __this, void* value, uObject* origin)
{
    uType* __types[] = {
        __this->__type->GetBase(Property_typeof())->T(0),
    };
    __this->OnSet_ex(value, origin);
    __this->_hasRestState = false;
    __this->RetainRestState();
}

// public void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) :275
void Property__add_ValueChanged_fn(Property* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) :276
void Property__remove_ValueChanged_fn(Property* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

// protected generated Property() [instance] :231
void Property::ctor_()
{
}

// private void RetainRestState() [instance] :236
void Property::RetainRestState()
{
    uType* __types[] = {
        __type->GetBase(Property_typeof())->T(0),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT v(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (!_hasRestState)
    {
        v = (OnGet_ex(&ret2), ret2);
        _restState() = v;
        _hasRestState = true;
    }
}

// public void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :275
void Property::add_ValueChanged(uDelegate* value)
{
    OnAddListener(value);
}

// public void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :276
void Property::remove_ValueChanged(uDelegate* value)
{
    OnRemoveListener(value);
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\$.uno(294)
// -------------------------------------------------------------------

// public sealed class Resource :294
// {
uType* Resource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Resource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.Resource", options);
    ::TYPES[6] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof()));
    ::TYPES[7] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[8] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[9] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[10] = ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[11] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof());
    ::TYPES[12] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[13] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::Resource, _Key), 0,
        uObject_typeof(), offsetof(::g::Uno::UX::Resource, _Value), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof())), (uintptr_t)&::g::Uno::UX::Resource::_globals_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())), (uintptr_t)&::g::Uno::UX::Resource::_listeners_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("AddGlobalKeyListener", NULL, (void*)Resource__AddGlobalKeyListener_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("GetGlobalKey", NULL, (void*)Resource__GetGlobalKey_fn, 0, true, ::g::Uno::String_typeof(), 1, uObject_typeof()),
        new uFunction("get_Key", NULL, (void*)Resource__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Resource__New1_fn, 0, true, Resource_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("SetGlobalKey", NULL, (void*)Resource__SetGlobalKey_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("TryFindGlobal", NULL, (void*)Resource__TryFindGlobal_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof()), uObject_typeof()->ByRef()),
        new uFunction("get_Value", NULL, (void*)Resource__get_Value_fn, 0, false, uObject_typeof(), 0));
    return type;
}

// public Resource(string key, object value) :300
void Resource__ctor__fn(Resource* __this, uString* key, uObject* value)
{
    __this->ctor_(key, value);
}

// public static void AddGlobalKeyListener(Uno.Action<string> listener) :310
void Resource__AddGlobalKeyListener_fn(uDelegate* listener)
{
    Resource::AddGlobalKeyListener(listener);
}

// public static string GetGlobalKey(object obj) :344
void Resource__GetGlobalKey_fn(uObject* obj, uString** __retval)
{
    *__retval = Resource::GetGlobalKey(obj);
}

// public generated string get_Key() :296
void Resource__get_Key_fn(Resource* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :296
void Resource__set_Key_fn(Resource* __this, uString* value)
{
    __this->Key(value);
}

// public Resource New(string key, object value) :300
void Resource__New1_fn(uString* key, uObject* value, Resource** __retval)
{
    *__retval = Resource::New1(key, value);
}

// public static void SetGlobalKey(object obj, string key) :317
void Resource__SetGlobalKey_fn(uObject* obj, uString* key)
{
    Resource::SetGlobalKey(obj, key);
}

// public static bool TryFindGlobal(string key, Uno.Predicate<object> acceptor, object& res) :356
void Resource__TryFindGlobal_fn(uString* key, uDelegate* acceptor, uObject** res, bool* __retval)
{
    *__retval = Resource::TryFindGlobal(key, acceptor, res);
}

// public generated object get_Value() :297
void Resource__get_Value_fn(Resource* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// private generated void set_Value(object value) :297
void Resource__set_Value_fn(Resource* __this, uObject* value)
{
    __this->Value(value);
}

uSStrong< ::g::Uno::Collections::Dictionary*> Resource::_globals_;
uSStrong< ::g::Uno::Collections::List*> Resource::_listeners_;

// public Resource(string key, object value) [instance] :300
void Resource::ctor_(uString* key, uObject* value)
{
    Key(key);
    Value(value);
}

// public generated string get_Key() [instance] :296
uString* Resource::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :296
void Resource::Key(uString* value)
{
    _Key = value;
}

// public generated object get_Value() [instance] :297
uObject* Resource::Value()
{
    return _Value;
}

// private generated void set_Value(object value) [instance] :297
void Resource::Value(uObject* value)
{
    _Value = value;
}

// public static void AddGlobalKeyListener(Uno.Action<string> listener) [static] :310
void Resource::AddGlobalKeyListener(uDelegate* listener)
{
    if (Resource::_listeners() == NULL)
        Resource::_listeners() = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[6/*Uno.Collections.List<Uno.Action<string>>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(Resource::_listeners()), listener);
}

// public static string GetGlobalKey(object obj) [static] :344
uString* Resource::GetGlobalKey(uObject* obj)
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > ret4;
    bool ret5;

    if (Resource::_globals() == NULL)
        return NULL;

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Resource::_globals()), &ret4), ret4); enum2.MoveNext(::TYPES[7/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > list = enum2.Current(::TYPES[7/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]);

        if ((::g::Uno::Collections::List__Contains_fn(uPtr(list.Value(::TYPES[8/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/])), obj, &ret5), ret5))
            return list.Key(::TYPES[8/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/]);
    }

    return NULL;
}

// public Resource New(string key, object value) [static] :300
Resource* Resource::New1(uString* key, uObject* value)
{
    Resource* obj3 = (Resource*)uNew(Resource_typeof());
    obj3->ctor_(key, value);
    return obj3;
}

// public static void SetGlobalKey(object obj, string key) [static] :317
void Resource::SetGlobalKey(uObject* obj, uString* key)
{
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret6;
    bool ret7;
    bool ret8;
    bool ret9;
    ::g::Uno::Collections::List* ret10;
    uDelegate* ret11;

    if (Resource::_globals() == NULL)
        Resource::_globals() = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[9/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>*/]));

    for (::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum1 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(Resource::_globals())->Values()), &ret6), ret6); enum1.MoveNext(::TYPES[10/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.ValueCollection.Enumerator*/]); )
    {
        ::g::Uno::Collections::List* list = enum1.Current(::TYPES[10/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.ValueCollection.Enumerator*/]);

        if ((::g::Uno::Collections::List__Contains_fn(uPtr(list), obj, &ret7), ret7))
        {
            ::g::Uno::Collections::List__Remove_fn(uPtr(list), obj, &ret8);
            break;
        }
    }

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Resource::_globals()), key, &ret9), ret9))
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Resource::_globals()), key, (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[11/*Uno.Collections.List<object>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Resource::_globals()), key, &ret10), ret10)), obj);

    if (Resource::_listeners() != NULL)

        for (int i = 0; i < uPtr(Resource::_listeners())->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Resource::_listeners()), uCRef<int>(i), &ret11), ret11))->InvokeVoid(key);
}

// public static bool TryFindGlobal(string key, Uno.Predicate<object> acceptor, object& res) [static] :356
bool Resource::TryFindGlobal(uString* key, uDelegate* acceptor, uObject** res)
{
    bool ret12;
    uObject* ret13;
    bool ret14;

    if (Resource::_globals() != NULL)
    {
        ::g::Uno::Collections::List* list;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Resource::_globals()), key, (void**)(&list), &ret12), ret12))

            for (int i = uPtr(list)->Count(); (i--) > 0; )
            {
                uObject* v = (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret13), ret13);

                if ((uPtr(acceptor)->Invoke(&ret14, 1, v), ret14))
                {
                    *res = v;
                    return true;
                }
            }
    }

    *res = NULL;
    return false;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\$.uno(153)
// -------------------------------------------------------------------

// internal static class StreamExtensions :153
// {
uClassType* StreamExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.UX.StreamExtensions", options);
    ::STRINGS[0] = uString::Const("Bug in Uno compiler, this case should never ever happen.");
    ::TYPES[14] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[15] = ::g::Uno::IDisposable_typeof();
    ::TYPES[16] = ::g::Uno::Int_typeof();
    ::TYPES[17] = ::g::Uno::IO::MemoryStream_typeof();
    ::TYPES[18] = ::g::Uno::Long_typeof();
    return type;
}

// public static byte[] ReadAllBytes(Uno.IO.BinaryReader reader) :155
void StreamExtensions__ReadAllBytes_fn(::g::Uno::IO::BinaryReader* reader, uArray** __retval)
{
    *__retval = StreamExtensions::ReadAllBytes(reader);
}

// public static byte[] ToArray(Uno.IO.MemoryStream memoryStream) :173
void StreamExtensions__ToArray_fn(::g::Uno::IO::MemoryStream* memoryStream, uArray** __retval)
{
    *__retval = StreamExtensions::ToArray(memoryStream);
}

// public static byte[] ReadAllBytes(Uno.IO.BinaryReader reader) [static] :155
uArray* StreamExtensions::ReadAllBytes(::g::Uno::IO::BinaryReader* reader)
{
    int bufferSize = 4096;
    ::g::Uno::IO::MemoryStream* ms = ::g::Uno::IO::MemoryStream::New1();

    try
    {
        uArray* buffer;

        do
        {
            buffer = uPtr(reader)->ReadBytes(4096);
            uPtr(ms)->Write(buffer, 0, uPtr(buffer)->Length());
        }
        while (uPtr(buffer)->Length() == 4096);

        return StreamExtensions::ToArray(ms);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)ms), ::TYPES[15/*Uno.IDisposable*/]));
        throw __t;
    }
    // finally
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)ms), ::TYPES[15/*Uno.IDisposable*/]));
    U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[0/*"Bug in Uno ...*/]));
}

// public static byte[] ToArray(Uno.IO.MemoryStream memoryStream) [static] :173
uArray* StreamExtensions::ToArray(::g::Uno::IO::MemoryStream* memoryStream)
{
    uArray* buffer = uPtr(memoryStream)->GetBuffer();
    uArray* bytes = uArray::New(::TYPES[14/*byte[]*/], (int)memoryStream->Length());

    for (int i = 0; (int64_t)i < memoryStream->Length(); ++i)
        uPtr(bytes)->Item<uint8_t>(i) = uPtr(buffer)->Item<uint8_t>(i);

    return bytes;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\$.uno(385)
// -------------------------------------------------------------------

// public abstract class Template<T> :385
// {
Template_type* Template_typeof()
{
    static uSStrong<Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Template);
    options.TypeSize = sizeof(Template_type);
    type = (Template_type*)uClassType::New("Uno.UX.Template`1", options);
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))Template__Apply_fn;
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(Template_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::UX::Template, _affectSubtypes), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::UX::Template, _cascade), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_AffectSubtypes", NULL, (void*)Template__get_AffectSubtypes_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AffectSubtypes", NULL, (void*)Template__set_AffectSubtypes_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Apply", NULL, (void*)Template__Apply_fn, 0, false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()),
        new uFunction("get_Cascade", NULL, (void*)Template__get_Cascade_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Cascade", NULL, (void*)Template__set_Cascade_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
    return type;
}

// protected generated Template() :385
void Template__ctor__fn(Template* __this)
{
    __this->ctor_();
}

// public bool get_AffectSubtypes() :400
void Template__get_AffectSubtypes_fn(Template* __this, bool* __retval)
{
    *__retval = __this->AffectSubtypes();
}

// public void set_AffectSubtypes(bool value) :401
void Template__set_AffectSubtypes_fn(Template* __this, bool* value)
{
    __this->AffectSubtypes(*value);
}

// public bool Apply(object obj) :407
void Template__Apply_fn(Template* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Apply(obj);
}

// public bool get_Cascade() :390
void Template__get_Cascade_fn(Template* __this, bool* __retval)
{
    *__retval = __this->Cascade();
}

// public void set_Cascade(bool value) :391
void Template__set_Cascade_fn(Template* __this, bool* value)
{
    __this->Cascade(*value);
}

// protected generated Template() [instance] :385
void Template::ctor_()
{
    _cascade = true;
}

// public bool get_AffectSubtypes() [instance] :400
bool Template::AffectSubtypes()
{
    return _affectSubtypes;
}

// public void set_AffectSubtypes(bool value) [instance] :401
void Template::AffectSubtypes(bool value)
{
    _affectSubtypes = value;
}

// public bool Apply(object obj) [instance] :407
bool Template::Apply(uObject* obj)
{
    uType* __types[] = {
        __type->GetBase(Template_typeof())->T(0),
    };

    if (_affectSubtypes)
    {
        if (uIs(obj, __types[0]))
        {
            OnApply_ex(uUnboxAny(__types[0], obj));
            return Cascade();
        }
    }
    else
    {
        if (::g::Uno::Type::op_Equality(::g::Uno::Object::GetType(uPtr(obj)), __types[0]))
        {
            OnApply_ex(uUnboxAny(__types[0], obj));
            return Cascade();
        }
    }

    return true;
}

// public bool get_Cascade() [instance] :390
bool Template::Cascade()
{
    return _cascade;
}

// public void set_Cascade(bool value) [instance] :391
void Template::Cascade(bool value)
{
    _cascade = value;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\Attributes\$.uno(115)
// ------------------------------------------------------------------------------

// public sealed class UXComponentsAttribute :115
// {
uType* UXComponentsAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXComponentsAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXComponentsAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXComponentsAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXComponentsAttribute__New1_fn, 0, true, UXComponentsAttribute_typeof(), 0));
    return type;
}

// public generated UXComponentsAttribute() :115
void UXComponentsAttribute__ctor_1_fn(UXComponentsAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXComponentsAttribute New() :115
void UXComponentsAttribute__New1_fn(UXComponentsAttribute** __retval)
{
    *__retval = UXComponentsAttribute::New1();
}

// public generated UXComponentsAttribute() [instance] :115
void UXComponentsAttribute::ctor_1()
{
    ctor_();
}

// public generated UXComponentsAttribute New() [static] :115
UXComponentsAttribute* UXComponentsAttribute::New1()
{
    UXComponentsAttribute* obj1 = (UXComponentsAttribute*)uNew(UXComponentsAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\Attributes\$.uno(124)
// ------------------------------------------------------------------------------

// public sealed class UXConstructorAttribute :124
// {
uType* UXConstructorAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXConstructorAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXConstructorAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXConstructorAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXConstructorAttribute__New1_fn, 0, true, UXConstructorAttribute_typeof(), 0));
    return type;
}

// public generated UXConstructorAttribute() :124
void UXConstructorAttribute__ctor_1_fn(UXConstructorAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXConstructorAttribute New() :124
void UXConstructorAttribute__New1_fn(UXConstructorAttribute** __retval)
{
    *__retval = UXConstructorAttribute::New1();
}

// public generated UXConstructorAttribute() [instance] :124
void UXConstructorAttribute::ctor_1()
{
    ctor_();
}

// public generated UXConstructorAttribute New() [static] :124
UXConstructorAttribute* UXConstructorAttribute::New1()
{
    UXConstructorAttribute* obj1 = (UXConstructorAttribute*)uNew(UXConstructorAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\Attributes\$.uno(131)
// ------------------------------------------------------------------------------

// public sealed class UXContentAttribute :131
// {
uType* UXContentAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXContentAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXContentAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXContentAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXContentAttribute__New1_fn, 0, true, UXContentAttribute_typeof(), 0));
    return type;
}

// public generated UXContentAttribute() :131
void UXContentAttribute__ctor_1_fn(UXContentAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXContentAttribute New() :131
void UXContentAttribute__New1_fn(UXContentAttribute** __retval)
{
    *__retval = UXContentAttribute::New1();
}

// public generated UXContentAttribute() [instance] :131
void UXContentAttribute::ctor_1()
{
    ctor_();
}

// public generated UXContentAttribute New() [static] :131
UXContentAttribute* UXContentAttribute::New1()
{
    UXContentAttribute* obj1 = (UXContentAttribute*)uNew(UXContentAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\Attributes\$.uno(199)
// ------------------------------------------------------------------------------

// public sealed class UXFileNameAttribute :199
// {
uType* UXFileNameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXFileNameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXFileNameAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXFileNameAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXFileNameAttribute__New1_fn, 0, true, UXFileNameAttribute_typeof(), 0));
    return type;
}

// public generated UXFileNameAttribute() :199
void UXFileNameAttribute__ctor_1_fn(UXFileNameAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXFileNameAttribute New() :199
void UXFileNameAttribute__New1_fn(UXFileNameAttribute** __retval)
{
    *__retval = UXFileNameAttribute::New1();
}

// public generated UXFileNameAttribute() [instance] :199
void UXFileNameAttribute::ctor_1()
{
    ctor_();
}

// public generated UXFileNameAttribute New() [static] :199
UXFileNameAttribute* UXFileNameAttribute::New1()
{
    UXFileNameAttribute* obj1 = (UXFileNameAttribute*)uNew(UXFileNameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\Attributes\$.uno(155)
// ------------------------------------------------------------------------------

// public sealed class UXGlobalResourceAttribute :155
// {
uType* UXGlobalResourceAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(UXGlobalResourceAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXGlobalResourceAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXGlobalResourceAttribute__New1_fn;
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::UXGlobalResourceAttribute, Alias), 0);
    type->Reflection.SetFields(1,
        new uField("Alias", 0));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)UXGlobalResourceAttribute__New1_fn, 0, true, UXGlobalResourceAttribute_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)UXGlobalResourceAttribute__New2_fn, 0, true, UXGlobalResourceAttribute_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public UXGlobalResourceAttribute() :164
void UXGlobalResourceAttribute__ctor_1_fn(UXGlobalResourceAttribute* __this)
{
    __this->ctor_1();
}

// public UXGlobalResourceAttribute(string alias) :159
void UXGlobalResourceAttribute__ctor_2_fn(UXGlobalResourceAttribute* __this, uString* alias)
{
    __this->ctor_2(alias);
}

// public UXGlobalResourceAttribute New() :164
void UXGlobalResourceAttribute__New1_fn(UXGlobalResourceAttribute** __retval)
{
    *__retval = UXGlobalResourceAttribute::New1();
}

// public UXGlobalResourceAttribute New(string alias) :159
void UXGlobalResourceAttribute__New2_fn(uString* alias, UXGlobalResourceAttribute** __retval)
{
    *__retval = UXGlobalResourceAttribute::New2(alias);
}

// public UXGlobalResourceAttribute() [instance] :164
void UXGlobalResourceAttribute::ctor_1()
{
    ctor_();
}

// public UXGlobalResourceAttribute(string alias) [instance] :159
void UXGlobalResourceAttribute::ctor_2(uString* alias)
{
    ctor_();
    Alias = alias;
}

// public UXGlobalResourceAttribute New() [static] :164
UXGlobalResourceAttribute* UXGlobalResourceAttribute::New1()
{
    UXGlobalResourceAttribute* obj2 = (UXGlobalResourceAttribute*)uNew(UXGlobalResourceAttribute_typeof());
    obj2->ctor_1();
    return obj2;
}

// public UXGlobalResourceAttribute New(string alias) [static] :159
UXGlobalResourceAttribute* UXGlobalResourceAttribute::New2(uString* alias)
{
    UXGlobalResourceAttribute* obj1 = (UXGlobalResourceAttribute*)uNew(UXGlobalResourceAttribute_typeof());
    obj1->ctor_2(alias);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\Attributes\$.uno(186)
// ------------------------------------------------------------------------------

// public sealed class UXLineNumberAttribute :186
// {
uType* UXLineNumberAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXLineNumberAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXLineNumberAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXLineNumberAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXLineNumberAttribute__New1_fn, 0, true, UXLineNumberAttribute_typeof(), 0));
    return type;
}

// public generated UXLineNumberAttribute() :186
void UXLineNumberAttribute__ctor_1_fn(UXLineNumberAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXLineNumberAttribute New() :186
void UXLineNumberAttribute__New1_fn(UXLineNumberAttribute** __retval)
{
    *__retval = UXLineNumberAttribute::New1();
}

// public generated UXLineNumberAttribute() [instance] :186
void UXLineNumberAttribute::ctor_1()
{
    ctor_();
}

// public generated UXLineNumberAttribute New() [static] :186
UXLineNumberAttribute* UXLineNumberAttribute::New1()
{
    UXLineNumberAttribute* obj1 = (UXLineNumberAttribute*)uNew(UXLineNumberAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\Attributes\$.uno(194)
// ------------------------------------------------------------------------------

// public sealed class UXNameAttribute :194
// {
uType* UXNameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXNameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXNameAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXNameAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXNameAttribute__New1_fn, 0, true, UXNameAttribute_typeof(), 0));
    return type;
}

// public generated UXNameAttribute() :194
void UXNameAttribute__ctor_1_fn(UXNameAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXNameAttribute New() :194
void UXNameAttribute__New1_fn(UXNameAttribute** __retval)
{
    *__retval = UXNameAttribute::New1();
}

// public generated UXNameAttribute() [instance] :194
void UXNameAttribute::ctor_1()
{
    ctor_();
}

// public generated UXNameAttribute New() [static] :194
UXNameAttribute* UXNameAttribute::New1()
{
    UXNameAttribute* obj1 = (UXNameAttribute*)uNew(UXNameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\Attributes\$.uno(227)
// ------------------------------------------------------------------------------

// public sealed class UXPrimaryAttribute :227
// {
uType* UXPrimaryAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXPrimaryAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXPrimaryAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXPrimaryAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXPrimaryAttribute__New1_fn, 0, true, UXPrimaryAttribute_typeof(), 0));
    return type;
}

// public generated UXPrimaryAttribute() :227
void UXPrimaryAttribute__ctor_1_fn(UXPrimaryAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXPrimaryAttribute New() :227
void UXPrimaryAttribute__New1_fn(UXPrimaryAttribute** __retval)
{
    *__retval = UXPrimaryAttribute::New1();
}

// public generated UXPrimaryAttribute() [instance] :227
void UXPrimaryAttribute::ctor_1()
{
    ctor_();
}

// public generated UXPrimaryAttribute New() [static] :227
UXPrimaryAttribute* UXPrimaryAttribute::New1()
{
    UXPrimaryAttribute* obj1 = (UXPrimaryAttribute*)uNew(UXPrimaryAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\Attributes\$.uno(234)
// ------------------------------------------------------------------------------

// public sealed class UXSourceFileNameAttribute :234
// {
uType* UXSourceFileNameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXSourceFileNameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXSourceFileNameAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXSourceFileNameAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXSourceFileNameAttribute__New1_fn, 0, true, UXSourceFileNameAttribute_typeof(), 0));
    return type;
}

// public generated UXSourceFileNameAttribute() :234
void UXSourceFileNameAttribute__ctor_1_fn(UXSourceFileNameAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXSourceFileNameAttribute New() :234
void UXSourceFileNameAttribute__New1_fn(UXSourceFileNameAttribute** __retval)
{
    *__retval = UXSourceFileNameAttribute::New1();
}

// public generated UXSourceFileNameAttribute() [instance] :234
void UXSourceFileNameAttribute::ctor_1()
{
    ctor_();
}

// public generated UXSourceFileNameAttribute New() [static] :234
UXSourceFileNameAttribute* UXSourceFileNameAttribute::New1()
{
    UXSourceFileNameAttribute* obj1 = (UXSourceFileNameAttribute*)uNew(UXSourceFileNameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\Attributes\$.uno(277)
// ------------------------------------------------------------------------------

// public sealed class UXValueBindingArgumentAttribute :277
// {
uType* UXValueBindingArgumentAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXValueBindingArgumentAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXValueBindingArgumentAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXValueBindingArgumentAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXValueBindingArgumentAttribute__New1_fn, 0, true, UXValueBindingArgumentAttribute_typeof(), 0));
    return type;
}

// public generated UXValueBindingArgumentAttribute() :277
void UXValueBindingArgumentAttribute__ctor_1_fn(UXValueBindingArgumentAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXValueBindingArgumentAttribute New() :277
void UXValueBindingArgumentAttribute__New1_fn(UXValueBindingArgumentAttribute** __retval)
{
    *__retval = UXValueBindingArgumentAttribute::New1();
}

// public generated UXValueBindingArgumentAttribute() [instance] :277
void UXValueBindingArgumentAttribute::ctor_1()
{
    ctor_();
}

// public generated UXValueBindingArgumentAttribute New() [static] :277
UXValueBindingArgumentAttribute* UXValueBindingArgumentAttribute::New1()
{
    UXValueBindingArgumentAttribute* obj1 = (UXValueBindingArgumentAttribute*)uNew(UXValueBindingArgumentAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\Attributes\$.uno(286)
// ------------------------------------------------------------------------------

// public sealed class UXValueBindingTargetAttribute :286
// {
uType* UXValueBindingTargetAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(UXValueBindingTargetAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXValueBindingTargetAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_ctor_ = (void*)UXValueBindingTargetAttribute__New1_fn;
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXValueBindingTargetAttribute__New1_fn, 0, true, UXValueBindingTargetAttribute_typeof(), 0));
    return type;
}

// public generated UXValueBindingTargetAttribute() :286
void UXValueBindingTargetAttribute__ctor_1_fn(UXValueBindingTargetAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXValueBindingTargetAttribute New() :286
void UXValueBindingTargetAttribute__New1_fn(UXValueBindingTargetAttribute** __retval)
{
    *__retval = UXValueBindingTargetAttribute::New1();
}

// public generated UXValueBindingTargetAttribute() [instance] :286
void UXValueBindingTargetAttribute::ctor_1()
{
    ctor_();
}

// public generated UXValueBindingTargetAttribute New() [static] :286
UXValueBindingTargetAttribute* UXValueBindingTargetAttribute::New1()
{
    UXValueBindingTargetAttribute* obj1 = (UXValueBindingTargetAttribute*)uNew(UXValueBindingTargetAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\$.uno(211)
// -------------------------------------------------------------------

// public class ValueChangedArgs<T> :211
// {
uType* ValueChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ValueChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.ValueChangedArgs`1", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Uno::UX::ValueChangedArgs, _Origin), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", type, (void*)ValueChangedArgs__New2_fn, 0, true, type, 2, type->T(0), uObject_typeof()),
        new uFunction("get_Origin", NULL, (void*)ValueChangedArgs__get_Origin_fn, 0, false, uObject_typeof(), 0),
        new uFunction("get_Value", NULL, (void*)ValueChangedArgs__get_Value_fn, 0, false, type->T(0), 0));
    return type;
}

// public ValueChangedArgs(T value, object origin) :215
void ValueChangedArgs__ctor_1_fn(ValueChangedArgs* __this, void* value, uObject* origin)
{
    uType* __types[] = {
        __this->__type->GetBase(ValueChangedArgs_typeof())->T(0),
    };
    __this->ctor_();
    ValueChangedArgs__set_Value_fn(__this, value);
    __this->Origin(origin);
}

// public ValueChangedArgs New(T value, object origin) :215
void ValueChangedArgs__New2_fn(uType* __type, void* value, uObject* origin, ValueChangedArgs** __retval)
{
    uType* __types[] = {
        __type->GetBase(ValueChangedArgs_typeof())->T(0),
    };
    ValueChangedArgs* obj1 = (ValueChangedArgs*)uNew(__type);
    ValueChangedArgs__ctor_1_fn(obj1, value, origin);
    return *__retval = obj1, void();
}

// public generated object get_Origin() :214
void ValueChangedArgs__get_Origin_fn(ValueChangedArgs* __this, uObject** __retval)
{
    *__retval = __this->Origin();
}

// private generated void set_Origin(object value) :214
void ValueChangedArgs__set_Origin_fn(ValueChangedArgs* __this, uObject* value)
{
    __this->Origin(value);
}

// public generated T get_Value() :213
void ValueChangedArgs__get_Value_fn(ValueChangedArgs* __this, uTRef __retval)
{
    return __retval.Store(__this->_Value()), void();
}

// private generated void set_Value(T value) :213
void ValueChangedArgs__set_Value_fn(ValueChangedArgs* __this, void* value)
{
    uType* __types[] = {
        __this->__type->GetBase(ValueChangedArgs_typeof())->T(0),
    };
    __this->_Value() = value;
}

// public generated object get_Origin() [instance] :214
uObject* ValueChangedArgs::Origin()
{
    return _Origin;
}

// private generated void set_Origin(object value) [instance] :214
void ValueChangedArgs::Origin(uObject* value)
{
    _Origin = value;
}
// }

// C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\$.uno(222)
// -------------------------------------------------------------------

// public delegate void ValueChangedHandler<T>(object sender, Uno.UX.ValueChangedArgs<T> args) :222
uDelegateType* ValueChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.UX.ValueChangedHandler`1", 2, 1);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(type->T(0)));
    return type;
}

}}} // ::g::Uno::UX
