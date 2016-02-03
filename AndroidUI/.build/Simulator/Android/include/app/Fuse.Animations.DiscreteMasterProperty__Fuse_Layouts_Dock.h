// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__FUSE_LAYOUTS_DOCK_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__FUSE_LAYOUTS_DOCK_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Layouts_Dock.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Layouts_Dock; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteMasterProperty__Fuse_Layouts_Dock;

struct DiscreteMasterProperty__Fuse_Layouts_Dock__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Dock__uType
{
};

DiscreteMasterProperty__Fuse_Layouts_Dock__uType* DiscreteMasterProperty__Fuse_Layouts_Dock__typeof();

void DiscreteMasterProperty__Fuse_Layouts_Dock___ObjInit_2(DiscreteMasterProperty__Fuse_Layouts_Dock* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* property, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMasterProperty__Fuse_Layouts_Dock* DiscreteMasterProperty__Fuse_Layouts_Dock__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterProperty__Fuse_Layouts_Dock__OnComplete(DiscreteMasterProperty__Fuse_Layouts_Dock* __this);

struct DiscreteMasterProperty__Fuse_Layouts_Dock : ::app::Fuse::Animations::MasterProperty__Fuse_Layouts_Dock
{
    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Layouts_Dock* property, ::app::Fuse::Animations::MixerBase* mixerBase) { DiscreteMasterProperty__Fuse_Layouts_Dock___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
