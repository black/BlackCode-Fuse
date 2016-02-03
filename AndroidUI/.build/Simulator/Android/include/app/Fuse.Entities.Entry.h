// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_ENTRY_H__
#define __APP_FUSE_ENTITIES_ENTRY_H__

#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Mesh; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct Entry;

struct Entry__uType : ::uStructType
{
};

Entry__uType* Entry__typeof();

void Entry___ObjInit(Entry* __this, ::app::Fuse::Entities::Mesh* m, ::app::Uno::Float4x4 t, ::app::Uno::Float4x4 worldInverse);
Entry Entry__New_1(::uStatic* __this, ::app::Fuse::Entities::Mesh* m, ::app::Uno::Float4x4 t, ::app::Uno::Float4x4 worldInverse);

struct Entry
{
    ::uStrong< ::app::Fuse::Entities::Mesh*> Mesh;
    ::app::Uno::Float4x4 World;
    ::app::Uno::Float4x4 WorldInverse;

    void _ObjInit(::app::Fuse::Entities::Mesh* m, ::app::Uno::Float4x4 t, ::app::Uno::Float4x4 worldInverse) { Entry___ObjInit(this, m, t, worldInverse); }
};

}}}


#endif
