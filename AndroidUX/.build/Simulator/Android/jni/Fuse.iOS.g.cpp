// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Fuse_iOS_bundle.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.GraphicsView.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.PlainTextEdit.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Slider.h>
#include <Fuse.Controls.Switch.h>
#include <Fuse.Controls.TextBlock.h>
#include <Fuse.Controls.TextEdit.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.DrawContext.h>
#include <Fuse.iOS.Blitter.h>
#include <Fuse.iOS.Controls.Button.h>
#include <Fuse.iOS.Controls.Circle.h>
#include <Fuse.iOS.Controls.Image.h>
#include <Fuse.iOS.Controls.Rectangle.h>
#include <Fuse.iOS.Controls.Slider.h>
#include <Fuse.iOS.Controls.Switch.h>
#include <Fuse.iOS.Controls.TextBlock.h>
#include <Fuse.iOS.Controls.TextInput.h>
#include <Fuse.iOS.Controls.WebView.h>
#include <Fuse.iOS.NativeStyle.h>
#include <Fuse.iOS.NativeStyle.Template.h>
#include <Fuse.iOS.NativeStyle.Template.Template1.h>
#include <Fuse.iOS.NativeStyle.Template.Template2.Factory.h>
#include <Fuse.iOS.NativeStyle.Template.Template2.Factory1.h>
#include <Fuse.iOS.NativeStyle.Template.Template2.h>
#include <Fuse.iOS.NativeTemplate.h>
#include <Fuse.iOS.NativeViews.ContentControl.h>
#include <Fuse.iOS.NativeViews.GenericNativeView.h>
#include <Fuse.iOS.NativeViews.GraphicsView.h>
#include <Fuse.iOS.NativeViews.NativeViewHost.h>
#include <Fuse.iOS.NativeViews.Panel.h>
#include <Fuse.iOS.NativeViews.ScrollView.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.iOS.TextRenderer.h>
#include <Fuse.Node.h>
#include <Fuse.SizeFlags.h>
#include <Fuse.Style.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.Themes.GraphicsStyle.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Platform.iOS.StatusBarAnimation.h>
#include <Uno.Platform.iOS.StatusBarStyle.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.UX.IFactory.h>
#include <Uno.UX.Template-1.h>
static uType* TYPES[31];

namespace g{
namespace Fuse{
namespace iOS{

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\$.uno(1287)
// -------------------------------------------------------

// internal sealed class Blitter :1287
// {
// static Blitter() :1287
static void Blitter__cctor__fn(uType* __type)
{
    Blitter::Singleton_ = Blitter::New1();
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.iOS.Blitter", options);
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    ::TYPES[0] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[2] = ::g::Fuse_iOS_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::iOS::Blitter, _draw_3aa4251e), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::iOS::Blitter, Blit_v_3aa4251e_1_7_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::iOS::Blitter, Blit_verts_3aa4251e_1_6_6), 0,
        Blitter_typeof(), (uintptr_t)&::g::Fuse::iOS::Blitter::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated Blitter() :1287
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :1291
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :1287
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :1287
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :1287
void Blitter::ctor_()
{
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :1291
void Blitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    _draw_3aa4251e.BlendEnabled(true);
    _draw_3aa4251e.CullFace(0);
    _draw_3aa4251e.BlendSrcAlpha(7);
    _draw_3aa4251e.BlendDstRgb(3);
    _draw_3aa4251e.Use();
    _draw_3aa4251e.Attrib1(0, 2, Blit_v_3aa4251e_1_7_1, 8, 0);
    _draw_3aa4251e.Uniform2(1, size);
    _draw_3aa4251e.Uniform2(2, pos);
    _draw_3aa4251e.Uniform12(3, localToClipTransform);
    _draw_3aa4251e.Sampler2(4, vt);
    _draw_3aa4251e.DrawArrays(uPtr(Blit_verts_3aa4251e_1_6_6)->Length());
}

// private generated void init_DrawCalls() [instance] :1287
void Blitter::init_DrawCalls()
{
    uArray* verts_3aa4251e_1_6_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_3aa4251e_1_7_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_3aa4251e_1_6_0), 0);
    Blit_verts_3aa4251e_1_6_6 = verts_3aa4251e_1_6_0;
    _draw_3aa4251e = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::Fuse_iOS_bundle::Blitterb638ee0c());
}

// public generated Blitter New() [static] :1287
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\.cache\GeneratedCode\$.uno(37)
// --------------------------------------------------------------------------

// public partial sealed class NativeStyle.Template.Template2.Factory :37
// {
// static Factory() :44
static void NativeStyle__Template__Template2__Factory__cctor__fn(uType* __type)
{
}

