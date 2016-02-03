// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_LIST__UNO_DATA_XML_XML_ATTRIBUTE_H__
#define __APP_UNO_COLLECTIONS_I_LIST__UNO_DATA_XML_XML_ATTRIBUTE_H__

#include <app/Uno.Collections.ICollection__Uno_Data_Xml_XmlAttribute.h>
#include <app/Uno.Collections.IEnumerable__Uno_Data_Xml_XmlAttribute.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlAttribute; } } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IList__Uno_Data_Xml_XmlAttribute__typeof();

struct IList__Uno_Data_Xml_XmlAttribute
{
    ::app::Uno::Data::Xml::XmlAttribute*(*__fp_get_Item)(void*, int);
    void(*__fp_Insert)(void*, int, ::app::Uno::Data::Xml::XmlAttribute*);
    void(*__fp_RemoveAt)(void*, int);

    static ::app::Uno::Data::Xml::XmlAttribute* Item(::uObject* __this, int index) { return ((IList__Uno_Data_Xml_XmlAttribute*)uGetInterfacePtr(__this, IList__Uno_Data_Xml_XmlAttribute__typeof()))->__fp_get_Item((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
    static void Insert(::uObject* __this, int index, ::app::Uno::Data::Xml::XmlAttribute* item) { ((IList__Uno_Data_Xml_XmlAttribute*)uGetInterfacePtr(__this, IList__Uno_Data_Xml_XmlAttribute__typeof()))->__fp_Insert((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index, item); }
    static void RemoveAt(::uObject* __this, int index) { ((IList__Uno_Data_Xml_XmlAttribute*)uGetInterfacePtr(__this, IList__Uno_Data_Xml_XmlAttribute__typeof()))->__fp_RemoveAt((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
};

}}}


#endif
