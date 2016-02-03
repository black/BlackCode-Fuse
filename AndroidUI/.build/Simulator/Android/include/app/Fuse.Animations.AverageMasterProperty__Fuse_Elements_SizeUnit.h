// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_ELEMENTS_SIZE_UNIT_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_ELEMENTS_SIZE_UNIT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_SizeUnit.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_SizeUnit; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_SizeUnit; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Elements_SizeUnit;

struct AverageMasterProperty__Fuse_Elements_SizeUnit__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Elements_SizeUnit__uType
{
};

AverageMasterProperty__Fuse_Elements_SizeUnit__uType* AverageMasterProperty__Fuse_Elements_SizeUnit__typeof();

void AverageMasterProperty__Fuse_Elements_SizeUnit___ObjInit_2(AverageMasterProperty__Fuse_Elements_SizeUnit* __this, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Elements_SizeUnit* AverageMasterProperty__Fuse_Elements_SizeUnit__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Elements_SizeUnit__OnActive(AverageMasterProperty__Fuse_Elements_SizeUnit* __this);
void AverageMasterProperty__Fuse_Elements_SizeUnit__OnComplete(AverageMasterProperty__Fuse_Elements_SizeUnit* __this);

struct AverageMasterProperty__Fuse_Elements_SizeUnit : ::app::Fuse::Animations::MasterProperty__Fuse_Elements_SizeUnit
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Elements_SizeUnit*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Elements_SizeUnit* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Elements_SizeUnit___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
