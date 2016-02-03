// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_FLOAT3_BLENDER_H__
#define __APP_FUSE_INTERNAL_FLOAT3_BLENDER_H__

#include <app/Fuse.Internal.Blender__float3.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Internal {

struct Float3Blender;

struct Float3Blender__uType : ::app::Fuse::Internal::Blender__float3__uType
{
};

Float3Blender__uType* Float3Blender__typeof();

void Float3Blender___ObjInit_1(Float3Blender* __this);
::app::Uno::Float3 Float3Blender__Add(Float3Blender* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b);
::app::Uno::Float3 Float3Blender__get_One(Float3Blender* __this);
::app::Uno::Float3 Float3Blender__get_Zero(Float3Blender* __this);
double Float3Blender__Length(Float3Blender* __this, ::app::Uno::Float3 a);
::app::Uno::Float3 Float3Blender__Lerp(Float3Blender* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, double d);
Float3Blender* Float3Blender__New_1(::uStatic* __this);
::app::Uno::Float3 Float3Blender__Sub(Float3Blender* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b);
::app::Uno::Float3 Float3Blender__ToUnit(Float3Blender* __this, ::app::Uno::Float3 a, double* length);
::app::Uno::Float3 Float3Blender__Weight(Float3Blender* __this, ::app::Uno::Float3 v, double w);

struct Float3Blender : ::app::Fuse::Internal::Blender__float3
{
    void _ObjInit_1() { Float3Blender___ObjInit_1(this); }
};

}}}


#endif
