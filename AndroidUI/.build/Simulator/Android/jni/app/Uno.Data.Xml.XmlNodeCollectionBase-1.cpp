#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerator__Uno_Data_Xml_XmlAttribute.h>
#include <app/Uno.Collections.IEnumerator__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Collections.List__Uno_Data_Xml_XmlAttribute.h>
#include <app/Uno.Collections.List__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Data.Xml.XmlAttribute.h>
#include <app/Uno.Data.Xml.XmlLinkedNode.h>
#include <app/Uno.Data.Xml.XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute.h>
#include <app/Uno.Data.Xml.XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__uType* XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__typeof()
{
    static ::uStaticStrong<XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__uType*> type;
    if (type != NULL) return type;

    type = (XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__uType*)::uAllocClassType(sizeof(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__uType), "Uno.Data.Xml.XmlNodeCollectionBase<Uno.Data.Xml.XmlAttribute>", false, 3, 2, 0);

    type->__fp_Add = XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__Add;
    type->__fp_Insert = XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__Insert;
    type->__fp_Remove = XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__Remove;
    type->__fp_RemoveAt = XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__RemoveAt;
    type->__interface_0.__fp_Insert = (void(*)(void*, int, ::app::Uno::Data::Xml::XmlAttribute*))XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__Insert;
    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__RemoveAt;
    type->__interface_0.__fp_get_Item = (::app::Uno::Data::Xml::XmlAttribute*(*)(void*, int))XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__get_Item;
    type->__interface_1.__fp_Clear = (void(*)(void*))XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__Clear;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Uno::Data::Xml::XmlAttribute*))XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Uno::Data::Xml::XmlAttribute*))XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__Remove;
    type->__interface_1.__fp_Contains = (bool(*)(void*, ::app::Uno::Data::Xml::XmlAttribute*))XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__Contains;
    type->__interface_1.__fp_get_Count = (int(*)(void*))XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Uno_Data_Xml_XmlAttribute__typeof(), offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlAttribute__typeof(), offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Uno_Data_Xml_XmlAttribute__typeof(), offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__uType, __interface_2));

    type->SetStrongRefs(
        "_children", offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute, _children),
        "_owner", offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute, _owner));

    type->SetFields(2,
        ::uNewField("_children", NULL, offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute, _children), ::app::Uno::Collections::IList__Uno_Data_Xml_XmlAttribute__typeof()),
        ::uNewField("_owner", NULL, offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute, _owner), ::app::Uno::Data::Xml::XmlLinkedNode__typeof()));

    type->SetFunctions(13,
        ::uNewFunctionVoid("Add", type->__fp_Add, offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__uType, __fp_Add), false, ::app::Uno::Data::Xml::XmlAttribute__typeof()),
        ::uNewFunctionVoid("Clear", XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__Clear, 0, false),
        ::uNewFunction("Contains", XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Data::Xml::XmlAttribute__typeof()),
        ::uNewFunction("get_Children", XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__get_Children, 0, false, ::app::Uno::Collections::IList__Uno_Data_Xml_XmlAttribute__typeof()),
        ::uNewFunction("get_Count", XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_FirstChild", XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__get_FirstChild, 0, false, ::app::Uno::Data::Xml::XmlAttribute__typeof()),
        ::uNewFunction("get_HasChildren", XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__get_HasChildren, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Item", XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__get_Item, 0, false, ::app::Uno::Data::Xml::XmlAttribute__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_LastChild", XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__get_LastChild, 0, false, ::app::Uno::Data::Xml::XmlAttribute__typeof()),
        ::uNewFunction("GetEnumerator", XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlAttribute__typeof()),
        ::uNewFunctionVoid("Insert", type->__fp_Insert, offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__uType, __fp_Insert), false, ::app::Uno::Int__typeof(), ::app::Uno::Data::Xml::XmlAttribute__typeof()),
        ::uNewFunction("Remove", type->__fp_Remove, offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__uType, __fp_Remove), false, ::app::Uno::Bool__typeof(), ::app::Uno::Data::Xml::XmlAttribute__typeof()),
        ::uNewFunctionVoid("RemoveAt", type->__fp_RemoveAt, offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__uType, __fp_RemoveAt), false, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute___ObjInit(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute* __this, ::app::Uno::Data::Xml::XmlLinkedNode* owner)
{
    __this->_owner = owner;
}

void XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__Add(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute* __this, ::app::Uno::Data::Xml::XmlAttribute* item)
{
    ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlAttribute::Add(::uPtr< ::uObject*>(__this->Children()), item);
}

void XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__Clear(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute* __this)
{
    if (__this->HasChildren())
    {
        ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlAttribute::Clear(::uPtr< ::uObject*>(__this->Children()));
    }
}

