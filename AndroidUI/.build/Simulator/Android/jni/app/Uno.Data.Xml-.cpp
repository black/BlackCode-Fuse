#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Data_Xml_XmlEncoding.h>
#include <app/Uno.Collections.ICollection__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Data_Xml_XmlAttribute.h>
#include <app/Uno.Collections.IEnumerator__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Collections.IList__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Collections.IList__Uno_Data_Xml_XmlNodeHandle.h>
#include <app/Uno.Collections.IListExtensions.h>
#include <app/Uno.Collections.List__Uno_Data_Xml_XmlAttributeHandle.h>
#include <app/Uno.Collections.List__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Collections.List__Uno_Data_Xml_XmlNodeHandle.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle.h>
#include <app/Uno.Data.Xml.AttributeHandleConverter.h>
#include <app/Uno.Data.Xml.ParseOptions.h>
#include <app/Uno.Data.Xml.TargetSpecificXmlNode.h>
#include <app/Uno.Data.Xml.ValidationHelper.h>
#include <app/Uno.Data.Xml.XmlAttribute.h>
#include <app/Uno.Data.Xml.XmlAttributeCollection.h>
#include <app/Uno.Data.Xml.XmlAttributeHandle.h>
#include <app/Uno.Data.Xml.XmlCharacterData.h>
#include <app/Uno.Data.Xml.XmlComment.h>
#include <app/Uno.Data.Xml.XmlDeclaration.h>
#include <app/Uno.Data.Xml.XmlDocument.h>
#include <app/Uno.Data.Xml.XmlDocumentElement.h>
#include <app/Uno.Data.Xml.XmlElement.h>
#include <app/Uno.Data.Xml.XmlEncoding.h>
#include <app/Uno.Data.Xml.XmlEncodingHelper.h>
#include <app/Uno.Data.Xml.XmlException.h>
#include <app/Uno.Data.Xml.XmlLinkedNode.h>
#include <app/Uno.Data.Xml.XmlLinkedNodeCollection.h>
#include <app/Uno.Data.Xml.XmlNode.h>
#include <app/Uno.Data.Xml.XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute.h>
#include <app/Uno.Data.Xml.XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Data.Xml.XmlNodeHandle.h>
#include <app/Uno.Data.Xml.XmlNodeHandleConverter.h>
#include <app/Uno.Data.Xml.XmlNodeImpl.h>
#include <app/Uno.Data.Xml.XmlNodeType.h>
#include <app/Uno.Data.Xml.XmlProcessingInstruction.h>
#include <app/Uno.Data.Xml.XmlText.h>
#include <app/Uno.Data.Xml.XmlValue.h>
#include <app/Uno.Data.Xml.XmlValueType.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.StringBuilder.h>
#include <app/Uno.UInt.h>
#include <Source/pugixml.hpp>
#include <Uno/XliInterop.h>

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Helpers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AttributeHandleConverter__uType* AttributeHandleConverter__typeof()
{
    static ::uStaticStrong<AttributeHandleConverter__uType*> type;
    if (type != NULL) return type;

    type = (AttributeHandleConverter__uType*)::uAllocClassType(sizeof(AttributeHandleConverter__uType), "Uno.Data.Xml.AttributeHandleConverter", false, 0, 0, 0);

    type->SetFunctions(2,
        ::uNewFunction("ConvertToXmlAttribute", AttributeHandleConverter__ConvertToXmlAttribute, 0, true, ::app::Uno::Data::Xml::XmlAttribute__typeof(), ::app::Uno::Data::Xml::XmlAttributeHandle__typeof()),
        ::uNewFunction(".ctor", AttributeHandleConverter__New_1, 0, true, AttributeHandleConverter__typeof()));

    ::uRegisterType(type);
    return type;
}

void AttributeHandleConverter___ObjInit(AttributeHandleConverter* __this)
{
}

::app::Uno::Data::Xml::XmlAttribute* AttributeHandleConverter__ConvertToXmlAttribute(::uStatic* __this, ::app::Uno::Data::Xml::XmlAttributeHandle* handle)
{
    return ::app::Uno::Data::Xml::XmlAttribute__New_2(NULL, ::uPtr< ::app::Uno::Data::Xml::XmlAttributeHandle*>(handle)->Name(), ::uPtr< ::app::Uno::Data::Xml::XmlAttributeHandle*>(handle)->Value());
}

