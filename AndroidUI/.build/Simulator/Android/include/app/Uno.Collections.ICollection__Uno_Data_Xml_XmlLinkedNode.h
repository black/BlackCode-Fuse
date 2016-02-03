// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__UNO_DATA_XML_XML_LINKED_NODE_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__UNO_DATA_XML_XML_LINKED_NODE_H__

#include <app/Uno.Collections.IEnumerable__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlLinkedNode; } } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Uno_Data_Xml_XmlLinkedNode__typeof();

struct ICollection__Uno_Data_Xml_XmlLinkedNode
{
    void(*__fp_Add)(void*, ::app::Uno::Data::Xml::XmlLinkedNode*);
    void(*__fp_Clear)(void*);
    bool(*__fp_Contains)(void*, ::app::Uno::Data::Xml::XmlLinkedNode*);
    int(*__fp_get_Count)(void*);
    bool(*__fp_Remove)(void*, ::app::Uno::Data::Xml::XmlLinkedNode*);

    static void Add(::uObject* __this, ::app::Uno::Data::Xml::XmlLinkedNode* item) { ((ICollection__Uno_Data_Xml_XmlLinkedNode*)uGetInterfacePtr(__this, ICollection__Uno_Data_Xml_XmlLinkedNode__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
    static void Clear(::uObject* __this) { ((ICollection__Uno_Data_Xml_XmlLinkedNode*)uGetInterfacePtr(__this, ICollection__Uno_Data_Xml_XmlLinkedNode__typeof()))->__fp_Clear((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool Contains(::uObject* __this, ::app::Uno::Data::Xml::XmlLinkedNode* item) { return ((ICollection__Uno_Data_Xml_XmlLinkedNode*)uGetInterfacePtr(__this, ICollection__Uno_Data_Xml_XmlLinkedNode__typeof()))->__fp_Contains((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
    static int Count(::uObject* __this) { return ((ICollection__Uno_Data_Xml_XmlLinkedNode*)uGetInterfacePtr(__this, ICollection__Uno_Data_Xml_XmlLinkedNode__typeof()))->__fp_get_Count((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool Remove(::uObject* __this, ::app::Uno::Data::Xml::XmlLinkedNode* item) { return ((ICollection__Uno_Data_Xml_XmlLinkedNode*)uGetInterfacePtr(__this, ICollection__Uno_Data_Xml_XmlLinkedNode__typeof()))->__fp_Remove((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
};

}}}


#endif
