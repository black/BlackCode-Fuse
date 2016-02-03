// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STAGE_H__
#define __APP_FUSE_STAGE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct UpdateListener; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_UpdateListener; } } }

namespace app {
namespace Fuse {

struct Stage;

struct Stage__uType : ::uClassType
{
};

Stage__uType* Stage__typeof();

void Stage___ObjInit(Stage* __this);
void Stage__Insert(Stage* __this, ::app::Uno::Collections::List__Fuse_UpdateListener* list, ::app::Fuse::UpdateListener* us);
Stage* Stage__New_1(::uStatic* __this);

struct Stage : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_UpdateListener*> Listeners;
    ::uStrong< ::app::Uno::Collections::List__Fuse_UpdateListener*> Onces;
    ::uStrong< ::app::Uno::Collections::List__Fuse_UpdateListener*> OncesPending;
    bool HasListenersRemoved;

    void _ObjInit() { Stage___ObjInit(this); }
    void Insert(::app::Uno::Collections::List__Fuse_UpdateListener* list, ::app::Fuse::UpdateListener* us) { Stage__Insert(this, list, us); }
};

}}


#endif
