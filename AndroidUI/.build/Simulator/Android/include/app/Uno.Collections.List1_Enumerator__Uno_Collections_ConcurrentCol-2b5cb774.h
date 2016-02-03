// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_COLLECTIONS_CONCURRENT_COL_2B5CB774_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_COLLECTIONS_CONCURRENT_COL_2B5CB774_H__

#include <app/Uno.Collections.ConcurrentCollection1_ModItem__Fuse_Animations_-c46c43e5.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_ConcurrentCollecti-62da0c27.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_;

struct List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___uType* List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___typeof();

void List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster____ObjInit(List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this, ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* source);
void List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___Dispose(List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this);
::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___get_Current(List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this);
bool List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___MoveNext(List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this);
List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_ List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* source);
void List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this);

struct List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*> _source;
    int _version;
    int _iterator;
    ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* source) { List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___Dispose(this); }
    ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster Current() { return List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___MoveNext(this); }
};

}}}


#endif
