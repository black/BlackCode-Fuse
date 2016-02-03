// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_TRAVERSE_NODE_EXTENSIONS_H__
#define __APP_FUSE_INPUT_TRAVERSE_NODE_EXTENSIONS_H__

#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Input {

struct TraverseNodeExtensions__uType : ::uClassType
{
};

TraverseNodeExtensions__uType* TraverseNodeExtensions__typeof();

::app::Fuse::Node* TraverseNodeExtensions__FindNextChild(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Node* currentChild);
::app::Fuse::Node* TraverseNodeExtensions__FindNextChild_1(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* filter);
::app::Fuse::Node* TraverseNodeExtensions__FindNextSibling(::uStatic* __this, ::app::Fuse::Node* node);
::app::Fuse::Node* TraverseNodeExtensions__FindParent(::uStatic* __this, ::app::Fuse::Node* n, ::uDelegate* criteria);
::app::Fuse::Node* TraverseNodeExtensions__FindPreviousChild(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Node* currentChild);
::app::Fuse::Node* TraverseNodeExtensions__FindPreviousChild_1(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* filter);
::app::Fuse::Node* TraverseNodeExtensions__FindPreviousSibling(::uStatic* __this, ::app::Fuse::Node* node);
::app::Fuse::Node* TraverseNodeExtensions__FindRoot(::uStatic* __this, ::app::Fuse::Node* n);

}}}


#endif
