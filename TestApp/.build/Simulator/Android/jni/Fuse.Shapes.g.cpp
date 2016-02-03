// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Antialiasing.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.PathGeometry.h>
#include <Fuse.Drawing.PathGeometryExtensions.h>
#include <Fuse.Drawing.PathGeometryRenderer.h>
#include <Fuse.Drawing.Primitives.Circle.h>
#include <Fuse.Drawing.Primitives.Rectangle.h>
#include <Fuse.Drawing.Primitives.Wedge.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Drawing.WindingRules.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.NodeBounds.h>
#include <Fuse.Shapes.Circle.h>
#include <Fuse.Shapes.Ellipse.h>
#include <Fuse.Shapes.FillRule.h>
#include <Fuse.Shapes.FitMode.h>
#include <Fuse.Shapes.GeometryCache.h>
#include <Fuse.Shapes.GeometryCacheEntry.h>
#include <Fuse.Shapes.Path.h>
#include <Fuse.Shapes.PathScaleMode.h>
#include <Fuse.Shapes.PathShape.h>
#include <Fuse.Shapes.Rectangle.h>
#include <Fuse.Shapes.RegularPolygon.h>
#include <Fuse.Shapes.Shape.h>
#include <Fuse.Shapes.Star.h>
#include <Fuse.SizeFlags.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.Vector.h>
static uType* TYPES[47];

namespace g{
namespace Fuse{
namespace Shapes{

// C:\ProgramData\Uno\Packages\Fuse.Shapes\0.18.8\$.uno(17)
// --------------------------------------------------------

// public sealed class Circle :17
// {
::g::Fuse::Shapes::Shape_type* Circle_typeof()
{
    static uSStrong< ::g::Fuse::Shapes::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 96;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(::g::Fuse::Shapes::Shape_type);
    type = (::g::Fuse::Shapes::Shape_type*)uClassType::New("Fuse.Shapes.Circle", options);
    type->SetBase(::g::Fuse::Shapes::Shape_typeof());
    type->fp_ctor_ = (void*)Circle__New1_fn;
    type->fp_DrawFill = (void(*)(::g::Fuse::Shapes::Shape*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Brush*))Circle__DrawFill_fn;
    type->fp_DrawStroke = (void(*)(::g::Fuse::Shapes::Shape*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Stroke*))Circle__DrawStroke_fn;
    type->fp_OnHitTestLocalVisual = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::HitTestContext*))Circle__OnHitTestLocalVisual_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[0] = ::g::Fuse::Drawing::Primitives::Wedge_typeof();
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[2] = ::g::Fuse::Shapes::Shape_typeof();
    ::TYPES[3] = ::g::Fuse::Drawing::Primitives::Circle_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[6] = ::g::Uno::Float2_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Shapes::Shape_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Shapes::Shape_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Shapes::Shape_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Shapes::Shape_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Shapes::Shape_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Shapes::Shape_type, interface5));
    type->SetFields(91,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Shapes::Circle, _endAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Shapes::Circle, _hasAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Shapes::Circle, _hasLengthAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Shapes::Circle, _lengthAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Shapes::Circle, _startAngle), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_EndAngle", NULL, (void*)Circle__get_EndAngle_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_EndAngle", NULL, (void*)Circle__set_EndAngle_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_EndAngleDegrees", NULL, (void*)Circle__get_EndAngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_EndAngleDegrees", NULL, (void*)Circle__set_EndAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LengthAngle", NULL, (void*)Circle__get_LengthAngle_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_LengthAngle", NULL, (void*)Circle__set_LengthAngle_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LengthAngleDegrees", NULL, (void*)Circle__get_LengthAngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_LengthAngleDegrees", NULL, (void*)Circle__set_LengthAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Circle__New1_fn, 0, true, Circle_typeof(), 0),
        new uFunction("get_StartAngle", NULL, (void*)Circle__get_StartAngle_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_StartAngle", NULL, (void*)Circle__set_StartAngle_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_StartAngleDegrees", NULL, (void*)Circle__get_StartAngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_StartAngleDegrees", NULL, (void*)Circle__set_StartAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public generated Circle() :17
void Circle__ctor_3_fn(Circle* __this)
{
    __this->ctor_3();
}

// private static bool AngleInRange(float angle, float start, float end) :152
void Circle__AngleInRange_fn(float* angle, float* start, float* end, bool* __retval)
{
    *__retval = Circle::AngleInRange(*angle, *start, *end);
}

// private float2 get_Center() :21
void Circle__get_Center_fn(Circle* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Center();
}

// protected override sealed void DrawFill(Fuse.DrawContext dc, Fuse.Drawing.Brush fill) :112
void Circle__DrawFill_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill)
{
    float startAngle = __this->_startAngle;
    float endAngle = __this->EffectiveEndAngle();

    if (__this->UseAngle())
        uPtr(::g::Fuse::Drawing::Primitives::Wedge::Singleton())->Fill(dc, __this, __this->Radius(), fill, __this->Center(), startAngle, endAngle, __this->Smoothness());
    else
        uPtr(::g::Fuse::Drawing::Primitives::Circle::Singleton())->Fill(dc, __this, __this->Radius(), fill, __this->Center(), __this->Smoothness());
}

// protected override sealed void DrawStroke(Fuse.DrawContext dc, Fuse.Drawing.Stroke stroke) :124
void Circle__DrawStroke_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke)
{
    float startAngle = __this->_startAngle;
    float endAngle = __this->EffectiveEndAngle();

    if (__this->UseAngle())
        uPtr(::g::Fuse::Drawing::Primitives::Wedge::Singleton())->Stroke(dc, __this, __this->Radius(), stroke, __this->Center(), startAngle, endAngle, __this->Smoothness());
    else
        uPtr(::g::Fuse::Drawing::Primitives::Circle::Singleton())->Stroke(dc, __this, __this->Radius(), stroke, __this->Center(), __this->Smoothness());
}

// private float get_EffectiveEndAngle() :106
void Circle__get_EffectiveEndAngle_fn(Circle* __this, float* __retval)
{
    *__retval = __this->EffectiveEndAngle();
}

// public float get_EndAngle() :49
void Circle__get_EndAngle_fn(Circle* __this, float* __retval)
{
    *__retval = __this->EndAngle();
}

// public void set_EndAngle(float value) :50
void Circle__set_EndAngle_fn(Circle* __this, float* value)
{
    __this->EndAngle(*value);
}

// public float get_EndAngleDegrees() :94
void Circle__get_EndAngleDegrees_fn(Circle* __this, float* __retval)
{
    *__retval = __this->EndAngleDegrees();
}

// public void set_EndAngleDegrees(float value) :95
void Circle__set_EndAngleDegrees_fn(Circle* __this, float* value)
{
    __this->EndAngleDegrees(*value);
}

// public float get_LengthAngle() :78
void Circle__get_LengthAngle_fn(Circle* __this, float* __retval)
{
    *__retval = __this->LengthAngle();
}

// public void set_LengthAngle(float value) :79
void Circle__set_LengthAngle_fn(Circle* __this, float* value)
{
    __this->LengthAngle(*value);
}

// public float get_LengthAngleDegrees() :100
void Circle__get_LengthAngleDegrees_fn(Circle* __this, float* __retval)
{
    *__retval = __this->LengthAngleDegrees();
}

// public void set_LengthAngleDegrees(float value) :101
void Circle__set_LengthAngleDegrees_fn(Circle* __this, float* value)
{
    __this->LengthAngleDegrees(*value);
}

// public generated Circle New() :17
void Circle__New1_fn(Circle** __retval)
{
    *__retval = Circle::New1();
}

// protected override sealed void OnHitTestLocalVisual(Fuse.HitTestContext htc) :136
void Circle__OnHitTestLocalVisual_fn(Circle* __this, ::g::Fuse::HitTestContext* htc)
{
    if (!__this->HasFills() || (::g::Uno::Vector::Distance(uPtr(htc)->LocalPoint(), __this->Center()) > __this->Radius()))
        return;

    if (__this->UseAngle())
    {
        ::g::Uno::Float2 off = ::g::Uno::Float2__op_Subtraction2(uPtr(htc)->LocalPoint(), __this->Center());
        float localAngle = ::g::Uno::Math::Atan22(off.Y, off.X) + 1.57079637f;

        if (!Circle::AngleInRange(localAngle, __this->StartAngle(), __this->EffectiveEndAngle()))
            return;
    }

    uPtr(htc)->Hit(__this);
}

// private float get_Radius() :30
void Circle__get_Radius_fn(Circle* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// public float get_StartAngle() :38
void Circle__get_StartAngle_fn(Circle* __this, float* __retval)
{
    *__retval = __this->StartAngle();
}

// public void set_StartAngle(float value) :39
void Circle__set_StartAngle_fn(Circle* __this, float* value)
{
    __this->StartAngle(*value);
}

// public float get_StartAngleDegrees() :89
void Circle__get_StartAngleDegrees_fn(Circle* __this, float* __retval)
{
    *__retval = __this->StartAngleDegrees();
}

// public void set_StartAngleDegrees(float value) :90
void Circle__set_StartAngleDegrees_fn(Circle* __this, float* value)
{
    __this->StartAngleDegrees(*value);
}

// private bool get_UseAngle() :59
void Circle__get_UseAngle_fn(Circle* __this, bool* __retval)
{
    *__retval = __this->UseAngle();
}

// public generated Circle() [instance] :17
void Circle::ctor_3()
{
    ctor_2();
}

// private float2 get_Center() [instance] :21
::g::Uno::Float2 Circle::Center()
{
    return ::g::Uno::Float2__op_Division1(ActualSize(), 2.0f);
}

// private float get_EffectiveEndAngle() [instance] :106
float Circle::EffectiveEndAngle()
{
    return _hasLengthAngle ? _startAngle + _lengthAngle : _endAngle;
}

// public float get_EndAngle() [instance] :49
float Circle::EndAngle()
{
    return _endAngle;
}

// public void set_EndAngle(float value) [instance] :50
void Circle::EndAngle(float value)
{
    _endAngle = value;
    InvalidateVisual();
}

// public float get_EndAngleDegrees() [instance] :94
float Circle::EndAngleDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(_endAngle);
}

// public void set_EndAngleDegrees(float value) [instance] :95
void Circle::EndAngleDegrees(float value)
{
    EndAngle(::g::Uno::Math::DegreesToRadians1(value));
}

// public float get_LengthAngle() [instance] :78
float Circle::LengthAngle()
{
    return _lengthAngle;
}

// public void set_LengthAngle(float value) [instance] :79
void Circle::LengthAngle(float value)
{
    _lengthAngle = value;
    _hasLengthAngle = true;
    InvalidateVisual();
}

// public float get_LengthAngleDegrees() [instance] :100
float Circle::LengthAngleDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(_lengthAngle);
}

// public void set_LengthAngleDegrees(float value) [instance] :101
void Circle::LengthAngleDegrees(float value)
{
    LengthAngle(::g::Uno::Math::DegreesToRadians1(value));
}

// private float get_Radius() [instance] :30
float Circle::Radius()
{
    return ::g::Uno::Math::Min1(ActualSize().X, ActualSize().Y) * 0.5f;
}

// public float get_StartAngle() [instance] :38
float Circle::StartAngle()
{
    return _startAngle;
}

