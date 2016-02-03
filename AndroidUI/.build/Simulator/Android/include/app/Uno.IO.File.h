// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_FILE_H__
#define __APP_UNO_I_O_FILE_H__

#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct Stream; } } }

namespace app {
namespace Uno {
namespace IO {

struct File__uType : ::uClassType
{
};

File__uType* File__typeof();

void File__AppendAllLines(::uStatic* __this, ::uString* filename, ::uArray* contents);
void File__AppendAllText(::uStatic* __this, ::uString* filename, ::uString* contents);
void File__Copy(::uStatic* __this, ::uString* sourceFile, ::uString* destinationFile);
void File__Copy_1(::uStatic* __this, ::uString* sourceFile, ::uString* destinationFile, bool overwrite);
void File__Delete(::uStatic* __this, ::uString* filename);
bool File__Exists(::uStatic* __this, ::uString* filename);
void File__Move(::uStatic* __this, ::uString* oldName, ::uString* newName);
::app::Uno::IO::Stream* File__Open(::uStatic* __this, ::uString* filename, int filemode);
::app::Uno::IO::Stream* File__OpenRead(::uStatic* __this, ::uString* filename);
::app::Uno::IO::Stream* File__OpenWrite(::uStatic* __this, ::uString* filename);
::uArray* File__ReadAllBytes(::uStatic* __this, ::uString* filename);
::uArray* File__ReadAllLines(::uStatic* __this, ::uString* filename);
::uString* File__ReadAllText(::uStatic* __this, ::uString* filename);
void File__WriteAllBytes(::uStatic* __this, ::uString* filename, ::uArray* bytes);
void File__WriteAllLines(::uStatic* __this, ::uString* filename, ::uArray* lines);
void File__WriteAllText(::uStatic* __this, ::uString* filename, ::uString* text);

}}}


#endif
