// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DIAGNOSTICS_ID_MAP__STRING_H__
#define __APP_UNO_DIAGNOSTICS_ID_MAP__STRING_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__int; } } }
namespace app { namespace Uno { namespace Collections { struct List__string; } } }

namespace app {
namespace Uno {
namespace Diagnostics {

struct IdMap__string;

struct IdMap__string__uType : ::uClassType
{
};

IdMap__string__uType* IdMap__string__typeof();

void IdMap__string___ObjInit(IdMap__string* __this, bool twoWay);
int IdMap__string__IdFor(IdMap__string* __this, ::uString* s);
IdMap__string* IdMap__string__New_1(::uStatic* __this, bool twoWay);
::uString* IdMap__string__StringFor(IdMap__string* __this, int id);

struct IdMap__string : ::uObject
{
    int _nextId;
    ::uStrong< ::app::Uno::Collections::Dictionary__string__int*> _objectToInt;
    ::uStrong< ::app::Uno::Collections::List__string*> _intToObject;
    bool _twoWay;

    void _ObjInit(bool twoWay) { IdMap__string___ObjInit(this, twoWay); }
    int IdFor(::uString* s) { return IdMap__string__IdFor(this, s); }
    ::uString* StringFor(int id) { return IdMap__string__StringFor(this, id); }
};

}}}


#endif
