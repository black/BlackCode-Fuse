// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__OUTRACKS_SIMULATOR_B_9A2E20A8_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__OUTRACKS_SIMULATOR_B_9A2E20A8_H__

#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type;

struct Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_TypeName __interface_0;
};

Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType* Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof();

::uObject* Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__GetEnumerator_boxed(Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);
void Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type___ObjInit(Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* source);
int Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Count(Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);
::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__GetEnumerator(Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);
Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* source);
void Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Uno_Collections_ICollection_Add(Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::app::Outracks::Simulator::Bytecode::TypeName* item);
void Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Uno_Collections_ICollection_Clear(Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);
bool Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Uno_Collections_ICollection_Contains(Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::app::Outracks::Simulator::Bytecode::TypeName* item);
bool Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Uno_Collections_ICollection_Remove(Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::app::Outracks::Simulator::Bytecode::TypeName* item);

struct Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* source) { Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type___ObjInit(this, source); }
    int Count() { return Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Outracks_-a889f281.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type::GetEnumerator() { return Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type__GetEnumerator(this); }

}}}


#endif