NativeStyle__Template__Template2__Factory_type* NativeStyle__Template__Template2__Factory_typeof()
{
    static uSStrong<NativeStyle__Template__Template2__Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template__Template2__Factory);
    options.TypeSize = sizeof(NativeStyle__Template__Template2__Factory_type);
    type = (NativeStyle__Template__Template2__Factory_type*)uClassType::New("Fuse.iOS.NativeStyle.Template.Template2.Factory", options);
    type->fp_cctor_ = NativeStyle__Template__Template2__Factory__cctor__fn;
    type->interface0.fp_New1 = (void(*)(uObject*, uObject**))NativeStyle__Template__Template2__Factory__New1_fn;
    ::TYPES[3] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::IFactory_typeof(), offsetof(NativeStyle__Template__Template2__Factory_type, interface0));
    type->SetFields(0,
        ::g::Fuse::iOS::NativeStyle__Template__Template2_typeof(), offsetof(::g::Fuse::iOS::NativeStyle__Template__Template2__Factory, __parent1), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("New", NULL, (void*)NativeStyle__Template__Template2__Factory__New1_fn, 0, false, uObject_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__Template2__Factory__New2_fn, 0, true, NativeStyle__Template__Template2__Factory_typeof(), 1, ::g::Fuse::iOS::NativeStyle__Template__Template2_typeof()));
    return type;
}

// public Factory(Fuse.iOS.NativeStyle.Template.Template2 parent) :40
void NativeStyle__Template__Template2__Factory__ctor__fn(NativeStyle__Template__Template2__Factory* __this, ::g::Fuse::iOS::NativeStyle__Template__Template2* parent)
{
    __this->ctor_(parent);
}

// public object New() :47
void NativeStyle__Template__Template2__Factory__New1_fn(NativeStyle__Template__Template2__Factory* __this, uObject** __retval)
{
    *__retval = __this->New1();
}

// public Factory New(Fuse.iOS.NativeStyle.Template.Template2 parent) :40
void NativeStyle__Template__Template2__Factory__New2_fn(::g::Fuse::iOS::NativeStyle__Template__Template2* parent, NativeStyle__Template__Template2__Factory** __retval)
{
    *__retval = NativeStyle__Template__Template2__Factory::New2(parent);
}

// public Factory(Fuse.iOS.NativeStyle.Template.Template2 parent) [instance] :40
void NativeStyle__Template__Template2__Factory::ctor_(::g::Fuse::iOS::NativeStyle__Template__Template2* parent)
{
    __parent1 = parent;
}

// public object New() [instance] :47
uObject* NativeStyle__Template__Template2__Factory::New1()
{
    ::g::Fuse::iOS::Controls::TextInput* self = ::g::Fuse::iOS::Controls::TextInput::New1();
    return self;
}

// public Factory New(Fuse.iOS.NativeStyle.Template.Template2 parent) [static] :40
NativeStyle__Template__Template2__Factory* NativeStyle__Template__Template2__Factory::New2(::g::Fuse::iOS::NativeStyle__Template__Template2* parent)
{
    NativeStyle__Template__Template2__Factory* obj1 = (NativeStyle__Template__Template2__Factory*)uNew(NativeStyle__Template__Template2__Factory_typeof());
    obj1->ctor_(parent);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\.cache\GeneratedCode\$.uno(53)
// --------------------------------------------------------------------------

// public partial sealed class NativeStyle.Template.Template2.Factory1 :53
// {
// static Factory1() :60
static void NativeStyle__Template__Template2__Factory1__cctor__fn(uType* __type)
{
}

NativeStyle__Template__Template2__Factory1_type* NativeStyle__Template__Template2__Factory1_typeof()
{
    static uSStrong<NativeStyle__Template__Template2__Factory1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template__Template2__Factory1);
    options.TypeSize = sizeof(NativeStyle__Template__Template2__Factory1_type);
    type = (NativeStyle__Template__Template2__Factory1_type*)uClassType::New("Fuse.iOS.NativeStyle.Template.Template2.Factory1", options);
    type->fp_cctor_ = NativeStyle__Template__Template2__Factory1__cctor__fn;
    type->interface0.fp_New1 = (void(*)(uObject*, uObject**))NativeStyle__Template__Template2__Factory1__New1_fn;
    ::TYPES[3] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::IFactory_typeof(), offsetof(NativeStyle__Template__Template2__Factory1_type, interface0));
    type->SetFields(0,
        ::g::Fuse::iOS::NativeStyle__Template__Template2_typeof(), offsetof(::g::Fuse::iOS::NativeStyle__Template__Template2__Factory1, __parent1), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("New", NULL, (void*)NativeStyle__Template__Template2__Factory1__New1_fn, 0, false, uObject_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__Template2__Factory1__New2_fn, 0, true, NativeStyle__Template__Template2__Factory1_typeof(), 1, ::g::Fuse::iOS::NativeStyle__Template__Template2_typeof()));
    return type;
}

