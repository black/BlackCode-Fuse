// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__FUSE_FONT__FUSE_CONTROL_90DC7DFB_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__FUSE_FONT__FUSE_CONTROL_90DC7DFB_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Fuse_-15576255.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Font__Fuse_Controls_Internal-6652b2a4.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer;

struct Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_Fuse_Font_Fuse_Controls_Internal_DefaultTextRenderer_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType* Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof();

void Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer___ObjInit(Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this, ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* source);
void Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Dispose(Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
::app::Uno::Collections::KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Current(Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
bool Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__MoveNext(Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);
Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* source);
void Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* __this);

struct Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer*> _source;
    ::app::Uno::Collections::KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer* source) { Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer Current() { return Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__MoveNext(this); }
};

}}}


#endif
