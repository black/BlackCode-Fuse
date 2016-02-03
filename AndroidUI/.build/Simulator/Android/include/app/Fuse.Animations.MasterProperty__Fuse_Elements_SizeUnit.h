// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_ELEMENTS_SIZE_UNIT_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_ELEMENTS_SIZE_UNIT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_SizeUnit.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_SizeUnit; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Elements_SizeUnit;

struct MasterProperty__Fuse_Elements_SizeUnit__uType : ::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Elements_SizeUnit__uType* MasterProperty__Fuse_Elements_SizeUnit__typeof();

void MasterProperty__Fuse_Elements_SizeUnit___ObjInit_1(MasterProperty__Fuse_Elements_SizeUnit* __this, ::app::Uno::UX::Property__Fuse_Elements_SizeUnit* property, ::app::Fuse::Animations::MixerBase* mixerBase);
int MasterProperty__Fuse_Elements_SizeUnit__get_RestValue(MasterProperty__Fuse_Elements_SizeUnit* __this);
::uObject* MasterProperty__Fuse_Elements_SizeUnit__GetPropertyObject(MasterProperty__Fuse_Elements_SizeUnit* __this);
void MasterProperty__Fuse_Elements_SizeUnit__OnInactive(MasterProperty__Fuse_Elements_SizeUnit* __this);

struct MasterProperty__Fuse_Elements_SizeUnit : ::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Elements_SizeUnit*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Elements_SizeUnit* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Elements_SizeUnit___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Elements_SizeUnit__GetPropertyObject(this); }
};

}}}


#endif
