#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Circle.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Ellipse.h>
#include <app/Fuse.Controls.FillRule.h>
#include <app/Fuse.Controls.FitMode.h>
#include <app/Fuse.Controls.Graphics.CircleVisual.h>
#include <app/Fuse.Controls.Graphics.ControlVisual__Fuse_Controls_TextControl.h>
#include <app/Fuse.Controls.Graphics.DefaultTextVisual.h>
#include <app/Fuse.Controls.Graphics.EllipseVisual.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle_Fuse_Controls_ScrollView_b-2a419513.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle_Fuse_Controls_ScrollView_b-50c2c01b.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle_Fuse_Gestures_Scroller_boo-60701f46.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle_Fuse_Triggers_WhileBool_bo-9a29a212.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle_Template.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle_Template1.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle_Template2.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle_Template3.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle_Template4.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle_Template5.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle_Template6.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle_Template7.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle_Template8.h>
#include <app/Fuse.Controls.Graphics.ImageElementDraw.h>
#include <app/Fuse.Controls.Graphics.ImageVisual.h>
#include <app/Fuse.Controls.Graphics.LinearSliderBehavior.h>
#include <app/Fuse.Controls.Graphics.PathVisual.h>
#include <app/Fuse.Controls.Graphics.RectangleVisual.h>
#include <app/Fuse.Controls.Graphics.RegularPolygonVisual.h>
#include <app/Fuse.Controls.Graphics.ShapeVisual__Fuse_Controls_Ellipse.h>
#include <app/Fuse.Controls.Graphics.ShapeVisual__Fuse_Controls_Path.h>
#include <app/Fuse.Controls.Graphics.ShapeVisual__Fuse_Controls_RegularPolygon.h>
#include <app/Fuse.Controls.Graphics.ShapeVisual__Fuse_Controls_Star.h>
#include <app/Fuse.Controls.Graphics.StarVisual.h>
#include <app/Fuse.Controls.Graphics.TextVisual.h>
#include <app/Fuse.Controls.Graphics.Visual.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.Internal.DefaultTextRenderer.h>
#include <app/Fuse.Controls.Internal.WordWrapInfo.h>
#include <app/Fuse.Controls.Internal.WordWrapper.h>
#include <app/Fuse.Controls.Internal.WrappedLine.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.Path.h>
#include <app/Fuse.Controls.PathScaleMode.h>
#include <app/Fuse.Controls.PropertyBinding__bool.h>
#include <app/Fuse.Controls.RangeControl.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.RegularPolygon.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.Controls.Shape.h>
#include <app/Fuse.Controls.Star.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.PathGeometryExtensions.h>
#include <app/Fuse.Drawing.PathGeometryRenderer.h>
#include <app/Fuse.Drawing.Primitives.Circle.h>
#include <app/Fuse.Drawing.Primitives.Rectangle.h>
#include <app/Fuse.Drawing.Primitives.Wedge.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Drawing.WindingRules.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.Internal.Scale9Rectangle.h>
#include <app/Fuse.Elements.StretchMode.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Gestures.DegreeSpan.h>
#include <app/Fuse.Gestures.KeepFocusInView.h>
#include <app/Fuse.Gestures.Scroller.h>
#include <app/Fuse.Gestures.SwipeGestureHelper.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.PointerEnteredHandler.h>
#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Input.PointerLeftHandler.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Input.PointerMovedHandler.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Input.PointerReleasedHandler.h>
#include <app/Fuse.Input.PointerWheelMovedHandler.h>
#include <app/Fuse.Internal.ImageContainer.h>
#include <app/Fuse.Internal.SizingContainer.h>
#include <app/Fuse.InvalidateLayoutReason.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.SizeFlags.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__Fuse_Font.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Fuse.Triggers.WhileBool.h>
#include <app/Fuse.Triggers.WhileTrue.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__Fuse_Font__Fuse_Controls_Internal_D-402f9c04.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Controls_Internal_WrappedLine.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.List__Fuse_Controls_Internal_WrappedLine.h>
#include <app/Uno.Content.Fonts.FontFace.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Graphics.BlendOperand.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Long.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Object.h>
#include <app/Uno.Predicate__int.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Contr-2511fcaf.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.BundleFileSource.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.Property__bool.h>
#include <app/Uno.UX.Resource.h>
#include <app/Uno.UX.Template__Fuse_Controls_Circle.h>
#include <app/Uno.UX.Template__Fuse_Controls_Ellipse.h>
#include <app/Uno.UX.Template__Fuse_Controls_Image.h>
#include <app/Uno.UX.Template__Fuse_Controls_Path.h>
#include <app/Uno.UX.Template__Fuse_Controls_Rectangle.h>
#include <app/Uno.UX.Template__Fuse_Controls_RegularPolygon.h>
#include <app/Uno.UX.Template__Fuse_Controls_ScrollView.h>
#include <app/Uno.UX.Template__Fuse_Controls_Star.h>
#include <app/Uno.UX.Template__Fuse_Controls_TextControl.h>
#include <app/Uno.UX.ValueChangedArgs__string.h>
#include <app/Uno.UX.ValueChangedHandler__string.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CircleVisual__uType* CircleVisual__typeof()
{
    static ::uStaticStrong<CircleVisual__uType*> type;
    if (type != NULL) return type;

    type = (CircleVisual__uType*)::uAllocClassType(sizeof(CircleVisual__uType), "Fuse.Controls.Graphics.CircleVisual", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Circle__typeof());
    type->__fp_DrawFill = (void(*)(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Circle*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Brush*))CircleVisual__DrawFill;
    type->__fp_DrawStroke = (void(*)(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Circle*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Stroke*))CircleVisual__DrawStroke;
    type->__fp_OnHitTest = (void(*)(::app::Fuse::Node*, ::app::Fuse::HitTestContext*))CircleVisual__OnHitTest;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(CircleVisual__uType, __interface_0));

    type->SetFunctions(2,
        ::uNewFunction("get_Circle", CircleVisual__get_Circle, 0, false, ::app::Fuse::Controls::Circle__typeof()),
        ::uNewFunction(".ctor", CircleVisual__New_1, 0, true, CircleVisual__typeof()));

    ::uRegisterType(type);
    return type;
}

void CircleVisual___ObjInit_4(CircleVisual* __this)
{
    ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Circle___ObjInit_3(__this);
}

void CircleVisual__DrawFill(CircleVisual* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Brush* fill)
{
    float startAngle = ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->StartAngle();
    float endAngle = ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->EffectiveEndAngle();

    if (::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->UseAngle())
    {
        ::uPtr< ::app::Fuse::Drawing::Primitives::Wedge*>(::app::Fuse::Drawing::Primitives::Wedge__Singleton)->Fill(dc, (::app::Fuse::Elements::Element*)__this->Circle(), ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->Radius(), fill, ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->Center(), startAngle, endAngle, ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->Smoothness());
    }
    else
    {
        ::uPtr< ::app::Fuse::Drawing::Primitives::Circle*>(::app::Fuse::Drawing::Primitives::Circle__Singleton)->Fill(dc, (::app::Fuse::Elements::Element*)__this->Circle(), ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->Radius(), fill, ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->Center(), ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->Smoothness());
    }
}

void CircleVisual__DrawStroke(CircleVisual* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Stroke* stroke)
{
    float startAngle = ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->StartAngle();
    float endAngle = ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->EffectiveEndAngle();

    if (::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->UseAngle())
    {
        ::uPtr< ::app::Fuse::Drawing::Primitives::Wedge*>(::app::Fuse::Drawing::Primitives::Wedge__Singleton)->Stroke(dc, (::app::Fuse::Elements::Element*)__this->Circle(), ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->Radius(), stroke, ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->Center(), startAngle, endAngle, ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->Smoothness());
    }
    else
    {
        ::uPtr< ::app::Fuse::Drawing::Primitives::Circle*>(::app::Fuse::Drawing::Primitives::Circle__Singleton)->Stroke(dc, (::app::Fuse::Elements::Element*)__this->Circle(), ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->Radius(), stroke, ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->Center(), ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->Smoothness());
    }
}

::app::Fuse::Controls::Circle* CircleVisual__get_Circle(CircleVisual* __this)
{
    return ::uCast< ::app::Fuse::Controls::Circle*>(__this->Shape(), ::app::Fuse::Controls::Circle__typeof());
}

CircleVisual* CircleVisual__New_1(::uStatic* __this)
{
    CircleVisual* inst = (CircleVisual*)::uAllocObject(sizeof(CircleVisual), CircleVisual__typeof());
    inst->_ObjInit_4();
    return inst;
}

