// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_OPTIONAL_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_OPTIONAL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct NamespaceName; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Optional__Outracks_Simulator_Bytecode_NamespaceName; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Optional__Outracks_Simulator_Bytecode_TypeName; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Optional__Outracks_Simulator_DialogButton; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Optional__Outracks_Simulator_Protocol_Reify; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Optional__string; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct Reify; } } } }
namespace app { namespace Outracks { namespace Simulator { struct DialogButton; } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct Optional;

struct Optional__uType : ::uClassType
{
};

Optional__uType* Optional__typeof();

void Optional___ObjInit(Optional* __this);
Optional* Optional__New_1(::uStatic* __this);
Optional* Optional__None(::uStatic* __this);
::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName Optional__None__Outracks_Simulator_Bytecode_NamespaceName(::uStatic* __this);
::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName Optional__None__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this);
::app::Outracks::Simulator::Bytecode::Optional__string Optional__None__string(::uStatic* __this);
::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName Optional__Read__Outracks_Simulator_Bytecode_NamespaceName(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader, ::uDelegate* readSome);
::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName Optional__Read__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader, ::uDelegate* readSome);
::app::Outracks::Simulator::Bytecode::Optional__string Optional__Read__string(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader, ::uDelegate* readSome);
::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName Optional__Some__Outracks_Simulator_Bytecode_NamespaceName(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::NamespaceName* value);
::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName Optional__Some__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* value);
::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_DialogButton Optional__Some__Outracks_Simulator_DialogButton(::uStatic* __this, ::app::Outracks::Simulator::DialogButton* value);
::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Protocol_Reify Optional__Some__Outracks_Simulator_Protocol_Reify(::uStatic* __this, ::app::Outracks::Simulator::Protocol::Reify* value);
::app::Outracks::Simulator::Bytecode::Optional__string Optional__Some__string(::uStatic* __this, ::uString* value);
void Optional__Write__Outracks_Simulator_Bytecode_NamespaceName(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName optional, ::uDelegate* writeSome);
void Optional__Write__Outracks_Simulator_Bytecode_NamespaceName_1(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName optional, ::uDelegate* writeSome);
void Optional__Write__Outracks_Simulator_Bytecode_NamespaceName_2(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName optional, ::uDelegate* writeSome);
void Optional__Write__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName optional, ::uDelegate* writeSome);
void Optional__Write__Outracks_Simulator_Bytecode_TypeName_1(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName optional, ::uDelegate* writeSome);
void Optional__Write__Outracks_Simulator_Bytecode_TypeName_2(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_TypeName optional, ::uDelegate* writeSome);
void Optional__Write__string(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::Bytecode::Optional__string optional, ::uDelegate* writeSome);
void Optional__Write__string_1(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::Bytecode::Optional__string optional, ::uDelegate* writeSome);
void Optional__Write__string_2(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Outracks::Simulator::Bytecode::Optional__string optional, ::uDelegate* writeSome);

struct Optional : ::uObject
{
    void _ObjInit() { Optional___ObjInit(this); }
};

}}}}


#endif
