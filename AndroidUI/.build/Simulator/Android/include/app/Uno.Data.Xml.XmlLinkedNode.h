// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_XML_LINKED_NODE_H__
#define __APP_UNO_DATA_XML_XML_LINKED_NODE_H__

#include <app/Uno.Data.Xml.XmlNode.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Data_Xml_XmlLinkedNode; } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlAttributeCollection; } } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlLinkedNodeCollection; } } } }

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct XmlLinkedNode;

struct XmlLinkedNode__uType : ::app::Uno::Data::Xml::XmlNode__uType
{
    XmlLinkedNode*(*__fp_CreateNewInstance)(XmlLinkedNode*);
    ::uString*(*__fp_GetTextContent)(XmlLinkedNode*);
};

XmlLinkedNode__uType* XmlLinkedNode__typeof();

void XmlLinkedNode___ObjInit_2(XmlLinkedNode* __this);
void XmlLinkedNode__AddAfterSelf(XmlLinkedNode* __this, XmlLinkedNode* node);
void XmlLinkedNode__AddBeforeSelf(XmlLinkedNode* __this, XmlLinkedNode* node);
void XmlLinkedNode__AppendChild(XmlLinkedNode* __this, XmlLinkedNode* node);
XmlLinkedNode* XmlLinkedNode__Clone(XmlLinkedNode* __this);
void XmlLinkedNode__CloneChildren(XmlLinkedNode* __this, XmlLinkedNode* newNode, XmlLinkedNode* existingNode);
::uObject* XmlLinkedNode__FindAllByName(XmlLinkedNode* __this, ::uString* name, bool includeNestedNodes);
XmlLinkedNode* XmlLinkedNode__FindByName(XmlLinkedNode* __this, ::uString* name, bool includeNestedNodes);
::app::Uno::Data::Xml::XmlAttributeCollection* XmlLinkedNode__get_Attributes(XmlLinkedNode* __this);
::app::Uno::Data::Xml::XmlLinkedNodeCollection* XmlLinkedNode__get_Children(XmlLinkedNode* __this);
XmlLinkedNode* XmlLinkedNode__get_FirstChild(XmlLinkedNode* __this);
bool XmlLinkedNode__get_HasAttributes(XmlLinkedNode* __this);
bool XmlLinkedNode__get_HasChildren(XmlLinkedNode* __this);
XmlLinkedNode* XmlLinkedNode__get_LastChild(XmlLinkedNode* __this);
XmlLinkedNode* XmlLinkedNode__get_NextSibling(XmlLinkedNode* __this);
XmlLinkedNode* XmlLinkedNode__get_Parent(XmlLinkedNode* __this);
XmlLinkedNode* XmlLinkedNode__get_PreviousSibling(XmlLinkedNode* __this);
::uString* XmlLinkedNode__get_TextContent(XmlLinkedNode* __this);
::uString* XmlLinkedNode__GetTextContent(XmlLinkedNode* __this);
void XmlLinkedNode__PrependChild(XmlLinkedNode* __this, XmlLinkedNode* node);
void XmlLinkedNode__RecursiveSearch(XmlLinkedNode* __this, ::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode* res, XmlLinkedNode* node, ::uString* name, bool includeNestedNodes);
void XmlLinkedNode__set_Attributes(XmlLinkedNode* __this, ::app::Uno::Data::Xml::XmlAttributeCollection* value);
void XmlLinkedNode__set_Children(XmlLinkedNode* __this, ::app::Uno::Data::Xml::XmlLinkedNodeCollection* value);
void XmlLinkedNode__set_NextSibling(XmlLinkedNode* __this, XmlLinkedNode* value);
void XmlLinkedNode__set_Parent(XmlLinkedNode* __this, XmlLinkedNode* value);
void XmlLinkedNode__set_PreviousSibling(XmlLinkedNode* __this, XmlLinkedNode* value);
void XmlLinkedNode__set_TextContent(XmlLinkedNode* __this, ::uString* value);

