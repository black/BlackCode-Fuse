// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_F_9386607A_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_F_9386607A_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_E-171b0acb.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Elements_StretchMode; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_;

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode___uType* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode___typeof();

void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchMode* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_* __this);
bool List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_* __this);
List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_ List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_* __this);

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchMode*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_* source) { List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode___Dispose(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchMode* Current() { return List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode___MoveNext(this); }
};

}}}


#endif
