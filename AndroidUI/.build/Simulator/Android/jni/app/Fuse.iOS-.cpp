#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Circle.h>
#include <app/Fuse.Controls.ContentControl.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle.h>
#include <app/Fuse.Controls.GraphicsView.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.NativeViewHost.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.PlainTextEdit.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.Controls.Slider.h>
#include <app/Fuse.Controls.Switch.h>
#include <app/Fuse.Controls.TextBlock.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Controls.WebView.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.iOS.Blitter.h>
#include <app/Fuse.iOS.Controls.Button.h>
#include <app/Fuse.iOS.Controls.Circle.h>
#include <app/Fuse.iOS.Controls.Image.h>
#include <app/Fuse.iOS.Controls.Rectangle.h>
#include <app/Fuse.iOS.Controls.Slider.h>
#include <app/Fuse.iOS.Controls.Switch.h>
#include <app/Fuse.iOS.Controls.TextBlock.h>
#include <app/Fuse.iOS.Controls.TextInput.h>
#include <app/Fuse.iOS.Controls.WebView.h>
#include <app/Fuse.iOS.NativeStyle.h>
#include <app/Fuse.iOS.NativeStyle_Template.h>
#include <app/Fuse.iOS.NativeStyle_Template_Template1.h>
#include <app/Fuse.iOS.NativeStyle_Template_Template2.h>
#include <app/Fuse.iOS.NativeStyle_Template_Template3.h>
#include <app/Fuse.iOS.NativeStyle_Template_Template3_Factory.h>
#include <app/Fuse.iOS.NativeStyle_Template_Template3_Factory1.h>
#include <app/Fuse.iOS.NativeTemplate.h>
#include <app/Fuse.iOS.NativeViews.ContentControl.h>
#include <app/Fuse.iOS.NativeViews.GenericNativeView.h>
#include <app/Fuse.iOS.NativeViews.GraphicsView.h>
#include <app/Fuse.iOS.NativeViews.NativeViewHost.h>
#include <app/Fuse.iOS.NativeViews.Panel.h>
#include <app/Fuse.iOS.NativeViews.ScrollView.h>
#include <app/Fuse.iOS.StatusBarConfig.h>
#include <app/Fuse.iOS.TextRenderer.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.SizeFlags.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.List__Fuse_iOS_StatusBarConfig.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Graphics.BlendOperand.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Platform.iOS.StatusBarAnimation.h>
#include <app/Uno.Platform.iOS.StatusBarStyle.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.UX.IFactory.h>
#include <app/Uno.UX.Template__Fuse_Controls_GraphicsView.h>
#include <app/Uno.UX.Template__Fuse_Controls_NativeViewHost.h>
#include <app/Uno.UX.Template__Fuse_Controls_PlainTextEdit.h>
#include <app/Uno.UX.Template__Fuse_Controls_TextBlock.h>