// public void set_StartAngle(float value) [instance] :39
void Circle::StartAngle(float value)
{
    _startAngle = value;
    _hasAngle = true;
    InvalidateVisual();
}

// public float get_StartAngleDegrees() [instance] :89
float Circle::StartAngleDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(_startAngle);
}

// public void set_StartAngleDegrees(float value) [instance] :90
void Circle::StartAngleDegrees(float value)
{
    StartAngle(::g::Uno::Math::DegreesToRadians1(value));
}

// private bool get_UseAngle() [instance] :59
bool Circle::UseAngle()
{
    if (!_hasAngle)
        return false;

    if (_hasLengthAngle && (_lengthAngle >= 6.28318548f))
        return false;

    return true;
}

// private static bool AngleInRange(float angle, float start, float end) [static] :152
bool Circle::AngleInRange(float angle, float start, float end)
{
    angle = ::g::Uno::Math::Mod1(angle, 6.28318548f);
    float pStartAngle = ::g::Uno::Math::Mod1(start, 6.28318548f);
    float pEndAngle = ::g::Uno::Math::Mod1(end, 6.28318548f);

    if (pStartAngle > pEndAngle)
        return (angle > pStartAngle) || (angle < pEndAngle);
    else
        return (angle > pStartAngle) && (angle < pEndAngle);
}

// public generated Circle New() [static] :17
Circle* Circle::New1()
{
    Circle* obj1 = (Circle*)uNew(Circle_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Shapes\0.18.8\$.uno(182)
// ---------------------------------------------------------

// public sealed class Ellipse :182
// {
::g::Fuse::Shapes::PathShape_type* Ellipse_typeof()
{
    static uSStrong< ::g::Fuse::Shapes::PathShape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 88;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Ellipse);
    options.TypeSize = sizeof(::g::Fuse::Shapes::PathShape_type);
    type = (::g::Fuse::Shapes::PathShape_type*)uClassType::New("Fuse.Shapes.Ellipse", options);
    type->SetBase(::g::Fuse::Shapes::PathShape_typeof());
    type->fp_ctor_ = (void*)Ellipse__New1_fn;
    type->fp_UpdatePath = (void(*)(::g::Fuse::Shapes::PathShape*))Ellipse__UpdatePath_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[8] = ::g::Fuse::Drawing::PathGeometryRenderer_typeof();
    ::TYPES[9] = ::g::Fuse::Shapes::PathShape_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface5));
    type->SetFields(87,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Shapes::Ellipse, _cachedRadius), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Ellipse__New1_fn, 0, true, Ellipse_typeof(), 0));
    return type;
}

// public generated Ellipse() :182
void Ellipse__ctor_3_fn(Ellipse* __this)
{
    __this->ctor_3();
}

// public generated Ellipse New() :182
void Ellipse__New1_fn(Ellipse** __retval)
{
    *__retval = Ellipse::New1();
}

// protected override sealed void UpdatePath() :186
void Ellipse__UpdatePath_fn(Ellipse* __this)
{
    ::g::Uno::Float2 radius = ::g::Uno::Float2__op_Multiply1(__this->ActualSize(), 0.5f);

    if (::g::Uno::Float2::op_Equality(__this->_cachedRadius, radius))
        return;

    __this->_cachedRadius = radius;
    __this->InvalidateRenderBounds();
    uPtr(__this->Renderer())->Geometry(::g::Fuse::Drawing::PathGeometryExtensions::Ellipse(::g::Fuse::Drawing::PathGeometry::New1()->MoveTo1(radius), radius));
}

// public generated Ellipse() [instance] :182
void Ellipse::ctor_3()
{
    _cachedRadius = ::g::Uno::Float2__New2(0.0f, 0.0f);
    ctor_2();
}

// public generated Ellipse New() [static] :182
Ellipse* Ellipse::New1()
{
    Ellipse* obj1 = (Ellipse*)uNew(Ellipse_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Shapes\0.18.8\$.uno(216)
// ---------------------------------------------------------

// public enum FillRule :216
uEnumType* FillRule_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Shapes.FillRule", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "NonZero", 0LL,
        "EvenOdd", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Shapes\0.18.8\$.uno(221)
// ---------------------------------------------------------

// public enum FitMode :221
uEnumType* FitMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Shapes.FitMode", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "GeometryMaximum", 0LL,
        "StrokeMaximum", 1LL,
        "ShrinkToGeometry", 2LL,
        "ShrinkToStroke", 3LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Shapes\0.18.8\$.uno(239)
// ---------------------------------------------------------

// internal sealed class GeometryCache :239
// {
uType* GeometryCache_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(GeometryCache);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Shapes.GeometryCache", options);
    type->fp_ctor_ = (void*)GeometryCache__New1_fn;
    ::TYPES[10] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Shapes::GeometryCacheEntry_typeof());
    ::TYPES[11] = ::g::Uno::Action_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[12] = ::g::Fuse::Shapes::GeometryCacheEntry_typeof();
    ::TYPES[13] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Shapes::GeometryCacheEntry_typeof());
    ::TYPES[14] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Shapes::GeometryCacheEntry_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Shapes::GeometryCacheEntry_typeof()), offsetof(::g::Fuse::Shapes::GeometryCache, _cache), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Shapes::GeometryCache, _frame), 0,
        GeometryCache_typeof(), (uintptr_t)&::g::Fuse::Shapes::GeometryCache::_instance_, uFieldFlagsStatic);
    return type;
}

// private GeometryCache() :251
void GeometryCache__ctor__fn(GeometryCache* __this)
{
    __this->ctor_();
}

// private Fuse.Drawing.PathGeometry GetOrCreateImpl(string data) :256
void GeometryCache__GetOrCreateImpl_fn(GeometryCache* __this, uString* data, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = __this->GetOrCreateImpl(data);
}

// public static Fuse.Drawing.PathGeometry GetOrParse(string data) :243
void GeometryCache__GetOrParse_fn(uString* data, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = GeometryCache::GetOrParse(data);
}

// private GeometryCache New() :251
void GeometryCache__New1_fn(GeometryCache** __retval)
{
    *__retval = GeometryCache::New1();
}

// private void Update() :265
void GeometryCache__Update_fn(GeometryCache* __this)
{
    __this->Update();
}

uSStrong<GeometryCache*> GeometryCache::_instance_;

// private GeometryCache() [instance] :251
void GeometryCache::ctor_()
{
    _cache = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[10/*Uno.Collections.Dictionary<string, Fuse.Shapes.GeometryCacheEntry>*/]));
    ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)GeometryCache__Update_fn, this), 0);
}

// private Fuse.Drawing.PathGeometry GetOrCreateImpl(string data) [instance] :256
::g::Fuse::Drawing::PathGeometry* GeometryCache::GetOrCreateImpl(uString* data)
{
    bool ret4;
    ::g::Fuse::Shapes::GeometryCacheEntry* _entry;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_cache), data, (void**)(&_entry), &ret4), ret4))
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_cache), data, _entry = ::g::Fuse::Shapes::GeometryCacheEntry::New1(::g::Fuse::Drawing::PathGeometry::Parse(data)));

    _entry->LastUse = _frame;
    return _entry->Geometry;
}

// private void Update() [instance] :265
void GeometryCache::Update()
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Fuse::Shapes::GeometryCacheEntry*> > ret5;
    _frame++;
    ::g::Uno::Collections::Dictionary* newCache = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[10/*Uno.Collections.Dictionary<string, Fuse.Shapes.GeometryCacheEntry>*/]);

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Fuse::Shapes::GeometryCacheEntry*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_cache), &ret5), ret5); enum1.MoveNext(::TYPES[13/*Uno.Collections.Dictionary<string, Fuse.Shapes.GeometryCacheEntry>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Fuse::Shapes::GeometryCacheEntry*> > entry = enum1.Current(::TYPES[13/*Uno.Collections.Dictionary<string, Fuse.Shapes.GeometryCacheEntry>.Enumerator*/]);
        int framesSinceLastUse = _frame - uPtr(entry.Value(::TYPES[14/*Uno.Collections.KeyValuePair<string, Fuse.Shapes.GeometryCacheEntry>*/]))->LastUse;

        if ((framesSinceLastUse > 0) && (framesSinceLastUse <= 10))
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(newCache), entry.Key(::TYPES[14/*Uno.Collections.KeyValuePair<string, Fuse.Shapes.GeometryCacheEntry>*/]), entry.Value(::TYPES[14/*Uno.Collections.KeyValuePair<string, Fuse.Shapes.GeometryCacheEntry>*/]));
    }

    _cache = newCache;
}

// public static Fuse.Drawing.PathGeometry GetOrParse(string data) [static] :243
::g::Fuse::Drawing::PathGeometry* GeometryCache::GetOrParse(uString* data)
{
    GeometryCache* ind2;
    return uPtr((ind2 = GeometryCache::_instance(), (ind2 != NULL) ? ind2 : (GeometryCache*)(GeometryCache::_instance() = GeometryCache::New1())))->GetOrCreateImpl(data);
}

