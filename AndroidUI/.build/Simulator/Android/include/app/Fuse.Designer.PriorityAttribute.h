// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DESIGNER_PRIORITY_ATTRIBUTE_H__
#define __APP_FUSE_DESIGNER_PRIORITY_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Designer {

struct PriorityAttribute;

struct PriorityAttribute__uType : ::app::Uno::Attribute__uType
{
};

PriorityAttribute__uType* PriorityAttribute__typeof();

void PriorityAttribute___ObjInit_1(PriorityAttribute* __this, int Priority);
PriorityAttribute* PriorityAttribute__New_1(::uStatic* __this, int Priority);

struct PriorityAttribute : ::app::Uno::Attribute
{
    int Priority;

    void _ObjInit_1(int Priority) { PriorityAttribute___ObjInit_1(this, Priority); }
};

}}}


#endif
