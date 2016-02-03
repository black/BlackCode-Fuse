// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_F_92BF0FA1_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_F_92BF0FA1_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_L-11bf21e.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Layouts_Metric; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_;

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___uType* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___typeof();

void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this);
bool List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this);
List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_ List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* __this);

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_* source) { List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___Dispose(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* Current() { return List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric___MoveNext(this); }
};

}}}


#endif