void CircleVisual__OnHitTest(CircleVisual* __this, ::app::Fuse::HitTestContext* htc)
{
    if (!::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->HasFills() || (::app::Uno::Vector__Distance(NULL, ::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint(), ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->Center()) > ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->Radius()))
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->UseAngle())
    {
        ::app::Uno::Float2 off = ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint(), ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->Center());
        float localAngle = ::app::Uno::Math__Atan2_1(NULL, off.Y, off.X);

        if (!::app::Fuse::Controls::Circle__AngleInRange(NULL, localAngle, ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->StartAngle(), ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Circle())->EffectiveEndAngle()))
        {
            return;
        }
    }

    ::uPtr< ::app::Fuse::HitTestContext*>(htc)->Hit((::app::Fuse::Node*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer*> DefaultTextVisual___textRenderers;

DefaultTextVisual__uType* DefaultTextVisual__typeof()
{
    static ::uStaticStrong<DefaultTextVisual__uType*> type;
    if (type != NULL) return type;

    type = (DefaultTextVisual__uType*)::uAllocClassType(sizeof(DefaultTextVisual__uType), "Fuse.Controls.Graphics.DefaultTextVisual", false, 1, 3, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::TextVisual__typeof());
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))DefaultTextVisual__GetMarginSize;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Controls::Graphics::Visual*, ::app::Fuse::DrawContext*))DefaultTextVisual__OnDraw;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(DefaultTextVisual__uType, __interface_0));

    type->SetStrongRefs(
        "_cacheValue", offsetof(DefaultTextVisual, _cacheValue),
        "_wrapInfo", offsetof(DefaultTextVisual, _wrapInfo),
        "_wrappedLines", offsetof(DefaultTextVisual, _wrappedLines));

    type->SetFields(7,
        ::uNewField("_cacheValue", NULL, offsetof(DefaultTextVisual, _cacheValue), ::app::Uno::String__typeof()),
        ::uNewField("_maxTextLength", NULL, offsetof(DefaultTextVisual, _maxTextLength), ::app::Uno::Int__typeof()),
        ::uNewField("_textBoundsSize", NULL, offsetof(DefaultTextVisual, _textBoundsSize), ::app::Uno::Float2__typeof()),
        ::uNewField("_textRenderers", &DefaultTextVisual___textRenderers, 0, ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof()),
        ::uNewField("_wrapInfo", NULL, offsetof(DefaultTextVisual, _wrapInfo), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof()),
        ::uNewField("_wrappedLines", NULL, offsetof(DefaultTextVisual, _wrappedLines), ::uGetArrayType(::app::Fuse::Controls::Internal::WrappedLine__typeof())),
        ::uNewField("_wrapWidth", NULL, offsetof(DefaultTextVisual, _wrapWidth), ::app::Uno::Float__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("GetTextRenderer", DefaultTextVisual__GetTextRenderer, 0, true, ::app::Fuse::Controls::Internal::DefaultTextRenderer__typeof(), ::app::Fuse::Font__typeof()),
        ::uNewFunctionVoid("InitWrap", DefaultTextVisual__InitWrap, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", DefaultTextVisual__New_1, 0, true, DefaultTextVisual__typeof()));

    ::uRegisterType(type);
    return type;
}

void DefaultTextVisual___ObjInit_4(DefaultTextVisual* __this)
{
    ::app::Fuse::Controls::Graphics::TextVisual___ObjInit_3(__this);
}

void DefaultTextVisual___TypeInit_1(::uStatic* __this)
{
    DefaultTextVisual___textRenderers = ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__New_1(NULL);
}

::app::Uno::Float2 DefaultTextVisual__GetMarginSize(DefaultTextVisual* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    if (__this->Control() == NULL)
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    bool hasWrap = (::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->TextWrapping() == 1) && ((fillSet & 1) == 1);
    float wrapWidth = hasWrap ? ::app::Uno::Math__Max_1(NULL, fillSize.X, 0.0f) : FLT_INF;
    __this->InitWrap(wrapWidth, ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->Value());
    return __this->_textBoundsSize;
}

::app::Fuse::Controls::Internal::DefaultTextRenderer* DefaultTextVisual__GetTextRenderer(::uStatic* __this, ::app::Fuse::Font* f)
{
    ::app::Fuse::Controls::Internal::DefaultTextRenderer* tr;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer*>(DefaultTextVisual___textRenderers)->TryGetValue(f, &tr))
    {
        tr = ::app::Fuse::Controls::Internal::DefaultTextRenderer__New_1(NULL, ::uPtr< ::app::Fuse::Font*>(f)->FontFace());
        ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer*>(DefaultTextVisual___textRenderers)->Add(f, tr);
    }

    return tr;
}

void DefaultTextVisual__InitWrap(DefaultTextVisual* __this, float wrapWidth, ::uString* value)
{
    ::uArray* array_135;
    ::uArray* array_129;
    int index_130 = int();
    int length_131 = int();

    if (((__this->_wrapInfo != NULL) && (__this->_wrapWidth == wrapWidth)) && ::app::Uno::String__op_Equality(NULL, __this->_cacheValue, value))
    {
        return;
    }

    __this->_wrapWidth = wrapWidth;
    __this->_cacheValue = value;
    ::app::Fuse::Font* font = ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->Font();
    ::app::Fuse::Controls::Internal::DefaultTextRenderer* renderer = DefaultTextVisual__GetTextRenderer(NULL, font);
    float fontSize = ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->FontSize();
    __this->_wrapInfo = ::app::Fuse::Controls::Internal::WordWrapInfo__New_1(NULL, renderer, ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->TextWrapping() == 1, wrapWidth, fontSize, ::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(renderer)->GetLineHeight(fontSize), ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->LineSpacing(), __this->AbsoluteZoom());
    ::uArray* lines = ::app::Uno::String::Split(::uPtr< ::uString*>(value), (array_135 = ::uNewArray(::app::Uno::Char__typeof(), 1), ::uPtr< ::uArray*>(array_135)->Item< ::uChar>(0) = 10, array_135));
    ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine* wrappedLines = ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine__New_1(NULL);

    if (::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->TextWrapping() == 1)
    {
        for (int index_124 = 0, length_125 = ::uPtr< ::uArray*>(lines)->Length(); index_124 < length_125; ++index_124)
        {
            ::uString* line = ::uPtr< ::uArray*>(lines)->Item< ::uString*>(index_124);
            ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*>(wrappedLines)->AddRange((::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__New_1(NULL, ::app::Fuse::Controls::Internal::WordWrapper__WrapLine(NULL, __this->_wrapInfo, line)));
        }
    }
    else
    {
        int y = 0;

        for (int index_127 = 0, length_128 = ::uPtr< ::uArray*>(lines)->Length(); index_127 < length_128; ++index_127)
        {
            ::uString* line = ::uPtr< ::uArray*>(lines)->Item< ::uString*>(index_127);
            ::app::Uno::Float2 lineSize = ::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->TextRenderer)->MeasureStringVirtual(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->FontSize, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->AbsoluteZoom, line);
            ::app::Fuse::Controls::Internal::WrappedLine* wrappedLine = ::app::Fuse::Controls::Internal::WrappedLine__New_1(NULL, line, 0, (float)(y++), lineSize.X);
            ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*>(wrappedLines)->Add(wrappedLine);
        }
    }

    __this->_wrappedLines = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*>(wrappedLines)->ToArray();
    float maxWidth = 0.0f;
    float height = 0.0f;
    int maxTextLength = 0;

    for (array_129 = __this->_wrappedLines, index_130 = 0, length_131 = ::uPtr< ::uArray*>(array_129)->Length(); index_130 < length_131; ++index_130)
    {
        ::app::Fuse::Controls::Internal::WrappedLine* wrappedLine = ::uPtr< ::uArray*>(array_129)->Item< ::app::Fuse::Controls::Internal::WrappedLine*>(index_130);
        maxWidth = ::app::Uno::Math__Max_1(NULL, maxWidth, ::uPtr< ::app::Fuse::Controls::Internal::WrappedLine*>(wrappedLine)->LineWidth);
        maxTextLength = maxTextLength + ::uPtr< ::uString*>(wrappedLine->Text)->Length();
        height = height + ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->LineHeight;
    }

    __this->_textBoundsSize = ::app::Uno::Float2__New_2(NULL, maxWidth, height);
    __this->_maxTextLength = maxTextLength;
}

DefaultTextVisual* DefaultTextVisual__New_1(::uStatic* __this)
{
    DefaultTextVisual* inst = (DefaultTextVisual*)::uAllocObject(sizeof(DefaultTextVisual), DefaultTextVisual__typeof());
    inst->_ObjInit_4();
    return inst;
}

void DefaultTextVisual__OnDraw(DefaultTextVisual* __this, ::app::Fuse::DrawContext* dc)
{
    ::uArray* array_132;
    int index_133 = int();
    int length_134 = int();
    __this->InitWrap(__this->ActualSize().X, ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->Value());
    ::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->TextRenderer)->BeginRendering(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->FontSize, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->AbsoluteZoom, __this->WorldTransform(), __this->ActualSize(), ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->TextColor(), __this->_maxTextLength);
    float y = 0.0f;

    for (array_132 = __this->_wrappedLines, index_133 = 0, length_134 = ::uPtr< ::uArray*>(array_132)->Length(); index_133 < length_134; ++index_133)
    {
        ::app::Fuse::Controls::Internal::WrappedLine* wrappedLine = ::uPtr< ::uArray*>(array_132)->Item< ::app::Fuse::Controls::Internal::WrappedLine*>(index_133);
        float x = ::uPtr< ::app::Fuse::Controls::Internal::WrappedLine*>(wrappedLine)->GetXOffset(::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->TextAlignment(), __this->ActualSize().X, __this->AbsoluteZoom());
        ::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->TextRenderer)->DrawLine(dc, x * ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->AbsoluteZoom, y, wrappedLine->Text);
        y = y + (::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->LineHeight * ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->AbsoluteZoom);
    }

    ::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->TextRenderer)->EndRendering(dc);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EllipseVisual__uType* EllipseVisual__typeof()
{
    static ::uStaticStrong<EllipseVisual__uType*> type;
    if (type != NULL) return type;

    type = (EllipseVisual__uType*)::uAllocClassType(sizeof(EllipseVisual__uType), "Fuse.Controls.Graphics.EllipseVisual", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_Ellipse__typeof());
    type->__fp_UpdatePath = (void(*)(::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_Ellipse*, ::app::Fuse::Drawing::PathGeometryRenderer*))EllipseVisual__UpdatePath;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(EllipseVisual__uType, __interface_0));

    type->SetFields(1,
        ::uNewField("_cachedRadius", NULL, offsetof(EllipseVisual, _cachedRadius), ::app::Uno::Float2__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_Ellipse", EllipseVisual__get_Ellipse, 0, false, ::app::Fuse::Controls::Ellipse__typeof()),
        ::uNewFunction(".ctor", EllipseVisual__New_1, 0, true, EllipseVisual__typeof()));

    ::uRegisterType(type);
    return type;
}

void EllipseVisual___ObjInit_5(EllipseVisual* __this)
{
    __this->_cachedRadius = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_Ellipse___ObjInit_4(__this);
}

::app::Fuse::Controls::Ellipse* EllipseVisual__get_Ellipse(EllipseVisual* __this)
{
    return ::uCast< ::app::Fuse::Controls::Ellipse*>(__this->Shape(), ::app::Fuse::Controls::Ellipse__typeof());
}

EllipseVisual* EllipseVisual__New_1(::uStatic* __this)
{
    EllipseVisual* inst = (EllipseVisual*)::uAllocObject(sizeof(EllipseVisual), EllipseVisual__typeof());
    inst->_ObjInit_5();
    return inst;
}

void EllipseVisual__UpdatePath(EllipseVisual* __this, ::app::Fuse::Drawing::PathGeometryRenderer* renderer)
{
    if (__this->Ellipse() == NULL)
    {
        return;
    }

    ::app::Uno::Float2 radius = ::app::Uno::Float2__op_Multiply_1(NULL, __this->ActualSize(), 0.5f);

    if (::app::Uno::Float2__op_Equality(NULL, __this->_cachedRadius, radius))
    {
        return;
    }

    __this->_cachedRadius = radius;
    __this->InvalidateRenderBounds();
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(renderer)->Geometry(::app::Fuse::Drawing::PathGeometryExtensions__Ellipse(NULL, ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::app::Fuse::Drawing::PathGeometry__New_1(NULL))->MoveTo_1(radius), radius));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Font*> GraphicsStyle__Default;

GraphicsStyle__uType* GraphicsStyle__typeof()
{
    static ::uStaticStrong<GraphicsStyle__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsStyle__uType*)::uAllocClassType(sizeof(GraphicsStyle__uType), "Fuse.Controls.Graphics.GraphicsStyle", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Style__typeof());

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(GraphicsStyle__uType, __interface_0));

    type->SetFields(1,
        ::uNewField("Default", &GraphicsStyle__Default, 0, ::app::Fuse::Font__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("InitializeUX", GraphicsStyle__InitializeUX, 0, false),
        ::uNewFunction(".ctor", GraphicsStyle__New_2, 0, true, GraphicsStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void GraphicsStyle___ObjInit_1(GraphicsStyle* __this)
{
    ::app::Fuse::Style___ObjInit(__this);
    __this->InitializeUX();
}

void GraphicsStyle___TypeInit(::uStatic* __this)
{
    GraphicsStyle__Default = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 4), ::app::Uno::BundleFile__typeof())));
    ::app::Uno::UX::Resource__SetGlobalKey(NULL, (::uObject*)GraphicsStyle__Default, ::uGetConstString("Default"));
}