// private GeometryCache New() [static] :251
GeometryCache* GeometryCache::New1()
{
    GeometryCache* obj3 = (GeometryCache*)uNew(GeometryCache_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Shapes\0.18.8\$.uno(229)
// ---------------------------------------------------------

// internal sealed class GeometryCacheEntry :229
// {
uType* GeometryCacheEntry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(GeometryCacheEntry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Shapes.GeometryCacheEntry", options);
    type->SetFields(0,
        ::g::Fuse::Drawing::PathGeometry_typeof(), offsetof(::g::Fuse::Shapes::GeometryCacheEntry, Geometry), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Shapes::GeometryCacheEntry, LastUse), 0);
    return type;
}

// public GeometryCacheEntry(Fuse.Drawing.PathGeometry geometry) :233
void GeometryCacheEntry__ctor__fn(GeometryCacheEntry* __this, ::g::Fuse::Drawing::PathGeometry* geometry)
{
    __this->ctor_(geometry);
}

// public GeometryCacheEntry New(Fuse.Drawing.PathGeometry geometry) :233
void GeometryCacheEntry__New1_fn(::g::Fuse::Drawing::PathGeometry* geometry, GeometryCacheEntry** __retval)
{
    *__retval = GeometryCacheEntry::New1(geometry);
}

// public GeometryCacheEntry(Fuse.Drawing.PathGeometry geometry) [instance] :233
void GeometryCacheEntry::ctor_(::g::Fuse::Drawing::PathGeometry* geometry)
{
    Geometry = geometry;
}

// public GeometryCacheEntry New(Fuse.Drawing.PathGeometry geometry) [static] :233
GeometryCacheEntry* GeometryCacheEntry::New1(::g::Fuse::Drawing::PathGeometry* geometry)
{
    GeometryCacheEntry* obj1 = (GeometryCacheEntry*)uNew(GeometryCacheEntry_typeof());
    obj1->ctor_(geometry);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Shapes\0.18.8\$.uno(287)
// ---------------------------------------------------------

// public sealed class Path :287
// {
::g::Fuse::Shapes::PathShape_type* Path_typeof()
{
    static uSStrong< ::g::Fuse::Shapes::PathShape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 93;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Path);
    options.TypeSize = sizeof(::g::Fuse::Shapes::PathShape_type);
    type = (::g::Fuse::Shapes::PathShape_type*)uClassType::New("Fuse.Shapes.Path", options);
    type->SetBase(::g::Fuse::Shapes::PathShape_typeof());
    type->fp_ctor_ = (void*)Path__New1_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*))Path__ArrangePaddingBox_fn;
    type->fp_CalcRenderBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Rect*))Path__CalcRenderBounds_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))Path__GetContentSize_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*))Path__OnDraw_fn;
    type->fp_UpdatePath = (void(*)(::g::Fuse::Shapes::PathShape*))Path__UpdatePath_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[15] = ::g::Fuse::Internal::SizingContainer_typeof();
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[16] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Fuse::Drawing::PathGeometryRenderer_typeof();
    ::TYPES[9] = ::g::Fuse::Shapes::PathShape_typeof();
    ::TYPES[17] = ::g::Uno::Float4_typeof();
    ::TYPES[18] = ::g::Uno::Rect_typeof();
    ::TYPES[19] = ::g::Uno::Float4x4_typeof();
    ::TYPES[6] = ::g::Uno::Float2_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[20] = ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::Int_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface5));
    type->SetFields(87,
        ::g::Fuse::Shapes::FillRule_typeof(), offsetof(::g::Fuse::Shapes::Path, _fillRule), 0,
        ::g::Fuse::Shapes::FitMode_typeof(), offsetof(::g::Fuse::Shapes::Path, _fitMode), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Shapes::Path, _origin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Shapes::Path, _postScale), 0,
        ::g::Fuse::Shapes::PathScaleMode_typeof(), offsetof(::g::Fuse::Shapes::Path, _scaleMode), 0,
        ::g::Fuse::Internal::SizingContainer_typeof(), offsetof(::g::Fuse::Shapes::Path, sizing), 0);
    type->Reflection.SetFunctions(17,
        new uFunction("get_ContentAlignment", NULL, (void*)Path__get_ContentAlignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_ContentAlignment", NULL, (void*)Path__set_ContentAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("get_Data", NULL, (void*)Path__get_Data_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Data", NULL, (void*)Path__set_Data_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_FillRule", NULL, (void*)Path__get_FillRule_fn, 0, false, ::g::Fuse::Shapes::FillRule_typeof(), 0),
        new uFunction("set_FillRule", NULL, (void*)Path__set_FillRule_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Shapes::FillRule_typeof()),
        new uFunction("get_FitMode", NULL, (void*)Path__get_FitMode_fn, 0, false, ::g::Fuse::Shapes::FitMode_typeof(), 0),
        new uFunction("set_FitMode", NULL, (void*)Path__set_FitMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Shapes::FitMode_typeof()),
        new uFunction("get_Geometry", NULL, (void*)Path__get_Geometry_fn, 0, false, ::g::Fuse::Drawing::PathGeometry_typeof(), 0),
        new uFunction("set_Geometry", NULL, (void*)Path__set_Geometry_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::PathGeometry_typeof()),
        new uFunction(".ctor", NULL, (void*)Path__New1_fn, 0, true, Path_typeof(), 0),
        new uFunction("get_ScaleMode", NULL, (void*)Path__get_ScaleMode_fn, 0, false, ::g::Fuse::Shapes::PathScaleMode_typeof(), 0),
        new uFunction("set_ScaleMode", NULL, (void*)Path__set_ScaleMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Shapes::PathScaleMode_typeof()),
        new uFunction("get_StretchDirection", NULL, (void*)Path__get_StretchDirection_fn, 0, false, ::g::Fuse::Elements::StretchDirection_typeof(), 0),
        new uFunction("set_StretchDirection", NULL, (void*)Path__set_StretchDirection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::StretchDirection_typeof()),
        new uFunction("get_StretchMode", NULL, (void*)Path__get_StretchMode_fn, 0, false, ::g::Fuse::Elements::StretchMode_typeof(), 0),
        new uFunction("set_StretchMode", NULL, (void*)Path__set_StretchMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::StretchMode_typeof()));
    return type;
}

// public generated Path() :287
void Path__ctor_3_fn(Path* __this)
{
    __this->ctor_3();
}

// private float4x4 AlignMatrix(float4x4 b) :493
void Path__AlignMatrix_fn(Path* __this, ::g::Uno::Float4x4* b, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->AlignMatrix(*b);
}

// protected override sealed void ArrangePaddingBox(float2 size, Fuse.SizeFlags flags) :453
void Path__ArrangePaddingBox_fn(Path* __this, ::g::Uno::Float2* size, int* flags)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float2 size_ = *size;
    uPtr(__this->sizing)->padding = __this->Padding();
    ::g::Uno::Float2 contentDesiredSize = __this->GetNaturalContentSize();
    ::g::Uno::Float2 scale = uPtr(__this->sizing)->CalcScale(size_, contentDesiredSize);
    __this->_origin = uPtr(__this->sizing)->CalcOrigin(size_, ::g::Uno::Float2__op_Multiply2(contentDesiredSize, scale));

    if (__this->_scaleMode == 0)
        uPtr(__this->Renderer())->PreScale(scale);
    else
        __this->_postScale = scale;

    switch (__this->_fitMode)
    {
        case 0:
            break;
        case 1:
        {
            __this->_origin = ::g::Uno::Float2__op_Addition2(__this->_origin, (ind1 = uPtr(__this->Renderer())->StrokePadding(), ::g::Uno::Float2__New2(ind1.X, ind1.Y)));
            break;
        }
        case 2:
        {
            __this->_origin = ::g::Uno::Float2__op_Subtraction2(__this->_origin, uPtr(__this->Renderer())->InnerBounds().Minimum());
            break;
        }
        case 3:
        {
            __this->_origin = ::g::Uno::Float2__op_Subtraction2(__this->_origin, uPtr(__this->Renderer())->InnerBounds().Minimum());
            __this->_origin = ::g::Uno::Float2__op_Addition2(__this->_origin, (ind2 = uPtr(__this->Renderer())->StrokePadding(), ::g::Uno::Float2__New2(ind2.X, ind2.Y)));
            break;
        }
    }
}

// protected override sealed Uno.Rect CalcRenderBounds() :504
void Path__CalcRenderBounds_fn(Path* __this, ::g::Uno::Rect* __retval)
{
    ::g::Uno::Float4x4 m = __this->AlignMatrix(::g::Uno::Float4x4__Identity());
    ::g::Uno::Rect b = uPtr(__this->Renderer())->Bounds();
    ::g::Uno::Float4 ind3 = ::g::Uno::Vector::Transform1(b.Minimum(), m);
    ::g::Uno::Float2 tl = ::g::Uno::Float2__New2(ind3.X, ind3.Y);
    ::g::Uno::Float4 ind4 = ::g::Uno::Vector::Transform1(b.Maximum(), m);
    ::g::Uno::Float2 br = ::g::Uno::Float2__New2(ind4.X, ind4.Y);
    return *__retval = ::g::Uno::Rect__New2(tl, ::g::Uno::Float2__op_Subtraction2(br, tl)), void();
}

