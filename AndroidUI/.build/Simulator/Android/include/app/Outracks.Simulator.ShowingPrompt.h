// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_SHOWING_PROMPT_H__
#define __APP_OUTRACKS_SIMULATOR_SHOWING_PROMPT_H__

#include <app/Outracks.Simulator.State.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct TextInput; } } }
namespace app { namespace Fuse { namespace Gestures { struct ClickedArgs; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ShowingPrompt;

struct ShowingPrompt__uType : ::app::Outracks::Simulator::State__uType
{
    ::app::Outracks::Simulator::State*(*__fp_OnCancel)(ShowingPrompt*);
    ::app::Outracks::Simulator::State*(*__fp_OnOk)(ShowingPrompt*, ::uString*);
};

ShowingPrompt__uType* ShowingPrompt__typeof();

void ShowingPrompt___ObjInit_1(ShowingPrompt* __this, ::uString* header, ::uString* body);
void ShowingPrompt__OnCancelClicked(ShowingPrompt* __this, ::uObject* s, ::app::Fuse::Gestures::ClickedArgs* args);
::app::Outracks::Simulator::State* ShowingPrompt__OnEnterState(ShowingPrompt* __this);
void ShowingPrompt__OnOkClicked(ShowingPrompt* __this, ::uObject* s, ::app::Fuse::Gestures::ClickedArgs* args);
::app::Outracks::Simulator::State* ShowingPrompt__OnUpdate(ShowingPrompt* __this);

struct ShowingPrompt : ::app::Outracks::Simulator::State
{
    ::uStrong< ::uString*> _header;
    ::uStrong< ::uString*> _body;
    ::uStrong< ::app::Fuse::Controls::TextInput*> _input;
    bool _okClicked;
    bool _cancelClicked;

    void _ObjInit_1(::uString* header, ::uString* body) { ShowingPrompt___ObjInit_1(this, header, body); }
    ::app::Outracks::Simulator::State* OnCancel() { return (((ShowingPrompt__uType*)this->__obj_type)->__fp_OnCancel)(this); }
    void OnCancelClicked(::uObject* s, ::app::Fuse::Gestures::ClickedArgs* args) { ShowingPrompt__OnCancelClicked(this, s, args); }
    ::app::Outracks::Simulator::State* OnOk(::uString* text) { return (((ShowingPrompt__uType*)this->__obj_type)->__fp_OnOk)(this, text); }
    void OnOkClicked(::uObject* s, ::app::Fuse::Gestures::ClickedArgs* args) { ShowingPrompt__OnOkClicked(this, s, args); }
};

}}}


#endif
