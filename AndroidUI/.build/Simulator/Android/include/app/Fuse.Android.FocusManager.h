// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_FOCUS_MANAGER_H__
#define __APP_FUSE_ANDROID_FOCUS_MANAGER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Fuse {
namespace Android {

struct FocusManager;

extern ::uStaticStrong< FocusManager*> FocusManager__Singleton;

struct FocusManager__uType : ::uClassType
{
};

FocusManager__uType* FocusManager__typeof();

void FocusManager___ObjInit(FocusManager* __this);
void FocusManager___TypeInit(::uStatic* __this);
void FocusManager__CompleteFocusLoss(FocusManager* __this);
FocusManager* FocusManager__New_1(::uStatic* __this);

struct FocusManager : ::uObject
{
    ::uStrong< ::app::Android::android::view::View*> LoseFocus;
    ::uStrong< ::app::Android::android::content::Context*> HideKeyboardContext;
    ::uStrong< ::uObject*> HideKeyboardWindowToken;

    void _ObjInit() { FocusManager___ObjInit(this); }
    void CompleteFocusLoss() { FocusManager__CompleteFocusLoss(this); }
};

}}}


#endif
