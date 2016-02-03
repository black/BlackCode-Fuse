// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_ANIMATIONS_KEYFRAME_AACDCE7F_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_ANIMATIONS_KEYFRAME_AACDCE7F_H__

#include <app/Uno.UX.Property__Fuse_Animations_KeyframeInterpolation.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Animations_KeyframeInterpolation;

struct UxProperty__Fuse_Animations_KeyframeInterpolation__uType : ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation__uType
{
};

UxProperty__Fuse_Animations_KeyframeInterpolation__uType* UxProperty__Fuse_Animations_KeyframeInterpolation__typeof();

void UxProperty__Fuse_Animations_KeyframeInterpolation___ObjInit_1(UxProperty__Fuse_Animations_KeyframeInterpolation* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Animations_KeyframeInterpolation* UxProperty__Fuse_Animations_KeyframeInterpolation__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Animations_KeyframeInterpolation__OnAddListener(UxProperty__Fuse_Animations_KeyframeInterpolation* __this, ::uDelegate* listener);
int UxProperty__Fuse_Animations_KeyframeInterpolation__OnGet(UxProperty__Fuse_Animations_KeyframeInterpolation* __this);
void UxProperty__Fuse_Animations_KeyframeInterpolation__OnRemoveListener(UxProperty__Fuse_Animations_KeyframeInterpolation* __this, ::uDelegate* listener);
void UxProperty__Fuse_Animations_KeyframeInterpolation__OnSet(UxProperty__Fuse_Animations_KeyframeInterpolation* __this, int value, ::uObject* origin);

struct UxProperty__Fuse_Animations_KeyframeInterpolation : ::app::Uno::UX::Property__Fuse_Animations_KeyframeInterpolation
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Animations_KeyframeInterpolation___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
