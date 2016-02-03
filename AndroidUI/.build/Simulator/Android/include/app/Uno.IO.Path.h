// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_PATH_H__
#define __APP_UNO_I_O_PATH_H__

#include <Uno.h>

namespace app {
namespace Uno {
namespace IO {

struct Path__uType : ::uClassType
{
};

Path__uType* Path__typeof();

::uString* Path__Combine(::uStatic* __this, ::uArray* parts);
::uString* Path__Combine_1(::uStatic* __this, ::uString* a, ::uString* b);
::uString* Path__Combine_2(::uStatic* __this, ::uString* a, ::uString* b, ::uString* c);
::uString* Path__Combine_3(::uStatic* __this, ::uString* a, ::uString* b, ::uString* c, ::uString* d);
::uChar Path__get_DirectorySeparatorChar(::uStatic* __this);
::uString* Path__GetDirectoryName(::uStatic* __this, ::uString* filename);
::uString* Path__GetExtension(::uStatic* __this, ::uString* filename);
::uString* Path__GetFileName(::uStatic* __this, ::uString* filename);
::uString* Path__GetFileNameWithoutExtension(::uStatic* __this, ::uString* filename);
::uString* Path__GetFullPath(::uStatic* __this, ::uString* filename);
bool Path__HasExtension(::uStatic* __this, ::uString* filename);
bool Path__IsPathRooted(::uStatic* __this, ::uString* filename);

}}}


#endif
