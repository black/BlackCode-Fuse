// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_DRAWING_GRADIENT_STOP_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_DRAWING_GRADIENT_STOP_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Drawing_GradientStop.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_GradientStop; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Drawing_GradientStop;

struct MasterProperty__Fuse_Drawing_GradientStop__uType : ::app::Fuse::Animations::MasterBase__Fuse_Drawing_GradientStop__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Drawing_GradientStop__uType* MasterProperty__Fuse_Drawing_GradientStop__typeof();

void MasterProperty__Fuse_Drawing_GradientStop___ObjInit_1(MasterProperty__Fuse_Drawing_GradientStop* __this, ::app::Uno::UX::Property__Fuse_Drawing_GradientStop* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Drawing::GradientStop* MasterProperty__Fuse_Drawing_GradientStop__get_RestValue(MasterProperty__Fuse_Drawing_GradientStop* __this);
::uObject* MasterProperty__Fuse_Drawing_GradientStop__GetPropertyObject(MasterProperty__Fuse_Drawing_GradientStop* __this);
void MasterProperty__Fuse_Drawing_GradientStop__OnInactive(MasterProperty__Fuse_Drawing_GradientStop* __this);

struct MasterProperty__Fuse_Drawing_GradientStop : ::app::Fuse::Animations::MasterBase__Fuse_Drawing_GradientStop
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Drawing_GradientStop*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Drawing_GradientStop* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Drawing_GradientStop___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Drawing_GradientStop__GetPropertyObject(this); }
};

}}}


#endif