struct XmlLinkedNode : ::app::Uno::Data::Xml::XmlNode
{
    ::uStrong< XmlLinkedNode*> _Parent;
    ::uStrong< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*> _Children;
    ::uStrong< ::app::Uno::Data::Xml::XmlAttributeCollection*> _Attributes;
    ::uStrong< XmlLinkedNode*> _NextSibling;
    ::uStrong< XmlLinkedNode*> _PreviousSibling;

    void _ObjInit_2() { XmlLinkedNode___ObjInit_2(this); }
    void AddAfterSelf(XmlLinkedNode* node) { XmlLinkedNode__AddAfterSelf(this, node); }
    void AddBeforeSelf(XmlLinkedNode* node) { XmlLinkedNode__AddBeforeSelf(this, node); }
    void AppendChild(XmlLinkedNode* node) { XmlLinkedNode__AppendChild(this, node); }
    XmlLinkedNode* Clone() { return XmlLinkedNode__Clone(this); }
    void CloneChildren(XmlLinkedNode* newNode, XmlLinkedNode* existingNode) { XmlLinkedNode__CloneChildren(this, newNode, existingNode); }
    XmlLinkedNode* CreateNewInstance() { return (((XmlLinkedNode__uType*)this->__obj_type)->__fp_CreateNewInstance)(this); }
    ::uObject* FindAllByName(::uString* name, bool includeNestedNodes) { return XmlLinkedNode__FindAllByName(this, name, includeNestedNodes); }
    XmlLinkedNode* FindByName(::uString* name, bool includeNestedNodes) { return XmlLinkedNode__FindByName(this, name, includeNestedNodes); }
    ::app::Uno::Data::Xml::XmlAttributeCollection* Attributes() { return XmlLinkedNode__get_Attributes(this); }
    ::app::Uno::Data::Xml::XmlLinkedNodeCollection* Children() { return XmlLinkedNode__get_Children(this); }
    XmlLinkedNode* FirstChild() { return XmlLinkedNode__get_FirstChild(this); }
    bool HasAttributes() { return XmlLinkedNode__get_HasAttributes(this); }
    bool HasChildren() { return XmlLinkedNode__get_HasChildren(this); }
    XmlLinkedNode* LastChild() { return XmlLinkedNode__get_LastChild(this); }
    XmlLinkedNode* NextSibling() { return XmlLinkedNode__get_NextSibling(this); }
    XmlLinkedNode* Parent() { return XmlLinkedNode__get_Parent(this); }
    XmlLinkedNode* PreviousSibling() { return XmlLinkedNode__get_PreviousSibling(this); }
    ::uString* TextContent() { return XmlLinkedNode__get_TextContent(this); }
    ::uString* GetTextContent() { return (((XmlLinkedNode__uType*)this->__obj_type)->__fp_GetTextContent)(this); }
    void PrependChild(XmlLinkedNode* node) { XmlLinkedNode__PrependChild(this, node); }
    void RecursiveSearch(::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode* res, XmlLinkedNode* node, ::uString* name, bool includeNestedNodes) { XmlLinkedNode__RecursiveSearch(this, res, node, name, includeNestedNodes); }
    void Attributes(::app::Uno::Data::Xml::XmlAttributeCollection* value) { XmlLinkedNode__set_Attributes(this, value); }
    void Children(::app::Uno::Data::Xml::XmlLinkedNodeCollection* value) { XmlLinkedNode__set_Children(this, value); }
    void NextSibling(XmlLinkedNode* value) { XmlLinkedNode__set_NextSibling(this, value); }
    void Parent(XmlLinkedNode* value) { XmlLinkedNode__set_Parent(this, value); }
    void PreviousSibling(XmlLinkedNode* value) { XmlLinkedNode__set_PreviousSibling(this, value); }
    void TextContent(::uString* value) { XmlLinkedNode__set_TextContent(this, value); }
};

}}}}


#endif