bool XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__Contains(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute* __this, ::app::Uno::Data::Xml::XmlAttribute* item)
{
    return __this->HasChildren() && ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlAttribute::Contains(::uPtr< ::uObject*>(__this->Children()), item);
}

::uObject* XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__get_Children(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute* __this)
{
    ::uObject* ind_123 = __this->_children;
    return (ind_123 != NULL) ? ind_123 : (__this->_children = (::uObject*)::app::Uno::Collections::List__Uno_Data_Xml_XmlAttribute__New_1(NULL));
}

int XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__get_Count(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute* __this)
{
    if (__this->HasChildren())
    {
        return ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlAttribute::Count(::uPtr< ::uObject*>(__this->Children()));
    }

    return 0;
}

::app::Uno::Data::Xml::XmlAttribute* XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__get_FirstChild(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute* __this)
{
    return __this->HasChildren() ? ::app::Uno::Collections::IList__Uno_Data_Xml_XmlAttribute::Item(::uPtr< ::uObject*>(__this->Children()), 0) : NULL;
}

bool XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__get_HasChildren(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute* __this)
{
    return ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlAttribute::Count(::uPtr< ::uObject*>(__this->Children())) > 0;
}

::app::Uno::Data::Xml::XmlAttribute* XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__get_Item(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute* __this, int index)
{
    return ::app::Uno::Collections::IList__Uno_Data_Xml_XmlAttribute::Item(::uPtr< ::uObject*>(__this->Children()), index);
}

::app::Uno::Data::Xml::XmlAttribute* XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__get_LastChild(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute* __this)
{
    return __this->HasChildren() ? ::app::Uno::Collections::IList__Uno_Data_Xml_XmlAttribute::Item(::uPtr< ::uObject*>(__this->Children()), ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlAttribute::Count(::uPtr< ::uObject*>(__this->Children())) - 1) : NULL;
}

::uObject* XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__GetEnumerator(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute* __this)
{
    return ::app::Uno::Collections::IEnumerable__Uno_Data_Xml_XmlAttribute::GetEnumerator(::uPtr< ::uObject*>(__this->Children()));
}

void XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__Insert(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute* __this, int index, ::app::Uno::Data::Xml::XmlAttribute* item)
{
    ::app::Uno::Collections::IList__Uno_Data_Xml_XmlAttribute::Insert(::uPtr< ::uObject*>(__this->Children()), index, item);
}

bool XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__Remove(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute* __this, ::app::Uno::Data::Xml::XmlAttribute* item)
{
    return ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlAttribute::Remove(::uPtr< ::uObject*>(__this->Children()), item);
}

void XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__RemoveAt(XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute* __this, int index)
{
    ::app::Uno::Collections::IList__Uno_Data_Xml_XmlAttribute::RemoveAt(::uPtr< ::uObject*>(__this->Children()), index);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__uType* XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__typeof()
{
    static ::uStaticStrong<XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__uType*> type;
    if (type != NULL) return type;

    type = (XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__uType*)::uAllocClassType(sizeof(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__uType), "Uno.Data.Xml.XmlNodeCollectionBase<Uno.Data.Xml.XmlLinkedNode>", false, 3, 2, 0);

    type->__fp_Add = XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Add;
    type->__fp_Insert = XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Insert;
    type->__fp_Remove = XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Remove;
    type->__fp_RemoveAt = XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__RemoveAt;
    type->__interface_0.__fp_Insert = (void(*)(void*, int, ::app::Uno::Data::Xml::XmlLinkedNode*))XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Insert;
    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__RemoveAt;
    type->__interface_0.__fp_get_Item = (::app::Uno::Data::Xml::XmlLinkedNode*(*)(void*, int))XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_Item;
    type->__interface_1.__fp_Clear = (void(*)(void*))XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Clear;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Uno::Data::Xml::XmlLinkedNode*))XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Uno::Data::Xml::XmlLinkedNode*))XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Remove;
    type->__interface_1.__fp_Contains = (bool(*)(void*, ::app::Uno::Data::Xml::XmlLinkedNode*))XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Contains;
    type->__interface_1.__fp_get_Count = (int(*)(void*))XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Uno_Data_Xml_XmlLinkedNode__typeof(), offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlLinkedNode__typeof(), offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Uno_Data_Xml_XmlLinkedNode__typeof(), offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__uType, __interface_2));

    type->SetStrongRefs(
        "_children", offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode, _children),
        "_owner", offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode, _owner));

    type->SetFields(2,
        ::uNewField("_children", NULL, offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode, _children), ::app::Uno::Collections::IList__Uno_Data_Xml_XmlLinkedNode__typeof()),
        ::uNewField("_owner", NULL, offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode, _owner), ::app::Uno::Data::Xml::XmlLinkedNode__typeof()));

    type->SetFunctions(13,
        ::uNewFunctionVoid("Add", type->__fp_Add, offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__uType, __fp_Add), false, ::app::Uno::Data::Xml::XmlLinkedNode__typeof()),
        ::uNewFunctionVoid("Clear", XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Clear, 0, false),
        ::uNewFunction("Contains", XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Data::Xml::XmlLinkedNode__typeof()),
        ::uNewFunction("get_Children", XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_Children, 0, false, ::app::Uno::Collections::IList__Uno_Data_Xml_XmlLinkedNode__typeof()),
        ::uNewFunction("get_Count", XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_FirstChild", XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_FirstChild, 0, false, ::app::Uno::Data::Xml::XmlLinkedNode__typeof()),
        ::uNewFunction("get_HasChildren", XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_HasChildren, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Item", XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_Item, 0, false, ::app::Uno::Data::Xml::XmlLinkedNode__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_LastChild", XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_LastChild, 0, false, ::app::Uno::Data::Xml::XmlLinkedNode__typeof()),
        ::uNewFunction("GetEnumerator", XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlLinkedNode__typeof()),
        ::uNewFunctionVoid("Insert", type->__fp_Insert, offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__uType, __fp_Insert), false, ::app::Uno::Int__typeof(), ::app::Uno::Data::Xml::XmlLinkedNode__typeof()),
        ::uNewFunction("Remove", type->__fp_Remove, offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__uType, __fp_Remove), false, ::app::Uno::Bool__typeof(), ::app::Uno::Data::Xml::XmlLinkedNode__typeof()),
        ::uNewFunctionVoid("RemoveAt", type->__fp_RemoveAt, offsetof(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__uType, __fp_RemoveAt), false, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode___ObjInit(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this, ::app::Uno::Data::Xml::XmlLinkedNode* owner)
{
    __this->_owner = owner;
}

void XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Add(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this, ::app::Uno::Data::Xml::XmlLinkedNode* item)
{
    ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlLinkedNode::Add(::uPtr< ::uObject*>(__this->Children()), item);
}

void XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Clear(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this)
{
    if (__this->HasChildren())
    {
        ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlLinkedNode::Clear(::uPtr< ::uObject*>(__this->Children()));
    }
}

bool XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Contains(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this, ::app::Uno::Data::Xml::XmlLinkedNode* item)
{
    return __this->HasChildren() && ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlLinkedNode::Contains(::uPtr< ::uObject*>(__this->Children()), item);
}

::uObject* XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_Children(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this)
{
    ::uObject* ind_123 = __this->_children;
    return (ind_123 != NULL) ? ind_123 : (__this->_children = (::uObject*)::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode__New_1(NULL));
}

int XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_Count(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this)
{
    if (__this->HasChildren())
    {
        return ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlLinkedNode::Count(::uPtr< ::uObject*>(__this->Children()));
    }

    return 0;
}

::app::Uno::Data::Xml::XmlLinkedNode* XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_FirstChild(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this)
{
    return __this->HasChildren() ? ::app::Uno::Collections::IList__Uno_Data_Xml_XmlLinkedNode::Item(::uPtr< ::uObject*>(__this->Children()), 0) : NULL;
}

bool XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_HasChildren(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this)
{
    return ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlLinkedNode::Count(::uPtr< ::uObject*>(__this->Children())) > 0;
}

::app::Uno::Data::Xml::XmlLinkedNode* XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_Item(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this, int index)
{
    return ::app::Uno::Collections::IList__Uno_Data_Xml_XmlLinkedNode::Item(::uPtr< ::uObject*>(__this->Children()), index);
}

::app::Uno::Data::Xml::XmlLinkedNode* XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_LastChild(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this)
{
    return __this->HasChildren() ? ::app::Uno::Collections::IList__Uno_Data_Xml_XmlLinkedNode::Item(::uPtr< ::uObject*>(__this->Children()), ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlLinkedNode::Count(::uPtr< ::uObject*>(__this->Children())) - 1) : NULL;
}

::uObject* XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__GetEnumerator(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this)
{
    return ::app::Uno::Collections::IEnumerable__Uno_Data_Xml_XmlLinkedNode::GetEnumerator(::uPtr< ::uObject*>(__this->Children()));
}

void XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Insert(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this, int index, ::app::Uno::Data::Xml::XmlLinkedNode* item)
{
    ::app::Uno::Collections::IList__Uno_Data_Xml_XmlLinkedNode::Insert(::uPtr< ::uObject*>(__this->Children()), index, item);
}

bool XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Remove(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this, ::app::Uno::Data::Xml::XmlLinkedNode* item)
{
    return ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlLinkedNode::Remove(::uPtr< ::uObject*>(__this->Children()), item);
}

void XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__RemoveAt(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this, int index)
{
    ::app::Uno::Collections::IList__Uno_Data_Xml_XmlLinkedNode::RemoveAt(::uPtr< ::uObject*>(__this->Children()), index);
}

}}}}
