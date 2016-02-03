// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_F_FFF599D4_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_F_FFF599D4_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_T-f29074da.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Triggers_Actions_TriggerDirection; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_;

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection___uType* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection___typeof();

void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Triggers_Actions_TriggerDirection* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_* __this);
bool List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_* __this);
List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_ List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_* __this);

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_Actions_TriggerDirection*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_* source) { List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection___Dispose(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_Actions_TriggerDirection* Current() { return List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection___MoveNext(this); }
};

}}}


#endif
