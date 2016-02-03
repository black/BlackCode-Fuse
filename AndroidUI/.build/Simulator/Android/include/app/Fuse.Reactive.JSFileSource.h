// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_J_S_FILE_SOURCE_H__
#define __APP_FUSE_REACTIVE_J_S_FILE_SOURCE_H__

#include <app/Uno.UX.FileSource.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct Stream; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct JSFileSource;

struct JSFileSource__uType : ::app::Uno::UX::FileSource__uType
{
};

JSFileSource__uType* JSFileSource__typeof();

void JSFileSource___ObjInit_1(JSFileSource* __this, ::uString* path);
JSFileSource* JSFileSource__New_1(::uStatic* __this, ::uString* path);
::app::Uno::IO::Stream* JSFileSource__OpenRead(JSFileSource* __this);

struct JSFileSource : ::app::Uno::UX::FileSource
{
    ::uStrong< ::uString*> _path;

    void _ObjInit_1(::uString* path) { JSFileSource___ObjInit_1(this, path); }
};

}}}


#endif
