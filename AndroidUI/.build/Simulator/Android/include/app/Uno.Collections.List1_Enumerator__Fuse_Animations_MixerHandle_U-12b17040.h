// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_U_12B17040_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_U_12B17040_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_MixerHandle_Uno_UX-6a48e784.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Uno_UX_FileSource; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource_;

struct List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource___uType* List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource___typeof();

void List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this);
::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this);
bool List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this);
List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource_ List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* source);
void List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* __this);

struct List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource_
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_* source) { List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource___Dispose(this); }
    ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* Current() { return List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Animations_MixerHandle_Uno_UX_FileSource___MoveNext(this); }
};

}}}


#endif
