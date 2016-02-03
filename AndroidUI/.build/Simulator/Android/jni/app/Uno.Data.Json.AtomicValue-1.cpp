#include <app/Uno.Bool.h>
#include <app/Uno.Data.Json.AtomicValue__bool.h>
#include <app/Uno.Data.Json.AtomicValue__double.h>
#include <app/Uno.Data.Json.AtomicValue__string.h>
#include <app/Uno.Double.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Data {
namespace Json {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AtomicValue__bool__uType* AtomicValue__bool__typeof()
{
    static ::uStaticStrong<AtomicValue__bool__uType*> type;
    if (type != NULL) return type;

    type = (AtomicValue__bool__uType*)::uAllocClassType(sizeof(AtomicValue__bool__uType), "Uno.Data.Json.AtomicValue<bool>", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Data::Json::Value__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))AtomicValue__bool__ToString;

    return type;
}

void AtomicValue__bool___ObjInit_1(AtomicValue__bool* __this, bool val)
{
    ::app::Uno::Data::Json::Value___ObjInit(__this);
    __this->_val = val;
}

bool AtomicValue__bool__get_Value(AtomicValue__bool* __this)
{
    return __this->_val;
}

::uString* AtomicValue__bool__ToString(AtomicValue__bool* __this)
{
    return ::app::Uno::Object::ToString(::uBox(::app::Uno::Bool__typeof(), __this->_val));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AtomicValue__double__uType* AtomicValue__double__typeof()
{
    static ::uStaticStrong<AtomicValue__double__uType*> type;
    if (type != NULL) return type;

    type = (AtomicValue__double__uType*)::uAllocClassType(sizeof(AtomicValue__double__uType), "Uno.Data.Json.AtomicValue<double>", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Data::Json::Value__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))AtomicValue__double__ToString;

    return type;
}

void AtomicValue__double___ObjInit_1(AtomicValue__double* __this, double val)
{
    ::app::Uno::Data::Json::Value___ObjInit(__this);
    __this->_val = val;
}

double AtomicValue__double__get_Value(AtomicValue__double* __this)
{
    return __this->_val;
}

::uString* AtomicValue__double__ToString(AtomicValue__double* __this)
{
    return ::app::Uno::Object::ToString(::uBox(::app::Uno::Double__typeof(), __this->_val));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AtomicValue__string__uType* AtomicValue__string__typeof()
{
    static ::uStaticStrong<AtomicValue__string__uType*> type;
    if (type != NULL) return type;

    type = (AtomicValue__string__uType*)::uAllocClassType(sizeof(AtomicValue__string__uType), "Uno.Data.Json.AtomicValue<string>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Data::Json::Value__typeof());
    type->__fp_ToString = (::uString*(*)(::uObject*))AtomicValue__string__ToString;

    type->SetStrongRefs(
        "_val", offsetof(AtomicValue__string, _val));

    return type;
}

void AtomicValue__string___ObjInit_1(AtomicValue__string* __this, ::uString* val)
{
    ::app::Uno::Data::Json::Value___ObjInit(__this);
    __this->_val = val;
}

::uString* AtomicValue__string__get_Value(AtomicValue__string* __this)
{
    return __this->_val;
}

::uString* AtomicValue__string__ToString(AtomicValue__string* __this)
{
    return ::app::Uno::Object::ToString(::uPtr< ::uString*>(__this->_val));
}

}}}}
