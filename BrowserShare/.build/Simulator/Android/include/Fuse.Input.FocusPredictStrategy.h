// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{struct FocusPredictStrategy;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{

// internal static class FocusPredictStrategy :68
// {
uClassType* FocusPredictStrategy_typeof();
void FocusPredictStrategy__Predict_fn(::g::Fuse::Node* n, int* direction, ::g::Fuse::Node** __retval);

struct FocusPredictStrategy : uObject
{
    static ::g::Fuse::Node* Predict(::g::Fuse::Node* n, int direction);
};
// }

}}} // ::g::Fuse::Input
