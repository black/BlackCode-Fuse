// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_DATA_XML_XML_ATTRIBUTE_HANDLE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_DATA_XML_XML_ATTRIBUTE_HANDLE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Data_Xml_XmlAttributeHandle.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Data_Xml_XmlAttributeHandle; } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlAttributeHandle; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle;

struct List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlAttributeHandle __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__uType* List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__typeof();

void List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle___ObjInit(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle* __this, ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle* source);
void List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__Dispose(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle* __this);
::app::Uno::Data::Xml::XmlAttributeHandle* List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__get_Current(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle* __this);
bool List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__MoveNext(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle* __this);
List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle* source);
void List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle* __this);

struct List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::Data::Xml::XmlAttributeHandle*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle* source) { List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__Dispose(this); }
    ::app::Uno::Data::Xml::XmlAttributeHandle* Current() { return List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle__MoveNext(this); }
};

}}}


#endif