AttributeHandleConverter* AttributeHandleConverter__New_1(::uStatic* __this)
{
    AttributeHandleConverter* inst = (AttributeHandleConverter*)::uAllocObject(sizeof(AttributeHandleConverter), AttributeHandleConverter__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* ParseOptions__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Data.Xml.ParseOptions", ::app::Uno::UInt__typeof(), 4);

    type->SetLiterals(
        "IncludeProcessingInstruction", 1LL,
        "IncludeDeclaration", 256LL,
        "IncludeComment", 2LL,
        "IncludeCharacterData", 4LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TargetSpecificXmlNode__uType* TargetSpecificXmlNode__typeof()
{
    static ::uStaticStrong<TargetSpecificXmlNode__uType*> type;
    if (type != NULL) return type;

    type = (TargetSpecificXmlNode__uType*)::uAllocClassType(sizeof(TargetSpecificXmlNode__uType), "Uno.Data.Xml.TargetSpecificXmlNode", false, 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Helpers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValidationHelper__uType* ValidationHelper__typeof()
{
    static ::uStaticStrong<ValidationHelper__uType*> type;
    if (type != NULL) return type;

    type = (ValidationHelper__uType*)::uAllocClassType(sizeof(ValidationHelper__uType), "Uno.Data.Xml.ValidationHelper", false, 0, 0, 0);

    type->SetFunctions(4,
        ::uNewFunction("IsChildAlreadyExists", ValidationHelper__IsChildAlreadyExists, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Data::Xml::XmlLinkedNode__typeof(), ::app::Uno::Data::Xml::XmlNodeType__typeof()),
        ::uNewFunction(".ctor", ValidationHelper__New_1, 0, true, ValidationHelper__typeof()),
        ::uNewFunctionVoid("ValidateAttributeAdding", ValidationHelper__ValidateAttributeAdding, 0, true, ::app::Uno::Data::Xml::XmlLinkedNode__typeof(), ::app::Uno::Data::Xml::XmlAttribute__typeof()),
        ::uNewFunctionVoid("ValidateNodeAdding", ValidationHelper__ValidateNodeAdding, 0, true, ::app::Uno::Data::Xml::XmlLinkedNode__typeof(), ::app::Uno::Data::Xml::XmlLinkedNode__typeof()));

    ::uRegisterType(type);
    return type;
}

void ValidationHelper___ObjInit(ValidationHelper* __this)
{
}

bool ValidationHelper__IsChildAlreadyExists(::uStatic* __this, ::app::Uno::Data::Xml::XmlLinkedNode* owner, int nodeType)
{
    for (::uObject* enum_124 = ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(owner)->Children())->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Uno::Data::Xml::XmlLinkedNode* child = ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlLinkedNode::Current(::uPtr< ::uObject*>(enum_124));

        if (::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(child)->NodeType() == nodeType)
        {
            return true;
        }
    }

    return false;
}

ValidationHelper* ValidationHelper__New_1(::uStatic* __this)
{
    ValidationHelper* inst = (ValidationHelper*)::uAllocObject(sizeof(ValidationHelper), ValidationHelper__typeof());
    inst->_ObjInit();
    return inst;
}

void ValidationHelper__ValidateAttributeAdding(::uStatic* __this, ::app::Uno::Data::Xml::XmlLinkedNode* owner, ::app::Uno::Data::Xml::XmlAttribute* item)
{
    if (::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(owner)->NodeType() != 3)
    {
        U_THROW(::app::Uno::Data::Xml::XmlException__New_3(NULL, ::uGetConstString("Attributes can be added to xml elements only")));
    }

    for (::uObject* enum_123 = ::uPtr< ::app::Uno::Data::Xml::XmlAttributeCollection*>(::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(owner)->Attributes())->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Data::Xml::XmlAttribute* existingAttr = ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlAttribute::Current(::uPtr< ::uObject*>(enum_123));

        if (::app::Uno::String__op_Equality(NULL, ::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(existingAttr)->Name(), ::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(item)->Name()))
        {
            U_THROW(::app::Uno::Data::Xml::XmlException__New_3(NULL, ::uGetConstString("Attribute with the same name already exists")));
        }
    }
}

void ValidationHelper__ValidateNodeAdding(::uStatic* __this, ::app::Uno::Data::Xml::XmlLinkedNode* owner, ::app::Uno::Data::Xml::XmlLinkedNode* item)
{
    if ((::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(owner)->NodeType() != 3) && (::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(owner)->NodeType() != 0))
    {
        U_THROW(::app::Uno::Data::Xml::XmlException__New_3(NULL, ::uGetConstString("Children can be added to the root node or to xml elements")));
    }

    if ((::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->NodeType() == 4) && (::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(owner)->NodeType() != 0))
    {
        U_THROW(::app::Uno::Data::Xml::XmlException__New_3(NULL, ::uGetConstString("Declaration can be added to the root node only")));
    }

    if (::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(owner)->NodeType() == 0)
    {
        if (((::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->NodeType() == 1) || (::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->NodeType() == 2)) || (::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->NodeType() == 5))
        {
            U_THROW(::app::Uno::Data::Xml::XmlException__New_3(NULL, ::uGetConstString("This type of node can't be added to the root element")));
        }

        if ((::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->NodeType() == 4) && ValidationHelper__IsChildAlreadyExists(NULL, owner, 4))
        {
            U_THROW(::app::Uno::Data::Xml::XmlException__New_3(NULL, ::uGetConstString("Only one declaration is possible")));
        }

        if ((::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->NodeType() == 3) && ValidationHelper__IsChildAlreadyExists(NULL, owner, 3))
        {
            U_THROW(::app::Uno::Data::Xml::XmlException__New_3(NULL, ::uGetConstString("Only one xml element can be added to the root")));
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlAttribute__uType* XmlAttribute__typeof()
{
    static ::uStaticStrong<XmlAttribute__uType*> type;
    if (type != NULL) return type;

    type = (XmlAttribute__uType*)::uAllocClassType(sizeof(XmlAttribute__uType), "Uno.Data.Xml.XmlAttribute", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::Data::Xml::XmlNode__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))XmlAttribute__ToString;

    type->SetStrongRefs(
        "_NextSibling", offsetof(XmlAttribute, _NextSibling),
        "_PreviousSibling", offsetof(XmlAttribute, _PreviousSibling));

    type->SetFunctions(7,
        ::uNewFunction("Clone", XmlAttribute__Clone, 0, false, XmlAttribute__typeof()),
        ::uNewFunction("get_NextSibling", XmlAttribute__get_NextSibling, 0, false, XmlAttribute__typeof()),
        ::uNewFunction("get_PreviousSibling", XmlAttribute__get_PreviousSibling, 0, false, XmlAttribute__typeof()),
        ::uNewFunction(".ctor", XmlAttribute__New_1, 0, true, XmlAttribute__typeof()),
        ::uNewFunction(".ctor", XmlAttribute__New_2, 0, true, XmlAttribute__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_NextSibling", XmlAttribute__set_NextSibling, 0, false, XmlAttribute__typeof()),
        ::uNewFunctionVoid("set_PreviousSibling", XmlAttribute__set_PreviousSibling, 0, false, XmlAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlAttribute___ObjInit_2(XmlAttribute* __this)
{
    ::app::Uno::Data::Xml::XmlNode___ObjInit(__this);
    __this->NodeType(7);
}

void XmlAttribute___ObjInit_3(XmlAttribute* __this, ::uString* name, ::uString* value)
{
    ::app::Uno::Data::Xml::XmlNode___ObjInit_1(__this, name, 7, ::app::Uno::Data::Xml::XmlValue__New_7(NULL, value));
}

XmlAttribute* XmlAttribute__Clone(XmlAttribute* __this)
{
    return XmlAttribute__New_2(NULL, __this->Name(), ::uPtr< ::app::Uno::Data::Xml::XmlValue*>(__this->Value())->AsString());
}

XmlAttribute* XmlAttribute__get_NextSibling(XmlAttribute* __this)
{
    return __this->_NextSibling;
}

XmlAttribute* XmlAttribute__get_PreviousSibling(XmlAttribute* __this)
{
    return __this->_PreviousSibling;
}

XmlAttribute* XmlAttribute__New_1(::uStatic* __this)
{
    XmlAttribute* inst = (XmlAttribute*)::uAllocObject(sizeof(XmlAttribute), XmlAttribute__typeof());
    inst->_ObjInit_2();
    return inst;
}

XmlAttribute* XmlAttribute__New_2(::uStatic* __this, ::uString* name, ::uString* value)
{
    XmlAttribute* inst = (XmlAttribute*)::uAllocObject(sizeof(XmlAttribute), XmlAttribute__typeof());
    inst->_ObjInit_3(name, value);
    return inst;
}

void XmlAttribute__set_NextSibling(XmlAttribute* __this, XmlAttribute* value)
{
    __this->_NextSibling = value;
}

void XmlAttribute__set_PreviousSibling(XmlAttribute* __this, XmlAttribute* value)
{
    __this->_PreviousSibling = value;
}

::uString* XmlAttribute__ToString(XmlAttribute* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, __this->Name(), ::uGetConstString("=\"")), ::uPtr< ::app::Uno::Data::Xml::XmlValue*>(__this->Value())->AsString()), ::uGetConstString("\""));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlAttributeCollection__uType* XmlAttributeCollection__typeof()
{
    static ::uStaticStrong<XmlAttributeCollection__uType*> type;
    if (type != NULL) return type;

    type = (XmlAttributeCollection__uType*)::uAllocClassType(sizeof(XmlAttributeCollection__uType), "Uno.Data.Xml.XmlAttributeCollection", false, 3, 0, 0);

    type->SetBaseType(::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__typeof());
    type->__fp_Add = (void(*)(::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute*, ::app::Uno::Data::Xml::XmlAttribute*))XmlAttributeCollection__Add;
    type->__fp_Insert = (void(*)(::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute*, int, ::app::Uno::Data::Xml::XmlAttribute*))XmlAttributeCollection__Insert;
    type->__fp_Remove = (bool(*)(::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute*, ::app::Uno::Data::Xml::XmlAttribute*))XmlAttributeCollection__Remove;
    type->__fp_RemoveAt = (void(*)(::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute*, int))XmlAttributeCollection__RemoveAt;
    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))XmlAttributeCollection__RemoveAt;
    type->__interface_0.__fp_Insert = (void(*)(void*, int, ::app::Uno::Data::Xml::XmlAttribute*))XmlAttributeCollection__Insert;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Uno::Data::Xml::XmlAttribute*))XmlAttributeCollection__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Uno::Data::Xml::XmlAttribute*))XmlAttributeCollection__Remove;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Uno_Data_Xml_XmlAttribute__typeof(), offsetof(XmlAttributeCollection__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlAttribute__typeof(), offsetof(XmlAttributeCollection__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Uno_Data_Xml_XmlAttribute__typeof(), offsetof(XmlAttributeCollection__uType, __interface_2));

    type->SetFunctions(2,
        ::uNewFunction("get_Item", XmlAttributeCollection__get_Item_1, 0, false, ::app::Uno::Data::Xml::XmlAttribute__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", XmlAttributeCollection__New_1, 0, true, XmlAttributeCollection__typeof(), ::app::Uno::Data::Xml::XmlLinkedNode__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlAttributeCollection___ObjInit_1(XmlAttributeCollection* __this, ::app::Uno::Data::Xml::XmlLinkedNode* owner)
{
    ::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute___ObjInit(__this, owner);
}

void XmlAttributeCollection__Add(XmlAttributeCollection* __this, ::app::Uno::Data::Xml::XmlAttribute* item)
{
    ::app::Uno::Data::Xml::ValidationHelper__ValidateAttributeAdding(NULL, __this->_owner, item);

    if (__this->LastChild() != NULL)
    {
        ::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(item)->PreviousSibling(__this->LastChild());
        ::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(__this->LastChild())->NextSibling(item);
    }

    ::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(item)->NextSibling(NULL);
    ::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__Add(__this, item);
}

::app::Uno::Data::Xml::XmlAttribute* XmlAttributeCollection__get_Item_1(XmlAttributeCollection* __this, ::uString* name)
{
    for (::uObject* enum_123 = __this->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Data::Xml::XmlAttribute* child = ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlAttribute::Current(::uPtr< ::uObject*>(enum_123));

        if (::app::Uno::String__op_Equality(NULL, ::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(child)->Name(), name))
        {
            return child;
        }
    }

    return NULL;
}

void XmlAttributeCollection__Insert(XmlAttributeCollection* __this, int index, ::app::Uno::Data::Xml::XmlAttribute* item)
{
    if (!__this->HasChildren() && (index == 0))
    {
        __this->Add(item);
        return;
    }

    ::app::Uno::Data::Xml::ValidationHelper__ValidateAttributeAdding(NULL, __this->_owner, item);
    ::app::Uno::Data::Xml::XmlAttribute* existingItem = __this->Item(index);
    ::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(item)->NextSibling(existingItem);

    if (::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(existingItem)->PreviousSibling() != NULL)
    {
        ::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(item)->PreviousSibling(::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(existingItem)->PreviousSibling());
        ::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(item->PreviousSibling())->NextSibling(item);
        existingItem->PreviousSibling(item);
    }

    ::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__Insert(__this, index, item);
}

XmlAttributeCollection* XmlAttributeCollection__New_1(::uStatic* __this, ::app::Uno::Data::Xml::XmlLinkedNode* owner)
{
    XmlAttributeCollection* inst = (XmlAttributeCollection*)::uAllocObject(sizeof(XmlAttributeCollection), XmlAttributeCollection__typeof());
    inst->_ObjInit_1(owner);
    return inst;
}

bool XmlAttributeCollection__Remove(XmlAttributeCollection* __this, ::app::Uno::Data::Xml::XmlAttribute* item)
{
    if (::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(item)->PreviousSibling() != NULL)
    {
        ::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(item)->PreviousSibling())->NextSibling(::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(item)->NextSibling());
    }

    if (::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(item)->NextSibling() != NULL)
    {
        ::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(item)->NextSibling())->PreviousSibling(::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(item)->PreviousSibling());
    }

    return ::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__Remove(__this, item);
}

void XmlAttributeCollection__RemoveAt(XmlAttributeCollection* __this, int index)
{
    ::app::Uno::Data::Xml::XmlAttribute* item = __this->Item(index);

    if (::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(item)->PreviousSibling() != NULL)
    {
        ::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(item)->PreviousSibling())->NextSibling(::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(item)->NextSibling());
    }

    if (::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(item)->NextSibling() != NULL)
    {
        ::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(item)->NextSibling())->PreviousSibling(::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(item)->PreviousSibling());
    }

    ::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__RemoveAt(__this, index);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlAttributeHandle__uType* XmlAttributeHandle__typeof()
{
    static ::uStaticStrong<XmlAttributeHandle__uType*> type;
    if (type != NULL) return type;

    type = (XmlAttributeHandle__uType*)::uAllocClassType(sizeof(XmlAttributeHandle__uType), "Uno.Data.Xml.XmlAttributeHandle", false, 0, 2, 0);

    type->SetStrongRefs(
        "_Name", offsetof(XmlAttributeHandle, _Name),
        "_Value", offsetof(XmlAttributeHandle, _Value));

    type->SetFunctions(5,
        ::uNewFunction("get_Name", XmlAttributeHandle__get_Name, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", XmlAttributeHandle__get_Value, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", XmlAttributeHandle__New_1, 0, true, XmlAttributeHandle__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Name", XmlAttributeHandle__set_Name, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Value", XmlAttributeHandle__set_Value, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlAttributeHandle___ObjInit(XmlAttributeHandle* __this, ::uString* name, ::uString* value)
{
    __this->Name(name);
    __this->Value(value);
}

::uString* XmlAttributeHandle__get_Name(XmlAttributeHandle* __this)
{
    return __this->_Name;
}

::uString* XmlAttributeHandle__get_Value(XmlAttributeHandle* __this)
{
    return __this->_Value;
}

XmlAttributeHandle* XmlAttributeHandle__New_1(::uStatic* __this, ::uString* name, ::uString* value)
{
    XmlAttributeHandle* inst = (XmlAttributeHandle*)::uAllocObject(sizeof(XmlAttributeHandle), XmlAttributeHandle__typeof());
    inst->_ObjInit(name, value);
    return inst;
}

void XmlAttributeHandle__set_Name(XmlAttributeHandle* __this, ::uString* value)
{
    __this->_Name = value;
}

void XmlAttributeHandle__set_Value(XmlAttributeHandle* __this, ::uString* value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlCharacterData__uType* XmlCharacterData__typeof()
{
    static ::uStaticStrong<XmlCharacterData__uType*> type;
    if (type != NULL) return type;

    type = (XmlCharacterData__uType*)::uAllocClassType(sizeof(XmlCharacterData__uType), "Uno.Data.Xml.XmlCharacterData", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Data::Xml::XmlLinkedNode__typeof());
    type->__fp_CreateNewInstance = (::app::Uno::Data::Xml::XmlLinkedNode*(*)(::app::Uno::Data::Xml::XmlLinkedNode*))XmlCharacterData__CreateNewInstance;
    type->__fp_ToString = (::uString*(*)(::uObject*))XmlCharacterData__ToString;

    type->SetStrongRefs(
        "_Data", offsetof(XmlCharacterData, _Data));

    type->SetFunctions(5,
        ::uNewFunction("get_Data", XmlCharacterData__get_Data, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Length", XmlCharacterData__get_Length, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", XmlCharacterData__New_1, 0, true, XmlCharacterData__typeof()),
        ::uNewFunction(".ctor", XmlCharacterData__New_2, 0, true, XmlCharacterData__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Data", XmlCharacterData__set_Data, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlCharacterData___ObjInit_3(XmlCharacterData* __this)
{
    ::app::Uno::Data::Xml::XmlLinkedNode___ObjInit_2(__this);
    __this->NodeType(2);
}

void XmlCharacterData___ObjInit_4(XmlCharacterData* __this, ::uString* data)
{
    __this->_ObjInit_3();
    __this->Data(data);
}

::app::Uno::Data::Xml::XmlLinkedNode* XmlCharacterData__CreateNewInstance(XmlCharacterData* __this)
{
    return (::app::Uno::Data::Xml::XmlLinkedNode*)XmlCharacterData__New_2(NULL, __this->Data());
}

::uString* XmlCharacterData__get_Data(XmlCharacterData* __this)
{
    return __this->_Data;
}

int XmlCharacterData__get_Length(XmlCharacterData* __this)
{
    return ::uPtr< ::uString*>(__this->Data())->Length();
}

XmlCharacterData* XmlCharacterData__New_1(::uStatic* __this)
{
    XmlCharacterData* inst = (XmlCharacterData*)::uAllocObject(sizeof(XmlCharacterData), XmlCharacterData__typeof());
    inst->_ObjInit_3();
    return inst;
}

XmlCharacterData* XmlCharacterData__New_2(::uStatic* __this, ::uString* data)
{
    XmlCharacterData* inst = (XmlCharacterData*)::uAllocObject(sizeof(XmlCharacterData), XmlCharacterData__typeof());
    inst->_ObjInit_4(data);
    return inst;
}

void XmlCharacterData__set_Data(XmlCharacterData* __this, ::uString* value)
{
    __this->_Data = value;
}

::uString* XmlCharacterData__ToString(XmlCharacterData* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("<![CDATA["), __this->Data()), ::uGetConstString("]]>"));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlComment__uType* XmlComment__typeof()
{
    static ::uStaticStrong<XmlComment__uType*> type;
    if (type != NULL) return type;

    type = (XmlComment__uType*)::uAllocClassType(sizeof(XmlComment__uType), "Uno.Data.Xml.XmlComment", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Data::Xml::XmlLinkedNode__typeof());
    type->__fp_CreateNewInstance = (::app::Uno::Data::Xml::XmlLinkedNode*(*)(::app::Uno::Data::Xml::XmlLinkedNode*))XmlComment__CreateNewInstance;
    type->__fp_ToString = (::uString*(*)(::uObject*))XmlComment__ToString;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", XmlComment__New_1, 0, true, XmlComment__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlComment___ObjInit_3(XmlComment* __this)
{
    ::app::Uno::Data::Xml::XmlLinkedNode___ObjInit_2(__this);
    __this->NodeType(5);
}

::app::Uno::Data::Xml::XmlLinkedNode* XmlComment__CreateNewInstance(XmlComment* __this)
{
    return (::app::Uno::Data::Xml::XmlLinkedNode*)XmlComment__New_1(NULL);
}

XmlComment* XmlComment__New_1(::uStatic* __this)
{
    XmlComment* inst = (XmlComment*)::uAllocObject(sizeof(XmlComment), XmlComment__typeof());
    inst->_ObjInit_3();
    return inst;
}

::uString* XmlComment__ToString(XmlComment* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("<!--"), ::uPtr< ::app::Uno::Data::Xml::XmlValue*>(__this->Value())->AsString()), ::uGetConstString("-->"));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlDeclaration__uType* XmlDeclaration__typeof()
{
    static ::uStaticStrong<XmlDeclaration__uType*> type;
    if (type != NULL) return type;

    type = (XmlDeclaration__uType*)::uAllocClassType(sizeof(XmlDeclaration__uType), "Uno.Data.Xml.XmlDeclaration", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Data::Xml::XmlLinkedNode__typeof());
    type->__fp_CreateNewInstance = (::app::Uno::Data::Xml::XmlLinkedNode*(*)(::app::Uno::Data::Xml::XmlLinkedNode*))XmlDeclaration__CreateNewInstance;
    type->__fp_ToString = (::uString*(*)(::uObject*))XmlDeclaration__ToString;

    type->SetStrongRefs(
        "_Version", offsetof(XmlDeclaration, _Version));

    type->SetFunctions(6,
        ::uNewFunction("get_Encoding", XmlDeclaration__get_Encoding, 0, false, ::app::Uno::Data::Xml::XmlEncoding__typeof()),
        ::uNewFunction("get_Version", XmlDeclaration__get_Version, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", XmlDeclaration__New_1, 0, true, XmlDeclaration__typeof()),
        ::uNewFunction(".ctor", XmlDeclaration__New_2, 0, true, XmlDeclaration__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Data::Xml::XmlEncoding__typeof()),
        ::uNewFunctionVoid("set_Encoding", XmlDeclaration__set_Encoding, 0, false, ::app::Uno::Data::Xml::XmlEncoding__typeof()),
        ::uNewFunctionVoid("set_Version", XmlDeclaration__set_Version, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlDeclaration___ObjInit_3(XmlDeclaration* __this)
{
    ::app::Uno::Data::Xml::XmlLinkedNode___ObjInit_2(__this);
    __this->NodeType(4);
}

void XmlDeclaration___ObjInit_4(XmlDeclaration* __this, ::uString* version, int encoding)
{
    __this->_ObjInit_3();
    __this->Version(version);
    __this->Encoding(encoding);
}

::app::Uno::Data::Xml::XmlLinkedNode* XmlDeclaration__CreateNewInstance(XmlDeclaration* __this)
{
    return (::app::Uno::Data::Xml::XmlLinkedNode*)XmlDeclaration__New_2(NULL, __this->Version(), __this->Encoding());
}

int XmlDeclaration__get_Encoding(XmlDeclaration* __this)
{
    return __this->_Encoding;
}

::uString* XmlDeclaration__get_Version(XmlDeclaration* __this)
{
    return __this->_Version;
}

XmlDeclaration* XmlDeclaration__New_1(::uStatic* __this)
{
    XmlDeclaration* inst = (XmlDeclaration*)::uAllocObject(sizeof(XmlDeclaration), XmlDeclaration__typeof());
    inst->_ObjInit_3();
    return inst;
}

XmlDeclaration* XmlDeclaration__New_2(::uStatic* __this, ::uString* version, int encoding)
{
    XmlDeclaration* inst = (XmlDeclaration*)::uAllocObject(sizeof(XmlDeclaration), XmlDeclaration__typeof());
    inst->_ObjInit_4(version, encoding);
    return inst;
}

void XmlDeclaration__set_Encoding(XmlDeclaration* __this, int value)
{
    __this->_Encoding = value;
}

void XmlDeclaration__set_Version(XmlDeclaration* __this, ::uString* value)
{
    __this->_Version = value;
}

::uString* XmlDeclaration__ToString(XmlDeclaration* __this)
{
    ::app::Uno::Text::StringBuilder* result = ::app::Uno::Text::StringBuilder__New_1(NULL);
    ::uPtr< ::app::Uno::Text::StringBuilder*>(result)->Append_1(::uGetConstString("<?xml"));

    if (!::app::Uno::String__IsNullOrEmpty(NULL, __this->Version()))
    {
        ::uPtr< ::app::Uno::Text::StringBuilder*>(result)->Append_1(::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString(" version=\""), __this->Version()), ::uGetConstString("\"")));
    }

    if (__this->Encoding() != 0)
    {
        ::uPtr< ::app::Uno::Text::StringBuilder*>(result)->Append_1(::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString(" encoding=\""), ::app::Uno::Data::Xml::XmlEncodingHelper__ConvertToString(NULL, __this->Encoding())), ::uGetConstString("\"")));
    }

    result->Append_1(::uGetConstString("?>"));
    return result->ToString();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlDocument__uType* XmlDocument__typeof()
{
    static ::uStaticStrong<XmlDocument__uType*> type;
    if (type != NULL) return type;

    type = (XmlDocument__uType*)::uAllocClassType(sizeof(XmlDocument__uType), "Uno.Data.Xml.XmlDocument", false, 0, 1, 0);

    type->__fp_ToString = (::uString*(*)(::uObject*))XmlDocument__ToString;

    type->SetStrongRefs(
        "_DocumentElement", offsetof(XmlDocument, _DocumentElement));

    type->SetFunctions(7,
        ::uNewFunctionVoid("ApplyParseOptions", XmlDocument__ApplyParseOptions, 0, true, ::app::Uno::Data::Xml::XmlLinkedNode__typeof(), ::app::Uno::Data::Xml::ParseOptions__typeof()),
        ::uNewFunction("get_DocumentElement", XmlDocument__get_DocumentElement, 0, false, ::app::Uno::Data::Xml::XmlDocumentElement__typeof()),
        ::uNewFunction("Load", XmlDocument__Load, 0, true, XmlDocument__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Load", XmlDocument__Load_1, 0, true, XmlDocument__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Data::Xml::ParseOptions__typeof()),
        ::uNewFunction(".ctor", XmlDocument__New_1, 0, true, XmlDocument__typeof()),
        ::uNewFunctionVoid("Save", XmlDocument__Save, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_DocumentElement", XmlDocument__set_DocumentElement, 0, false, ::app::Uno::Data::Xml::XmlDocumentElement__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlDocument___ObjInit(XmlDocument* __this)
{
    __this->DocumentElement(::app::Uno::Data::Xml::XmlDocumentElement__New_1(NULL));
}

void XmlDocument__ApplyParseOptions(::uStatic* __this, ::app::Uno::Data::Xml::XmlLinkedNode* node, ::uUInt parseOptions)
{
    bool includePI = (parseOptions & 1) == 1;
    bool includeCD = (parseOptions & 4) == 4;
    bool includeDeclaration = (parseOptions & 256) == 256;
    bool includeComment = (parseOptions & 2) == 2;

    for (int i = 0; i < ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(node)->Children())->Count(); i++)
    {
        ::app::Uno::Data::Xml::XmlLinkedNode* childNode = ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(node)->Children())->Item(i);

        if (((((::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(childNode)->NodeType() == 6) && !includePI) || ((::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(childNode)->NodeType() == 2) && !includeCD)) || ((::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(childNode)->NodeType() == 4) && !includeDeclaration)) || ((::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(childNode)->NodeType() == 5) && !includeComment))
        {
            ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(node)->Children())->Remove(childNode);
            i--;
        }
        else
        {
            XmlDocument__ApplyParseOptions(NULL, childNode, parseOptions);
        }
    }
}

::app::Uno::Data::Xml::XmlDocumentElement* XmlDocument__get_DocumentElement(XmlDocument* __this)
{
    return __this->_DocumentElement;
}

XmlDocument* XmlDocument__Load(::uStatic* __this, ::uString* xmlString)
{
    return XmlDocument__Load_1(NULL, xmlString, 4);
}

XmlDocument* XmlDocument__Load_1(::uStatic* __this, ::uString* xmlString, ::uUInt parseOptions)
{
    if (::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(xmlString), ::uGetConstString("<?xml"), 0) > 0)
    {
        U_THROW(::app::Uno::Data::Xml::XmlException__New_3(NULL, ::uGetConstString("XML declaration allowed only at the start of the document")));
    }

    parseOptions = parseOptions | 4;
    ::app::Uno::Data::Xml::XmlNodeHandle* rootHandle = ::app::Uno::Data::Xml::XmlNodeImpl__Parse(NULL, xmlString);
    XmlDocument* xmlDocument = XmlDocument__New_1(NULL);

    if ((rootHandle != NULL) && (::uPtr< ::app::Uno::Data::Xml::XmlNodeHandle*>(rootHandle)->FirstChild() != NULL))
    {
        ::app::Uno::Data::Xml::XmlNodeHandleConverter__ConvertToXmlNodeTree(NULL, (::app::Uno::Data::Xml::XmlLinkedNode*)::uPtr< XmlDocument*>(xmlDocument)->DocumentElement(), ::uPtr< ::app::Uno::Data::Xml::XmlNodeHandle*>(rootHandle)->FirstChild());
    }

    XmlDocument__ApplyParseOptions(NULL, (::app::Uno::Data::Xml::XmlLinkedNode*)::uPtr< XmlDocument*>(xmlDocument)->DocumentElement(), parseOptions);
    return xmlDocument;
}

XmlDocument* XmlDocument__New_1(::uStatic* __this)
{
    XmlDocument* inst = (XmlDocument*)::uAllocObject(sizeof(XmlDocument), XmlDocument__typeof());
    inst->_ObjInit();
    return inst;
}

void XmlDocument__Save(XmlDocument* __this, ::uString** xmlString)
{
    *xmlString = ::uPtr< ::app::Uno::Data::Xml::XmlDocumentElement*>(__this->DocumentElement())->ToString();
}

void XmlDocument__set_DocumentElement(XmlDocument* __this, ::app::Uno::Data::Xml::XmlDocumentElement* value)
{
    __this->_DocumentElement = value;
}

::uString* XmlDocument__ToString(XmlDocument* __this)
{
    return ::uPtr< ::app::Uno::Data::Xml::XmlDocumentElement*>(__this->DocumentElement())->ToString();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlDocumentElement__uType* XmlDocumentElement__typeof()
{
    static ::uStaticStrong<XmlDocumentElement__uType*> type;
    if (type != NULL) return type;

    type = (XmlDocumentElement__uType*)::uAllocClassType(sizeof(XmlDocumentElement__uType), "Uno.Data.Xml.XmlDocumentElement", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Data::Xml::XmlLinkedNode__typeof());
    type->__fp_CreateNewInstance = (::app::Uno::Data::Xml::XmlLinkedNode*(*)(::app::Uno::Data::Xml::XmlLinkedNode*))XmlDocumentElement__CreateNewInstance;
    type->__fp_GetTextContent = (::uString*(*)(::app::Uno::Data::Xml::XmlLinkedNode*))XmlDocumentElement__GetTextContent;
    type->__fp_ToString = (::uString*(*)(::uObject*))XmlDocumentElement__ToString;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", XmlDocumentElement__New_1, 0, true, XmlDocumentElement__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlDocumentElement___ObjInit_3(XmlDocumentElement* __this)
{
    ::app::Uno::Data::Xml::XmlLinkedNode___ObjInit_2(__this);
    __this->NodeType(0);
}

::app::Uno::Data::Xml::XmlLinkedNode* XmlDocumentElement__CreateNewInstance(XmlDocumentElement* __this)
{
    return (::app::Uno::Data::Xml::XmlLinkedNode*)XmlDocumentElement__New_1(NULL);
}

::uString* XmlDocumentElement__GetTextContent(XmlDocumentElement* __this)
{
    for (::uObject* enum_123 = ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(__this->Children())->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Data::Xml::XmlLinkedNode* child = ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlLinkedNode::Current(::uPtr< ::uObject*>(enum_123));

        if ((::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(child)->NodeType() != 4) && (::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(child)->NodeType() != 6))
        {
            return ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(child)->GetTextContent();
        }
    }

    return NULL;
}

XmlDocumentElement* XmlDocumentElement__New_1(::uStatic* __this)
{
    XmlDocumentElement* inst = (XmlDocumentElement*)::uAllocObject(sizeof(XmlDocumentElement), XmlDocumentElement__typeof());
    inst->_ObjInit_3();
    return inst;
}

::uString* XmlDocumentElement__ToString(XmlDocumentElement* __this)
{
    ::app::Uno::Text::StringBuilder* result = ::app::Uno::Text::StringBuilder__New_1(NULL);

    for (::uObject* enum_124 = ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(__this->Children())->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Uno::Data::Xml::XmlLinkedNode* child = ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlLinkedNode::Current(::uPtr< ::uObject*>(enum_124));
        ::uPtr< ::app::Uno::Text::StringBuilder*>(result)->Append_1(::app::Uno::Object::ToString(::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(child)));
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(result)->ToString();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlElement__uType* XmlElement__typeof()
{
    static ::uStaticStrong<XmlElement__uType*> type;
    if (type != NULL) return type;

    type = (XmlElement__uType*)::uAllocClassType(sizeof(XmlElement__uType), "Uno.Data.Xml.XmlElement", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Data::Xml::XmlLinkedNode__typeof());
    type->__fp_CreateNewInstance = (::app::Uno::Data::Xml::XmlLinkedNode*(*)(::app::Uno::Data::Xml::XmlLinkedNode*))XmlElement__CreateNewInstance;
    type->__fp_get_Value = (::app::Uno::Data::Xml::XmlValue*(*)(::app::Uno::Data::Xml::XmlNode*))XmlElement__get_Value;
    type->__fp_GetTextContent = (::uString*(*)(::app::Uno::Data::Xml::XmlLinkedNode*))XmlElement__GetTextContent;
    type->__fp_set_Value = (void(*)(::app::Uno::Data::Xml::XmlNode*, ::app::Uno::Data::Xml::XmlValue*))XmlElement__set_Value;
    type->__fp_ToString = (::uString*(*)(::uObject*))XmlElement__ToString;

    type->SetFunctions(2,
        ::uNewFunction("ChildrenToString", XmlElement__ChildrenToString, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", XmlElement__New_1, 0, true, XmlElement__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlElement___ObjInit_3(XmlElement* __this)
{
    ::app::Uno::Data::Xml::XmlLinkedNode___ObjInit_2(__this);
    __this->NodeType(3);
}

::uString* XmlElement__ChildrenToString(XmlElement* __this)
{
    ::app::Uno::Text::StringBuilder* strBuilder = ::app::Uno::Text::StringBuilder__New_1(NULL);

    for (::uObject* enum_125 = ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(__this->Children())->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
    {
        ::app::Uno::Data::Xml::XmlLinkedNode* child = ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlLinkedNode::Current(::uPtr< ::uObject*>(enum_125));
        ::uPtr< ::app::Uno::Text::StringBuilder*>(strBuilder)->Append_1(::app::Uno::Object::ToString(::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(child)));
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(strBuilder)->ToString();
}

::app::Uno::Data::Xml::XmlLinkedNode* XmlElement__CreateNewInstance(XmlElement* __this)
{
    return (::app::Uno::Data::Xml::XmlLinkedNode*)XmlElement__New_1(NULL);
}

::app::Uno::Data::Xml::XmlValue* XmlElement__get_Value(XmlElement* __this)
{
    if ((::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(__this->Children())->Count() == 1) && (::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(__this->FirstChild())->NodeType() == 1))
    {
        return ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(__this->FirstChild())->Value();
    }

    return ::app::Uno::Data::Xml::XmlNode__get_Value(__this);
}

::uString* XmlElement__GetTextContent(XmlElement* __this)
{
    ::app::Uno::Text::StringBuilder* strBuilder = ::app::Uno::Text::StringBuilder__New_1(NULL);
    bool needWhitespaceBetweenContents = false;

    for (::uObject* enum_123 = ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(__this->Children())->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Data::Xml::XmlLinkedNode* child = ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlLinkedNode::Current(::uPtr< ::uObject*>(enum_123));

        if ((::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(child)->NodeType() != 5) && (::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(child)->NodeType() != 6))
        {
            ::uString* childTextContent = ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(child)->GetTextContent();

            if (!::app::Uno::String__IsNullOrEmpty(NULL, childTextContent))
            {
                if ((::uPtr< ::uString*>(childTextContent)->Item(0) != ' ') && needWhitespaceBetweenContents)
                {
                    ::uPtr< ::app::Uno::Text::StringBuilder*>(strBuilder)->Append_1(::uGetConstString(" "));
                }

                ::uPtr< ::app::Uno::Text::StringBuilder*>(strBuilder)->Append_1(childTextContent);
                needWhitespaceBetweenContents = ::uPtr< ::uString*>(childTextContent)->Item(::uPtr< ::uString*>(childTextContent)->Length() - 1) != ' ';
            }
        }
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(strBuilder)->ToString();
}

XmlElement* XmlElement__New_1(::uStatic* __this)
{
    XmlElement* inst = (XmlElement*)::uAllocObject(sizeof(XmlElement), XmlElement__typeof());
    inst->_ObjInit_3();
    return inst;
}

void XmlElement__set_Value(XmlElement* __this, ::app::Uno::Data::Xml::XmlValue* value)
{
    ::app::Uno::Data::Xml::XmlNode__set_Value(__this, value);
}

::uString* XmlElement__ToString(XmlElement* __this)
{
    ::app::Uno::Text::StringBuilder* result = ::app::Uno::Text::StringBuilder__New_1(NULL);
    ::uPtr< ::app::Uno::Text::StringBuilder*>(result)->Append_1(::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("<"), __this->Name()));

    for (::uObject* enum_124 = ::uPtr< ::app::Uno::Data::Xml::XmlAttributeCollection*>(__this->Attributes())->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Uno::Data::Xml::XmlAttribute* a = ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlAttribute::Current(::uPtr< ::uObject*>(enum_124));
        ::uPtr< ::app::Uno::Text::StringBuilder*>(result)->Append_1(::app::Uno::String__op_Addition_2(NULL, ::uGetConstString(" "), ::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(a)->ToString()));
    }

    if (__this->HasChildren())
    {
        ::uPtr< ::app::Uno::Text::StringBuilder*>(result)->Append_1(::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString(">"), __this->ChildrenToString()), ::uGetConstString("</")), __this->Name()), ::uGetConstString(">")));
    }
    else
    {
        ::uPtr< ::app::Uno::Text::StringBuilder*>(result)->Append_1(::uGetConstString("/>"));
    }

    return result->ToString();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* XmlEncoding__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Data.Xml.XmlEncoding", ::app::Uno::Int__typeof(), 10);

    type->SetLiterals(
        "Auto", 0LL,
        "Utf8", 1LL,
        "Utf16_le", 2LL,
        "Utf16_be", 3LL,
        "Utf16", 4LL,
        "Utf32_le", 5LL,
        "Utf32_be", 6LL,
        "Utf32", 7LL,
        "Wchar", 8LL,
        "Latin1", 9LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Helpers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*> XmlEncodingHelper___encodingDictionary;

XmlEncodingHelper__uType* XmlEncodingHelper__typeof()
{
    static ::uStaticStrong<XmlEncodingHelper__uType*> type;
    if (type != NULL) return type;

    type = (XmlEncodingHelper__uType*)::uAllocClassType(sizeof(XmlEncodingHelper__uType), "Uno.Data.Xml.XmlEncodingHelper", false, 0, 0, 0);

    type->SetFields(1,
        ::uNewField("_encodingDictionary", &XmlEncodingHelper___encodingDictionary, 0, ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("ConvertFromString", XmlEncodingHelper__ConvertFromString, 0, true, ::app::Uno::Data::Xml::XmlEncoding__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("ConvertToString", XmlEncodingHelper__ConvertToString, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Data::Xml::XmlEncoding__typeof()),
        ::uNewFunctionVoid("FillEncodingDictionary", XmlEncodingHelper__FillEncodingDictionary, 0, true),
        ::uNewFunction("get_EncodingDictionary", XmlEncodingHelper__get_EncodingDictionary, 0, true, ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding__typeof()),
        ::uNewFunction(".ctor", XmlEncodingHelper__New_1, 0, true, XmlEncodingHelper__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlEncodingHelper___ObjInit(XmlEncodingHelper* __this)
{
}

int XmlEncodingHelper__ConvertFromString(::uStatic* __this, ::uString* encodingStr)
{
    if (::app::Uno::String__IsNullOrEmpty(NULL, encodingStr))
    {
        return 0;
    }

    ::uString* encodingStrLowerCase = ::app::Uno::String::ToLower(::uPtr< ::uString*>(encodingStr));

    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(XmlEncodingHelper__get_EncodingDictionary(NULL))->ContainsKey(encodingStrLowerCase))
    {
        return 0;
    }

    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(XmlEncodingHelper__get_EncodingDictionary(NULL))->Item(encodingStrLowerCase);
}

::uString* XmlEncodingHelper__ConvertToString(::uStatic* __this, int encoding)
{
    switch (encoding)
    {
        case 1:
        {
            return ::uGetConstString("UTF-8");
        }
        case 4:
        {
            return ::uGetConstString("UTF-16");
        }
        case 2:
        {
            return ::uGetConstString("UTF-16LE");
        }
        case 3:
        {
            return ::uGetConstString("UTF-16BE");
        }
        case 7:
        {
            return ::uGetConstString("UTF-32");
        }
        case 5:
        {
            return ::uGetConstString("UTF-32LE");
        }
        case 6:
        {
            return ::uGetConstString("UTF-32BE");
        }
        case 9:
        {
            return ::uGetConstString("Latin1");
        }
        case 8:
        {
            return ::uGetConstString("Wchar");
        }
        default:
        {
            return NULL;
        }
    }
}

void XmlEncodingHelper__FillEncodingDictionary(::uStatic* __this)
{
    XmlEncodingHelper___encodingDictionary = ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding__New_1(NULL);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(XmlEncodingHelper___encodingDictionary)->Add(::uGetConstString("utf-8"), 1);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(XmlEncodingHelper___encodingDictionary)->Add(::uGetConstString("utf-16be"), 3);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(XmlEncodingHelper___encodingDictionary)->Add(::uGetConstString("utf-16le"), 2);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(XmlEncodingHelper___encodingDictionary)->Add(::uGetConstString("utf-16"), 4);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(XmlEncodingHelper___encodingDictionary)->Add(::uGetConstString("utf-32be"), 6);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(XmlEncodingHelper___encodingDictionary)->Add(::uGetConstString("utf-32le"), 5);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(XmlEncodingHelper___encodingDictionary)->Add(::uGetConstString("utf-32"), 7);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(XmlEncodingHelper___encodingDictionary)->Add(::uGetConstString("latin1"), 9);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(XmlEncodingHelper___encodingDictionary)->Add(::uGetConstString("l1"), 9);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(XmlEncodingHelper___encodingDictionary)->Add(::uGetConstString("iso-ir-100"), 9);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(XmlEncodingHelper___encodingDictionary)->Add(::uGetConstString("csisolatin1"), 9);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(XmlEncodingHelper___encodingDictionary)->Add(::uGetConstString("cp819"), 9);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*>(XmlEncodingHelper___encodingDictionary)->Add(::uGetConstString("wchar"), 8);
}

::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding* XmlEncodingHelper__get_EncodingDictionary(::uStatic* __this)
{
    if (XmlEncodingHelper___encodingDictionary == NULL)
    {
        XmlEncodingHelper__FillEncodingDictionary(NULL);
    }

    return XmlEncodingHelper___encodingDictionary;
}

XmlEncodingHelper* XmlEncodingHelper__New_1(::uStatic* __this)
{
    XmlEncodingHelper* inst = (XmlEncodingHelper*)::uAllocObject(sizeof(XmlEncodingHelper), XmlEncodingHelper__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlException__uType* XmlException__typeof()
{
    static ::uStaticStrong<XmlException__uType*> type;
    if (type != NULL) return type;

    type = (XmlException__uType*)::uAllocClassType(sizeof(XmlException__uType), "Uno.Data.Xml.XmlException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    type->SetFunctions(2,
        ::uNewFunction(".ctor", XmlException__New_3, 0, true, XmlException__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", XmlException__New_4, 0, true, XmlException__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlException___ObjInit_2(XmlException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit_1(__this, message);
}

void XmlException___ObjInit_3(XmlException* __this, ::uString* message, ::uString* paramName)
{
    ::app::Uno::Exception___ObjInit_1(__this, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, paramName, ::uGetConstString(": ")), message));
}

XmlException* XmlException__New_3(::uStatic* __this, ::uString* message)
{
    XmlException* inst = (XmlException*)::uAllocObject(sizeof(XmlException), XmlException__typeof());
    inst->_ObjInit_2(message);
    return inst;
}

XmlException* XmlException__New_4(::uStatic* __this, ::uString* message, ::uString* paramName)
{
    XmlException* inst = (XmlException*)::uAllocObject(sizeof(XmlException), XmlException__typeof());
    inst->_ObjInit_3(message, paramName);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlLinkedNode__uType* XmlLinkedNode__typeof()
{
    static ::uStaticStrong<XmlLinkedNode__uType*> type;
    if (type != NULL) return type;

    type = (XmlLinkedNode__uType*)::uAllocClassType(sizeof(XmlLinkedNode__uType), "Uno.Data.Xml.XmlLinkedNode", false, 0, 5, 0);

    type->SetBaseType(::app::Uno::Data::Xml::XmlNode__typeof());
    type->__fp_GetTextContent = XmlLinkedNode__GetTextContent;

    type->SetStrongRefs(
        "_Attributes", offsetof(XmlLinkedNode, _Attributes),
        "_Children", offsetof(XmlLinkedNode, _Children),
        "_NextSibling", offsetof(XmlLinkedNode, _NextSibling),
        "_Parent", offsetof(XmlLinkedNode, _Parent),
        "_PreviousSibling", offsetof(XmlLinkedNode, _PreviousSibling));

    type->SetFunctions(27,
        ::uNewFunctionVoid("AddAfterSelf", XmlLinkedNode__AddAfterSelf, 0, false, XmlLinkedNode__typeof()),
        ::uNewFunctionVoid("AddBeforeSelf", XmlLinkedNode__AddBeforeSelf, 0, false, XmlLinkedNode__typeof()),
        ::uNewFunctionVoid("AppendChild", XmlLinkedNode__AppendChild, 0, false, XmlLinkedNode__typeof()),
        ::uNewFunction("Clone", XmlLinkedNode__Clone, 0, false, XmlLinkedNode__typeof()),
        ::uNewFunctionVoid("CloneChildren", XmlLinkedNode__CloneChildren, 0, false, XmlLinkedNode__typeof(), XmlLinkedNode__typeof()),
        ::uNewFunction("CreateNewInstance", type->__fp_CreateNewInstance, offsetof(XmlLinkedNode__uType, __fp_CreateNewInstance), false, XmlLinkedNode__typeof()),
        ::uNewFunction("FindAllByName", XmlLinkedNode__FindAllByName, 0, false, ::app::Uno::Collections::IList__Uno_Data_Xml_XmlLinkedNode__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("FindByName", XmlLinkedNode__FindByName, 0, false, XmlLinkedNode__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Attributes", XmlLinkedNode__get_Attributes, 0, false, ::app::Uno::Data::Xml::XmlAttributeCollection__typeof()),
        ::uNewFunction("get_Children", XmlLinkedNode__get_Children, 0, false, ::app::Uno::Data::Xml::XmlLinkedNodeCollection__typeof()),
        ::uNewFunction("get_FirstChild", XmlLinkedNode__get_FirstChild, 0, false, XmlLinkedNode__typeof()),
        ::uNewFunction("get_HasAttributes", XmlLinkedNode__get_HasAttributes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_HasChildren", XmlLinkedNode__get_HasChildren, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_LastChild", XmlLinkedNode__get_LastChild, 0, false, XmlLinkedNode__typeof()),
        ::uNewFunction("get_NextSibling", XmlLinkedNode__get_NextSibling, 0, false, XmlLinkedNode__typeof()),
        ::uNewFunction("get_Parent", XmlLinkedNode__get_Parent, 0, false, XmlLinkedNode__typeof()),
        ::uNewFunction("get_PreviousSibling", XmlLinkedNode__get_PreviousSibling, 0, false, XmlLinkedNode__typeof()),
        ::uNewFunction("get_TextContent", XmlLinkedNode__get_TextContent, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("GetTextContent", type->__fp_GetTextContent, offsetof(XmlLinkedNode__uType, __fp_GetTextContent), false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("PrependChild", XmlLinkedNode__PrependChild, 0, false, XmlLinkedNode__typeof()),
        ::uNewFunctionVoid("RecursiveSearch", XmlLinkedNode__RecursiveSearch, 0, false, ::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode__typeof(), XmlLinkedNode__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Attributes", XmlLinkedNode__set_Attributes, 0, false, ::app::Uno::Data::Xml::XmlAttributeCollection__typeof()),
        ::uNewFunctionVoid("set_Children", XmlLinkedNode__set_Children, 0, false, ::app::Uno::Data::Xml::XmlLinkedNodeCollection__typeof()),
        ::uNewFunctionVoid("set_NextSibling", XmlLinkedNode__set_NextSibling, 0, false, XmlLinkedNode__typeof()),
        ::uNewFunctionVoid("set_Parent", XmlLinkedNode__set_Parent, 0, false, XmlLinkedNode__typeof()),
        ::uNewFunctionVoid("set_PreviousSibling", XmlLinkedNode__set_PreviousSibling, 0, false, XmlLinkedNode__typeof()),
        ::uNewFunctionVoid("set_TextContent", XmlLinkedNode__set_TextContent, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlLinkedNode___ObjInit_2(XmlLinkedNode* __this)
{
    ::app::Uno::Data::Xml::XmlNode___ObjInit(__this);
    __this->Children(::app::Uno::Data::Xml::XmlLinkedNodeCollection__New_1(NULL, __this));
    __this->Attributes(::app::Uno::Data::Xml::XmlAttributeCollection__New_1(NULL, __this));
}

void XmlLinkedNode__AddAfterSelf(XmlLinkedNode* __this, XmlLinkedNode* node)
{
    if (__this->Parent() != NULL)
    {
        if (__this->NextSibling() == NULL)
        {
            ::uPtr< XmlLinkedNode*>(__this->Parent())->AppendChild(node);
        }
        else
        {
            for (int index = 0; index < ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(::uPtr< XmlLinkedNode*>(__this->Parent())->Children())->Count(); index++)
            {
                if (::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(::uPtr< XmlLinkedNode*>(__this->Parent())->Children())->Item(index) == __this)
                {
                    ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(::uPtr< XmlLinkedNode*>(__this->Parent())->Children())->Insert(index + 1, node);
                    break;
                }
            }
        }
    }
}

void XmlLinkedNode__AddBeforeSelf(XmlLinkedNode* __this, XmlLinkedNode* node)
{
    if (__this->Parent() != NULL)
    {
        if (__this->PreviousSibling() == NULL)
        {
            ::uPtr< XmlLinkedNode*>(__this->Parent())->PrependChild(node);
        }
        else
        {
            for (int index = 0; index < ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(::uPtr< XmlLinkedNode*>(__this->Parent())->Children())->Count(); index++)
            {
                if (::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(::uPtr< XmlLinkedNode*>(__this->Parent())->Children())->Item(index) == __this)
                {
                    ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(::uPtr< XmlLinkedNode*>(__this->Parent())->Children())->Insert(index, node);
                    break;
                }
            }
        }
    }
}

void XmlLinkedNode__AppendChild(XmlLinkedNode* __this, XmlLinkedNode* node)
{
    ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(__this->Children())->Add(node);
}

XmlLinkedNode* XmlLinkedNode__Clone(XmlLinkedNode* __this)
{
    XmlLinkedNode* newNode = __this->CreateNewInstance();
    ::uPtr< XmlLinkedNode*>(newNode)->Name(__this->Name());
    newNode->Value(::app::Uno::Data::Xml::XmlValue__New_7(NULL, ::uPtr< ::app::Uno::Data::Xml::XmlValue*>(__this->Value())->AsString()));

    for (::uObject* enum_123 = ::uPtr< ::app::Uno::Data::Xml::XmlAttributeCollection*>(__this->Attributes())->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Data::Xml::XmlAttribute* attribute = ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlAttribute::Current(::uPtr< ::uObject*>(enum_123));
        ::uPtr< ::app::Uno::Data::Xml::XmlAttributeCollection*>(::uPtr< XmlLinkedNode*>(newNode)->Attributes())->Add(::uPtr< ::app::Uno::Data::Xml::XmlAttribute*>(attribute)->Clone());
    }

    __this->CloneChildren(newNode, __this);
    return newNode;
}

void XmlLinkedNode__CloneChildren(XmlLinkedNode* __this, XmlLinkedNode* newNode, XmlLinkedNode* existingNode)
{
    for (::uObject* enum_124 = ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(::uPtr< XmlLinkedNode*>(existingNode)->Children())->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        XmlLinkedNode* child = ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlLinkedNode::Current(::uPtr< ::uObject*>(enum_124));
        ::uPtr< XmlLinkedNode*>(newNode)->AppendChild(::uPtr< XmlLinkedNode*>(child)->Clone());
    }
}

::uObject* XmlLinkedNode__FindAllByName(XmlLinkedNode* __this, ::uString* name, bool includeNestedNodes)
{
    ::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode* res = ::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode__New_1(NULL);
    __this->RecursiveSearch(res, __this, name, includeNestedNodes);
    return (::uObject*)res;
}

XmlLinkedNode* XmlLinkedNode__FindByName(XmlLinkedNode* __this, ::uString* name, bool includeNestedNodes)
{
    ::uObject* nodes = __this->FindAllByName(name, includeNestedNodes);

    if (::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlLinkedNode::Count(::uPtr< ::uObject*>(nodes)) > 0)
    {
        return ::app::Uno::Collections::IList__Uno_Data_Xml_XmlLinkedNode::Item(::uPtr< ::uObject*>(nodes), 0);
    }

    return NULL;
}

::app::Uno::Data::Xml::XmlAttributeCollection* XmlLinkedNode__get_Attributes(XmlLinkedNode* __this)
{
    return __this->_Attributes;
}

::app::Uno::Data::Xml::XmlLinkedNodeCollection* XmlLinkedNode__get_Children(XmlLinkedNode* __this)
{
    return __this->_Children;
}

XmlLinkedNode* XmlLinkedNode__get_FirstChild(XmlLinkedNode* __this)
{
    return ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(__this->Children())->FirstChild();
}

bool XmlLinkedNode__get_HasAttributes(XmlLinkedNode* __this)
{
    return ::uPtr< ::app::Uno::Data::Xml::XmlAttributeCollection*>(__this->Attributes())->HasChildren();
}

bool XmlLinkedNode__get_HasChildren(XmlLinkedNode* __this)
{
    return ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(__this->Children())->HasChildren();
}

XmlLinkedNode* XmlLinkedNode__get_LastChild(XmlLinkedNode* __this)
{
    return ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(__this->Children())->LastChild();
}

XmlLinkedNode* XmlLinkedNode__get_NextSibling(XmlLinkedNode* __this)
{
    return __this->_NextSibling;
}

XmlLinkedNode* XmlLinkedNode__get_Parent(XmlLinkedNode* __this)
{
    return __this->_Parent;
}

XmlLinkedNode* XmlLinkedNode__get_PreviousSibling(XmlLinkedNode* __this)
{
    return __this->_PreviousSibling;
}

::uString* XmlLinkedNode__get_TextContent(XmlLinkedNode* __this)
{
    return __this->GetTextContent();
}

::uString* XmlLinkedNode__GetTextContent(XmlLinkedNode* __this)
{
    return ::uPtr< ::app::Uno::Data::Xml::XmlValue*>(__this->Value())->AsString();
}

void XmlLinkedNode__PrependChild(XmlLinkedNode* __this, XmlLinkedNode* node)
{
    ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(__this->Children())->Insert(0, node);
}

void XmlLinkedNode__RecursiveSearch(XmlLinkedNode* __this, ::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode* res, XmlLinkedNode* node, ::uString* name, bool includeNestedNodes)
{
    for (::uObject* enum_125 = ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(::uPtr< XmlLinkedNode*>(node)->Children())->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
    {
        XmlLinkedNode* child = ::app::Uno::Collections::IEnumerator__Uno_Data_Xml_XmlLinkedNode::Current(::uPtr< ::uObject*>(enum_125));

        if (::app::Uno::String__op_Equality(NULL, ::uPtr< XmlLinkedNode*>(child)->Name(), name))
        {
            ::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlLinkedNode*>(res)->Add(child);
        }

        if (includeNestedNodes)
        {
            __this->RecursiveSearch(res, child, name, includeNestedNodes);
        }
    }
}

void XmlLinkedNode__set_Attributes(XmlLinkedNode* __this, ::app::Uno::Data::Xml::XmlAttributeCollection* value)
{
    __this->_Attributes = value;
}

void XmlLinkedNode__set_Children(XmlLinkedNode* __this, ::app::Uno::Data::Xml::XmlLinkedNodeCollection* value)
{
    __this->_Children = value;
}

void XmlLinkedNode__set_NextSibling(XmlLinkedNode* __this, XmlLinkedNode* value)
{
    __this->_NextSibling = value;
}

void XmlLinkedNode__set_Parent(XmlLinkedNode* __this, XmlLinkedNode* value)
{
    __this->_Parent = value;
}

void XmlLinkedNode__set_PreviousSibling(XmlLinkedNode* __this, XmlLinkedNode* value)
{
    __this->_PreviousSibling = value;
}

void XmlLinkedNode__set_TextContent(XmlLinkedNode* __this, ::uString* value)
{
    if (__this->NodeType() != 3)
    {
        U_THROW(::app::Uno::Data::Xml::XmlException__New_3(NULL, ::uGetConstString("Setting TextContent property is only allowed for XmlElement node")));
    }

    ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(__this->Children())->Clear();
    ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNodeCollection*>(__this->Children())->Add((XmlLinkedNode*)::app::Uno::Data::Xml::XmlText__New_2(NULL, ::app::Uno::Data::Xml::XmlValue__New_7(NULL, value)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlLinkedNodeCollection__uType* XmlLinkedNodeCollection__typeof()
{
    static ::uStaticStrong<XmlLinkedNodeCollection__uType*> type;
    if (type != NULL) return type;

    type = (XmlLinkedNodeCollection__uType*)::uAllocClassType(sizeof(XmlLinkedNodeCollection__uType), "Uno.Data.Xml.XmlLinkedNodeCollection", false, 3, 0, 0);

    type->SetBaseType(::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__typeof());
    type->__fp_Add = (void(*)(::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode*, ::app::Uno::Data::Xml::XmlLinkedNode*))XmlLinkedNodeCollection__Add;
    type->__fp_Insert = (void(*)(::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode*, int, ::app::Uno::Data::Xml::XmlLinkedNode*))XmlLinkedNodeCollection__Insert;
    type->__fp_Remove = (bool(*)(::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode*, ::app::Uno::Data::Xml::XmlLinkedNode*))XmlLinkedNodeCollection__Remove;
    type->__fp_RemoveAt = (void(*)(::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode*, int))XmlLinkedNodeCollection__RemoveAt;
    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))XmlLinkedNodeCollection__RemoveAt;
    type->__interface_0.__fp_Insert = (void(*)(void*, int, ::app::Uno::Data::Xml::XmlLinkedNode*))XmlLinkedNodeCollection__Insert;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Uno::Data::Xml::XmlLinkedNode*))XmlLinkedNodeCollection__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Uno::Data::Xml::XmlLinkedNode*))XmlLinkedNodeCollection__Remove;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Uno_Data_Xml_XmlLinkedNode__typeof(), offsetof(XmlLinkedNodeCollection__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlLinkedNode__typeof(), offsetof(XmlLinkedNodeCollection__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Uno_Data_Xml_XmlLinkedNode__typeof(), offsetof(XmlLinkedNodeCollection__uType, __interface_2));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", XmlLinkedNodeCollection__New_1, 0, true, XmlLinkedNodeCollection__typeof(), ::app::Uno::Data::Xml::XmlLinkedNode__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlLinkedNodeCollection___ObjInit_1(XmlLinkedNodeCollection* __this, ::app::Uno::Data::Xml::XmlLinkedNode* owner)
{
    ::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode___ObjInit(__this, owner);
}

void XmlLinkedNodeCollection__Add(XmlLinkedNodeCollection* __this, ::app::Uno::Data::Xml::XmlLinkedNode* item)
{
    ::app::Uno::Data::Xml::ValidationHelper__ValidateNodeAdding(NULL, __this->_owner, item);

    if ((::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->NodeType() == 4) && __this->HasChildren())
    {
        __this->Insert(0, item);
        return;
    }

    if (::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->Parent() != NULL)
    {
        item = ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->Clone();
    }

    ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->Parent(__this->_owner);

    if (__this->LastChild() != NULL)
    {
        ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->PreviousSibling(__this->LastChild());
        ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(__this->LastChild())->NextSibling(item);
    }

    item->NextSibling(NULL);
    ::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Add(__this, item);
}

void XmlLinkedNodeCollection__Insert(XmlLinkedNodeCollection* __this, int index, ::app::Uno::Data::Xml::XmlLinkedNode* item)
{
    if (!__this->HasChildren() && (index == 0))
    {
        __this->Add(item);
        return;
    }

    ::app::Uno::Data::Xml::ValidationHelper__ValidateNodeAdding(NULL, __this->_owner, item);

    if ((::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->NodeType() == 4) && (index != 0))
    {
        __this->Insert(0, item);
        return;
    }

    if (::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->Parent() != NULL)
    {
        item = ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->Clone();
    }

    ::app::Uno::Data::Xml::XmlLinkedNode* existingItem = __this->Item(index);
    ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->NextSibling(existingItem);
    item->Parent(__this->_owner);

    if (::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(existingItem)->PreviousSibling() != NULL)
    {
        ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(existingItem)->PreviousSibling())->NextSibling(item);
    }

    item->PreviousSibling(::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(existingItem)->PreviousSibling());
    existingItem->PreviousSibling(item);
    ::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Insert(__this, index, item);
}

XmlLinkedNodeCollection* XmlLinkedNodeCollection__New_1(::uStatic* __this, ::app::Uno::Data::Xml::XmlLinkedNode* owner)
{
    XmlLinkedNodeCollection* inst = (XmlLinkedNodeCollection*)::uAllocObject(sizeof(XmlLinkedNodeCollection), XmlLinkedNodeCollection__typeof());
    inst->_ObjInit_1(owner);
    return inst;
}

bool XmlLinkedNodeCollection__Remove(XmlLinkedNodeCollection* __this, ::app::Uno::Data::Xml::XmlLinkedNode* item)
{
    if (::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->PreviousSibling() != NULL)
    {
        ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->PreviousSibling())->NextSibling(::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->NextSibling());
    }

    if (::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->NextSibling() != NULL)
    {
        ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->NextSibling())->PreviousSibling(::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->PreviousSibling());
    }

    return ::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Remove(__this, item);
}

void XmlLinkedNodeCollection__RemoveAt(XmlLinkedNodeCollection* __this, int index)
{
    ::app::Uno::Data::Xml::XmlLinkedNode* item = __this->Item(index);

    if (::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->PreviousSibling() != NULL)
    {
        ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->PreviousSibling())->NextSibling(::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->NextSibling());
    }

    if (::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->NextSibling() != NULL)
    {
        ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->NextSibling())->PreviousSibling(::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(item)->PreviousSibling());
    }

    ::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__RemoveAt(__this, index);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlNode__uType* XmlNode__typeof()
{
    static ::uStaticStrong<XmlNode__uType*> type;
    if (type != NULL) return type;

    type = (XmlNode__uType*)::uAllocClassType(sizeof(XmlNode__uType), "Uno.Data.Xml.XmlNode", false, 0, 2, 0);

    type->__fp_get_Value = XmlNode__get_Value;
    type->__fp_set_Value = XmlNode__set_Value;

    type->SetStrongRefs(
        "_Name", offsetof(XmlNode, _Name),
        "_Value", offsetof(XmlNode, _Value));

    type->SetFunctions(6,
        ::uNewFunction("get_Name", XmlNode__get_Name, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_NodeType", XmlNode__get_NodeType, 0, false, ::app::Uno::Data::Xml::XmlNodeType__typeof()),
        ::uNewFunction("get_Value", type->__fp_get_Value, offsetof(XmlNode__uType, __fp_get_Value), false, ::app::Uno::Data::Xml::XmlValue__typeof()),
        ::uNewFunctionVoid("set_Name", XmlNode__set_Name, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_NodeType", XmlNode__set_NodeType, 0, false, ::app::Uno::Data::Xml::XmlNodeType__typeof()),
        ::uNewFunctionVoid("set_Value", type->__fp_set_Value, offsetof(XmlNode__uType, __fp_set_Value), false, ::app::Uno::Data::Xml::XmlValue__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlNode___ObjInit(XmlNode* __this)
{
    __this->Value(::app::Uno::Data::Xml::XmlValue__New_1(NULL));
}

void XmlNode___ObjInit_1(XmlNode* __this, ::uString* name, int nodeType, ::app::Uno::Data::Xml::XmlValue* value)
{
    __this->NodeType(nodeType);
    __this->Name(name);
    __this->Value(value);
}

::uString* XmlNode__get_Name(XmlNode* __this)
{
    return __this->_Name;
}

int XmlNode__get_NodeType(XmlNode* __this)
{
    return __this->_NodeType;
}

::app::Uno::Data::Xml::XmlValue* XmlNode__get_Value(XmlNode* __this)
{
    return __this->_Value;
}

void XmlNode__set_Name(XmlNode* __this, ::uString* value)
{
    __this->_Name = value;
}

void XmlNode__set_NodeType(XmlNode* __this, int value)
{
    __this->_NodeType = value;
}

void XmlNode__set_Value(XmlNode* __this, ::app::Uno::Data::Xml::XmlValue* value)
{
    __this->_Value = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlNodeHandle__uType* XmlNodeHandle__typeof()
{
    static ::uStaticStrong<XmlNodeHandle__uType*> type;
    if (type != NULL) return type;

    type = (XmlNodeHandle__uType*)::uAllocClassType(sizeof(XmlNodeHandle__uType), "Uno.Data.Xml.XmlNodeHandle", false, 0, 9, 0);

    type->SetStrongRefs(
        "_attributes", offsetof(XmlNodeHandle, _attributes),
        "_children", offsetof(XmlNodeHandle, _children),
        "_Encoding", offsetof(XmlNodeHandle, _Encoding),
        "_Name", offsetof(XmlNodeHandle, _Name),
        "_NextSibling", offsetof(XmlNodeHandle, _NextSibling),
        "_Parent", offsetof(XmlNodeHandle, _Parent),
        "_PrevSibling", offsetof(XmlNodeHandle, _PrevSibling),
        "_Value", offsetof(XmlNodeHandle, _Value),
        "_Version", offsetof(XmlNodeHandle, _Version));

    type->SetFields(2,
        ::uNewField("_attributes", NULL, offsetof(XmlNodeHandle, _attributes), ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle__typeof()),
        ::uNewField("_children", NULL, offsetof(XmlNodeHandle, _children), ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle__typeof()));

    type->SetFunctions(27,
        ::uNewFunctionVoid("AddAttribute", XmlNodeHandle__AddAttribute, 0, false, ::app::Uno::Data::Xml::XmlAttributeHandle__typeof()),
        ::uNewFunctionVoid("AppendChild", XmlNodeHandle__AppendChild, 0, false, XmlNodeHandle__typeof()),
        ::uNewFunction("get_AttributeHandles", XmlNodeHandle__get_AttributeHandles, 0, false, ::uGetArrayType(::app::Uno::Data::Xml::XmlAttributeHandle__typeof())),
        ::uNewFunction("get_Attributes", XmlNodeHandle__get_Attributes, 0, false, ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle__typeof()),
        ::uNewFunction("get_Children", XmlNodeHandle__get_Children, 0, false, ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle__typeof()),
        ::uNewFunction("get_ChildrenHandles", XmlNodeHandle__get_ChildrenHandles, 0, false, ::uGetArrayType(XmlNodeHandle__typeof())),
        ::uNewFunction("get_Encoding", XmlNodeHandle__get_Encoding, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_FirstChild", XmlNodeHandle__get_FirstChild, 0, false, XmlNodeHandle__typeof()),
        ::uNewFunction("get_LastChild", XmlNodeHandle__get_LastChild, 0, false, XmlNodeHandle__typeof()),
        ::uNewFunction("get_Name", XmlNodeHandle__get_Name, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_NextSibling", XmlNodeHandle__get_NextSibling, 0, false, XmlNodeHandle__typeof()),
        ::uNewFunction("get_NodeType", XmlNodeHandle__get_NodeType, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Parent", XmlNodeHandle__get_Parent, 0, false, XmlNodeHandle__typeof()),
        ::uNewFunction("get_PrevSibling", XmlNodeHandle__get_PrevSibling, 0, false, XmlNodeHandle__typeof()),
        ::uNewFunction("get_Value", XmlNodeHandle__get_Value, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Version", XmlNodeHandle__get_Version, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", XmlNodeHandle__New_1, 0, true, XmlNodeHandle__typeof()),
        ::uNewFunction(".ctor", XmlNodeHandle__New_2, 0, true, XmlNodeHandle__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", XmlNodeHandle__New_3, 0, true, XmlNodeHandle__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_Encoding", XmlNodeHandle__set_Encoding, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Name", XmlNodeHandle__set_Name, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_NextSibling", XmlNodeHandle__set_NextSibling, 0, false, XmlNodeHandle__typeof()),
        ::uNewFunctionVoid("set_NodeType", XmlNodeHandle__set_NodeType, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_Parent", XmlNodeHandle__set_Parent, 0, false, XmlNodeHandle__typeof()),
        ::uNewFunctionVoid("set_PrevSibling", XmlNodeHandle__set_PrevSibling, 0, false, XmlNodeHandle__typeof()),
        ::uNewFunctionVoid("set_Value", XmlNodeHandle__set_Value, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Version", XmlNodeHandle__set_Version, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlNodeHandle___ObjInit(XmlNodeHandle* __this)
{
    __this->Parent(NULL);
    __this->NextSibling(NULL);
    __this->PrevSibling(NULL);
}

void XmlNodeHandle___ObjInit_1(XmlNodeHandle* __this, ::uString* xmlVersion, ::uString* xmlEncoding)
{
    __this->Name(::uGetConstString("xml"));
    __this->Encoding(xmlEncoding);
    __this->Version(xmlVersion);
    __this->NodeType(4);
    __this->Parent(NULL);
    __this->NextSibling(NULL);
    __this->PrevSibling(NULL);
}

void XmlNodeHandle___ObjInit_2(XmlNodeHandle* __this, ::uString* name, ::uString* value, int nodeType)
{
    __this->Name(name);
    __this->Value(::app::Uno::String__IsNullOrEmpty(NULL, value) ? (::uString*)NULL : value);
    __this->NodeType(nodeType);
    __this->Parent(NULL);
    __this->NextSibling(NULL);
    __this->PrevSibling(NULL);
}

void XmlNodeHandle__AddAttribute(XmlNodeHandle* __this, ::app::Uno::Data::Xml::XmlAttributeHandle* attribute)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle*>(__this->Attributes())->Add(attribute);
}

void XmlNodeHandle__AppendChild(XmlNodeHandle* __this, XmlNodeHandle* child)
{
    if (child == NULL)
    {
        return;
    }

    XmlNodeHandle* lastChild = __this->LastChild();
    ::uPtr< XmlNodeHandle*>(child)->Parent(__this);
    child->PrevSibling(lastChild);

    if (lastChild != NULL)
    {
        ::uPtr< XmlNodeHandle*>(lastChild)->NextSibling(child);
    }

    child->NextSibling(NULL);
    ::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle*>(__this->Children())->Add(child);
}

::uArray* XmlNodeHandle__get_AttributeHandles(XmlNodeHandle* __this)
{
    return (__this->_attributes != NULL) ? ::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle*>(__this->_attributes)->ToArray() : NULL;
}

::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle* XmlNodeHandle__get_Attributes(XmlNodeHandle* __this)
{
    return (__this->_attributes == NULL) ? (__this->_attributes = ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle__New_1(NULL)) : __this->_attributes;
}

::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle* XmlNodeHandle__get_Children(XmlNodeHandle* __this)
{
    return (__this->_children == NULL) ? (__this->_children = ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle__New_1(NULL)) : __this->_children;
}

::uArray* XmlNodeHandle__get_ChildrenHandles(XmlNodeHandle* __this)
{
    return (__this->_children != NULL) ? ::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle*>(__this->_children)->ToArray() : NULL;
}

::uString* XmlNodeHandle__get_Encoding(XmlNodeHandle* __this)
{
    return __this->_Encoding;
}

XmlNodeHandle* XmlNodeHandle__get_FirstChild(XmlNodeHandle* __this)
{
    return (::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle*>(__this->Children())->Count() > 0) ? ::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle*>(__this->Children())->Item(0) : NULL;
}

XmlNodeHandle* XmlNodeHandle__get_LastChild(XmlNodeHandle* __this)
{
    return (::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlNodeHandle*>(__this->Children())->Count() > 0) ? ::app::Uno::Collections::IListExtensions__Last__Uno_Data_Xml_XmlNodeHandle(NULL, (::uObject*)__this->Children()) : NULL;
}

::uString* XmlNodeHandle__get_Name(XmlNodeHandle* __this)
{
    return __this->_Name;
}

XmlNodeHandle* XmlNodeHandle__get_NextSibling(XmlNodeHandle* __this)
{
    return __this->_NextSibling;
}

int XmlNodeHandle__get_NodeType(XmlNodeHandle* __this)
{
    return __this->_NodeType;
}

XmlNodeHandle* XmlNodeHandle__get_Parent(XmlNodeHandle* __this)
{
    return __this->_Parent;
}

XmlNodeHandle* XmlNodeHandle__get_PrevSibling(XmlNodeHandle* __this)
{
    return __this->_PrevSibling;
}

::uString* XmlNodeHandle__get_Value(XmlNodeHandle* __this)
{
    return __this->_Value;
}

::uString* XmlNodeHandle__get_Version(XmlNodeHandle* __this)
{
    return __this->_Version;
}

XmlNodeHandle* XmlNodeHandle__New_1(::uStatic* __this)
{
    XmlNodeHandle* inst = (XmlNodeHandle*)::uAllocObject(sizeof(XmlNodeHandle), XmlNodeHandle__typeof());
    inst->_ObjInit();
    return inst;
}

XmlNodeHandle* XmlNodeHandle__New_2(::uStatic* __this, ::uString* xmlVersion, ::uString* xmlEncoding)
{
    XmlNodeHandle* inst = (XmlNodeHandle*)::uAllocObject(sizeof(XmlNodeHandle), XmlNodeHandle__typeof());
    inst->_ObjInit_1(xmlVersion, xmlEncoding);
    return inst;
}

XmlNodeHandle* XmlNodeHandle__New_3(::uStatic* __this, ::uString* name, ::uString* value, int nodeType)
{
    XmlNodeHandle* inst = (XmlNodeHandle*)::uAllocObject(sizeof(XmlNodeHandle), XmlNodeHandle__typeof());
    inst->_ObjInit_2(name, value, nodeType);
    return inst;
}

void XmlNodeHandle__set_Encoding(XmlNodeHandle* __this, ::uString* value)
{
    __this->_Encoding = value;
}

void XmlNodeHandle__set_Name(XmlNodeHandle* __this, ::uString* value)
{
    __this->_Name = value;
}

void XmlNodeHandle__set_NextSibling(XmlNodeHandle* __this, XmlNodeHandle* value)
{
    __this->_NextSibling = value;
}

void XmlNodeHandle__set_NodeType(XmlNodeHandle* __this, int value)
{
    __this->_NodeType = value;
}

void XmlNodeHandle__set_Parent(XmlNodeHandle* __this, XmlNodeHandle* value)
{
    __this->_Parent = value;
}

void XmlNodeHandle__set_PrevSibling(XmlNodeHandle* __this, XmlNodeHandle* value)
{
    __this->_PrevSibling = value;
}

void XmlNodeHandle__set_Value(XmlNodeHandle* __this, ::uString* value)
{
    __this->_Value = value;
}

void XmlNodeHandle__set_Version(XmlNodeHandle* __this, ::uString* value)
{
    __this->_Version = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Helpers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlNodeHandleConverter__uType* XmlNodeHandleConverter__typeof()
{
    static ::uStaticStrong<XmlNodeHandleConverter__uType*> type;
    if (type != NULL) return type;

    type = (XmlNodeHandleConverter__uType*)::uAllocClassType(sizeof(XmlNodeHandleConverter__uType), "Uno.Data.Xml.XmlNodeHandleConverter", false, 0, 0, 0);

    type->SetFunctions(3,
        ::uNewFunction("ConvertToXmlLinkedNode", XmlNodeHandleConverter__ConvertToXmlLinkedNode, 0, true, ::app::Uno::Data::Xml::XmlLinkedNode__typeof(), ::app::Uno::Data::Xml::XmlNodeHandle__typeof()),
        ::uNewFunctionVoid("ConvertToXmlNodeTree", XmlNodeHandleConverter__ConvertToXmlNodeTree, 0, true, ::app::Uno::Data::Xml::XmlLinkedNode__typeof(), ::app::Uno::Data::Xml::XmlNodeHandle__typeof()),
        ::uNewFunction(".ctor", XmlNodeHandleConverter__New_1, 0, true, XmlNodeHandleConverter__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlNodeHandleConverter___ObjInit(XmlNodeHandleConverter* __this)
{
}

::app::Uno::Data::Xml::XmlLinkedNode* XmlNodeHandleConverter__ConvertToXmlLinkedNode(::uStatic* __this, ::app::Uno::Data::Xml::XmlNodeHandle* handle)
{
    ::app::Uno::Data::Xml::XmlLinkedNode* xmlNode;

    switch (::uPtr< ::app::Uno::Data::Xml::XmlNodeHandle*>(handle)->NodeType())
    {
        case 0:
        {
            xmlNode = (::app::Uno::Data::Xml::XmlLinkedNode*)::app::Uno::Data::Xml::XmlDocumentElement__New_1(NULL);
            break;
        }
        case 3:
        {
            xmlNode = (::app::Uno::Data::Xml::XmlLinkedNode*)::app::Uno::Data::Xml::XmlElement__New_1(NULL);
            break;
        }
        case 5:
        {
            xmlNode = (::app::Uno::Data::Xml::XmlLinkedNode*)::app::Uno::Data::Xml::XmlComment__New_1(NULL);
            break;
        }
        case 2:
        {
            xmlNode = (::app::Uno::Data::Xml::XmlLinkedNode*)::app::Uno::Data::Xml::XmlCharacterData__New_2(NULL, ::uPtr< ::app::Uno::Data::Xml::XmlNodeHandle*>(handle)->Value());
            break;
        }
        case 1:
        {
            if (::app::Uno::String__op_Equality(NULL, ::uPtr< ::app::Uno::Data::Xml::XmlNodeHandle*>(handle)->Value(), NULL) || (::uPtr< ::uString*>(::app::Uno::String::Trim(::uPtr< ::uString*>(::uPtr< ::app::Uno::Data::Xml::XmlNodeHandle*>(handle)->Value())))->Length() == 0))
            {
                return NULL;
            }

            xmlNode = (::app::Uno::Data::Xml::XmlLinkedNode*)::app::Uno::Data::Xml::XmlText__New_1(NULL);
            break;
        }
        case 4:
        {
            xmlNode = (::app::Uno::Data::Xml::XmlLinkedNode*)::app::Uno::Data::Xml::XmlDeclaration__New_2(NULL, ::uPtr< ::app::Uno::Data::Xml::XmlNodeHandle*>(handle)->Version(), ::app::Uno::Data::Xml::XmlEncodingHelper__ConvertFromString(NULL, ::uPtr< ::app::Uno::Data::Xml::XmlNodeHandle*>(handle)->Encoding()));
            break;
        }
        case 6:
        {
            xmlNode = (::app::Uno::Data::Xml::XmlLinkedNode*)::app::Uno::Data::Xml::XmlProcessingInstruction__New_1(NULL);
            break;
        }
        default:
        {
            return NULL;
        }
    }

    ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(xmlNode)->Name(::uPtr< ::app::Uno::Data::Xml::XmlNodeHandle*>(handle)->Name());

    if (::app::Uno::String__op_Inequality(NULL, handle->Value(), NULL))
    {
        ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(xmlNode)->Value(::app::Uno::Data::Xml::XmlValue__New_7(NULL, ::uPtr< ::app::Uno::Data::Xml::XmlNodeHandle*>(handle)->Value()));
    }

    return xmlNode;
}

void XmlNodeHandleConverter__ConvertToXmlNodeTree(::uStatic* __this, ::app::Uno::Data::Xml::XmlLinkedNode* xmlNode, ::app::Uno::Data::Xml::XmlNodeHandle* handle)
{
    if (::uPtr< ::app::Uno::Data::Xml::XmlNodeHandle*>(handle)->NextSibling() != NULL)
    {
        XmlNodeHandleConverter__ConvertToXmlNodeTree(NULL, xmlNode, ::uPtr< ::app::Uno::Data::Xml::XmlNodeHandle*>(handle)->NextSibling());
    }

    ::app::Uno::Data::Xml::XmlLinkedNode* newNode = XmlNodeHandleConverter__ConvertToXmlLinkedNode(NULL, handle);

    if (newNode != NULL)
    {
        ::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(xmlNode)->PrependChild(newNode);

        for (::app::Uno::Collections::List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle enum_123 = ::uPtr< ::app::Uno::Collections::List__Uno_Data_Xml_XmlAttributeHandle*>(::uPtr< ::app::Uno::Data::Xml::XmlNodeHandle*>(handle)->Attributes())->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Uno::Data::Xml::XmlAttributeHandle* attributeHandle = enum_123.Current();
            ::uPtr< ::app::Uno::Data::Xml::XmlAttributeCollection*>(::uPtr< ::app::Uno::Data::Xml::XmlLinkedNode*>(newNode)->Attributes())->Add(::app::Uno::Data::Xml::AttributeHandleConverter__ConvertToXmlAttribute(NULL, attributeHandle));
        }

        if (handle->FirstChild() != NULL)
        {
            XmlNodeHandleConverter__ConvertToXmlNodeTree(NULL, newNode, ::uPtr< ::app::Uno::Data::Xml::XmlNodeHandle*>(handle)->FirstChild());
        }
    }
}

XmlNodeHandleConverter* XmlNodeHandleConverter__New_1(::uStatic* __this)
{
    XmlNodeHandleConverter* inst = (XmlNodeHandleConverter*)::uAllocObject(sizeof(XmlNodeHandleConverter), XmlNodeHandleConverter__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlNodeImpl__uType* XmlNodeImpl__typeof()
{
    static ::uStaticStrong<XmlNodeImpl__uType*> type;
    if (type != NULL) return type;

    type = (XmlNodeImpl__uType*)::uAllocClassType(sizeof(XmlNodeImpl__uType), "Uno.Data.Xml.XmlNodeImpl", false, 0, 0, 0);

    type->SetFunctions(5,
        ::uNewFunctionVoid("AddAttribute", XmlNodeImpl__AddAttribute, 0, true, ::app::Uno::Data::Xml::XmlNodeHandle__typeof(), ::app::Uno::Data::Xml::XmlAttributeHandle__typeof()),
        ::uNewFunctionVoid("AppendChild", XmlNodeImpl__AppendChild, 0, true, ::app::Uno::Data::Xml::XmlNodeHandle__typeof(), ::app::Uno::Data::Xml::XmlNodeHandle__typeof()),
        ::uNewFunction("GenerateXMLTree", XmlNodeImpl__GenerateXMLTree, 0, true, ::app::Uno::Data::Xml::XmlNodeHandle__typeof(), ::app::Uno::Data::Xml::TargetSpecificXmlNode__typeof()),
        ::uNewFunction(".ctor", XmlNodeImpl__New_1, 0, true, XmlNodeImpl__typeof()),
        ::uNewFunction("Parse", XmlNodeImpl__Parse, 0, true, ::app::Uno::Data::Xml::XmlNodeHandle__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlNodeImpl___ObjInit(XmlNodeImpl* __this)
{
}

void XmlNodeImpl__AddAttribute(::uStatic* __this, ::app::Uno::Data::Xml::XmlNodeHandle* handle, ::app::Uno::Data::Xml::XmlAttributeHandle* attrib)
{
    ::uPtr< ::app::Uno::Data::Xml::XmlNodeHandle*>(handle)->AddAttribute(attrib);
}

void XmlNodeImpl__AppendChild(::uStatic* __this, ::app::Uno::Data::Xml::XmlNodeHandle* handle, ::app::Uno::Data::Xml::XmlNodeHandle* child)
{
    ::uPtr< ::app::Uno::Data::Xml::XmlNodeHandle*>(handle)->AppendChild(child);
}

::app::Uno::Data::Xml::XmlNodeHandle* XmlNodeImpl__GenerateXMLTree(::uStatic* __this, void* obj_)
{
    pugi::xml_node node = *((pugi::xml_node*)obj_);
    ::app::Uno::Data::Xml::XmlNodeHandle* nodeHandle;
    
    if (node.type() == pugi::node_declaration)
    {
        return ::app::Uno::Data::Xml::XmlNodeHandle__New_2(NULL, ::uStringFromXliString(node.attribute("version").as_string()), ::uStringFromXliString(node.attribute("encoding").as_string()));
    }
    
    if (node.type() == pugi::node_document)
    {
        //create empty root element
        nodeHandle = ::app::Uno::Data::Xml::XmlNodeHandle__New_1(NULL);
    }
    else
    {
        int mappedNodeType = -1;
        switch(node.type())
        {
            case pugi::node_element:
                mappedNodeType = 3;
                break;
            case pugi::node_pcdata:
                mappedNodeType = 1;
                break;
            case pugi::node_cdata:
                mappedNodeType = 2;
                break;
            case pugi::node_comment:
                mappedNodeType = 5;
                break;
            case pugi::node_pi:
                mappedNodeType = 6;
                break;
        }
    
        nodeHandle = ::app::Uno::Data::Xml::XmlNodeHandle__New_3(NULL, ::uStringFromXliString(node.name()), ::uStringFromXliString(node.value()), mappedNodeType);
        
        for (pugi::xml_attribute_iterator attrib = node.attributes_begin(); attrib != node.attributes_end(); attrib++)
        {
            pugi::xml_attribute attribute = (*attrib);
            ::app::Uno::Data::Xml::XmlAttributeHandle* attributeHandle = ::app::Uno::Data::Xml::XmlAttributeHandle__New_1(NULL, ::uStringFromXliString(attribute.name()), ::uStringFromXliString(attribute.value()));
            ::app::Uno::Data::Xml::XmlNodeImpl__AddAttribute(NULL, nodeHandle, attributeHandle);
        }
    }
    
    for (pugi::xml_node_iterator child = node.children().begin(); child != node.children().end(); child++)
    {
        pugi::xml_node childNode = (*child);
        ::app::Uno::Data::Xml::XmlNodeImpl__AppendChild(NULL, nodeHandle, ::app::Uno::Data::Xml::XmlNodeImpl__GenerateXMLTree(NULL, &(childNode)));
    }
    
    return nodeHandle;
}

XmlNodeImpl* XmlNodeImpl__New_1(::uStatic* __this)
{
    XmlNodeImpl* inst = (XmlNodeImpl*)::uAllocObject(sizeof(XmlNodeImpl), XmlNodeImpl__typeof());
    inst->_ObjInit();
    return inst;
}

::app::Uno::Data::Xml::XmlNodeHandle* XmlNodeImpl__Parse(::uStatic* __this, ::uString* xmlString_)
{
    pugi::xml_document doc;
    pugi::xml_parse_result parseResult = doc.load(::uStringToXliString(xmlString_).Ptr(), pugi::parse_full);
    
    if (parseResult.status == 0)
    {
        pugi::xml_node root = doc.root();
        return ::app::Uno::Data::Xml::XmlNodeImpl__GenerateXMLTree(NULL, &(root));
    }
    else
    {
        char * errorMessages[] = { "No error", "File was not found during load_file()", "Error reading from file/stream", "Could not allocate memory", "Internal error occurred", "Parser could not determine tag type",
                            "Parsing error occurred while parsing document declaration/processing instruction", "Parsing error occurred while parsing comment", "Parsing error occurred while parsing CDATA section",
                            "Parsing error occurred while parsing document type declaration", "Parsing error occurred while parsing PCDATA section", "Parsing error occurred while parsing start element tag",
                            "Parsing error occurred while parsing element attribute", "Parsing error occurred while parsing end element tag", 
                            "There was a mismatch of start-end tags (closing tag had incorrect name, some tag was not closed or there was an excessive closing tag)", 
                            "Unable to append nodes since root type is not node_element or node_document (exclusive to xml_node::append_buffer)", "Parsing resulted in a document without element nodes" };
    
        throw uThrowable(::app::Uno::Data::Xml::XmlException__New_3(NULL, ::uStringFromXliString(errorMessages[parseResult.status])), XLI_FUNCTION, XLI_LINE);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* XmlNodeType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Data.Xml.XmlNodeType", ::app::Uno::Int__typeof(), 8);

    type->SetLiterals(
        "Document", 0LL,
        "Text", 1LL,
        "CharacterData", 2LL,
        "Element", 3LL,
        "Declaration", 4LL,
        "Comment", 5LL,
        "ProcessingInstruction", 6LL,
        "Attribute", 7LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlProcessingInstruction__uType* XmlProcessingInstruction__typeof()
{
    static ::uStaticStrong<XmlProcessingInstruction__uType*> type;
    if (type != NULL) return type;

    type = (XmlProcessingInstruction__uType*)::uAllocClassType(sizeof(XmlProcessingInstruction__uType), "Uno.Data.Xml.XmlProcessingInstruction", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Data::Xml::XmlLinkedNode__typeof());
    type->__fp_CreateNewInstance = (::app::Uno::Data::Xml::XmlLinkedNode*(*)(::app::Uno::Data::Xml::XmlLinkedNode*))XmlProcessingInstruction__CreateNewInstance;
    type->__fp_ToString = (::uString*(*)(::uObject*))XmlProcessingInstruction__ToString;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", XmlProcessingInstruction__New_1, 0, true, XmlProcessingInstruction__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlProcessingInstruction___ObjInit_3(XmlProcessingInstruction* __this)
{
    ::app::Uno::Data::Xml::XmlLinkedNode___ObjInit_2(__this);
    __this->NodeType(6);
}

::app::Uno::Data::Xml::XmlLinkedNode* XmlProcessingInstruction__CreateNewInstance(XmlProcessingInstruction* __this)
{
    return (::app::Uno::Data::Xml::XmlLinkedNode*)XmlProcessingInstruction__New_1(NULL);
}

XmlProcessingInstruction* XmlProcessingInstruction__New_1(::uStatic* __this)
{
    XmlProcessingInstruction* inst = (XmlProcessingInstruction*)::uAllocObject(sizeof(XmlProcessingInstruction), XmlProcessingInstruction__typeof());
    inst->_ObjInit_3();
    return inst;
}

::uString* XmlProcessingInstruction__ToString(XmlProcessingInstruction* __this)
{
    return ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("<?"), __this->Name()), ::uGetConstString(" ")), ::uPtr< ::app::Uno::Data::Xml::XmlValue*>(__this->Value())->AsString()), ::uGetConstString("?>"));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlText__uType* XmlText__typeof()
{
    static ::uStaticStrong<XmlText__uType*> type;
    if (type != NULL) return type;

    type = (XmlText__uType*)::uAllocClassType(sizeof(XmlText__uType), "Uno.Data.Xml.XmlText", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Data::Xml::XmlLinkedNode__typeof());
    type->__fp_CreateNewInstance = (::app::Uno::Data::Xml::XmlLinkedNode*(*)(::app::Uno::Data::Xml::XmlLinkedNode*))XmlText__CreateNewInstance;
    type->__fp_ToString = (::uString*(*)(::uObject*))XmlText__ToString;

    type->SetFunctions(2,
        ::uNewFunction(".ctor", XmlText__New_1, 0, true, XmlText__typeof()),
        ::uNewFunction(".ctor", XmlText__New_2, 0, true, XmlText__typeof(), ::app::Uno::Data::Xml::XmlValue__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlText___ObjInit_3(XmlText* __this)
{
    ::app::Uno::Data::Xml::XmlLinkedNode___ObjInit_2(__this);
    __this->NodeType(1);
}

void XmlText___ObjInit_4(XmlText* __this, ::app::Uno::Data::Xml::XmlValue* value)
{
    __this->_ObjInit_3();
    __this->Value(value);
}

::app::Uno::Data::Xml::XmlLinkedNode* XmlText__CreateNewInstance(XmlText* __this)
{
    return (::app::Uno::Data::Xml::XmlLinkedNode*)XmlText__New_1(NULL);
}

XmlText* XmlText__New_1(::uStatic* __this)
{
    XmlText* inst = (XmlText*)::uAllocObject(sizeof(XmlText), XmlText__typeof());
    inst->_ObjInit_3();
    return inst;
}

XmlText* XmlText__New_2(::uStatic* __this, ::app::Uno::Data::Xml::XmlValue* value)
{
    XmlText* inst = (XmlText*)::uAllocObject(sizeof(XmlText), XmlText__typeof());
    inst->_ObjInit_4(value);
    return inst;
}

::uString* XmlText__ToString(XmlText* __this)
{
    return ::uPtr< ::app::Uno::Data::Xml::XmlValue*>(__this->Value())->AsString();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

XmlValue__uType* XmlValue__typeof()
{
    static ::uStaticStrong<XmlValue__uType*> type;
    if (type != NULL) return type;

    type = (XmlValue__uType*)::uAllocClassType(sizeof(XmlValue__uType), "Uno.Data.Xml.XmlValue", false, 0, 1, 0);

    type->SetStrongRefs(
        "_Value", offsetof(XmlValue, _Value));

    type->SetFunctions(28,
        ::uNewFunction("AsBool", XmlValue__AsBool, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("AsDouble", XmlValue__AsDouble, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("AsFloat", XmlValue__AsFloat, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("AsInt", XmlValue__AsInt, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("AsLong", XmlValue__AsLong, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunction("AsString", XmlValue__AsString, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("BoolParseInternal", XmlValue__BoolParseInternal, 0, false),
        ::uNewFunctionVoid("DoubleParseInternal", XmlValue__DoubleParseInternal, 0, false),
        ::uNewFunctionVoid("FloatParseInternal", XmlValue__FloatParseInternal, 0, false),
        ::uNewFunction("get_Type", XmlValue__get_Type, 0, false, ::app::Uno::Data::Xml::XmlValueType__typeof()),
        ::uNewFunction("get_Value", XmlValue__get_Value, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("IntParseInternal", XmlValue__IntParseInternal, 0, false),
        ::uNewFunctionVoid("LongParseInternal", XmlValue__LongParseInternal, 0, false),
        ::uNewFunction(".ctor", XmlValue__New_1, 0, true, XmlValue__typeof()),
        ::uNewFunction(".ctor", XmlValue__New_2, 0, true, XmlValue__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", XmlValue__New_3, 0, true, XmlValue__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction(".ctor", XmlValue__New_4, 0, true, XmlValue__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", XmlValue__New_5, 0, true, XmlValue__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", XmlValue__New_6, 0, true, XmlValue__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunction(".ctor", XmlValue__New_7, 0, true, XmlValue__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Set", XmlValue__Set, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Set", XmlValue__Set_1, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("Set", XmlValue__Set_2, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("Set", XmlValue__Set_3, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Set", XmlValue__Set_4, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunctionVoid("Set", XmlValue__Set_5, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Value", XmlValue__set_Value, 0, false, ::uObject__typeof()),
        ::uNewFunction("TryParseValue", XmlValue__TryParseValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Action__typeof()));

    ::uRegisterType(type);
    return type;
}

void XmlValue___ObjInit(XmlValue* __this)
{
}

void XmlValue___ObjInit_1(XmlValue* __this, bool value)
{
    __this->Value(::uBox(::app::Uno::Bool__typeof(), value));
}

void XmlValue___ObjInit_2(XmlValue* __this, double value)
{
    __this->Value(::uBox(::app::Uno::Double__typeof(), value));
}

void XmlValue___ObjInit_3(XmlValue* __this, float value)
{
    __this->Value(::uBox(::app::Uno::Float__typeof(), value));
}

void XmlValue___ObjInit_4(XmlValue* __this, int value)
{
    __this->Value(::uBox< int>(::app::Uno::Int__typeof(), value));
}

void XmlValue___ObjInit_5(XmlValue* __this, ::uLong value)
{
    __this->Value(::uBox< ::uLong>(::app::Uno::Long__typeof(), value));
}

void XmlValue___ObjInit_6(XmlValue* __this, ::uString* value)
{
    __this->Value((::uObject*)value);
}

bool XmlValue__AsBool(XmlValue* __this)
{
    if (::uIs(__this->Value(), ::app::Uno::Bool__typeof()))
    {
        return ::uUnbox< bool>(::app::Uno::Bool__typeof(), __this->Value());
    }

    return ::app::Uno::Bool__Parse(NULL, __this->AsString());
}

double XmlValue__AsDouble(XmlValue* __this)
{
    if (::uIs(__this->Value(), ::app::Uno::Double__typeof()))
    {
        return ::uUnbox< double>(::app::Uno::Double__typeof(), __this->Value());
    }

    return ::app::Uno::Double__Parse(NULL, __this->AsString());
}

float XmlValue__AsFloat(XmlValue* __this)
{
    if (::uIs(__this->Value(), ::app::Uno::Float__typeof()))
    {
        return ::uUnbox< float>(::app::Uno::Float__typeof(), __this->Value());
    }

    return ::app::Uno::Float__Parse(NULL, __this->AsString());
}

int XmlValue__AsInt(XmlValue* __this)
{
    if (::uIs(__this->Value(), ::app::Uno::Int__typeof()))
    {
        return ::uUnbox< int>(::app::Uno::Int__typeof(), __this->Value());
    }

    return ::app::Uno::Int__Parse(NULL, __this->AsString());
}

::uLong XmlValue__AsLong(XmlValue* __this)
{
    if (::uIs(__this->Value(), ::app::Uno::Long__typeof()))
    {
        return ::uUnbox< ::uLong>(::app::Uno::Long__typeof(), __this->Value());
    }

    return ::app::Uno::Long__Parse(NULL, __this->AsString());
}

::uString* XmlValue__AsString(XmlValue* __this)
{
    if (::uIs(__this->Value(), ::app::Uno::String__typeof()))
    {
        return ::uAs< ::uString*>(__this->Value(), ::app::Uno::String__typeof());
    }

    return (__this->Value() == NULL) ? (::uString*)NULL : ::app::Uno::Object::ToString(::uPtr< ::uObject*>(__this->Value()));
}

void XmlValue__BoolParseInternal(XmlValue* __this)
{
    ::app::Uno::Bool__Parse(NULL, __this->AsString());
}

void XmlValue__DoubleParseInternal(XmlValue* __this)
{
    ::app::Uno::Double__Parse(NULL, __this->AsString());
}

void XmlValue__FloatParseInternal(XmlValue* __this)
{
    ::app::Uno::Float__Parse(NULL, __this->AsString());
}

int XmlValue__get_Type(XmlValue* __this)
{
    if (::uIs(__this->Value(), ::app::Uno::String__typeof()))
    {
        if (__this->TryParseValue(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)XmlValue__BoolParseInternal, __this)))
        {
            return 0;
        }

        if (__this->TryParseValue(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)XmlValue__IntParseInternal, __this)))
        {
            return 1;
        }

        if (__this->TryParseValue(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)XmlValue__LongParseInternal, __this)))
        {
            return 2;
        }

        if (__this->TryParseValue(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)XmlValue__FloatParseInternal, __this)))
        {
            return 3;
        }

        if (__this->TryParseValue(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)XmlValue__DoubleParseInternal, __this)))
        {
            return 4;
        }
    }
    else
    {
        if (::uIs(__this->Value(), ::app::Uno::Bool__typeof()))
        {
            return 0;
        }

        if (::uIs(__this->Value(), ::app::Uno::Int__typeof()))
        {
            return 1;
        }

        if (::uIs(__this->Value(), ::app::Uno::Long__typeof()))
        {
            return 2;
        }

        if (::uIs(__this->Value(), ::app::Uno::Float__typeof()))
        {
            return 3;
        }

        if (::uIs(__this->Value(), ::app::Uno::Double__typeof()))
        {
            return 4;
        }
    }

    return 5;
}

::uObject* XmlValue__get_Value(XmlValue* __this)
{
    return __this->_Value;
}

void XmlValue__IntParseInternal(XmlValue* __this)
{
    ::app::Uno::Int__Parse(NULL, __this->AsString());
}

void XmlValue__LongParseInternal(XmlValue* __this)
{
    ::app::Uno::Long__Parse(NULL, __this->AsString());
}

XmlValue* XmlValue__New_1(::uStatic* __this)
{
    XmlValue* inst = (XmlValue*)::uAllocObject(sizeof(XmlValue), XmlValue__typeof());
    inst->_ObjInit();
    return inst;
}

XmlValue* XmlValue__New_2(::uStatic* __this, bool value)
{
    XmlValue* inst = (XmlValue*)::uAllocObject(sizeof(XmlValue), XmlValue__typeof());
    inst->_ObjInit_1(value);
    return inst;
}

XmlValue* XmlValue__New_3(::uStatic* __this, double value)
{
    XmlValue* inst = (XmlValue*)::uAllocObject(sizeof(XmlValue), XmlValue__typeof());
    inst->_ObjInit_2(value);
    return inst;
}

XmlValue* XmlValue__New_4(::uStatic* __this, float value)
{
    XmlValue* inst = (XmlValue*)::uAllocObject(sizeof(XmlValue), XmlValue__typeof());
    inst->_ObjInit_3(value);
    return inst;
}

XmlValue* XmlValue__New_5(::uStatic* __this, int value)
{
    XmlValue* inst = (XmlValue*)::uAllocObject(sizeof(XmlValue), XmlValue__typeof());
    inst->_ObjInit_4(value);
    return inst;
}

XmlValue* XmlValue__New_6(::uStatic* __this, ::uLong value)
{
    XmlValue* inst = (XmlValue*)::uAllocObject(sizeof(XmlValue), XmlValue__typeof());
    inst->_ObjInit_5(value);
    return inst;
}

XmlValue* XmlValue__New_7(::uStatic* __this, ::uString* value)
{
    XmlValue* inst = (XmlValue*)::uAllocObject(sizeof(XmlValue), XmlValue__typeof());
    inst->_ObjInit_6(value);
    return inst;
}

bool XmlValue__op_Equality(::uStatic* __this, XmlValue* xt, bool value)
{
    return ::uPtr< XmlValue*>(xt)->AsBool() == value;
}

bool XmlValue__op_Equality_1(::uStatic* __this, XmlValue* xt, double value)
{
    return ::uPtr< XmlValue*>(xt)->AsDouble() == value;
}

bool XmlValue__op_Equality_2(::uStatic* __this, XmlValue* xt, float value)
{
    return ::uPtr< XmlValue*>(xt)->AsFloat() == value;
}

bool XmlValue__op_Equality_3(::uStatic* __this, XmlValue* xt, int value)
{
    return ::uPtr< XmlValue*>(xt)->AsInt() == value;
}

bool XmlValue__op_Equality_4(::uStatic* __this, XmlValue* xt, ::uLong value)
{
    return ::uPtr< XmlValue*>(xt)->AsLong() == value;
}

bool XmlValue__op_Equality_5(::uStatic* __this, XmlValue* xt, ::uString* value)
{
    return ::app::Uno::String__op_Equality(NULL, ::uPtr< XmlValue*>(xt)->AsString(), value);
}

bool XmlValue__op_Inequality(::uStatic* __this, XmlValue* xt, bool value)
{
    return !(::uPtr< XmlValue*>(xt)->AsBool() == value);
}

bool XmlValue__op_Inequality_1(::uStatic* __this, XmlValue* xt, double value)
{
    return !(::uPtr< XmlValue*>(xt)->AsDouble() == value);
}

bool XmlValue__op_Inequality_2(::uStatic* __this, XmlValue* xt, float value)
{
    return !(::uPtr< XmlValue*>(xt)->AsFloat() == value);
}

bool XmlValue__op_Inequality_3(::uStatic* __this, XmlValue* xt, int value)
{
    return !(::uPtr< XmlValue*>(xt)->AsInt() == value);
}

bool XmlValue__op_Inequality_4(::uStatic* __this, XmlValue* xt, ::uLong value)
{
    return !(::uPtr< XmlValue*>(xt)->AsLong() == value);
}

bool XmlValue__op_Inequality_5(::uStatic* __this, XmlValue* xt, ::uString* value)
{
    return !::app::Uno::String__op_Equality(NULL, ::uPtr< XmlValue*>(xt)->AsString(), value);
}

void XmlValue__Set(XmlValue* __this, bool value)
{
    __this->Value(::uBox(::app::Uno::Bool__typeof(), value));
}

void XmlValue__Set_1(XmlValue* __this, double value)
{
    __this->Value(::uBox(::app::Uno::Double__typeof(), value));
}

void XmlValue__Set_2(XmlValue* __this, float value)
{
    __this->Value(::uBox(::app::Uno::Float__typeof(), value));
}

void XmlValue__Set_3(XmlValue* __this, int value)
{
    __this->Value(::uBox< int>(::app::Uno::Int__typeof(), value));
}

void XmlValue__Set_4(XmlValue* __this, ::uLong value)
{
    __this->Value(::uBox< ::uLong>(::app::Uno::Long__typeof(), value));
}

void XmlValue__Set_5(XmlValue* __this, ::uString* value)
{
    __this->Value((::uObject*)value);
}

void XmlValue__set_Value(XmlValue* __this, ::uObject* value)
{
    __this->_Value = value;
}

bool XmlValue__TryParseValue(XmlValue* __this, ::uDelegate* action)
{
    try
    {
        ::uPtr< ::uDelegate*>(action)->InvokeVoid();
        return true;
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* __exception = (::app::Uno::Exception*)__t.Exception;
            return false;
        }
        else
        {
            throw __t;
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* XmlValueType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Data.Xml.XmlValueType", ::app::Uno::Int__typeof(), 6);

    type->SetLiterals(
        "Bool", 0LL,
        "Int", 1LL,
        "Long", 2LL,
        "Float", 3LL,
        "Double", 4LL,
        "String", 5LL);

    ::uRegisterType(type);
    return type;
}

}}}}
