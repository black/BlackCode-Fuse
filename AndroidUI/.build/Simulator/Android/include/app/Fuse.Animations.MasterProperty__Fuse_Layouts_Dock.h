// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_LAYOUTS_DOCK_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_LAYOUTS_DOCK_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Layouts_Dock.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Layouts_Dock; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Layouts_Dock;

struct MasterProperty__Fuse_Layouts_Dock__uType : ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Dock__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Layouts_Dock__uType* MasterProperty__Fuse_Layouts_Dock__typeof();

void MasterProperty__Fuse_Layouts_Dock___ObjInit_1(MasterProperty__Fuse_Layouts_Dock* __this, ::app::Uno::UX::Property__Fuse_Layouts_Dock* property, ::app::Fuse::Animations::MixerBase* mixerBase);
int MasterProperty__Fuse_Layouts_Dock__get_RestValue(MasterProperty__Fuse_Layouts_Dock* __this);
::uObject* MasterProperty__Fuse_Layouts_Dock__GetPropertyObject(MasterProperty__Fuse_Layouts_Dock* __this);
void MasterProperty__Fuse_Layouts_Dock__OnInactive(MasterProperty__Fuse_Layouts_Dock* __this);

struct MasterProperty__Fuse_Layouts_Dock : ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Dock
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Layouts_Dock*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Layouts_Dock* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Layouts_Dock___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Layouts_Dock__GetPropertyObject(this); }
};

}}}


#endif
