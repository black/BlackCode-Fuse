// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Text{struct StringBuilder;}}}
namespace g{namespace Uno{namespace Text{struct StringBuilderElement;}}}

namespace g{
namespace Uno{
namespace Text{

// public sealed class StringBuilder :43
// {
uType* StringBuilder_typeof();
void StringBuilder__ctor__fn(StringBuilder* __this);
void StringBuilder__Append_fn(StringBuilder* __this, uArray* chars, StringBuilder** __retval);
void StringBuilder__Append1_fn(StringBuilder* __this, uString* str, StringBuilder** __retval);
void StringBuilder__AppendLine_fn(StringBuilder* __this, uString* str, StringBuilder** __retval);
void StringBuilder__get_Length_fn(StringBuilder* __this, int* __retval);
void StringBuilder__set_Length_fn(StringBuilder* __this, int* value);
void StringBuilder__get_MaxCapacity_fn(StringBuilder* __this, int* __retval);
void StringBuilder__New1_fn(StringBuilder** __retval);
void StringBuilder__ToString_fn(StringBuilder* __this, uString** __retval);

struct StringBuilder : uObject
{
    uStrong< ::g::Uno::Text::StringBuilderElement*> firstElement;
    uStrong< ::g::Uno::Text::StringBuilderElement*> lastElement;
    int _Length;

    void ctor_();
    StringBuilder* Append(uArray* chars);
    StringBuilder* Append1(uString* str);
    StringBuilder* AppendLine(uString* str);
    int Length();
    void Length(int value);
    int MaxCapacity();
    static StringBuilder* New1();
};
// }

}}} // ::g::Uno::Text
