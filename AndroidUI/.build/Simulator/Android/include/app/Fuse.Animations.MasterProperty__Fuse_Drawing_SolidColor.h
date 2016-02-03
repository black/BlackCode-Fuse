// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_DRAWING_SOLID_COLOR_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_DRAWING_SOLID_COLOR_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Drawing_SolidColor.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Drawing { struct SolidColor; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_SolidColor; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Drawing_SolidColor;

struct MasterProperty__Fuse_Drawing_SolidColor__uType : ::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Drawing_SolidColor__uType* MasterProperty__Fuse_Drawing_SolidColor__typeof();

void MasterProperty__Fuse_Drawing_SolidColor___ObjInit_1(MasterProperty__Fuse_Drawing_SolidColor* __this, ::app::Uno::UX::Property__Fuse_Drawing_SolidColor* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Drawing::SolidColor* MasterProperty__Fuse_Drawing_SolidColor__get_RestValue(MasterProperty__Fuse_Drawing_SolidColor* __this);
::uObject* MasterProperty__Fuse_Drawing_SolidColor__GetPropertyObject(MasterProperty__Fuse_Drawing_SolidColor* __this);
void MasterProperty__Fuse_Drawing_SolidColor__OnInactive(MasterProperty__Fuse_Drawing_SolidColor* __this);

struct MasterProperty__Fuse_Drawing_SolidColor : ::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Drawing_SolidColor*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Drawing_SolidColor* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Drawing_SolidColor___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Drawing_SolidColor__GetPropertyObject(this); }
};

}}}


#endif