namespace app {
namespace Fuse {
namespace iOS {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Blitter*> Blitter__Singleton;

Blitter__uType* Blitter__typeof()
{
    static ::uStaticStrong<Blitter__uType*> type;
    if (type != NULL) return type;

    type = (Blitter__uType*)::uAllocClassType(sizeof(Blitter__uType), "Fuse.iOS.Blitter", false, 0, 5, 0);

    type->SetStrongRefs(
        "_draw_3aa4251e._compiledProgram", offsetof(Blitter, _draw_3aa4251e._compiledProgram),
        "_draw_3aa4251e._constValues", offsetof(Blitter, _draw_3aa4251e._constValues),
        "_draw_3aa4251e._Program", offsetof(Blitter, _draw_3aa4251e._Program),
        "Blit_v_3aa4251e_1_7_1", offsetof(Blitter, Blit_v_3aa4251e_1_7_1),
        "Blit_verts_3aa4251e_1_6_6", offsetof(Blitter, Blit_verts_3aa4251e_1_6_6));

    type->SetFields(1,
        ::uNewField("Singleton", &Blitter__Singleton, 0, Blitter__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Blit", Blitter__Blit, 0, false, ::app::Uno::Graphics::Texture2D__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float4x4__typeof()),
        ::uNewFunction(".ctor", Blitter__New_1, 0, true, Blitter__typeof()));

    ::uRegisterType(type);
    return type;
}

void Blitter___ObjInit(Blitter* __this)
{
    __this->init_DrawCalls();
}

void Blitter___TypeInit(::uStatic* __this)
{
    Blitter__Singleton = Blitter__New_1(NULL);
}

void Blitter__Blit(Blitter* __this, ::app::Uno::Graphics::Texture2D* vt, ::app::Uno::Float2 pos, ::app::Uno::Float2 size, ::app::Uno::Float4x4 localToClipTransform)
{
    {
        __this->_draw_3aa4251e.BlendEnabled(true);
        __this->_draw_3aa4251e.BlendSrcAlpha(7);
        __this->_draw_3aa4251e.BlendDstRgb(3);
        __this->_draw_3aa4251e.CullFace(0);
        __this->_draw_3aa4251e.Use();
        __this->_draw_3aa4251e.Attrib_1(0, 2, __this->Blit_v_3aa4251e_1_7_1, 8, 0);
        __this->_draw_3aa4251e.Uniform_12(1, size);
        __this->_draw_3aa4251e.Uniform_12(2, pos);
        __this->_draw_3aa4251e.Uniform_17(3, localToClipTransform);
        __this->_draw_3aa4251e.Sampler_2(4, vt);
        __this->_draw_3aa4251e.DrawArrays(::uPtr< ::uArray*>(__this->Blit_verts_3aa4251e_1_6_6)->Length());
    }
}

void Blitter__free_DrawCalls(Blitter* __this)
{
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->Blit_v_3aa4251e_1_7_1)->Dispose();
}

void Blitter__init_DrawCalls(Blitter* __this)
{
    ::uArray* array_123;
    array_123 = ::uNewArray(::app::Uno::Float2__typeof(), 6);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f);
    ::uArray* verts_3aa4251e_1_6_0 = array_123;
    __this->Blit_v_3aa4251e_1_7_1 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, verts_3aa4251e_1_6_0), 0);
    __this->Blit_verts_3aa4251e_1_6_6 = verts_3aa4251e_1_6_0;
    __this->_draw_3aa4251e = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 108), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

