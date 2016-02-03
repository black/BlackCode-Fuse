// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_CACHE_I_CACHE_READER_H__
#define __APP_EXPERIMENTAL_CACHE_I_CACHE_READER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct Stream; } } }

namespace app {
namespace Experimental {
namespace Cache {

::uInterfaceType* ICacheReader__typeof();

struct ICacheReader
{
    void(*__fp_Delete)(void*);
    ::app::Uno::IO::Stream*(*__fp_get_Stream)(void*);
    ::uString*(*__fp_GetMeta)(void*, ::uString*);

    static void Delete(::uObject* __this) { ((ICacheReader*)uGetInterfacePtr(__this, ICacheReader__typeof()))->__fp_Delete((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::app::Uno::IO::Stream* Stream(::uObject* __this) { return ((ICacheReader*)uGetInterfacePtr(__this, ICacheReader__typeof()))->__fp_get_Stream((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uString* GetMeta(::uObject* __this, ::uString* key) { return ((ICacheReader*)uGetInterfacePtr(__this, ICacheReader__typeof()))->__fp_GetMeta((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), key); }
};

}}}


#endif
