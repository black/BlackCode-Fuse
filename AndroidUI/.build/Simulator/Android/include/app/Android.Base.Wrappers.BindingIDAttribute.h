// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_BASE_WRAPPERS_BINDING_I_D_ATTRIBUTE_H__
#define __APP_ANDROID_BASE_WRAPPERS_BINDING_I_D_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Base {
namespace Wrappers {

struct BindingIDAttribute;

struct BindingIDAttribute__uType : ::app::Uno::Attribute__uType
{
};

BindingIDAttribute__uType* BindingIDAttribute__typeof();

void BindingIDAttribute___ObjInit_1(BindingIDAttribute* __this, ::uString* id);
BindingIDAttribute* BindingIDAttribute__New_1(::uStatic* __this, ::uString* id);

struct BindingIDAttribute : ::app::Uno::Attribute
{
    void _ObjInit_1(::uString* id) { BindingIDAttribute___ObjInit_1(this, id); }
};

}}}}


#endif
