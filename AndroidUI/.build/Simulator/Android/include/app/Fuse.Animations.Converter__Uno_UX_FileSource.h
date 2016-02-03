// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER__UNO_U_X_FILE_SOURCE_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER__UNO_U_X_FILE_SOURCE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace UX { struct FileSource; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Converter__Uno_UX_FileSource;

struct Converter__Uno_UX_FileSource__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_In)(Converter__Uno_UX_FileSource*, ::app::Uno::UX::FileSource*);
    ::app::Uno::UX::FileSource*(*__fp_Out)(Converter__Uno_UX_FileSource*, ::app::Uno::Float4);
};

Converter__Uno_UX_FileSource__uType* Converter__Uno_UX_FileSource__typeof();

struct Converter__Uno_UX_FileSource : ::uObject
{
    ::app::Uno::Float4 In(::app::Uno::UX::FileSource* value);
    ::app::Uno::UX::FileSource* Out(::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 Converter__Uno_UX_FileSource::In(::app::Uno::UX::FileSource* value) { return (((Converter__Uno_UX_FileSource__uType*)this->__obj_type)->__fp_In)(this, value); }
inline ::app::Uno::UX::FileSource* Converter__Uno_UX_FileSource::Out(::app::Uno::Float4 value) { return (((Converter__Uno_UX_FileSource__uType*)this->__obj_type)->__fp_Out)(this, value); }

}}}


#endif
