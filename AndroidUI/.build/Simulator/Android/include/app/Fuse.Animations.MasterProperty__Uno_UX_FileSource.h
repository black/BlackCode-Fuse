// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__UNO_U_X_FILE_SOURCE_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__UNO_U_X_FILE_SOURCE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Uno_UX_FileSource.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }
namespace app { namespace Uno { namespace UX { struct Property__Uno_UX_FileSource; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Uno_UX_FileSource;

struct MasterProperty__Uno_UX_FileSource__uType : ::app::Fuse::Animations::MasterBase__Uno_UX_FileSource__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Uno_UX_FileSource__uType* MasterProperty__Uno_UX_FileSource__typeof();

void MasterProperty__Uno_UX_FileSource___ObjInit_1(MasterProperty__Uno_UX_FileSource* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Uno::UX::FileSource* MasterProperty__Uno_UX_FileSource__get_RestValue(MasterProperty__Uno_UX_FileSource* __this);
::uObject* MasterProperty__Uno_UX_FileSource__GetPropertyObject(MasterProperty__Uno_UX_FileSource* __this);
void MasterProperty__Uno_UX_FileSource__OnInactive(MasterProperty__Uno_UX_FileSource* __this);

struct MasterProperty__Uno_UX_FileSource : ::app::Fuse::Animations::MasterBase__Uno_UX_FileSource
{
    ::uStrong< ::app::Uno::UX::Property__Uno_UX_FileSource*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Uno_UX_FileSource* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Uno_UX_FileSource___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Uno_UX_FileSource__GetPropertyObject(this); }
};

}}}


#endif
