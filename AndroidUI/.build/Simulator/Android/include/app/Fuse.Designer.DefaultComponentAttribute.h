// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DESIGNER_DEFAULT_COMPONENT_ATTRIBUTE_H__
#define __APP_FUSE_DESIGNER_DEFAULT_COMPONENT_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Designer {

struct DefaultComponentAttribute;

struct DefaultComponentAttribute__uType : ::app::Uno::Attribute__uType
{
};

DefaultComponentAttribute__uType* DefaultComponentAttribute__typeof();

void DefaultComponentAttribute___ObjInit_1(DefaultComponentAttribute* __this, ::uString* componentClass);
DefaultComponentAttribute* DefaultComponentAttribute__New_1(::uStatic* __this, ::uString* componentClass);

struct DefaultComponentAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> ComponentClass;

    void _ObjInit_1(::uString* componentClass) { DefaultComponentAttribute___ObjInit_1(this, componentClass); }
};

}}}


#endif
