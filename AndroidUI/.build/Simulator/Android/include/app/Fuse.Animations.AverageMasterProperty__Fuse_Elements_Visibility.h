// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_ELEMENTS_VISIBILITY_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_ELEMENTS_VISIBILITY_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_Visibility; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_Visibility; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Elements_Visibility;

struct AverageMasterProperty__Fuse_Elements_Visibility__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility__uType
{
};

AverageMasterProperty__Fuse_Elements_Visibility__uType* AverageMasterProperty__Fuse_Elements_Visibility__typeof();

void AverageMasterProperty__Fuse_Elements_Visibility___ObjInit_2(AverageMasterProperty__Fuse_Elements_Visibility* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Elements_Visibility* AverageMasterProperty__Fuse_Elements_Visibility__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Elements_Visibility__OnActive(AverageMasterProperty__Fuse_Elements_Visibility* __this);
void AverageMasterProperty__Fuse_Elements_Visibility__OnComplete(AverageMasterProperty__Fuse_Elements_Visibility* __this);

struct AverageMasterProperty__Fuse_Elements_Visibility : ::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Elements_Visibility*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Elements_Visibility* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Elements_Visibility___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
