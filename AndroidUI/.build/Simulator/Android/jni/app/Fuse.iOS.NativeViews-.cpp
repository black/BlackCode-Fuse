#include <app/Fuse.iOS.NativeViews.ContentControl.h>
#include <app/Fuse.iOS.NativeViews.GenericNativeView.h>
#include <app/Fuse.iOS.NativeViews.GraphicsView.h>
#include <app/Fuse.iOS.NativeViews.LeafNativeView.h>
#include <app/Fuse.iOS.NativeViews.NativeView.h>
#include <app/Fuse.iOS.NativeViews.NativeViewHost.h>
#include <app/Fuse.iOS.NativeViews.Panel.h>
#include <app/Fuse.iOS.NativeViews.ScrollView.h>
#include <app/Fuse.Node.h>

namespace app {
namespace Fuse {
namespace iOS {
namespace NativeViews {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContentControl__uType* ContentControl__typeof()
{
    static ::uStaticStrong<ContentControl__uType*> type;
    if (type != NULL) return type;

    type = (ContentControl__uType*)::uAllocClassType(sizeof(ContentControl__uType), "Fuse.iOS.NativeViews.ContentControl", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_ContentControl__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ContentControl__New_1, 0, true, ContentControl__typeof()));

    ::uRegisterType(type);
    return type;
}

void ContentControl___ObjInit_3(ContentControl* __this)
{
    ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_ContentControl___ObjInit_2(__this);
}

ContentControl* ContentControl__New_1(::uStatic* __this)
{
    ContentControl* inst = (ContentControl*)::uAllocObject(sizeof(ContentControl), ContentControl__typeof());
    inst->_ObjInit_3();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GenericNativeView__uType* GenericNativeView__typeof()
{
    static ::uStaticStrong<GenericNativeView__uType*> type;
    if (type != NULL) return type;

    type = (GenericNativeView__uType*)::uAllocClassType(sizeof(GenericNativeView__uType), "Fuse.iOS.NativeViews.GenericNativeView", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeViews::NativeView__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", GenericNativeView__New_1, 0, true, GenericNativeView__typeof()));

    ::uRegisterType(type);
    return type;
}

void GenericNativeView___ObjInit_2(GenericNativeView* __this)
{
    ::app::Fuse::iOS::NativeViews::NativeView___ObjInit_1(__this);
}

GenericNativeView* GenericNativeView__New_1(::uStatic* __this)
{
    GenericNativeView* inst = (GenericNativeView*)::uAllocObject(sizeof(GenericNativeView), GenericNativeView__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsView__uType* GraphicsView__typeof()
{
    static ::uStaticStrong<GraphicsView__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsView__uType*)::uAllocClassType(sizeof(GraphicsView__uType), "Fuse.iOS.NativeViews.GraphicsView", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_GraphicsView__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", GraphicsView__New_1, 0, true, GraphicsView__typeof()));

    ::uRegisterType(type);
    return type;
}

void GraphicsView___ObjInit_3(GraphicsView* __this)
{
    ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_GraphicsView___ObjInit_2(__this);
}

GraphicsView* GraphicsView__New_1(::uStatic* __this)
{
    GraphicsView* inst = (GraphicsView*)::uAllocObject(sizeof(GraphicsView), GraphicsView__typeof());
    inst->_ObjInit_3();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LeafNativeView__uType* LeafNativeView__typeof()
{
    static ::uStaticStrong<LeafNativeView__uType*> type;
    if (type != NULL) return type;

    type = (LeafNativeView__uType*)::uAllocClassType(sizeof(LeafNativeView__uType), "Fuse.iOS.NativeViews.LeafNativeView", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeViews::NativeView__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", LeafNativeView__New_1, 0, true, LeafNativeView__typeof()));

    ::uRegisterType(type);
    return type;
}

void LeafNativeView___ObjInit_2(LeafNativeView* __this)
{
    ::app::Fuse::iOS::NativeViews::NativeView___ObjInit_1(__this);
}

LeafNativeView* LeafNativeView__New_1(::uStatic* __this)
{
    LeafNativeView* inst = (LeafNativeView*)::uAllocObject(sizeof(LeafNativeView), LeafNativeView__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeView__uType* NativeView__typeof()
{
    static ::uStaticStrong<NativeView__uType*> type;
    if (type != NULL) return type;

    type = (NativeView__uType*)::uAllocClassType(sizeof(NativeView__uType), "Fuse.iOS.NativeViews.NativeView", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))NativeView__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))NativeView__OnUnrooted;

    type->SetFunctions(2,
        ::uNewFunction("GetFrom", NativeView__GetFrom, 0, true, NativeView__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("OnTintColorChanged", NativeView__OnTintColorChanged, 0, false));

    ::uRegisterType(type);
    return type;
}

void NativeView___ObjInit_1(NativeView* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

NativeView* NativeView__GetFrom(::uStatic* __this, ::app::Fuse::Node* n)
{
    return NULL;
}

void NativeView__OnRooted(NativeView* __this, ::app::Fuse::Node* n)
{
}

void NativeView__OnTintColorChanged(NativeView* __this)
{
}

void NativeView__OnUnrooted(NativeView* __this, ::app::Fuse::Node* n)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeViewHost__uType* NativeViewHost__typeof()
{
    static ::uStaticStrong<NativeViewHost__uType*> type;
    if (type != NULL) return type;

    type = (NativeViewHost__uType*)::uAllocClassType(sizeof(NativeViewHost__uType), "Fuse.iOS.NativeViews.NativeViewHost", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_NativeViewHost__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", NativeViewHost__New_1, 0, true, NativeViewHost__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeViewHost___ObjInit_3(NativeViewHost* __this)
{
    ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_NativeViewHost___ObjInit_2(__this);
}

NativeViewHost* NativeViewHost__New_1(::uStatic* __this)
{
    NativeViewHost* inst = (NativeViewHost*)::uAllocObject(sizeof(NativeViewHost), NativeViewHost__typeof());
    inst->_ObjInit_3();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Panel__uType* Panel__typeof()
{
    static ::uStaticStrong<Panel__uType*> type;
    if (type != NULL) return type;

    type = (Panel__uType*)::uAllocClassType(sizeof(Panel__uType), "Fuse.iOS.NativeViews.Panel", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_Panel__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Panel__New_1, 0, true, Panel__typeof()));

    ::uRegisterType(type);
    return type;
}

void Panel___ObjInit_3(Panel* __this)
{
    ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_Panel___ObjInit_2(__this);
}

Panel* Panel__New_1(::uStatic* __this)
{
    Panel* inst = (Panel*)::uAllocObject(sizeof(Panel), Panel__typeof());
    inst->_ObjInit_3();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\NativeViews\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ScrollView__uType* ScrollView__typeof()
{
    static ::uStaticStrong<ScrollView__uType*> type;
    if (type != NULL) return type;

    type = (ScrollView__uType*)::uAllocClassType(sizeof(ScrollView__uType), "Fuse.iOS.NativeViews.ScrollView", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_ScrollView__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ScrollView__New_1, 0, true, ScrollView__typeof()));

    ::uRegisterType(type);
    return type;
}

void ScrollView___ObjInit_3(ScrollView* __this)
{
    ::app::Fuse::iOS::NativeViews::ParentNativeView__Fuse_Controls_ScrollView___ObjInit_2(__this);
}

ScrollView* ScrollView__New_1(::uStatic* __this)
{
    ScrollView* inst = (ScrollView*)::uAllocObject(sizeof(ScrollView), ScrollView__typeof());
    inst->_ObjInit_3();
    return inst;
}

}}}}
