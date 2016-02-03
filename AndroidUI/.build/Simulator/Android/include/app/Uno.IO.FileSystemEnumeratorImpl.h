// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_FILE_SYSTEM_ENUMERATOR_IMPL_H__
#define __APP_UNO_I_O_FILE_SYSTEM_ENUMERATOR_IMPL_H__

#include <Uno.h>
class CppXliFileSystemEnumerator;

namespace app {
namespace Uno {
namespace IO {

struct FileSystemEnumeratorImpl__uType : ::uClassType
{
};

FileSystemEnumeratorImpl__uType* FileSystemEnumeratorImpl__typeof();

void FileSystemEnumeratorImpl__Dispose(::uStatic* __this, ::CppXliFileSystemEnumerator* handle_);
::uString* FileSystemEnumeratorImpl__GetName(::uStatic* __this, ::CppXliFileSystemEnumerator* handle_);
bool FileSystemEnumeratorImpl__IsDirectory(::uStatic* __this, ::CppXliFileSystemEnumerator* handle_);
bool FileSystemEnumeratorImpl__MoveNext(::uStatic* __this, ::CppXliFileSystemEnumerator* handle_);
void FileSystemEnumeratorImpl__Reset(::uStatic* __this, ::CppXliFileSystemEnumerator* handle_);

}}}


#endif
