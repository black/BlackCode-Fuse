// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_DRAWING_DYNAMIC_BRUSH_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_DRAWING_DYNAMIC_BRUSH_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_DynamicBrush.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Drawing_DynamicBrush; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_DynamicBrush; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Drawing_DynamicBrush;

struct AverageMasterProperty__Fuse_Drawing_DynamicBrush__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Drawing_DynamicBrush__uType
{
};

AverageMasterProperty__Fuse_Drawing_DynamicBrush__uType* AverageMasterProperty__Fuse_Drawing_DynamicBrush__typeof();

void AverageMasterProperty__Fuse_Drawing_DynamicBrush___ObjInit_2(AverageMasterProperty__Fuse_Drawing_DynamicBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Drawing_DynamicBrush* AverageMasterProperty__Fuse_Drawing_DynamicBrush__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Drawing_DynamicBrush__OnActive(AverageMasterProperty__Fuse_Drawing_DynamicBrush* __this);
void AverageMasterProperty__Fuse_Drawing_DynamicBrush__OnComplete(AverageMasterProperty__Fuse_Drawing_DynamicBrush* __this);

struct AverageMasterProperty__Fuse_Drawing_DynamicBrush : ::app::Fuse::Animations::MasterProperty__Fuse_Drawing_DynamicBrush
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Drawing_DynamicBrush*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Drawing_DynamicBrush___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
