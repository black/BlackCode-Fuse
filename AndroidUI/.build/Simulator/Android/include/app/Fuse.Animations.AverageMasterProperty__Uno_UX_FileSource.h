// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__UNO_U_X_FILE_SOURCE_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__UNO_U_X_FILE_SOURCE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Uno_UX_FileSource.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Uno_UX_FileSource; } } }
namespace app { namespace Uno { namespace UX { struct Property__Uno_UX_FileSource; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Uno_UX_FileSource;

struct AverageMasterProperty__Uno_UX_FileSource__uType : ::app::Fuse::Animations::MasterProperty__Uno_UX_FileSource__uType
{
};

AverageMasterProperty__Uno_UX_FileSource__uType* AverageMasterProperty__Uno_UX_FileSource__typeof();

void AverageMasterProperty__Uno_UX_FileSource___ObjInit_2(AverageMasterProperty__Uno_UX_FileSource* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Uno_UX_FileSource* AverageMasterProperty__Uno_UX_FileSource__New_1(::uStatic* __this, ::app::Uno::UX::Property__Uno_UX_FileSource* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Uno_UX_FileSource__OnActive(AverageMasterProperty__Uno_UX_FileSource* __this);
void AverageMasterProperty__Uno_UX_FileSource__OnComplete(AverageMasterProperty__Uno_UX_FileSource* __this);

struct AverageMasterProperty__Uno_UX_FileSource : ::app::Fuse::Animations::MasterProperty__Uno_UX_FileSource
{
    ::uStrong< ::app::Fuse::Internal::Blender__Uno_UX_FileSource*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Uno_UX_FileSource* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Uno_UX_FileSource___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
