// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_COLLECTIONS_DICTIONARY_OU_5084E8C5_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_COLLECTIONS_DICTIONARY_OU_5084E8C5_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_Dictionary_Outrack-73508a70.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_;

struct List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___uType* List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___typeof();

void List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type____ObjInit(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_* __this, ::app::Uno::Collections::List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_* source);
void List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___Dispose(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_* __this);
::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___get_Current(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_* __this);
bool List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___MoveNext(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_* __this);
List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_ List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_* source);
void List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_* __this);

struct List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_* source) { List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___Dispose(this); }
    ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* Current() { return List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type___MoveNext(this); }
};

}}}


#endif
