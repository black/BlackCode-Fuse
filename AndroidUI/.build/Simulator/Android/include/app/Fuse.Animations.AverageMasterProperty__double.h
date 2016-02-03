// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__DOUBLE_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__DOUBLE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__double.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__double; } } }
namespace app { namespace Uno { namespace UX { struct Property__double; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__double;

struct AverageMasterProperty__double__uType : ::app::Fuse::Animations::MasterProperty__double__uType
{
};

AverageMasterProperty__double__uType* AverageMasterProperty__double__typeof();

void AverageMasterProperty__double___ObjInit_2(AverageMasterProperty__double* __this, ::app::Uno::UX::Property__double* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__double* AverageMasterProperty__double__New_1(::uStatic* __this, ::app::Uno::UX::Property__double* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__double__OnActive(AverageMasterProperty__double* __this);
void AverageMasterProperty__double__OnComplete(AverageMasterProperty__double* __this);

struct AverageMasterProperty__double : ::app::Fuse::Animations::MasterProperty__double
{
    ::uStrong< ::app::Fuse::Internal::Blender__double*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__double* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__double___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
