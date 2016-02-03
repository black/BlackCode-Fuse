// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CHAR_PUNCTUATION_CHECKER_PU_AFF09C2B_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_CHAR_PUNCTUATION_CHECKER_PU_AFF09C2B_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_CharPunctuationChecker_PunctuationRange.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_CharPunctuationChecker_PunctuationRange; } } }
namespace app { namespace Uno { struct CharPunctuationChecker_PunctuationRange; } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange;

struct List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_CharPunctuationChecker_PunctuationRange __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange__uType* List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange__typeof();

void List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange___ObjInit(List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange* __this, ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange* source);
void List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange__Dispose(List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange* __this);
::app::Uno::CharPunctuationChecker_PunctuationRange* List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange__get_Current(List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange* __this);
bool List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange__MoveNext(List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange* __this);
List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange* source);
void List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange* __this);

struct List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange
{
    ::uStrong< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::CharPunctuationChecker_PunctuationRange*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange* source) { List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange__Dispose(this); }
    ::app::Uno::CharPunctuationChecker_PunctuationRange* Current() { return List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange__MoveNext(this); }
};

}}}


#endif
