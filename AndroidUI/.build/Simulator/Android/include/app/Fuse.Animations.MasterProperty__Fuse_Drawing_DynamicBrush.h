// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_DRAWING_DYNAMIC_BRUSH_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_DRAWING_DYNAMIC_BRUSH_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Drawing_DynamicBrush.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Drawing { struct DynamicBrush; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_DynamicBrush; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Drawing_DynamicBrush;

struct MasterProperty__Fuse_Drawing_DynamicBrush__uType : ::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Drawing_DynamicBrush__uType* MasterProperty__Fuse_Drawing_DynamicBrush__typeof();

void MasterProperty__Fuse_Drawing_DynamicBrush___ObjInit_1(MasterProperty__Fuse_Drawing_DynamicBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Drawing::DynamicBrush* MasterProperty__Fuse_Drawing_DynamicBrush__get_RestValue(MasterProperty__Fuse_Drawing_DynamicBrush* __this);
::uObject* MasterProperty__Fuse_Drawing_DynamicBrush__GetPropertyObject(MasterProperty__Fuse_Drawing_DynamicBrush* __this);
void MasterProperty__Fuse_Drawing_DynamicBrush__OnInactive(MasterProperty__Fuse_Drawing_DynamicBrush* __this);

struct MasterProperty__Fuse_Drawing_DynamicBrush : ::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Drawing_DynamicBrush* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Drawing_DynamicBrush___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Drawing_DynamicBrush__GetPropertyObject(this); }
};

}}}


#endif
