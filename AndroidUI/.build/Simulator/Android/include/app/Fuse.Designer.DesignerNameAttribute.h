// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DESIGNER_DESIGNER_NAME_ATTRIBUTE_H__
#define __APP_FUSE_DESIGNER_DESIGNER_NAME_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Designer {

struct DesignerNameAttribute;

struct DesignerNameAttribute__uType : ::app::Uno::Attribute__uType
{
};

DesignerNameAttribute__uType* DesignerNameAttribute__typeof();

void DesignerNameAttribute___ObjInit_1(DesignerNameAttribute* __this, ::uString* name);
DesignerNameAttribute* DesignerNameAttribute__New_1(::uStatic* __this, ::uString* name);

struct DesignerNameAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> Name;

    void _ObjInit_1(::uString* name) { DesignerNameAttribute___ObjInit_1(this, name); }
};

}}}


#endif
