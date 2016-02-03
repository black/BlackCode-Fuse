// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DESIGNER_GROUP_ATTRIBUTE_H__
#define __APP_FUSE_DESIGNER_GROUP_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Designer {

struct GroupAttribute;

struct GroupAttribute__uType : ::app::Uno::Attribute__uType
{
};

GroupAttribute__uType* GroupAttribute__typeof();

void GroupAttribute___ObjInit_1(GroupAttribute* __this, ::uString* name, int priority);
GroupAttribute* GroupAttribute__New_1(::uStatic* __this, ::uString* name, int priority);

struct GroupAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> Name;
    int Priority;

    void _ObjInit_1(::uString* name, int priority) { GroupAttribute___ObjInit_1(this, name, priority); }
};

}}}


#endif
