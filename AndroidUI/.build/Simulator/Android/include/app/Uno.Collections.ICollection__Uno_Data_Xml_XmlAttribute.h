// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__UNO_DATA_XML_XML_ATTRIBUTE_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__UNO_DATA_XML_XML_ATTRIBUTE_H__

#include <app/Uno.Collections.IEnumerable__Uno_Data_Xml_XmlAttribute.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlAttribute; } } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Uno_Data_Xml_XmlAttribute__typeof();

struct ICollection__Uno_Data_Xml_XmlAttribute
{
    void(*__fp_Add)(void*, ::app::Uno::Data::Xml::XmlAttribute*);
    void(*__fp_Clear)(void*);
    bool(*__fp_Contains)(void*, ::app::Uno::Data::Xml::XmlAttribute*);
    int(*__fp_get_Count)(void*);
    bool(*__fp_Remove)(void*, ::app::Uno::Data::Xml::XmlAttribute*);

    static void Add(::uObject* __this, ::app::Uno::Data::Xml::XmlAttribute* item) { ((ICollection__Uno_Data_Xml_XmlAttribute*)uGetInterfacePtr(__this, ICollection__Uno_Data_Xml_XmlAttribute__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
    static void Clear(::uObject* __this) { ((ICollection__Uno_Data_Xml_XmlAttribute*)uGetInterfacePtr(__this, ICollection__Uno_Data_Xml_XmlAttribute__typeof()))->__fp_Clear((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool Contains(::uObject* __this, ::app::Uno::Data::Xml::XmlAttribute* item) { return ((ICollection__Uno_Data_Xml_XmlAttribute*)uGetInterfacePtr(__this, ICollection__Uno_Data_Xml_XmlAttribute__typeof()))->__fp_Contains((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
    static int Count(::uObject* __this) { return ((ICollection__Uno_Data_Xml_XmlAttribute*)uGetInterfacePtr(__this, ICollection__Uno_Data_Xml_XmlAttribute__typeof()))->__fp_get_Count((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool Remove(::uObject* __this, ::app::Uno::Data::Xml::XmlAttribute* item) { return ((ICollection__Uno_Data_Xml_XmlAttribute*)uGetInterfacePtr(__this, ICollection__Uno_Data_Xml_XmlAttribute__typeof()))->__fp_Remove((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
};

}}}


#endif