// public Factory1(Fuse.iOS.NativeStyle.Template.Template2 parent) :56
void NativeStyle__Template__Template2__Factory1__ctor__fn(NativeStyle__Template__Template2__Factory1* __this, ::g::Fuse::iOS::NativeStyle__Template__Template2* parent)
{
    __this->ctor_(parent);
}

// public object New() :63
void NativeStyle__Template__Template2__Factory1__New1_fn(NativeStyle__Template__Template2__Factory1* __this, uObject** __retval)
{
    *__retval = __this->New1();
}

// public Factory1 New(Fuse.iOS.NativeStyle.Template.Template2 parent) :56
void NativeStyle__Template__Template2__Factory1__New2_fn(::g::Fuse::iOS::NativeStyle__Template__Template2* parent, NativeStyle__Template__Template2__Factory1** __retval)
{
    *__retval = NativeStyle__Template__Template2__Factory1::New2(parent);
}

// public Factory1(Fuse.iOS.NativeStyle.Template.Template2 parent) [instance] :56
void NativeStyle__Template__Template2__Factory1::ctor_(::g::Fuse::iOS::NativeStyle__Template__Template2* parent)
{
    __parent1 = parent;
}

// public object New() [instance] :63
uObject* NativeStyle__Template__Template2__Factory1::New1()
{
    ::g::Fuse::iOS::TextRenderer* self = ::g::Fuse::iOS::TextRenderer::New1();
    return self;
}

// public Factory1 New(Fuse.iOS.NativeStyle.Template.Template2 parent) [static] :56
NativeStyle__Template__Template2__Factory1* NativeStyle__Template__Template2__Factory1::New2(::g::Fuse::iOS::NativeStyle__Template__Template2* parent)
{
    NativeStyle__Template__Template2__Factory1* obj1 = (NativeStyle__Template__Template2__Factory1*)uNew(NativeStyle__Template__Template2__Factory1_typeof());
    obj1->ctor_(parent);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\.cache\GeneratedCode\$.uno(5)
// -------------------------------------------------------------------------

// public partial sealed class NativeStyle :5
// {
// static NativeStyle() :95
static void NativeStyle__cctor__fn(uType* __type)
{
}

::g::Fuse::Style_type* NativeStyle_typeof()
{
    static uSStrong< ::g::Fuse::Style_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle);
    options.TypeSize = sizeof(::g::Fuse::Style_type);
    type = (::g::Fuse::Style_type*)uClassType::New("Fuse.iOS.NativeStyle", options);
    type->SetBase(::g::Fuse::Style_typeof());
    type->fp_ctor_ = (void*)NativeStyle__New2_fn;
    type->fp_cctor_ = NativeStyle__cctor__fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Style__Apply_fn;
    ::TYPES[4] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::GraphicsView_typeof());
    ::TYPES[5] = ::g::Fuse::Style_typeof();
    ::TYPES[6] = ::g::Uno::UX::ITemplate_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Fuse::Style_type, interface0));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__New2_fn, 0, true, NativeStyle_typeof(), 0));
    return type;
}

// public NativeStyle() :98
void NativeStyle__ctor_1_fn(NativeStyle* __this)
{
    __this->ctor_1();
}

// internal void InitializeUX() :102
void NativeStyle__InitializeUX_fn(NativeStyle* __this)
{
    __this->InitializeUX();
}

// public NativeStyle New() :98
void NativeStyle__New2_fn(NativeStyle** __retval)
{
    *__retval = NativeStyle::New2();
}

// public NativeStyle() [instance] :98
void NativeStyle::ctor_1()
{
    ctor_();
    InitializeUX();
}

// internal void InitializeUX() [instance] :102
void NativeStyle::InitializeUX()
{
    NativeStyle__Template* collection1;
    ::g::Fuse::iOS::NativeTemplate* temp = ::g::Fuse::iOS::NativeTemplate::New1();
    collection1 = NativeStyle__Template::New1(this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    NativeStyle__Template* temp1 = collection1;
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Uno.UX.ITemplate*/])), (uObject*)temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Uno.UX.ITemplate*/])), (uObject*)temp1);
}

