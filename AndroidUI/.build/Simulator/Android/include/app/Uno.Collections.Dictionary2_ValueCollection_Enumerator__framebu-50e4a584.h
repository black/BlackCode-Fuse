// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__FRAMEBU_50E4A584_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__FRAMEBU_50E4A584_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__framebuffer__bool; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__framebuffer__bool;

struct Dictionary2_ValueCollection_Enumerator__framebuffer__bool__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__framebuffer__bool__uType* Dictionary2_ValueCollection_Enumerator__framebuffer__bool__typeof();

void Dictionary2_ValueCollection_Enumerator__framebuffer__bool___ObjInit(Dictionary2_ValueCollection_Enumerator__framebuffer__bool* __this, ::app::Uno::Collections::Dictionary__framebuffer__bool* source);
void Dictionary2_ValueCollection_Enumerator__framebuffer__bool__Dispose(Dictionary2_ValueCollection_Enumerator__framebuffer__bool* __this);
bool Dictionary2_ValueCollection_Enumerator__framebuffer__bool__MoveNext(Dictionary2_ValueCollection_Enumerator__framebuffer__bool* __this);
Dictionary2_ValueCollection_Enumerator__framebuffer__bool Dictionary2_ValueCollection_Enumerator__framebuffer__bool__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__framebuffer__bool* source);
void Dictionary2_ValueCollection_Enumerator__framebuffer__bool__Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__framebuffer__bool* __this);

struct Dictionary2_ValueCollection_Enumerator__framebuffer__bool
{
    ::uStrong< ::app::Uno::Collections::Dictionary__framebuffer__bool*> _source;
    bool _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__framebuffer__bool* source) { Dictionary2_ValueCollection_Enumerator__framebuffer__bool___ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__framebuffer__bool__Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__framebuffer__bool__MoveNext(this); }
};

}}}


#endif
