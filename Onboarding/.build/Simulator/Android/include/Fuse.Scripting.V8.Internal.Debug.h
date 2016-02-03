// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/v8.h>
#include <include/v8-debug.h>
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Internal{struct Debug;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Internal{

// internal static extern class Debug :812
// {
uClassType* Debug_typeof();
void Debug__CancelDebugBreak_fn(::v8::Isolate** isolate);
void Debug__CheckDebugBreak_fn(::v8::Isolate** isolate, bool* __retval);
void Debug__DebugBreak_fn(::v8::Isolate** isolate);
void Debug__ProcessDebugMessages_fn();
void Debug__SendCommand_fn(::v8::Isolate** isolate, uString* command);
void Debug__SetMessageHandler_fn(uDelegate* handler);

struct Debug : uObject
{
    static uSStrong<uDelegate*> _messageHandler_;
    static uSStrong<uDelegate*>& _messageHandler() { return _messageHandler_; }

    static void CancelDebugBreak(::v8::Isolate* isolate);
    static bool CheckDebugBreak(::v8::Isolate* isolate);
    static void DebugBreak(::v8::Isolate* isolate);
    static void ProcessDebugMessages();
    static void SendCommand(::v8::Isolate* isolate, uString* command);
    static void SetMessageHandler(uDelegate* handler);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
