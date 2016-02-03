// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_BUNDLE_FILE_H__
#define __APP_UNO_BUNDLE_FILE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct Stream; } } }
namespace Xli { class Stream; }

namespace app {
namespace Uno {

struct BundleFile;

struct BundleFile__uType : ::uClassType
{
};

BundleFile__uType* BundleFile__typeof();

void BundleFile___ObjInit(BundleFile* __this, ::uString* filename);
::Xli::Stream* BundleFile__CppXliOpenRead(BundleFile* __this);
::uString* BundleFile__get_Name(BundleFile* __this);
BundleFile* BundleFile__New_1(::uStatic* __this, ::uString* filename);
::app::Uno::IO::Stream* BundleFile__OpenRead(BundleFile* __this);
::uArray* BundleFile__ReadAllBytes(BundleFile* __this);
::uString* BundleFile__ReadAllText(BundleFile* __this);
void BundleFile__set_Name(BundleFile* __this, ::uString* value);

struct BundleFile : ::uObject
{
    ::uStrong< ::uString*> _Name;

    void _ObjInit(::uString* filename) { BundleFile___ObjInit(this, filename); }
    ::Xli::Stream* CppXliOpenRead() { return BundleFile__CppXliOpenRead(this); }
    ::uString* Name() { return BundleFile__get_Name(this); }
    ::app::Uno::IO::Stream* OpenRead() { return BundleFile__OpenRead(this); }
    ::uArray* ReadAllBytes() { return BundleFile__ReadAllBytes(this); }
    ::uString* ReadAllText() { return BundleFile__ReadAllText(this); }
    void Name(::uString* value) { BundleFile__set_Name(this, value); }
};

}}


#endif
