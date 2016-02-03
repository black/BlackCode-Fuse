// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_INT__H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_INT__H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_int_.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__int; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_int_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Animations_MixerHandle_int_;

struct List1_Enumerator__Fuse_Animations_MixerHandle_int___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Animations_MixerHandle_int_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Animations_MixerHandle_int___uType* List1_Enumerator__Fuse_Animations_MixerHandle_int___typeof();

void List1_Enumerator__Fuse_Animations_MixerHandle_int____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_int_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_int___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_int_* __this);
::app::Fuse::Animations::MixerHandle__int* List1_Enumerator__Fuse_Animations_MixerHandle_int___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_int_* __this);
bool List1_Enumerator__Fuse_Animations_MixerHandle_int___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_int_* __this);
List1_Enumerator__Fuse_Animations_MixerHandle_int_ List1_Enumerator__Fuse_Animations_MixerHandle_int___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_int___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Animations_MixerHandle_int_* __this);

struct List1_Enumerator__Fuse_Animations_MixerHandle_int_
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int_*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Animations::MixerHandle__int*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int_* source) { List1_Enumerator__Fuse_Animations_MixerHandle_int____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Animations_MixerHandle_int___Dispose(this); }
    ::app::Fuse::Animations::MixerHandle__int* Current() { return List1_Enumerator__Fuse_Animations_MixerHandle_int___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Animations_MixerHandle_int___MoveNext(this); }
};

}}}


#endif
