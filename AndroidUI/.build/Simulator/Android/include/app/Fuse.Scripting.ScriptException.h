// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_SCRIPT_EXCEPTION_H__
#define __APP_FUSE_SCRIPTING_SCRIPT_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Scripting {

struct ScriptException;

struct ScriptException__uType : ::app::Uno::Exception__uType
{
};

ScriptException__uType* ScriptException__typeof();

void ScriptException___ObjInit_2(ScriptException* __this, ::uString* name, ::uString* errorMessage, ::uString* fileName, int lineNumber, ::uString* stackTrace);
::uString* ScriptException__get_ErrorMessage(ScriptException* __this);
::uString* ScriptException__get_FileName(ScriptException* __this);
::uString* ScriptException__get_JSStackTrace(ScriptException* __this);
int ScriptException__get_LineNumber(ScriptException* __this);
::uString* ScriptException__get_Message(ScriptException* __this);
::uString* ScriptException__get_Name(ScriptException* __this);
ScriptException* ScriptException__New_3(::uStatic* __this, ::uString* name, ::uString* errorMessage, ::uString* fileName, int lineNumber, ::uString* stackTrace);
void ScriptException__set_ErrorMessage(ScriptException* __this, ::uString* value);
void ScriptException__set_FileName(ScriptException* __this, ::uString* value);
void ScriptException__set_JSStackTrace(ScriptException* __this, ::uString* value);
void ScriptException__set_LineNumber(ScriptException* __this, int value);
void ScriptException__set_Name(ScriptException* __this, ::uString* value);

struct ScriptException : ::app::Uno::Exception
{
    ::uStrong< ::uString*> _Name;
    ::uStrong< ::uString*> _ErrorMessage;
    ::uStrong< ::uString*> _FileName;
    int _LineNumber;
    ::uStrong< ::uString*> _JSStackTrace;

    void _ObjInit_2(::uString* name, ::uString* errorMessage, ::uString* fileName, int lineNumber, ::uString* stackTrace) { ScriptException___ObjInit_2(this, name, errorMessage, fileName, lineNumber, stackTrace); }
    ::uString* ErrorMessage() { return ScriptException__get_ErrorMessage(this); }
    ::uString* FileName() { return ScriptException__get_FileName(this); }
    ::uString* JSStackTrace() { return ScriptException__get_JSStackTrace(this); }
    int LineNumber() { return ScriptException__get_LineNumber(this); }
    ::uString* Name() { return ScriptException__get_Name(this); }
    void ErrorMessage(::uString* value) { ScriptException__set_ErrorMessage(this, value); }
    void FileName(::uString* value) { ScriptException__set_FileName(this, value); }
    void JSStackTrace(::uString* value) { ScriptException__set_JSStackTrace(this, value); }
    void LineNumber(int value) { ScriptException__set_LineNumber(this, value); }
    void Name(::uString* value) { ScriptException__set_Name(this, value); }
};

}}}


#endif
