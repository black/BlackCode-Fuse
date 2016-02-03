// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_BOOTSTRAP_HINTS_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_BOOTSTRAP_HINTS_H__

#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

extern int BootstrapHints___MaxFps;
extern bool BootstrapHints___VSync;

struct BootstrapHints__uType : ::uClassType
{
};

BootstrapHints__uType* BootstrapHints__typeof();

int BootstrapHints__get_MaxFps(::uStatic* __this);
bool BootstrapHints__get_VSync(::uStatic* __this);
void BootstrapHints__set_MaxFps(::uStatic* __this, int value);
void BootstrapHints__set_VSync(::uStatic* __this, bool value);

}}}}}


#endif
