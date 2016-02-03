// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_DATA_XML_XML_ATTRIBUTE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_DATA_XML_XML_ATTRIBUTE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Data_Xml_XmlAttribute.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Data_Xml_XmlAttribute; } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlAttribute; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Data_Xml_XmlAttribute;

struct List1_Enumerator__Uno_Data_Xml_XmlAttribute__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlAttribute __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Data_Xml_XmlAttribute__uType* List1_Enumerator__Uno_Data_Xml_XmlAttribute__typeof();

void List1_Enumerator__Uno_Data_Xml_XmlAttribute___ObjInit(List1_Enumerator__Uno_Data_Xml_XmlAttribute* __this, ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttribute* source);
void List1_Enumerator__Uno_Data_Xml_XmlAttribute__Dispose(List1_Enumerator__Uno_Data_Xml_XmlAttribute* __this);
::app::Uno::Data::Xml::XmlAttribute* List1_Enumerator__Uno_Data_Xml_XmlAttribute__get_Current(List1_Enumerator__Uno_Data_Xml_XmlAttribute* __this);
bool List1_Enumerator__Uno_Data_Xml_XmlAttribute__MoveNext(List1_Enumerator__Uno_Data_Xml_XmlAttribute* __this);
List1_Enumerator__Uno_Data_Xml_XmlAttribute List1_Enumerator__Uno_Data_Xml_XmlAttribute__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttribute* source);
void List1_Enumerator__Uno_Data_Xml_XmlAttribute__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Data_Xml_XmlAttribute* __this);

struct List1_Enumerator__Uno_Data_Xml_XmlAttribute
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttribute*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::Data::Xml::XmlAttribute*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Data_Xml_XmlAttribute* source) { List1_Enumerator__Uno_Data_Xml_XmlAttribute___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Data_Xml_XmlAttribute__Dispose(this); }
    ::app::Uno::Data::Xml::XmlAttribute* Current() { return List1_Enumerator__Uno_Data_Xml_XmlAttribute__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Data_Xml_XmlAttribute__MoveNext(this); }
};

}}}


#endif
