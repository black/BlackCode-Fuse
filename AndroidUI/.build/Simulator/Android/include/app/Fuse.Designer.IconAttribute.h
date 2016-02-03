// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DESIGNER_ICON_ATTRIBUTE_H__
#define __APP_FUSE_DESIGNER_ICON_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Designer {

struct IconAttribute;

struct IconAttribute__uType : ::app::Uno::Attribute__uType
{
};

IconAttribute__uType* IconAttribute__typeof();

void IconAttribute___ObjInit_1(IconAttribute* __this, ::uString* path);
IconAttribute* IconAttribute__New_1(::uStatic* __this, ::uString* path);

struct IconAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> Path;

    void _ObjInit_1(::uString* path) { IconAttribute___ObjInit_1(this, path); }
};

}}}


#endif
