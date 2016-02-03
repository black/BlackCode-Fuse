// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DIAGNOSTICS_PROFILE_SERIALIZER_H__
#define __APP_UNO_DIAGNOSTICS_PROFILE_SERIALIZER_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Diagnostics { struct AllocateEvent; } } }
namespace app { namespace Uno { namespace Diagnostics { struct EnterEvent; } } }
namespace app { namespace Uno { namespace Diagnostics { struct ExitEvent; } } }
namespace app { namespace Uno { namespace Diagnostics { struct FreeEvent; } } }
namespace app { namespace Uno { namespace Diagnostics { struct ProfileData; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }
namespace app { namespace Uno { namespace IO { struct MemoryStream; } } }

namespace app {
namespace Uno {
namespace Diagnostics {

struct ProfileSerializer__uType : ::uClassType
{
};

ProfileSerializer__uType* ProfileSerializer__typeof();

void ProfileSerializer__Serialize(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Uno::Diagnostics::AllocateEvent* allocate);
void ProfileSerializer__Serialize_1(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Uno::Diagnostics::EnterEvent* enter);
void ProfileSerializer__Serialize_2(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Uno::Diagnostics::ExitEvent* exit);
void ProfileSerializer__Serialize_3(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Uno::Diagnostics::FreeEvent* free);
void ProfileSerializer__Serialize_4(::uStatic* __this, ::app::Uno::Diagnostics::ProfileData* data, ::app::Uno::IO::MemoryStream* stream);

}}}


#endif
