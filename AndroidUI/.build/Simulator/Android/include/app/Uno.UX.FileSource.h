// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_FILE_SOURCE_H__
#define __APP_UNO_U_X_FILE_SOURCE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct Stream; } } }
namespace app { namespace Uno { struct BundleFile; } }

namespace app {
namespace Uno {
namespace UX {

struct FileSource;

struct FileSource__uType : ::uClassType
{
    ::app::Uno::IO::Stream*(*__fp_OpenRead)(FileSource*);
    ::uArray*(*__fp_ReadAllBytes)(FileSource*);
    ::uString*(*__fp_ReadAllText)(FileSource*);
};

FileSource__uType* FileSource__typeof();

void FileSource___ObjInit(FileSource* __this, ::uString* name);
void FileSource__add_DataChanged(FileSource* __this, ::uDelegate* value);
void FileSource__OnDataChanged(FileSource* __this);
FileSource* FileSource__op_Implicit(::uStatic* __this, ::app::Uno::BundleFile* bundleFile);
::uArray* FileSource__ReadAllBytes(FileSource* __this);
::uString* FileSource__ReadAllText(FileSource* __this);
void FileSource__remove_DataChanged(FileSource* __this, ::uDelegate* value);

struct FileSource : ::uObject
{
    ::uStrong< ::uString*> Name;
    ::uStrong< ::uDelegate*> DataChanged;

    void _ObjInit(::uString* name) { FileSource___ObjInit(this, name); }
    void add_DataChanged(::uDelegate* value) { FileSource__add_DataChanged(this, value); }
    void OnDataChanged() { FileSource__OnDataChanged(this); }
    ::app::Uno::IO::Stream* OpenRead() { return (((FileSource__uType*)this->__obj_type)->__fp_OpenRead)(this); }
    ::uArray* ReadAllBytes() { return (((FileSource__uType*)this->__obj_type)->__fp_ReadAllBytes)(this); }
    ::uString* ReadAllText() { return (((FileSource__uType*)this->__obj_type)->__fp_ReadAllText)(this); }
    void remove_DataChanged(::uDelegate* value) { FileSource__remove_DataChanged(this, value); }
};

}}}


#endif
