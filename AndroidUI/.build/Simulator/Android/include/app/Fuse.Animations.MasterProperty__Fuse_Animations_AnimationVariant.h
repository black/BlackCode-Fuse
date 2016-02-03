// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_ANIMATIONS_ANIMATION_VARIANT_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_ANIMATIONS_ANIMATION_VARIANT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Animations_AnimationVariant.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Animations_AnimationVariant; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Animations_AnimationVariant;

struct MasterProperty__Fuse_Animations_AnimationVariant__uType : ::app::Fuse::Animations::MasterBase__Fuse_Animations_AnimationVariant__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Animations_AnimationVariant__uType* MasterProperty__Fuse_Animations_AnimationVariant__typeof();

void MasterProperty__Fuse_Animations_AnimationVariant___ObjInit_1(MasterProperty__Fuse_Animations_AnimationVariant* __this, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* property, ::app::Fuse::Animations::MixerBase* mixerBase);
int MasterProperty__Fuse_Animations_AnimationVariant__get_RestValue(MasterProperty__Fuse_Animations_AnimationVariant* __this);
::uObject* MasterProperty__Fuse_Animations_AnimationVariant__GetPropertyObject(MasterProperty__Fuse_Animations_AnimationVariant* __this);
void MasterProperty__Fuse_Animations_AnimationVariant__OnInactive(MasterProperty__Fuse_Animations_AnimationVariant* __this);

struct MasterProperty__Fuse_Animations_AnimationVariant : ::app::Fuse::Animations::MasterBase__Fuse_Animations_AnimationVariant
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Animations_AnimationVariant___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Animations_AnimationVariant__GetPropertyObject(this); }
};

}}}


#endif
