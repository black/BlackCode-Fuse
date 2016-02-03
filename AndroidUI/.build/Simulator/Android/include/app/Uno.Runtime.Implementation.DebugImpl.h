// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_DEBUG_IMPL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_DEBUG_IMPL_H__

#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

struct DebugImpl__uType : ::uClassType
{
};

DebugImpl__uType* DebugImpl__typeof();

void DebugImpl__Alert(::uStatic* __this, ::uString* message_, ::uString* caption_, int type_);
bool DebugImpl__Confirm(::uStatic* __this, ::uString* message_, ::uString* caption_, int type_);
void DebugImpl__Log(::uStatic* __this, ::uString* message_, int type_);

}}}}


#endif
