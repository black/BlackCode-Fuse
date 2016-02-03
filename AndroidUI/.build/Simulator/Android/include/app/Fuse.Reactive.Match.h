// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_MATCH_H__
#define __APP_FUSE_REACTIVE_MATCH_H__

#include <app/Fuse.Behavior.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Panel; } } }
namespace app { namespace Fuse { namespace Reactive { struct Case; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_Element; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct Match;

struct Match__uType : ::app::Fuse::Behavior__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
};

Match__uType* Match__typeof();

void Match___ObjInit_1(Match* __this);
void Match__AddElements(Match* __this, ::app::Fuse::Reactive::Case* c);
void Match__Fuse_Reactive_IObserver_OnAdd(Match* __this, ::uObject* addedValue);
void Match__Fuse_Reactive_IObserver_OnFailed(Match* __this, ::uString* message);
void Match__Fuse_Reactive_IObserver_OnNewAll(Match* __this, int length);
void Match__Fuse_Reactive_IObserver_OnNewAt(Match* __this, int index, ::uObject* value);
void Match__Fuse_Reactive_IObserver_OnRemove(Match* __this, ::uObject* value, int index);
void Match__Fuse_Reactive_IObserver_OnSet(Match* __this, ::uObject* newValue);
::uObject* Match__get_Cases(Match* __this);
::uObject* Match__get_Value(Match* __this);
void Match__Invalidate(Match* __this);
Match* Match__New_1(::uStatic* __this);
void Match__OnCaseAdded(Match* __this, ::app::Fuse::Reactive::Case* c);
void Match__OnCaseRemoved(Match* __this, ::app::Fuse::Reactive::Case* c);
void Match__OnRooted(Match* __this, ::app::Fuse::Node* n);
void Match__OnUnrooted(Match* __this, ::app::Fuse::Node* n);
void Match__RemoveElements(Match* __this);
::app::Fuse::Reactive::Case* Match__SelectCase(Match* __this);
void Match__set_Value(Match* __this, ::uObject* value);

struct Match : ::app::Fuse::Behavior
{
    ::uStrong< ::uObject*> _cases;
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _realValue;
    ::uStrong< ::uObject*> _value;
    ::uStrong< ::app::Fuse::Controls::Panel*> _panel;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Elements_Element*> _elements;
    ::uStrong< ::app::Fuse::Reactive::Case*> _oldCase;

    void _ObjInit_1() { Match___ObjInit_1(this); }
    void AddElements(::app::Fuse::Reactive::Case* c) { Match__AddElements(this, c); }
    ::uObject* Cases() { return Match__get_Cases(this); }
    ::uObject* Value() { return Match__get_Value(this); }
    void Invalidate() { Match__Invalidate(this); }
    void OnCaseAdded(::app::Fuse::Reactive::Case* c) { Match__OnCaseAdded(this, c); }
    void OnCaseRemoved(::app::Fuse::Reactive::Case* c) { Match__OnCaseRemoved(this, c); }
    void RemoveElements() { Match__RemoveElements(this); }
    ::app::Fuse::Reactive::Case* SelectCase() { return Match__SelectCase(this); }
    void Value(::uObject* value) { Match__set_Value(this, value); }
};

}}}


#endif
