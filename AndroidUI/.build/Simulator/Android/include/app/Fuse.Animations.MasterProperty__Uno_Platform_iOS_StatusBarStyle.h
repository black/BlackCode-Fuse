// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Uno_Platform_iOS_StatusBarStyle; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Uno_Platform_iOS_StatusBarStyle;

struct MasterProperty__Uno_Platform_iOS_StatusBarStyle__uType : ::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Uno_Platform_iOS_StatusBarStyle__uType* MasterProperty__Uno_Platform_iOS_StatusBarStyle__typeof();

void MasterProperty__Uno_Platform_iOS_StatusBarStyle___ObjInit_1(MasterProperty__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* property, ::app::Fuse::Animations::MixerBase* mixerBase);
int MasterProperty__Uno_Platform_iOS_StatusBarStyle__get_RestValue(MasterProperty__Uno_Platform_iOS_StatusBarStyle* __this);
::uObject* MasterProperty__Uno_Platform_iOS_StatusBarStyle__GetPropertyObject(MasterProperty__Uno_Platform_iOS_StatusBarStyle* __this);
void MasterProperty__Uno_Platform_iOS_StatusBarStyle__OnInactive(MasterProperty__Uno_Platform_iOS_StatusBarStyle* __this);

struct MasterProperty__Uno_Platform_iOS_StatusBarStyle : ::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle
{
    ::uStrong< ::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Uno_Platform_iOS_StatusBarStyle___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Uno_Platform_iOS_StatusBarStyle__GetPropertyObject(this); }
};

}}}


#endif
