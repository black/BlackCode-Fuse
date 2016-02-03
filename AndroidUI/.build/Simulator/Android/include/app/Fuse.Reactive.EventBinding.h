// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_EVENT_BINDING_H__
#define __APP_FUSE_REACTIVE_EVENT_BINDING_H__

#include <app/Fuse.Reactive.Binding.h>
#include <Uno.h>
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Reactive {

struct EventBinding;

struct EventBinding__uType : ::app::Fuse::Reactive::Binding__uType
{
};

EventBinding__uType* EventBinding__typeof();

void EventBinding___ObjInit_2(EventBinding* __this, ::uString* key);
EventBinding* EventBinding__New_1(::uStatic* __this, ::uString* key);
void EventBinding__NewValue(EventBinding* __this, ::uObject* obj);
void EventBinding__OnEvent(EventBinding* __this, ::uObject* sender, ::app::Uno::EventArgs* args);

struct EventBinding : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _func;

    void _ObjInit_2(::uString* key) { EventBinding___ObjInit_2(this, key); }
    void OnEvent(::uObject* sender, ::app::Uno::EventArgs* args) { EventBinding__OnEvent(this, sender, args); }
};

}}}


#endif
