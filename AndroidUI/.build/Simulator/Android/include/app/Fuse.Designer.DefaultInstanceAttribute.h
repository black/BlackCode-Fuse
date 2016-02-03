// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DESIGNER_DEFAULT_INSTANCE_ATTRIBUTE_H__
#define __APP_FUSE_DESIGNER_DEFAULT_INSTANCE_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Designer {

struct DefaultInstanceAttribute;

struct DefaultInstanceAttribute__uType : ::app::Uno::Attribute__uType
{
};

DefaultInstanceAttribute__uType* DefaultInstanceAttribute__typeof();

void DefaultInstanceAttribute___ObjInit_1(DefaultInstanceAttribute* __this, ::uString* targetProperty, ::uString* type);
DefaultInstanceAttribute* DefaultInstanceAttribute__New_1(::uStatic* __this, ::uString* targetProperty, ::uString* type);

struct DefaultInstanceAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> TargetProperty;
    ::uStrong< ::uString*> Type;

    void _ObjInit_1(::uString* targetProperty, ::uString* type) { DefaultInstanceAttribute___ObjInit_1(this, targetProperty, type); }
};

}}}


#endif
