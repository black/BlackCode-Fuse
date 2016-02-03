// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__DOUBLE_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__DOUBLE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__double.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__double; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__double;

struct MasterProperty__double__uType : ::app::Fuse::Animations::MasterBase__double__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__double__uType* MasterProperty__double__typeof();

void MasterProperty__double___ObjInit_1(MasterProperty__double* __this, ::app::Uno::UX::Property__double* property, ::app::Fuse::Animations::MixerBase* mixerBase);
double MasterProperty__double__get_RestValue(MasterProperty__double* __this);
::uObject* MasterProperty__double__GetPropertyObject(MasterProperty__double* __this);
void MasterProperty__double__OnInactive(MasterProperty__double* __this);

struct MasterProperty__double : ::app::Fuse::Animations::MasterBase__double
{
    ::uStrong< ::app::Uno::UX::Property__double*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__double* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__double___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__double__GetPropertyObject(this); }
};

}}}


#endif
