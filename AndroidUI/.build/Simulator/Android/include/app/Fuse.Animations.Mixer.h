// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_H__
#define __APP_FUSE_ANIMATIONS_MIXER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct ConcurrentCollection__Fuse_Animations_IMixerMaster; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct Mixer;

extern ::uStaticStrong< ::uObject*> Mixer___default;
extern ::uStaticStrong< ::uObject*> Mixer___defaultDiscrete;
extern ::uStaticStrong< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*> Mixer__PostMasters;
extern ::uStaticStrong< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*> Mixer__PreMasters;

struct Mixer__uType : ::uClassType
{
};

Mixer__uType* Mixer__typeof();

void Mixer___ObjInit(Mixer* __this);
void Mixer___TypeInit(::uStatic* __this);
void Mixer__AddMaster(::uStatic* __this, ::uObject* master, bool postLayout);
void Mixer__CompletePost(::uStatic* __this);
void Mixer__CompletePre(::uStatic* __this);
::uObject* Mixer__get_Default(::uStatic* __this);
::uObject* Mixer__get_DefaultDiscrete(::uStatic* __this);
Mixer* Mixer__New_1(::uStatic* __this);
void Mixer__RemoveMaster(::uStatic* __this, ::uObject* master, bool postLayout);

struct Mixer : ::uObject
{
    void _ObjInit() { Mixer___ObjInit(this); }
};

}}}


#endif
