// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__OBJECT_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__OBJECT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__object.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__object; } } }
namespace app { namespace Uno { namespace UX { struct Property__object; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__object;

struct AverageMasterProperty__object__uType : ::app::Fuse::Animations::MasterProperty__object__uType
{
};

AverageMasterProperty__object__uType* AverageMasterProperty__object__typeof();

void AverageMasterProperty__object___ObjInit_2(AverageMasterProperty__object* __this, ::app::Uno::UX::Property__object* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__object* AverageMasterProperty__object__New_1(::uStatic* __this, ::app::Uno::UX::Property__object* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__object__OnActive(AverageMasterProperty__object* __this);
void AverageMasterProperty__object__OnComplete(AverageMasterProperty__object* __this);

struct AverageMasterProperty__object : ::app::Fuse::Animations::MasterProperty__object
{
    ::uStrong< ::app::Fuse::Internal::Blender__object*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__object* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__object___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
