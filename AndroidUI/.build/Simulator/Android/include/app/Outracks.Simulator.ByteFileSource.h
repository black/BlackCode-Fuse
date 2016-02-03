// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTE_FILE_SOURCE_H__
#define __APP_OUTRACKS_SIMULATOR_BYTE_FILE_SOURCE_H__

#include <app/Uno.UX.FileSource.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct Stream; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ByteFileSource;

struct ByteFileSource__uType : ::app::Uno::UX::FileSource__uType
{
};

ByteFileSource__uType* ByteFileSource__typeof();

void ByteFileSource___ObjInit_1(ByteFileSource* __this, ::uString* path, ::uArray* bytes);
ByteFileSource* ByteFileSource__New_1(::uStatic* __this, ::uString* path, ::uArray* bytes);
::app::Uno::IO::Stream* ByteFileSource__OpenRead(ByteFileSource* __this);
::uArray* ByteFileSource__ReadAllBytes(ByteFileSource* __this);
void ByteFileSource__Update(ByteFileSource* __this, ::uArray* newBytes);

struct ByteFileSource : ::app::Uno::UX::FileSource
{
    ::uStrong< ::uArray*> _bytes;

    void _ObjInit_1(::uString* path, ::uArray* bytes) { ByteFileSource___ObjInit_1(this, path, bytes); }
    void Update(::uArray* newBytes) { ByteFileSource__Update(this, newBytes); }
};

}}}


#endif
