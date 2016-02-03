// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_LAYOUTS_DOCK_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_LAYOUTS_DOCK_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Layouts_Dock.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Layouts_Dock; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Layouts_Dock; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Layouts_Dock;

struct AverageMasterProperty__Fuse_Layouts_Dock__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Dock__uType
{
};

AverageMasterProperty__Fuse_Layouts_Dock__uType* AverageMasterProperty__Fuse_Layouts_Dock__typeof();

void AverageMasterProperty__Fuse_Layouts_Dock___ObjInit_2(AverageMasterProperty__Fuse_Layouts_Dock* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Layouts_Dock* AverageMasterProperty__Fuse_Layouts_Dock__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Layouts_Dock__OnActive(AverageMasterProperty__Fuse_Layouts_Dock* __this);
void AverageMasterProperty__Fuse_Layouts_Dock__OnComplete(AverageMasterProperty__Fuse_Layouts_Dock* __this);

struct AverageMasterProperty__Fuse_Layouts_Dock : ::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Dock
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Layouts_Dock*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Layouts_Dock* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Layouts_Dock___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
