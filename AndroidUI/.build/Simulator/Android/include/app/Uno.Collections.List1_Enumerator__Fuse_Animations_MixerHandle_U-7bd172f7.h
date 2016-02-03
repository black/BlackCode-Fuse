// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_U_7BD172F7_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_U_7BD172F7_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Uno_Pl-5087d200.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Uno_Platform_iOS_StatusBarStyle; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_;

struct List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle___uType* List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle___typeof();

void List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_* __this);
::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle* List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_* __this);
bool List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_* __this);
List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_ List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_* __this);

struct List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_* source) { List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle___Dispose(this); }
    ::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle* Current() { return List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle___MoveNext(this); }
};

}}}


#endif