// public NativeStyle New() [static] :98
NativeStyle* NativeStyle::New2()
{
    NativeStyle* obj2 = (NativeStyle*)uNew(NativeStyle_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\$.uno(781)
// ------------------------------------------------------

// internal sealed class NativeTemplate :781
// {
NativeTemplate_type* NativeTemplate_typeof()
{
    static uSStrong<NativeTemplate_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeTemplate);
    options.TypeSize = sizeof(NativeTemplate_type);
    type = (NativeTemplate_type*)uClassType::New("Fuse.iOS.NativeTemplate", options);
    type->fp_ctor_ = (void*)NativeTemplate__New1_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))NativeTemplate__Apply_fn;
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[8] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[9] = ::g::Fuse::Controls::NativeViewHost_typeof();
    ::TYPES[10] = ::g::Fuse::Behavior_typeof();
    ::TYPES[11] = ::g::Fuse::Controls::Button_typeof();
    ::TYPES[12] = ::g::Fuse::Controls::Switch_typeof();
    ::TYPES[13] = ::g::Fuse::Controls::TextEdit_typeof();
    ::TYPES[14] = ::g::Fuse::Controls::TextBlock_typeof();
    ::TYPES[15] = ::g::Fuse::Controls::Slider_typeof();
    ::TYPES[16] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[17] = ::g::Fuse::Controls::Rectangle_typeof();
    ::TYPES[18] = ::g::Fuse::Controls::Circle_typeof();
    ::TYPES[19] = ::g::Fuse::Controls::WebView_typeof();
    ::TYPES[20] = ::g::Fuse::Controls::ContentControl_typeof();
    ::TYPES[21] = ::g::Fuse::Controls::GraphicsView_typeof();
    ::TYPES[22] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[23] = ::g::Uno::Bool_typeof();
    ::TYPES[24] = ::g::Fuse::Controls::Control_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(NativeTemplate_type, interface0));
    return type;
}

// public generated NativeTemplate() :781
void NativeTemplate__ctor__fn(NativeTemplate* __this)
{
    __this->ctor_();
}

// public bool Apply(object obj) :801
void NativeTemplate__Apply_fn(NativeTemplate* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Apply(obj);
}

// private bool HaveGraphicsViewAncestor(Fuse.Node node) :783
void NativeTemplate__HaveGraphicsViewAncestor_fn(NativeTemplate* __this, ::g::Fuse::Node* node, bool* __retval)
{
    *__retval = __this->HaveGraphicsViewAncestor(node);
}

// public generated NativeTemplate New() :781
void NativeTemplate__New1_fn(NativeTemplate** __retval)
{
    *__retval = NativeTemplate::New1();
}

// public generated NativeTemplate() [instance] :781
void NativeTemplate::ctor_()
{
}

// public bool Apply(object obj) [instance] :801
bool NativeTemplate::Apply(uObject* obj)
{
    bool gva = HaveGraphicsViewAncestor(uAs< ::g::Fuse::Node*>(obj, ::TYPES[7/*Fuse.Node*/]));

    if (gva)
        return true;

    ::g::Fuse::Controls::Panel* panel = uAs< ::g::Fuse::Controls::Panel*>(obj, ::TYPES[8/*Fuse.Controls.Panel*/]);

    if (uIs(obj, ::TYPES[9/*Fuse.Controls.NativeViewHost*/]))
    {
        uPtr(panel)->AddStyleBehavior(::g::Fuse::iOS::NativeViews::NativeViewHost::New1());
        return true;
    }

    bool addedNativeView = false;

    if (panel != NULL)
    {
        uPtr(panel)->AddStyleBehavior(::g::Fuse::iOS::NativeViews::Panel::New1());
        addedNativeView = true;

        if (uIs(panel, ::TYPES[11/*Fuse.Controls.Button*/]))
            panel->AddStyleChild(::g::Fuse::iOS::Controls::Button::New1());

        if (uIs(panel, ::TYPES[12/*Fuse.Controls.Switch*/]))
            panel->AddStyleChild(::g::Fuse::iOS::Controls::Switch::New1());

        if (uIs(panel, ::TYPES[13/*Fuse.Controls.TextEdit*/]))
            panel->AddStyleChild(::g::Fuse::iOS::Controls::TextInput::New1());

        if (uIs(panel, ::TYPES[14/*Fuse.Controls.TextBlock*/]))
            panel->AddStyleChild(::g::Fuse::iOS::Controls::TextBlock::New1());

        if (uIs(panel, ::TYPES[15/*Fuse.Controls.Slider*/]))
            panel->AddStyleChild(::g::Fuse::iOS::Controls::Slider::New1());

        if (uIs(panel, ::TYPES[16/*Fuse.Controls.Image*/]))
            panel->AddStyleChild(::g::Fuse::iOS::Controls::Image::New1());

        if (uIs(panel, ::TYPES[17/*Fuse.Controls.Rectangle*/]))
            panel->AddStyleChild(::g::Fuse::iOS::Controls::Rectangle::New2());

        if (uIs(panel, ::TYPES[18/*Fuse.Controls.Circle*/]))
            panel->AddStyleChild(::g::Fuse::iOS::Controls::Circle::New2());

        if (uIs(panel, ::TYPES[19/*Fuse.Controls.WebView*/]))
            panel->AddStyleChild(::g::Fuse::iOS::Controls::WebView::New1());
    }

    ::g::Fuse::Controls::ContentControl* contentControl = uAs< ::g::Fuse::Controls::ContentControl*>(obj, ::TYPES[20/*Fuse.Controls.ContentControl*/]);

    if (contentControl != NULL)
    {
        addedNativeView = true;

        if (uIs(contentControl, ::TYPES[21/*Fuse.Controls.GraphicsView*/]))
            uPtr(contentControl)->AddStyleBehavior(::g::Fuse::iOS::NativeViews::GraphicsView::New1());
        else
            contentControl->AddStyleBehavior(::g::Fuse::iOS::NativeViews::ContentControl::New1());
    }

    ::g::Fuse::Controls::ScrollView* scrollView = uAs< ::g::Fuse::Controls::ScrollView*>(obj, ::TYPES[22/*Fuse.Controls.ScrollView*/]);

    if (scrollView != NULL)
    {
        uPtr(scrollView)->AddStyleBehavior(::g::Fuse::iOS::NativeViews::ScrollView::New1());
        addedNativeView = true;
    }

    if (!addedNativeView)
    {
        ::g::Fuse::Controls::Control* c = uAs< ::g::Fuse::Controls::Control*>(obj, ::TYPES[24/*Fuse.Controls.Control*/]);

        if (c != NULL)
            uPtr(c)->AddStyleBehavior(::g::Fuse::iOS::NativeViews::GenericNativeView::New1());
    }

    return true;
}

