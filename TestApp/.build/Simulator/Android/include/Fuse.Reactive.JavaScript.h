// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Scripting.IModule.h>
namespace g{namespace Fuse{namespace Reactive{struct CrossThreadExceptionHandler;}}}
namespace g{namespace Fuse{namespace Reactive{struct JavaScript;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public partial sealed class JavaScript :1325
// {
struct JavaScript_type : ::g::Fuse::Behavior_type
{
    ::g::Fuse::Scripting::IModule interface0;
};

JavaScript_type* JavaScript_typeof();
void JavaScript__ctor_1_fn(JavaScript* __this);
void JavaScript__get_Code_fn(JavaScript* __this, uString** __retval);
void JavaScript__set_Code_fn(JavaScript* __this, uString* value);
void JavaScript__DispatchEvaluate_fn(JavaScript* __this);
void JavaScript__EvaluateDataContext_fn(JavaScript* __this);
void JavaScript__get_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource** __retval);
void JavaScript__set_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource* value);
void JavaScript__get_FileName_fn(JavaScript* __this, uString** __retval);
void JavaScript__set_FileName_fn(JavaScript* __this, uString* value);
void JavaScript__Fuse_Scripting_IModule_Evaluate_fn(JavaScript* __this, uString* id, ::g::Fuse::Scripting::Context* context, uObject** __retval);
void JavaScript__Fuse_Scripting_IModule_get_LineNumberOffset_fn(JavaScript* __this, int* __retval);
void JavaScript__GlobalKeyChanged_fn(uString* key);
void JavaScript__HandleWorkerException_fn();
void JavaScript__Invalidate_fn(JavaScript* __this);
void JavaScript__get_LineNumber_fn(JavaScript* __this, int* __retval);
void JavaScript__set_LineNumber_fn(JavaScript* __this, int* value);
void JavaScript__New1_fn(JavaScript** __retval);
void JavaScript__OnFileChanged_fn(JavaScript* __this, uObject* sender, ::g::Uno::EventArgs* args);
void JavaScript__OnRooted_fn(JavaScript* __this, ::g::Fuse::Node* parentNode);
void JavaScript__OnUnrooted_fn(JavaScript* __this, ::g::Fuse::Node* parentNode);
void JavaScript__ResetRootedScripts_fn();
void JavaScript__SetParentDataContext_fn(JavaScript* __this);
void JavaScript__StartWorker_fn();
void JavaScript__add_Unrooted_fn(JavaScript* __this, uDelegate* value);
void JavaScript__remove_Unrooted_fn(JavaScript* __this, uDelegate* value);

struct JavaScript : ::g::Fuse::Behavior
{
    bool _anyRooted;
    uStrong<uString*> _code;
    uStrong<uObject*> _dataContext;
    bool _evaluatingDataContext;
    static uSStrong< ::g::Fuse::Reactive::CrossThreadExceptionHandler*> _exceptionHandler_;
    static uSStrong< ::g::Fuse::Reactive::CrossThreadExceptionHandler*>& _exceptionHandler() { return JavaScript_typeof()->Init(), _exceptionHandler_; }
    uStrong< ::g::Uno::UX::FileSource*> _file;
    uStrong<uString*> _fileName;
    int _lineNumber;
    bool _ready;
    static uSStrong< ::g::Uno::Collections::List*> _rootedScripts_;
    static uSStrong< ::g::Uno::Collections::List*>& _rootedScripts() { return JavaScript_typeof()->Init(), _rootedScripts_; }
    static uSStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker_;
    static uSStrong< ::g::Fuse::Reactive::ThreadWorker*>& _worker() { return JavaScript_typeof()->Init(), _worker_; }
    uStrong<uDelegate*> Unrooted2;

    void ctor_1();
    uString* Code();
    void Code(uString* value);
    void DispatchEvaluate();
    void EvaluateDataContext();
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    uString* FileName();
    void FileName(uString* value);
    void Invalidate();
    int LineNumber();
    void LineNumber(int value);
    void OnFileChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void SetParentDataContext();
    void add_Unrooted(uDelegate* value);
    void remove_Unrooted(uDelegate* value);
    static void GlobalKeyChanged(uString* key);
    static void HandleWorkerException();
    static JavaScript* New1();
    static void ResetRootedScripts();
    static void StartWorker();
};
// }

}}} // ::g::Fuse::Reactive
