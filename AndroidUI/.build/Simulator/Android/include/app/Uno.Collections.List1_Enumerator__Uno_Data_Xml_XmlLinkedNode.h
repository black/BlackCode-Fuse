// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_DATA_XML_XML_LINKED_NODE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_DATA_XML_XML_LINKED_NODE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Data_Xml_XmlLinkedNode; } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlLinkedNode; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Data_Xml_XmlLinkedNode;

struct List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlLinkedNode __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__uType* List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__typeof();

void List1_Enumerator__Uno_Data_Xml_XmlLinkedNode___ObjInit(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode* __this, ::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode* source);
void List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__Dispose(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode* __this);
::app::Uno::Data::Xml::XmlLinkedNode* List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__get_Current(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode* __this);
bool List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__MoveNext(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode* __this);
List1_Enumerator__Uno_Data_Xml_XmlLinkedNode List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode* source);
void List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Data_Xml_XmlLinkedNode* __this);

struct List1_Enumerator__Uno_Data_Xml_XmlLinkedNode
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::Data::Xml::XmlLinkedNode*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode* source) { List1_Enumerator__Uno_Data_Xml_XmlLinkedNode___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__Dispose(this); }
    ::app::Uno::Data::Xml::XmlLinkedNode* Current() { return List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Data_Xml_XmlLinkedNode__MoveNext(this); }
};

}}}


#endif