Blitter* Blitter__New_1(::uStatic* __this)
{
    Blitter* inst = (Blitter*)::uAllocObject(sizeof(Blitter), Blitter__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle__uType* NativeStyle__typeof()
{
    static ::uStaticStrong<NativeStyle__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle__uType*)::uAllocClassType(sizeof(NativeStyle__uType), "Fuse.iOS.NativeStyle", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Style__typeof());

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle__uType, __interface_0));

    type->SetFunctions(2,
        ::uNewFunctionVoid("InitializeUX", NativeStyle__InitializeUX, 0, false),
        ::uNewFunction(".ctor", NativeStyle__New_2, 0, true, NativeStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeStyle___ObjInit_1(NativeStyle* __this)
{
    ::app::Fuse::Style___ObjInit(__this);
    __this->InitializeUX();
}

void NativeStyle__InitializeUX(NativeStyle* __this)
{
    ::app::Fuse::iOS::NativeStyle_Template* collection_123;
    ::app::Fuse::iOS::NativeTemplate* temp = ::app::Fuse::iOS::NativeTemplate__New_1(NULL);
    collection_123 = ::app::Fuse::iOS::NativeStyle_Template__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::iOS::NativeStyle_Template*>(collection_123)->Cascade(true);
    collection_123->AffectSubtypes(true);
    ::app::Fuse::iOS::NativeStyle_Template* temp1 = collection_123;
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp1);
}

NativeStyle* NativeStyle__New_2(::uStatic* __this)
{
    NativeStyle* inst = (NativeStyle*)::uAllocObject(sizeof(NativeStyle), NativeStyle__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template__uType* NativeStyle_Template__typeof()
{
    static ::uStaticStrong<NativeStyle_Template__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template__uType*)::uAllocClassType(sizeof(NativeStyle_Template__uType), "Fuse.iOS.NativeStyle.Template", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_GraphicsView__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_GraphicsView*, ::app::Fuse::Controls::GraphicsView*))NativeStyle_Template__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", NativeStyle_Template__New_1, 0, true, NativeStyle_Template__typeof(), ::app::Fuse::iOS::NativeStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeStyle_Template___ObjInit_1(NativeStyle_Template* __this, ::app::Fuse::iOS::NativeStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_GraphicsView___ObjInit(__this);
    __this->__parent = parent;
}

NativeStyle_Template* NativeStyle_Template__New_1(::uStatic* __this, ::app::Fuse::iOS::NativeStyle* parent)
{
    NativeStyle_Template* inst = (NativeStyle_Template*)::uAllocObject(sizeof(NativeStyle_Template), NativeStyle_Template__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void NativeStyle_Template__OnApply(NativeStyle_Template* __this, ::app::Fuse::Controls::GraphicsView* self)
{
    ::app::Fuse::iOS::NativeStyle_Template_Template1* collection_123;
    ::app::Fuse::iOS::NativeStyle_Template_Template2* collection_124;
    ::app::Fuse::iOS::NativeStyle_Template_Template3* collection_125;
    ::app::Fuse::Style* temp = ::app::Fuse::Style__New_1(NULL);
    collection_123 = ::app::Fuse::iOS::NativeStyle_Template_Template1__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::iOS::NativeStyle_Template_Template1*>(collection_123)->Cascade(true);
    collection_123->AffectSubtypes(true);
    ::app::Fuse::iOS::NativeStyle_Template_Template1* temp1 = collection_123;
    collection_124 = ::app::Fuse::iOS::NativeStyle_Template_Template2__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::iOS::NativeStyle_Template_Template2*>(collection_124)->Cascade(true);
    collection_124->AffectSubtypes(true);
    ::app::Fuse::iOS::NativeStyle_Template_Template2* temp2 = collection_124;
    collection_125 = ::app::Fuse::iOS::NativeStyle_Template_Template3__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::iOS::NativeStyle_Template_Template3*>(collection_125)->Cascade(true);
    collection_125->AffectSubtypes(true);
    ::app::Fuse::iOS::NativeStyle_Template_Template3* temp3 = collection_125;
    ::app::Fuse::Controls::Graphics::GraphicsStyle* temp4 = ::app::Fuse::Controls::Graphics::GraphicsStyle__New_2(NULL);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Style*>(temp)->Templates()), (::uObject*)temp1);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(temp->Templates()), (::uObject*)temp2);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(temp->Templates()), (::uObject*)temp3);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(temp->Templates()), (::uObject*)temp4);
    ::uPtr< ::app::Fuse::Controls::GraphicsView*>(self)->AddStyleStyle(temp);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template1__uType* NativeStyle_Template_Template1__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template1__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template1__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template1__uType), "Fuse.iOS.NativeStyle.Template.Template1", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_TextBlock__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_TextBlock*, ::app::Fuse::Controls::TextBlock*))NativeStyle_Template_Template1__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template_Template1__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template1, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", NativeStyle_Template_Template1__New_1, 0, true, NativeStyle_Template_Template1__typeof(), ::app::Fuse::iOS::NativeStyle_Template__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeStyle_Template_Template1___ObjInit_1(NativeStyle_Template_Template1* __this, ::app::Fuse::iOS::NativeStyle_Template* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_TextBlock___ObjInit(__this);
    __this->__parent = parent;
}

