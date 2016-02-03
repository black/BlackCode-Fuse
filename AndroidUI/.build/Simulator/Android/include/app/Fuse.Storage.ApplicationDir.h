// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Storage\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STORAGE_APPLICATION_DIR_H__
#define __APP_FUSE_STORAGE_APPLICATION_DIR_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Threading { struct Future__bool; } } }
namespace app { namespace Uno { namespace Threading { struct Future__string; } } }

namespace app {
namespace Fuse {
namespace Storage {

struct ApplicationDir__uType : ::uClassType
{
};

ApplicationDir__uType* ApplicationDir__typeof();

void ApplicationDir__CreateFile(::uStatic* __this, ::uString* filepath);
bool ApplicationDir__Delete(::uStatic* __this, ::uString* filename);
::uString* ApplicationDir__Read(::uStatic* __this, ::uString* filename);
::app::Uno::Threading::Future__string* ApplicationDir__ReadAsync(::uStatic* __this, ::uString* filename);
bool ApplicationDir__Write(::uStatic* __this, ::uString* filename, ::uString* value);
::app::Uno::Threading::Future__bool* ApplicationDir__WriteAsync(::uStatic* __this, ::uString* filename, ::uString* value);

}}}


#endif
