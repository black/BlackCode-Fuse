// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DESIGNER_HIDES_ATTRIBUTE_H__
#define __APP_FUSE_DESIGNER_HIDES_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Designer {

struct HidesAttribute;

struct HidesAttribute__uType : ::app::Uno::Attribute__uType
{
};

HidesAttribute__uType* HidesAttribute__typeof();

void HidesAttribute___ObjInit_1(HidesAttribute* __this, ::uString* targetProperty);
HidesAttribute* HidesAttribute__New_1(::uStatic* __this, ::uString* targetProperty);

struct HidesAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> TargetProperty;

    void _ObjInit_1(::uString* targetProperty) { HidesAttribute___ObjInit_1(this, targetProperty); }
};

}}}


#endif
