// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IMixerMaster.h>
#include <Fuse.Animations.MasterBase-1.h>
#include <Fuse.Animations.MasterPropertyGet.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct MasterProperty;}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract class MasterProperty<T> :1712
// {
struct MasterProperty_type : ::g::Fuse::Animations::MasterBase_type
{
    ::g::Fuse::Animations::MasterPropertyGet interface1;
};

MasterProperty_type* MasterProperty_typeof();
void MasterProperty__ctor_1_fn(MasterProperty* __this, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase);
void MasterProperty__GetPropertyObject_fn(MasterProperty* __this, uObject** __retval);
void MasterProperty__OnInactive_fn(MasterProperty* __this);
void MasterProperty__get_RestValue_fn(MasterProperty* __this, uTRef __retval);

struct MasterProperty : ::g::Fuse::Animations::MasterBase
{
    uStrong< ::g::Uno::UX::Property*> Property;

    void ctor_1(::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase);
    uObject* GetPropertyObject();
};
// }

}}} // ::g::Fuse::Animations
