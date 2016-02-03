// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__UNO_DATA_XML_XML_NODE_HANDLE_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__UNO_DATA_XML_XML_NODE_HANDLE_H__

#include <app/Uno.Collections.IEnumerable__Uno_Data_Xml_XmlNodeHandle.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Uno_Data_Xml_XmlNodeHandle__typeof();

struct ICollection__Uno_Data_Xml_XmlNodeHandle
{
    int(*__fp_get_Count)(void*);

    static int Count(::uObject* __this) { return ((ICollection__Uno_Data_Xml_XmlNodeHandle*)uGetInterfacePtr(__this, ICollection__Uno_Data_Xml_XmlNodeHandle__typeof()))->__fp_get_Count((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
