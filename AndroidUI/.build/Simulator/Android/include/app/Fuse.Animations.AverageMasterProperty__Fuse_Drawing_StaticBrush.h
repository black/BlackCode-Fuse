// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_DRAWING_STATIC_BRUSH_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_DRAWING_STATIC_BRUSH_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_StaticBrush.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Drawing_StaticBrush; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_StaticBrush; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Drawing_StaticBrush;

struct AverageMasterProperty__Fuse_Drawing_StaticBrush__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Drawing_StaticBrush__uType
{
};

AverageMasterProperty__Fuse_Drawing_StaticBrush__uType* AverageMasterProperty__Fuse_Drawing_StaticBrush__typeof();

void AverageMasterProperty__Fuse_Drawing_StaticBrush___ObjInit_2(AverageMasterProperty__Fuse_Drawing_StaticBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Drawing_StaticBrush* AverageMasterProperty__Fuse_Drawing_StaticBrush__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Drawing_StaticBrush__OnActive(AverageMasterProperty__Fuse_Drawing_StaticBrush* __this);
void AverageMasterProperty__Fuse_Drawing_StaticBrush__OnComplete(AverageMasterProperty__Fuse_Drawing_StaticBrush* __this);

struct AverageMasterProperty__Fuse_Drawing_StaticBrush : ::app::Fuse::Animations::MasterProperty__Fuse_Drawing_StaticBrush
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Drawing_StaticBrush*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Drawing_StaticBrush___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
