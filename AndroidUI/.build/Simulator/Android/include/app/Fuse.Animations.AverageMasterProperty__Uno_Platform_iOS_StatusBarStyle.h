// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Uno_Platform_iOS_StatusBarStyle; } } }
namespace app { namespace Uno { namespace UX { struct Property__Uno_Platform_iOS_StatusBarStyle; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Uno_Platform_iOS_StatusBarStyle;

struct AverageMasterProperty__Uno_Platform_iOS_StatusBarStyle__uType : ::app::Fuse::Animations::MasterProperty__Uno_Platform_iOS_StatusBarStyle__uType
{
};

AverageMasterProperty__Uno_Platform_iOS_StatusBarStyle__uType* AverageMasterProperty__Uno_Platform_iOS_StatusBarStyle__typeof();

void AverageMasterProperty__Uno_Platform_iOS_StatusBarStyle___ObjInit_2(AverageMasterProperty__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Uno_Platform_iOS_StatusBarStyle* AverageMasterProperty__Uno_Platform_iOS_StatusBarStyle__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Uno_Platform_iOS_StatusBarStyle__OnActive(AverageMasterProperty__Uno_Platform_iOS_StatusBarStyle* __this);
void AverageMasterProperty__Uno_Platform_iOS_StatusBarStyle__OnComplete(AverageMasterProperty__Uno_Platform_iOS_StatusBarStyle* __this);

struct AverageMasterProperty__Uno_Platform_iOS_StatusBarStyle : ::app::Fuse::Animations::MasterProperty__Uno_Platform_iOS_StatusBarStyle
{
    ::uStrong< ::app::Fuse::Internal::Blender__Uno_Platform_iOS_StatusBarStyle*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Uno_Platform_iOS_StatusBarStyle___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