// public Fuse.Elements.Alignment get_ContentAlignment() :316
void Path__get_ContentAlignment_fn(Path* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :317
void Path__set_ContentAlignment_fn(Path* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// public string get_Data() :383
void Path__get_Data_fn(Path* __this, uString** __retval)
{
    *__retval = __this->Data();
}

// public void set_Data(string value) :384
void Path__set_Data_fn(Path* __this, uString* value)
{
    __this->Data(value);
}

// public Fuse.Shapes.FillRule get_FillRule() :391
void Path__get_FillRule_fn(Path* __this, int* __retval)
{
    *__retval = __this->FillRule();
}

// public void set_FillRule(Fuse.Shapes.FillRule value) :392
void Path__set_FillRule_fn(Path* __this, int* value)
{
    __this->FillRule(*value);
}

// public Fuse.Shapes.FitMode get_FitMode() :328
void Path__get_FitMode_fn(Path* __this, int* __retval)
{
    *__retval = __this->FitMode();
}

// public void set_FitMode(Fuse.Shapes.FitMode value) :329
void Path__set_FitMode_fn(Path* __this, int* value)
{
    __this->FitMode(*value);
}

// public Fuse.Drawing.PathGeometry get_Geometry() :366
void Path__get_Geometry_fn(Path* __this, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = __this->Geometry();
}

// public void set_Geometry(Fuse.Drawing.PathGeometry value) :367
void Path__set_Geometry_fn(Path* __this, ::g::Fuse::Drawing::PathGeometry* value)
{
    __this->Geometry(value);
}

// protected override sealed float2 GetContentSize(float2 fillSize, Fuse.SizeFlags fillSet) :443
void Path__GetContentSize_fn(Path* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 fillSize_ = *fillSize;
    int fillSet_ = *fillSet;
    ::g::Uno::Float2 natural = __this->GetNaturalContentSize();
    uPtr(__this->sizing)->padding = ::g::Uno::Float4__New1(0.0f);
    ::g::Uno::Float2 r = uPtr(__this->sizing)->ExpandFillSize(natural, fillSize_, fillSet_);
    return *__retval = r, void();
}

// protected float2 GetNaturalContentSize() :401
void Path__GetNaturalContentSize_fn(Path* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetNaturalContentSize();
}

// public generated Path New() :287
void Path__New1_fn(Path** __retval)
{
    *__retval = Path::New1();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :487
void Path__OnDraw_fn(Path* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Uno::Float4x4 r = __this->AlignMatrix(uPtr(dc)->GetLocalToClipTransform(__this));
    uPtr(__this->Renderer())->Draw(dc, r, __this->ActualSize());
}

// private void OnSizingChanged() :358
void Path__OnSizingChanged_fn(Path* __this)
{
    __this->OnSizingChanged();
}

// public Fuse.Shapes.PathScaleMode get_ScaleMode() :342
void Path__get_ScaleMode_fn(Path* __this, int* __retval)
{
    *__retval = __this->ScaleMode();
}

// public void set_ScaleMode(Fuse.Shapes.PathScaleMode value) :343
void Path__set_ScaleMode_fn(Path* __this, int* value)
{
    __this->ScaleMode(*value);
}

// public Fuse.Elements.StretchDirection get_StretchDirection() :305
void Path__get_StretchDirection_fn(Path* __this, int* __retval)
{
    *__retval = __this->StretchDirection();
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) :306
void Path__set_StretchDirection_fn(Path* __this, int* value)
{
    __this->StretchDirection(*value);
}

// public Fuse.Elements.StretchMode get_StretchMode() :294
void Path__get_StretchMode_fn(Path* __this, int* __retval)
{
    *__retval = __this->StretchMode();
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) :295
void Path__set_StretchMode_fn(Path* __this, int* value)
{
    __this->StretchMode(*value);
}

// protected override sealed void UpdatePath() :375
void Path__UpdatePath_fn(Path* __this)
{
}

// public generated Path() [instance] :287
void Path::ctor_3()
{
    sizing = ::g::Fuse::Internal::SizingContainer::New1();
    _fitMode = 2;
    _scaleMode = 1;
    _postScale = ::g::Uno::Float2__New1(1.0f);
    ctor_2();
}

// private float4x4 AlignMatrix(float4x4 b) [instance] :493
::g::Uno::Float4x4 Path::AlignMatrix(::g::Uno::Float4x4 b)
{
    ::g::Uno::Float4x4 t = ::g::Uno::Matrix::Translation1(::g::Uno::Float3__New4(_origin, 0.0f));
    ::g::Uno::Float4x4 r0 = ::g::Uno::Matrix::Mul8(t, b);
    ::g::Uno::Float4x4 s = ::g::Uno::Matrix::Scaling2(::g::Uno::Float3__New4(_postScale, 1.0f));
    ::g::Uno::Float4x4 r1 = ::g::Uno::Matrix::Mul8(s, r0);
    return r1;
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :316
int Path::ContentAlignment()
{
    return uPtr(sizing)->align;
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :317
void Path::ContentAlignment(int value)
{
    if (uPtr(sizing)->SetAlignment(value))
        OnSizingChanged();
}

// public string get_Data() [instance] :383
uString* Path::Data()
{
    return uPtr(uPtr(Renderer())->Geometry())->ToString();
}

// public void set_Data(string value) [instance] :384
void Path::Data(uString* value)
{
    uPtr(Renderer())->Geometry(::g::Fuse::Shapes::GeometryCache::GetOrParse(value));
}

// public Fuse.Shapes.FillRule get_FillRule() [instance] :391
int Path::FillRule()
{
    return _fillRule;
}

// public void set_FillRule(Fuse.Shapes.FillRule value) [instance] :392
void Path::FillRule(int value)
{
    _fillRule = value;
    uPtr(Renderer())->FillRule((_fillRule == 1) ? uDelegate::New(::TYPES[20/*Uno.Predicate<int>*/], (void*)::g::Fuse::Drawing::WindingRules__Odd_fn) : uDelegate::New(::TYPES[20/*Uno.Predicate<int>*/], (void*)::g::Fuse::Drawing::WindingRules__NonZero_fn));
}

// public Fuse.Shapes.FitMode get_FitMode() [instance] :328
int Path::FitMode()
{
    return _fitMode;
}

// public void set_FitMode(Fuse.Shapes.FitMode value) [instance] :329
void Path::FitMode(int value)
{
    if (value != _fitMode)
    {
        _fitMode = value;
        OnSizingChanged();
    }
}

// public Fuse.Drawing.PathGeometry get_Geometry() [instance] :366
::g::Fuse::Drawing::PathGeometry* Path::Geometry()
{
    return uPtr(Renderer())->Geometry();
}

// public void set_Geometry(Fuse.Drawing.PathGeometry value) [instance] :367
void Path::Geometry(::g::Fuse::Drawing::PathGeometry* value)
{
    uPtr(Renderer())->Geometry(value);
    InvalidateRenderBounds();
}

// protected float2 GetNaturalContentSize() [instance] :401
::g::Uno::Float2 Path::GetNaturalContentSize()
{
    ::g::Uno::Float2 hi = ::g::Uno::Float2__New1(0.0f);
    ::g::Uno::Float2 lo = ::g::Uno::Float2__New1(0.0f);

    switch (_fitMode)
    {
        case 0:
        {
            lo = ::g::Uno::Float2__New1(0.0f);
            hi = uPtr(Renderer())->InnerBounds().Maximum();
            break;
        }
        case 1:
        {
            hi = uPtr(Renderer())->InnerBounds().Maximum();
            ::g::Uno::Float4 s = uPtr(Renderer())->StrokePadding();
            hi.X = (hi.X + s.Item(2));
            hi.Y = (hi.Y + s.Item(3));
            lo.X = (lo.X - s.Item(0));
            lo.Y = (lo.Y - s.Item(1));
            break;
        }
        case 2:
        {
            lo = uPtr(Renderer())->InnerBounds().Minimum();
            hi = uPtr(Renderer())->InnerBounds().Maximum();
            break;
        }
        case 3:
        {
            lo = uPtr(Renderer())->InnerBounds().Minimum();
            hi = uPtr(Renderer())->InnerBounds().Maximum();
            ::g::Uno::Float4 s1 = uPtr(Renderer())->StrokePadding();
            lo.X = (lo.X - s1.Item(0));
            lo.Y = (lo.Y - s1.Item(1));
            hi.X = (hi.X + s1.Item(2));
            hi.Y = (hi.Y + s1.Item(3));
            break;
        }
    }

    ::g::Uno::Float2 natural = ::g::Uno::Float2__op_Subtraction2(hi, lo);
    return natural;
}

// private void OnSizingChanged() [instance] :358
void Path::OnSizingChanged()
{
    InvalidateLayout(2);
    InvalidateVisual();
}

// public Fuse.Shapes.PathScaleMode get_ScaleMode() [instance] :342
int Path::ScaleMode()
{
    return _scaleMode;
}

// public void set_ScaleMode(Fuse.Shapes.PathScaleMode value) [instance] :343
void Path::ScaleMode(int value)
{
    if (_scaleMode != value)
    {
        _scaleMode = value;

        if (_scaleMode != 0)
            uPtr(Renderer())->PreScale(::g::Uno::Float2__New1(1.0f));
        else
            _postScale = ::g::Uno::Float2__New1(1.0f);

        OnSizingChanged();
    }
}

// public Fuse.Elements.StretchDirection get_StretchDirection() [instance] :305
int Path::StretchDirection()
{
    return uPtr(sizing)->stretchDirection;
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) [instance] :306
void Path::StretchDirection(int value)
{
    if (uPtr(sizing)->SetStretchDirection(value))
        OnSizingChanged();
}

// public Fuse.Elements.StretchMode get_StretchMode() [instance] :294
int Path::StretchMode()
{
    return uPtr(sizing)->stretchMode;
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) [instance] :295
void Path::StretchMode(int value)
{
    if (uPtr(sizing)->SetStretchMode(value))
        OnSizingChanged();
}

// public generated Path New() [static] :287
Path* Path::New1()
{
    Path* obj5 = (Path*)uNew(Path_typeof());
    obj5->ctor_3();
    return obj5;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Shapes\0.18.8\$.uno(280)
// ---------------------------------------------------------

// public enum PathScaleMode :280
uEnumType* PathScaleMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Shapes.PathScaleMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Pre", 0LL,
        "Post", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Shapes\0.18.8\$.uno(893)
// ---------------------------------------------------------

// public abstract class PathShape :893
// {
PathShape_type* PathShape_typeof()
{
    static uSStrong<PathShape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 87;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(PathShape);
    options.TypeSize = sizeof(PathShape_type);
    type = (PathShape_type*)uClassType::New("Fuse.Shapes.PathShape", options);
    type->SetBase(::g::Fuse::Elements::Element_typeof());
    type->fp_CalcRenderBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Rect*))PathShape__CalcRenderBounds_fn;
    type->fp_get_HitTestLocalVisualBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::NodeBounds**))PathShape__get_HitTestLocalVisualBounds_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*))PathShape__OnDraw_fn;
    type->fp_OnHitTestLocalVisual = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::HitTestContext*))PathShape__OnHitTestLocalVisual_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PathShape__OnRooted_fn;
    type->fp_SoftDispose = (void(*)(::g::Fuse::Node*))PathShape__SoftDispose_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[8] = ::g::Fuse::Drawing::PathGeometryRenderer_typeof();
    ::TYPES[11] = ::g::Uno::Action_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[5] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[21] = ::g::Fuse::IViewport_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(PathShape_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(PathShape_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(PathShape_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(PathShape_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(PathShape_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(PathShape_type, interface5));
    type->SetFields(86,
        ::g::Fuse::Drawing::PathGeometryRenderer_typeof(), offsetof(::g::Fuse::Shapes::PathShape, _renderer), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_Antialiasing", NULL, (void*)PathShape__get_Antialiasing_fn, 0, false, ::g::Fuse::Drawing::Antialiasing_typeof(), 0),
        new uFunction("set_Antialiasing", NULL, (void*)PathShape__set_Antialiasing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Antialiasing_typeof()),
        new uFunction("get_Fill", NULL, (void*)PathShape__get_Fill_fn, 0, false, ::g::Fuse::Drawing::Brush_typeof(), 0),
        new uFunction("set_Fill", NULL, (void*)PathShape__set_Fill_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("get_Fills", NULL, (void*)PathShape__get_Fills_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()), 0),
        new uFunction("GetHitPart", NULL, (void*)PathShape__GetHitPart_fn, 0, false, uObject_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_HasFills", NULL, (void*)PathShape__get_HasFills_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasStrokes", NULL, (void*)PathShape__get_HasStrokes_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Stroke", NULL, (void*)PathShape__get_Stroke_fn, 0, false, ::g::Fuse::Drawing::Stroke_typeof(), 0),
        new uFunction("set_Stroke", NULL, (void*)PathShape__set_Stroke_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Stroke_typeof()),
        new uFunction("get_Strokes", NULL, (void*)PathShape__get_Strokes_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof()), 0));
    return type;
}

// protected PathShape() :944
void PathShape__ctor_2_fn(PathShape* __this)
{
    __this->ctor_2();
}

// public Fuse.Drawing.Antialiasing get_Antialiasing() :957
void PathShape__get_Antialiasing_fn(PathShape* __this, int* __retval)
{
    *__retval = __this->Antialiasing();
}

// public void set_Antialiasing(Fuse.Drawing.Antialiasing value) :958
void PathShape__set_Antialiasing_fn(PathShape* __this, int* value)
{
    __this->Antialiasing(*value);
}

// protected override Uno.Rect CalcRenderBounds() :963
void PathShape__CalcRenderBounds_fn(PathShape* __this, ::g::Uno::Rect* __retval)
{
    return *__retval = uPtr(__this->Renderer())->Bounds(), void();
}

// public Fuse.Drawing.Brush get_Fill() :898
void PathShape__get_Fill_fn(PathShape* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->Fill();
}

// public void set_Fill(Fuse.Drawing.Brush value) :899
void PathShape__set_Fill_fn(PathShape* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->Fill(value);
}

// public Uno.Collections.IList<Fuse.Drawing.Brush> get_Fills() :905
void PathShape__get_Fills_fn(PathShape* __this, uObject** __retval)
{
    *__retval = __this->Fills();
}

// public object GetHitPart(float2 localCoords) :986
void PathShape__GetHitPart_fn(PathShape* __this, ::g::Uno::Float2* localCoords, uObject** __retval)
{
    *__retval = __this->GetHitPart(*localCoords);
}

// public bool get_HasFills() :910
void PathShape__get_HasFills_fn(PathShape* __this, bool* __retval)
{
    *__retval = __this->HasFills();
}

// public bool get_HasStrokes() :920
void PathShape__get_HasStrokes_fn(PathShape* __this, bool* __retval)
{
    *__retval = __this->HasStrokes();
}

// protected override sealed Fuse.NodeBounds get_HitTestLocalVisualBounds() :983
void PathShape__get_HitTestLocalVisualBounds_fn(PathShape* __this, ::g::Fuse::NodeBounds** __retval)
{
    return *__retval = ::g::Fuse::NodeBounds::Rect(::g::Uno::Float2__New1(0.0f), __this->ActualSize()), void();
}

// private void Invalidated() :949
void PathShape__Invalidated_fn(PathShape* __this)
{
    __this->Invalidated();
}

// protected override void OnDraw(Fuse.DrawContext dc) :968
void PathShape__OnDraw_fn(PathShape* __this, ::g::Fuse::DrawContext* dc)
{
    uPtr(__this->Renderer())->Draw(dc, uPtr(dc)->GetLocalToClipTransform(__this), __this->ActualSize());
}

// protected override sealed void OnHitTestLocalVisual(Fuse.HitTestContext htc) :973
void PathShape__OnHitTestLocalVisual_fn(PathShape* __this, ::g::Fuse::HitTestContext* htc)
{
    uObject* hitPart = __this->GetHitPart(uPtr(htc)->LocalPoint());

    if (hitPart != NULL)
        htc->Hit(__this);

    ::g::Fuse::Elements::Element__OnHitTestLocalVisual_fn(__this, htc);
}

// protected override sealed void OnRooted() :938
void PathShape__OnRooted_fn(PathShape* __this)
{
    ::g::Fuse::Elements::Element__OnRooted_fn(__this);
    uPtr(__this->_renderer)->Density(::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[21/*Fuse.IViewport*/])));
}

// protected Fuse.Drawing.PathGeometryRenderer get_Renderer() :931
void PathShape__get_Renderer_fn(PathShape* __this, ::g::Fuse::Drawing::PathGeometryRenderer** __retval)
{
    *__retval = __this->Renderer();
}

// protected override sealed void SoftDispose() :991
void PathShape__SoftDispose_fn(PathShape* __this)
{
    uPtr(__this->_renderer)->SoftDispose();
}

// public Fuse.Drawing.Stroke get_Stroke() :916
void PathShape__get_Stroke_fn(PathShape* __this, ::g::Fuse::Drawing::Stroke** __retval)
{
    *__retval = __this->Stroke();
}

// public void set_Stroke(Fuse.Drawing.Stroke value) :917
void PathShape__set_Stroke_fn(PathShape* __this, ::g::Fuse::Drawing::Stroke* value)
{
    __this->Stroke(value);
}

// public Uno.Collections.IList<Fuse.Drawing.Stroke> get_Strokes() :925
void PathShape__get_Strokes_fn(PathShape* __this, uObject** __retval)
{
    *__retval = __this->Strokes();
}

// protected PathShape() [instance] :944
void PathShape::ctor_2()
{
    _renderer = ::g::Fuse::Drawing::PathGeometryRenderer::New1();
    ctor_1();
    uPtr(Renderer())->add_VisualInvalidated(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)PathShape__Invalidated_fn, this));
}

