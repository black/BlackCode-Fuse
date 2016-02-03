// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_NAMESPACE_NAME_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_NAMESPACE_NAME_H__

#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_NamespaceName.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct NamespaceName;

extern ::uStaticStrong< ::uDelegate*> NamespaceName__Read;
extern ::uStaticStrong< ::uDelegate*> NamespaceName__Write;

struct NamespaceName__uType : ::uClassType
{
    ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_NamespaceName __interface_0;
};

NamespaceName__uType* NamespaceName__typeof();

void NamespaceName___ObjInit(NamespaceName* __this, ::uString* fullName);
NamespaceName* NamespaceName___Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
void NamespaceName___TypeInit(::uStatic* __this);
void NamespaceName___Write(::uStatic* __this, NamespaceName* name, ::app::Uno::IO::BinaryWriter* writer);
bool NamespaceName__Equals(NamespaceName* __this, ::uObject* obj);
bool NamespaceName__Equals_2(NamespaceName* __this, NamespaceName* other);
int NamespaceName__GetHashCode(NamespaceName* __this);
NamespaceName* NamespaceName__New_1(::uStatic* __this, ::uString* fullName);
bool NamespaceName__op_Equality(::uStatic* __this, NamespaceName* left, NamespaceName* right);
bool NamespaceName__op_Inequality(::uStatic* __this, NamespaceName* left, NamespaceName* right);
::uString* NamespaceName__ToString(NamespaceName* __this);

struct NamespaceName : ::uObject
{
    ::uStrong< ::uString*> FullName;

    void _ObjInit(::uString* fullName) { NamespaceName___ObjInit(this, fullName); }
    bool Equals_2(NamespaceName* other) { return NamespaceName__Equals_2(this, other); }
};

}}}}


#endif
