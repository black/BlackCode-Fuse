// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.18.8\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct FocusManager;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// internal sealed extern class FocusManager :413
// {
uType* FocusManager_typeof();
void FocusManager__ctor__fn(FocusManager* __this);
void FocusManager__CompleteFocusLoss_fn(FocusManager* __this);
void FocusManager__New1_fn(FocusManager** __retval);

struct FocusManager : uObject
{
    uStrong< ::g::Android::android::content::Context*> HideKeyboardContext;
    uStrong<uObject*> HideKeyboardWindowToken;
    uStrong< ::g::Android::android::view::View*> LoseFocus;
    static uSStrong<FocusManager*> Singleton_;
    static uSStrong<FocusManager*>& Singleton() { return FocusManager_typeof()->Init(), Singleton_; }

    void ctor_();
    void CompleteFocusLoss();
    static FocusManager* New1();
};
// }

}}}} // ::g::Fuse::Android::Controls
