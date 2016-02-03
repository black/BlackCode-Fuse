// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__UNO_U_X_FILE_SOURCE_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__UNO_U_X_FILE_SOURCE_H__

#include <app/Uno.Collections.IEnumerable__Uno_UX_FileSource.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Uno_UX_FileSource__typeof();

struct ICollection__Uno_UX_FileSource
{
    void(*__fp_Add)(void*, ::app::Uno::UX::FileSource*);

    static void Add(::uObject* __this, ::app::Uno::UX::FileSource* item) { ((ICollection__Uno_UX_FileSource*)uGetInterfacePtr(__this, ICollection__Uno_UX_FileSource__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
};

}}}


#endif
