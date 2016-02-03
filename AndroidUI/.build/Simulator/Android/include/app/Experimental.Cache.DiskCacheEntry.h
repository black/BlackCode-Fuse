// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_CACHE_DISK_CACHE_ENTRY_H__
#define __APP_EXPERIMENTAL_CACHE_DISK_CACHE_ENTRY_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__string; } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Experimental {
namespace Cache {

struct DiskCacheEntry;

struct DiskCacheEntry__uType : ::uClassType
{
};

DiskCacheEntry__uType* DiskCacheEntry__typeof();

void DiskCacheEntry___ObjInit(DiskCacheEntry* __this);
DiskCacheEntry* DiskCacheEntry__Load(::uStatic* __this, ::app::Uno::IO::BinaryReader* r);
DiskCacheEntry* DiskCacheEntry__New_1(::uStatic* __this);
void DiskCacheEntry__Write(DiskCacheEntry* __this, ::app::Uno::IO::BinaryWriter* w);

struct DiskCacheEntry : ::uObject
{
    ::uStrong< ::uString*> Id;
    ::uStrong< ::app::Uno::Collections::Dictionary__string__string*> Meta;
    int FileRef;
    ::uLong Size;
    int Status;
    int LastUsed;

    void _ObjInit() { DiskCacheEntry___ObjInit(this); }
    void Write(::app::Uno::IO::BinaryWriter* w) { DiskCacheEntry__Write(this, w); }
};

}}}


#endif
