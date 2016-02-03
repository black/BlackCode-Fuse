// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_LIST__UNO_DATA_XML_XML_LINKED_NODE_H__
#define __APP_UNO_COLLECTIONS_I_LIST__UNO_DATA_XML_XML_LINKED_NODE_H__

#include <app/Uno.Collections.ICollection__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Collections.IEnumerable__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlLinkedNode; } } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IList__Uno_Data_Xml_XmlLinkedNode__typeof();

struct IList__Uno_Data_Xml_XmlLinkedNode
{
    ::app::Uno::Data::Xml::XmlLinkedNode*(*__fp_get_Item)(void*, int);
    void(*__fp_Insert)(void*, int, ::app::Uno::Data::Xml::XmlLinkedNode*);
    void(*__fp_RemoveAt)(void*, int);

    static ::app::Uno::Data::Xml::XmlLinkedNode* Item(::uObject* __this, int index) { return ((IList__Uno_Data_Xml_XmlLinkedNode*)uGetInterfacePtr(__this, IList__Uno_Data_Xml_XmlLinkedNode__typeof()))->__fp_get_Item((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
    static void Insert(::uObject* __this, int index, ::app::Uno::Data::Xml::XmlLinkedNode* item) { ((IList__Uno_Data_Xml_XmlLinkedNode*)uGetInterfacePtr(__this, IList__Uno_Data_Xml_XmlLinkedNode__typeof()))->__fp_Insert((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index, item); }
    static void RemoveAt(::uObject* __this, int index) { ((IList__Uno_Data_Xml_XmlLinkedNode*)uGetInterfacePtr(__this, IList__Uno_Data_Xml_XmlLinkedNode__typeof()))->__fp_RemoveAt((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
};

}}}


#endif
