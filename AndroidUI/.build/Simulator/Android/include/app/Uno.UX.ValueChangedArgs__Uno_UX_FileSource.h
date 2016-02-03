// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__UNO_U_X_FILE_SOURCE_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__UNO_U_X_FILE_SOURCE_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__Uno_UX_FileSource;

struct ValueChangedArgs__Uno_UX_FileSource__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__Uno_UX_FileSource__uType* ValueChangedArgs__Uno_UX_FileSource__typeof();

void ValueChangedArgs__Uno_UX_FileSource___ObjInit_1(ValueChangedArgs__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value, ::uObject* origin);
::uObject* ValueChangedArgs__Uno_UX_FileSource__get_Origin(ValueChangedArgs__Uno_UX_FileSource* __this);
::app::Uno::UX::FileSource* ValueChangedArgs__Uno_UX_FileSource__get_Value(ValueChangedArgs__Uno_UX_FileSource* __this);
ValueChangedArgs__Uno_UX_FileSource* ValueChangedArgs__Uno_UX_FileSource__New_2(::uStatic* __this, ::app::Uno::UX::FileSource* value, ::uObject* origin);
void ValueChangedArgs__Uno_UX_FileSource__set_Origin(ValueChangedArgs__Uno_UX_FileSource* __this, ::uObject* value);
void ValueChangedArgs__Uno_UX_FileSource__set_Value(ValueChangedArgs__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value);

struct ValueChangedArgs__Uno_UX_FileSource : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Uno::UX::FileSource*> _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::app::Uno::UX::FileSource* value, ::uObject* origin) { ValueChangedArgs__Uno_UX_FileSource___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__Uno_UX_FileSource__get_Origin(this); }
    ::app::Uno::UX::FileSource* Value() { return ValueChangedArgs__Uno_UX_FileSource__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__Uno_UX_FileSource__set_Origin(this, value); }
    void Value(::app::Uno::UX::FileSource* value) { ValueChangedArgs__Uno_UX_FileSource__set_Value(this, value); }
};

}}}


#endif
