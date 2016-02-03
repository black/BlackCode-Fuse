// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_DRAWING_GRADIENT_STOP_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_DRAWING_GRADIENT_STOP_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__Fuse_Drawing_GradientStop;

struct ValueChangedArgs__Fuse_Drawing_GradientStop__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__Fuse_Drawing_GradientStop__uType* ValueChangedArgs__Fuse_Drawing_GradientStop__typeof();

void ValueChangedArgs__Fuse_Drawing_GradientStop___ObjInit_1(ValueChangedArgs__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* value, ::uObject* origin);
::uObject* ValueChangedArgs__Fuse_Drawing_GradientStop__get_Origin(ValueChangedArgs__Fuse_Drawing_GradientStop* __this);
::app::Fuse::Drawing::GradientStop* ValueChangedArgs__Fuse_Drawing_GradientStop__get_Value(ValueChangedArgs__Fuse_Drawing_GradientStop* __this);
ValueChangedArgs__Fuse_Drawing_GradientStop* ValueChangedArgs__Fuse_Drawing_GradientStop__New_2(::uStatic* __this, ::app::Fuse::Drawing::GradientStop* value, ::uObject* origin);
void ValueChangedArgs__Fuse_Drawing_GradientStop__set_Origin(ValueChangedArgs__Fuse_Drawing_GradientStop* __this, ::uObject* value);
void ValueChangedArgs__Fuse_Drawing_GradientStop__set_Value(ValueChangedArgs__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* value);

struct ValueChangedArgs__Fuse_Drawing_GradientStop : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Fuse::Drawing::GradientStop*> _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::app::Fuse::Drawing::GradientStop* value, ::uObject* origin) { ValueChangedArgs__Fuse_Drawing_GradientStop___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__Fuse_Drawing_GradientStop__get_Origin(this); }
    ::app::Fuse::Drawing::GradientStop* Value() { return ValueChangedArgs__Fuse_Drawing_GradientStop__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__Fuse_Drawing_GradientStop__set_Origin(this, value); }
    void Value(::app::Fuse::Drawing::GradientStop* value) { ValueChangedArgs__Fuse_Drawing_GradientStop__set_Value(this, value); }
};

}}}


#endif
