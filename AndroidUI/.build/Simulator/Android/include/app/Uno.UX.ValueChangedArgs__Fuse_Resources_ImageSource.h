// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_UNO_U_X_VALUE_CHANGED_ARGS__FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }

namespace app {
namespace Uno {
namespace UX {

struct ValueChangedArgs__Fuse_Resources_ImageSource;

struct ValueChangedArgs__Fuse_Resources_ImageSource__uType : ::app::Uno::EventArgs__uType
{
};

ValueChangedArgs__Fuse_Resources_ImageSource__uType* ValueChangedArgs__Fuse_Resources_ImageSource__typeof();

void ValueChangedArgs__Fuse_Resources_ImageSource___ObjInit_1(ValueChangedArgs__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value, ::uObject* origin);
::uObject* ValueChangedArgs__Fuse_Resources_ImageSource__get_Origin(ValueChangedArgs__Fuse_Resources_ImageSource* __this);
::app::Fuse::Resources::ImageSource* ValueChangedArgs__Fuse_Resources_ImageSource__get_Value(ValueChangedArgs__Fuse_Resources_ImageSource* __this);
ValueChangedArgs__Fuse_Resources_ImageSource* ValueChangedArgs__Fuse_Resources_ImageSource__New_2(::uStatic* __this, ::app::Fuse::Resources::ImageSource* value, ::uObject* origin);
void ValueChangedArgs__Fuse_Resources_ImageSource__set_Origin(ValueChangedArgs__Fuse_Resources_ImageSource* __this, ::uObject* value);
void ValueChangedArgs__Fuse_Resources_ImageSource__set_Value(ValueChangedArgs__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value);

struct ValueChangedArgs__Fuse_Resources_ImageSource : ::app::Uno::EventArgs
{
    ::uStrong< ::app::Fuse::Resources::ImageSource*> _Value;
    ::uStrong< ::uObject*> _Origin;

    void _ObjInit_1(::app::Fuse::Resources::ImageSource* value, ::uObject* origin) { ValueChangedArgs__Fuse_Resources_ImageSource___ObjInit_1(this, value, origin); }
    ::uObject* Origin() { return ValueChangedArgs__Fuse_Resources_ImageSource__get_Origin(this); }
    ::app::Fuse::Resources::ImageSource* Value() { return ValueChangedArgs__Fuse_Resources_ImageSource__get_Value(this); }
    void Origin(::uObject* value) { ValueChangedArgs__Fuse_Resources_ImageSource__set_Origin(this, value); }
    void Value(::app::Fuse::Resources::ImageSource* value) { ValueChangedArgs__Fuse_Resources_ImageSource__set_Value(this, value); }
};

}}}


#endif
