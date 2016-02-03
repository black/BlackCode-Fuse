// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_DRAWING_DYNAMIC_BRUSH_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_DRAWING_DYNAMIC_BRUSH_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct DynamicBrush; } } }

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__Fuse_Drawing_DynamicBrush;

struct ValueChangedArgs__Fuse_Drawing_DynamicBrush__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__Fuse_Drawing_DynamicBrush__uType* ValueChangedArgs__Fuse_Drawing_DynamicBrush__typeof();

void ValueChangedArgs__Fuse_Drawing_DynamicBrush___ObjInit_1(ValueChangedArgs__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Drawing::DynamicBrush* value, ::uObject* origin);
::uObject* ValueChangedArgs__Fuse_Drawing_DynamicBrush__get_Origin(ValueChangedArgs__Fuse_Drawing_DynamicBrush* __this);
::app::Fuse::Drawing::DynamicBrush* ValueChangedArgs__Fuse_Drawing_DynamicBrush__get_Value(ValueChangedArgs__Fuse_Drawing_DynamicBrush* __this);
ValueChangedArgs__Fuse_Drawing_DynamicBrush* ValueChangedArgs__Fuse_Drawing_DynamicBrush__New_2(::uStatic* __this, ::app::Fuse::Drawing::DynamicBrush* value, ::uObject* origin);
void ValueChangedArgs__Fuse_Drawing_DynamicBrush__set_Origin(ValueChangedArgs__Fuse_Drawing_DynamicBrush* __this, ::uObject* value);
void ValueChangedArgs__Fuse_Drawing_DynamicBrush__set_Value(ValueChangedArgs__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Drawing::DynamicBrush* value);

struct ValueChangedArgs__Fuse_Drawing_DynamicBrush : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Fuse::Drawing::DynamicBrush*> _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::app::Fuse::Drawing::DynamicBrush* value, ::uObject* origin) { ValueChangedArgs__Fuse_Drawing_DynamicBrush___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__Fuse_Drawing_DynamicBrush__get_Origin(this); }
    ::app::Fuse::Drawing::DynamicBrush* Value() { return ValueChangedArgs__Fuse_Drawing_DynamicBrush__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__Fuse_Drawing_DynamicBrush__set_Origin(this, value); }
    void Value(::app::Fuse::Drawing::DynamicBrush* value) { ValueChangedArgs__Fuse_Drawing_DynamicBrush__set_Value(this, value); }
};

}}}


#endif
