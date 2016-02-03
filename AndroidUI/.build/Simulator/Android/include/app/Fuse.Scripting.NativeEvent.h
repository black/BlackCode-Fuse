// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_NATIVE_EVENT_H__
#define __APP_FUSE_SCRIPTING_NATIVE_EVENT_H__

#include <app/Fuse.Scripting.NativeMember.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }
namespace app { namespace Fuse { namespace Scripting { struct Function; } } }
namespace app { namespace Uno { namespace Collections { struct Queue__object__; } } }

namespace app {
namespace Fuse {
namespace Scripting {

struct NativeEvent;

struct NativeEvent__uType : ::app::Fuse::Scripting::NativeMember__uType
{
};

NativeEvent__uType* NativeEvent__typeof();

void NativeEvent___ObjInit_1(NativeEvent* __this, ::uString* name, bool queueEventsBeforeHandlerIsSet);
::uObject* NativeEvent__CreateObject(NativeEvent* __this, ::app::Fuse::Scripting::Context* context);
void NativeEvent__DispatchQueue(NativeEvent* __this);
::uObject* NativeEvent__GetEvent(NativeEvent* __this, ::uArray* args);
NativeEvent* NativeEvent__New_1(::uStatic* __this, ::uString* name, bool queueEventsBeforeHandlerIsSet);
void NativeEvent__RaiseAsync(NativeEvent* __this, ::uArray* args);
::uObject* NativeEvent__SetEvent(NativeEvent* __this, ::uArray* args);

struct NativeEvent : ::app::Fuse::Scripting::NativeMember
{
    ::uStrong< ::app::Fuse::Scripting::Context*> _context;
    ::uStrong< ::app::Uno::Collections::Queue__object__*> _eventArgsQueue;
    bool _queueEventsBeforeEvaluation;
    ::uStrong< ::app::Fuse::Scripting::Function*> _jsFunction;

    void _ObjInit_1(::uString* name, bool queueEventsBeforeHandlerIsSet) { NativeEvent___ObjInit_1(this, name, queueEventsBeforeHandlerIsSet); }
    void DispatchQueue() { NativeEvent__DispatchQueue(this); }
    ::uObject* GetEvent(::uArray* args) { return NativeEvent__GetEvent(this, args); }
    void RaiseAsync(::uArray* args) { NativeEvent__RaiseAsync(this, args); }
    ::uObject* SetEvent(::uArray* args) { return NativeEvent__SetEvent(this, args); }
};

}}}


#endif
