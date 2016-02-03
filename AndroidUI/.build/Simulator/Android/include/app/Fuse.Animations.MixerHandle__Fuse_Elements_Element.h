// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_ELEMENTS_ELEMENT_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_ELEMENTS_ELEMENT_H__

#include <app/Fuse.Animations.IMixerHandle__Fuse_Elements_Element.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Elements_Element; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__Fuse_Elements_Element;

struct MixerHandle__Fuse_Elements_Element__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Element __interface_0;
};

MixerHandle__Fuse_Elements_Element__uType* MixerHandle__Fuse_Elements_Element__typeof();

void MixerHandle__Fuse_Elements_Element___ObjInit(MixerHandle__Fuse_Elements_Element* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_Element* master, int mode, int priority);
bool MixerHandle__Fuse_Elements_Element__get_HasValue(MixerHandle__Fuse_Elements_Element* __this);
int MixerHandle__Fuse_Elements_Element__get_MixOp(MixerHandle__Fuse_Elements_Element* __this);
int MixerHandle__Fuse_Elements_Element__get_Priority(MixerHandle__Fuse_Elements_Element* __this);
::app::Fuse::Elements::Element* MixerHandle__Fuse_Elements_Element__get_RestValue(MixerHandle__Fuse_Elements_Element* __this);
MixerHandle__Fuse_Elements_Element* MixerHandle__Fuse_Elements_Element__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_Element* master, int mode, int priority);
void MixerHandle__Fuse_Elements_Element__Set(MixerHandle__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value, float strength);
void MixerHandle__Fuse_Elements_Element__set_MixOp(MixerHandle__Fuse_Elements_Element* __this, int value);
void MixerHandle__Fuse_Elements_Element__set_Priority(MixerHandle__Fuse_Elements_Element* __this, int value);
void MixerHandle__Fuse_Elements_Element__Unregister(MixerHandle__Fuse_Elements_Element* __this);

struct MixerHandle__Fuse_Elements_Element : ::uObject
{
    ::uStrong< ::app::Fuse::Elements::Element*> Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Element*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__Fuse_Elements_Element* master, int mode, int priority) { MixerHandle__Fuse_Elements_Element___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__Fuse_Elements_Element__get_HasValue(this); }
    int MixOp() { return MixerHandle__Fuse_Elements_Element__get_MixOp(this); }
    int Priority() { return MixerHandle__Fuse_Elements_Element__get_Priority(this); }
    ::app::Fuse::Elements::Element* RestValue() { return MixerHandle__Fuse_Elements_Element__get_RestValue(this); }
    void Set(::app::Fuse::Elements::Element* value, float strength) { MixerHandle__Fuse_Elements_Element__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__Fuse_Elements_Element__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__Fuse_Elements_Element__set_Priority(this, value); }
    void Unregister() { MixerHandle__Fuse_Elements_Element__Unregister(this); }
};

}}}


#endif
