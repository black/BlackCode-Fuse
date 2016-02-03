// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_F_5891FA72_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_F_5891FA72_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_A-8f9f93ac.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Animations_KeyframeInterpolation; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_;

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation___uType* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation___typeof();

void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Animations_KeyframeInterpolation* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_* __this);
bool List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_* __this);
List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_ List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_* __this);

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Animations_KeyframeInterpolation*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_* source) { List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation___Dispose(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Animations_KeyframeInterpolation* Current() { return List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation___MoveNext(this); }
};

}}}


#endif
