#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ConcurrentCollection1_ModItem__Fuse_Animations_-c46c43e5.h>
#include <app/Uno.Collections.ConcurrentCollection1_ModItem__Uno_EventHandler.h>
#include <app/Uno.EventHandler.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster__uType* ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster__typeof()
{
    static ::uStaticStrong<ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster__uType*> type;
    if (type != NULL) return type;

    type = (ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster__uType*)::uAllocStructType(sizeof(ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster__uType), "Uno.Collections.ConcurrentCollection<Fuse.Animations.IMixerMaster>.ModItem", sizeof(ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster), 0, 1, 0);

    type->SetStrongRefs(
        "Item", offsetof(ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster, Item));

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ConcurrentCollection1_ModItem__Uno_EventHandler__uType* ConcurrentCollection1_ModItem__Uno_EventHandler__typeof()
{
    static ::uStaticStrong<ConcurrentCollection1_ModItem__Uno_EventHandler__uType*> type;
    if (type != NULL) return type;

    type = (ConcurrentCollection1_ModItem__Uno_EventHandler__uType*)::uAllocStructType(sizeof(ConcurrentCollection1_ModItem__Uno_EventHandler__uType), "Uno.Collections.ConcurrentCollection<Uno.EventHandler>.ModItem", sizeof(ConcurrentCollection1_ModItem__Uno_EventHandler), 0, 1, 0);

    type->SetStrongRefs(
        "Item", offsetof(ConcurrentCollection1_ModItem__Uno_EventHandler, Item));

    return type;
}

}}}
