// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\ShaderBackends\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_SHADER_BACKENDS_OPEN_G_L_G_L_PROGRAM_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_SHADER_BACKENDS_OPEN_G_L_G_L_PROGRAM_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram; } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace ShaderBackends { namespace OpenGL { struct GLCompiledProgram; } } } } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace ShaderBackends {
namespace OpenGL {

struct GLProgram;

struct GLProgram__uType : ::uClassType
{
};

GLProgram__uType* GLProgram__typeof();

void GLProgram___ObjInit(GLProgram* __this, ::uString* vsSource, ::uString* fsSource, int constCount, int attribCount, ::uArray* constAttribAndUniformNames);
GLProgram* GLProgram__Create(::uStatic* __this, ::uString* vsSource, ::uString* fsSource, int constCount, int attribCount, ::uArray* constAttribAndUniformNames);
int GLProgram__get_ConstantCount(GLProgram* __this);
::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* GLProgram__GetCompiledProgram(GLProgram* __this, ::uArray* constStrings);
::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* GLProgram__GetCompiledProgramInternal(GLProgram* __this, ::uArray* constStrings);
GLProgram* GLProgram__New_1(::uStatic* __this, ::uString* vsSource, ::uString* fsSource, int constCount, int attribCount, ::uArray* constAttribAndUniformNames);

struct GLProgram : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram*> _cachedPrograms;
    ::uStrong< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*> _singleProgram;
    ::uStrong< ::uString*> _vsSource;
    ::uStrong< ::uString*> _fsSource;
    ::uStrong< ::uArray*> _constAttribAndUniformNames;
    int _constCount;
    int _attribCount;

    void _ObjInit(::uString* vsSource, ::uString* fsSource, int constCount, int attribCount, ::uArray* constAttribAndUniformNames) { GLProgram___ObjInit(this, vsSource, fsSource, constCount, attribCount, constAttribAndUniformNames); }
    int ConstantCount() { return GLProgram__get_ConstantCount(this); }
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* GetCompiledProgram(::uArray* constStrings) { return GLProgram__GetCompiledProgram(this, constStrings); }
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* GetCompiledProgramInternal(::uArray* constStrings) { return GLProgram__GetCompiledProgramInternal(this, constStrings); }
};

}}}}}}


#endif
