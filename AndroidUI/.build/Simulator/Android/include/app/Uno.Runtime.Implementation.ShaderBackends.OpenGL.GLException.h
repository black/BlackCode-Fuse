// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\ShaderBackends\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_SHADER_BACKENDS_OPEN_G_L_G_L_EXCEPTION_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_SHADER_BACKENDS_OPEN_G_L_G_L_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace ShaderBackends {
namespace OpenGL {

struct GLException;

struct GLException__uType : ::app::Uno::Exception__uType
{
};

GLException__uType* GLException__typeof();

void GLException___ObjInit_2(GLException* __this, ::uString* message);
GLException* GLException__New_3(::uStatic* __this, ::uString* message);

struct GLException : ::app::Uno::Exception
{
    void _ObjInit_2(::uString* message) { GLException___ObjInit_2(this, message); }
};

}}}}}}


#endif
