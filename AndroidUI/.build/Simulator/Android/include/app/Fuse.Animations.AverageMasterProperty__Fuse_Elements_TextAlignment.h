// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_ELEMENTS_TEXT_ALIGNMENT_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_ELEMENTS_TEXT_ALIGNMENT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_TextAlignment.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_TextAlignment; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_TextAlignment; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Elements_TextAlignment;

struct AverageMasterProperty__Fuse_Elements_TextAlignment__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Elements_TextAlignment__uType
{
};

AverageMasterProperty__Fuse_Elements_TextAlignment__uType* AverageMasterProperty__Fuse_Elements_TextAlignment__typeof();

void AverageMasterProperty__Fuse_Elements_TextAlignment___ObjInit_2(AverageMasterProperty__Fuse_Elements_TextAlignment* __this, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Elements_TextAlignment* AverageMasterProperty__Fuse_Elements_TextAlignment__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_TextAlignment* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Elements_TextAlignment__OnActive(AverageMasterProperty__Fuse_Elements_TextAlignment* __this);
void AverageMasterProperty__Fuse_Elements_TextAlignment__OnComplete(AverageMasterProperty__Fuse_Elements_TextAlignment* __this);

struct AverageMasterProperty__Fuse_Elements_TextAlignment : ::app::Fuse::Animations::MasterProperty__Fuse_Elements_TextAlignment
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Elements_TextAlignment*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Elements_TextAlignment* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Elements_TextAlignment___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
