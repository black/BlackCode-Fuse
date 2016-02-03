// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_FONT_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_FONT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Font.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { struct Font; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Font; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Font;

struct MasterProperty__Fuse_Font__uType : ::app::Fuse::Animations::MasterBase__Fuse_Font__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Font__uType* MasterProperty__Fuse_Font__typeof();

void MasterProperty__Fuse_Font___ObjInit_1(MasterProperty__Fuse_Font* __this, ::app::Uno::UX::Property__Fuse_Font* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Font* MasterProperty__Fuse_Font__get_RestValue(MasterProperty__Fuse_Font* __this);
::uObject* MasterProperty__Fuse_Font__GetPropertyObject(MasterProperty__Fuse_Font* __this);
void MasterProperty__Fuse_Font__OnInactive(MasterProperty__Fuse_Font* __this);

struct MasterProperty__Fuse_Font : ::app::Fuse::Animations::MasterBase__Fuse_Font
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Font*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Font* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Font___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Font__GetPropertyObject(this); }
};

}}}


#endif
