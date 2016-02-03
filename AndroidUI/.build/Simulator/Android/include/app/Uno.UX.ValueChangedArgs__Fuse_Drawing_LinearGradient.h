// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_DRAWING_LINEAR_GRADIENT_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_DRAWING_LINEAR_GRADIENT_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct LinearGradient; } } }

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__Fuse_Drawing_LinearGradient;

struct ValueChangedArgs__Fuse_Drawing_LinearGradient__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__Fuse_Drawing_LinearGradient__uType* ValueChangedArgs__Fuse_Drawing_LinearGradient__typeof();

void ValueChangedArgs__Fuse_Drawing_LinearGradient___ObjInit_1(ValueChangedArgs__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value, ::uObject* origin);
::uObject* ValueChangedArgs__Fuse_Drawing_LinearGradient__get_Origin(ValueChangedArgs__Fuse_Drawing_LinearGradient* __this);
::app::Fuse::Drawing::LinearGradient* ValueChangedArgs__Fuse_Drawing_LinearGradient__get_Value(ValueChangedArgs__Fuse_Drawing_LinearGradient* __this);
ValueChangedArgs__Fuse_Drawing_LinearGradient* ValueChangedArgs__Fuse_Drawing_LinearGradient__New_2(::uStatic* __this, ::app::Fuse::Drawing::LinearGradient* value, ::uObject* origin);
void ValueChangedArgs__Fuse_Drawing_LinearGradient__set_Origin(ValueChangedArgs__Fuse_Drawing_LinearGradient* __this, ::uObject* value);
void ValueChangedArgs__Fuse_Drawing_LinearGradient__set_Value(ValueChangedArgs__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value);

struct ValueChangedArgs__Fuse_Drawing_LinearGradient : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Fuse::Drawing::LinearGradient*> _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::app::Fuse::Drawing::LinearGradient* value, ::uObject* origin) { ValueChangedArgs__Fuse_Drawing_LinearGradient___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__Fuse_Drawing_LinearGradient__get_Origin(this); }
    ::app::Fuse::Drawing::LinearGradient* Value() { return ValueChangedArgs__Fuse_Drawing_LinearGradient__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__Fuse_Drawing_LinearGradient__set_Origin(this, value); }
    void Value(::app::Fuse::Drawing::LinearGradient* value) { ValueChangedArgs__Fuse_Drawing_LinearGradient__set_Value(this, value); }
};

}}}


#endif
