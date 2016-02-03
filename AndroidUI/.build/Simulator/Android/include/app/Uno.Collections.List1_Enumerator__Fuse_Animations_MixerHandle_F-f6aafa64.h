// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_F_F6AAFA64_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_F_F6AAFA64_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_A-aff3378d.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Animations_AnimationVariant; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_;

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant___uType* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant___typeof();

void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Animations_AnimationVariant* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_* __this);
bool List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_* __this);
List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_ List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_* __this);

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_AnimationVariant*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_* source) { List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant___Dispose(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Animations_AnimationVariant* Current() { return List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant___MoveNext(this); }
};

}}}


#endif
