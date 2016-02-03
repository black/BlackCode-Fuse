// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_NAVIGATION_NAVIGATI_8D5CD7F2_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_NAVIGATION_NAVIGATI_8D5CD7F2_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Navigation_NavigationGotoMode; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Navigation_NavigationGotoMode; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Navigation_NavigationGotoMode;

struct AverageMasterProperty__Fuse_Navigation_NavigationGotoMode__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationGotoMode__uType
{
};

AverageMasterProperty__Fuse_Navigation_NavigationGotoMode__uType* AverageMasterProperty__Fuse_Navigation_NavigationGotoMode__typeof();

void AverageMasterProperty__Fuse_Navigation_NavigationGotoMode___ObjInit_2(AverageMasterProperty__Fuse_Navigation_NavigationGotoMode* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Navigation_NavigationGotoMode* AverageMasterProperty__Fuse_Navigation_NavigationGotoMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Navigation_NavigationGotoMode__OnActive(AverageMasterProperty__Fuse_Navigation_NavigationGotoMode* __this);
void AverageMasterProperty__Fuse_Navigation_NavigationGotoMode__OnComplete(AverageMasterProperty__Fuse_Navigation_NavigationGotoMode* __this);

struct AverageMasterProperty__Fuse_Navigation_NavigationGotoMode : ::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationGotoMode
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationGotoMode*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Navigation_NavigationGotoMode* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Navigation_NavigationGotoMode___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
