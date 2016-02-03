// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Internal.Debug.h>
#include <include/v8-debug.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Debugger;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Debugger__Disconnected;}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal sealed extern class Debugger :361
// {
struct Debugger_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Debugger_type* Debugger_typeof();
void Debugger__ctor__fn(Debugger* __this, uObject* dispatcher, int* port);
void Debugger__Connect_fn(Debugger* parent, ::g::Uno::Net::Sockets::Socket* communicationSocket, uObject** __retval);
void Debugger__Disconnect_fn(Debugger* parent, Debugger__Disconnected** __retval);
void Debugger__DisconnectedMessageHandler_fn(Debugger* __this, ::v8::Debug::Message** message);
void Debugger__Dispose_fn(Debugger* __this);
void Debugger__MessageHandler_fn(Debugger* __this, ::v8::Debug::Message** message);
void Debugger__MessageToString_fn(::v8::Debug::Message** message, uString** __retval);
void Debugger__New1_fn(uObject* dispatcher, int* port, Debugger** __retval);
void Debugger__ProcessDebugMessages_fn();
void Debugger__SetMessageHandler_fn(Debugger* __this, uDelegate* handler);
void Debugger__StateMachine_fn(Debugger* __this);

struct Debugger : uObject
{
    static uSStrong<uString*> _contentLengthString_;
    static uSStrong<uString*>& _contentLengthString() { return Debugger_typeof()->Init(), _contentLengthString_; }
    uStrong<uObject*> _dispatcher;
    uStrong< ::g::Uno::Net::Sockets::Socket*> _listenSocket;
    uStrong<uDelegate*> _messageHandler;
    uStrong< ::g::Uno::Collections::List*> _offlineMessages;
    int _port;
    bool _shutdown;

    void ctor_(uObject* dispatcher, int port);
    void DisconnectedMessageHandler(::v8::Debug::Message* message);
    void Dispose();
    void MessageHandler(::v8::Debug::Message* message);
    void SetMessageHandler(uDelegate* handler);
    void StateMachine();
    static uObject* Connect(Debugger* parent, ::g::Uno::Net::Sockets::Socket* communicationSocket);
    static Debugger__Disconnected* Disconnect(Debugger* parent);
    static uString* MessageToString(::v8::Debug::Message* message);
    static Debugger* New1(uObject* dispatcher, int port);
    static void ProcessDebugMessages();
};
// }

}}}} // ::g::Fuse::Scripting::V8