NativeStyle_Template_Template1* NativeStyle_Template_Template1__New_1(::uStatic* __this, ::app::Fuse::iOS::NativeStyle_Template* parent)
{
    NativeStyle_Template_Template1* inst = (NativeStyle_Template_Template1*)::uAllocObject(sizeof(NativeStyle_Template_Template1), NativeStyle_Template_Template1__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void NativeStyle_Template_Template1__OnApply(NativeStyle_Template_Template1* __this, ::app::Fuse::Controls::TextBlock* self)
{
    ::app::Fuse::iOS::TextRenderer* temp = ::app::Fuse::iOS::TextRenderer__New_1(NULL);
    ::uPtr< ::app::Fuse::Controls::TextBlock*>(self)->AddStyleChild((::app::Fuse::Node*)temp);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template2__uType* NativeStyle_Template_Template2__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template2__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template2__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template2__uType), "Fuse.iOS.NativeStyle.Template.Template2", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_NativeViewHost__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_NativeViewHost*, ::app::Fuse::Controls::NativeViewHost*))NativeStyle_Template_Template2__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template_Template2__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template2, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", NativeStyle_Template_Template2__New_1, 0, true, NativeStyle_Template_Template2__typeof(), ::app::Fuse::iOS::NativeStyle_Template__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeStyle_Template_Template2___ObjInit_1(NativeStyle_Template_Template2* __this, ::app::Fuse::iOS::NativeStyle_Template* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_NativeViewHost___ObjInit(__this);
    __this->__parent = parent;
}

NativeStyle_Template_Template2* NativeStyle_Template_Template2__New_1(::uStatic* __this, ::app::Fuse::iOS::NativeStyle_Template* parent)
{
    NativeStyle_Template_Template2* inst = (NativeStyle_Template_Template2*)::uAllocObject(sizeof(NativeStyle_Template_Template2), NativeStyle_Template_Template2__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void NativeStyle_Template_Template2__OnApply(NativeStyle_Template_Template2* __this, ::app::Fuse::Controls::NativeViewHost* self)
{
    ::app::Fuse::iOS::NativeViews::NativeViewHost* temp = ::app::Fuse::iOS::NativeViews::NativeViewHost__New_1(NULL);
    ::uPtr< ::app::Fuse::Controls::NativeViewHost*>(self)->AddStyleBehavior((::app::Fuse::Behavior*)temp);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template3__uType* NativeStyle_Template_Template3__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template3__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template3__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template3__uType), "Fuse.iOS.NativeStyle.Template.Template3", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit*, ::app::Fuse::Controls::PlainTextEdit*))NativeStyle_Template_Template3__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template_Template3__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template3, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", NativeStyle_Template_Template3__New_1, 0, true, NativeStyle_Template_Template3__typeof(), ::app::Fuse::iOS::NativeStyle_Template__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeStyle_Template_Template3___ObjInit_1(NativeStyle_Template_Template3* __this, ::app::Fuse::iOS::NativeStyle_Template* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit___ObjInit(__this);
    __this->__parent = parent;
}

