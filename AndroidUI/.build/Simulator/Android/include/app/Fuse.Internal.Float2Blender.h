// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_FLOAT2_BLENDER_H__
#define __APP_FUSE_INTERNAL_FLOAT2_BLENDER_H__

#include <app/Fuse.Internal.Blender__float2.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Internal {

struct Float2Blender;

struct Float2Blender__uType : ::app::Fuse::Internal::Blender__float2__uType
{
};

Float2Blender__uType* Float2Blender__typeof();

void Float2Blender___ObjInit_1(Float2Blender* __this);
::app::Uno::Float2 Float2Blender__Add(Float2Blender* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b);
::app::Uno::Float2 Float2Blender__get_One(Float2Blender* __this);
::app::Uno::Float2 Float2Blender__get_Zero(Float2Blender* __this);
double Float2Blender__Length(Float2Blender* __this, ::app::Uno::Float2 a);
::app::Uno::Float2 Float2Blender__Lerp(Float2Blender* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b, double d);
Float2Blender* Float2Blender__New_1(::uStatic* __this);
::app::Uno::Float2 Float2Blender__Sub(Float2Blender* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b);
::app::Uno::Float2 Float2Blender__ToUnit(Float2Blender* __this, ::app::Uno::Float2 a, double* length);
::app::Uno::Float2 Float2Blender__Weight(Float2Blender* __this, ::app::Uno::Float2 v, double w);

struct Float2Blender : ::app::Fuse::Internal::Blender__float2
{
    void _ObjInit_1() { Float2Blender___ObjInit_1(this); }
};

}}}


#endif
