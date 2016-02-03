// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Helpers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_VALIDATION_HELPER_H__
#define __APP_UNO_DATA_XML_VALIDATION_HELPER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlAttribute; } } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlLinkedNode; } } } }

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct ValidationHelper;

struct ValidationHelper__uType : ::uClassType
{
};

ValidationHelper__uType* ValidationHelper__typeof();

void ValidationHelper___ObjInit(ValidationHelper* __this);
bool ValidationHelper__IsChildAlreadyExists(::uStatic* __this, ::app::Uno::Data::Xml::XmlLinkedNode* owner, int nodeType);
ValidationHelper* ValidationHelper__New_1(::uStatic* __this);
void ValidationHelper__ValidateAttributeAdding(::uStatic* __this, ::app::Uno::Data::Xml::XmlLinkedNode* owner, ::app::Uno::Data::Xml::XmlAttribute* item);
void ValidationHelper__ValidateNodeAdding(::uStatic* __this, ::app::Uno::Data::Xml::XmlLinkedNode* owner, ::app::Uno::Data::Xml::XmlLinkedNode* item);

struct ValidationHelper : ::uObject
{
    void _ObjInit() { ValidationHelper___ObjInit(this); }
};

}}}}


#endif
