// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_FONT_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_FONT_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Font; } }

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__Fuse_Font;

struct ValueChangedArgs__Fuse_Font__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__Fuse_Font__uType* ValueChangedArgs__Fuse_Font__typeof();

void ValueChangedArgs__Fuse_Font___ObjInit_1(ValueChangedArgs__Fuse_Font* __this, ::app::Fuse::Font* value, ::uObject* origin);
::uObject* ValueChangedArgs__Fuse_Font__get_Origin(ValueChangedArgs__Fuse_Font* __this);
::app::Fuse::Font* ValueChangedArgs__Fuse_Font__get_Value(ValueChangedArgs__Fuse_Font* __this);
ValueChangedArgs__Fuse_Font* ValueChangedArgs__Fuse_Font__New_2(::uStatic* __this, ::app::Fuse::Font* value, ::uObject* origin);
void ValueChangedArgs__Fuse_Font__set_Origin(ValueChangedArgs__Fuse_Font* __this, ::uObject* value);
void ValueChangedArgs__Fuse_Font__set_Value(ValueChangedArgs__Fuse_Font* __this, ::app::Fuse::Font* value);

struct ValueChangedArgs__Fuse_Font : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Fuse::Font*> _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::app::Fuse::Font* value, ::uObject* origin) { ValueChangedArgs__Fuse_Font___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__Fuse_Font__get_Origin(this); }
    ::app::Fuse::Font* Value() { return ValueChangedArgs__Fuse_Font__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__Fuse_Font__set_Origin(this, value); }
    void Value(::app::Fuse::Font* value) { ValueChangedArgs__Fuse_Font__set_Value(this, value); }
};

}}}


#endif
