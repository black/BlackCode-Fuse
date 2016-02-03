// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__FRAMEBUFFER__INT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__FRAMEBUFFER__INT_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_frame-8bc68d90.h>
#include <app/Uno.Collections.KeyValuePair__framebuffer__int.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__framebuffer__int; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__framebuffer__int;

struct Dictionary2_Enumerator__framebuffer__int__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_framebuffer_int_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__framebuffer__int__uType* Dictionary2_Enumerator__framebuffer__int__typeof();

void Dictionary2_Enumerator__framebuffer__int___ObjInit(Dictionary2_Enumerator__framebuffer__int* __this, ::app::Uno::Collections::Dictionary__framebuffer__int* source);
void Dictionary2_Enumerator__framebuffer__int__Dispose(Dictionary2_Enumerator__framebuffer__int* __this);
::app::Uno::Collections::KeyValuePair__framebuffer__int Dictionary2_Enumerator__framebuffer__int__get_Current(Dictionary2_Enumerator__framebuffer__int* __this);
bool Dictionary2_Enumerator__framebuffer__int__MoveNext(Dictionary2_Enumerator__framebuffer__int* __this);
Dictionary2_Enumerator__framebuffer__int Dictionary2_Enumerator__framebuffer__int__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__framebuffer__int* source);
void Dictionary2_Enumerator__framebuffer__int__Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__framebuffer__int* __this);

struct Dictionary2_Enumerator__framebuffer__int
{
    ::uStrong< ::app::Uno::Collections::Dictionary__framebuffer__int*> _source;
    ::app::Uno::Collections::KeyValuePair__framebuffer__int _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__framebuffer__int* source) { Dictionary2_Enumerator__framebuffer__int___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__framebuffer__int__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__framebuffer__int Current() { return Dictionary2_Enumerator__framebuffer__int__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__framebuffer__int__MoveNext(this); }
};

}}}


#endif
