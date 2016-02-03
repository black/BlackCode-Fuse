// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DESIGNER_REQUIRED_COMPONENT_ATTRIBUTE_H__
#define __APP_FUSE_DESIGNER_REQUIRED_COMPONENT_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Designer {

struct RequiredComponentAttribute;

struct RequiredComponentAttribute__uType : ::app::Uno::Attribute__uType
{
};

RequiredComponentAttribute__uType* RequiredComponentAttribute__typeof();

void RequiredComponentAttribute___ObjInit_1(RequiredComponentAttribute* __this, ::uString* componentClass);
RequiredComponentAttribute* RequiredComponentAttribute__New_1(::uStatic* __this, ::uString* componentClass);

struct RequiredComponentAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> ComponentClass;

    void _ObjInit_1(::uString* componentClass) { RequiredComponentAttribute___ObjInit_1(this, componentClass); }
};

}}}


#endif
