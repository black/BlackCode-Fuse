// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__UNO_TYPE__OBJECT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__UNO_TYPE__OBJECT_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Uno_T-ca462506.h>
#include <app/Uno.Collections.KeyValuePair__Uno_Type__object.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_Type__object; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__Uno_Type__object;

struct Dictionary2_Enumerator__Uno_Type__object__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_Uno_Type_object_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__Uno_Type__object__uType* Dictionary2_Enumerator__Uno_Type__object__typeof();

void Dictionary2_Enumerator__Uno_Type__object___ObjInit(Dictionary2_Enumerator__Uno_Type__object* __this, ::app::Uno::Collections::Dictionary__Uno_Type__object* source);
void Dictionary2_Enumerator__Uno_Type__object__Dispose(Dictionary2_Enumerator__Uno_Type__object* __this);
::app::Uno::Collections::KeyValuePair__Uno_Type__object Dictionary2_Enumerator__Uno_Type__object__get_Current(Dictionary2_Enumerator__Uno_Type__object* __this);
bool Dictionary2_Enumerator__Uno_Type__object__MoveNext(Dictionary2_Enumerator__Uno_Type__object* __this);
Dictionary2_Enumerator__Uno_Type__object Dictionary2_Enumerator__Uno_Type__object__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_Type__object* source);
void Dictionary2_Enumerator__Uno_Type__object__Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__Uno_Type__object* __this);

struct Dictionary2_Enumerator__Uno_Type__object
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Uno_Type__object*> _source;
    ::app::Uno::Collections::KeyValuePair__Uno_Type__object _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Uno_Type__object* source) { Dictionary2_Enumerator__Uno_Type__object___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__Uno_Type__object__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__Uno_Type__object Current() { return Dictionary2_Enumerator__Uno_Type__object__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__Uno_Type__object__MoveNext(this); }
};

}}}


#endif