// private bool HaveGraphicsViewAncestor(Fuse.Node node) [instance] :783
bool NativeTemplate::HaveGraphicsViewAncestor(::g::Fuse::Node* node)
{
    if (node == NULL)
        return false;

    if (uPtr(node)->Parent() == NULL)
        return false;

    if (uIs(node, ::TYPES[9/*Fuse.Controls.NativeViewHost*/]))
        return false;

    if (uIs(uPtr(node)->Parent(), ::TYPES[21/*Fuse.Controls.GraphicsView*/]))
        return true;

    return HaveGraphicsViewAncestor(uPtr(node)->Parent());
}

// public generated NativeTemplate New() [static] :781
NativeTemplate* NativeTemplate::New1()
{
    NativeTemplate* obj1 = (NativeTemplate*)uNew(NativeTemplate_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\$.uno(946)
// ------------------------------------------------------

// public sealed class StatusBarConfig :946
// {
// static StatusBarConfig() :946
static void StatusBarConfig__cctor__fn(uType* __type)
{
    StatusBarConfig::_stack_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[25/*Uno.Collections.List<Fuse.iOS.StatusBarConfig>*/]));
}

::g::Fuse::Behavior_type* StatusBarConfig_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(StatusBarConfig);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.iOS.StatusBarConfig", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)StatusBarConfig__New1_fn;
    type->fp_cctor_ = StatusBarConfig__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))StatusBarConfig__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))StatusBarConfig__OnUnrooted_fn;
    ::TYPES[25] = ::g::Uno::Collections::List_typeof()->MakeType(StatusBarConfig_typeof());
    ::TYPES[23] = ::g::Uno::Bool_typeof();
    ::TYPES[26] = ::g::Uno::Int_typeof();
    type->SetFields(3,
        ::g::Uno::Platform::iOS::StatusBarAnimation_typeof(), offsetof(::g::Fuse::iOS::StatusBarConfig, _animation), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::StatusBarConfig, _hasAnimation), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::StatusBarConfig, _hasIsVisible), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::StatusBarConfig, _hasStyle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::StatusBarConfig, _isVisible), 0,
        ::g::Uno::Platform::iOS::StatusBarStyle_typeof(), offsetof(::g::Fuse::iOS::StatusBarConfig, _style), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(StatusBarConfig_typeof()), (uintptr_t)&::g::Fuse::iOS::StatusBarConfig::_stack_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Animation", NULL, (void*)StatusBarConfig__get_Animation_fn, 0, false, ::g::Uno::Platform::iOS::StatusBarAnimation_typeof(), 0),
        new uFunction("set_Animation", NULL, (void*)StatusBarConfig__set_Animation_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Platform::iOS::StatusBarAnimation_typeof()),
        new uFunction("get_IsVisible", NULL, (void*)StatusBarConfig__get_IsVisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsVisible", NULL, (void*)StatusBarConfig__set_IsVisible_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)StatusBarConfig__New1_fn, 0, true, StatusBarConfig_typeof(), 0),
        new uFunction("get_Style", NULL, (void*)StatusBarConfig__get_Style_fn, 0, false, ::g::Uno::Platform::iOS::StatusBarStyle_typeof(), 0),
        new uFunction("set_Style", NULL, (void*)StatusBarConfig__set_Style_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Platform::iOS::StatusBarStyle_typeof()));
    return type;
}

