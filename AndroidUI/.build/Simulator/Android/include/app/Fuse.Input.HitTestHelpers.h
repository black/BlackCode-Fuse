// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_HIT_TEST_HELPERS_H__
#define __APP_FUSE_INPUT_HIT_TEST_HELPERS_H__

#include <Uno.h>
namespace app { namespace Fuse { struct HitTestResult; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Input {

struct HitTestHelpers__uType : ::uClassType
{
};

HitTestHelpers__uType* HitTestHelpers__typeof();

::app::Fuse::HitTestResult* HitTestHelpers__HitTestNearest(::uStatic* __this, ::app::Fuse::Node* root, ::app::Uno::Float2 point);

}}}


#endif
