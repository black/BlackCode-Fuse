// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_DATA_XML_XML_NODE_HANDLE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_DATA_XML_XML_NODE_HANDLE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Data_Xml_XmlNodeHandle.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Data_Xml_XmlNodeHandle; } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlNodeHandle; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Data_Xml_XmlNodeHandle;

struct List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlNodeHandle __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__uType* List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__typeof();

void List1_Enumerator__Uno_Data_Xml_XmlNodeHandle___ObjInit(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle* __this, ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle* source);
void List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__Dispose(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle* __this);
::app::Uno::Data::Xml::XmlNodeHandle* List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__get_Current(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle* __this);
bool List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__MoveNext(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle* __this);
List1_Enumerator__Uno_Data_Xml_XmlNodeHandle List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle* source);
void List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Data_Xml_XmlNodeHandle* __this);

struct List1_Enumerator__Uno_Data_Xml_XmlNodeHandle
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::Data::Xml::XmlNodeHandle*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle* source) { List1_Enumerator__Uno_Data_Xml_XmlNodeHandle___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__Dispose(this); }
    ::app::Uno::Data::Xml::XmlNodeHandle* Current() { return List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Data_Xml_XmlNodeHandle__MoveNext(this); }
};

}}}


#endif
