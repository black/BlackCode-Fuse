// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Designer\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DESIGNER_SPAWNS_ATTRIBUTE_H__
#define __APP_FUSE_DESIGNER_SPAWNS_ATTRIBUTE_H__

#include <app/Uno.Attribute.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Designer {

struct SpawnsAttribute;

struct SpawnsAttribute__uType : ::app::Uno::Attribute__uType
{
};

SpawnsAttribute__uType* SpawnsAttribute__typeof();

void SpawnsAttribute___ObjInit_1(SpawnsAttribute* __this, ::uString* sourceType, ::uString* targetProperty);
SpawnsAttribute* SpawnsAttribute__New_1(::uStatic* __this, ::uString* sourceType, ::uString* targetProperty);

struct SpawnsAttribute : ::app::Uno::Attribute
{
    ::uStrong< ::uString*> SourceType;
    ::uStrong< ::uString*> TargetProperty;

    void _ObjInit_1(::uString* sourceType, ::uString* targetProperty) { SpawnsAttribute___ObjInit_1(this, sourceType, targetProperty); }
};

}}}


#endif
