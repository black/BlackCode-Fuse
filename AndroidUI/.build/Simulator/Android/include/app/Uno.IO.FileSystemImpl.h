// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_FILE_SYSTEM_IMPL_H__
#define __APP_UNO_I_O_FILE_SYSTEM_IMPL_H__

#include <Uno.h>
class CppXliFileSystemEnumerator;
namespace Xli { class Stream; }

namespace app {
namespace Uno {
namespace IO {

struct FileSystemImpl__uType : ::uClassType
{
};

FileSystemImpl__uType* FileSystemImpl__typeof();

void FileSystemImpl__AppendAllLines(::uStatic* __this, ::uString* filename, ::uArray* contents);
void FileSystemImpl__AppendAllText(::uStatic* __this, ::uString* filename_, ::uString* contents_);
void FileSystemImpl__CopyFile(::uStatic* __this, ::uString* sourceName_, ::uString* destinationName_, bool overwrite_);
::Xli::Stream* FileSystemImpl__CppXliOpen(::uStatic* __this, ::uString* filename_, int filemode_);
::Xli::Stream* FileSystemImpl__CppXliOpenRead(::uStatic* __this, ::uString* filename_);
::Xli::Stream* FileSystemImpl__CppXliOpenWrite(::uStatic* __this, ::uString* filename_);
void FileSystemImpl__CreateDirectory(::uStatic* __this, ::uString* dirName_);
void FileSystemImpl__DeleteDirectory(::uStatic* __this, ::uString* dirName_, bool recursive_);
void FileSystemImpl__DeleteFile(::uStatic* __this, ::uString* filename_);
::uString* FileSystemImpl__GetCurrentDirectory(::uStatic* __this);
::CppXliFileSystemEnumerator* FileSystemImpl__GetEnumerator(::uStatic* __this, ::uString* dirName_);
::uString* FileSystemImpl__GetUserDirectory(::uStatic* __this, int dir_);
bool FileSystemImpl__IsDirectory(::uStatic* __this, ::uString* filename_);
bool FileSystemImpl__IsFile(::uStatic* __this, ::uString* filename_);
void FileSystemImpl__MoveDirectory(::uStatic* __this, ::uString* oldName_, ::uString* newName_);
void FileSystemImpl__MoveFile(::uStatic* __this, ::uString* oldName_, ::uString* newName_);
::uArray* FileSystemImpl__ReadAllBytes(::uStatic* __this, ::uString* filename_);
::uArray* FileSystemImpl__ReadAllLines(::uStatic* __this, ::uString* filename_);
::uString* FileSystemImpl__ReadAllText(::uStatic* __this, ::uString* filename_);
void FileSystemImpl__SetCurrentDirectory(::uStatic* __this, ::uString* dirName_);
void FileSystemImpl__WriteAllBytes(::uStatic* __this, ::uString* filename_, ::uArray* bytes_);
void FileSystemImpl__WriteAllLines(::uStatic* __this, ::uString* filename_, ::uArray* content_);
void FileSystemImpl__WriteAllText(::uStatic* __this, ::uString* filename_, ::uString* text_);

}}}


#endif
