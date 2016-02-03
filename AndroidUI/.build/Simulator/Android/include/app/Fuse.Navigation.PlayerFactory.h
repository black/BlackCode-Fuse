// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_PLAYER_FACTORY_H__
#define __APP_FUSE_NAVIGATION_PLAYER_FACTORY_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct NavigationTween; } } }

namespace app {
namespace Fuse {
namespace Navigation {

struct PlayerFactory__uType : ::uClassType
{
};

PlayerFactory__uType* PlayerFactory__typeof();

::uObject* PlayerFactory__Start(::uStatic* __this, double targetProgress, double startProgress, ::uObject* animators, ::uDelegate* doneCallback, ::uDelegate* progressSetterCallback, ::app::Fuse::Navigation::NavigationTween* navigationTween);

}}}


#endif
