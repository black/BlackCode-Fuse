// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_SELECT_ENUMERATOR__FUSE_DRAWING_BATCHING_ENTRY___52EB05A8_H__
#define __APP_UNO_COLLECTIONS_SELECT_ENUMERATOR__FUSE_DRAWING_BATCHING_ENTRY___52EB05A8_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Models_ModelMesh.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelMesh; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh;

struct SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Uno_Content_Models_ModelMesh __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__uType* SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__typeof();

void SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh___ObjInit(SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* __this, ::uObject* source, ::uDelegate* select);
void SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__Dispose(SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* __this);
::app::Uno::Content::Models::ModelMesh* SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__get_Current(SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* __this);
bool SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__MoveNext(SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* __this);
SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select);
void SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__Reset(SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* __this);

struct SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uDelegate*> _select;

    void _ObjInit(::uObject* source, ::uDelegate* select) { SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh___ObjInit(this, source, select); }
    void Dispose() { SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__Dispose(this); }
    ::app::Uno::Content::Models::ModelMesh* Current() { return SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__get_Current(this); }
    bool MoveNext() { return SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__MoveNext(this); }
    void Reset() { SelectEnumerator__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__Reset(this); }
};

}}}


#endif