// public generated StatusBarConfig() :946
void StatusBarConfig__ctor_1_fn(StatusBarConfig* __this)
{
    __this->ctor_1();
}

// public Uno.Platform.iOS.StatusBarAnimation get_Animation() :986
void StatusBarConfig__get_Animation_fn(StatusBarConfig* __this, int* __retval)
{
    *__retval = __this->Animation();
}

// public void set_Animation(Uno.Platform.iOS.StatusBarAnimation value) :987
void StatusBarConfig__set_Animation_fn(StatusBarConfig* __this, int* value)
{
    __this->Animation(*value);
}

// private static void Apply() :1045
void StatusBarConfig__Apply_fn()
{
    StatusBarConfig::Apply();
}

// public bool get_IsVisible() :953
void StatusBarConfig__get_IsVisible_fn(StatusBarConfig* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void set_IsVisible(bool value) :954
void StatusBarConfig__set_IsVisible_fn(StatusBarConfig* __this, bool* value)
{
    __this->IsVisible(*value);
}

// public generated StatusBarConfig New() :946
void StatusBarConfig__New1_fn(StatusBarConfig** __retval)
{
    *__retval = StatusBarConfig::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :999
void StatusBarConfig__OnRooted_fn(StatusBarConfig* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    ::g::Uno::Collections::List__Add_fn(uPtr(StatusBarConfig::_stack()), __this);
    StatusBarConfig::Apply();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1007
void StatusBarConfig__OnUnrooted_fn(StatusBarConfig* __this, ::g::Fuse::Node* parentNode)
{
    bool ret8;
    ::g::Uno::Collections::List__Remove_fn(uPtr(StatusBarConfig::_stack()), __this, &ret8);
    StatusBarConfig::Apply();
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// public Uno.Platform.iOS.StatusBarStyle get_Style() :969
void StatusBarConfig__get_Style_fn(StatusBarConfig* __this, int* __retval)
{
    *__retval = __this->Style();
}

// public void set_Style(Uno.Platform.iOS.StatusBarStyle value) :970
void StatusBarConfig__set_Style_fn(StatusBarConfig* __this, int* value)
{
    __this->Style(*value);
}

uSStrong< ::g::Uno::Collections::List*> StatusBarConfig::_stack_;

// public generated StatusBarConfig() [instance] :946
void StatusBarConfig::ctor_1()
{
    ctor_();
}

// public Uno.Platform.iOS.StatusBarAnimation get_Animation() [instance] :986
int StatusBarConfig::Animation()
{
    return _animation;
}

// public void set_Animation(Uno.Platform.iOS.StatusBarAnimation value) [instance] :987
void StatusBarConfig::Animation(int value)
{
    if (!_hasAnimation || (_animation != value))
    {
        _animation = value;
        _hasAnimation = true;
        StatusBarConfig::Apply();
    }
}

// public bool get_IsVisible() [instance] :953
bool StatusBarConfig::IsVisible()
{
    return _isVisible;
}

// public void set_IsVisible(bool value) [instance] :954
void StatusBarConfig::IsVisible(bool value)
{
    if (!_hasIsVisible || (_isVisible != value))
    {
        _isVisible = value;
        _hasIsVisible = true;
        StatusBarConfig::Apply();
    }
}

// public Uno.Platform.iOS.StatusBarStyle get_Style() [instance] :969
int StatusBarConfig::Style()
{
    return _style;
}

// public void set_Style(Uno.Platform.iOS.StatusBarStyle value) [instance] :970
void StatusBarConfig::Style(int value)
{
    if (!_hasStyle || (_style != value))
    {
        _style = value;
        _hasStyle = true;
        StatusBarConfig::Apply();
    }
}

// private static void Apply() [static] :1045
void StatusBarConfig::Apply()
{
    StatusBarConfig_typeof()->Init();
}

// public generated StatusBarConfig New() [static] :946
StatusBarConfig* StatusBarConfig::New1()
{
    StatusBarConfig* obj1 = (StatusBarConfig*)uNew(StatusBarConfig_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\.cache\GeneratedCode\$.uno(7)
// -------------------------------------------------------------------------

// public partial sealed class NativeStyle.Template :7
// {
// static Template() :80
static void NativeStyle__Template__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* NativeStyle__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.iOS.NativeStyle.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::GraphicsView_typeof()));
    type->fp_cctor_ = NativeStyle__Template__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))NativeStyle__Template__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[27] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::TextBlock_typeof());
    ::TYPES[28] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::PlainTextEdit_typeof());
    ::TYPES[5] = ::g::Fuse::Style_typeof();
    ::TYPES[6] = ::g::Uno::UX::ITemplate_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::iOS::NativeStyle_typeof(), offsetof(::g::Fuse::iOS::NativeStyle__Template, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__New1_fn, 0, true, NativeStyle__Template_typeof(), 1, ::g::Fuse::iOS::NativeStyle_typeof()));
    return type;
}

