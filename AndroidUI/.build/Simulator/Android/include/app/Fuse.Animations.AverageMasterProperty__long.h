// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__LONG_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__LONG_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__long.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__long; } } }
namespace app { namespace Uno { namespace UX { struct Property__long; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__long;

struct AverageMasterProperty__long__uType : ::app::Fuse::Animations::MasterProperty__long__uType
{
};

AverageMasterProperty__long__uType* AverageMasterProperty__long__typeof();

void AverageMasterProperty__long___ObjInit_2(AverageMasterProperty__long* __this, ::app::Uno::UX::Property__long* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__long* AverageMasterProperty__long__New_1(::uStatic* __this, ::app::Uno::UX::Property__long* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__long__OnActive(AverageMasterProperty__long* __this);
void AverageMasterProperty__long__OnComplete(AverageMasterProperty__long* __this);

struct AverageMasterProperty__long : ::app::Fuse::Animations::MasterProperty__long
{
    ::uStrong< ::app::Fuse::Internal::Blender__long*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__long* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__long___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
