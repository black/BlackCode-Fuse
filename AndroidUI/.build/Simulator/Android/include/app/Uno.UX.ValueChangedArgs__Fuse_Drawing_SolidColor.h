// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_DRAWING_SOLID_COLOR_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_DRAWING_SOLID_COLOR_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct SolidColor; } } }

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__Fuse_Drawing_SolidColor;

struct ValueChangedArgs__Fuse_Drawing_SolidColor__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__Fuse_Drawing_SolidColor__uType* ValueChangedArgs__Fuse_Drawing_SolidColor__typeof();

void ValueChangedArgs__Fuse_Drawing_SolidColor___ObjInit_1(ValueChangedArgs__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value, ::uObject* origin);
::uObject* ValueChangedArgs__Fuse_Drawing_SolidColor__get_Origin(ValueChangedArgs__Fuse_Drawing_SolidColor* __this);
::app::Fuse::Drawing::SolidColor* ValueChangedArgs__Fuse_Drawing_SolidColor__get_Value(ValueChangedArgs__Fuse_Drawing_SolidColor* __this);
ValueChangedArgs__Fuse_Drawing_SolidColor* ValueChangedArgs__Fuse_Drawing_SolidColor__New_2(::uStatic* __this, ::app::Fuse::Drawing::SolidColor* value, ::uObject* origin);
void ValueChangedArgs__Fuse_Drawing_SolidColor__set_Origin(ValueChangedArgs__Fuse_Drawing_SolidColor* __this, ::uObject* value);
void ValueChangedArgs__Fuse_Drawing_SolidColor__set_Value(ValueChangedArgs__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value);

struct ValueChangedArgs__Fuse_Drawing_SolidColor : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Fuse::Drawing::SolidColor*> _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::app::Fuse::Drawing::SolidColor* value, ::uObject* origin) { ValueChangedArgs__Fuse_Drawing_SolidColor___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__Fuse_Drawing_SolidColor__get_Origin(this); }
    ::app::Fuse::Drawing::SolidColor* Value() { return ValueChangedArgs__Fuse_Drawing_SolidColor__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__Fuse_Drawing_SolidColor__set_Origin(this, value); }
    void Value(::app::Fuse::Drawing::SolidColor* value) { ValueChangedArgs__Fuse_Drawing_SolidColor__set_Value(this, value); }
};

}}}


#endif
