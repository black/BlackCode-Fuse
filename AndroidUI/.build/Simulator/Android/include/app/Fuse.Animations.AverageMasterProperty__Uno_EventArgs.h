// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__UNO_EVENT_ARGS_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__UNO_EVENT_ARGS_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Uno_EventArgs.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Uno_EventArgs; } } }
namespace app { namespace Uno { namespace UX { struct Property__Uno_EventArgs; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Uno_EventArgs;

struct AverageMasterProperty__Uno_EventArgs__uType : ::app::Fuse::Animations::MasterProperty__Uno_EventArgs__uType
{
};

AverageMasterProperty__Uno_EventArgs__uType* AverageMasterProperty__Uno_EventArgs__typeof();

void AverageMasterProperty__Uno_EventArgs___ObjInit_2(AverageMasterProperty__Uno_EventArgs* __this, ::app::Uno::UX::Property__Uno_EventArgs* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Uno_EventArgs* AverageMasterProperty__Uno_EventArgs__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_EventArgs* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Uno_EventArgs__OnActive(AverageMasterProperty__Uno_EventArgs* __this);
void AverageMasterProperty__Uno_EventArgs__OnComplete(AverageMasterProperty__Uno_EventArgs* __this);

struct AverageMasterProperty__Uno_EventArgs : ::app::Fuse::Animations::MasterProperty__Uno_EventArgs
{
    ::uStrong< ::app::Fuse::Internal::Blender__Uno_EventArgs*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Uno_EventArgs* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Uno_EventArgs___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
