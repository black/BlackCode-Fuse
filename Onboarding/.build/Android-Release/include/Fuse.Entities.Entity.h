// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Node.h>
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct NodeBounds;}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class Entity :360
// {
::g::Fuse::Node_type* Entity_typeof();
void Entity__get_Children_fn(Entity* __this, uObject** __retval);
void Entity__add_ComponentDraw_fn(Entity* __this, uDelegate* value);
void Entity__remove_ComponentDraw_fn(Entity* __this, uDelegate* value);
void Entity__add_ComponentHitTest_fn(Entity* __this, uDelegate* value);
void Entity__remove_ComponentHitTest_fn(Entity* __this, uDelegate* value);
void Entity__Draw_fn(Entity* __this, ::g::Fuse::DrawContext* dc);
void Entity__GetSubNode_fn(Entity* __this, int* index, ::g::Fuse::Node** __retval);
void Entity__get_HasChildren_fn(Entity* __this, bool* __retval);
void Entity__get_HitTestBounds_fn(Entity* __this, ::g::Fuse::NodeBounds** __retval);
void Entity__OnChildAdded_fn(Entity* __this, Entity* c);
void Entity__OnChildRemoved_fn(Entity* __this, Entity* c);
void Entity__OnHitTest_fn(Entity* __this, ::g::Fuse::HitTestContext* htc);
void Entity__get_SubNodeCount_fn(Entity* __this, int* __retval);

struct Entity : ::g::Fuse::Node
{
    uStrong< ::g::Uno::Collections::ObservableList*> _children;
    uStrong<uObject*> _frustumComponent;
    uStrong<uDelegate*> ComponentDraw1;
    uStrong<uDelegate*> ComponentHitTest1;

    uObject* Children();
    void add_ComponentDraw(uDelegate* value);
    void remove_ComponentDraw(uDelegate* value);
    void add_ComponentHitTest(uDelegate* value);
    void remove_ComponentHitTest(uDelegate* value);
    bool HasChildren();
    void OnChildAdded(Entity* c);
    void OnChildRemoved(Entity* c);
};
// }

}}} // ::g::Fuse::Entities
