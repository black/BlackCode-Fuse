// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__UNO_RUNTIME_IMPLEMENTATIO_52535D9_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__UNO_RUNTIME_IMPLEMENTATIO_52535D9_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace ShaderBackends { namespace OpenGL { struct GLCompiledProgram; } } } } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram;

struct KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType : ::uStructType
{
};

KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType* KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof();

void KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram___ObjInit(KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this, ::uString* key, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* value);
::uString* KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__get_Key(KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this);
::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__get_Value(KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this);
KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__New_1(::uStatic* __this, ::uString* key, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* value);

struct KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram
{
    ::uStrong< ::uString*> _key;
    ::uStrong< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*> _value;

    void _ObjInit(::uString* key, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* value) { KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram___ObjInit(this, key, value); }
    ::uString* Key() { return KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__get_Key(this); }
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* Value() { return KeyValuePair__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__get_Value(this); }
};

}}}


#endif
