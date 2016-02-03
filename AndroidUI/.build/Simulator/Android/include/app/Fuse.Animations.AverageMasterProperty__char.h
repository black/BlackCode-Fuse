// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__CHAR_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__CHAR_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__char.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__char; } } }
namespace app { namespace Uno { namespace UX { struct Property__char; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__char;

struct AverageMasterProperty__char__uType : ::app::Fuse::Animations::MasterProperty__char__uType
{
};

AverageMasterProperty__char__uType* AverageMasterProperty__char__typeof();

void AverageMasterProperty__char___ObjInit_2(AverageMasterProperty__char* __this, ::app::Uno::UX::Property__char* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__char* AverageMasterProperty__char__New_1(::uStatic* __this, ::app::Uno::UX::Property__char* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__char__OnActive(AverageMasterProperty__char* __this);
void AverageMasterProperty__char__OnComplete(AverageMasterProperty__char* __this);

struct AverageMasterProperty__char : ::app::Fuse::Animations::MasterProperty__char
{
    ::uStrong< ::app::Fuse::Internal::Blender__char*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__char* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__char___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
