// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_INT4__H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_INT4__H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_int4_.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__int4; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_int4_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Animations_MixerHandle_int4_;

struct List1_Enumerator__Fuse_Animations_MixerHandle_int4___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Animations_MixerHandle_int4_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Animations_MixerHandle_int4___uType* List1_Enumerator__Fuse_Animations_MixerHandle_int4___typeof();

void List1_Enumerator__Fuse_Animations_MixerHandle_int4____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_int4_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int4_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_int4___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_int4_* __this);
::app::Fuse::Animations::MixerHandle__int4* List1_Enumerator__Fuse_Animations_MixerHandle_int4___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_int4_* __this);
bool List1_Enumerator__Fuse_Animations_MixerHandle_int4___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_int4_* __this);
List1_Enumerator__Fuse_Animations_MixerHandle_int4_ List1_Enumerator__Fuse_Animations_MixerHandle_int4___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int4_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_int4___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Animations_MixerHandle_int4_* __this);

struct List1_Enumerator__Fuse_Animations_MixerHandle_int4_
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int4_*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Animations::MixerHandle__int4*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int4_* source) { List1_Enumerator__Fuse_Animations_MixerHandle_int4____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Animations_MixerHandle_int4___Dispose(this); }
    ::app::Fuse::Animations::MixerHandle__int4* Current() { return List1_Enumerator__Fuse_Animations_MixerHandle_int4___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Animations_MixerHandle_int4___MoveNext(this); }
};

}}}


#endif
