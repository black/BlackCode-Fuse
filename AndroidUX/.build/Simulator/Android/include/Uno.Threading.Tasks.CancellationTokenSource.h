// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.19.6\Tasks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{namespace Tasks{struct CancellationToken;}}}}
namespace g{namespace Uno{namespace Threading{namespace Tasks{struct CancellationTokenSource;}}}}

namespace g{
namespace Uno{
namespace Threading{
namespace Tasks{

// public sealed class CancellationTokenSource :9
// {
uType* CancellationTokenSource_typeof();
void CancellationTokenSource__ctor__fn(CancellationTokenSource* __this);
void CancellationTokenSource__Cancel_fn(CancellationTokenSource* __this);
void CancellationTokenSource__get_IsCancellationRequested_fn(CancellationTokenSource* __this, bool* __retval);
void CancellationTokenSource__New1_fn(CancellationTokenSource** __retval);
void CancellationTokenSource__get_Token_fn(CancellationTokenSource* __this, ::g::Uno::Threading::Tasks::CancellationToken** __retval);

struct CancellationTokenSource : uObject
{
    uStrong< ::g::Uno::Threading::Tasks::CancellationToken*> _token;

    void ctor_();
    void Cancel();
    bool IsCancellationRequested();
    ::g::Uno::Threading::Tasks::CancellationToken* Token();
    static CancellationTokenSource* New1();
};
// }

}}}} // ::g::Uno::Threading::Tasks
