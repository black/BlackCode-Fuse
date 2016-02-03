// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_JAVA_SCRIPT_H__
#define __APP_FUSE_REACTIVE_JAVA_SCRIPT_H__

#include <app/Fuse.Behavior.h>
#include <app/Fuse.Scripting.IModule.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct CrossThreadExceptionHandler; } } }
namespace app { namespace Fuse { namespace Reactive { struct ScriptEventArgs; } } }
namespace app { namespace Fuse { namespace Reactive { struct ThreadWorker; } } }
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Reactive_JavaScript; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Reactive {

struct JavaScript;

extern ::uStaticStrong< ::app::Fuse::Reactive::CrossThreadExceptionHandler*> JavaScript___exceptionHandler;
extern ::uStaticStrong< ::app::Uno::Collections::List__Fuse_Reactive_JavaScript*> JavaScript___rootedScripts;
extern ::uStaticStrong< ::app::Fuse::Reactive::ThreadWorker*> JavaScript___worker;

struct JavaScript__uType : ::app::Fuse::Behavior__uType
{
    ::app::Fuse::Scripting::IModule __interface_0;
};

JavaScript__uType* JavaScript__typeof();

void JavaScript___ObjInit_1(JavaScript* __this);
void JavaScript___TypeInit(::uStatic* __this);
void JavaScript__EvaluateDataContext(JavaScript* __this);
::uObject* JavaScript__Fuse_Scripting_IModule_Evaluate(JavaScript* __this, ::uString* id, ::app::Fuse::Scripting::Context* context);
int JavaScript__Fuse_Scripting_IModule_get_LineNumberOffset(JavaScript* __this);
::uString* JavaScript__get_Code(JavaScript* __this);
::app::Uno::UX::FileSource* JavaScript__get_File(JavaScript* __this);
::uString* JavaScript__get_FileName(JavaScript* __this);
int JavaScript__get_LineNumber(JavaScript* __this);
void JavaScript__HandleWorkerException(::uStatic* __this);
void JavaScript__Invalidate(JavaScript* __this);
JavaScript* JavaScript__New_1(::uStatic* __this);
void JavaScript__OnFileChanged(JavaScript* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void JavaScript__OnRooted(JavaScript* __this, ::app::Fuse::Node* n);
void JavaScript__OnScriptEvent(JavaScript* __this, ::uObject* sender, ::app::Fuse::Reactive::ScriptEventArgs* args);
void JavaScript__OnUnrooted(JavaScript* __this, ::app::Fuse::Node* n);
void JavaScript__ResetRootedScripts(::uStatic* __this);
void JavaScript__set_Code(JavaScript* __this, ::uString* value);
void JavaScript__set_File(JavaScript* __this, ::app::Uno::UX::FileSource* value);
void JavaScript__set_FileName(JavaScript* __this, ::uString* value);
void JavaScript__set_LineNumber(JavaScript* __this, int value);
void JavaScript__StartWorker(::uStatic* __this);

struct JavaScript : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Fuse::Node*> _node;
    ::uStrong< ::uObject*> _dataContext;
    ::uStrong< ::uString*> _code;
    int _lineNumber;
    ::uStrong< ::app::Uno::UX::FileSource*> _file;
    ::uStrong< ::uString*> _fileName;

    void _ObjInit_1() { JavaScript___ObjInit_1(this); }
    void EvaluateDataContext() { JavaScript__EvaluateDataContext(this); }
    ::uString* Code() { return JavaScript__get_Code(this); }
    ::app::Uno::UX::FileSource* File() { return JavaScript__get_File(this); }
    ::uString* FileName() { return JavaScript__get_FileName(this); }
    int LineNumber() { return JavaScript__get_LineNumber(this); }
    void Invalidate() { JavaScript__Invalidate(this); }
    void OnFileChanged(::uObject* sender, ::app::Uno::EventArgs* args) { JavaScript__OnFileChanged(this, sender, args); }
    void OnScriptEvent(::uObject* sender, ::app::Fuse::Reactive::ScriptEventArgs* args) { JavaScript__OnScriptEvent(this, sender, args); }
    void Code(::uString* value) { JavaScript__set_Code(this, value); }
    void File(::app::Uno::UX::FileSource* value) { JavaScript__set_File(this, value); }
    void FileName(::uString* value) { JavaScript__set_FileName(this, value); }
    void LineNumber(int value) { JavaScript__set_LineNumber(this, value); }
};

}}}


#endif