void GraphicsStyle__InitializeUX(GraphicsStyle* __this)
{
    ::app::Fuse::Controls::Graphics::GraphicsStyle_Template* collection_123;
    ::app::Fuse::Controls::Graphics::GraphicsStyle_Template1* collection_124;
    ::app::Fuse::Controls::Graphics::GraphicsStyle_Template2* collection_125;
    ::app::Fuse::Controls::Graphics::GraphicsStyle_Template3* collection_126;
    ::app::Fuse::Controls::Graphics::GraphicsStyle_Template4* collection_127;
    ::app::Fuse::Controls::Graphics::GraphicsStyle_Template5* collection_128;
    ::app::Fuse::Controls::Graphics::GraphicsStyle_Template6* collection_129;
    ::app::Fuse::Controls::Graphics::GraphicsStyle_Template7* collection_130;
    ::app::Fuse::Controls::Graphics::GraphicsStyle_Template8* collection_131;
    collection_123 = ::app::Fuse::Controls::Graphics::GraphicsStyle_Template__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::Controls::Graphics::GraphicsStyle_Template*>(collection_123)->Cascade(true);
    collection_123->AffectSubtypes(true);
    ::app::Fuse::Controls::Graphics::GraphicsStyle_Template* temp = collection_123;
    collection_124 = ::app::Fuse::Controls::Graphics::GraphicsStyle_Template1__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::Controls::Graphics::GraphicsStyle_Template1*>(collection_124)->Cascade(true);
    collection_124->AffectSubtypes(true);
    ::app::Fuse::Controls::Graphics::GraphicsStyle_Template1* temp1 = collection_124;
    collection_125 = ::app::Fuse::Controls::Graphics::GraphicsStyle_Template2__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::Controls::Graphics::GraphicsStyle_Template2*>(collection_125)->Cascade(true);
    collection_125->AffectSubtypes(true);
    ::app::Fuse::Controls::Graphics::GraphicsStyle_Template2* temp2 = collection_125;
    collection_126 = ::app::Fuse::Controls::Graphics::GraphicsStyle_Template3__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::Controls::Graphics::GraphicsStyle_Template3*>(collection_126)->Cascade(true);
    collection_126->AffectSubtypes(true);
    ::app::Fuse::Controls::Graphics::GraphicsStyle_Template3* temp3 = collection_126;
    collection_127 = ::app::Fuse::Controls::Graphics::GraphicsStyle_Template4__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::Controls::Graphics::GraphicsStyle_Template4*>(collection_127)->Cascade(true);
    collection_127->AffectSubtypes(true);
    ::app::Fuse::Controls::Graphics::GraphicsStyle_Template4* temp4 = collection_127;
    collection_128 = ::app::Fuse::Controls::Graphics::GraphicsStyle_Template5__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::Controls::Graphics::GraphicsStyle_Template5*>(collection_128)->Cascade(true);
    collection_128->AffectSubtypes(true);
    ::app::Fuse::Controls::Graphics::GraphicsStyle_Template5* temp5 = collection_128;
    collection_129 = ::app::Fuse::Controls::Graphics::GraphicsStyle_Template6__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::Controls::Graphics::GraphicsStyle_Template6*>(collection_129)->Cascade(true);
    collection_129->AffectSubtypes(true);
    ::app::Fuse::Controls::Graphics::GraphicsStyle_Template6* temp6 = collection_129;
    collection_130 = ::app::Fuse::Controls::Graphics::GraphicsStyle_Template7__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::Controls::Graphics::GraphicsStyle_Template7*>(collection_130)->Cascade(true);
    collection_130->AffectSubtypes(true);
    ::app::Fuse::Controls::Graphics::GraphicsStyle_Template7* temp7 = collection_130;
    collection_131 = ::app::Fuse::Controls::Graphics::GraphicsStyle_Template8__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::Controls::Graphics::GraphicsStyle_Template8*>(collection_131)->Cascade(true);
    collection_131->AffectSubtypes(true);
    ::app::Fuse::Controls::Graphics::GraphicsStyle_Template8* temp8 = collection_131;
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp1);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp2);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp3);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp4);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp5);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp6);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp7);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp8);
}

GraphicsStyle* GraphicsStyle__New_2(::uStatic* __this)
{
    GraphicsStyle* inst = (GraphicsStyle*)::uAllocObject(sizeof(GraphicsStyle), GraphicsStyle__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property__uType* GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property__typeof()
{
    static ::uStaticStrong<GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property__uType*)::uAllocClassType(sizeof(GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property__uType), "Fuse.Controls.Graphics.GraphicsStyle.Fuse_Controls_ScrollView_bool_KeepFocusInView_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__bool__typeof());
    type->__fp_OnGet = (bool(*)(::app::Uno::UX::Property__bool*))GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__bool*, bool, ::uObject*))GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property__New_1, 0, true, GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property__typeof(), ::app::Fuse::Controls::ScrollView__typeof()));

    ::uRegisterType(type);
    return type;
}

void GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property___ObjInit_1(GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property* __this, ::app::Fuse::Controls::ScrollView* obj)
{
    ::app::Uno::UX::Property__bool___ObjInit(__this);
    __this->_obj = obj;
}

GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property* GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property__New_1(::uStatic* __this, ::app::Fuse::Controls::ScrollView* obj)
{
    GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property* inst = (GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property*)::uAllocObject(sizeof(GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property), GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

bool GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property__OnGet(GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property* __this)
{
    return ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_obj)->KeepFocusInView();
}

void GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property__OnSet(GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property* __this, bool v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_obj)->KeepFocusInView(v);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property__uType* GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property__typeof()
{
    static ::uStaticStrong<GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property__uType*)::uAllocClassType(sizeof(GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property__uType), "Fuse.Controls.Graphics.GraphicsStyle.Fuse_Controls_ScrollView_bool_UserScroll_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__bool__typeof());
    type->__fp_OnGet = (bool(*)(::app::Uno::UX::Property__bool*))GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__bool*, bool, ::uObject*))GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property__New_1, 0, true, GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property__typeof(), ::app::Fuse::Controls::ScrollView__typeof()));

    ::uRegisterType(type);
    return type;
}

void GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property___ObjInit_1(GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property* __this, ::app::Fuse::Controls::ScrollView* obj)
{
    ::app::Uno::UX::Property__bool___ObjInit(__this);
    __this->_obj = obj;
}

GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property* GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property__New_1(::uStatic* __this, ::app::Fuse::Controls::ScrollView* obj)
{
    GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property* inst = (GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property*)::uAllocObject(sizeof(GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property), GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

bool GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property__OnGet(GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property* __this)
{
    return ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_obj)->UserScroll();
}

void GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property__OnSet(GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property* __this, bool v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_obj)->UserScroll(v);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property__uType* GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property__typeof()
{
    static ::uStaticStrong<GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property__uType*)::uAllocClassType(sizeof(GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property__uType), "Fuse.Controls.Graphics.GraphicsStyle.Fuse_Gestures_Scroller_bool_UserScroll_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__bool__typeof());
    type->__fp_OnGet = (bool(*)(::app::Uno::UX::Property__bool*))GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__bool*, bool, ::uObject*))GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property__New_1, 0, true, GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property__typeof(), ::app::Fuse::Gestures::Scroller__typeof()));

    ::uRegisterType(type);
    return type;
}

void GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property___ObjInit_1(GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property* __this, ::app::Fuse::Gestures::Scroller* obj)
{
    ::app::Uno::UX::Property__bool___ObjInit(__this);
    __this->_obj = obj;
}

GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property* GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property__New_1(::uStatic* __this, ::app::Fuse::Gestures::Scroller* obj)
{
    GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property* inst = (GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property*)::uAllocObject(sizeof(GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property), GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

bool GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property__OnGet(GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property* __this)
{
    return ::uPtr< ::app::Fuse::Gestures::Scroller*>(__this->_obj)->UserScroll();
}

void GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property__OnSet(GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property* __this, bool v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Gestures::Scroller*>(__this->_obj)->UserScroll(v);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property__uType* GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property__typeof()
{
    static ::uStaticStrong<GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property__uType*)::uAllocClassType(sizeof(GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property__uType), "Fuse.Controls.Graphics.GraphicsStyle.Fuse_Triggers_WhileBool_bool_Value_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__bool__typeof());
    type->__fp_OnGet = (bool(*)(::app::Uno::UX::Property__bool*))GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__bool*, bool, ::uObject*))GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property__New_1, 0, true, GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property__typeof(), ::app::Fuse::Triggers::WhileBool__typeof()));

    ::uRegisterType(type);
    return type;
}

void GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property___ObjInit_1(GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property* __this, ::app::Fuse::Triggers::WhileBool* obj)
{
    ::app::Uno::UX::Property__bool___ObjInit(__this);
    __this->_obj = obj;
}

GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property* GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property__New_1(::uStatic* __this, ::app::Fuse::Triggers::WhileBool* obj)
{
    GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property* inst = (GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property*)::uAllocObject(sizeof(GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property), GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

bool GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property__OnGet(GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property* __this)
{
    return ::uPtr< ::app::Fuse::Triggers::WhileBool*>(__this->_obj)->Value_1();
}

void GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property__OnSet(GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property* __this, bool v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Triggers::WhileBool*>(__this->_obj)->Value_1(v);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsStyle_Template__uType* GraphicsStyle_Template__typeof()
{
    static ::uStaticStrong<GraphicsStyle_Template__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsStyle_Template__uType*)::uAllocClassType(sizeof(GraphicsStyle_Template__uType), "Fuse.Controls.Graphics.GraphicsStyle.Template", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_TextControl__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_TextControl*, ::app::Fuse::Controls::TextControl*))GraphicsStyle_Template__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(GraphicsStyle_Template__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(GraphicsStyle_Template, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", GraphicsStyle_Template__New_1, 0, true, GraphicsStyle_Template__typeof(), ::app::Fuse::Controls::Graphics::GraphicsStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void GraphicsStyle_Template___ObjInit_1(GraphicsStyle_Template* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_TextControl___ObjInit(__this);
    __this->__parent = parent;
}

GraphicsStyle_Template* GraphicsStyle_Template__New_1(::uStatic* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent)
{
    GraphicsStyle_Template* inst = (GraphicsStyle_Template*)::uAllocObject(sizeof(GraphicsStyle_Template), GraphicsStyle_Template__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void GraphicsStyle_Template__OnApply(GraphicsStyle_Template* __this, ::app::Fuse::Controls::TextControl* self)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font*>(::app::Fuse::Controls::TextControl__FontProperty)->SetStyle(self, ::app::Fuse::Controls::Graphics::GraphicsStyle__Default);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsStyle_Template1__uType* GraphicsStyle_Template1__typeof()
{
    static ::uStaticStrong<GraphicsStyle_Template1__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsStyle_Template1__uType*)::uAllocClassType(sizeof(GraphicsStyle_Template1__uType), "Fuse.Controls.Graphics.GraphicsStyle.Template1", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_Rectangle__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Rectangle*, ::app::Fuse::Controls::Rectangle*))GraphicsStyle_Template1__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(GraphicsStyle_Template1__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(GraphicsStyle_Template1, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", GraphicsStyle_Template1__New_1, 0, true, GraphicsStyle_Template1__typeof(), ::app::Fuse::Controls::Graphics::GraphicsStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void GraphicsStyle_Template1___ObjInit_1(GraphicsStyle_Template1* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Rectangle___ObjInit(__this);
    __this->__parent = parent;
}

GraphicsStyle_Template1* GraphicsStyle_Template1__New_1(::uStatic* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent)
{
    GraphicsStyle_Template1* inst = (GraphicsStyle_Template1*)::uAllocObject(sizeof(GraphicsStyle_Template1), GraphicsStyle_Template1__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void GraphicsStyle_Template1__OnApply(GraphicsStyle_Template1* __this, ::app::Fuse::Controls::Rectangle* self)
{
    ::app::Fuse::Controls::Graphics::RectangleVisual* temp = ::app::Fuse::Controls::Graphics::RectangleVisual__New_1(NULL);
    ::uPtr< ::app::Fuse::Controls::Rectangle*>(self)->AddStyleChild((::app::Fuse::Node*)temp);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsStyle_Template2__uType* GraphicsStyle_Template2__typeof()
{
    static ::uStaticStrong<GraphicsStyle_Template2__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsStyle_Template2__uType*)::uAllocClassType(sizeof(GraphicsStyle_Template2__uType), "Fuse.Controls.Graphics.GraphicsStyle.Template2", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_Circle__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Circle*, ::app::Fuse::Controls::Circle*))GraphicsStyle_Template2__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(GraphicsStyle_Template2__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(GraphicsStyle_Template2, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", GraphicsStyle_Template2__New_1, 0, true, GraphicsStyle_Template2__typeof(), ::app::Fuse::Controls::Graphics::GraphicsStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void GraphicsStyle_Template2___ObjInit_1(GraphicsStyle_Template2* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Circle___ObjInit(__this);
    __this->__parent = parent;
}

GraphicsStyle_Template2* GraphicsStyle_Template2__New_1(::uStatic* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent)
{
    GraphicsStyle_Template2* inst = (GraphicsStyle_Template2*)::uAllocObject(sizeof(GraphicsStyle_Template2), GraphicsStyle_Template2__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void GraphicsStyle_Template2__OnApply(GraphicsStyle_Template2* __this, ::app::Fuse::Controls::Circle* self)
{
    ::app::Fuse::Controls::Graphics::CircleVisual* temp = ::app::Fuse::Controls::Graphics::CircleVisual__New_1(NULL);
    ::uPtr< ::app::Fuse::Controls::Circle*>(self)->AddStyleChild((::app::Fuse::Node*)temp);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsStyle_Template3__uType* GraphicsStyle_Template3__typeof()
{
    static ::uStaticStrong<GraphicsStyle_Template3__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsStyle_Template3__uType*)::uAllocClassType(sizeof(GraphicsStyle_Template3__uType), "Fuse.Controls.Graphics.GraphicsStyle.Template3", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_Star__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Star*, ::app::Fuse::Controls::Star*))GraphicsStyle_Template3__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(GraphicsStyle_Template3__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(GraphicsStyle_Template3, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", GraphicsStyle_Template3__New_1, 0, true, GraphicsStyle_Template3__typeof(), ::app::Fuse::Controls::Graphics::GraphicsStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void GraphicsStyle_Template3___ObjInit_1(GraphicsStyle_Template3* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Star___ObjInit(__this);
    __this->__parent = parent;
}

GraphicsStyle_Template3* GraphicsStyle_Template3__New_1(::uStatic* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent)
{
    GraphicsStyle_Template3* inst = (GraphicsStyle_Template3*)::uAllocObject(sizeof(GraphicsStyle_Template3), GraphicsStyle_Template3__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void GraphicsStyle_Template3__OnApply(GraphicsStyle_Template3* __this, ::app::Fuse::Controls::Star* self)
{
    ::app::Fuse::Controls::Graphics::StarVisual* temp = ::app::Fuse::Controls::Graphics::StarVisual__New_1(NULL);
    ::uPtr< ::app::Fuse::Controls::Star*>(self)->AddStyleChild((::app::Fuse::Node*)temp);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsStyle_Template4__uType* GraphicsStyle_Template4__typeof()
{
    static ::uStaticStrong<GraphicsStyle_Template4__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsStyle_Template4__uType*)::uAllocClassType(sizeof(GraphicsStyle_Template4__uType), "Fuse.Controls.Graphics.GraphicsStyle.Template4", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_Ellipse__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Ellipse*, ::app::Fuse::Controls::Ellipse*))GraphicsStyle_Template4__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(GraphicsStyle_Template4__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(GraphicsStyle_Template4, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", GraphicsStyle_Template4__New_1, 0, true, GraphicsStyle_Template4__typeof(), ::app::Fuse::Controls::Graphics::GraphicsStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void GraphicsStyle_Template4___ObjInit_1(GraphicsStyle_Template4* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Ellipse___ObjInit(__this);
    __this->__parent = parent;
}

GraphicsStyle_Template4* GraphicsStyle_Template4__New_1(::uStatic* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent)
{
    GraphicsStyle_Template4* inst = (GraphicsStyle_Template4*)::uAllocObject(sizeof(GraphicsStyle_Template4), GraphicsStyle_Template4__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void GraphicsStyle_Template4__OnApply(GraphicsStyle_Template4* __this, ::app::Fuse::Controls::Ellipse* self)
{
    ::app::Fuse::Controls::Graphics::EllipseVisual* temp = ::app::Fuse::Controls::Graphics::EllipseVisual__New_1(NULL);
    ::uPtr< ::app::Fuse::Controls::Ellipse*>(self)->AddStyleChild((::app::Fuse::Node*)temp);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsStyle_Template5__uType* GraphicsStyle_Template5__typeof()
{
    static ::uStaticStrong<GraphicsStyle_Template5__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsStyle_Template5__uType*)::uAllocClassType(sizeof(GraphicsStyle_Template5__uType), "Fuse.Controls.Graphics.GraphicsStyle.Template5", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_RegularPolygon__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_RegularPolygon*, ::app::Fuse::Controls::RegularPolygon*))GraphicsStyle_Template5__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(GraphicsStyle_Template5__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(GraphicsStyle_Template5, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", GraphicsStyle_Template5__New_1, 0, true, GraphicsStyle_Template5__typeof(), ::app::Fuse::Controls::Graphics::GraphicsStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void GraphicsStyle_Template5___ObjInit_1(GraphicsStyle_Template5* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_RegularPolygon___ObjInit(__this);
    __this->__parent = parent;
}

GraphicsStyle_Template5* GraphicsStyle_Template5__New_1(::uStatic* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent)
{
    GraphicsStyle_Template5* inst = (GraphicsStyle_Template5*)::uAllocObject(sizeof(GraphicsStyle_Template5), GraphicsStyle_Template5__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void GraphicsStyle_Template5__OnApply(GraphicsStyle_Template5* __this, ::app::Fuse::Controls::RegularPolygon* self)
{
    ::app::Fuse::Controls::Graphics::RegularPolygonVisual* temp = ::app::Fuse::Controls::Graphics::RegularPolygonVisual__New_1(NULL);
    ::uPtr< ::app::Fuse::Controls::RegularPolygon*>(self)->AddStyleChild((::app::Fuse::Node*)temp);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsStyle_Template6__uType* GraphicsStyle_Template6__typeof()
{
    static ::uStaticStrong<GraphicsStyle_Template6__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsStyle_Template6__uType*)::uAllocClassType(sizeof(GraphicsStyle_Template6__uType), "Fuse.Controls.Graphics.GraphicsStyle.Template6", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_Path__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Path*, ::app::Fuse::Controls::Path*))GraphicsStyle_Template6__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(GraphicsStyle_Template6__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(GraphicsStyle_Template6, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", GraphicsStyle_Template6__New_1, 0, true, GraphicsStyle_Template6__typeof(), ::app::Fuse::Controls::Graphics::GraphicsStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void GraphicsStyle_Template6___ObjInit_1(GraphicsStyle_Template6* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Path___ObjInit(__this);
    __this->__parent = parent;
}

GraphicsStyle_Template6* GraphicsStyle_Template6__New_1(::uStatic* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent)
{
    GraphicsStyle_Template6* inst = (GraphicsStyle_Template6*)::uAllocObject(sizeof(GraphicsStyle_Template6), GraphicsStyle_Template6__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void GraphicsStyle_Template6__OnApply(GraphicsStyle_Template6* __this, ::app::Fuse::Controls::Path* self)
{
    ::app::Fuse::Controls::Graphics::PathVisual* temp = ::app::Fuse::Controls::Graphics::PathVisual__New_1(NULL);
    ::uPtr< ::app::Fuse::Controls::Path*>(self)->AddStyleChild((::app::Fuse::Node*)temp);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsStyle_Template7__uType* GraphicsStyle_Template7__typeof()
{
    static ::uStaticStrong<GraphicsStyle_Template7__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsStyle_Template7__uType*)::uAllocClassType(sizeof(GraphicsStyle_Template7__uType), "Fuse.Controls.Graphics.GraphicsStyle.Template7", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_Image__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Image*, ::app::Fuse::Controls::Image*))GraphicsStyle_Template7__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(GraphicsStyle_Template7__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(GraphicsStyle_Template7, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", GraphicsStyle_Template7__New_1, 0, true, GraphicsStyle_Template7__typeof(), ::app::Fuse::Controls::Graphics::GraphicsStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void GraphicsStyle_Template7___ObjInit_1(GraphicsStyle_Template7* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Image___ObjInit(__this);
    __this->__parent = parent;
}

GraphicsStyle_Template7* GraphicsStyle_Template7__New_1(::uStatic* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent)
{
    GraphicsStyle_Template7* inst = (GraphicsStyle_Template7*)::uAllocObject(sizeof(GraphicsStyle_Template7), GraphicsStyle_Template7__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void GraphicsStyle_Template7__OnApply(GraphicsStyle_Template7* __this, ::app::Fuse::Controls::Image* self)
{
    ::app::Fuse::Controls::Graphics::ImageVisual* temp = ::app::Fuse::Controls::Graphics::ImageVisual__New_1(NULL);
    ::uPtr< ::app::Fuse::Controls::Image*>(self)->AddStyleChild((::app::Fuse::Node*)temp);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsStyle_Template8__uType* GraphicsStyle_Template8__typeof()
{
    static ::uStaticStrong<GraphicsStyle_Template8__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsStyle_Template8__uType*)::uAllocClassType(sizeof(GraphicsStyle_Template8__uType), "Fuse.Controls.Graphics.GraphicsStyle.Template8", false, 1, 5, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_ScrollView__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_ScrollView*, ::app::Fuse::Controls::ScrollView*))GraphicsStyle_Template8__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(GraphicsStyle_Template8__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(GraphicsStyle_Template8, __parent),
        "self_KeepFocusInView_inst", offsetof(GraphicsStyle_Template8, self_KeepFocusInView_inst),
        "self_UserScroll_inst", offsetof(GraphicsStyle_Template8, self_UserScroll_inst),
        "temp_UserScroll_inst", offsetof(GraphicsStyle_Template8, temp_UserScroll_inst),
        "temp1_Value_inst", offsetof(GraphicsStyle_Template8, temp1_Value_inst));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", GraphicsStyle_Template8__New_1, 0, true, GraphicsStyle_Template8__typeof(), ::app::Fuse::Controls::Graphics::GraphicsStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void GraphicsStyle_Template8___ObjInit_1(GraphicsStyle_Template8* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_ScrollView___ObjInit(__this);
    __this->__parent = parent;
}

GraphicsStyle_Template8* GraphicsStyle_Template8__New_1(::uStatic* __this, ::app::Fuse::Controls::Graphics::GraphicsStyle* parent)
{
    GraphicsStyle_Template8* inst = (GraphicsStyle_Template8*)::uAllocObject(sizeof(GraphicsStyle_Template8), GraphicsStyle_Template8__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void GraphicsStyle_Template8__OnApply(GraphicsStyle_Template8* __this, ::app::Fuse::Controls::ScrollView* self)
{
    ::app::Fuse::Gestures::Scroller* temp = ::app::Fuse::Gestures::Scroller__New_1(NULL);
    __this->temp_UserScroll_inst = ::app::Fuse::Controls::Graphics::GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property__New_1(NULL, temp);
    __this->self_UserScroll_inst = ::app::Fuse::Controls::Graphics::GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property__New_1(NULL, self);
    ::app::Fuse::Triggers::WhileTrue* temp1 = ::app::Fuse::Triggers::WhileTrue__New_1(NULL);
    __this->temp1_Value_inst = ::app::Fuse::Controls::Graphics::GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property__New_1(NULL, (::app::Fuse::Triggers::WhileBool*)temp1);
    __this->self_KeepFocusInView_inst = ::app::Fuse::Controls::Graphics::GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property__New_1(NULL, self);
    ::app::Fuse::Gestures::KeepFocusInView* temp2 = ::app::Fuse::Gestures::KeepFocusInView__New_2(NULL);
    ::app::Fuse::Controls::PropertyBinding__bool* temp3 = ::app::Fuse::Controls::PropertyBinding__bool__New_1(NULL, (::app::Uno::UX::Property__bool*)__this->temp_UserScroll_inst, (::app::Uno::UX::Property__bool*)__this->self_UserScroll_inst);
    ::app::Fuse::Controls::PropertyBinding__bool* temp4 = ::app::Fuse::Controls::PropertyBinding__bool__New_1(NULL, (::app::Uno::UX::Property__bool*)__this->temp1_Value_inst, (::app::Uno::UX::Property__bool*)__this->self_KeepFocusInView_inst);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileTrue*>(temp1)->Behaviors()), (::app::Fuse::Behavior*)temp2);
    ::uPtr< ::app::Fuse::Controls::ScrollView*>(self)->AddStyleBehavior((::app::Fuse::Behavior*)temp3);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp4);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp1);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ImageElementDraw*> ImageElementDraw__Impl;

ImageElementDraw__uType* ImageElementDraw__typeof()
{
    static ::uStaticStrong<ImageElementDraw__uType*> type;
    if (type != NULL) return type;

    type = (ImageElementDraw__uType*)::uAllocClassType(sizeof(ImageElementDraw__uType), "Fuse.Controls.Graphics.ImageElementDraw", false, 0, 4, 0);

    type->SetStrongRefs(
        "_draw_7603fe67._compiledProgram", offsetof(ImageElementDraw, _draw_7603fe67._compiledProgram),
        "_draw_7603fe67._constValues", offsetof(ImageElementDraw, _draw_7603fe67._constValues),
        "_draw_7603fe67._Program", offsetof(ImageElementDraw, _draw_7603fe67._Program),
        "Draw_VertexData_7603fe67_7_2_1", offsetof(ImageElementDraw, Draw_VertexData_7603fe67_7_2_1));

    type->SetFields(1,
        ::uNewField("Impl", &ImageElementDraw__Impl, 0, ImageElementDraw__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Draw", ImageElementDraw__Draw, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Fuse::Node__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Graphics::Texture2D__typeof(), ::app::Uno::Float4__typeof()),
        ::uNewFunction(".ctor", ImageElementDraw__New_1, 0, true, ImageElementDraw__typeof()));

    ::uRegisterType(type);
    return type;
}

void ImageElementDraw___ObjInit(ImageElementDraw* __this)
{
    __this->init_DrawCalls();
}

void ImageElementDraw___TypeInit(::uStatic* __this)
{
    ImageElementDraw__Impl = ImageElementDraw__New_1(NULL);
}

void ImageElementDraw__Draw(ImageElementDraw* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Node* element, ::app::Uno::Float2 offset, ::app::Uno::Float2 size, ::app::Uno::Float2 uvPosition, ::app::Uno::Float2 uvSize, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float4 Color)
{
    ::app::Uno::Float4x4 LocalTransform_7603fe67_4_8_4 = ::app::Uno::Matrix__Mul_10(NULL, __this->Draw_LocalTransform_7603fe67_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, size.X, size.Y, 1.0f), __this->Draw_LocalTransform_7603fe67_4_8_3, ::app::Uno::Matrix__Translation(NULL, offset.X, offset.Y, 0.0f));
    {
        __this->_draw_7603fe67.BlendEnabled(true);
        __this->_draw_7603fe67.BlendSrcRgb(2);
        __this->_draw_7603fe67.BlendDstRgb(3);
        __this->_draw_7603fe67.BlendDstAlpha(3);
        __this->_draw_7603fe67.DepthTestEnabled(false);
        __this->_draw_7603fe67.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
        __this->_draw_7603fe67.Use();
        __this->_draw_7603fe67.Attrib_1(0, 2, __this->Draw_VertexData_7603fe67_7_2_1, 8, 0);
        __this->_draw_7603fe67.Uniform_17(1, ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(dc->Viewport())));
        __this->_draw_7603fe67.Uniform_12(2, uvSize);
        __this->_draw_7603fe67.Uniform_12(3, uvPosition);
        __this->_draw_7603fe67.Uniform_16(4, Color);
        __this->_draw_7603fe67.Uniform_17(5, (element != NULL) ? ::app::Uno::Matrix__Mul_8(NULL, LocalTransform_7603fe67_4_8_4, ::uPtr< ::app::Fuse::Node*>(element)->WorldTransform()) : LocalTransform_7603fe67_4_8_4);
        __this->_draw_7603fe67.Sampler_2(6, tex);
        __this->_draw_7603fe67.DrawArrays(6);
    }
}

void ImageElementDraw__free_DrawCalls(ImageElementDraw* __this)
{
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->Draw_VertexData_7603fe67_7_2_1)->Dispose();
}

void ImageElementDraw__init_DrawCalls(ImageElementDraw* __this)
{
    ::uArray* array_123;
    __this->Draw_VertexData_7603fe67_7_2_1 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, (array_123 = ::uNewArray(::app::Uno::Float2__typeof(), 6), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f), array_123)), 0);
    __this->Draw_LocalTransform_7603fe67_4_8_2 = ::app::Uno::Matrix__Translation(NULL, -::app::Uno::Float2__New_1(NULL, 0.0f).X, -::app::Uno::Float2__New_1(NULL, 0.0f).Y, 0.0f);
    __this->Draw_LocalTransform_7603fe67_4_8_3 = ::app::Uno::Matrix__RotationZ(NULL, 0.0f);
    __this->_draw_7603fe67 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 105), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

ImageElementDraw* ImageElementDraw__New_1(::uStatic* __this)
{
    ImageElementDraw* inst = (ImageElementDraw*)::uAllocObject(sizeof(ImageElementDraw), ImageElementDraw__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ImageVisual__uType* ImageVisual__typeof()
{
    static ::uStaticStrong<ImageVisual__uType*> type;
    if (type != NULL) return type;

    type = (ImageVisual__uType*)::uAllocClassType(sizeof(ImageVisual__uType), "Fuse.Controls.Graphics.ImageVisual", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Image__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Image*))ImageVisual__Attach;
    type->__fp_Detach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Image*))ImageVisual__Detach;
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))ImageVisual__GetMarginSize;
    type->__fp_OnArrangeMarginBox = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, ::app::Uno::Float2, int))ImageVisual__OnArrangeMarginBox;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Controls::Graphics::Visual*, ::app::Fuse::DrawContext*))ImageVisual__OnDraw;
    type->__fp_OnHitTest = (void(*)(::app::Fuse::Node*, ::app::Fuse::HitTestContext*))ImageVisual__OnHitTest;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ImageVisual__uType, __interface_0));

    type->SetFields(5,
        ::uNewField("_drawOrigin", NULL, offsetof(ImageVisual, _drawOrigin), ::app::Uno::Float2__typeof()),
        ::uNewField("_drawSize", NULL, offsetof(ImageVisual, _drawSize), ::app::Uno::Float2__typeof()),
        ::uNewField("_origin", NULL, offsetof(ImageVisual, _origin), ::app::Uno::Float2__typeof()),
        ::uNewField("_scale", NULL, offsetof(ImageVisual, _scale), ::app::Uno::Float2__typeof()),
        ::uNewField("_uvClip", NULL, offsetof(ImageVisual, _uvClip), ::app::Uno::Float4__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_Container", ImageVisual__get_Container, 0, false, ::app::Fuse::Internal::ImageContainer__typeof()),
        ::uNewFunction("GetSize", ImageVisual__GetSize, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", ImageVisual__New_1, 0, true, ImageVisual__typeof()),
        ::uNewFunctionVoid("OnParamChanged", ImageVisual__OnParamChanged, 0, false, ::uObject__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void ImageVisual___ObjInit_3(ImageVisual* __this)
{
    ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Image___ObjInit_2(__this);
}

void ImageVisual__Attach(ImageVisual* __this)
{
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->add_ParamChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ImageVisual__OnParamChanged, __this));
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->add_SourceChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ImageVisual__OnParamChanged, __this));
}

void ImageVisual__Detach(ImageVisual* __this)
{
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->remove_ParamChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ImageVisual__OnParamChanged, __this));
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->remove_SourceChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ImageVisual__OnParamChanged, __this));
}

::app::Fuse::Internal::ImageContainer* ImageVisual__get_Container(ImageVisual* __this)
{
    return ::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->Container();
}

::app::Uno::Float2 ImageVisual__GetMarginSize(ImageVisual* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->Container())->Sizing)->snapToPixels = ::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->SnapToPixels();
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->Container())->Sizing)->absoluteZoom = __this->AbsoluteZoom();
    ::app::Uno::Float2 r = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->Container())->Sizing)->ExpandFillSize(__this->GetSize(), fillSize, fillSet);
    return r;
}

