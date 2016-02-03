// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__STRING__F698E5DC_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__STRING__F698E5DC_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram; } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace ShaderBackends { namespace OpenGL { struct GLCompiledProgram; } } } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram;

struct Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType* Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof();

void Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram___ObjInit(Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this, ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* source);
void Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__Dispose(Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this);
bool Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__MoveNext(Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this);
Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* source);
void Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* __this);

struct Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram*> _source;
    ::uStrong< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram* source) { Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram___ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__MoveNext(this); }
};

}}}


#endif
