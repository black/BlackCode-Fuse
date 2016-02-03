// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_SELECT_ENUMERABLE__FUSE_DRAWING_BATCHING_ENTRY___DA8FF0B7_H__
#define __APP_UNO_COLLECTIONS_SELECT_ENUMERABLE__FUSE_DRAWING_BATCHING_ENTRY___DA8FF0B7_H__

#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_ModelMesh.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh;

struct SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Content_Models_ModelMesh __interface_0;
};

SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__uType* SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__typeof();

void SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh___ObjInit(SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* __this, ::uObject* source, ::uDelegate* select);
::uObject* SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__GetEnumerator(SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* __this);
SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh* SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select);

struct SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uDelegate*> _select;

    void _ObjInit(::uObject* source, ::uDelegate* select) { SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh___ObjInit(this, source, select); }
    ::uObject* GetEnumerator() { return SelectEnumerable__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__GetEnumerator(this); }
};

}}}


#endif