::app::Uno::Float2 ImageVisual__GetSize(ImageVisual* __this)
{
    if (::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->Source() != NULL)
    {
        return ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->Container())->Sizing)->CalcContentSize(::uPtr< ::app::Fuse::Resources::ImageSource*>(::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->Source())->Size(), ::uPtr< ::app::Fuse::Resources::ImageSource*>(::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->Source())->PixelSize());
    }

    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

ImageVisual* ImageVisual__New_1(::uStatic* __this)
{
    ImageVisual* inst = (ImageVisual*)::uAllocObject(sizeof(ImageVisual), ImageVisual__typeof());
    inst->_ObjInit_3();
    return inst;
}

::app::Uno::Float2 ImageVisual__OnArrangeMarginBox(ImageVisual* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int fillSet)
{
    ::app::Uno::Float2 size = ::app::Fuse::Controls::Graphics::Visual__OnArrangeMarginBox(__this, position, availableSize, fillSet);
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->Container())->Sizing)->snapToPixels = ::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->SnapToPixels();
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->Container())->Sizing)->absoluteZoom = __this->AbsoluteZoom();
    ::app::Uno::Float2 contentDesiredSize = __this->GetSize();
    __this->_scale = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->Container())->Sizing)->CalcScale(size, contentDesiredSize);
    __this->_origin = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->Container())->Sizing)->CalcOrigin(size, ::app::Uno::Float2__op_Multiply_2(NULL, contentDesiredSize, __this->_scale));
    __this->_drawOrigin = __this->_origin;
    __this->_drawSize = ::app::Uno::Float2__op_Multiply_2(NULL, contentDesiredSize, __this->_scale);
    __this->_uvClip = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->Container())->Sizing)->CalcClip(size, &__this->_drawOrigin, &__this->_drawSize);
    return size;
}

void ImageVisual__OnDraw(ImageVisual* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();
    ::app::Uno::Graphics::Texture2D* tex = ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->Container())->GetTexture();

    if (tex == NULL)
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->Container())->StretchMode() == 4)
    {
        ::uPtr< ::app::Fuse::Elements::Internal::Scale9Rectangle*>(::app::Fuse::Elements::Internal::Scale9Rectangle__Impl)->Draw(dc, (::app::Fuse::Node*)__this, __this->ActualSize(), __this->GetSize(), tex, ::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->Color(), ::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->Scale9Margin());
    }
    else
    {
        ::uPtr< ::app::Fuse::Controls::Graphics::ImageElementDraw*>(::app::Fuse::Controls::Graphics::ImageElementDraw__Impl)->Draw(dc, (::app::Fuse::Node*)__this, __this->_drawOrigin, __this->_drawSize, (ind_123 = __this->_uvClip, ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y)), ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_124 = __this->_uvClip, ::app::Uno::Float2__New_2(NULL, ind_124.Z, ind_124.W)), (ind_125 = __this->_uvClip, ::app::Uno::Float2__New_2(NULL, ind_125.X, ind_125.Y))), tex, ::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->Color());
    }
}

void ImageVisual__OnHitTest(ImageVisual* __this, ::app::Fuse::HitTestContext* htc)
{
    ::app::Uno::Float2 lp = ::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint();

    if ((((lp.X >= __this->_drawOrigin.X) && (lp.X <= (__this->_drawOrigin.X + __this->_drawSize.X))) && (lp.Y >= __this->_drawOrigin.Y)) && (lp.Y <= (__this->_drawOrigin.Y + __this->_drawSize.Y)))
    {
        htc->Hit((::app::Fuse::Node*)__this);
    }

    ::app::Fuse::Node__OnHitTest(__this, htc);
}

