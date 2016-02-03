// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Threading.Tasks.CancellationToken.h>
#include <Uno.Threading.Tasks.CancellationTokenSource.h>
static uType* TYPES[1];

namespace g{
namespace Uno{
namespace Threading{
namespace Tasks{

// C:\ProgramData\Uno\Packages\Uno.Threading\0.19.6\Tasks\$.uno(34)
// ----------------------------------------------------------------

// public sealed class CancellationToken :34
// {
uType* CancellationToken_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(CancellationToken);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.Tasks.CancellationToken", options);
    type->fp_ctor_ = (void*)CancellationToken__New1_fn;
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Threading::Tasks::CancellationToken, _IsCancellationRequested), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_IsCancellationRequested", NULL, (void*)CancellationToken__get_IsCancellationRequested_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)CancellationToken__New1_fn, 0, true, CancellationToken_typeof(), 0));
    return type;
}

// public CancellationToken() :41
void CancellationToken__ctor__fn(CancellationToken* __this)
{
    __this->ctor_();
}

// public generated bool get_IsCancellationRequested() :38
void CancellationToken__get_IsCancellationRequested_fn(CancellationToken* __this, bool* __retval)
{
    *__retval = __this->IsCancellationRequested();
}

// private generated void set_IsCancellationRequested(bool value) :38
void CancellationToken__set_IsCancellationRequested_fn(CancellationToken* __this, bool* value)
{
    __this->IsCancellationRequested(*value);
}

// public CancellationToken New() :41
void CancellationToken__New1_fn(CancellationToken** __retval)
{
    *__retval = CancellationToken::New1();
}

// internal void SetCancellationRequested() :46
void CancellationToken__SetCancellationRequested_fn(CancellationToken* __this)
{
    __this->SetCancellationRequested();
}

// public CancellationToken() [instance] :41
void CancellationToken::ctor_()
{
    IsCancellationRequested(false);
}

// public generated bool get_IsCancellationRequested() [instance] :38
bool CancellationToken::IsCancellationRequested()
{
    return _IsCancellationRequested;
}

// private generated void set_IsCancellationRequested(bool value) [instance] :38
void CancellationToken::IsCancellationRequested(bool value)
{
    _IsCancellationRequested = value;
}

// internal void SetCancellationRequested() [instance] :46
void CancellationToken::SetCancellationRequested()
{
    IsCancellationRequested(true);
}

// public CancellationToken New() [static] :41
CancellationToken* CancellationToken::New1()
{
    CancellationToken* obj1 = (CancellationToken*)uNew(CancellationToken_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Threading\0.19.6\Tasks\$.uno(9)
// ---------------------------------------------------------------

// public sealed class CancellationTokenSource :9
// {
uType* CancellationTokenSource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(CancellationTokenSource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.Tasks.CancellationTokenSource", options);
    type->fp_ctor_ = (void*)CancellationTokenSource__New1_fn;
    ::TYPES[0] = ::g::Uno::Threading::Tasks::CancellationToken_typeof();
    type->SetFields(0,
        ::g::Uno::Threading::Tasks::CancellationToken_typeof(), offsetof(::g::Uno::Threading::Tasks::CancellationTokenSource, _token), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("Cancel", NULL, (void*)CancellationTokenSource__Cancel_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_IsCancellationRequested", NULL, (void*)CancellationTokenSource__get_IsCancellationRequested_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)CancellationTokenSource__New1_fn, 0, true, CancellationTokenSource_typeof(), 0),
        new uFunction("get_Token", NULL, (void*)CancellationTokenSource__get_Token_fn, 0, false, ::g::Uno::Threading::Tasks::CancellationToken_typeof(), 0));
    return type;
}

// public CancellationTokenSource() :23
void CancellationTokenSource__ctor__fn(CancellationTokenSource* __this)
{
    __this->ctor_();
}

// public void Cancel() :28
void CancellationTokenSource__Cancel_fn(CancellationTokenSource* __this)
{
    __this->Cancel();
}

// public bool get_IsCancellationRequested() :13
void CancellationTokenSource__get_IsCancellationRequested_fn(CancellationTokenSource* __this, bool* __retval)
{
    *__retval = __this->IsCancellationRequested();
}

// public CancellationTokenSource New() :23
void CancellationTokenSource__New1_fn(CancellationTokenSource** __retval)
{
    *__retval = CancellationTokenSource::New1();
}

// public Uno.Threading.Tasks.CancellationToken get_Token() :18
void CancellationTokenSource__get_Token_fn(CancellationTokenSource* __this, ::g::Uno::Threading::Tasks::CancellationToken** __retval)
{
    *__retval = __this->Token();
}

// public CancellationTokenSource() [instance] :23
void CancellationTokenSource::ctor_()
{
    _token = ::g::Uno::Threading::Tasks::CancellationToken::New1();
}

// public void Cancel() [instance] :28
void CancellationTokenSource::Cancel()
{
    uPtr(_token)->SetCancellationRequested();
}

// public bool get_IsCancellationRequested() [instance] :13
bool CancellationTokenSource::IsCancellationRequested()
{
    return uPtr(_token)->IsCancellationRequested();
}

// public Uno.Threading.Tasks.CancellationToken get_Token() [instance] :18
::g::Uno::Threading::Tasks::CancellationToken* CancellationTokenSource::Token()
{
    return _token;
}

// public CancellationTokenSource New() [static] :23
CancellationTokenSource* CancellationTokenSource::New1()
{
    CancellationTokenSource* obj1 = (CancellationTokenSource*)uNew(CancellationTokenSource_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}} // ::g::Uno::Threading::Tasks
