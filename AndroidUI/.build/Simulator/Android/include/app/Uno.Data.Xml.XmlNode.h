// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_XML_NODE_H__
#define __APP_UNO_DATA_XML_XML_NODE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlValue; } } } }

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct XmlNode;

struct XmlNode__uType : ::uClassType
{
    ::app::Uno::Data::Xml::XmlValue*(*__fp_get_Value)(XmlNode*);
    void(*__fp_set_Value)(XmlNode*, ::app::Uno::Data::Xml::XmlValue*);
};

XmlNode__uType* XmlNode__typeof();

void XmlNode___ObjInit(XmlNode* __this);
void XmlNode___ObjInit_1(XmlNode* __this, ::uString* name, int nodeType, ::app::Uno::Data::Xml::XmlValue* value);
::uString* XmlNode__get_Name(XmlNode* __this);
int XmlNode__get_NodeType(XmlNode* __this);
::app::Uno::Data::Xml::XmlValue* XmlNode__get_Value(XmlNode* __this);
void XmlNode__set_Name(XmlNode* __this, ::uString* value);
void XmlNode__set_NodeType(XmlNode* __this, int value);
void XmlNode__set_Value(XmlNode* __this, ::app::Uno::Data::Xml::XmlValue* value);

struct XmlNode : ::uObject
{
    int _NodeType;
    ::uStrong< ::uString*> _Name;
    ::uStrong< ::app::Uno::Data::Xml::XmlValue*> _Value;

    void _ObjInit() { XmlNode___ObjInit(this); }
    void _ObjInit_1(::uString* name, int nodeType, ::app::Uno::Data::Xml::XmlValue* value) { XmlNode___ObjInit_1(this, name, nodeType, value); }
    ::uString* Name() { return XmlNode__get_Name(this); }
    int NodeType() { return XmlNode__get_NodeType(this); }
    ::app::Uno::Data::Xml::XmlValue* Value() { return (((XmlNode__uType*)this->__obj_type)->__fp_get_Value)(this); }
    void Name(::uString* value) { XmlNode__set_Name(this, value); }
    void NodeType(int value) { XmlNode__set_NodeType(this, value); }
    void Value(::app::Uno::Data::Xml::XmlValue* value) { (((XmlNode__uType*)this->__obj_type)->__fp_set_Value)(this, value); }
};

}}}}


#endif
