// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_ANIMATIONS_KEYFRAME_INTERPOLATION_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_ANIMATIONS_KEYFRAME_INTERPOLATION_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__Fuse_Animations_KeyframeInterpolation;

struct ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__uType* ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__typeof();

void ValueChangedArgs__Fuse_Animations_KeyframeInterpolation___ObjInit_1(ValueChangedArgs__Fuse_Animations_KeyframeInterpolation* __this, int value, ::uObject* origin);
::uObject* ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__get_Origin(ValueChangedArgs__Fuse_Animations_KeyframeInterpolation* __this);
int ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__get_Value(ValueChangedArgs__Fuse_Animations_KeyframeInterpolation* __this);
ValueChangedArgs__Fuse_Animations_KeyframeInterpolation* ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__New_2(::uStatic* __this, int value, ::uObject* origin);
void ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__set_Origin(ValueChangedArgs__Fuse_Animations_KeyframeInterpolation* __this, ::uObject* value);
void ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__set_Value(ValueChangedArgs__Fuse_Animations_KeyframeInterpolation* __this, int value);

struct ValueChangedArgs__Fuse_Animations_KeyframeInterpolation : ::app::Uno::EventArgs
{
    int _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(int value, ::uObject* origin) { ValueChangedArgs__Fuse_Animations_KeyframeInterpolation___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__get_Origin(this); }
    int Value() { return ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__set_Origin(this, value); }
    void Value(int value) { ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__set_Value(this, value); }
};

}}}


#endif