void ImageVisual__OnParamChanged(ImageVisual* __this, ::uObject* s, ::uObject* a)
{
    __this->InvalidateLayout(2);
    __this->InvalidateVisual();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> LinearSliderBehavior___horizontalGesture;

LinearSliderBehavior__uType* LinearSliderBehavior__typeof()
{
    static ::uStaticStrong<LinearSliderBehavior__uType*> type;
    if (type != NULL) return type;

    type = (LinearSliderBehavior__uType*)::uAllocClassType(sizeof(LinearSliderBehavior__uType), "Fuse.Controls.Graphics.LinearSliderBehavior", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))LinearSliderBehavior__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))LinearSliderBehavior__OnUnrooted;

    type->SetStrongRefs(
        "Control", offsetof(LinearSliderBehavior, Control));

    type->SetFields(5,
        ::uNewField("_down", NULL, offsetof(LinearSliderBehavior, _down), ::app::Uno::Int__typeof()),
        ::uNewField("_horizontalGesture", &LinearSliderBehavior___horizontalGesture, 0, ::app::Fuse::Gestures::SwipeGestureHelper__typeof()),
        ::uNewField("_initialValue", NULL, offsetof(LinearSliderBehavior, _initialValue), ::app::Uno::Double__typeof()),
        ::uNewField("_startCoord", NULL, offsetof(LinearSliderBehavior, _startCoord), ::app::Uno::Float2__typeof()),
        ::uNewField("Control", NULL, offsetof(LinearSliderBehavior, Control), ::app::Fuse::Controls::RangeControl__typeof()));

    type->SetFunctions(7,
        ::uNewFunction(".ctor", LinearSliderBehavior__New_1, 0, true, LinearSliderBehavior__typeof()),
        ::uNewFunctionVoid("OnLostCapture", LinearSliderBehavior__OnLostCapture, 0, false),
        ::uNewFunctionVoid("OnPointerMoved", LinearSliderBehavior__OnPointerMoved, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerMovedArgs__typeof()),
        ::uNewFunctionVoid("OnPointerPressed", LinearSliderBehavior__OnPointerPressed, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerPressedArgs__typeof()),
        ::uNewFunctionVoid("OnPointerReleased", LinearSliderBehavior__OnPointerReleased, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerReleasedArgs__typeof()),
        ::uNewFunction("PositionToValue", LinearSliderBehavior__PositionToValue, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("UpdateValue", LinearSliderBehavior__UpdateValue, 0, false, ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void LinearSliderBehavior___ObjInit_1(LinearSliderBehavior* __this)
{
    __this->_startCoord = ::app::Uno::Float2__New_1(NULL, 0.0f);
    __this->_initialValue = 0.0;
    __this->_down = -1;
    ::app::Fuse::Behavior___ObjInit(__this);
}

void LinearSliderBehavior___TypeInit(::uStatic* __this)
{
    ::uArray* array_123;
    LinearSliderBehavior___horizontalGesture = ::app::Fuse::Gestures::SwipeGestureHelper__New_1(NULL, 10.0f, (array_123 = ::uNewArray(::app::Fuse::Gestures::DegreeSpan__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(0) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, 45.0f, 135.0f), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(1) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, -45.0f, -135.0f), array_123));
}

LinearSliderBehavior* LinearSliderBehavior__New_1(::uStatic* __this)
{
    LinearSliderBehavior* inst = (LinearSliderBehavior*)::uAllocObject(sizeof(LinearSliderBehavior), LinearSliderBehavior__typeof());
    inst->_ObjInit_1();
    return inst;
}

void LinearSliderBehavior__OnLostCapture(LinearSliderBehavior* __this)
{
    __this->_down = -1;
    ::uPtr< ::app::Fuse::Controls::RangeControl*>(__this->Control)->Value(__this->_initialValue);
    ::uPtr< ::app::Fuse::Controls::RangeControl*>(__this->Control)->SetIsInteracting((::uObject*)__this, false);
}

void LinearSliderBehavior__OnPointerMoved(LinearSliderBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* c)
{
    if (__this->_down != ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(c)->PointIndex())
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(c)->IsSoftCapturedTo((::uObject*)__this))
    {
        if (::uPtr< ::app::Fuse::Gestures::SwipeGestureHelper*>(LinearSliderBehavior___horizontalGesture)->IsWithinBounds(::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(c)->WindowPoint(), __this->_startCoord)))
        {
            ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(c)->TryHardCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)LinearSliderBehavior__OnLostCapture, __this), NULL);
        }
    }
    else if (::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(c)->IsHardCapturedTo((::uObject*)__this))
    {
        __this->UpdateValue(::uPtr< ::app::Fuse::Controls::RangeControl*>(__this->Control)->WindowToLocal(::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(c)->WindowPoint()));
    }
}

void LinearSliderBehavior__OnPointerPressed(LinearSliderBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* c)
{
    if (__this->_down == -1)
    {
        if (::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(c)->TrySoftCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)LinearSliderBehavior__OnLostCapture, __this), NULL))
        {
            ::app::Fuse::Input::Focus__GiveTo(NULL, (::app::Fuse::Node*)__this->Control);
            ::uPtr< ::app::Fuse::Controls::RangeControl*>(__this->Control)->SetIsInteracting((::uObject*)__this, true);
            __this->_startCoord = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(c)->WindowPoint();
            __this->_down = c->PointIndex();
            __this->_initialValue = ::uPtr< ::app::Fuse::Controls::RangeControl*>(__this->Control)->Value();
        }
    }
}

void LinearSliderBehavior__OnPointerReleased(LinearSliderBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* c)
{
    if (__this->_down != ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(c)->PointIndex())
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(c)->IsHardCapturedTo((::uObject*)__this))
    {
        __this->UpdateValue(::uPtr< ::app::Fuse::Controls::RangeControl*>(__this->Control)->WindowToLocal(::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(c)->WindowPoint()));
        c->ReleaseHardCapture((::uObject*)__this);
    }

    if (::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(c)->IsSoftCapturedTo((::uObject*)__this))
    {
        __this->UpdateValue(::uPtr< ::app::Fuse::Controls::RangeControl*>(__this->Control)->WindowToLocal(::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(c)->WindowPoint()));
        c->ReleaseSoftCapture((::uObject*)__this);
    }

    ::uPtr< ::app::Fuse::Controls::RangeControl*>(__this->Control)->SetIsInteracting((::uObject*)__this, false);
    __this->_down = -1;
}

void LinearSliderBehavior__OnRooted(LinearSliderBehavior* __this, ::app::Fuse::Node* n)
{
    __this->Control = ::uAs< ::app::Fuse::Controls::RangeControl*>(n, ::app::Fuse::Controls::RangeControl__typeof());

    if (__this->Control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("SliderBehavior must be rooted in a RangeControl")));
    }

    ::app::Fuse::Input::Pointer__AddHandlers(NULL, n, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)LinearSliderBehavior__OnPointerPressed, __this), ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)LinearSliderBehavior__OnPointerMoved, __this), ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)LinearSliderBehavior__OnPointerReleased, __this), NULL, NULL, NULL);
}

void LinearSliderBehavior__OnUnrooted(LinearSliderBehavior* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Input::Pointer__RemoveHandlers(NULL, n, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)LinearSliderBehavior__OnPointerPressed, __this), ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)LinearSliderBehavior__OnPointerMoved, __this), ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)LinearSliderBehavior__OnPointerReleased, __this), NULL, NULL, NULL);
    __this->Control = NULL;
}

double LinearSliderBehavior__PositionToValue(LinearSliderBehavior* __this, ::app::Uno::Float2 pos)
{
    return (double)(pos.X / ::uPtr< ::app::Fuse::Controls::RangeControl*>(__this->Control)->ActualSize().X);
}

void LinearSliderBehavior__UpdateValue(LinearSliderBehavior* __this, ::app::Uno::Float2 pos)
{
    ::uPtr< ::app::Fuse::Controls::RangeControl*>(__this->Control)->RelativeValue(__this->PositionToValue(pos));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PathVisual__uType* PathVisual__typeof()
{
    static ::uStaticStrong<PathVisual__uType*> type;
    if (type != NULL) return type;

    type = (PathVisual__uType*)::uAllocClassType(sizeof(PathVisual__uType), "Fuse.Controls.Graphics.PathVisual", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_Path__typeof());
    type->__fp_AlignMatrix = (::app::Uno::Float4x4(*)(::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_Path*, ::app::Uno::Float4x4))PathVisual__AlignMatrix;
    type->__fp_get_LocalRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Node*))PathVisual__get_LocalRenderBounds;
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))PathVisual__GetMarginSize;
    type->__fp_OnArrangeMarginBox = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, ::app::Uno::Float2, int))PathVisual__OnArrangeMarginBox;
    type->__fp_UpdatePath = (void(*)(::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_Path*, ::app::Fuse::Drawing::PathGeometryRenderer*))PathVisual__UpdatePath;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(PathVisual__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_origin", NULL, offsetof(PathVisual, _origin), ::app::Uno::Float2__typeof()),
        ::uNewField("_postScale", NULL, offsetof(PathVisual, _postScale), ::app::Uno::Float2__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Path", PathVisual__get_Path, 0, false, ::app::Fuse::Controls::Path__typeof()),
        ::uNewFunction("GetNaturalContentSize", PathVisual__GetNaturalContentSize, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", PathVisual__New_1, 0, true, PathVisual__typeof()));

    ::uRegisterType(type);
    return type;
}

void PathVisual___ObjInit_5(PathVisual* __this)
{
    __this->_postScale = ::app::Uno::Float2__New_1(NULL, 1.0f);
    ::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_Path___ObjInit_4(__this);
}

::app::Uno::Float4x4 PathVisual__AlignMatrix(PathVisual* __this, ::app::Uno::Float4x4 b)
{
    ::app::Uno::Float4x4 t = ::app::Uno::Matrix__Translation_1(NULL, ::app::Uno::Float3__New_4(NULL, __this->_origin, 0.0f));
    ::app::Uno::Float4x4 r0 = ::app::Uno::Matrix__Mul_8(NULL, t, b);
    ::app::Uno::Float4x4 s = ::app::Uno::Matrix__Scaling_2(NULL, ::app::Uno::Float3__New_4(NULL, __this->_postScale, 1.0f));
    ::app::Uno::Float4x4 r1 = ::app::Uno::Matrix__Mul_8(NULL, s, r0);
    return r1;
}

::app::Uno::Rect PathVisual__get_LocalRenderBounds(PathVisual* __this)
{
    ::app::Uno::Float4x4 m = __this->AlignMatrix(::app::Uno::Float4x4__get_Identity(NULL));
    ::app::Uno::Rect b = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Bounds();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Vector__Transform_1(NULL, b.Minimum(), m);
    ::app::Uno::Float2 tl = ::app::Uno::Float2__New_2(NULL, ind_125.X, ind_125.Y);
    ::app::Uno::Float4 ind_126 = ::app::Uno::Vector__Transform_1(NULL, b.Maximum(), m);
    ::app::Uno::Float2 br = ::app::Uno::Float2__New_2(NULL, ind_126.X, ind_126.Y);
    return ::app::Uno::Rect__New_2(NULL, tl, ::app::Uno::Float2__op_Subtraction_2(NULL, br, tl));
}

::app::Fuse::Controls::Path* PathVisual__get_Path(PathVisual* __this)
{
    return ::uCast< ::app::Fuse::Controls::Path*>(__this->Shape(), ::app::Fuse::Controls::Path__typeof());
}

::app::Uno::Float2 PathVisual__GetMarginSize(PathVisual* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Uno::Float2 natural = __this->GetNaturalContentSize();
    ::app::Uno::Float2 r = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Controls::Path*>(__this->Path())->Sizing())->ExpandFillSize(natural, fillSize, fillSet);
    return r;
}

::app::Uno::Float2 PathVisual__GetNaturalContentSize(PathVisual* __this)
{
    ::app::Uno::Float2 hi = ::app::Uno::Float2__New_1(NULL, 0.0f);
    ::app::Uno::Float2 lo = ::app::Uno::Float2__New_1(NULL, 0.0f);

    switch (::uPtr< ::app::Fuse::Controls::Path*>(__this->Path())->FitMode())
    {
        case 0:
        {
            lo = ::app::Uno::Float2__New_1(NULL, 0.0f);
            hi = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Maximum();
            break;
        }
        case 1:
        {
            hi = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Maximum();
            ::app::Uno::Float4 s = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->StrokePadding();
            hi.X = hi.X + s.Item(2);
            hi.Y = hi.Y + s.Item(3);
            lo.X = lo.X - s.Item(0);
            lo.Y = lo.Y - s.Item(1);
            break;
        }
        case 2:
        {
            lo = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Minimum();
            hi = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Maximum();
            break;
        }
        case 3:
        {
            {
                lo = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Minimum();
                hi = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Maximum();
                ::app::Uno::Float4 s = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->StrokePadding();
                lo.X = lo.X - s.Item(0);
                lo.Y = lo.Y - s.Item(1);
                hi.X = hi.X + s.Item(2);
                hi.Y = hi.Y + s.Item(3);
                break;
            }
        }
    }

    ::app::Uno::Float2 natural = ::app::Uno::Float2__op_Subtraction_2(NULL, hi, lo);
    return natural;
}

PathVisual* PathVisual__New_1(::uStatic* __this)
{
    PathVisual* inst = (PathVisual*)::uAllocObject(sizeof(PathVisual), PathVisual__typeof());
    inst->_ObjInit_5();
    return inst;
}

::app::Uno::Float2 PathVisual__OnArrangeMarginBox(PathVisual* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float2 size = ::app::Fuse::Controls::Graphics::Visual__OnArrangeMarginBox(__this, position, fillSize, fillSet);
    ::app::Uno::Float2 contentDesiredSize = __this->GetNaturalContentSize();
    ::app::Uno::Float2 scale = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Controls::Path*>(__this->Path())->Sizing())->CalcScale(size, contentDesiredSize);
    __this->_origin = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Controls::Path*>(__this->Path())->Sizing())->CalcOrigin(size, ::app::Uno::Float2__op_Multiply_2(NULL, contentDesiredSize, scale));

    if (::uPtr< ::app::Fuse::Controls::Path*>(__this->Path())->ScaleMode() == 0)
    {
        ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->PreScale(scale);
    }
    else
    {
        __this->_postScale = scale;
    }

    switch (::uPtr< ::app::Fuse::Controls::Path*>(__this->Path())->FitMode())
    {
        case 0:
        {
            break;
        }
        case 1:
        {
            __this->_origin = ::app::Uno::Float2__op_Addition_2(NULL, __this->_origin, (ind_123 = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->StrokePadding(), ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y)));
            break;
        }
        case 2:
        {
            __this->_origin = ::app::Uno::Float2__op_Subtraction_2(NULL, __this->_origin, ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Minimum());
            break;
        }
        case 3:
        {
            __this->_origin = ::app::Uno::Float2__op_Subtraction_2(NULL, __this->_origin, ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Minimum());
            __this->_origin = ::app::Uno::Float2__op_Addition_2(NULL, __this->_origin, (ind_124 = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->StrokePadding(), ::app::Uno::Float2__New_2(NULL, ind_124.X, ind_124.Y)));
            break;
        }
    }

    return size;
}

