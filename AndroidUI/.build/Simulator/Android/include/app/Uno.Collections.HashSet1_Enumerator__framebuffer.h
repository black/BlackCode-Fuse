// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_HASH_SET1_ENUMERATOR__FRAMEBUFFER_H__
#define __APP_UNO_COLLECTIONS_HASH_SET1_ENUMERATOR__FRAMEBUFFER_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__framebuffer.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__framebuffer__bool; } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct HashSet1_Enumerator__framebuffer;

struct HashSet1_Enumerator__framebuffer__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__framebuffer __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

HashSet1_Enumerator__framebuffer__uType* HashSet1_Enumerator__framebuffer__typeof();

void HashSet1_Enumerator__framebuffer___ObjInit(HashSet1_Enumerator__framebuffer* __this, ::app::Uno::Collections::Dictionary__framebuffer__bool* source);
void HashSet1_Enumerator__framebuffer__Dispose(HashSet1_Enumerator__framebuffer* __this);
::app::Uno::Graphics::Framebuffer* HashSet1_Enumerator__framebuffer__get_Current(HashSet1_Enumerator__framebuffer* __this);
bool HashSet1_Enumerator__framebuffer__MoveNext(HashSet1_Enumerator__framebuffer* __this);
HashSet1_Enumerator__framebuffer HashSet1_Enumerator__framebuffer__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__framebuffer__bool* source);
void HashSet1_Enumerator__framebuffer__Uno_Collections_IEnumerator_Reset(HashSet1_Enumerator__framebuffer* __this);

struct HashSet1_Enumerator__framebuffer
{
    ::uStrong< ::app::Uno::Collections::Dictionary__framebuffer__bool*> _source;
    ::uStrong< ::app::Uno::Graphics::Framebuffer*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__framebuffer__bool* source) { HashSet1_Enumerator__framebuffer___ObjInit(this, source); }
    void Dispose() { HashSet1_Enumerator__framebuffer__Dispose(this); }
    ::app::Uno::Graphics::Framebuffer* Current() { return HashSet1_Enumerator__framebuffer__get_Current(this); }
    bool MoveNext() { return HashSet1_Enumerator__framebuffer__MoveNext(this); }
};

}}}


#endif
