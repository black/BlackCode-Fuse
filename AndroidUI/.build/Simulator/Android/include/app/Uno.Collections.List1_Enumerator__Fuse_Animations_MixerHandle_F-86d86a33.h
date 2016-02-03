// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_F_86D86A33_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_F_86D86A33_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_T-335c594e.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Triggers_TriggerBypassMode; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_;

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode___uType* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode___typeof();

void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Triggers_TriggerBypassMode* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_* __this);
bool List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_* __this);
List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_ List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_* __this);

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_TriggerBypassMode*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_* source) { List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode___Dispose(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_TriggerBypassMode* Current() { return List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode___MoveNext(this); }
};

}}}


#endif
