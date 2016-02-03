// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TEXT_STRING_BUILDER_H__
#define __APP_UNO_TEXT_STRING_BUILDER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Text { struct StringBuilderElement; } } }

namespace app {
namespace Uno {
namespace Text {

struct StringBuilder;

struct StringBuilder__uType : ::uClassType
{
};

StringBuilder__uType* StringBuilder__typeof();

void StringBuilder___ObjInit(StringBuilder* __this);
StringBuilder* StringBuilder__Append(StringBuilder* __this, ::uArray* chars);
StringBuilder* StringBuilder__Append_1(StringBuilder* __this, ::uString* str);
StringBuilder* StringBuilder__AppendLine(StringBuilder* __this, ::uString* str);
int StringBuilder__get_Length(StringBuilder* __this);
int StringBuilder__get_MaxCapacity(StringBuilder* __this);
StringBuilder* StringBuilder__New_1(::uStatic* __this);
void StringBuilder__set_Length(StringBuilder* __this, int value);
::uString* StringBuilder__ToString(StringBuilder* __this);

struct StringBuilder : ::uObject
{
    ::uStrong< ::app::Uno::Text::StringBuilderElement*> firstElement;
    ::uStrong< ::app::Uno::Text::StringBuilderElement*> lastElement;
    int _Length;

    void _ObjInit() { StringBuilder___ObjInit(this); }
    StringBuilder* Append(::uArray* chars) { return StringBuilder__Append(this, chars); }
    StringBuilder* Append_1(::uString* str) { return StringBuilder__Append_1(this, str); }
    StringBuilder* AppendLine(::uString* str) { return StringBuilder__AppendLine(this, str); }
    int Length() { return StringBuilder__get_Length(this); }
    int MaxCapacity() { return StringBuilder__get_MaxCapacity(this); }
    void Length(int value) { StringBuilder__set_Length(this, value); }
};

}}}


#endif