void PathVisual__UpdatePath(PathVisual* __this, ::app::Fuse::Drawing::PathGeometryRenderer* renderer)
{
    if (__this->Path() == NULL)
    {
        return;
    }

    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(renderer)->Geometry(::uPtr< ::app::Fuse::Controls::Path*>(__this->Path())->Geometry());
    renderer->FillRule((::uPtr< ::app::Fuse::Controls::Path*>(__this->Path())->FillRule() == 1) ? ::uNewDelegateNonVirt(::app::Uno::Predicate__int__typeof(), (const void*)::app::Fuse::Drawing::WindingRules__Odd) : ::uNewDelegateNonVirt(::app::Uno::Predicate__int__typeof(), (const void*)::app::Fuse::Drawing::WindingRules__NonZero));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RectangleVisual__uType* RectangleVisual__typeof()
{
    static ::uStaticStrong<RectangleVisual__uType*> type;
    if (type != NULL) return type;

    type = (RectangleVisual__uType*)::uAllocClassType(sizeof(RectangleVisual__uType), "Fuse.Controls.Graphics.RectangleVisual", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Rectangle__typeof());
    type->__fp_DrawFill = (void(*)(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Rectangle*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Brush*))RectangleVisual__DrawFill;
    type->__fp_DrawStroke = (void(*)(::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Rectangle*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Stroke*))RectangleVisual__DrawStroke;
    type->__fp_OnHitTest = (void(*)(::app::Fuse::Node*, ::app::Fuse::HitTestContext*))RectangleVisual__OnHitTest;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(RectangleVisual__uType, __interface_0));

    type->SetFunctions(2,
        ::uNewFunction("get_Rectangle", RectangleVisual__get_Rectangle, 0, false, ::app::Fuse::Controls::Rectangle__typeof()),
        ::uNewFunction(".ctor", RectangleVisual__New_1, 0, true, RectangleVisual__typeof()));

    ::uRegisterType(type);
    return type;
}

void RectangleVisual___ObjInit_4(RectangleVisual* __this)
{
    ::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Rectangle___ObjInit_3(__this);
}

void RectangleVisual__DrawFill(RectangleVisual* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Brush* fill)
{
    ::uPtr< ::app::Fuse::Drawing::Primitives::Rectangle*>(::app::Fuse::Drawing::Primitives::Rectangle__Singleton)->Fill(dc, (::app::Fuse::Node*)__this->Rectangle(), __this->ActualSize(), ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->Rectangle())->CornerRadius(), fill, ::app::Uno::Float2__New_1(NULL, 0.0f), ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->Rectangle())->Smoothness());
}

void RectangleVisual__DrawStroke(RectangleVisual* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Stroke* stroke)
{
    ::uPtr< ::app::Fuse::Drawing::Primitives::Rectangle*>(::app::Fuse::Drawing::Primitives::Rectangle__Singleton)->Stroke(dc, (::app::Fuse::Node*)__this->Rectangle(), __this->ActualSize(), ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->Rectangle())->CornerRadius(), stroke, ::app::Uno::Float2__New_1(NULL, 0.0f), ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->Rectangle())->Smoothness());
}

::app::Fuse::Controls::Rectangle* RectangleVisual__get_Rectangle(RectangleVisual* __this)
{
    return ::uCast< ::app::Fuse::Controls::Rectangle*>(__this->Shape(), ::app::Fuse::Controls::Rectangle__typeof());
}

RectangleVisual* RectangleVisual__New_1(::uStatic* __this)
{
    RectangleVisual* inst = (RectangleVisual*)::uAllocObject(sizeof(RectangleVisual), RectangleVisual__typeof());
    inst->_ObjInit_4();
    return inst;
}

void RectangleVisual__OnHitTest(RectangleVisual* __this, ::app::Fuse::HitTestContext* htc)
{
    ::app::Uno::Float2 lp = ::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint();

    if (!::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->Rectangle())->HasFills() || !__this->IsPointInside(lp))
    {
        return;
    }

    ::app::Uno::Float4 cr = ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->Rectangle())->CornerRadius();

    if ((lp.X < cr.Item(0)) && (lp.Y < cr.Item(0)))
    {
        if (::app::Uno::Vector__Distance(NULL, lp, ::app::Uno::Float2__New_1(NULL, cr.Item(0))) > cr.Item(0))
        {
            return;
        }
    }
    else if ((lp.X > (__this->ActualSize().X - cr.Item(1))) && (lp.Y < cr.Item(1)))
    {
        if (::app::Uno::Vector__Distance(NULL, lp, ::app::Uno::Float2__New_2(NULL, __this->ActualSize().X - cr.Item(1), cr.Item(1))) > cr.Item(1))
        {
            return;
        }
    }
    else if ((lp.X < cr.Item(3)) && (lp.Y > (__this->ActualSize().Y - cr.Item(3))))
    {
        if (::app::Uno::Vector__Distance(NULL, lp, ::app::Uno::Float2__New_2(NULL, cr.Item(3), __this->ActualSize().Y - cr.Item(3))) > cr.Item(3))
        {
            return;
        }
    }
    else if ((lp.X > (__this->ActualSize().X - cr.Item(2))) && (lp.Y > (__this->ActualSize().Y - cr.Item(2))))
    {
        if (::app::Uno::Vector__Distance(NULL, lp, ::app::Uno::Float2__New_2(NULL, __this->ActualSize().X - cr.Item(2), __this->ActualSize().Y - cr.Item(2))) > cr.Item(2))
        {
            return;
        }
    }

    htc->Hit((::app::Fuse::Node*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RegularPolygonVisual__uType* RegularPolygonVisual__typeof()
{
    static ::uStaticStrong<RegularPolygonVisual__uType*> type;
    if (type != NULL) return type;

    type = (RegularPolygonVisual__uType*)::uAllocClassType(sizeof(RegularPolygonVisual__uType), "Fuse.Controls.Graphics.RegularPolygonVisual", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_RegularPolygon__typeof());
    type->__fp_UpdatePath = (void(*)(::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_RegularPolygon*, ::app::Fuse::Drawing::PathGeometryRenderer*))RegularPolygonVisual__UpdatePath;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(RegularPolygonVisual__uType, __interface_0));

    type->SetFields(2,
        ::uNewField("_cachedRadius", NULL, offsetof(RegularPolygonVisual, _cachedRadius), ::app::Uno::Float__typeof()),
        ::uNewField("_cachedSides", NULL, offsetof(RegularPolygonVisual, _cachedSides), ::app::Uno::Int__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_Offset", RegularPolygonVisual__get_Offset, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Radius", RegularPolygonVisual__get_Radius, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_RegularPolygon", RegularPolygonVisual__get_RegularPolygon, 0, false, ::app::Fuse::Controls::RegularPolygon__typeof()),
        ::uNewFunction(".ctor", RegularPolygonVisual__New_1, 0, true, RegularPolygonVisual__typeof()));

    ::uRegisterType(type);
    return type;
}

void RegularPolygonVisual___ObjInit_5(RegularPolygonVisual* __this)
{
    ::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_RegularPolygon___ObjInit_4(__this);
}

::app::Uno::Float2 RegularPolygonVisual__get_Offset(RegularPolygonVisual* __this)
{
    return (__this->ActualSize().X > __this->ActualSize().Y) ? ::app::Uno::Float2__New_2(NULL, (__this->ActualSize().X * 0.5f) - (__this->ActualSize().Y * 0.5f), 0.0f) : ::app::Uno::Float2__New_2(NULL, 0.0f, (__this->ActualSize().Y * 0.5f) - (__this->ActualSize().X * 0.5f));
}

float RegularPolygonVisual__get_Radius(RegularPolygonVisual* __this)
{
    return ::app::Uno::Math__Min_1(NULL, __this->ActualSize().X, __this->ActualSize().Y) * 0.5f;
}

::app::Fuse::Controls::RegularPolygon* RegularPolygonVisual__get_RegularPolygon(RegularPolygonVisual* __this)
{
    return ::uCast< ::app::Fuse::Controls::RegularPolygon*>(__this->Shape(), ::app::Fuse::Controls::RegularPolygon__typeof());
}

RegularPolygonVisual* RegularPolygonVisual__New_1(::uStatic* __this)
{
    RegularPolygonVisual* inst = (RegularPolygonVisual*)::uAllocObject(sizeof(RegularPolygonVisual), RegularPolygonVisual__typeof());
    inst->_ObjInit_5();
    return inst;
}

void RegularPolygonVisual__UpdatePath(RegularPolygonVisual* __this, ::app::Fuse::Drawing::PathGeometryRenderer* renderer)
{
    if ((__this->RegularPolygon() == NULL) || (::uPtr< ::app::Fuse::Controls::RegularPolygon*>(__this->RegularPolygon())->Sides() < 3))
    {
        return;
    }

    if ((__this->_cachedSides == ::uPtr< ::app::Fuse::Controls::RegularPolygon*>(__this->RegularPolygon())->Sides()) && (__this->_cachedRadius == __this->Radius()))
    {
        return;
    }

    __this->_cachedSides = ::uPtr< ::app::Fuse::Controls::RegularPolygon*>(__this->RegularPolygon())->Sides();
    __this->_cachedRadius = __this->Radius();
    __this->InvalidateRenderBounds();
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(renderer)->Geometry(::app::Fuse::Drawing::PathGeometryExtensions__RegularPolygon(NULL, ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::app::Fuse::Drawing::PathGeometry__New_1(NULL))->MoveTo_1(::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__New_1(NULL, __this->Radius()), __this->Offset())), ::uPtr< ::app::Fuse::Controls::RegularPolygon*>(__this->RegularPolygon())->Sides(), __this->Radius()));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StarVisual__uType* StarVisual__typeof()
{
    static ::uStaticStrong<StarVisual__uType*> type;
    if (type != NULL) return type;

    type = (StarVisual__uType*)::uAllocClassType(sizeof(StarVisual__uType), "Fuse.Controls.Graphics.StarVisual", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_Star__typeof());
    type->__fp_UpdatePath = (void(*)(::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_Star*, ::app::Fuse::Drawing::PathGeometryRenderer*))StarVisual__UpdatePath;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(StarVisual__uType, __interface_0));

    type->SetFields(5,
        ::uNewField("_cachedDegrees", NULL, offsetof(StarVisual, _cachedDegrees), ::app::Uno::Float__typeof()),
        ::uNewField("_cachedPoints", NULL, offsetof(StarVisual, _cachedPoints), ::app::Uno::Int__typeof()),
        ::uNewField("_cachedRadius", NULL, offsetof(StarVisual, _cachedRadius), ::app::Uno::Float__typeof()),
        ::uNewField("_cachedRoundRatio", NULL, offsetof(StarVisual, _cachedRoundRatio), ::app::Uno::Float__typeof()),
        ::uNewField("_cachedSpokeRadius", NULL, offsetof(StarVisual, _cachedSpokeRadius), ::app::Uno::Float__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_Offset", StarVisual__get_Offset, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Radius", StarVisual__get_Radius, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_SpokeRadius", StarVisual__get_SpokeRadius, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Star", StarVisual__get_Star, 0, false, ::app::Fuse::Controls::Star__typeof()),
        ::uNewFunction(".ctor", StarVisual__New_1, 0, true, StarVisual__typeof()));

    ::uRegisterType(type);
    return type;
}

