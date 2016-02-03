// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CHAR_PUNCTUATION_CHECKER_H__
#define __APP_UNO_CHAR_PUNCTUATION_CHECKER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_CharPunctuationChecker_PunctuationRange; } } }

namespace app {
namespace Uno {

struct CharPunctuationChecker;

extern ::uStaticStrong< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*> CharPunctuationChecker__punctuationRangeList;
extern ::uStaticStrong< ::uString*> CharPunctuationChecker__singlePunctuationChars;

struct CharPunctuationChecker__uType : ::uClassType
{
};

CharPunctuationChecker__uType* CharPunctuationChecker__typeof();

void CharPunctuationChecker___ObjInit(CharPunctuationChecker* __this);
void CharPunctuationChecker___TypeInit(::uStatic* __this);
bool CharPunctuationChecker__CheckPunctuation(::uStatic* __this, ::uChar c);
CharPunctuationChecker* CharPunctuationChecker__New_1(::uStatic* __this);

struct CharPunctuationChecker : ::uObject
{
    void _ObjInit() { CharPunctuationChecker___ObjInit(this); }
};

}}


#endif
