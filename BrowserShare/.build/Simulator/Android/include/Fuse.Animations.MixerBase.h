// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IMixer.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct MasterBase;}}}
namespace g{namespace Fuse{namespace Animations{struct MasterProperty;}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Transform;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract class MixerBase :1554
// {
struct MixerBase_type : uType
{
    ::g::Fuse::Animations::IMixer interface0;
    void(*fp_CreateMaster)(::g::Fuse::Animations::MixerBase*, uType*, ::g::Uno::UX::Property*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterProperty**);
    void(*fp_CreateMasterTransform)(::g::Fuse::Animations::MixerBase*, ::g::Fuse::Node*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterBase**);
};

MixerBase_type* MixerBase_typeof();
void MixerBase__ctor__fn(MixerBase* __this);
void MixerBase__Register_fn(MixerBase* __this, uType* __type, ::g::Uno::UX::Property* property, int* mode, uObject** __retval);
void MixerBase__RegisterTransform_fn(MixerBase* __this, ::g::Fuse::Node* element, int* mode, int* priority, uObject** __retval);
void MixerBase__Unused_fn(MixerBase* __this, uObject* mb);

struct MixerBase : uObject
{
    uStrong< ::g::Fuse::PropertyHandle*> _propHandle;
    uStrong< ::g::Uno::Collections::Dictionary*> Masters;

    void ctor_();
    ::g::Fuse::Animations::MasterProperty* CreateMaster(uType* __type, ::g::Uno::UX::Property* property, MixerBase* mixerBase) { ::g::Fuse::Animations::MasterProperty* __retval; return (((MixerBase_type*)this->__type)->fp_CreateMaster)(this, __type, property, mixerBase, &__retval), __retval; }
    ::g::Fuse::Animations::MasterBase* CreateMasterTransform(::g::Fuse::Node* element, MixerBase* mixerBase) { ::g::Fuse::Animations::MasterBase* __retval; return (((MixerBase_type*)__type)->fp_CreateMasterTransform)(this, element, mixerBase, &__retval), __retval; }
    uObject* Register(uType* __type, ::g::Uno::UX::Property* property, int mode);
    uObject* RegisterTransform(::g::Fuse::Node* element, int mode, int priority);
    void Unused(uObject* mb);
};
// }

}}} // ::g::Fuse::Animations
