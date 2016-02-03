// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_F_44344A6A_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_F_44344A6A_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_N-cf05b355.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Navigation_SwipeDirection; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_;

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___uType* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___typeof();

void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this);
bool List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this);
List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_ List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* __this);

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_* source) { List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___Dispose(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* Current() { return List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection___MoveNext(this); }
};

}}}


#endif
