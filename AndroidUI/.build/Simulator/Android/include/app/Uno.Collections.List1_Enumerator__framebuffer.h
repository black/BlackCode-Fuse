// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FRAMEBUFFER_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FRAMEBUFFER_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__framebuffer.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__framebuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__framebuffer;

struct List1_Enumerator__framebuffer__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__framebuffer __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__framebuffer__uType* List1_Enumerator__framebuffer__typeof();

void List1_Enumerator__framebuffer___ObjInit(List1_Enumerator__framebuffer* __this, ::app::Uno::Collections::List__framebuffer* source);
void List1_Enumerator__framebuffer__Dispose(List1_Enumerator__framebuffer* __this);
::app::Uno::Graphics::Framebuffer* List1_Enumerator__framebuffer__get_Current(List1_Enumerator__framebuffer* __this);
bool List1_Enumerator__framebuffer__MoveNext(List1_Enumerator__framebuffer* __this);
List1_Enumerator__framebuffer List1_Enumerator__framebuffer__New_1(::uStatic* __this, ::app::Uno::Collections::List__framebuffer* source);
void List1_Enumerator__framebuffer__Uno_Collections_IEnumerator_Reset(List1_Enumerator__framebuffer* __this);

struct List1_Enumerator__framebuffer
{
    ::uStrong< ::app::Uno::Collections::List__framebuffer*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::Graphics::Framebuffer*> _current;

    void _ObjInit(::app::Uno::Collections::List__framebuffer* source) { List1_Enumerator__framebuffer___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__framebuffer__Dispose(this); }
    ::app::Uno::Graphics::Framebuffer* Current() { return List1_Enumerator__framebuffer__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__framebuffer__MoveNext(this); }
};

}}}


#endif
