// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__UNO_U_X_FILE_SOURCE_H__
#define __APP_FUSE_INTERNAL_BLENDER__UNO_U_X_FILE_SOURCE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__Uno_UX_FileSource;

struct Blender__Uno_UX_FileSource__uType : ::uClassType
{
    ::app::Uno::UX::FileSource*(*__fp_Add)(Blender__Uno_UX_FileSource*, ::app::Uno::UX::FileSource*, ::app::Uno::UX::FileSource*);
    ::app::Uno::UX::FileSource*(*__fp_Weight)(Blender__Uno_UX_FileSource*, ::app::Uno::UX::FileSource*, double);
};

Blender__Uno_UX_FileSource__uType* Blender__Uno_UX_FileSource__typeof();

struct Blender__Uno_UX_FileSource : ::uObject
{
    ::app::Uno::UX::FileSource* Add(::app::Uno::UX::FileSource* a, ::app::Uno::UX::FileSource* b) { return (((Blender__Uno_UX_FileSource__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    ::app::Uno::UX::FileSource* Weight(::app::Uno::UX::FileSource* v, double w) { return (((Blender__Uno_UX_FileSource__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
