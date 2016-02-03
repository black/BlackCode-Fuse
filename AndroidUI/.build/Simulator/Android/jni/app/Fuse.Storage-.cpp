#include <app/Fuse.Storage.ApplicationDir.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.IO.Directory.h>
#include <app/Uno.IO.File.h>
#include <app/Uno.IO.FileMode.h>
#include <app/Uno.IO.Path.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.IO.UserDirectory.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.Future__bool.h>
#include <app/Uno.Threading.Future__string.h>
#include <app/Uno.Threading.Promise__bool.h>
#include <app/Uno.Threading.Promise__string.h>

namespace app {
namespace Fuse {
namespace Storage {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Storage\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ApplicationDir__uType* ApplicationDir__typeof()
{
    static ::uStaticStrong<ApplicationDir__uType*> type;
    if (type != NULL) return type;

    type = (ApplicationDir__uType*)::uAllocClassType(sizeof(ApplicationDir__uType), "Fuse.Storage.ApplicationDir");

    type->SetFunctions(6,
        ::uNewFunctionVoid("CreateFile", ApplicationDir__CreateFile, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunction("Delete", ApplicationDir__Delete, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Read", ApplicationDir__Read, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("ReadAsync", ApplicationDir__ReadAsync, 0, true, ::app::Uno::Threading::Future__string__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Write", ApplicationDir__Write, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("WriteAsync", ApplicationDir__WriteAsync, 0, true, ::app::Uno::Threading::Future__bool__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void ApplicationDir__CreateFile(::uStatic* __this, ::uString* filepath)
{
    {
        ::app::Uno::IO::Stream* stream = ::app::Uno::IO::File__Open(NULL, filepath, 2);

        try
        {
            {
            }
        }
        catch (const ::uThrowable& __t)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>((::uObject*)stream));
            throw __t;
        }
        // finally
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>((::uObject*)stream));
        }
    }
}

bool ApplicationDir__Delete(::uStatic* __this, ::uString* filename)
{
    if (::app::Uno::String__op_Equality(NULL, filename, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("filename")));
    }

    ::uString* filepath = ::app::Uno::IO::Path__Combine_1(NULL, ::app::Uno::IO::Directory__GetUserDirectory(NULL, 1), filename);

    if (!::app::Uno::IO::File__Exists(NULL, filepath))
    {
        return false;
    }

    try
    {
        ::app::Uno::IO::File__Delete(NULL, filepath);
        return true;
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
        }
        else
        {
            throw __t;
        }
    }

    return false;
}

::uString* ApplicationDir__Read(::uStatic* __this, ::uString* filename)
{
    if (::app::Uno::String__op_Equality(NULL, filename, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("filename")));
    }

    ::uString* filepath = ::app::Uno::IO::Path__Combine_1(NULL, ::app::Uno::IO::Directory__GetUserDirectory(NULL, 1), filename);

    if (::app::Uno::IO::File__Exists(NULL, filepath))
    {
        return ::app::Uno::IO::File__ReadAllText(NULL, filepath);
    }
    else
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("File does not exist.")));
    }
}

::app::Uno::Threading::Future__string* ApplicationDir__ReadAsync(::uStatic* __this, ::uString* filename)
{
    ::app::Uno::Threading::Promise__string* promise = ::app::Uno::Threading::Promise__string__New_1(NULL);

    try
    {
        ::uString* filecontent = ApplicationDir__Read(NULL, filename);
        ::uPtr< ::app::Uno::Threading::Promise__string*>(promise)->Resolve(filecontent);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::uPtr< ::app::Uno::Threading::Promise__string*>(promise)->Reject(e);
        }
        else
        {
            throw __t;
        }
    }

    return (::app::Uno::Threading::Future__string*)promise;
}

bool ApplicationDir__Write(::uStatic* __this, ::uString* filename, ::uString* value)
{
    if (::app::Uno::String__op_Equality(NULL, filename, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("filename")));
    }

    if (::app::Uno::String__op_Equality(NULL, value, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("value")));
    }

    ::uString* filepath = ::app::Uno::IO::Path__Combine_1(NULL, ::app::Uno::IO::Directory__GetUserDirectory(NULL, 1), filename);
    ApplicationDir__CreateFile(NULL, filepath);
    ::app::Uno::IO::File__WriteAllText(NULL, filepath, value);
    return true;
}

::app::Uno::Threading::Future__bool* ApplicationDir__WriteAsync(::uStatic* __this, ::uString* filename, ::uString* value)
{
    ::app::Uno::Threading::Promise__bool* promise = ::app::Uno::Threading::Promise__bool__New_1(NULL);

    try
    {
        bool success = ApplicationDir__Write(NULL, filename, value);
        ::uPtr< ::app::Uno::Threading::Promise__bool*>(promise)->Resolve(success);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::uPtr< ::app::Uno::Threading::Promise__bool*>(promise)->Reject(e);
        }
        else
        {
            throw __t;
        }
    }

    return (::app::Uno::Threading::Future__bool*)promise;
}

}}}
