// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_F_654D6250_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_F_654D6250_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Fuse_D-fc73587b.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Drawing_DynamicBrush; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_;

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush___uType* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush___typeof();

void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_* __this);
::app::Fuse::Animations::MixerHandle__Fuse_Drawing_DynamicBrush* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_* __this);
bool List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_* __this);
List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_ List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_* __this);

struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_DynamicBrush*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_* source) { List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush___Dispose(this); }
    ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_DynamicBrush* Current() { return List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush___MoveNext(this); }
};

}}}


#endif
