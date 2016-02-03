// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_TEXTURE_LOADER_INVALID_CONTENT_TYPE_EXCEPTION_H__
#define __APP_EXPERIMENTAL_TEXTURE_LOADER_INVALID_CONTENT_TYPE_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Experimental {
namespace TextureLoader {

struct InvalidContentTypeException;

struct InvalidContentTypeException__uType : ::app::Uno::Exception__uType
{
};

InvalidContentTypeException__uType* InvalidContentTypeException__typeof();

void InvalidContentTypeException___ObjInit_2(InvalidContentTypeException* __this, ::uString* reason);
InvalidContentTypeException* InvalidContentTypeException__New_3(::uStatic* __this, ::uString* reason);

struct InvalidContentTypeException : ::app::Uno::Exception
{
    void _ObjInit_2(::uString* reason) { InvalidContentTypeException___ObjInit_2(this, reason); }
};

}}}


#endif
