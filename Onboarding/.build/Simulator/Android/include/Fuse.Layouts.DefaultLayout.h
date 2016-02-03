// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct DefaultLayout;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class DefaultLayout :147
// {
::g::Fuse::Layouts::Layout_type* DefaultLayout_typeof();
void DefaultLayout__ctor_1_fn(DefaultLayout* __this);
void DefaultLayout__ArrangePaddingBox_fn(DefaultLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Uno::Float2* availableSize, int* flags);
void DefaultLayout__GetContentSize_fn(DefaultLayout* __this, uObject* elements, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void DefaultLayout__GetElementsSize_fn(DefaultLayout* __this, uObject* elements, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void DefaultLayout__IsMarginBoxDependent_fn(DefaultLayout* __this, ::g::Fuse::Node* child, int* __retval);
void DefaultLayout__New1_fn(DefaultLayout** __retval);

struct DefaultLayout : ::g::Fuse::Layouts::Layout
{
    void ctor_1();
    ::g::Uno::Float2 GetElementsSize(uObject* elements, ::g::Uno::Float2 fillSize, int fillSet);
    static DefaultLayout* New1();
};
// }

}}} // ::g::Fuse::Layouts
