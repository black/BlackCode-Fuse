// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Mixer;}}}
namespace g{namespace Uno{namespace Collections{struct ConcurrentCollection;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class Mixer :1502
// {
uType* Mixer_typeof();
void Mixer__ctor__fn(Mixer* __this);
void Mixer__AddMaster_fn(uObject* master, bool* postLayout);
void Mixer__CompletePost_fn();
void Mixer__CompletePre_fn();
void Mixer__get_Default_fn(uObject** __retval);
void Mixer__get_DefaultDiscrete_fn(uObject** __retval);
void Mixer__New1_fn(Mixer** __retval);
void Mixer__RemoveMaster_fn(uObject* master, bool* postLayout);

struct Mixer : uObject
{
    static uSStrong<uObject*> _default_;
    static uSStrong<uObject*>& _default() { return Mixer_typeof()->Init(), _default_; }
    static uSStrong<uObject*> _defaultDiscrete_;
    static uSStrong<uObject*>& _defaultDiscrete() { return Mixer_typeof()->Init(), _defaultDiscrete_; }
    static uSStrong< ::g::Uno::Collections::ConcurrentCollection*> PostMasters_;
    static uSStrong< ::g::Uno::Collections::ConcurrentCollection*>& PostMasters() { return Mixer_typeof()->Init(), PostMasters_; }
    static uSStrong< ::g::Uno::Collections::ConcurrentCollection*> PreMasters_;
    static uSStrong< ::g::Uno::Collections::ConcurrentCollection*>& PreMasters() { return Mixer_typeof()->Init(), PreMasters_; }

    void ctor_();
    static void AddMaster(uObject* master, bool postLayout);
    static void CompletePost();
    static void CompletePre();
    static Mixer* New1();
    static void RemoveMaster(uObject* master, bool postLayout);
    static uObject* Default();
    static uObject* DefaultDiscrete();
};
// }

}}} // ::g::Fuse::Animations
