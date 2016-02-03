// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_XML_VALUE_H__
#define __APP_UNO_DATA_XML_XML_VALUE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct XmlValue;

struct XmlValue__uType : ::uClassType
{
};

XmlValue__uType* XmlValue__typeof();

void XmlValue___ObjInit(XmlValue* __this);
void XmlValue___ObjInit_1(XmlValue* __this, bool value);
void XmlValue___ObjInit_2(XmlValue* __this, double value);
void XmlValue___ObjInit_3(XmlValue* __this, float value);
void XmlValue___ObjInit_4(XmlValue* __this, int value);
void XmlValue___ObjInit_5(XmlValue* __this, ::uLong value);
void XmlValue___ObjInit_6(XmlValue* __this, ::uString* value);
bool XmlValue__AsBool(XmlValue* __this);
double XmlValue__AsDouble(XmlValue* __this);
float XmlValue__AsFloat(XmlValue* __this);
int XmlValue__AsInt(XmlValue* __this);
::uLong XmlValue__AsLong(XmlValue* __this);
::uString* XmlValue__AsString(XmlValue* __this);
void XmlValue__BoolParseInternal(XmlValue* __this);
void XmlValue__DoubleParseInternal(XmlValue* __this);
void XmlValue__FloatParseInternal(XmlValue* __this);
int XmlValue__get_Type(XmlValue* __this);
::uObject* XmlValue__get_Value(XmlValue* __this);
void XmlValue__IntParseInternal(XmlValue* __this);
void XmlValue__LongParseInternal(XmlValue* __this);
XmlValue* XmlValue__New_1(::uStatic* __this);
XmlValue* XmlValue__New_2(::uStatic* __this, bool value);
XmlValue* XmlValue__New_3(::uStatic* __this, double value);
XmlValue* XmlValue__New_4(::uStatic* __this, float value);
XmlValue* XmlValue__New_5(::uStatic* __this, int value);
XmlValue* XmlValue__New_6(::uStatic* __this, ::uLong value);
XmlValue* XmlValue__New_7(::uStatic* __this, ::uString* value);
bool XmlValue__op_Equality(::uStatic* __this, XmlValue* xt, bool value);
bool XmlValue__op_Equality_1(::uStatic* __this, XmlValue* xt, double value);
bool XmlValue__op_Equality_2(::uStatic* __this, XmlValue* xt, float value);
bool XmlValue__op_Equality_3(::uStatic* __this, XmlValue* xt, int value);
bool XmlValue__op_Equality_4(::uStatic* __this, XmlValue* xt, ::uLong value);
bool XmlValue__op_Equality_5(::uStatic* __this, XmlValue* xt, ::uString* value);
bool XmlValue__op_Inequality(::uStatic* __this, XmlValue* xt, bool value);
bool XmlValue__op_Inequality_1(::uStatic* __this, XmlValue* xt, double value);
bool XmlValue__op_Inequality_2(::uStatic* __this, XmlValue* xt, float value);
bool XmlValue__op_Inequality_3(::uStatic* __this, XmlValue* xt, int value);
bool XmlValue__op_Inequality_4(::uStatic* __this, XmlValue* xt, ::uLong value);
bool XmlValue__op_Inequality_5(::uStatic* __this, XmlValue* xt, ::uString* value);
void XmlValue__Set(XmlValue* __this, bool value);
void XmlValue__Set_1(XmlValue* __this, double value);
void XmlValue__Set_2(XmlValue* __this, float value);
void XmlValue__Set_3(XmlValue* __this, int value);
void XmlValue__Set_4(XmlValue* __this, ::uLong value);
void XmlValue__Set_5(XmlValue* __this, ::uString* value);
void XmlValue__set_Value(XmlValue* __this, ::uObject* value);
bool XmlValue__TryParseValue(XmlValue* __this, ::uDelegate* action);

struct XmlValue : ::uObject
{
    ::uStrong< ::uObject*> _Value;

    void _ObjInit() { XmlValue___ObjInit(this); }
    void _ObjInit_1(bool value) { XmlValue___ObjInit_1(this, value); }
    void _ObjInit_2(double value) { XmlValue___ObjInit_2(this, value); }
    void _ObjInit_3(float value) { XmlValue___ObjInit_3(this, value); }
    void _ObjInit_4(int value) { XmlValue___ObjInit_4(this, value); }
    void _ObjInit_5(::uLong value) { XmlValue___ObjInit_5(this, value); }
    void _ObjInit_6(::uString* value) { XmlValue___ObjInit_6(this, value); }
    bool AsBool() { return XmlValue__AsBool(this); }
    double AsDouble() { return XmlValue__AsDouble(this); }
    float AsFloat() { return XmlValue__AsFloat(this); }
    int AsInt() { return XmlValue__AsInt(this); }
    ::uLong AsLong() { return XmlValue__AsLong(this); }
    ::uString* AsString() { return XmlValue__AsString(this); }
    void BoolParseInternal() { XmlValue__BoolParseInternal(this); }
    void DoubleParseInternal() { XmlValue__DoubleParseInternal(this); }
    void FloatParseInternal() { XmlValue__FloatParseInternal(this); }
    int Type() { return XmlValue__get_Type(this); }
    ::uObject* Value() { return XmlValue__get_Value(this); }
    void IntParseInternal() { XmlValue__IntParseInternal(this); }
    void LongParseInternal() { XmlValue__LongParseInternal(this); }
    void Set(bool value) { XmlValue__Set(this, value); }
    void Set_1(double value) { XmlValue__Set_1(this, value); }
    void Set_2(float value) { XmlValue__Set_2(this, value); }
    void Set_3(int value) { XmlValue__Set_3(this, value); }
    void Set_4(::uLong value) { XmlValue__Set_4(this, value); }
    void Set_5(::uString* value) { XmlValue__Set_5(this, value); }
    void Value(::uObject* value) { XmlValue__set_Value(this, value); }
    bool TryParseValue(::uDelegate* action) { return XmlValue__TryParseValue(this, action); }
};

}}}}


#endif