// public Fuse.Drawing.Antialiasing get_Antialiasing() [instance] :957
int PathShape::Antialiasing()
{
    return uPtr(Renderer())->Antialiasing();
}

// public void set_Antialiasing(Fuse.Drawing.Antialiasing value) [instance] :958
void PathShape::Antialiasing(int value)
{
    uPtr(Renderer())->Antialiasing(value);
}

// public Fuse.Drawing.Brush get_Fill() [instance] :898
::g::Fuse::Drawing::Brush* PathShape::Fill()
{
    return uPtr(Renderer())->Fill();
}

// public void set_Fill(Fuse.Drawing.Brush value) [instance] :899
void PathShape::Fill(::g::Fuse::Drawing::Brush* value)
{
    uPtr(Renderer())->Fill(value);
}

// public Uno.Collections.IList<Fuse.Drawing.Brush> get_Fills() [instance] :905
uObject* PathShape::Fills()
{
    return uPtr(Renderer())->Fills();
}

// public object GetHitPart(float2 localCoords) [instance] :986
uObject* PathShape::GetHitPart(::g::Uno::Float2 localCoords)
{
    ::g::Uno::Float2 localCoords_ = localCoords;
    return uPtr(Renderer())->GetHitPart(localCoords_);
}

// public bool get_HasFills() [instance] :910
bool PathShape::HasFills()
{
    return uPtr(Renderer())->HasFills();
}

// public bool get_HasStrokes() [instance] :920
bool PathShape::HasStrokes()
{
    return uPtr(Renderer())->HasStrokes();
}

// private void Invalidated() [instance] :949
void PathShape::Invalidated()
{
    InvalidateVisual();
}

// protected Fuse.Drawing.PathGeometryRenderer get_Renderer() [instance] :931
::g::Fuse::Drawing::PathGeometryRenderer* PathShape::Renderer()
{
    UpdatePath();
    return _renderer;
}

// public Fuse.Drawing.Stroke get_Stroke() [instance] :916
::g::Fuse::Drawing::Stroke* PathShape::Stroke()
{
    return uPtr(Renderer())->Stroke();
}

// public void set_Stroke(Fuse.Drawing.Stroke value) [instance] :917
void PathShape::Stroke(::g::Fuse::Drawing::Stroke* value)
{
    uPtr(Renderer())->Stroke(value);
}

// public Uno.Collections.IList<Fuse.Drawing.Stroke> get_Strokes() [instance] :925
uObject* PathShape::Strokes()
{
    return uPtr(Renderer())->Strokes();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Shapes\0.18.8\$.uno(532)
// ---------------------------------------------------------

// public sealed class Rectangle :532
// {
// static Rectangle() :532
static void Rectangle__cctor_3_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret8;
    Rectangle::CornerRadiusProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[22/*Fuse.StyleProperty<Fuse.Shapes.Rectangle, float4>*/], uCRef(::g::Uno::Float4__New1(0.0f)), uDelegate::New(::TYPES[23/*Uno.Action<Fuse.Shapes.Rectangle>*/], (void*)Rectangle__OnCornerRadiusChanged_fn), &ret8), ret8);
}

::g::Fuse::Shapes::Shape_type* Rectangle_typeof()
{
    static uSStrong< ::g::Fuse::Shapes::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 92;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(::g::Fuse::Shapes::Shape_type);
    type = (::g::Fuse::Shapes::Shape_type*)uClassType::New("Fuse.Shapes.Rectangle", options);
    type->SetBase(::g::Fuse::Shapes::Shape_typeof());
    type->fp_ctor_ = (void*)Rectangle__New1_fn;
    type->fp_cctor_ = Rectangle__cctor_3_fn;
    type->fp_DrawFill = (void(*)(::g::Fuse::Shapes::Shape*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Brush*))Rectangle__DrawFill_fn;
    type->fp_DrawStroke = (void(*)(::g::Fuse::Shapes::Shape*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Stroke*))Rectangle__DrawStroke_fn;
    type->fp_OnHitTestLocalVisual = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::HitTestContext*))Rectangle__OnHitTestLocalVisual_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[22] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Rectangle_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[23] = ::g::Uno::Action1_typeof()->MakeType(Rectangle_typeof());
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[17] = ::g::Uno::Float4_typeof();
    ::TYPES[24] = ::g::Fuse::Drawing::Primitives::Rectangle_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[2] = ::g::Fuse::Shapes::Shape_typeof();
    ::TYPES[5] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[6] = ::g::Uno::Float2_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Shapes::Shape_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Shapes::Shape_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Shapes::Shape_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Shapes::Shape_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Shapes::Shape_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Shapes::Shape_type, interface5));
    type->SetFields(91,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Rectangle_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Shapes::Rectangle::CornerRadiusProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("CornerRadiusProperty", 91));
    type->Reflection.SetFunctions(3,
        new uFunction("get_CornerRadius", NULL, (void*)Rectangle__get_CornerRadius_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_CornerRadius", NULL, (void*)Rectangle__set_CornerRadius_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)Rectangle__New1_fn, 0, true, Rectangle_typeof(), 0));
    return type;
}

// public generated Rectangle() :532
void Rectangle__ctor_3_fn(Rectangle* __this)
{
    __this->ctor_3();
}

// public float4 get_CornerRadius() :540
void Rectangle__get_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->CornerRadius();
}

// public void set_CornerRadius(float4 value) :541
void Rectangle__set_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* value)
{
    __this->CornerRadius(*value);
}

// protected override sealed void DrawFill(Fuse.DrawContext dc, Fuse.Drawing.Brush fill) :548
void Rectangle__DrawFill_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 cr = __this->CornerRadius();
    ::g::Uno::Float2 sz = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(__this->ActualSize(), (ind1 = __this->Padding(), ::g::Uno::Float2__New2(ind1.X, ind1.Y))), (ind2 = __this->Padding(), ::g::Uno::Float2__New2(ind2.Z, ind2.W)));
    uPtr(::g::Fuse::Drawing::Primitives::Rectangle::Singleton())->Fill(dc, __this, sz, cr, fill, (ind3 = __this->Padding(), ::g::Uno::Float2__New2(ind3.X, ind3.Y)), __this->Smoothness());
}

// protected override sealed void DrawStroke(Fuse.DrawContext dc, Fuse.Drawing.Stroke stroke) :555
void Rectangle__DrawStroke_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke)
{
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 cr = __this->CornerRadius();
    ::g::Uno::Float2 sz = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(__this->ActualSize(), (ind4 = __this->Padding(), ::g::Uno::Float2__New2(ind4.X, ind4.Y))), (ind5 = __this->Padding(), ::g::Uno::Float2__New2(ind5.Z, ind5.W)));
    uPtr(::g::Fuse::Drawing::Primitives::Rectangle::Singleton())->Stroke(dc, __this, sz, cr, stroke, (ind6 = __this->Padding(), ::g::Uno::Float2__New2(ind6.X, ind6.Y)), __this->Smoothness());
}

// public generated Rectangle New() :532
void Rectangle__New1_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New1();
}

// private static void OnCornerRadiusChanged(Fuse.Shapes.Rectangle r) :543
void Rectangle__OnCornerRadiusChanged_fn(Rectangle* r)
{
    Rectangle::OnCornerRadiusChanged(r);
}

// protected override sealed void OnHitTestLocalVisual(Fuse.HitTestContext htc) :562
void Rectangle__OnHitTestLocalVisual_fn(Rectangle* __this, ::g::Fuse::HitTestContext* htc)
{
    ::g::Uno::Float2 lp = uPtr(htc)->LocalPoint();

    if (!__this->HasFills() || !__this->IsPointInside(lp))
        return;

    ::g::Uno::Float4 cr = __this->CornerRadius();

    if ((lp.X < cr.Item(0)) && (lp.Y < cr.Item(0)))
    {
        if (::g::Uno::Vector::Distance(lp, ::g::Uno::Float2__New1(cr.Item(0))) > cr.Item(0))
            return;
    }
    else if ((lp.X > (__this->ActualSize().X - cr.Item(1))) && (lp.Y < cr.Item(1)))
    {
        if (::g::Uno::Vector::Distance(lp, ::g::Uno::Float2__New2(__this->ActualSize().X - cr.Item(1), cr.Item(1))) > cr.Item(1))
            return;
    }
    else if ((lp.X < cr.Item(3)) && (lp.Y > (__this->ActualSize().Y - cr.Item(3))))
    {
        if (::g::Uno::Vector::Distance(lp, ::g::Uno::Float2__New2(cr.Item(3), __this->ActualSize().Y - cr.Item(3))) > cr.Item(3))
            return;
    }
    else if ((lp.X > (__this->ActualSize().X - cr.Item(2))) && (lp.Y > (__this->ActualSize().Y - cr.Item(2))))
    {
        if (::g::Uno::Vector::Distance(lp, ::g::Uno::Float2__New2(__this->ActualSize().X - cr.Item(2), __this->ActualSize().Y - cr.Item(2))) > cr.Item(2))
            return;
    }

    htc->Hit(__this);
}

uSStrong< ::g::Fuse::StyleProperty1*> Rectangle::CornerRadiusProperty_;

// public generated Rectangle() [instance] :532
void Rectangle::ctor_3()
{
    ctor_2();
}

// public float4 get_CornerRadius() [instance] :540
::g::Uno::Float4 Rectangle::CornerRadius()
{
    ::g::Uno::Float4 ret9;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Rectangle::CornerRadiusProperty()), this, &ret9), ret9);
}

