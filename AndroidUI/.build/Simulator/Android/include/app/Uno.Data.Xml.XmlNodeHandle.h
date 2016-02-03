// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_XML_NODE_HANDLE_H__
#define __APP_UNO_DATA_XML_XML_NODE_HANDLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Data_Xml_XmlAttributeHandle; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Data_Xml_XmlNodeHandle; } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlAttributeHandle; } } } }

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct XmlNodeHandle;

struct XmlNodeHandle__uType : ::uClassType
{
};

XmlNodeHandle__uType* XmlNodeHandle__typeof();

void XmlNodeHandle___ObjInit(XmlNodeHandle* __this);
void XmlNodeHandle___ObjInit_1(XmlNodeHandle* __this, ::uString* xmlVersion, ::uString* xmlEncoding);
void XmlNodeHandle___ObjInit_2(XmlNodeHandle* __this, ::uString* name, ::uString* value, int nodeType);
void XmlNodeHandle__AddAttribute(XmlNodeHandle* __this, ::app::Uno::Data::Xml::XmlAttributeHandle* attribute);
void XmlNodeHandle__AppendChild(XmlNodeHandle* __this, XmlNodeHandle* child);
::uArray* XmlNodeHandle__get_AttributeHandles(XmlNodeHandle* __this);
::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle* XmlNodeHandle__get_Attributes(XmlNodeHandle* __this);
::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle* XmlNodeHandle__get_Children(XmlNodeHandle* __this);
::uArray* XmlNodeHandle__get_ChildrenHandles(XmlNodeHandle* __this);
::uString* XmlNodeHandle__get_Encoding(XmlNodeHandle* __this);
XmlNodeHandle* XmlNodeHandle__get_FirstChild(XmlNodeHandle* __this);
XmlNodeHandle* XmlNodeHandle__get_LastChild(XmlNodeHandle* __this);
::uString* XmlNodeHandle__get_Name(XmlNodeHandle* __this);
XmlNodeHandle* XmlNodeHandle__get_NextSibling(XmlNodeHandle* __this);
int XmlNodeHandle__get_NodeType(XmlNodeHandle* __this);
XmlNodeHandle* XmlNodeHandle__get_Parent(XmlNodeHandle* __this);
XmlNodeHandle* XmlNodeHandle__get_PrevSibling(XmlNodeHandle* __this);
::uString* XmlNodeHandle__get_Value(XmlNodeHandle* __this);
::uString* XmlNodeHandle__get_Version(XmlNodeHandle* __this);
XmlNodeHandle* XmlNodeHandle__New_1(::uStatic* __this);
XmlNodeHandle* XmlNodeHandle__New_2(::uStatic* __this, ::uString* xmlVersion, ::uString* xmlEncoding);
XmlNodeHandle* XmlNodeHandle__New_3(::uStatic* __this, ::uString* name, ::uString* value, int nodeType);
void XmlNodeHandle__set_Encoding(XmlNodeHandle* __this, ::uString* value);
void XmlNodeHandle__set_Name(XmlNodeHandle* __this, ::uString* value);
void XmlNodeHandle__set_NextSibling(XmlNodeHandle* __this, XmlNodeHandle* value);
void XmlNodeHandle__set_NodeType(XmlNodeHandle* __this, int value);
void XmlNodeHandle__set_Parent(XmlNodeHandle* __this, XmlNodeHandle* value);
void XmlNodeHandle__set_PrevSibling(XmlNodeHandle* __this, XmlNodeHandle* value);
void XmlNodeHandle__set_Value(XmlNodeHandle* __this, ::uString* value);
void XmlNodeHandle__set_Version(XmlNodeHandle* __this, ::uString* value);

struct XmlNodeHandle : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle*> _attributes;
    ::uStrong< ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle*> _children;
    ::uStrong< ::uString*> _Name;
    ::uStrong< ::uString*> _Value;
    int _NodeType;
    ::uStrong< ::uString*> _Encoding;
    ::uStrong< ::uString*> _Version;
    ::uStrong< XmlNodeHandle*> _Parent;
    ::uStrong< XmlNodeHandle*> _NextSibling;
    ::uStrong< XmlNodeHandle*> _PrevSibling;

    void _ObjInit() { XmlNodeHandle___ObjInit(this); }
    void _ObjInit_1(::uString* xmlVersion, ::uString* xmlEncoding) { XmlNodeHandle___ObjInit_1(this, xmlVersion, xmlEncoding); }
    void _ObjInit_2(::uString* name, ::uString* value, int nodeType) { XmlNodeHandle___ObjInit_2(this, name, value, nodeType); }
    void AddAttribute(::app::Uno::Data::Xml::XmlAttributeHandle* attribute) { XmlNodeHandle__AddAttribute(this, attribute); }
    void AppendChild(XmlNodeHandle* child) { XmlNodeHandle__AppendChild(this, child); }
    ::uArray* AttributeHandles() { return XmlNodeHandle__get_AttributeHandles(this); }
    ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle* Attributes() { return XmlNodeHandle__get_Attributes(this); }
    ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle* Children() { return XmlNodeHandle__get_Children(this); }
    ::uArray* ChildrenHandles() { return XmlNodeHandle__get_ChildrenHandles(this); }
    ::uString* Encoding() { return XmlNodeHandle__get_Encoding(this); }
    XmlNodeHandle* FirstChild() { return XmlNodeHandle__get_FirstChild(this); }
    XmlNodeHandle* LastChild() { return XmlNodeHandle__get_LastChild(this); }
    ::uString* Name() { return XmlNodeHandle__get_Name(this); }
    XmlNodeHandle* NextSibling() { return XmlNodeHandle__get_NextSibling(this); }
    int NodeType() { return XmlNodeHandle__get_NodeType(this); }
    XmlNodeHandle* Parent() { return XmlNodeHandle__get_Parent(this); }
    XmlNodeHandle* PrevSibling() { return XmlNodeHandle__get_PrevSibling(this); }
    ::uString* Value() { return XmlNodeHandle__get_Value(this); }
    ::uString* Version() { return XmlNodeHandle__get_Version(this); }
    void Encoding(::uString* value) { XmlNodeHandle__set_Encoding(this, value); }
    void Name(::uString* value) { XmlNodeHandle__set_Name(this, value); }
    void NextSibling(XmlNodeHandle* value) { XmlNodeHandle__set_NextSibling(this, value); }
    void NodeType(int value) { XmlNodeHandle__set_NodeType(this, value); }
    void Parent(XmlNodeHandle* value) { XmlNodeHandle__set_Parent(this, value); }
    void PrevSibling(XmlNodeHandle* value) { XmlNodeHandle__set_PrevSibling(this, value); }
    void Value(::uString* value) { XmlNodeHandle__set_Value(this, value); }
    void Version(::uString* value) { XmlNodeHandle__set_Version(this, value); }
};

}}}}


#endif
