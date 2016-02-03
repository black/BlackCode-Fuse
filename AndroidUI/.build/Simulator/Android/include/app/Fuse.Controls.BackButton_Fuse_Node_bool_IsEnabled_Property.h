// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_BACK_BUTTON_FUSE_NODE_BOOL_IS_ENABLED_PROPERTY_H__
#define __APP_FUSE_CONTROLS_BACK_BUTTON_FUSE_NODE_BOOL_IS_ENABLED_PROPERTY_H__

#include <app/Uno.UX.Property__bool.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Controls {

struct BackButton_Fuse_Node_bool_IsEnabled_Property;

struct BackButton_Fuse_Node_bool_IsEnabled_Property__uType : ::app::Uno::UX::Property__bool__uType
{
};

BackButton_Fuse_Node_bool_IsEnabled_Property__uType* BackButton_Fuse_Node_bool_IsEnabled_Property__typeof();

void BackButton_Fuse_Node_bool_IsEnabled_Property___ObjInit_1(BackButton_Fuse_Node_bool_IsEnabled_Property* __this, ::app::Fuse::Node* obj);
BackButton_Fuse_Node_bool_IsEnabled_Property* BackButton_Fuse_Node_bool_IsEnabled_Property__New_1(::uStatic* __this, ::app::Fuse::Node* obj);
bool BackButton_Fuse_Node_bool_IsEnabled_Property__OnGet(BackButton_Fuse_Node_bool_IsEnabled_Property* __this);
void BackButton_Fuse_Node_bool_IsEnabled_Property__OnSet(BackButton_Fuse_Node_bool_IsEnabled_Property* __this, bool v, ::uObject* origin);

struct BackButton_Fuse_Node_bool_IsEnabled_Property : ::app::Uno::UX::Property__bool
{
    ::uStrong< ::app::Fuse::Node*> _obj;

    void _ObjInit_1(::app::Fuse::Node* obj) { BackButton_Fuse_Node_bool_IsEnabled_Property___ObjInit_1(this, obj); }
};

}}}


#endif