// public void set_CornerRadius(float4 value) [instance] :541
void Rectangle::CornerRadius(::g::Uno::Float4 value)
{
    bool ret10;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Rectangle::CornerRadiusProperty()), this, uCRef(value), &ret10);
}

// public generated Rectangle New() [static] :532
Rectangle* Rectangle::New1()
{
    Rectangle* obj7 = (Rectangle*)uNew(Rectangle_typeof());
    obj7->ctor_3();
    return obj7;
}

// private static void OnCornerRadiusChanged(Fuse.Shapes.Rectangle r) [static] :543
void Rectangle::OnCornerRadiusChanged(Rectangle* r)
{
    Rectangle_typeof()->Init();
    uPtr(r)->InvalidateVisual();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Shapes\0.18.8\$.uno(616)
// ---------------------------------------------------------

// public sealed class RegularPolygon :616
// {
::g::Fuse::Shapes::PathShape_type* RegularPolygon_typeof()
{
    static uSStrong< ::g::Fuse::Shapes::PathShape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 90;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(RegularPolygon);
    options.TypeSize = sizeof(::g::Fuse::Shapes::PathShape_type);
    type = (::g::Fuse::Shapes::PathShape_type*)uClassType::New("Fuse.Shapes.RegularPolygon", options);
    type->SetBase(::g::Fuse::Shapes::PathShape_typeof());
    type->fp_ctor_ = (void*)RegularPolygon__New1_fn;
    type->fp_UpdatePath = (void(*)(::g::Fuse::Shapes::PathShape*))RegularPolygon__UpdatePath_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[8] = ::g::Fuse::Drawing::PathGeometryRenderer_typeof();
    ::TYPES[9] = ::g::Fuse::Shapes::PathShape_typeof();
    ::TYPES[6] = ::g::Uno::Float2_typeof();
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface5));
    type->SetFields(87,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Shapes::RegularPolygon, _cachedRadius), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Shapes::RegularPolygon, _cachedSides), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Shapes::RegularPolygon, _sides), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)RegularPolygon__New1_fn, 0, true, RegularPolygon_typeof(), 0),
        new uFunction("get_Sides", NULL, (void*)RegularPolygon__get_Sides_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Sides", NULL, (void*)RegularPolygon__set_Sides_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()));
    return type;
}

// public generated RegularPolygon() :616
void RegularPolygon__ctor_3_fn(RegularPolygon* __this)
{
    __this->ctor_3();
}

// public generated RegularPolygon New() :616
void RegularPolygon__New1_fn(RegularPolygon** __retval)
{
    *__retval = RegularPolygon::New1();
}

// private float2 get_Offset() :620
void RegularPolygon__get_Offset1_fn(RegularPolygon* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Offset1();
}

// private float get_Radius() :630
void RegularPolygon__get_Radius_fn(RegularPolygon* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// public int get_Sides() :636
void RegularPolygon__get_Sides_fn(RegularPolygon* __this, int* __retval)
{
    *__retval = __this->Sides();
}

// public void set_Sides(int value) :637
void RegularPolygon__set_Sides_fn(RegularPolygon* __this, int* value)
{
    __this->Sides(*value);
}

// protected override sealed void UpdatePath() :648
void RegularPolygon__UpdatePath_fn(RegularPolygon* __this)
{
    if (__this->_sides < 3)
        return;

    if ((__this->_cachedSides == __this->_sides) && (__this->_cachedRadius == __this->Radius()))
        return;

    __this->_cachedSides = __this->_sides;
    __this->_cachedRadius = __this->Radius();
    __this->InvalidateRenderBounds();
    uPtr(__this->Renderer())->Geometry(::g::Fuse::Drawing::PathGeometryExtensions::RegularPolygon(::g::Fuse::Drawing::PathGeometry::New1()->MoveTo1(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New1(__this->Radius()), __this->Offset1())), __this->_sides, __this->Radius()));
}

// public generated RegularPolygon() [instance] :616
void RegularPolygon::ctor_3()
{
    _sides = 5;
    ctor_2();
}

// private float2 get_Offset() [instance] :620
::g::Uno::Float2 RegularPolygon::Offset1()
{
    return (ActualSize().X > ActualSize().Y) ? ::g::Uno::Float2__New2((ActualSize().X * 0.5f) - (ActualSize().Y * 0.5f), 0.0f) : ::g::Uno::Float2__New2(0.0f, (ActualSize().Y * 0.5f) - (ActualSize().X * 0.5f));
}

// private float get_Radius() [instance] :630
float RegularPolygon::Radius()
{
    return ::g::Uno::Math::Min1(ActualSize().X, ActualSize().Y) * 0.5f;
}

// public int get_Sides() [instance] :636
int RegularPolygon::Sides()
{
    return _sides;
}

// public void set_Sides(int value) [instance] :637
void RegularPolygon::Sides(int value)
{
    if (value == _sides)
        return;

    _sides = value;
    InvalidateVisual();
}

// public generated RegularPolygon New() [static] :616
RegularPolygon* RegularPolygon::New1()
{
    RegularPolygon* obj1 = (RegularPolygon*)uNew(RegularPolygon_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Shapes\0.18.8\$.uno(678)
// ---------------------------------------------------------

// public abstract class Shape :678
// {
// static Shape() :678
static void Shape__cctor_2_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret4;
    ::g::Fuse::StyleProperty1* ret5;
    ::g::Fuse::StyleProperty1* ret6;
    Shape::FillProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[25/*Fuse.StyleProperty<Fuse.Shapes.Shape, Fuse.Drawing.Brush>*/], NULL, NULL, uDelegate::New(::TYPES[26/*Uno.Action<Fuse.Shapes.Shape, Fuse.Drawing.Brush>*/], (void*)Shape__SetFill_fn), uDelegate::New(::TYPES[27/*Uno.Func<Fuse.Shapes.Shape, Fuse.Drawing.Brush>*/], (void*)Shape__GetFill_fn), &ret4), ret4);
    Shape::StrokeProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[28/*Fuse.StyleProperty<Fuse.Shapes.Shape, Fuse.Drawing.Stroke>*/], NULL, NULL, uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Shapes.Shape, Fuse.Drawing.Stroke>*/], (void*)Shape__SetStroke_fn), uDelegate::New(::TYPES[30/*Uno.Func<Fuse.Shapes.Shape, Fuse.Drawing.Stroke>*/], (void*)Shape__GetStroke_fn), &ret5), ret5);
    Shape::SmoothnessProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[31/*Fuse.StyleProperty<Fuse.Shapes.Shape, float>*/], uCRef(1.0f), uDelegate::New(::TYPES[32/*Uno.Action<Fuse.Shapes.Shape>*/], (void*)Shape__OnSmoothnessChanged_fn), uDelegate::New(::TYPES[33/*Uno.Action<Fuse.Shapes.Shape, float>*/], (void*)Shape__SetSmoothness_fn), uDelegate::New(::TYPES[34/*Uno.Func<Fuse.Shapes.Shape, float>*/], (void*)Shape__GetSmoothness_fn), &ret6), ret6);
}

Shape_type* Shape_typeof()
{
    static uSStrong<Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 94;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Shape);
    options.TypeSize = sizeof(Shape_type);
    type = (Shape_type*)uClassType::New("Fuse.Shapes.Shape", options);
    type->SetBase(::g::Fuse::Elements::Element_typeof());
    type->fp_cctor_ = Shape__cctor_2_fn;
    type->fp_CalcRenderBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Rect*))Shape__CalcRenderBounds_fn;
    type->fp_get_HitTestLocalVisualBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::NodeBounds**))Shape__get_HitTestLocalVisualBounds_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*))Shape__OnDraw_fn;
    type->fp_OnResetStyle = (void(*)(::g::Fuse::Node*))Shape__OnResetStyle_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[25] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[26] = ::g::Uno::Action2_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[27] = ::g::Uno::Func1_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[28] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[29] = ::g::Uno::Action2_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[30] = ::g::Uno::Func1_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[31] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[32] = ::g::Uno::Action1_typeof()->MakeType(Shape_typeof());
    ::TYPES[33] = ::g::Uno::Action2_typeof()->MakeType(Shape_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[34] = ::g::Uno::Func1_typeof()->MakeType(Shape_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[35] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[36] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[37] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[38] = ::g::Fuse::Drawing::Stroke_typeof();
    ::TYPES[39] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[40] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[41] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[42] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[11] = ::g::Uno::Action_typeof();
    ::TYPES[43] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[44] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[45] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[46] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(Shape_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(Shape_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(Shape_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(Shape_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(Shape_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(Shape_type, interface5));
    type->SetFields(86,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()), offsetof(::g::Fuse::Shapes::Shape, _fills), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Shapes::Shape, _smoothness), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof()), offsetof(::g::Fuse::Shapes::Shape, _strokes), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()), offsetof(::g::Fuse::Shapes::Shape, _styleFills), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof()), offsetof(::g::Fuse::Shapes::Shape, _styleStrokes), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Brush_typeof()), (uintptr_t)&::g::Fuse::Shapes::Shape::FillProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Uno::Float_typeof()), (uintptr_t)&::g::Fuse::Shapes::Shape::SmoothnessProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Stroke_typeof()), (uintptr_t)&::g::Fuse::Shapes::Shape::StrokeProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("FillProperty", 91),
        new uField("SmoothnessProperty", 92),
        new uField("StrokeProperty", 93));
    type->Reflection.SetFunctions(12,
        new uFunction("AddStyleFill", NULL, (void*)Shape__AddStyleFill_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("AddStyleStroke", NULL, (void*)Shape__AddStyleStroke_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Stroke_typeof()),
        new uFunction("get_Fill", NULL, (void*)Shape__get_Fill_fn, 0, false, ::g::Fuse::Drawing::Brush_typeof(), 0),
        new uFunction("set_Fill", NULL, (void*)Shape__set_Fill_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("get_Fills", NULL, (void*)Shape__get_Fills_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()), 0),
        new uFunction("get_HasFills", NULL, (void*)Shape__get_HasFills_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasStrokes", NULL, (void*)Shape__get_HasStrokes_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Smoothness", NULL, (void*)Shape__get_Smoothness_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Smoothness", NULL, (void*)Shape__set_Smoothness_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Stroke", NULL, (void*)Shape__get_Stroke_fn, 0, false, ::g::Fuse::Drawing::Stroke_typeof(), 0),
        new uFunction("set_Stroke", NULL, (void*)Shape__set_Stroke_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Stroke_typeof()),
        new uFunction("get_Strokes", NULL, (void*)Shape__get_Strokes_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof()), 0));
    return type;
}

// protected generated Shape() :678
void Shape__ctor_2_fn(Shape* __this)
{
    __this->ctor_2();
}

// public void AddStyleFill(Fuse.Drawing.Brush b) :715
void Shape__AddStyleFill_fn(Shape* __this, ::g::Fuse::Drawing::Brush* b)
{
    __this->AddStyleFill(b);
}

// public void AddStyleStroke(Fuse.Drawing.Stroke s) :780
void Shape__AddStyleStroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s)
{
    __this->AddStyleStroke(s);
}

