// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_DRAWING_BLEND_MODE_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_DRAWING_BLEND_MODE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Drawing_BlendMode.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Drawing_BlendMode; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_BlendMode; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Drawing_BlendMode;

struct AverageMasterProperty__Fuse_Drawing_BlendMode__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Drawing_BlendMode__uType
{
};

AverageMasterProperty__Fuse_Drawing_BlendMode__uType* AverageMasterProperty__Fuse_Drawing_BlendMode__typeof();

void AverageMasterProperty__Fuse_Drawing_BlendMode___ObjInit_2(AverageMasterProperty__Fuse_Drawing_BlendMode* __this, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Drawing_BlendMode* AverageMasterProperty__Fuse_Drawing_BlendMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_BlendMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Drawing_BlendMode__OnActive(AverageMasterProperty__Fuse_Drawing_BlendMode* __this);
void AverageMasterProperty__Fuse_Drawing_BlendMode__OnComplete(AverageMasterProperty__Fuse_Drawing_BlendMode* __this);

struct AverageMasterProperty__Fuse_Drawing_BlendMode : ::app::Fuse::Animations::MasterProperty__Fuse_Drawing_BlendMode
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Drawing_BlendMode*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Drawing_BlendMode* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Drawing_BlendMode___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
