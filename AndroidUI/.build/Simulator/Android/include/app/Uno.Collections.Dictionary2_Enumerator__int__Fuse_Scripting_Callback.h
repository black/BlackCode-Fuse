// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__INT__FUSE_SCRIPTING_CALLBACK_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__INT__FUSE_SCRIPTING_CALLBACK_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_int_F-1264c9c5.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Scripting_Callback.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Fuse_Scripting_Callback; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__int__Fuse_Scripting_Callback;

struct Dictionary2_Enumerator__int__Fuse_Scripting_Callback__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_int_Fuse_Scripting_Callback_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__int__Fuse_Scripting_Callback__uType* Dictionary2_Enumerator__int__Fuse_Scripting_Callback__typeof();

void Dictionary2_Enumerator__int__Fuse_Scripting_Callback___ObjInit(Dictionary2_Enumerator__int__Fuse_Scripting_Callback* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback* source);
void Dictionary2_Enumerator__int__Fuse_Scripting_Callback__Dispose(Dictionary2_Enumerator__int__Fuse_Scripting_Callback* __this);
::app::Uno::Collections::KeyValuePair__int__Fuse_Scripting_Callback Dictionary2_Enumerator__int__Fuse_Scripting_Callback__get_Current(Dictionary2_Enumerator__int__Fuse_Scripting_Callback* __this);
bool Dictionary2_Enumerator__int__Fuse_Scripting_Callback__MoveNext(Dictionary2_Enumerator__int__Fuse_Scripting_Callback* __this);
Dictionary2_Enumerator__int__Fuse_Scripting_Callback Dictionary2_Enumerator__int__Fuse_Scripting_Callback__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback* source);
void Dictionary2_Enumerator__int__Fuse_Scripting_Callback__Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__int__Fuse_Scripting_Callback* __this);

struct Dictionary2_Enumerator__int__Fuse_Scripting_Callback
{
    ::uStrong< ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback*> _source;
    ::app::Uno::Collections::KeyValuePair__int__Fuse_Scripting_Callback _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback* source) { Dictionary2_Enumerator__int__Fuse_Scripting_Callback___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__int__Fuse_Scripting_Callback__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__int__Fuse_Scripting_Callback Current() { return Dictionary2_Enumerator__int__Fuse_Scripting_Callback__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__int__Fuse_Scripting_Callback__MoveNext(this); }
};

}}}


#endif
