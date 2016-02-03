// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace IO{struct Stream;}}}
namespace g{namespace Uno{struct BundleFile;}}
namespace Xli { class Stream; }

namespace g{
namespace Uno{

// public sealed class BundleFile :759
// {
uType* BundleFile_typeof();
void BundleFile__ctor__fn(BundleFile* __this, uString* filename);
void BundleFile__CppXliOpenRead_fn(BundleFile* __this, ::Xli::Stream** __retval);
void BundleFile__get_Name_fn(BundleFile* __this, uString** __retval);
void BundleFile__set_Name_fn(BundleFile* __this, uString* value);
void BundleFile__New1_fn(uString* filename, BundleFile** __retval);
void BundleFile__OpenRead_fn(BundleFile* __this, ::g::Uno::IO::Stream** __retval);
void BundleFile__ReadAllBytes_fn(BundleFile* __this, uArray** __retval);
void BundleFile__ReadAllText_fn(BundleFile* __this, uString** __retval);

struct BundleFile : uObject
{
    uStrong<uString*> _Name;

    void ctor_(uString* filename);
    ::Xli::Stream* CppXliOpenRead();
    uString* Name();
    void Name(uString* value);
    ::g::Uno::IO::Stream* OpenRead();
    uArray* ReadAllBytes();
    uString* ReadAllText();
    static BundleFile* New1(uString* filename);
};
// }

}} // ::g::Uno
