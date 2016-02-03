// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Outracks.Simulator.ByteFileSource.h>
#include <app/Outracks.Simulator.FileCache.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Collections.Dictionary__string__Outracks_Simulator_ByteFileSource.h>
#include <app/Uno.String.h>

namespace app {
namespace Outracks {
namespace Simulator {

::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource*> FileCache___cache;

FileCache__uType* FileCache__typeof()
{
    static ::uStaticStrong<FileCache__uType*> type;
    if (type != NULL) return type;

    type = (FileCache__uType*)::uAllocClassType(sizeof(FileCache__uType), "Outracks.Simulator.FileCache", false, 0, 0, 0);

    type->SetFields(1,
        ::uNewField("_cache", &FileCache___cache, 0, ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("GetFileSource", FileCache__GetFileSource, 0, true, ::app::Outracks::Simulator::ByteFileSource__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", FileCache__New_1, 0, true, FileCache__typeof()),
        ::uNewFunctionVoid("Update", FileCache__Update, 0, true, ::app::Uno::String__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof())));

    ::uRegisterType(type);
    return type;
}

void FileCache___ObjInit(FileCache* __this)
{
}

void FileCache___TypeInit(::uStatic* __this)
{
    FileCache___cache = ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource__New_1(NULL);
}

::app::Outracks::Simulator::ByteFileSource* FileCache__GetFileSource(::uStatic* __this, ::uString* path)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource*>(FileCache___cache)->Item(path);
}

FileCache* FileCache__New_1(::uStatic* __this)
{
    FileCache* inst = (FileCache*)::uAllocObject(sizeof(FileCache), FileCache__typeof());
    inst->_ObjInit();
    return inst;
}

void FileCache__Update(::uStatic* __this, ::uString* path, ::uArray* bytes)
{
    ::app::Outracks::Simulator::ByteFileSource* fs = NULL;

    if (::uPtr< ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource*>(FileCache___cache)->TryGetValue(path, &fs))
    {
        ::uPtr< ::app::Outracks::Simulator::ByteFileSource*>(fs)->Update(bytes);
    }
    else
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource*>(FileCache___cache)->Item(path, ::app::Outracks::Simulator::ByteFileSource__New_1(NULL, path, bytes));
    }
}

}}}
