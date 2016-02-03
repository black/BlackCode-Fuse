// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_F_EE9332A8_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_F_EE9332A8_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_L-9f7d6395.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Layouts_Orientation; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_;

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___uType* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___typeof();

void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this);
bool List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this);
List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_ List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* __this);

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_* source) { List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___Dispose(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* Current() { return List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation___MoveNext(this); }
};

}}}


#endif
