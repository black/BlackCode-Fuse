// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_ELEMENTS_ALIGNMENT_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_ELEMENTS_ALIGNMENT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_Alignment.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_Alignment; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_Alignment; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Elements_Alignment;

struct AverageMasterProperty__Fuse_Elements_Alignment__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Elements_Alignment__uType
{
};

AverageMasterProperty__Fuse_Elements_Alignment__uType* AverageMasterProperty__Fuse_Elements_Alignment__typeof();

void AverageMasterProperty__Fuse_Elements_Alignment___ObjInit_2(AverageMasterProperty__Fuse_Elements_Alignment* __this, ::app::Uno::UX::Property__Fuse_Elements_Alignment* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Elements_Alignment* AverageMasterProperty__Fuse_Elements_Alignment__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_Alignment* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Elements_Alignment__OnActive(AverageMasterProperty__Fuse_Elements_Alignment* __this);
void AverageMasterProperty__Fuse_Elements_Alignment__OnComplete(AverageMasterProperty__Fuse_Elements_Alignment* __this);

struct AverageMasterProperty__Fuse_Elements_Alignment : ::app::Fuse::Animations::MasterProperty__Fuse_Elements_Alignment
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Elements_Alignment*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Elements_Alignment* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Elements_Alignment___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