void StarVisual___ObjInit_5(StarVisual* __this)
{
    ::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_Star___ObjInit_4(__this);
}

::app::Uno::Float2 StarVisual__get_Offset(StarVisual* __this)
{
    return (__this->ActualSize().X > __this->ActualSize().Y) ? ::app::Uno::Float2__New_2(NULL, (__this->ActualSize().X * 0.5f) - (__this->ActualSize().Y * 0.5f), 0.0f) : ::app::Uno::Float2__New_2(NULL, 0.0f, (__this->ActualSize().Y * 0.5f) - (__this->ActualSize().X * 0.5f));
}

float StarVisual__get_Radius(StarVisual* __this)
{
    return ::app::Uno::Math__Min_1(NULL, __this->ActualSize().X, __this->ActualSize().Y) * 0.5f;
}

float StarVisual__get_SpokeRadius(StarVisual* __this)
{
    return __this->Radius() * ::uPtr< ::app::Fuse::Controls::Star*>(__this->Star())->Ratio();
}

::app::Fuse::Controls::Star* StarVisual__get_Star(StarVisual* __this)
{
    return ::uCast< ::app::Fuse::Controls::Star*>(__this->Shape(), ::app::Fuse::Controls::Star__typeof());
}

StarVisual* StarVisual__New_1(::uStatic* __this)
{
    StarVisual* inst = (StarVisual*)::uAllocObject(sizeof(StarVisual), StarVisual__typeof());
    inst->_ObjInit_5();
    return inst;
}

void StarVisual__UpdatePath(StarVisual* __this, ::app::Fuse::Drawing::PathGeometryRenderer* renderer)
{
    if ((__this->Star() == NULL) || (::uPtr< ::app::Fuse::Controls::Star*>(__this->Star())->Points() < 3))
    {
        return;
    }

    if (((((__this->_cachedPoints == ::uPtr< ::app::Fuse::Controls::Star*>(__this->Star())->Points()) && (__this->_cachedRadius == __this->Radius())) && (__this->_cachedSpokeRadius == __this->SpokeRadius())) && (__this->_cachedDegrees == ::uPtr< ::app::Fuse::Controls::Star*>(__this->Star())->RotationDegrees())) && (__this->_cachedRoundRatio == ::uPtr< ::app::Fuse::Controls::Star*>(__this->Star())->RoundRatio()))
    {
        return;
    }

    __this->_cachedPoints = ::uPtr< ::app::Fuse::Controls::Star*>(__this->Star())->Points();
    __this->_cachedRadius = __this->Radius();
    __this->_cachedSpokeRadius = __this->SpokeRadius();
    __this->_cachedDegrees = ::uPtr< ::app::Fuse::Controls::Star*>(__this->Star())->RotationDegrees();
    __this->_cachedRoundRatio = ::uPtr< ::app::Fuse::Controls::Star*>(__this->Star())->RoundRatio();
    __this->InvalidateRenderBounds();
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(renderer)->Geometry(::app::Fuse::Drawing::PathGeometryExtensions__Star(NULL, ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::app::Fuse::Drawing::PathGeometry__New_1(NULL))->MoveTo_1(::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__New_1(NULL, __this->Radius()), __this->Offset())), ::uPtr< ::app::Fuse::Controls::Star*>(__this->Star())->Points(), __this->Radius(), __this->SpokeRadius(), ::uPtr< ::app::Fuse::Controls::Star*>(__this->Star())->RoundRatio(), ::uPtr< ::app::Fuse::Controls::Star*>(__this->Star())->RotationRadians()));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextVisual__uType* TextVisual__typeof()
{
    static ::uStaticStrong<TextVisual__uType*> type;
    if (type != NULL) return type;

    type = (TextVisual__uType*)::uAllocClassType(sizeof(TextVisual__uType), "Fuse.Controls.Graphics.TextVisual", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_TextControl__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_TextControl*))TextVisual__Attach;
    type->__fp_Detach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_TextControl*))TextVisual__Detach;
    type->__fp_OnHitTest = (void(*)(::app::Fuse::Node*, ::app::Fuse::HitTestContext*))TextVisual__OnHitTest;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextVisual__uType, __interface_0));

    type->SetFunctions(3,
        ::uNewFunctionVoid("OnTextLayoutPropertyChanged", TextVisual__OnTextLayoutPropertyChanged, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnTextRenderPropertyChanged", TextVisual__OnTextRenderPropertyChanged, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnValueChanged", TextVisual__OnValueChanged, 0, false, ::uObject__typeof(), ::app::Uno::UX::ValueChangedArgs__string__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextVisual___ObjInit_3(TextVisual* __this)
{
    ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_TextControl___ObjInit_2(__this);
}

void TextVisual__Attach(TextVisual* __this)
{
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->add_TextLayoutPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextVisual__OnTextLayoutPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->add_TextRenderPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextVisual__OnTextRenderPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)TextVisual__OnValueChanged, __this));
}

void TextVisual__Detach(TextVisual* __this)
{
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->remove_TextLayoutPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextVisual__OnTextLayoutPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->remove_TextRenderPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextVisual__OnTextRenderPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)TextVisual__OnValueChanged, __this));
}

void TextVisual__OnHitTest(TextVisual* __this, ::app::Fuse::HitTestContext* htc)
{
    if (__this->IsPointInside(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint()))
    {
        ::uPtr< ::app::Fuse::HitTestContext*>(htc)->Hit((::app::Fuse::Node*)__this);
    }

    ::app::Fuse::Node__OnHitTest(__this, htc);
}

void TextVisual__OnTextLayoutPropertyChanged(TextVisual* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->InvalidateLayout(2);
}

void TextVisual__OnTextRenderPropertyChanged(TextVisual* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->InvalidateVisual();
}

void TextVisual__OnValueChanged(TextVisual* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args)
{
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->InvalidateLayout(2);
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->InvalidateVisual();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Visual__uType* Visual__typeof()
{
    static ::uStaticStrong<Visual__uType*> type;
    if (type != NULL) return type;

    type = (Visual__uType*)::uAllocClassType(sizeof(Visual__uType), "Fuse.Controls.Graphics.Visual", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Node__typeof());
    type->__fp_Draw = (void(*)(::app::Fuse::Node*, ::app::Fuse::DrawContext*))Visual__Draw;
    type->__fp_get_LocalDrawCount = (::app::Fuse::NodeDrawCount(*)(::app::Fuse::Node*))Visual__get_LocalDrawCount;
    type->__fp_get_LocalRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Node*))Visual__get_LocalRenderBounds;
    type->__fp_OnArrangeMarginBox = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, ::app::Uno::Float2, int))Visual__OnArrangeMarginBox;
    type->__fp_PrependImplicitTransform = (void(*)(::app::Fuse::Node*, ::app::Fuse::FastMatrix*))Visual__PrependImplicitTransform;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Visual__uType, __interface_0));

    type->SetFields(1,
        ::uNewField("_position", NULL, offsetof(Visual, _position), ::app::Uno::Float2__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_ActualSize", Visual__get_ActualSize, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("IsPointInside", Visual__IsPointInside, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("OnDraw", type->__fp_OnDraw, offsetof(Visual__uType, __fp_OnDraw), false, ::app::Fuse::DrawContext__typeof()),
        ::uNewFunctionVoid("set_ActualSize", Visual__set_ActualSize, 0, false, ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void Visual___ObjInit_1(Visual* __this)
{
    ::app::Fuse::Node___ObjInit(__this);
}

void Visual__Draw(Visual* __this, ::app::Fuse::DrawContext* dc)
{
    double t = double();
    __this->OnDraw(dc);
    __this->ValidateVisual();
}

::app::Uno::Float2 Visual__get_ActualSize(Visual* __this)
{
    return __this->_ActualSize;
}

::app::Fuse::NodeDrawCount Visual__get_LocalDrawCount(Visual* __this)
{
    ::app::Fuse::NodeDrawCount dc = ::uDefault< ::app::Fuse::NodeDrawCount>();
    dc.Draw = dc.Draw + 1;
    dc.Pixels = dc.Pixels + (::uLong)((__this->ActualSize().X * __this->ActualSize().Y) * __this->PointDensity());
    return dc;
}

::app::Uno::Rect Visual__get_LocalRenderBounds(Visual* __this)
{
    return ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
}

bool Visual__IsPointInside(Visual* __this, ::app::Uno::Float2 localPoint)
{
    return !((((localPoint.X < 0.0f) || (localPoint.Y < 0.0f)) || (localPoint.X > __this->ActualSize().X)) || (localPoint.Y > __this->ActualSize().Y));
}

::app::Uno::Float2 Visual__OnArrangeMarginBox(Visual* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet)
{
    ::app::Uno::Float2 sz = availableSize;

    if (!((availSet & 3) == 3))
    {
        ::app::Uno::Float2 rsz = __this->GetMarginSize(availableSize, availSet);

        if (!((availSet & 1) == 1))
        {
            sz.X = rsz.X;
        }

        if (!((availSet & 2) == 2))
        {
            sz.Y = rsz.Y;
        }
    }

    __this->_position = position;
    __this->ActualSize(sz);
    __this->InvalidateLocalTransform();
    return __this->ActualSize();
}

void Visual__PrependImplicitTransform(Visual* __this, ::app::Fuse::FastMatrix* m)
{
    ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependTranslation_1(::app::Uno::Float3__New_4(NULL, __this->_position, 0.0f));
}

void Visual__set_ActualSize(Visual* __this, ::app::Uno::Float2 value)
{
    __this->_ActualSize = value;
}

}}}}
