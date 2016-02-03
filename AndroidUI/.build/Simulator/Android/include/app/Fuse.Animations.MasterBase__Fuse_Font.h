// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_FONT_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_FONT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__Fuse_Font; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Font; } } }
namespace app { namespace Fuse { struct Font; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Font_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__Fuse_Font;

struct MasterBase__Fuse_Font__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    ::app::Fuse::Font*(*__fp_get_RestValue)(MasterBase__Fuse_Font*);
    void(*__fp_OnActive)(MasterBase__Fuse_Font*);
    void(*__fp_OnComplete)(MasterBase__Fuse_Font*);
    void(*__fp_OnInactive)(MasterBase__Fuse_Font*);
};

MasterBase__Fuse_Font__uType* MasterBase__Fuse_Font__typeof();

void MasterBase__Fuse_Font__Finalize(MasterBase__Fuse_Font* __this);
void MasterBase__Fuse_Font___ObjInit(MasterBase__Fuse_Font* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__Fuse_Font__Complete(MasterBase__Fuse_Font* __this);
bool MasterBase__Fuse_Font__get_PostLayout(MasterBase__Fuse_Font* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Font MasterBase__Fuse_Font__GetFullWeight(MasterBase__Fuse_Font* __this);
void MasterBase__Fuse_Font__OnActive(MasterBase__Fuse_Font* __this);
void MasterBase__Fuse_Font__Register(MasterBase__Fuse_Font* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Font* handle);
void MasterBase__Fuse_Font__Unregister(MasterBase__Fuse_Font* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Font* handle);

struct MasterBase__Fuse_Font : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Font_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__Fuse_Font___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__Fuse_Font__Complete(this); }
    bool PostLayout() { return MasterBase__Fuse_Font__get_PostLayout(this); }
    ::app::Fuse::Font* RestValue() { return (((MasterBase__Fuse_Font__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Font GetFullWeight();
    void OnActive() { (((MasterBase__Fuse_Font__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__Fuse_Font__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__Fuse_Font__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__Fuse_Font* handle) { MasterBase__Fuse_Font__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__Fuse_Font* handle) { MasterBase__Fuse_Font__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__Fuse_Font.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Font MasterBase__Fuse_Font::GetFullWeight() { return MasterBase__Fuse_Font__GetFullWeight(this); }

}}}


#endif
