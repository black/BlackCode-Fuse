// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TEXT_STRING_BUILDER_ELEMENT_H__
#define __APP_UNO_TEXT_STRING_BUILDER_ELEMENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Text {

struct StringBuilderElement;

struct StringBuilderElement__uType : ::uClassType
{
};

StringBuilderElement__uType* StringBuilderElement__typeof();

void StringBuilderElement___ObjInit(StringBuilderElement* __this);
StringBuilderElement* StringBuilderElement__New_1(::uStatic* __this);

struct StringBuilderElement : ::uObject
{
    ::uStrong< ::uArray*> chars;
    ::uStrong< StringBuilderElement*> next;

    void _ObjInit() { StringBuilderElement___ObjInit(this); }
};

}}}


#endif
