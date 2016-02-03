// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__CHAR_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__CHAR_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__char.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__char; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteMasterProperty__char;

struct DiscreteMasterProperty__char__uType : ::app::Fuse::Animations::MasterProperty__char__uType
{
};

DiscreteMasterProperty__char__uType* DiscreteMasterProperty__char__typeof();

void DiscreteMasterProperty__char___ObjInit_2(DiscreteMasterProperty__char* __this, ::app::Uno::UX::Property__char* property, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMasterProperty__char* DiscreteMasterProperty__char__New_1(::uStatic* __this, ::app::Uno::UX::Property__char* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterProperty__char__OnComplete(DiscreteMasterProperty__char* __this);

struct DiscreteMasterProperty__char : ::app::Fuse::Animations::MasterProperty__char
{
    void _ObjInit_2(::app::Uno::UX::Property__char* property, ::app::Fuse::Animations::MixerBase* mixerBase) { DiscreteMasterProperty__char___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
