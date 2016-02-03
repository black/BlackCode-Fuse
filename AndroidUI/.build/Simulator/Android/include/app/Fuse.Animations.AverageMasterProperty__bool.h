// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__BOOL_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__BOOL_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__bool.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__bool; } } }
namespace app { namespace Uno { namespace UX { struct Property__bool; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__bool;

struct AverageMasterProperty__bool__uType : ::app::Fuse::Animations::MasterProperty__bool__uType
{
};

AverageMasterProperty__bool__uType* AverageMasterProperty__bool__typeof();

void AverageMasterProperty__bool___ObjInit_2(AverageMasterProperty__bool* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__bool* AverageMasterProperty__bool__New_1(::uStatic* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__bool__OnActive(AverageMasterProperty__bool* __this);
void AverageMasterProperty__bool__OnComplete(AverageMasterProperty__bool* __this);

struct AverageMasterProperty__bool : ::app::Fuse::Animations::MasterProperty__bool
{
    ::uStrong< ::app::Fuse::Internal::Blender__bool*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__bool___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
