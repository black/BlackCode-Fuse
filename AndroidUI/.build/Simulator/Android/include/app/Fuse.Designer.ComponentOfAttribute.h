// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DESIGNER_COMPONENT_OF_ATTRIBUTE_H__
#define __APP_FUSE_DESIGNER_COMPONENT_OF_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Designer {

struct ComponentOfAttribute;

struct ComponentOfAttribute__uType : ::app::Uno::Attribute__uType
{
};

ComponentOfAttribute__uType* ComponentOfAttribute__typeof();

void ComponentOfAttribute___ObjInit_1(ComponentOfAttribute* __this, ::uString* entityClass);
ComponentOfAttribute* ComponentOfAttribute__New_1(::uStatic* __this, ::uString* entityClass);

struct ComponentOfAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> EntityClass;

    void _ObjInit_1(::uString* entityClass) { ComponentOfAttribute___ObjInit_1(this, entityClass); }
};

}}}


#endif
