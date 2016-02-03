// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_CACHE_I_CACHE_WRITER_H__
#define __APP_EXPERIMENTAL_CACHE_I_CACHE_WRITER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct Stream; } } }

namespace app {
namespace Experimental {
namespace Cache {

::uInterfaceType* ICacheWriter__typeof();

struct ICacheWriter
{
    void(*__fp_AddMeta)(void*, ::uString*, ::uString*);
    void(*__fp_Close)(void*);
    ::app::Uno::IO::Stream*(*__fp_get_Stream)(void*);

    static void AddMeta(::uObject* __this, ::uString* key, ::uString* value) { ((ICacheWriter*)uGetInterfacePtr(__this, ICacheWriter__typeof()))->__fp_AddMeta((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), key, value); }
    static void Close(::uObject* __this) { ((ICacheWriter*)uGetInterfacePtr(__this, ICacheWriter__typeof()))->__fp_Close((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::Uno::IO::Stream* Stream(::uObject* __this) { return ((ICacheWriter*)uGetInterfacePtr(__this, ICacheWriter__typeof()))->__fp_get_Stream((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
