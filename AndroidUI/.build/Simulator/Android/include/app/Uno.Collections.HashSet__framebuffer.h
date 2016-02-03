// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_HASH_SET__FRAMEBUFFER_H__
#define __APP_UNO_COLLECTIONS_HASH_SET__FRAMEBUFFER_H__

#include <app/Uno.Collections.IEnumerable__framebuffer.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__framebuffer__bool; } } }
namespace app { namespace Uno { namespace Collections { struct HashSet1_Enumerator__framebuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct HashSet__framebuffer;

struct HashSet__framebuffer__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__framebuffer __interface_0;
};

HashSet__framebuffer__uType* HashSet__framebuffer__typeof();

::uObject* HashSet__framebuffer__GetEnumerator_boxed(HashSet__framebuffer* __this);
void HashSet__framebuffer___ObjInit(HashSet__framebuffer* __this);
void HashSet__framebuffer___ObjInit_1(HashSet__framebuffer* __this, ::uObject* items);
bool HashSet__framebuffer__Add(HashSet__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item);
void HashSet__framebuffer__Clear(HashSet__framebuffer* __this);
bool HashSet__framebuffer__Contains(HashSet__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item);
int HashSet__framebuffer__get_Count(HashSet__framebuffer* __this);
::app::Uno::Collections::HashSet1_Enumerator__framebuffer HashSet__framebuffer__GetEnumerator(HashSet__framebuffer* __this);
HashSet__framebuffer* HashSet__framebuffer__New_1(::uStatic* __this);
HashSet__framebuffer* HashSet__framebuffer__New_2(::uStatic* __this, ::uObject* items);
bool HashSet__framebuffer__Remove(HashSet__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item);
bool HashSet__framebuffer__SetEquals(HashSet__framebuffer* __this, ::uObject* that);

struct HashSet__framebuffer : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__framebuffer__bool*> _map;

    ::uObject* GetEnumerator_boxed() { return HashSet__framebuffer__GetEnumerator_boxed(this); }
    void _ObjInit() { HashSet__framebuffer___ObjInit(this); }
    void _ObjInit_1(::uObject* items) { HashSet__framebuffer___ObjInit_1(this, items); }
    bool Add(::app::Uno::Graphics::Framebuffer* item) { return HashSet__framebuffer__Add(this, item); }
    void Clear() { HashSet__framebuffer__Clear(this); }
    bool Contains(::app::Uno::Graphics::Framebuffer* item) { return HashSet__framebuffer__Contains(this, item); }
    int Count() { return HashSet__framebuffer__get_Count(this); }
    ::app::Uno::Collections::HashSet1_Enumerator__framebuffer GetEnumerator();
    bool Remove(::app::Uno::Graphics::Framebuffer* item) { return HashSet__framebuffer__Remove(this, item); }
    bool SetEquals(::uObject* that) { return HashSet__framebuffer__SetEquals(this, that); }
};

}}}

#include <app/Uno.Collections.HashSet1_Enumerator__framebuffer.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::HashSet1_Enumerator__framebuffer HashSet__framebuffer::GetEnumerator() { return HashSet__framebuffer__GetEnumerator(this); }

}}}


#endif
