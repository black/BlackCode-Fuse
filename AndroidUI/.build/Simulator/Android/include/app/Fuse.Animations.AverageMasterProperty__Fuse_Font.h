// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_FONT_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_FONT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Font.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Font; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Font; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Font;

struct AverageMasterProperty__Fuse_Font__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Font__uType
{
};

AverageMasterProperty__Fuse_Font__uType* AverageMasterProperty__Fuse_Font__typeof();

void AverageMasterProperty__Fuse_Font___ObjInit_2(AverageMasterProperty__Fuse_Font* __this, ::app::Uno::UX::Property__Fuse_Font* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Font* AverageMasterProperty__Fuse_Font__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Font* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Font__OnActive(AverageMasterProperty__Fuse_Font* __this);
void AverageMasterProperty__Fuse_Font__OnComplete(AverageMasterProperty__Fuse_Font* __this);

struct AverageMasterProperty__Fuse_Font : ::app::Fuse::Animations::MasterProperty__Fuse_Font
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Font*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Font* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Font___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
