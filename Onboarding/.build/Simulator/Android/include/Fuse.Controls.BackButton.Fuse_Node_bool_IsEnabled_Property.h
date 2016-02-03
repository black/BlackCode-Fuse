// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct BackButton__Fuse_Node_bool_IsEnabled_Property;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class BackButton.Fuse_Node_bool_IsEnabled_Property :7
// {
::g::Uno::UX::Property_type* BackButton__Fuse_Node_bool_IsEnabled_Property_typeof();
void BackButton__Fuse_Node_bool_IsEnabled_Property__ctor_1_fn(BackButton__Fuse_Node_bool_IsEnabled_Property* __this, ::g::Fuse::Node* obj);
void BackButton__Fuse_Node_bool_IsEnabled_Property__New1_fn(::g::Fuse::Node* obj, BackButton__Fuse_Node_bool_IsEnabled_Property** __retval);
void BackButton__Fuse_Node_bool_IsEnabled_Property__OnGet_fn(BackButton__Fuse_Node_bool_IsEnabled_Property* __this, bool* __retval);
void BackButton__Fuse_Node_bool_IsEnabled_Property__OnSet_fn(BackButton__Fuse_Node_bool_IsEnabled_Property* __this, bool* v, uObject* origin);

struct BackButton__Fuse_Node_bool_IsEnabled_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Node*> _obj;

    void ctor_1(::g::Fuse::Node* obj);
    static BackButton__Fuse_Node_bool_IsEnabled_Property* New1(::g::Fuse::Node* obj);
};
// }

}}} // ::g::Fuse::Controls
