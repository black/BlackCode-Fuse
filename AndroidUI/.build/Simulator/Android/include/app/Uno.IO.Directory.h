// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_DIRECTORY_H__
#define __APP_UNO_I_O_DIRECTORY_H__

#include <Uno.h>

namespace app {
namespace Uno {
namespace IO {

struct Directory__uType : ::uClassType
{
};

Directory__uType* Directory__typeof();

void Directory__CreateDirectory(::uStatic* __this, ::uString* dirName);
void Directory__Delete(::uStatic* __this, ::uString* dirName, bool recursive);
::uObject* Directory__EnumerateDirectories(::uStatic* __this, ::uString* dirName);
::uObject* Directory__EnumerateFiles(::uStatic* __this, ::uString* dirName);
::uObject* Directory__EnumerateFileSystemEntries(::uStatic* __this, ::uString* dirName);
bool Directory__Exists(::uStatic* __this, ::uString* dirName);
::uString* Directory__GetCurrentDirectory(::uStatic* __this);
::uString* Directory__GetUserDirectory(::uStatic* __this, int dir);
void Directory__Move(::uStatic* __this, ::uString* oldName, ::uString* newName);
void Directory__SetCurrentDirectory(::uStatic* __this, ::uString* dirName);

}}}


#endif
