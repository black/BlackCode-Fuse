// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_DRAWING_BRUSH_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_DRAWING_BRUSH_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_Brush.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Drawing_Brush; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_Brush; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Drawing_Brush;

struct AverageMasterProperty__Fuse_Drawing_Brush__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Drawing_Brush__uType
{
};

AverageMasterProperty__Fuse_Drawing_Brush__uType* AverageMasterProperty__Fuse_Drawing_Brush__typeof();

void AverageMasterProperty__Fuse_Drawing_Brush___ObjInit_2(AverageMasterProperty__Fuse_Drawing_Brush* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Drawing_Brush* AverageMasterProperty__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_Brush* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Drawing_Brush__OnActive(AverageMasterProperty__Fuse_Drawing_Brush* __this);
void AverageMasterProperty__Fuse_Drawing_Brush__OnComplete(AverageMasterProperty__Fuse_Drawing_Brush* __this);

struct AverageMasterProperty__Fuse_Drawing_Brush : ::app::Fuse::Animations::MasterProperty__Fuse_Drawing_Brush
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Drawing_Brush*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Drawing_Brush* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Drawing_Brush___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