// protected override sealed Uno.Rect CalcRenderBounds() :827
void Shape__CalcRenderBounds_fn(Shape* __this, ::g::Uno::Rect* __retval)
{
    ::g::Fuse::Drawing::Stroke* ret7;
    ::g::Uno::Rect r = ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), __this->ActualSize());

    if (__this->HasStrokes())

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->Strokes()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[38/*Fuse.Drawing.Stroke*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Drawing::Stroke* stroke = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[37/*Uno.Collections.IEnumerator<Fuse.Drawing.Stroke>*/]), &ret7), ret7);
            float b = uPtr(stroke)->Offset() + uPtr(stroke)->Width();

            if (b > 0.0f)
                r = ::g::Uno::Rect__Inflate(r, b);
        }

    r = ::g::Uno::Rect__Inflate(r, __this->Smoothness() - 1.0f);
    return *__retval = r, void();
}

// public Fuse.Drawing.Brush get_Fill() :686
void Shape__get_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->Fill();
}

// public void set_Fill(Fuse.Drawing.Brush value) :687
void Shape__set_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->Fill(value);
}

// public Uno.Collections.IList<Fuse.Drawing.Brush> get_Fills() :707
void Shape__get_Fills_fn(Shape* __this, uObject** __retval)
{
    *__retval = __this->Fills();
}

// private static Fuse.Drawing.Brush GetFill(Fuse.Shapes.Shape s) :690
void Shape__GetFill_fn(Shape* s, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = Shape::GetFill(s);
}

// private static float GetSmoothness(Fuse.Shapes.Shape s) :820
void Shape__GetSmoothness_fn(Shape* s, float* __retval)
{
    *__retval = Shape::GetSmoothness(s);
}

// private static Fuse.Drawing.Stroke GetStroke(Fuse.Shapes.Shape s) :752
void Shape__GetStroke_fn(Shape* s, ::g::Fuse::Drawing::Stroke** __retval)
{
    *__retval = Shape::GetStroke(s);
}

// public bool get_HasFills() :741
void Shape__get_HasFills_fn(Shape* __this, bool* __retval)
{
    *__retval = __this->HasFills();
}

// public bool get_HasStrokes() :764
void Shape__get_HasStrokes_fn(Shape* __this, bool* __retval)
{
    *__retval = __this->HasStrokes();
}

// protected override sealed Fuse.NodeBounds get_HitTestLocalVisualBounds() :886
void Shape__get_HitTestLocalVisualBounds_fn(Shape* __this, ::g::Fuse::NodeBounds** __retval)
{
    return *__retval = ::g::Fuse::NodeBounds::Rect(::g::Uno::Float2__New1(0.0f), __this->ActualSize()), void();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :866
void Shape__OnDraw_fn(Shape* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Fuse::Drawing::Brush* ret10;
    ::g::Fuse::Drawing::Stroke* ret11;

    if (__this->HasFills())

        for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->Fills()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Drawing::Brush* fill = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[41/*Uno.Collections.IEnumerator<Fuse.Drawing.Brush>*/]), &ret10), ret10);
            __this->DrawFill(dc, fill);
        }

    if (__this->HasStrokes())

        for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->Strokes()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[38/*Fuse.Drawing.Stroke*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Drawing::Stroke* stroke = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[37/*Uno.Collections.IEnumerator<Fuse.Drawing.Stroke>*/]), &ret11), ret11);
            __this->DrawStroke(dc, stroke);
        }
}

// private void OnFillAdded(Fuse.Drawing.Brush f) :723
void Shape__OnFillAdded_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f)
{
    __this->OnFillAdded(f);
}

// private void OnFillRemoved(Fuse.Drawing.Brush f) :732
void Shape__OnFillRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f)
{
    __this->OnFillRemoved(f);
}

// protected override sealed void OnResetStyle() :845
void Shape__OnResetStyle_fn(Shape* __this)
{
    bool ret12;
    ::g::Fuse::Drawing::Brush* ret13;
    bool ret14;
    ::g::Fuse::Drawing::Stroke* ret15;

    if (__this->_styleFills != NULL)
    {
        for (int i = 0; i < uPtr(__this->_styleFills)->Count(); i++)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(__this->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof())), (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_styleFills), uCRef<int>(i), &ret13), ret13), &ret12);

        __this->_styleFills = NULL;
    }

    if (__this->_styleStrokes != NULL)
    {
        for (int i1 = 0; i1 < uPtr(__this->_styleStrokes)->Count(); i1++)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(__this->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[38/*Fuse.Drawing.Stroke*/])), (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_styleStrokes), uCRef<int>(i1), &ret15), ret15), &ret14);

        __this->_styleStrokes = NULL;
    }

    ::g::Fuse::Elements::Element__OnResetStyle_fn(__this);
}

// private void OnShadingChanged() :806
void Shape__OnShadingChanged_fn(Shape* __this)
{
    __this->OnShadingChanged();
}

// private static void OnSmoothnessChanged(Fuse.Shapes.Shape s) :821
void Shape__OnSmoothnessChanged_fn(Shape* s)
{
    Shape::OnSmoothnessChanged(s);
}

// private void OnStrokeAdded(Fuse.Drawing.Stroke s) :787
void Shape__OnStrokeAdded_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s)
{
    __this->OnStrokeAdded(s);
}

// private void OnStrokeChanged(Fuse.Drawing.Stroke s) :801
void Shape__OnStrokeChanged_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s)
{
    __this->OnStrokeChanged(s);
}

// private void OnStrokeRemoved(Fuse.Drawing.Stroke s) :794
void Shape__OnStrokeRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s)
{
    __this->OnStrokeRemoved(s);
}

// private static void SetFill(Fuse.Shapes.Shape s, Fuse.Drawing.Brush value) :696
void Shape__SetFill_fn(Shape* s, ::g::Fuse::Drawing::Brush* value)
{
    Shape::SetFill(s, value);
}

// private static void SetSmoothness(Fuse.Shapes.Shape s, float value) :819
void Shape__SetSmoothness_fn(Shape* s, float* value)
{
    Shape::SetSmoothness(s, *value);
}

// private static void SetStroke(Fuse.Shapes.Shape s, Fuse.Drawing.Stroke value) :758
void Shape__SetStroke_fn(Shape* s, ::g::Fuse::Drawing::Stroke* value)
{
    Shape::SetStroke(s, value);
}

// public float get_Smoothness() :816
void Shape__get_Smoothness_fn(Shape* __this, float* __retval)
{
    *__retval = __this->Smoothness();
}

// public void set_Smoothness(float value) :817
void Shape__set_Smoothness_fn(Shape* __this, float* value)
{
    __this->Smoothness(*value);
}

// public Fuse.Drawing.Stroke get_Stroke() :749
void Shape__get_Stroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke** __retval)
{
    *__retval = __this->Stroke();
}

// public void set_Stroke(Fuse.Drawing.Stroke value) :750
void Shape__set_Stroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* value)
{
    __this->Stroke(value);
}

// public Uno.Collections.IList<Fuse.Drawing.Stroke> get_Strokes() :772
void Shape__get_Strokes_fn(Shape* __this, uObject** __retval)
{
    *__retval = __this->Strokes();
}

uSStrong< ::g::Fuse::StyleProperty1*> Shape::FillProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Shape::SmoothnessProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Shape::StrokeProperty_;

// protected generated Shape() [instance] :678
void Shape::ctor_2()
{
    _smoothness = 1.0f;
    ctor_1();
}

// public void AddStyleFill(Fuse.Drawing.Brush b) [instance] :715
void Shape::AddStyleFill(::g::Fuse::Drawing::Brush* b)
{
    if (_styleFills == NULL)
        _styleFills = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[35/*Uno.Collections.List<Fuse.Drawing.Brush>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(_styleFills), b);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof())), b);
}

// public void AddStyleStroke(Fuse.Drawing.Stroke s) [instance] :780
void Shape::AddStyleStroke(::g::Fuse::Drawing::Stroke* s)
{
    if (_styleStrokes == NULL)
        _styleStrokes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[36/*Uno.Collections.List<Fuse.Drawing.Stroke>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(_styleStrokes), s);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[38/*Fuse.Drawing.Stroke*/])), s);
}

// public Fuse.Drawing.Brush get_Fill() [instance] :686
::g::Fuse::Drawing::Brush* Shape::Fill()
{
    return Shape::GetFill(this);
}

// public void set_Fill(Fuse.Drawing.Brush value) [instance] :687
void Shape::Fill(::g::Fuse::Drawing::Brush* value)
{
    Shape::SetFill(this, value);
}

// public Uno.Collections.IList<Fuse.Drawing.Brush> get_Fills() [instance] :707
uObject* Shape::Fills()
{
    if (_fills == NULL)
        _fills = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[39/*Uno.Collections.ObservableList<Fuse.Drawing.Brush>*/], uDelegate::New(::TYPES[44/*Uno.Action<Fuse.Drawing.Brush>*/], (void*)Shape__OnFillAdded_fn, this), uDelegate::New(::TYPES[44/*Uno.Action<Fuse.Drawing.Brush>*/], (void*)Shape__OnFillRemoved_fn, this)));

    return (uObject*)_fills;
}

// public bool get_HasFills() [instance] :741
bool Shape::HasFills()
{
    return (_fills != NULL) && (uPtr(_fills)->Count() > 0);
}

// public bool get_HasStrokes() [instance] :764
bool Shape::HasStrokes()
{
    return (_strokes != NULL) && (uPtr(_strokes)->Count() > 0);
}

// private void OnFillAdded(Fuse.Drawing.Brush f) [instance] :723
void Shape::OnFillAdded(::g::Fuse::Drawing::Brush* f)
{
    if (uIs(f, ::TYPES[42/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(f, ::TYPES[42/*Fuse.Drawing.DynamicBrush*/]))->add_ShadingChanged(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)Shape__OnShadingChanged_fn, this));

    OnShadingChanged();
}

// private void OnFillRemoved(Fuse.Drawing.Brush f) [instance] :732
void Shape::OnFillRemoved(::g::Fuse::Drawing::Brush* f)
{
    if (uIs(f, ::TYPES[42/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(f, ::TYPES[42/*Fuse.Drawing.DynamicBrush*/]))->remove_ShadingChanged(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)Shape__OnShadingChanged_fn, this));

    OnShadingChanged();
}

// private void OnShadingChanged() [instance] :806
void Shape::OnShadingChanged()
{
    InvalidateVisual();
}

// private void OnStrokeAdded(Fuse.Drawing.Stroke s) [instance] :787
void Shape::OnStrokeAdded(::g::Fuse::Drawing::Stroke* s)
{
    uPtr(s)->add_ShadingChanged(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)Shape__OnShadingChanged_fn, this));
    s->add_StrokeChanged(uDelegate::New(::TYPES[43/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)Shape__OnStrokeChanged_fn, this));
    OnStrokeChanged(s);
}

// private void OnStrokeChanged(Fuse.Drawing.Stroke s) [instance] :801
void Shape::OnStrokeChanged(::g::Fuse::Drawing::Stroke* s)
{
    InvalidateVisual();
}

// private void OnStrokeRemoved(Fuse.Drawing.Stroke s) [instance] :794
void Shape::OnStrokeRemoved(::g::Fuse::Drawing::Stroke* s)
{
    uPtr(s)->remove_ShadingChanged(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)Shape__OnShadingChanged_fn, this));
    s->remove_StrokeChanged(uDelegate::New(::TYPES[43/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)Shape__OnStrokeChanged_fn, this));
    OnStrokeChanged(s);
}

