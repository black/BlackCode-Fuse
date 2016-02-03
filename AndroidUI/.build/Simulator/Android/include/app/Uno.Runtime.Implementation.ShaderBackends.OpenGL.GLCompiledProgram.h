// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\ShaderBackends\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_SHADER_BACKENDS_OPEN_G_L_G_L_COMPILED_PROGRAM_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_SHADER_BACKENDS_OPEN_G_L_G_L_COMPILED_PROGRAM_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace ShaderBackends {
namespace OpenGL {

struct GLCompiledProgram;

struct GLCompiledProgram__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

GLCompiledProgram__uType* GLCompiledProgram__typeof();

void GLCompiledProgram___ObjInit(GLCompiledProgram* __this, ::uString* vsSource, ::uString* fsSource, int constCount, int attribCount, ::uArray* constAttribAndUniformNames);
void GLCompiledProgram__Dispose(GLCompiledProgram* __this);
::uUInt GLCompiledProgram__get_GLProgramHandle(GLCompiledProgram* __this);
int GLCompiledProgram__get_LocationCount(GLCompiledProgram* __this);
int GLCompiledProgram__GetLocation(GLCompiledProgram* __this, int index);
GLCompiledProgram* GLCompiledProgram__New_1(::uStatic* __this, ::uString* vsSource, ::uString* fsSource, int constCount, int attribCount, ::uArray* constAttribAndUniformNames);
void GLCompiledProgram__set_GLProgramHandle(GLCompiledProgram* __this, ::uUInt value);

struct GLCompiledProgram : ::uObject
{
    ::uUInt _vsHandle;
    ::uUInt _fsHandle;
    ::uStrong< ::uArray*> _locations;
    ::uUInt _GLProgramHandle;

    void _ObjInit(::uString* vsSource, ::uString* fsSource, int constCount, int attribCount, ::uArray* constAttribAndUniformNames) { GLCompiledProgram___ObjInit(this, vsSource, fsSource, constCount, attribCount, constAttribAndUniformNames); }
    void Dispose() { GLCompiledProgram__Dispose(this); }
    ::uUInt GLProgramHandle() { return GLCompiledProgram__get_GLProgramHandle(this); }
    int LocationCount() { return GLCompiledProgram__get_LocationCount(this); }
    int GetLocation(int index) { return GLCompiledProgram__GetLocation(this, index); }
    void GLProgramHandle(::uUInt value) { GLCompiledProgram__set_GLProgramHandle(this, value); }
};

}}}}}}


#endif
