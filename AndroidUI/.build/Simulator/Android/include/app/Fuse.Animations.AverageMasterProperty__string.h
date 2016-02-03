// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__STRING_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__STRING_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__string.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__string; } } }
namespace app { namespace Uno { namespace UX { struct Property__string; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__string;

struct AverageMasterProperty__string__uType : ::app::Fuse::Animations::MasterProperty__string__uType
{
};

AverageMasterProperty__string__uType* AverageMasterProperty__string__typeof();

void AverageMasterProperty__string___ObjInit_2(AverageMasterProperty__string* __this, ::app::Uno::UX::Property__string* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__string* AverageMasterProperty__string__New_1(::uStatic* __this, ::app::Uno::UX::Property__string* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__string__OnActive(AverageMasterProperty__string* __this);
void AverageMasterProperty__string__OnComplete(AverageMasterProperty__string* __this);

struct AverageMasterProperty__string : ::app::Fuse::Animations::MasterProperty__string
{
    ::uStrong< ::app::Fuse::Internal::Blender__string*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__string* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__string___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
