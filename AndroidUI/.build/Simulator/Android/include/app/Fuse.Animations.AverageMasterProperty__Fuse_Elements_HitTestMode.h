// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_ELEMENTS_HIT_TEST_MODE_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_ELEMENTS_HIT_TEST_MODE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_HitTestMode; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_HitTestMode; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Elements_HitTestMode;

struct AverageMasterProperty__Fuse_Elements_HitTestMode__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Elements_HitTestMode__uType
{
};

AverageMasterProperty__Fuse_Elements_HitTestMode__uType* AverageMasterProperty__Fuse_Elements_HitTestMode__typeof();

void AverageMasterProperty__Fuse_Elements_HitTestMode___ObjInit_2(AverageMasterProperty__Fuse_Elements_HitTestMode* __this, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Elements_HitTestMode* AverageMasterProperty__Fuse_Elements_HitTestMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_HitTestMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Elements_HitTestMode__OnActive(AverageMasterProperty__Fuse_Elements_HitTestMode* __this);
void AverageMasterProperty__Fuse_Elements_HitTestMode__OnComplete(AverageMasterProperty__Fuse_Elements_HitTestMode* __this);

struct AverageMasterProperty__Fuse_Elements_HitTestMode : ::app::Fuse::Animations::MasterProperty__Fuse_Elements_HitTestMode
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Elements_HitTestMode*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Elements_HitTestMode* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Elements_HitTestMode___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