// public float get_Smoothness() [instance] :816
float Shape::Smoothness()
{
    return _smoothness;
}

// public void set_Smoothness(float value) [instance] :817
void Shape::Smoothness(float value)
{
    bool ret16;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Shape::SmoothnessProperty()), this, uCRef(value), &ret16);
}

// public Fuse.Drawing.Stroke get_Stroke() [instance] :749
::g::Fuse::Drawing::Stroke* Shape::Stroke()
{
    return Shape::GetStroke(this);
}

// public void set_Stroke(Fuse.Drawing.Stroke value) [instance] :750
void Shape::Stroke(::g::Fuse::Drawing::Stroke* value)
{
    Shape::SetStroke(this, value);
}

// public Uno.Collections.IList<Fuse.Drawing.Stroke> get_Strokes() [instance] :772
uObject* Shape::Strokes()
{
    if (_strokes == NULL)
        _strokes = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[40/*Uno.Collections.ObservableList<Fuse.Drawing.Stroke>*/], uDelegate::New(::TYPES[43/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)Shape__OnStrokeAdded_fn, this), uDelegate::New(::TYPES[43/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)Shape__OnStrokeRemoved_fn, this)));

    return (uObject*)_strokes;
}

// private static Fuse.Drawing.Brush GetFill(Fuse.Shapes.Shape s) [static] :690
::g::Fuse::Drawing::Brush* Shape::GetFill(Shape* s)
{
    Shape_typeof()->Init();
    ::g::Fuse::Drawing::Brush* ret8;

    if ((uPtr(s)->_fills == NULL) || (uPtr(uPtr(s)->_fills)->Count() == 0))
        return NULL;
    else
        return (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(uPtr(s)->_fills), uCRef<int>(0), &ret8), ret8);
}

// private static float GetSmoothness(Fuse.Shapes.Shape s) [static] :820
float Shape::GetSmoothness(Shape* s)
{
    Shape_typeof()->Init();
    return uPtr(s)->_smoothness;
}

// private static Fuse.Drawing.Stroke GetStroke(Fuse.Shapes.Shape s) [static] :752
::g::Fuse::Drawing::Stroke* Shape::GetStroke(Shape* s)
{
    Shape_typeof()->Init();
    ::g::Fuse::Drawing::Stroke* ret9;

    if ((uPtr(s)->_strokes == NULL) || (uPtr(uPtr(s)->_strokes)->Count() == 0))
        return NULL;

    return (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(uPtr(s)->_strokes), uCRef<int>(0), &ret9), ret9);
}

// private static void OnSmoothnessChanged(Fuse.Shapes.Shape s) [static] :821
void Shape::OnSmoothnessChanged(Shape* s)
{
    Shape_typeof()->Init();
    uPtr(s)->InvalidateVisual();
    s->InvalidateRenderBounds();
}

// private static void SetFill(Fuse.Shapes.Shape s, Fuse.Drawing.Brush value) [static] :696
void Shape::SetFill(Shape* s, ::g::Fuse::Drawing::Brush* value)
{
    Shape_typeof()->Init();
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(uPtr(s)->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof())));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(s->Fills()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof())), value);
}

// private static void SetSmoothness(Fuse.Shapes.Shape s, float value) [static] :819
void Shape::SetSmoothness(Shape* s, float value)
{
    Shape_typeof()->Init();
    uPtr(s)->_smoothness = value;
}

// private static void SetStroke(Fuse.Shapes.Shape s, Fuse.Drawing.Stroke value) [static] :758
void Shape::SetStroke(Shape* s, ::g::Fuse::Drawing::Stroke* value)
{
    Shape_typeof()->Init();
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(uPtr(s)->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[38/*Fuse.Drawing.Stroke*/])));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(s->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[38/*Fuse.Drawing.Stroke*/])), value);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Shapes\0.18.8\$.uno(1014)
// ----------------------------------------------------------

// public sealed class Star :1014
// {
::g::Fuse::Shapes::PathShape_type* Star_typeof()
{
    static uSStrong< ::g::Fuse::Shapes::PathShape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 96;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Star);
    options.TypeSize = sizeof(::g::Fuse::Shapes::PathShape_type);
    type = (::g::Fuse::Shapes::PathShape_type*)uClassType::New("Fuse.Shapes.Star", options);
    type->SetBase(::g::Fuse::Shapes::PathShape_typeof());
    type->fp_ctor_ = (void*)Star__New1_fn;
    type->fp_UpdatePath = (void(*)(::g::Fuse::Shapes::PathShape*))Star__UpdatePath_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[8] = ::g::Fuse::Drawing::PathGeometryRenderer_typeof();
    ::TYPES[9] = ::g::Fuse::Shapes::PathShape_typeof();
    ::TYPES[6] = ::g::Uno::Float2_typeof();
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Shapes::PathShape_type, interface5));
    type->SetFields(87,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Shapes::Star, _cachedDegrees), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Shapes::Star, _cachedPoints), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Shapes::Star, _cachedRadius), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Shapes::Star, _cachedRoundRatio), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Shapes::Star, _cachedSpokeRadius), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Shapes::Star, _degrees), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Shapes::Star, _points), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Shapes::Star, _ratio), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Shapes::Star, _roundRatio), 0);
    type->Reflection.SetFunctions(9,
        new uFunction(".ctor", NULL, (void*)Star__New1_fn, 0, true, Star_typeof(), 0),
        new uFunction("get_Points", NULL, (void*)Star__get_Points_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Points", NULL, (void*)Star__set_Points_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Ratio", NULL, (void*)Star__get_Ratio_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Ratio", NULL, (void*)Star__set_Ratio_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_RotationDegrees", NULL, (void*)Star__get_RotationDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_RotationDegrees", NULL, (void*)Star__set_RotationDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_RoundRatio", NULL, (void*)Star__get_RoundRatio_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_RoundRatio", NULL, (void*)Star__set_RoundRatio_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public generated Star() :1014
void Star__ctor_3_fn(Star* __this)
{
    __this->ctor_3();
}

// private float2 get__offset() :1018
void Star__get__offset_fn(Star* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->_offset();
}

// public generated Star New() :1014
void Star__New1_fn(Star** __retval)
{
    *__retval = Star::New1();
}

// public int get_Points() :1034
void Star__get_Points_fn(Star* __this, int* __retval)
{
    *__retval = __this->Points();
}

// public void set_Points(int value) :1035
void Star__set_Points_fn(Star* __this, int* value)
{
    __this->Points(*value);
}

// private float get_Radius() :1028
void Star__get_Radius_fn(Star* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// public float get_Ratio() :1046
void Star__get_Ratio_fn(Star* __this, float* __retval)
{
    *__retval = __this->Ratio();
}

// public void set_Ratio(float value) :1047
void Star__set_Ratio_fn(Star* __this, float* value)
{
    __this->Ratio(*value);
}

// public float get_RotationDegrees() :1083
void Star__get_RotationDegrees_fn(Star* __this, float* __retval)
{
    *__retval = __this->RotationDegrees();
}

// public void set_RotationDegrees(float value) :1084
void Star__set_RotationDegrees_fn(Star* __this, float* value)
{
    __this->RotationDegrees(*value);
}

// private float get_RotationRadians() :1095
void Star__get_RotationRadians_fn(Star* __this, float* __retval)
{
    *__retval = __this->RotationRadians();
}

// public float get_RoundRatio() :1059
void Star__get_RoundRatio_fn(Star* __this, float* __retval)
{
    *__retval = __this->RoundRatio();
}

// public void set_RoundRatio(float value) :1060
void Star__set_RoundRatio_fn(Star* __this, float* value)
{
    __this->RoundRatio(*value);
}

// private float get_SpokeRadius() :1071
void Star__get_SpokeRadius_fn(Star* __this, float* __retval)
{
    *__retval = __this->SpokeRadius();
}

// protected override sealed void UpdatePath() :1098
void Star__UpdatePath_fn(Star* __this)
{
    if (__this->_points < 3)
        return;

    if (((((__this->_cachedPoints == __this->_points) && (__this->_cachedRadius == __this->Radius())) && (__this->_cachedSpokeRadius == __this->SpokeRadius())) && (__this->_cachedDegrees == __this->RotationDegrees())) && (__this->_cachedRoundRatio == __this->RoundRatio()))
        return;

    __this->_cachedPoints = __this->_points;
    __this->_cachedRadius = __this->Radius();
    __this->_cachedSpokeRadius = __this->SpokeRadius();
    __this->_cachedDegrees = __this->RotationDegrees();
    __this->_cachedRoundRatio = __this->RoundRatio();
    __this->InvalidateRenderBounds();
    uPtr(__this->Renderer())->Geometry(::g::Fuse::Drawing::PathGeometryExtensions::Star(::g::Fuse::Drawing::PathGeometry::New1()->MoveTo1(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New1(__this->Radius()), __this->_offset())), __this->_points, __this->Radius(), __this->SpokeRadius(), __this->RoundRatio(), __this->RotationRadians()));
}

// public generated Star() [instance] :1014
void Star::ctor_3()
{
    _points = 5;
    _ratio = 0.5f;
    _degrees = 0.0f;
    ctor_2();
}

// private float2 get__offset() [instance] :1018
::g::Uno::Float2 Star::_offset()
{
    return (ActualSize().X > ActualSize().Y) ? ::g::Uno::Float2__New2((ActualSize().X * 0.5f) - (ActualSize().Y * 0.5f), 0.0f) : ::g::Uno::Float2__New2(0.0f, (ActualSize().Y * 0.5f) - (ActualSize().X * 0.5f));
}

// public int get_Points() [instance] :1034
int Star::Points()
{
    return _points;
}

// public void set_Points(int value) [instance] :1035
void Star::Points(int value)
{
    if (value == _points)
        return;

    _points = value;
    InvalidateVisual();
}

// private float get_Radius() [instance] :1028
float Star::Radius()
{
    return ::g::Uno::Math::Min1(ActualSize().X, ActualSize().Y) * 0.5f;
}

// public float get_Ratio() [instance] :1046
float Star::Ratio()
{
    return _ratio;
}

// public void set_Ratio(float value) [instance] :1047
void Star::Ratio(float value)
{
    if (value == _ratio)
        return;

    _ratio = value;
    InvalidateVisual();
}

// public float get_RotationDegrees() [instance] :1083
float Star::RotationDegrees()
{
    return _degrees;
}

// public void set_RotationDegrees(float value) [instance] :1084
void Star::RotationDegrees(float value)
{
    if (value == _degrees)
        return;

    _degrees = value;
    InvalidateVisual();
}

// private float get_RotationRadians() [instance] :1095
float Star::RotationRadians()
{
    return (_degrees / 180.0f) * 3.14159274f;
}

// public float get_RoundRatio() [instance] :1059
float Star::RoundRatio()
{
    return _roundRatio;
}

// public void set_RoundRatio(float value) [instance] :1060
void Star::RoundRatio(float value)
{
    if (value == _roundRatio)
        return;

    _roundRatio = value;
    InvalidateVisual();
}

// private float get_SpokeRadius() [instance] :1071
float Star::SpokeRadius()
{
    return Radius() * Ratio();
}

// public generated Star New() [static] :1014
Star* Star::New1()
{
    Star* obj1 = (Star*)uNew(Star_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

}}} // ::g::Fuse::Shapes
