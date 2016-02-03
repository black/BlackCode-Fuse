// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_ELEMENTS_CACHING_MODE_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_ELEMENTS_CACHING_MODE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_CachingMode.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_CachingMode; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_CachingMode; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Elements_CachingMode;

struct AverageMasterProperty__Fuse_Elements_CachingMode__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Elements_CachingMode__uType
{
};

AverageMasterProperty__Fuse_Elements_CachingMode__uType* AverageMasterProperty__Fuse_Elements_CachingMode__typeof();

void AverageMasterProperty__Fuse_Elements_CachingMode___ObjInit_2(AverageMasterProperty__Fuse_Elements_CachingMode* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Elements_CachingMode* AverageMasterProperty__Fuse_Elements_CachingMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_CachingMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Elements_CachingMode__OnActive(AverageMasterProperty__Fuse_Elements_CachingMode* __this);
void AverageMasterProperty__Fuse_Elements_CachingMode__OnComplete(AverageMasterProperty__Fuse_Elements_CachingMode* __this);

struct AverageMasterProperty__Fuse_Elements_CachingMode : ::app::Fuse::Animations::MasterProperty__Fuse_Elements_CachingMode
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Elements_CachingMode*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Elements_CachingMode* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Elements_CachingMode___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
