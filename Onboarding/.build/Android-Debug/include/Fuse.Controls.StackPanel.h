// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Node.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IAddRemove-1.h>
namespace g{namespace Fuse{namespace Controls{struct StackPanel;}}}
namespace g{namespace Fuse{namespace Layouts{struct StackLayout;}}}
namespace g{namespace Fuse{struct StyleProperty1;}}

namespace g{
namespace Fuse{
namespace Controls{

// public class StackPanel :3725
// {
::g::Fuse::Controls::Panel_type* StackPanel_typeof();
void StackPanel__ctor_4_fn(StackPanel* __this);
void StackPanel__get_ContentAlignment_fn(StackPanel* __this, int* __retval);
void StackPanel__set_ContentAlignment_fn(StackPanel* __this, int* value);
void StackPanel__get_ItemSpacing_fn(StackPanel* __this, float* __retval);
void StackPanel__set_ItemSpacing_fn(StackPanel* __this, float* value);
void StackPanel__New2_fn(StackPanel** __retval);
void StackPanel__OnContentAlignmentChanged_fn(StackPanel* p);
void StackPanel__OnItemSpacingChanged_fn(StackPanel* p);
void StackPanel__OnOrientationChanged_fn(StackPanel* p);
void StackPanel__get_Orientation_fn(StackPanel* __this, int* __retval);
void StackPanel__set_Orientation_fn(StackPanel* __this, int* value);

struct StackPanel : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Layouts::StackLayout*> _stackLayout;
    static uSStrong< ::g::Fuse::StyleProperty1*> ContentAlignmentProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& ContentAlignmentProperty() { return StackPanel_typeof()->Init(), ContentAlignmentProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> ItemSpacingProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& ItemSpacingProperty() { return StackPanel_typeof()->Init(), ItemSpacingProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> OrientationProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& OrientationProperty() { return StackPanel_typeof()->Init(), OrientationProperty_; }

    void ctor_4();
    int ContentAlignment();
    void ContentAlignment(int value);
    float ItemSpacing();
    void ItemSpacing(float value);
    int Orientation();
    void Orientation(int value);
    static StackPanel* New2();
    static void OnContentAlignmentChanged(StackPanel* p);
    static void OnItemSpacingChanged(StackPanel* p);
    static void OnOrientationChanged(StackPanel* p);
};
// }

}}} // ::g::Fuse::Controls
