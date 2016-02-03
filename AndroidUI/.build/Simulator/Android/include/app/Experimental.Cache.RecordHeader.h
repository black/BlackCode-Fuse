// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_CACHE_RECORD_HEADER_H__
#define __APP_EXPERIMENTAL_CACHE_RECORD_HEADER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Experimental {
namespace Cache {

struct RecordHeader;

struct RecordHeader__uType : ::uClassType
{
};

RecordHeader__uType* RecordHeader__typeof();

void RecordHeader___ObjInit(RecordHeader* __this);
RecordHeader* RecordHeader__New_1(::uStatic* __this);
RecordHeader* RecordHeader__Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* r);
void RecordHeader__Write(RecordHeader* __this, ::app::Uno::IO::BinaryWriter* w);

struct RecordHeader : ::uObject
{
    int Status;
    int Size;
    int Used;
    ::uLong Position;
    ::uStrong< RecordHeader*> Prev;
    ::uStrong< RecordHeader*> Next;

    void _ObjInit() { RecordHeader___ObjInit(this); }
    void Write(::app::Uno::IO::BinaryWriter* w) { RecordHeader__Write(this, w); }
};

}}}


#endif