// public Template(Fuse.iOS.NativeStyle parent) :10
void NativeStyle__Template__ctor_1_fn(NativeStyle__Template* __this, ::g::Fuse::iOS::NativeStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template New(Fuse.iOS.NativeStyle parent) :10
void NativeStyle__Template__New1_fn(::g::Fuse::iOS::NativeStyle* parent, NativeStyle__Template** __retval)
{
    *__retval = NativeStyle__Template::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.GraphicsView self) :83
void NativeStyle__Template__OnApply_fn(NativeStyle__Template* __this, ::g::Fuse::Controls::GraphicsView* self)
{
    NativeStyle__Template__Template1* collection1;
    NativeStyle__Template__Template2* collection2;
    ::g::Fuse::Style* temp = ::g::Fuse::Style::New1();
    collection1 = NativeStyle__Template__Template1::New1(__this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    NativeStyle__Template__Template1* temp1 = collection1;
    collection2 = NativeStyle__Template__Template2::New1(__this);
    uPtr(collection2)->Cascade(true);
    true;
    uPtr(collection2)->AffectSubtypes(true);
    true;
    NativeStyle__Template__Template2* temp2 = collection2;
    ::g::Fuse::Themes::GraphicsStyle* temp3 = ::g::Fuse::Themes::GraphicsStyle::New2();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Uno.UX.ITemplate*/])), (uObject*)temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Uno.UX.ITemplate*/])), (uObject*)temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Uno.UX.ITemplate*/])), (uObject*)temp3);
    uPtr(self)->AddStyleStyle(temp);
}

// public Template(Fuse.iOS.NativeStyle parent) [instance] :10
void NativeStyle__Template::ctor_1(::g::Fuse::iOS::NativeStyle* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template New(Fuse.iOS.NativeStyle parent) [static] :10
NativeStyle__Template* NativeStyle__Template::New1(::g::Fuse::iOS::NativeStyle* parent)
{
    NativeStyle__Template* obj3 = (NativeStyle__Template*)uNew(NativeStyle__Template_typeof());
    obj3->ctor_1(parent);
    return obj3;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\.cache\GeneratedCode\$.uno(14)
// --------------------------------------------------------------------------

// public partial sealed class NativeStyle.Template.Template1 :14
// {
// static Template1() :21
static void NativeStyle__Template__Template1__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* NativeStyle__Template__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.iOS.NativeStyle.Template.Template1", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::TextBlock_typeof()));
    type->fp_cctor_ = NativeStyle__Template__Template1__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))NativeStyle__Template__Template1__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::iOS::NativeStyle__Template_typeof(), offsetof(::g::Fuse::iOS::NativeStyle__Template__Template1, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__Template1__New1_fn, 0, true, NativeStyle__Template__Template1_typeof(), 1, ::g::Fuse::iOS::NativeStyle__Template_typeof()));
    return type;
}

// public Template1(Fuse.iOS.NativeStyle.Template parent) :17
void NativeStyle__Template__Template1__ctor_1_fn(NativeStyle__Template__Template1* __this, ::g::Fuse::iOS::NativeStyle__Template* parent)
{
    __this->ctor_1(parent);
}

// public Template1 New(Fuse.iOS.NativeStyle.Template parent) :17
void NativeStyle__Template__Template1__New1_fn(::g::Fuse::iOS::NativeStyle__Template* parent, NativeStyle__Template__Template1** __retval)
{
    *__retval = NativeStyle__Template__Template1::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.TextBlock self) :24
void NativeStyle__Template__Template1__OnApply_fn(NativeStyle__Template__Template1* __this, ::g::Fuse::Controls::TextBlock* self)
{
    ::g::Fuse::iOS::TextRenderer* temp = ::g::Fuse::iOS::TextRenderer::New1();
    uPtr(self)->AddStyleChild(temp);
}