NativeStyle_Template_Template3* NativeStyle_Template_Template3__New_1(::uStatic* __this, ::app::Fuse::iOS::NativeStyle_Template* parent)
{
    NativeStyle_Template_Template3* inst = (NativeStyle_Template_Template3*)::uAllocObject(sizeof(NativeStyle_Template_Template3), NativeStyle_Template_Template3__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void NativeStyle_Template_Template3__OnApply(NativeStyle_Template_Template3* __this, ::app::Fuse::Controls::PlainTextEdit* self)
{
    ::app::Fuse::iOS::NativeStyle_Template_Template3_Factory* temp = ::app::Fuse::iOS::NativeStyle_Template_Template3_Factory__New_2(NULL, __this);
    ::app::Fuse::iOS::NativeStyle_Template_Template3_Factory1* temp1 = ::app::Fuse::iOS::NativeStyle_Template_Template3_Factory1__New_2(NULL, __this);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*>(::app::Fuse::Controls::PlainTextEdit__NativeEditProperty)->SetStyle(self, (::uObject*)temp);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*>(::app::Fuse::Controls::PlainTextEdit__NativeTextProperty)->SetStyle(self, (::uObject*)temp1);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template3_Factory__uType* NativeStyle_Template_Template3_Factory__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template3_Factory__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template3_Factory__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template3_Factory__uType), "Fuse.iOS.NativeStyle.Template.Template3.Factory", false, 1, 1, 0);

    type->__interface_0.__fp_New_1 = (::uObject*(*)(void*))NativeStyle_Template_Template3_Factory__New_1;

    type->SetInterfaces(
        ::app::Uno::UX::IFactory__typeof(), offsetof(NativeStyle_Template_Template3_Factory__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template3_Factory, __parent));

    type->SetFunctions(2,
        ::uNewFunction("New", NativeStyle_Template_Template3_Factory__New_1, 0, false, ::uObject__typeof()),
        ::uNewFunction(".ctor", NativeStyle_Template_Template3_Factory__New_2, 0, true, NativeStyle_Template_Template3_Factory__typeof(), ::app::Fuse::iOS::NativeStyle_Template_Template3__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeStyle_Template_Template3_Factory___ObjInit(NativeStyle_Template_Template3_Factory* __this, ::app::Fuse::iOS::NativeStyle_Template_Template3* parent)
{
    __this->__parent = parent;
}

::uObject* NativeStyle_Template_Template3_Factory__New_1(NativeStyle_Template_Template3_Factory* __this)
{
    ::app::Fuse::iOS::Controls::TextInput* self = ::app::Fuse::iOS::Controls::TextInput__New_1(NULL);
    return (::uObject*)self;
}

NativeStyle_Template_Template3_Factory* NativeStyle_Template_Template3_Factory__New_2(::uStatic* __this, ::app::Fuse::iOS::NativeStyle_Template_Template3* parent)
{
    NativeStyle_Template_Template3_Factory* inst = (NativeStyle_Template_Template3_Factory*)::uAllocObject(sizeof(NativeStyle_Template_Template3_Factory), NativeStyle_Template_Template3_Factory__typeof());
    inst->_ObjInit(parent);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template3_Factory1__uType* NativeStyle_Template_Template3_Factory1__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template3_Factory1__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template3_Factory1__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template3_Factory1__uType), "Fuse.iOS.NativeStyle.Template.Template3.Factory1", false, 1, 1, 0);

    type->__interface_0.__fp_New_1 = (::uObject*(*)(void*))NativeStyle_Template_Template3_Factory1__New_1;

    type->SetInterfaces(
        ::app::Uno::UX::IFactory__typeof(), offsetof(NativeStyle_Template_Template3_Factory1__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template3_Factory1, __parent));

    type->SetFunctions(2,
        ::uNewFunction("New", NativeStyle_Template_Template3_Factory1__New_1, 0, false, ::uObject__typeof()),
        ::uNewFunction(".ctor", NativeStyle_Template_Template3_Factory1__New_2, 0, true, NativeStyle_Template_Template3_Factory1__typeof(), ::app::Fuse::iOS::NativeStyle_Template_Template3__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeStyle_Template_Template3_Factory1___ObjInit(NativeStyle_Template_Template3_Factory1* __this, ::app::Fuse::iOS::NativeStyle_Template_Template3* parent)
{
    __this->__parent = parent;
}

::uObject* NativeStyle_Template_Template3_Factory1__New_1(NativeStyle_Template_Template3_Factory1* __this)
{
    ::app::Fuse::iOS::TextRenderer* self = ::app::Fuse::iOS::TextRenderer__New_1(NULL);
    return (::uObject*)self;
}

NativeStyle_Template_Template3_Factory1* NativeStyle_Template_Template3_Factory1__New_2(::uStatic* __this, ::app::Fuse::iOS::NativeStyle_Template_Template3* parent)
{
    NativeStyle_Template_Template3_Factory1* inst = (NativeStyle_Template_Template3_Factory1*)::uAllocObject(sizeof(NativeStyle_Template_Template3_Factory1), NativeStyle_Template_Template3_Factory1__typeof());
    inst->_ObjInit(parent);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeTemplate__uType* NativeTemplate__typeof()
{
    static ::uStaticStrong<NativeTemplate__uType*> type;
    if (type != NULL) return type;

    type = (NativeTemplate__uType*)::uAllocClassType(sizeof(NativeTemplate__uType), "Fuse.iOS.NativeTemplate", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))NativeTemplate__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeTemplate__uType, __interface_0));

    type->SetFunctions(3,
        ::uNewFunction("Apply", NativeTemplate__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("HaveGraphicsViewAncestor", NativeTemplate__HaveGraphicsViewAncestor, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", NativeTemplate__New_1, 0, true, NativeTemplate__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeTemplate___ObjInit(NativeTemplate* __this)
{
}

bool NativeTemplate__Apply(NativeTemplate* __this, ::uObject* obj)
{
    if (__this->HaveGraphicsViewAncestor(::uAs< ::app::Fuse::Node*>(obj, ::app::Fuse::Node__typeof())))
    {
        return true;
    }

    bool addedNativeView = false;
    ::app::Fuse::Controls::Panel* panel = ::uAs< ::app::Fuse::Controls::Panel*>(obj, ::app::Fuse::Controls::Panel__typeof());

    if (panel != NULL)
    {
        ::uPtr< ::app::Fuse::Controls::Panel*>(panel)->AddStyleBehavior((::app::Fuse::Behavior*)::app::Fuse::iOS::NativeViews::Panel__New_1(NULL));
        addedNativeView = true;

        if (::uIs(panel, ::app::Fuse::Controls::Button__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::iOS::Controls::Button__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::Switch__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::iOS::Controls::Switch__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::TextInput__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::iOS::Controls::TextInput__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::TextBlock__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::iOS::Controls::TextBlock__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::Slider__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::iOS::Controls::Slider__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::Image__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::iOS::Controls::Image__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::Rectangle__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::iOS::Controls::Rectangle__New_2(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::Circle__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::iOS::Controls::Circle__New_2(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::WebView__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::iOS::Controls::WebView__New_1(NULL));
        }
    }

    ::app::Fuse::Controls::ContentControl* contentControl = ::uAs< ::app::Fuse::Controls::ContentControl*>(obj, ::app::Fuse::Controls::ContentControl__typeof());

    if (contentControl != NULL)
    {
        addedNativeView = true;

        if (::uIs(contentControl, ::app::Fuse::Controls::GraphicsView__typeof()))
        {
            ::uPtr< ::app::Fuse::Controls::ContentControl*>(contentControl)->AddStyleBehavior((::app::Fuse::Behavior*)::app::Fuse::iOS::NativeViews::GraphicsView__New_1(NULL));
        }
        else
        {
            contentControl->AddStyleBehavior((::app::Fuse::Behavior*)::app::Fuse::iOS::NativeViews::ContentControl__New_1(NULL));
        }
    }

    ::app::Fuse::Controls::ScrollView* scrollView = ::uAs< ::app::Fuse::Controls::ScrollView*>(obj, ::app::Fuse::Controls::ScrollView__typeof());

    if (scrollView != NULL)
    {
        ::uPtr< ::app::Fuse::Controls::ScrollView*>(scrollView)->AddStyleBehavior((::app::Fuse::Behavior*)::app::Fuse::iOS::NativeViews::ScrollView__New_1(NULL));
        addedNativeView = true;
    }

    if (!addedNativeView)
    {
        ::app::Fuse::Controls::Control* c = ::uAs< ::app::Fuse::Controls::Control*>(obj, ::app::Fuse::Controls::Control__typeof());

        if (c != NULL)
        {
            ::uPtr< ::app::Fuse::Controls::Control*>(c)->AddStyleBehavior((::app::Fuse::Behavior*)::app::Fuse::iOS::NativeViews::GenericNativeView__New_1(NULL));
        }
    }

    return true;
}

bool NativeTemplate__HaveGraphicsViewAncestor(NativeTemplate* __this, ::app::Fuse::Node* node)
{
    if (node == NULL)
    {
        return false;
    }

    if (::uPtr< ::app::Fuse::Node*>(node)->Parent() == NULL)
    {
        return false;
    }

    if (::uIs(::uPtr< ::app::Fuse::Node*>(node)->Parent(), ::app::Fuse::Controls::GraphicsView__typeof()))
    {
        return true;
    }

    return __this->HaveGraphicsViewAncestor(::uPtr< ::app::Fuse::Node*>(node)->Parent());
}

NativeTemplate* NativeTemplate__New_1(::uStatic* __this)
{
    NativeTemplate* inst = (NativeTemplate*)::uAllocObject(sizeof(NativeTemplate), NativeTemplate__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*> StatusBarConfig___stack;

StatusBarConfig__uType* StatusBarConfig__typeof()
{
    static ::uStaticStrong<StatusBarConfig__uType*> type;
    if (type != NULL) return type;

    type = (StatusBarConfig__uType*)::uAllocClassType(sizeof(StatusBarConfig__uType), "Fuse.iOS.StatusBarConfig", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))StatusBarConfig__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))StatusBarConfig__OnUnrooted;

    type->SetFields(7,
        ::uNewField("_animation", NULL, offsetof(StatusBarConfig, _animation), ::app::Uno::Platform::iOS::StatusBarAnimation__typeof()),
        ::uNewField("_hasAnimation", NULL, offsetof(StatusBarConfig, _hasAnimation), ::app::Uno::Bool__typeof()),
        ::uNewField("_hasIsVisible", NULL, offsetof(StatusBarConfig, _hasIsVisible), ::app::Uno::Bool__typeof()),
        ::uNewField("_hasStyle", NULL, offsetof(StatusBarConfig, _hasStyle), ::app::Uno::Bool__typeof()),
        ::uNewField("_isVisible", NULL, offsetof(StatusBarConfig, _isVisible), ::app::Uno::Bool__typeof()),
        ::uNewField("_stack", &StatusBarConfig___stack, 0, ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig__typeof()),
        ::uNewField("_style", NULL, offsetof(StatusBarConfig, _style), ::app::Uno::Platform::iOS::StatusBarStyle__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Apply", StatusBarConfig__Apply, 0, true),
        ::uNewFunction("get_Animation", StatusBarConfig__get_Animation, 0, false, ::app::Uno::Platform::iOS::StatusBarAnimation__typeof()),
        ::uNewFunction("get_IsVisible", StatusBarConfig__get_IsVisible, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Style", StatusBarConfig__get_Style, 0, false, ::app::Uno::Platform::iOS::StatusBarStyle__typeof()),
        ::uNewFunction("GetAnimation", StatusBarConfig__GetAnimation, 0, true, ::app::Uno::Platform::iOS::StatusBarAnimation__typeof()),
        ::uNewFunction("GetIsVisible", StatusBarConfig__GetIsVisible, 0, true, ::app::Uno::Bool__typeof()),
        ::uNewFunction("GetStyle", StatusBarConfig__GetStyle, 0, true, ::app::Uno::Platform::iOS::StatusBarStyle__typeof()),
        ::uNewFunction(".ctor", StatusBarConfig__New_1, 0, true, StatusBarConfig__typeof()),
        ::uNewFunctionVoid("set_Animation", StatusBarConfig__set_Animation, 0, false, ::app::Uno::Platform::iOS::StatusBarAnimation__typeof()),
        ::uNewFunctionVoid("set_IsVisible", StatusBarConfig__set_IsVisible, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Style", StatusBarConfig__set_Style, 0, false, ::app::Uno::Platform::iOS::StatusBarStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void StatusBarConfig___ObjInit_1(StatusBarConfig* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

void StatusBarConfig___TypeInit(::uStatic* __this)
{
    StatusBarConfig___stack = ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig__New_1(NULL);
}

void StatusBarConfig__Apply(::uStatic* __this)
{
}

int StatusBarConfig__get_Animation(StatusBarConfig* __this)
{
    return __this->_animation;
}

bool StatusBarConfig__get_IsVisible(StatusBarConfig* __this)
{
    return __this->_isVisible;
}

int StatusBarConfig__get_Style(StatusBarConfig* __this)
{
    return __this->_style;
}

int StatusBarConfig__GetAnimation(::uStatic* __this)
{
    for (int i = ::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Count(); (i--) > 0; )
    {
        if (::uPtr< StatusBarConfig*>(::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Item(i))->_hasAnimation)
        {
            return ::uPtr< StatusBarConfig*>(::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Item(i))->Animation();
        }
    }

    return 0;
}

bool StatusBarConfig__GetIsVisible(::uStatic* __this)
{
    for (int i = ::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Count(); (i--) > 0; )
    {
        if (::uPtr< StatusBarConfig*>(::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Item(i))->_hasIsVisible)
        {
            return ::uPtr< StatusBarConfig*>(::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Item(i))->IsVisible();
        }
    }

    return true;
}

int StatusBarConfig__GetStyle(::uStatic* __this)
{
    for (int i = ::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Count(); (i--) > 0; )
    {
        if (::uPtr< StatusBarConfig*>(::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Item(i))->_hasStyle)
        {
            return ::uPtr< StatusBarConfig*>(::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Item(i))->Style();
        }
    }

    return 0;
}

StatusBarConfig* StatusBarConfig__New_1(::uStatic* __this)
{
    StatusBarConfig* inst = (StatusBarConfig*)::uAllocObject(sizeof(StatusBarConfig), StatusBarConfig__typeof());
    inst->_ObjInit_1();
    return inst;
}

void StatusBarConfig__OnRooted(StatusBarConfig* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Add(__this);
    StatusBarConfig__Apply(NULL);
}

void StatusBarConfig__OnUnrooted(StatusBarConfig* __this, ::app::Fuse::Node* n)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*>(StatusBarConfig___stack)->Remove(__this);
    StatusBarConfig__Apply(NULL);
}

void StatusBarConfig__set_Animation(StatusBarConfig* __this, int value)
{
    if (!__this->_hasAnimation || (__this->_animation != value))
    {
        __this->_animation = value;
        __this->_hasAnimation = true;
        StatusBarConfig__Apply(NULL);
    }
}

void StatusBarConfig__set_IsVisible(StatusBarConfig* __this, bool value)
{
    if (!__this->_hasIsVisible || (__this->_isVisible != value))
    {
        __this->_isVisible = value;
        __this->_hasIsVisible = true;
        StatusBarConfig__Apply(NULL);
    }
}

void StatusBarConfig__set_Style(StatusBarConfig* __this, int value)
{
    if (!__this->_hasStyle || (__this->_style != value))
    {
        __this->_style = value;
        __this->_hasStyle = true;
        StatusBarConfig__Apply(NULL);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextRenderer__uType* TextRenderer__typeof()
{
    static ::uStaticStrong<TextRenderer__uType*> type;
    if (type != NULL) return type;

    type = (TextRenderer__uType*)::uAllocClassType(sizeof(TextRenderer__uType), "Fuse.iOS.TextRenderer", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::TextVisual__typeof());
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))TextRenderer__GetMarginSize;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Controls::Graphics::Visual*, ::app::Fuse::DrawContext*))TextRenderer__OnDraw;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextRenderer__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", TextRenderer__New_1, 0, true, TextRenderer__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextRenderer___ObjInit_4(TextRenderer* __this)
{
    ::app::Fuse::Controls::Graphics::TextVisual___ObjInit_3(__this);
}

::app::Uno::Float2 TextRenderer__GetMarginSize(TextRenderer* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

TextRenderer* TextRenderer__New_1(::uStatic* __this)
{
    TextRenderer* inst = (TextRenderer*)::uAllocObject(sizeof(TextRenderer), TextRenderer__typeof());
    inst->_ObjInit_4();
    return inst;
}

void TextRenderer__OnDraw(TextRenderer* __this, ::app::Fuse::DrawContext* dc)
{
}

}}}
