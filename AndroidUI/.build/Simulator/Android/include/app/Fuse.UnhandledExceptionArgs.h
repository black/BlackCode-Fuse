// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_UNHANDLED_EXCEPTION_ARGS_H__
#define __APP_FUSE_UNHANDLED_EXCEPTION_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Fuse {

struct UnhandledExceptionArgs;

struct UnhandledExceptionArgs__uType : ::app::Uno::EventArgs__uType
{
};

UnhandledExceptionArgs__uType* UnhandledExceptionArgs__typeof();

void UnhandledExceptionArgs___ObjInit_1(UnhandledExceptionArgs* __this, ::app::Uno::Exception* e);
::app::Uno::Exception* UnhandledExceptionArgs__get_Exception(UnhandledExceptionArgs* __this);
bool UnhandledExceptionArgs__get_IsHandled(UnhandledExceptionArgs* __this);
UnhandledExceptionArgs* UnhandledExceptionArgs__New_2(::uStatic* __this, ::app::Uno::Exception* e);
void UnhandledExceptionArgs__set_Exception(UnhandledExceptionArgs* __this, ::app::Uno::Exception* value);
void UnhandledExceptionArgs__set_IsHandled(UnhandledExceptionArgs* __this, bool value);

struct UnhandledExceptionArgs : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Uno::Exception*> _Exception;
    bool _IsHandled;

    void _ObjInit_1(::app::Uno::Exception* e) { UnhandledExceptionArgs___ObjInit_1(this, e); }
    ::app::Uno::Exception* Exception() { return UnhandledExceptionArgs__get_Exception(this); }
    bool IsHandled() { return UnhandledExceptionArgs__get_IsHandled(this); }
    void Exception(::app::Uno::Exception* value) { UnhandledExceptionArgs__set_Exception(this, value); }
    void IsHandled(bool value) { UnhandledExceptionArgs__set_IsHandled(this, value); }
};

}}


#endif