// public Template1(Fuse.iOS.NativeStyle.Template parent) [instance] :17
void NativeStyle__Template__Template1::ctor_1(::g::Fuse::iOS::NativeStyle__Template* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template1 New(Fuse.iOS.NativeStyle.Template parent) [static] :17
NativeStyle__Template__Template1* NativeStyle__Template__Template1::New1(::g::Fuse::iOS::NativeStyle__Template* parent)
{
    NativeStyle__Template__Template1* obj1 = (NativeStyle__Template__Template1*)uNew(NativeStyle__Template__Template1_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\.cache\GeneratedCode\$.uno(30)
// --------------------------------------------------------------------------

// public partial sealed class NativeStyle.Template.Template2 :30
// {
// static Template2() :69
static void NativeStyle__Template__Template2__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* NativeStyle__Template__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.iOS.NativeStyle.Template.Template2", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::PlainTextEdit_typeof()));
    type->fp_cctor_ = NativeStyle__Template__Template2__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))NativeStyle__Template__Template2__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[29] = ::g::Fuse::Controls::PlainTextEdit_typeof();
    ::TYPES[30] = ::g::Uno::UX::IFactory_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::iOS::NativeStyle__Template_typeof(), offsetof(::g::Fuse::iOS::NativeStyle__Template__Template2, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__Template2__New1_fn, 0, true, NativeStyle__Template__Template2_typeof(), 1, ::g::Fuse::iOS::NativeStyle__Template_typeof()));
    return type;
}

// public Template2(Fuse.iOS.NativeStyle.Template parent) :33
void NativeStyle__Template__Template2__ctor_1_fn(NativeStyle__Template__Template2* __this, ::g::Fuse::iOS::NativeStyle__Template* parent)
{
    __this->ctor_1(parent);
}

// public Template2 New(Fuse.iOS.NativeStyle.Template parent) :33
void NativeStyle__Template__Template2__New1_fn(::g::Fuse::iOS::NativeStyle__Template* parent, NativeStyle__Template__Template2** __retval)
{
    *__retval = NativeStyle__Template__Template2::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.PlainTextEdit self) :72
void NativeStyle__Template__Template2__OnApply_fn(NativeStyle__Template__Template2* __this, ::g::Fuse::Controls::PlainTextEdit* self)
{
    bool ret2;
    bool ret3;
    NativeStyle__Template__Template2__Factory* temp = NativeStyle__Template__Template2__Factory::New2(__this);
    NativeStyle__Template__Template2__Factory1* temp1 = NativeStyle__Template__Template2__Factory1::New2(__this);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::PlainTextEdit::NativeEditProperty()), self, (uObject*)temp, &ret2);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::PlainTextEdit::NativeTextProperty()), self, (uObject*)temp1, &ret3);
}

// public Template2(Fuse.iOS.NativeStyle.Template parent) [instance] :33
void NativeStyle__Template__Template2::ctor_1(::g::Fuse::iOS::NativeStyle__Template* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template2 New(Fuse.iOS.NativeStyle.Template parent) [static] :33
NativeStyle__Template__Template2* NativeStyle__Template__Template2::New1(::g::Fuse::iOS::NativeStyle__Template* parent)
{
    NativeStyle__Template__Template2* obj1 = (NativeStyle__Template__Template2*)uNew(NativeStyle__Template__Template2_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\$.uno(1076)
// -------------------------------------------------------

// public sealed extern class TextRenderer :1076
// {
::g::Fuse::Controls::Graphics::ControlVisual_type* TextRenderer_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Graphics::ControlVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 56;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(::g::Fuse::Controls::Graphics::ControlVisual_type);
    type = (::g::Fuse::Controls::Graphics::ControlVisual_type*)uClassType::New("Fuse.iOS.TextRenderer", options);
    type->SetBase(::g::Fuse::Controls::Graphics::TextVisual_typeof());
    type->fp_ctor_ = (void*)TextRenderer__New1_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))TextRenderer__GetMarginSize_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Controls::Graphics::Visual*, ::g::Fuse::DrawContext*))TextRenderer__OnDraw_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface0));
    type->SetFields(56);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextRenderer__New1_fn, 0, true, TextRenderer_typeof(), 0));
    return type;
}

// public generated TextRenderer() :1076
void TextRenderer__ctor_4_fn(TextRenderer* __this)
{
    __this->ctor_4();
}

// public override sealed float2 GetMarginSize(float2 fillSize, Fuse.SizeFlags fillSet) :1078
void TextRenderer__GetMarginSize_fn(TextRenderer* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public generated TextRenderer New() :1076
void TextRenderer__New1_fn(TextRenderer** __retval)
{
    *__retval = TextRenderer::New1();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :1083
void TextRenderer__OnDraw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc)
{
}

// public generated TextRenderer() [instance] :1076
void TextRenderer::ctor_4()
{
    ctor_3();
}

// public generated TextRenderer New() [static] :1076
TextRenderer* TextRenderer::New1()
{
    TextRenderer* obj1 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

}}} // ::g::Fuse::iOS
