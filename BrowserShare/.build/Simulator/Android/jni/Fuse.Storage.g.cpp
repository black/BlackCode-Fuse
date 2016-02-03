// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Storage.ApplicationDir.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.IDisposable.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.FileMode.h>
#include <Uno.IO.Path.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.Promise-1.h>
static uString* STRINGS[3];
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace Storage{

// C:\ProgramData\Uno\Packages\Fuse.Storage\0.19.3\$.uno(9)
// --------------------------------------------------------

// public static class ApplicationDir :9
// {
uClassType* ApplicationDir_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Storage.ApplicationDir", options);
    ::STRINGS[0] = uString::Const("filename");
    ::STRINGS[1] = uString::Const("File does not exist.");
    ::STRINGS[2] = uString::Const("value");
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[1] = ::g::Uno::Bool_typeof();
    ::TYPES[2] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[4] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[5] = ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->Reflection.SetFunctions(5,
        new uFunction("Delete", NULL, (void*)ApplicationDir__Delete_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Read", NULL, (void*)ApplicationDir__Read_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("ReadAsync", NULL, (void*)ApplicationDir__ReadAsync_fn, 0, true, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::String_typeof()), 1, ::g::Uno::String_typeof()),
        new uFunction("Write", NULL, (void*)ApplicationDir__Write_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("WriteAsync", NULL, (void*)ApplicationDir__WriteAsync_fn, 0, true, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Uno::Bool_typeof()), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
    return type;
}

// private static void CreateFile(string filepath) :26
void ApplicationDir__CreateFile_fn(uString* filepath)
{
    ApplicationDir::CreateFile(filepath);
}

// public static bool Delete(string filename) :44
void ApplicationDir__Delete_fn(uString* filename, bool* __retval)
{
    *__retval = ApplicationDir::Delete(filename);
}

// public static string Read(string filename) :32
void ApplicationDir__Read_fn(uString* filename, uString** __retval)
{
    *__retval = ApplicationDir::Read(filename);
}

// public static Uno.Threading.Future<string> ReadAsync(string filename) :75
void ApplicationDir__ReadAsync_fn(uString* filename, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ApplicationDir::ReadAsync(filename);
}

// public static bool Write(string filename, string value) :11
void ApplicationDir__Write_fn(uString* filename, uString* value, bool* __retval)
{
    *__retval = ApplicationDir::Write(filename, value);
}

// public static Uno.Threading.Future<bool> WriteAsync(string filename, string value) :60
void ApplicationDir__WriteAsync_fn(uString* filename, uString* value, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ApplicationDir::WriteAsync(filename, value);
}

// private static void CreateFile(string filepath) [static] :26
void ApplicationDir::CreateFile(uString* filepath)
{
    ::g::Uno::IO::Stream* stream = ::g::Uno::IO::File::Open(filepath, 2);

    try
    {
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)stream), ::TYPES[0/*Uno.IDisposable*/]));
        throw __t;
    }
    // finally
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)stream), ::TYPES[0/*Uno.IDisposable*/]));
}

// public static bool Delete(string filename) [static] :44
bool ApplicationDir::Delete(uString* filename)
{
    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"filename"*/]));

    uString* filepath = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Directory::GetUserDirectory(1), filename);

    if (!::g::Uno::IO::File::Exists(filepath))
        return false;

    try
    {
        ::g::Uno::IO::File::Delete(filepath);
        return true;
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
    }

    return false;
}

// public static string Read(string filename) [static] :32
uString* ApplicationDir::Read(uString* filename)
{
    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"filename"*/]));

    uString* filepath = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Directory::GetUserDirectory(1), filename);

    if (::g::Uno::IO::File::Exists(filepath))
        return ::g::Uno::IO::File::ReadAllText(filepath);
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"File does n...*/]));
}

// public static Uno.Threading.Future<string> ReadAsync(string filename) [static] :75
::g::Uno::Threading::Future1* ApplicationDir::ReadAsync(uString* filename)
{
    ::g::Uno::Threading::Promise* promise = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[2/*Uno.Threading.Promise<string>*/]);

    try
    {
        uString* filecontent = ApplicationDir::Read(filename);
        ::g::Uno::Threading::Promise__Resolve_fn(uPtr(promise), filecontent);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(promise)->Reject(e);
    }

    return promise;
}

// public static bool Write(string filename, string value) [static] :11
bool ApplicationDir::Write(uString* filename, uString* value)
{
    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"filename"*/]));

    if (::g::Uno::String::op_Equality(value, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[2/*"value"*/]));

    uString* filepath = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Directory::GetUserDirectory(1), filename);
    ApplicationDir::CreateFile(filepath);
    ::g::Uno::IO::File::WriteAllText(filepath, value);
    return true;
}

// public static Uno.Threading.Future<bool> WriteAsync(string filename, string value) [static] :60
::g::Uno::Threading::Future1* ApplicationDir::WriteAsync(uString* filename, uString* value)
{
    ::g::Uno::Threading::Promise* promise = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[4/*Uno.Threading.Promise<bool>*/]);

    try
    {
        bool success = ApplicationDir::Write(filename, value);
        ::g::Uno::Threading::Promise__Resolve_fn(uPtr(promise), uCRef(success));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(promise)->Reject(e);
    }

    return promise;
}
// }

}}} // ::g::Fuse::Storage
