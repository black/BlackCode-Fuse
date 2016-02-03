// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.NativeViews.ContentControl.h>
#include <Fuse.iOS.NativeViews.GenericNativeView.h>
#include <Fuse.iOS.NativeViews.GraphicsView.h>
#include <Fuse.iOS.NativeViews.LeafNativeView.h>
#include <Fuse.iOS.NativeViews.NativeView.h>
#include <Fuse.iOS.NativeViews.NativeViewHost.h>
#include <Fuse.iOS.NativeViews.Panel.h>
#include <Fuse.iOS.NativeViews.ParentNativeView-1.h>
#include <Fuse.iOS.NativeViews.ScrollView.h>
#include <Fuse.Node.h>

namespace g{
namespace Fuse{
namespace iOS{
namespace NativeViews{

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\NativeViews\$.uno(16)
// -----------------------------------------------------------------

// internal sealed extern class ContentControl :16
// {
::g::Fuse::Behavior_type* ContentControl_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ContentControl);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.NativeViews.ContentControl", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::ContentControl_typeof()));
    type->fp_ctor_ = (void*)ContentControl__New1_fn;
    type->SetFields(3);
    return type;
}

// public generated ContentControl() :16
void ContentControl__ctor_3_fn(ContentControl* __this)
{
    __this->ctor_3();
}

// public generated ContentControl New() :16
void ContentControl__New1_fn(ContentControl** __retval)
{
    *__retval = ContentControl::New1();
}

// public generated ContentControl() [instance] :16
void ContentControl::ctor_3()
{
    ctor_2();
}

// public generated ContentControl New() [static] :16
ContentControl* ContentControl::New1()
{
    ContentControl* obj1 = (ContentControl*)uNew(ContentControl_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\NativeViews\$.uno(44)
// -----------------------------------------------------------------

// internal sealed extern class GenericNativeView :44
// {
::g::Fuse::Behavior_type* GenericNativeView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(GenericNativeView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.NativeViews.GenericNativeView", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::NativeView_typeof());
    type->fp_ctor_ = (void*)GenericNativeView__New1_fn;
    type->SetFields(3);
    return type;
}

// public generated GenericNativeView() :44
void GenericNativeView__ctor_2_fn(GenericNativeView* __this)
{
    __this->ctor_2();
}

// public generated GenericNativeView New() :44
void GenericNativeView__New1_fn(GenericNativeView** __retval)
{
    *__retval = GenericNativeView::New1();
}

// public generated GenericNativeView() [instance] :44
void GenericNativeView::ctor_2()
{
    ctor_1();
}

// public generated GenericNativeView New() [static] :44
GenericNativeView* GenericNativeView::New1()
{
    GenericNativeView* obj1 = (GenericNativeView*)uNew(GenericNativeView_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\NativeViews\$.uno(80)
// -----------------------------------------------------------------

// public sealed extern class GraphicsView :80
// {
::g::Fuse::Behavior_type* GraphicsView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.NativeViews.GraphicsView", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::GraphicsView_typeof()));
    type->fp_ctor_ = (void*)GraphicsView__New1_fn;
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GraphicsView__New1_fn, 0, true, GraphicsView_typeof(), 0));
    return type;
}

// public generated GraphicsView() :80
void GraphicsView__ctor_3_fn(GraphicsView* __this)
{
    __this->ctor_3();
}

// public generated GraphicsView New() :80
void GraphicsView__New1_fn(GraphicsView** __retval)
{
    *__retval = GraphicsView::New1();
}

// public generated GraphicsView() [instance] :80
void GraphicsView::ctor_3()
{
    ctor_2();
}

// public generated GraphicsView New() [static] :80
GraphicsView* GraphicsView::New1()
{
    GraphicsView* obj1 = (GraphicsView*)uNew(GraphicsView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\NativeViews\$.uno(223)
// ------------------------------------------------------------------

// internal sealed extern class LeafNativeView :223
// {
::g::Fuse::Behavior_type* LeafNativeView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(LeafNativeView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.NativeViews.LeafNativeView", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::NativeView_typeof());
    type->fp_ctor_ = (void*)LeafNativeView__New1_fn;
    type->SetFields(3);
    return type;
}

// public generated LeafNativeView() :223
void LeafNativeView__ctor_2_fn(LeafNativeView* __this)
{
    __this->ctor_2();
}

// public generated LeafNativeView New() :223
void LeafNativeView__New1_fn(LeafNativeView** __retval)
{
    *__retval = LeafNativeView::New1();
}

// public generated LeafNativeView() [instance] :223
void LeafNativeView::ctor_2()
{
    ctor_1();
}

// public generated LeafNativeView New() [static] :223
LeafNativeView* LeafNativeView::New1()
{
    LeafNativeView* obj1 = (LeafNativeView*)uNew(LeafNativeView_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\NativeViews\$.uno(254)
// ------------------------------------------------------------------

// public abstract extern class NativeView :254
// {
::g::Fuse::Behavior_type* NativeView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NativeView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.NativeViews.NativeView", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction("GetFrom", NULL, (void*)NativeView__GetFrom_fn, 0, true, NativeView_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// protected generated NativeView() :254
void NativeView__ctor_1_fn(NativeView* __this)
{
    __this->ctor_1();
}

// public static Fuse.iOS.NativeViews.NativeView GetFrom(Fuse.Node n) :256
void NativeView__GetFrom_fn(::g::Fuse::Node* n, NativeView** __retval)
{
    *__retval = NativeView::GetFrom(n);
}

// internal void OnTintColorChanged() :257
void NativeView__OnTintColorChanged_fn(NativeView* __this)
{
    __this->OnTintColorChanged();
}

// protected generated NativeView() [instance] :254
void NativeView::ctor_1()
{
    ctor_();
}

// internal void OnTintColorChanged() [instance] :257
void NativeView::OnTintColorChanged()
{
}

// public static Fuse.iOS.NativeViews.NativeView GetFrom(Fuse.Node n) [static] :256
NativeView* NativeView::GetFrom(::g::Fuse::Node* n)
{
    return NULL;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\NativeViews\$.uno(584)
// ------------------------------------------------------------------

// internal sealed extern class NativeViewHost :584
// {
::g::Fuse::Behavior_type* NativeViewHost_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NativeViewHost);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.NativeViews.NativeViewHost", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::NativeViewHost_typeof()));
    type->fp_ctor_ = (void*)NativeViewHost__New1_fn;
    type->SetFields(3);
    return type;
}

// public generated NativeViewHost() :584
void NativeViewHost__ctor_3_fn(NativeViewHost* __this)
{
    __this->ctor_3();
}

// public generated NativeViewHost New() :584
void NativeViewHost__New1_fn(NativeViewHost** __retval)
{
    *__retval = NativeViewHost::New1();
}

// public generated NativeViewHost() [instance] :584
void NativeViewHost::ctor_3()
{
    ctor_2();
}

// public generated NativeViewHost New() [static] :584
NativeViewHost* NativeViewHost::New1()
{
    NativeViewHost* obj1 = (NativeViewHost*)uNew(NativeViewHost_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\NativeViews\$.uno(667)
// ------------------------------------------------------------------

// internal sealed extern class Panel :667
// {
::g::Fuse::Behavior_type* Panel_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Panel);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.NativeViews.Panel", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::Panel_typeof()));
    type->fp_ctor_ = (void*)Panel__New1_fn;
    type->SetFields(3);
    return type;
}

// public generated Panel() :667
void Panel__ctor_3_fn(Panel* __this)
{
    __this->ctor_3();
}

// public generated Panel New() :667
void Panel__New1_fn(Panel** __retval)
{
    *__retval = Panel::New1();
}

// public generated Panel() [instance] :667
void Panel::ctor_3()
{
    ctor_2();
}

// public generated Panel New() [static] :667
Panel* Panel::New1()
{
    Panel* obj1 = (Panel*)uNew(Panel_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\NativeViews\$.uno(726)
// ------------------------------------------------------------------

// internal abstract extern class ParentNativeView<T> :726
// {
::g::Fuse::Behavior_type* ParentNativeView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ParentNativeView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.NativeViews.ParentNativeView`1", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::NativeView_typeof());
    type->SetFields(3);
    return type;
}

// protected generated ParentNativeView() :726
void ParentNativeView__ctor_2_fn(ParentNativeView* __this)
{
    __this->ctor_2();
}

// protected generated ParentNativeView() [instance] :726
void ParentNativeView::ctor_2()
{
    ctor_1();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\NativeViews\$.uno(767)
// ------------------------------------------------------------------

// public sealed extern class ScrollView :767
// {
::g::Fuse::Behavior_type* ScrollView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.NativeViews.ScrollView", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::ScrollView_typeof()));
    type->fp_ctor_ = (void*)ScrollView__New1_fn;
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ScrollView__New1_fn, 0, true, ScrollView_typeof(), 0));
    return type;
}

// public generated ScrollView() :767
void ScrollView__ctor_3_fn(ScrollView* __this)
{
    __this->ctor_3();
}

// public generated ScrollView New() :767
void ScrollView__New1_fn(ScrollView** __retval)
{
    *__retval = ScrollView::New1();
}

// public generated ScrollView() [instance] :767
void ScrollView::ctor_3()
{
    ctor_2();
}

// public generated ScrollView New() [static] :767
ScrollView* ScrollView::New1()
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

}}}} // ::g::Fuse::iOS::NativeViews
