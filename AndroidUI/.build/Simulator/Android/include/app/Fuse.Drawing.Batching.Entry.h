// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_BATCHING_ENTRY_H__
#define __APP_FUSE_DRAWING_BATCHING_ENTRY_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelMesh; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Batching {

struct Entry;

struct Entry__uType : ::uClassType
{
};

Entry__uType* Entry__typeof();

void Entry___ObjInit(Entry* __this, ::app::Uno::Content::Models::ModelMesh* m, int instanceId);
Entry* Entry__New_1(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* m, int instanceId);

struct Entry : ::uObject
{
    ::uStrong< ::app::Uno::Content::Models::ModelMesh*> Mesh;
    int InstanceIndex;

    void _ObjInit(::app::Uno::Content::Models::ModelMesh* m, int instanceId) { Entry___ObjInit(this, m, instanceId); }
};

}}}}


#endif
