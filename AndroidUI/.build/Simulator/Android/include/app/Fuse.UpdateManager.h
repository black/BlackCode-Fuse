// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_UPDATE_MANAGER_H__
#define __APP_FUSE_UPDATE_MANAGER_H__

#include <Uno.h>
namespace app { namespace Fuse { struct Stage; } }
namespace app { namespace Fuse { struct UpdateDispatcher; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Stage; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_UpdateListener; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Action; } } }

namespace app {
namespace Fuse {

extern ::uStaticStrong< ::app::Uno::Collections::List__Uno_Action*> UpdateManager___deferredActions;
extern int UpdateManager___frameIndex;
extern ::uStaticStrong< ::app::Uno::Collections::List__Fuse_Stage*> UpdateManager___stages;
extern ::uStaticStrong< ::app::Fuse::UpdateDispatcher*> UpdateManager__PrimaryDispatcher;

struct UpdateManager__uType : ::uClassType
{
};

UpdateManager__uType* UpdateManager__typeof();

void UpdateManager___TypeInit(::uStatic* __this);
void UpdateManager__AddAction(::uStatic* __this, ::uDelegate* pu, int stage);
void UpdateManager__AddDeferredAction(::uStatic* __this, ::uDelegate* pu);
void UpdateManager__AddOnceAction(::uStatic* __this, ::uDelegate* pu, int stage);
int UpdateManager__get_FrameIndex(::uStatic* __this);
void UpdateManager__IncreaseFrameIndex(::uStatic* __this);
void UpdateManager__PerformNextFrame(::uStatic* __this, ::uDelegate* pu, int stage);
void UpdateManager__RemoveAction(::uStatic* __this, ::uDelegate* pu, int stage);
bool UpdateManager__RemoveFrom(::uStatic* __this, ::app::Uno::Collections::List__Fuse_UpdateListener* list, ::uDelegate* action);
void UpdateManager__RemoveOnceAction(::uStatic* __this, ::uDelegate* pu, int stage);
void UpdateManager__Update(::uStatic* __this);
void UpdateManager__Update_1(::uStatic* __this, ::app::Fuse::Stage* stage);

}}


#endif
