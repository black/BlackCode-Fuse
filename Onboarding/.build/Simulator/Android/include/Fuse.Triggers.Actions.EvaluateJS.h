// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct EvaluateJS;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class EvaluateJS :381
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* EvaluateJS_typeof();
void EvaluateJS__ctor_1_fn(EvaluateJS* __this);
void EvaluateJS__Execute_fn(EvaluateJS* __this);
void EvaluateJS__add_Handler_fn(EvaluateJS* __this, uDelegate* value);
void EvaluateJS__remove_Handler_fn(EvaluateJS* __this, uDelegate* value);
void EvaluateJS__get_JavaScript_fn(EvaluateJS* __this, uString** __retval);
void EvaluateJS__set_JavaScript_fn(EvaluateJS* __this, uString* value);
void EvaluateJS__New1_fn(EvaluateJS** __retval);
void EvaluateJS__Perform_fn(EvaluateJS* __this, ::g::Fuse::Node* target);
void EvaluateJS__PrepareScriptForEval_fn(EvaluateJS* __this, uString* js, uString** __retval);
void EvaluateJS__ResultHandler_fn(EvaluateJS* __this, uString* result);
void EvaluateJS__get_WebView_fn(EvaluateJS* __this, uObject** __retval);
void EvaluateJS__set_WebView_fn(EvaluateJS* __this, uObject* value);

struct EvaluateJS : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uString*> _processedSource;
    uStrong<uString*> _rawSource;
    uStrong<uObject*> _target;
    uStrong<uDelegate*> Handler1;

    void ctor_1();
    void Execute();
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    uString* JavaScript();
    void JavaScript(uString* value);
    uString* PrepareScriptForEval(uString* js);
    void ResultHandler(uString* result);
    uObject* WebView();
    void WebView(uObject* value);
    static EvaluateJS* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
