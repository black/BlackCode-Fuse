// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_DRAWING_STATIC_BRUSH_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_DRAWING_STATIC_BRUSH_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct StaticBrush; } } }

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__Fuse_Drawing_StaticBrush;

struct ValueChangedArgs__Fuse_Drawing_StaticBrush__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__Fuse_Drawing_StaticBrush__uType* ValueChangedArgs__Fuse_Drawing_StaticBrush__typeof();

void ValueChangedArgs__Fuse_Drawing_StaticBrush___ObjInit_1(ValueChangedArgs__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value, ::uObject* origin);
::uObject* ValueChangedArgs__Fuse_Drawing_StaticBrush__get_Origin(ValueChangedArgs__Fuse_Drawing_StaticBrush* __this);
::app::Fuse::Drawing::StaticBrush* ValueChangedArgs__Fuse_Drawing_StaticBrush__get_Value(ValueChangedArgs__Fuse_Drawing_StaticBrush* __this);
ValueChangedArgs__Fuse_Drawing_StaticBrush* ValueChangedArgs__Fuse_Drawing_StaticBrush__New_2(::uStatic* __this, ::app::Fuse::Drawing::StaticBrush* value, ::uObject* origin);
void ValueChangedArgs__Fuse_Drawing_StaticBrush__set_Origin(ValueChangedArgs__Fuse_Drawing_StaticBrush* __this, ::uObject* value);
void ValueChangedArgs__Fuse_Drawing_StaticBrush__set_Value(ValueChangedArgs__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value);

struct ValueChangedArgs__Fuse_Drawing_StaticBrush : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Fuse::Drawing::StaticBrush*> _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::app::Fuse::Drawing::StaticBrush* value, ::uObject* origin) { ValueChangedArgs__Fuse_Drawing_StaticBrush___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__Fuse_Drawing_StaticBrush__get_Origin(this); }
    ::app::Fuse::Drawing::StaticBrush* Value() { return ValueChangedArgs__Fuse_Drawing_StaticBrush__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__Fuse_Drawing_StaticBrush__set_Origin(this, value); }
    void Value(::app::Fuse::Drawing::StaticBrush* value) { ValueChangedArgs__Fuse_Drawing_StaticBrush__set_Value(this, value); }
};

}}}


#endif
