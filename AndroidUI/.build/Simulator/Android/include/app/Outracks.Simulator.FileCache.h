// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_FILE_CACHE_H__
#define __APP_OUTRACKS_SIMULATOR_FILE_CACHE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct ByteFileSource; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Outracks_Simulator_ByteFileSource; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct FileCache;

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource*> FileCache___cache;

struct FileCache__uType : ::uClassType
{
};

FileCache__uType* FileCache__typeof();

void FileCache___ObjInit(FileCache* __this);
void FileCache___TypeInit(::uStatic* __this);
::app::Outracks::Simulator::ByteFileSource* FileCache__GetFileSource(::uStatic* __this, ::uString* path);
FileCache* FileCache__New_1(::uStatic* __this);
void FileCache__Update(::uStatic* __this, ::uString* path, ::uArray* bytes);

struct FileCache : ::uObject
{
    void _ObjInit() { FileCache___ObjInit(this); }
};

}}}


#endif
