// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Fuse_Controls_bundle.h>
#include <_root.Fuse_Elements_bundle.h>
#include <Fuse.CacheFramebuffer.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.Effects.EffectType.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.AlignmentHelpers.h>
#include <Fuse.Elements.BoxPlacement.h>
#include <Fuse.Elements.BoxSizing.h>
#include <Fuse.Elements.Cache.h>
#include <Fuse.Elements.CacheHelper.h>
#include <Fuse.Elements.CacheTile.h>
#include <Fuse.Elements.CachingMode.h>
#include <Fuse.Elements.DisplayHelpers.h>
#include <Fuse.Elements.Element.BoxSizingMode.h>
#include <Fuse.Elements.Element.GMSCacheItem.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.ElementAtlas.h>
#include <Fuse.Elements.ElementAtlasFramebuffer.h>
#include <Fuse.Elements.ElementAtlasFramebufferPool.h>
#include <Fuse.Elements.ElementAtlasFramebufferPoolEntry.h>
#include <Fuse.Elements.ElementAtlasFramebufferPoolImpl.h>
#include <Fuse.Elements.ElementBatch.h>
#include <Fuse.Elements.ElementBatchEntry.h>
#include <Fuse.Elements.ElementBatcher.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.IElementBatchDrawable.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.LayoutMasterBoxSizing.h>
#include <Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData.h>
#include <Fuse.Elements.LayoutMasterMode.h>
#include <Fuse.Elements.LimitBoxSizing.h>
#include <Fuse.Elements.NoImplicitMaxBoxSizing.h>
#include <Fuse.Elements.PreplacementArgs.h>
#include <Fuse.Elements.PreplacementHandler.h>
#include <Fuse.Elements.SimpleAlignment.h>
#include <Fuse.Elements.SingleNodeDrawable.h>
#include <Fuse.Elements.SizeUnit.h>
#include <Fuse.Elements.StandardBoxSizing.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Elements.TextureAtlas.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.Elements.TransformOrigins.AnchorOrigin.h>
#include <Fuse.Elements.TransformOrigins.BoxCenter.h>
#include <Fuse.Elements.TransformOrigins.CenterOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TransformOrigins.TopLeftOrigin.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.Elements.TranslationModes.OffsetMode.h>
#include <Fuse.Elements.TranslationModes.PositionOffsetMode.h>
#include <Fuse.Elements.TranslationModes.SizeFactorMode.h>
#include <Fuse.Elements.TranslationModes.TransformOriginOffsetMode.h>
#include <Fuse.Elements.Viewport.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.FixedViewport.h>
#include <Fuse.FramebufferPool.h>
#include <Fuse.FrustumViewport.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.IFrustum.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutDependent.h>
#include <Fuse.Node.h>
#include <Fuse.NodeBounds.h>
#include <Fuse.OrthographicFrustum.h>
#include <Fuse.PerspectiveFrustum.h>
#include <Fuse.PlacedArgs.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Resources.DisposalManager.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scaling.h>
#include <Fuse.SizeFlags.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.StylePropertyWithUnit-3.h>
#include <Fuse.Transform.h>
#include <Fuse.TransformModeFlags.h>
#include <Fuse.Translation.h>
#include <Fuse.UpdateManager.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.LinkedList-1.h>
#include <Uno.Collections.LinkedListNode-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-2.h>
#include <Uno.Geometry.Ray.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.FramebufferFlags.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.RenderTarget.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
#include <Uno.Vector.h>
static uString* STRINGS[18];
static uType* TYPES[107];

namespace g{
namespace Fuse{
namespace Elements{

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1892)
// ------------------------------------------------------------

// public enum Alignment :1892
uEnumType* Alignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.Alignment", ::g::Uno::Int_typeof(), 16);
    type->SetLiterals(
        "Default", 0LL,
        "Left", 1LL,
        "HorizontalCenter", 2LL,
        "Right", 3LL,
        "Top", 4LL,
        "VerticalCenter", 8LL,
        "Bottom", 12LL,
        "TopLeft", 5LL,
        "TopCenter", 6LL,
        "TopRight", 7LL,
        "CenterLeft", 9LL,
        "Center", 10LL,
        "CenterRight", 11LL,
        "BottomLeft", 13LL,
        "BottomCenter", 14LL,
        "BottomRight", 15LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1917)
// ------------------------------------------------------------

// public static class AlignmentHelpers :1917
// {
uClassType* AlignmentHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.AlignmentHelpers", options);
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[1] = ::g::Fuse::Elements::Alignment_typeof();
    type->Reflection.SetFunctions(3,
        new uFunction("GetAnchor", NULL, (void*)AlignmentHelpers__GetAnchor_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("GetHorizontalAlign", NULL, (void*)AlignmentHelpers__GetHorizontalAlign_fn, 0, true, ::g::Fuse::Elements::Alignment_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("GetVerticalAlign", NULL, (void*)AlignmentHelpers__GetVerticalAlign_fn, 0, true, ::g::Fuse::Elements::Alignment_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()));
    return type;
}

// public static float2 GetAnchor(Fuse.Elements.Alignment a) :1928
void AlignmentHelpers__GetAnchor_fn(int* a, ::g::Uno::Float2* __retval)
{
    *__retval = AlignmentHelpers::GetAnchor(*a);
}

// public static Fuse.Elements.Alignment GetHorizontalAlign(Fuse.Elements.Alignment a) :1923
void AlignmentHelpers__GetHorizontalAlign_fn(int* a, int* __retval)
{
    *__retval = AlignmentHelpers::GetHorizontalAlign(*a);
}

// internal static Fuse.Elements.SimpleAlignment GetHorizontalSimpleAlign(Fuse.Elements.Alignment a) :1951
void AlignmentHelpers__GetHorizontalSimpleAlign_fn(int* a, int* __retval)
{
    *__retval = AlignmentHelpers::GetHorizontalSimpleAlign(*a);
}

// public static Fuse.Elements.Alignment GetVerticalAlign(Fuse.Elements.Alignment a) :1919
void AlignmentHelpers__GetVerticalAlign_fn(int* a, int* __retval)
{
    *__retval = AlignmentHelpers::GetVerticalAlign(*a);
}

// internal static Fuse.Elements.SimpleAlignment GetVerticalSimpleAlign(Fuse.Elements.Alignment a) :1941
void AlignmentHelpers__GetVerticalSimpleAlign_fn(int* a, int* __retval)
{
    *__retval = AlignmentHelpers::GetVerticalSimpleAlign(*a);
}

// public static float2 GetAnchor(Fuse.Elements.Alignment a) [static] :1928
::g::Uno::Float2 AlignmentHelpers::GetAnchor(int a)
{
    int h = AlignmentHelpers::GetHorizontalAlign(a);
    float x = (h == 1) ? 0.0f : (h == 3) ? 1.0f : 0.5f;
    int v = AlignmentHelpers::GetVerticalAlign(a);
    float y = (v == 4) ? 0.0f : (v == 12) ? 1.0f : 0.5f;
    return ::g::Uno::Float2__New2(x, y);
}

// public static Fuse.Elements.Alignment GetHorizontalAlign(Fuse.Elements.Alignment a) [static] :1923
int AlignmentHelpers::GetHorizontalAlign(int a)
{
    return a & 3;
}

// internal static Fuse.Elements.SimpleAlignment GetHorizontalSimpleAlign(Fuse.Elements.Alignment a) [static] :1951
int AlignmentHelpers::GetHorizontalSimpleAlign(int a)
{
    int raw = AlignmentHelpers::GetHorizontalAlign(a);

    if (raw == 3)
        return 2;

    if (raw == 2)
        return 1;

    return 0;
}

// public static Fuse.Elements.Alignment GetVerticalAlign(Fuse.Elements.Alignment a) [static] :1919
int AlignmentHelpers::GetVerticalAlign(int a)
{
    return a & 12;
}

// internal static Fuse.Elements.SimpleAlignment GetVerticalSimpleAlign(Fuse.Elements.Alignment a) [static] :1941
int AlignmentHelpers::GetVerticalSimpleAlign(int a)
{
    int raw = AlignmentHelpers::GetVerticalAlign(a);

    if (raw == 12)
        return 2;

    if (raw == 8)
        return 1;

    return 0;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1674)
// ------------------------------------------------------------

// private sealed class TransformOrigins.AnchorOrigin :1674
// {
TransformOrigins__AnchorOrigin_type* TransformOrigins__AnchorOrigin_typeof()
{
    static uSStrong<TransformOrigins__AnchorOrigin_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TransformOrigins__AnchorOrigin);
    options.TypeSize = sizeof(TransformOrigins__AnchorOrigin_type);
    type = (TransformOrigins__AnchorOrigin_type*)uClassType::New("Fuse.Elements.TransformOrigins.AnchorOrigin", options);
    type->fp_ctor_ = (void*)TransformOrigins__AnchorOrigin__New1_fn;
    type->interface0.fp_GetOffset = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TransformOrigins__AnchorOrigin__GetOffset_fn;
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(TransformOrigins__AnchorOrigin_type, interface0));
    return type;
}

// public generated AnchorOrigin() :1674
void TransformOrigins__AnchorOrigin__ctor__fn(TransformOrigins__AnchorOrigin* __this)
{
    __this->ctor_();
}

// public float3 GetOffset(Fuse.Elements.Element elm) :1676
void TransformOrigins__AnchorOrigin__GetOffset_fn(TransformOrigins__AnchorOrigin* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetOffset(elm);
}

// public generated AnchorOrigin New() :1674
void TransformOrigins__AnchorOrigin__New1_fn(TransformOrigins__AnchorOrigin** __retval)
{
    *__retval = TransformOrigins__AnchorOrigin::New1();
}

// public generated AnchorOrigin() [instance] :1674
void TransformOrigins__AnchorOrigin::ctor_()
{
}

// public float3 GetOffset(Fuse.Elements.Element elm) [instance] :1676
::g::Uno::Float3 TransformOrigins__AnchorOrigin::GetOffset(::g::Fuse::Elements::Element* elm)
{
    return ::g::Uno::Float3__New4(uPtr(elm)->ActualAnchor(), 0.0f);
}

// public generated AnchorOrigin New() [static] :1674
TransformOrigins__AnchorOrigin* TransformOrigins__AnchorOrigin::New1()
{
    TransformOrigins__AnchorOrigin* obj1 = (TransformOrigins__AnchorOrigin*)uNew(TransformOrigins__AnchorOrigin_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1679)
// ------------------------------------------------------------

// private sealed class TransformOrigins.BoxCenter :1679
// {
TransformOrigins__BoxCenter_type* TransformOrigins__BoxCenter_typeof()
{
    static uSStrong<TransformOrigins__BoxCenter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TransformOrigins__BoxCenter);
    options.TypeSize = sizeof(TransformOrigins__BoxCenter_type);
    type = (TransformOrigins__BoxCenter_type*)uClassType::New("Fuse.Elements.TransformOrigins.BoxCenter", options);
    type->fp_ctor_ = (void*)TransformOrigins__BoxCenter__New1_fn;
    type->interface0.fp_GetOffset = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TransformOrigins__BoxCenter__GetOffset_fn;
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(TransformOrigins__BoxCenter_type, interface0));
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::TransformOrigins__BoxCenter, Depth), 0);
    return type;
}

// public generated BoxCenter() :1679
void TransformOrigins__BoxCenter__ctor__fn(TransformOrigins__BoxCenter* __this)
{
    __this->ctor_();
}

// public float3 GetOffset(Fuse.Elements.Element elm) :1683
void TransformOrigins__BoxCenter__GetOffset_fn(TransformOrigins__BoxCenter* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetOffset(elm);
}

// public generated BoxCenter New() :1679
void TransformOrigins__BoxCenter__New1_fn(TransformOrigins__BoxCenter** __retval)
{
    *__retval = TransformOrigins__BoxCenter::New1();
}

// public generated BoxCenter() [instance] :1679
void TransformOrigins__BoxCenter::ctor_()
{
}

// public float3 GetOffset(Fuse.Elements.Element elm) [instance] :1683
::g::Uno::Float3 TransformOrigins__BoxCenter::GetOffset(::g::Fuse::Elements::Element* elm)
{
    float depth = ::g::Uno::Vector::Dot(Depth, uPtr(elm)->ActualSize());
    ::g::Uno::Float3 q = ::g::Uno::Float3__New4(::g::Uno::Float2__op_Division1(elm->ActualSize(), 2.0f), depth / 2.0f);
    return q;
}

// public generated BoxCenter New() [static] :1679
TransformOrigins__BoxCenter* TransformOrigins__BoxCenter::New1()
{
    TransformOrigins__BoxCenter* obj1 = (TransformOrigins__BoxCenter*)uNew(TransformOrigins__BoxCenter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(11)
// ----------------------------------------------------------

// public struct BoxPlacement :11
// {
uStructType* BoxPlacement_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(BoxPlacement);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Elements.BoxPlacement", options);
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::BoxPlacement, MarginBox), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::BoxPlacement, Position), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::BoxPlacement, Size), 0);
    type->Reflection.SetFields(3,
        new uField("MarginBox", 0),
        new uField("Position", 1),
        new uField("Size", 2));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(18)
// ----------------------------------------------------------

// internal abstract class BoxSizing :18
// {
BoxSizing_type* BoxSizing_typeof()
{
    static uSStrong<BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(BoxSizing);
    options.TypeSize = sizeof(BoxSizing_type);
    type = (BoxSizing_type*)uClassType::New("Fuse.Elements.BoxSizing", options);
    type->fp_IsContentRelativeSize = BoxSizing__IsContentRelativeSize_fn;
    type->fp_RequestLayout = BoxSizing__RequestLayout_fn;
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[3] = ::g::Uno::Float2_typeof();
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[4] = ::g::Fuse::Node_typeof();
    return type;
}

// protected generated BoxSizing() :18
void BoxSizing__ctor__fn(BoxSizing* __this)
{
    __this->ctor_();
}

// protected void EffectiveAnchor(Fuse.Elements.Element element, Fuse.Elements.SimpleAlignment halign, Fuse.Elements.SimpleAlignment valign, float2& anchor, Fuse.Elements.SizeUnit& unit) :91
void BoxSizing__EffectiveAnchor_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int* halign, int* valign, ::g::Uno::Float2* anchor, int* unit)
{
    __this->EffectiveAnchor(element, *halign, *valign, anchor, unit);
}

// protected Fuse.Elements.SimpleAlignment EffectiveHorizontalAlignment(Fuse.Elements.Element element) :48
void BoxSizing__EffectiveHorizontalAlignment_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval)
{
    *__retval = __this->EffectiveHorizontalAlignment(element);
}

// protected Fuse.Elements.SimpleAlignment EffectiveVerticalAlignment(Fuse.Elements.Element element) :65
void BoxSizing__EffectiveVerticalAlignment_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval)
{
    *__retval = __this->EffectiveVerticalAlignment(element);
}

// public virtual Fuse.LayoutDependent IsContentRelativeSize(Fuse.Elements.Element element) :25
void BoxSizing__IsContentRelativeSize_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval)
{
    return *__retval = 4, void();
}

// public virtual void RequestLayout(Fuse.Elements.Element element) :23
void BoxSizing__RequestLayout_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element)
{
}

// protected float SimpleToAnchor(Fuse.Elements.SimpleAlignment align) :82
void BoxSizing__SimpleToAnchor_fn(BoxSizing* __this, int* align, float* __retval)
{
    *__retval = __this->SimpleToAnchor(*align);
}

// protected float UnitSize(Fuse.Elements.Element element, float scalar, Fuse.Elements.SizeUnit unit, float fill, bool secondary, bool& known) :31
void BoxSizing__UnitSize_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, float* scalar, int* unit, float* fill, bool* secondary, bool* known, float* __retval)
{
    *__retval = __this->UnitSize(element, *scalar, *unit, *fill, *secondary, known);
}

// protected generated BoxSizing() [instance] :18
void BoxSizing::ctor_()
{
}

// protected void EffectiveAnchor(Fuse.Elements.Element element, Fuse.Elements.SimpleAlignment halign, Fuse.Elements.SimpleAlignment valign, float2& anchor, Fuse.Elements.SizeUnit& unit) [instance] :91
void BoxSizing::EffectiveAnchor(::g::Fuse::Elements::Element* element, int halign, int valign, ::g::Uno::Float2* anchor, int* unit)
{
    bool ret1;
    int ret2;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::AnchorProperty()), element, &ret1), ret1))
    {
        *anchor = uPtr(element)->Anchor();
        *unit = (::g::Fuse::StylePropertyWithUnit__GetUnit_fn(uPtr(::g::Fuse::Elements::Element::AnchorProperty()), element, &ret2), ret2);
        return;
    }

    (*anchor).X = SimpleToAnchor(halign);
    (*anchor).Y = SimpleToAnchor(valign);
    *unit = 1;
}

// protected Fuse.Elements.SimpleAlignment EffectiveHorizontalAlignment(Fuse.Elements.Element element) [instance] :48
int BoxSizing::EffectiveHorizontalAlignment(::g::Fuse::Elements::Element* element)
{
    bool ret3;
    int raw = ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalAlign(uPtr(element)->Alignment());

    if (raw == 1)
        return 0;

    if (raw == 3)
        return 2;

    if (raw == 2)
        return 1;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::XProperty()), element, &ret3), ret3))
        return 0;

    return 1;
}

// protected Fuse.Elements.SimpleAlignment EffectiveVerticalAlignment(Fuse.Elements.Element element) [instance] :65
int BoxSizing::EffectiveVerticalAlignment(::g::Fuse::Elements::Element* element)
{
    bool ret4;
    int raw = ::g::Fuse::Elements::AlignmentHelpers::GetVerticalAlign(uPtr(element)->Alignment());

    if (raw == 4)
        return 0;

    if (raw == 12)
        return 2;

    if (raw == 8)
        return 1;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::YProperty()), element, &ret4), ret4))
        return 0;

    return 1;
}

// protected float SimpleToAnchor(Fuse.Elements.SimpleAlignment align) [instance] :82
float BoxSizing::SimpleToAnchor(int align)
{
    if (align == 0)
        return 0.0f;

    if (align == 2)
        return 100.0f;

    return 50.0f;
}

// protected float UnitSize(Fuse.Elements.Element element, float scalar, Fuse.Elements.SizeUnit unit, float fill, bool secondary, bool& known) [instance] :31
float BoxSizing::UnitSize(::g::Fuse::Elements::Element* element, float scalar, int unit, float fill, bool secondary, bool* known)
{
    *known = true;

    if (unit == 0)
        return scalar;

    if (unit == 2)
        return scalar / uPtr(element)->AbsoluteZoom();

    if (secondary)
        return (scalar * fill) / 100.0f;

    *known = false;
    return 0.0f;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1313)
// ------------------------------------------------------------

// public enum Element.BoxSizingMode :1313
uEnumType* Element__BoxSizingMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.Element.BoxSizingMode", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Standard", 0LL,
        "NoImplicitMax", 1LL,
        "Limit", 2LL,
        "LayoutMaster", 3LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Caching\$.uno(11)
// ------------------------------------------------------------------

// internal partial sealed class Cache :11
// {
// static Cache() :11
static void Cache__cctor__fn(uType* __type)
{
    Cache::cacheHelper_ = ::g::Fuse::Elements::CacheHelper::New1();
}

uType* Cache_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Cache);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.Cache", options);
    type->fp_cctor_ = Cache__cctor__fn;
    ::STRINGS[0] = uString::Const("invalid PinAndValidate");
    ::STRINGS[1] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Elements\\0.19.3\\Caching\\$.uno");
    ::STRINGS[2] = uString::Const("PinAndValidate");
    ::TYPES[5] = ::g::Uno::Float_typeof();
    ::TYPES[6] = ::g::Uno::Recti_typeof();
    ::TYPES[4] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Uno::Rect_typeof();
    ::TYPES[8] = ::g::Uno::Int2_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[10] = ::g::Uno::Double_typeof();
    ::TYPES[11] = ::g::Uno::Graphics::RenderTarget_typeof();
    ::TYPES[12] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[13] = ::g::Fuse::RootViewport_typeof();
    ::TYPES[14] = uObject_typeof();
    ::TYPES[15] = ::g::Fuse::Elements::CacheTile_typeof()->Array();
    ::TYPES[16] = ::g::Fuse::Elements::CacheTile_typeof();
    ::TYPES[17] = ::g::Fuse::CacheFramebuffer_typeof();
    ::TYPES[18] = ::g::Fuse::OrthographicFrustum_typeof();
    ::TYPES[19] = ::g::Fuse::IFrustum_typeof();
    ::TYPES[20] = ::g::Uno::Graphics::Texture2D_typeof();
    type->SetFields(0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Elements::Cache, _cacheRect), 0,
        ::g::Fuse::Elements::CacheTile_typeof()->Array(), offsetof(::g::Fuse::Elements::Cache, _cacheTiles), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Elements::Cache, _element), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Cache, _isValid), 0,
        ::g::Fuse::Elements::CacheHelper_typeof(), (uintptr_t)&::g::Fuse::Elements::Cache::cacheHelper_, uFieldFlagsStatic);
    return type;
}

// public Cache(Fuse.Elements.Element elm) :135
void Cache__ctor__fn(Cache* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->ctor_(elm);
}

// public void Blit(Fuse.DrawContext dc, float opacity) :283
void Cache__Blit_fn(Cache* __this, ::g::Fuse::DrawContext* dc, float* opacity)
{
    __this->Blit(dc, *opacity);
}

// public Fuse.Elements.CacheTile[] get_CacheTiles() :133
void Cache__get_CacheTiles_fn(Cache* __this, uArray** __retval)
{
    *__retval = __this->CacheTiles();
}

// internal float4x4 CalculateCompositMatrix(Fuse.DrawContext dc, Uno.Recti cachingRect) :193
void Cache__CalculateCompositMatrix_fn(Cache* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Recti* cachingRect, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->CalculateCompositMatrix(dc, *cachingRect);
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) :160
void Cache__ConservativelySnapToCoveringIntegers_fn(::g::Uno::Rect* r, ::g::Uno::Recti* __retval)
{
    *__retval = Cache::ConservativelySnapToCoveringIntegers(*r);
}

// internal void DrawHeuristically(Fuse.DrawContext dc) :146
void Cache__DrawHeuristically_fn(Cache* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawHeuristically(dc);
}

// private bool GetCachePreference(Fuse.DrawContext dc) :13
void Cache__GetCachePreference_fn(Cache* __this, ::g::Fuse::DrawContext* dc, bool* __retval)
{
    *__retval = __this->GetCachePreference(dc);
}

// private bool GetCachePreferenceCore(Fuse.DrawContext dc) :75
void Cache__GetCachePreferenceCore_fn(Cache* __this, ::g::Fuse::DrawContext* dc, bool* __retval)
{
    *__retval = __this->GetCachePreferenceCore(dc);
}

// internal bool GetCachingRect(Fuse.DrawContext dc, Uno.Recti& rect) :174
void Cache__GetCachingRect_fn(Cache* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Recti* rect, bool* __retval)
{
    *__retval = __this->GetCachingRect(dc, rect);
}

// internal static bool GetCachingRect(Fuse.Elements.Element elm, Uno.Recti& rect) :179
void Cache__GetCachingRect1_fn(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* rect, bool* __retval)
{
    *__retval = Cache::GetCachingRect1(elm, rect);
}

// internal void Invalidate() :141
void Cache__Invalidate_fn(Cache* __this)
{
    __this->Invalidate();
}

// internal int get_MaxTileSize() :199
void Cache__get_MaxTileSize_fn(Cache* __this, int* __retval)
{
    *__retval = __this->MaxTileSize();
}

// public Cache New(Fuse.Elements.Element elm) :135
void Cache__New1_fn(::g::Fuse::Elements::Element* elm, Cache** __retval)
{
    *__retval = Cache::New1(elm);
}

// internal void PinAndValidate(Fuse.DrawContext dc) :201
void Cache__PinAndValidate_fn(Cache* __this, ::g::Fuse::DrawContext* dc)
{
    __this->PinAndValidate(dc);
}

// private void Repaint(Fuse.DrawContext dc, Fuse.Elements.CacheTile tile) :258
void Cache__Repaint_fn(Cache* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::CacheTile* tile)
{
    __this->Repaint(dc, *tile);
}

// internal void Unpin() :250
void Cache__Unpin_fn(Cache* __this)
{
    __this->Unpin();
}

uSStrong< ::g::Fuse::Elements::CacheHelper*> Cache::cacheHelper_;

// public Cache(Fuse.Elements.Element elm) [instance] :135
void Cache::ctor_(::g::Fuse::Elements::Element* elm)
{
    _element = elm;

    if (_element == NULL)
        U_THROW(::g::Uno::Exception::New1());
}

// public void Blit(Fuse.DrawContext dc, float opacity) [instance] :283
void Cache::Blit(::g::Fuse::DrawContext* dc, float opacity)
{
    uPtr(Cache::cacheHelper())->Blit(dc, this, opacity);
}

// public Fuse.Elements.CacheTile[] get_CacheTiles() [instance] :133
uArray* Cache::CacheTiles()
{
    return _cacheTiles;
}

// internal float4x4 CalculateCompositMatrix(Fuse.DrawContext dc, Uno.Recti cachingRect) [instance] :193
::g::Uno::Float4x4 Cache::CalculateCompositMatrix(::g::Fuse::DrawContext* dc, ::g::Uno::Recti cachingRect)
{
    ::g::Uno::Float4x4 translation = ::g::Uno::Matrix::Translation((float)cachingRect.Left / uPtr(_element)->AbsoluteZoom(), (float)cachingRect.Top / uPtr(_element)->AbsoluteZoom(), 0.0f);
    return ::g::Uno::Matrix::Mul8(translation, uPtr(_element)->WorldTransform());
}

// internal void DrawHeuristically(Fuse.DrawContext dc) [instance] :146
void Cache::DrawHeuristically(::g::Fuse::DrawContext* dc)
{
    if (GetCachePreference(dc))
    {
        PinAndValidate(dc);
        Blit(dc, uPtr(_element)->Opacity());
        Unpin();
    }
    else
        uPtr(_element)->CompositEffects(dc);
}

// private bool GetCachePreference(Fuse.DrawContext dc) [instance] :13
bool Cache::GetCachePreference(::g::Fuse::DrawContext* dc)
{
    bool flat = uPtr(_element)->IsFlat() && uPtr(_element)->IsLocalFlat();

    if (!flat)
        return false;

    ::g::Uno::Recti cachingRect;

    if (!GetCachingRect(dc, &cachingRect))
        return false;

    switch (uPtr(_element)->CachingMode())
    {
        case 2:
            return false;
        case 1:
            return true;
    }

    if (((double)cachingRect.Size().X > ((double)uPtr(uPtr(dc)->RenderTarget())->Size().X * 1.2)) || ((double)cachingRect.Size().Y > ((double)uPtr(uPtr(dc)->RenderTarget())->Size().Y * 1.2)))
        return false;

    if (uIs(uPtr(_element)->Parent(), ::TYPES[13/*Fuse.RootViewport*/]))
        ;
    else if (uPtr(_element)->Parent() == NULL)
        return GetCachePreferenceCore(dc);
    else
    {
        if (uPtr(_element)->DrawCost() > 1.0)
            return GetCachePreferenceCore(dc);
        else
            ;
    }

    return false;
}

// private bool GetCachePreferenceCore(Fuse.DrawContext dc) [instance] :75
bool Cache::GetCachePreferenceCore(::g::Fuse::DrawContext* dc)
{
    if (uPtr(_element)->ValidFrameCount() > 0)
    {
        if (!uPtr(dc)->IsCaching())
            return true;
        else
            ;
    }
    else
        ;

    return false;
}

// internal bool GetCachingRect(Fuse.DrawContext dc, Uno.Recti& rect) [instance] :174
bool Cache::GetCachingRect(::g::Fuse::DrawContext* dc, ::g::Uno::Recti* rect)
{
    return Cache::GetCachingRect1(_element, rect);
}

// internal void Invalidate() [instance] :141
void Cache::Invalidate()
{
    _isValid = false;
}

// internal int get_MaxTileSize() [instance] :199
int Cache::MaxTileSize()
{
    return ::g::Uno::Graphics::Texture2D::MaxSize();
}

// internal void PinAndValidate(Fuse.DrawContext dc) [instance] :201
void Cache::PinAndValidate(::g::Fuse::DrawContext* dc)
{
    ::g::Uno::Recti cacheRect;

    if (!GetCachingRect(dc, &cacheRect))
    {
        ::g::Fuse::Diagnostics::Error(::STRINGS[0/*"invalid Pin...*/], _element, ::STRINGS[1/*"C:\\Program...*/], 206, ::STRINGS[2/*"PinAndValid...*/]);
        return;
    }

    if (!::g::Uno::Recti::Equals2(cacheRect, _cacheRect))
    {
        int numTilesX = ((cacheRect.Size().X + MaxTileSize()) - 1) / MaxTileSize();
        int numTilesY = ((cacheRect.Size().Y + MaxTileSize()) - 1) / MaxTileSize();
        int numTiles = numTilesX * numTilesY;

        if ((_cacheTiles == NULL) || (numTiles != uPtr(_cacheTiles)->Length()))
            _cacheTiles = uArray::New(::TYPES[15/*Fuse.Elements.CacheTile[]*/], numTiles);

        for (int y = 0; y < numTilesY; ++y)

            for (int x = 0; x < numTilesX; ++x)
            {
                int tile = x + (y * numTilesX);
                ::g::Uno::Int2 Position = ::g::Uno::Int2__New2(x * MaxTileSize(), y * MaxTileSize());
                uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(tile)._rect = ::g::Uno::Recti__New1(cacheRect.Left + Position.X, cacheRect.Top + Position.Y, (cacheRect.Left + Position.X) + ::g::Uno::Math::Min8(cacheRect.Size().X - Position.X, MaxTileSize()), (cacheRect.Top + Position.Y) + ::g::Uno::Math::Min8(cacheRect.Size().Y - Position.Y, MaxTileSize()));
            }
    }

    for (int i = 0; i < uPtr(_cacheTiles)->Length(); ++i)
    {
        uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i).EnsureHasFramebuffer(_element);
        uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i)._compositMatrix = CalculateCompositMatrix(dc, uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i)._rect);
        uPtr(uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i)._framebuffer)->Pin();

        if (!uPtr(uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i)._framebuffer)->IsContentValid() || !_isValid)
            Repaint(dc, uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i));
    }

    _isValid = true;
}

// private void Repaint(Fuse.DrawContext dc, Fuse.Elements.CacheTile tile) [instance] :258
void Cache::Repaint(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::CacheTile tile)
{
    ::g::Fuse::OrthographicFrustum* collection4;
    collection4 = ::g::Fuse::OrthographicFrustum::New1();
    ::g::Uno::Float2 ind5 = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)tile._rect.Minimum().X, (float)tile._rect.Minimum().Y), uPtr(_element)->AbsoluteZoom());
    uPtr(collection4)->Origin(ind5);
    ;
    ::g::Uno::Float2 ind6 = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)tile._rect.Size().X, (float)tile._rect.Size().Y), uPtr(_element)->AbsoluteZoom());
    uPtr(collection4)->Size(ind6);
    ;
    ::g::Uno::Float4x4 ind7 = uPtr(_element)->WorldTransformInverse();
    uPtr(collection4)->LocalFromWorld(ind7);
    ;
    ::g::Fuse::OrthographicFrustum* cc = collection4;
    bool oldIsCaching = uPtr(dc)->IsCaching();
    dc->IsCaching(true);
    dc->PushRenderTargetViewport(uPtr(tile._framebuffer)->Framebuffer(), (uObject*)cc);
    dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
    uPtr(_element)->CompositEffects(dc);
    dc->PopRenderTargetViewport();
    dc->IsCaching(oldIsCaching);
}

// internal void Unpin() [instance] :250
void Cache::Unpin()
{
    uArray* array1;
    int index2;
    int length3;

    for (array1 = _cacheTiles, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Fuse::Elements::CacheTile tile = uPtr(array1)->Item< ::g::Fuse::Elements::CacheTile>(index2);
        uPtr(tile._framebuffer)->Unpin(true);
    }
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) [static] :160
::g::Uno::Recti Cache::ConservativelySnapToCoveringIntegers(::g::Uno::Rect r)
{
    Cache_typeof()->Init();
    ::g::Uno::Int2 origin = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Floor2(r.LeftTop()));
    ::g::Uno::Int2 size = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Addition1(::g::Uno::Float2__op_Subtraction2(r.RightBottom(), r.LeftTop()), 0.01f)));
    return ::g::Uno::Recti__New1(origin.X, origin.Y, (origin.X + size.X) + 1, (origin.Y + size.Y) + 1);
}

// internal static bool GetCachingRect(Fuse.Elements.Element elm, Uno.Recti& rect) [static] :179
bool Cache::GetCachingRect1(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* rect)
{
    Cache_typeof()->Init();
    ::g::Uno::Rect bounds = uPtr(elm)->RenderBoundsWithEffects();

    if (bounds.IsInfinite())
    {
        *rect = ::g::Uno::Recti__New1(0, 0, 0, 0);
        return false;
    }

    *rect = ::g::Uno::Recti__Inflate(Cache::ConservativelySnapToCoveringIntegers(::g::Uno::Rect__Scale(bounds, elm->AbsoluteZoom())), 1);
    return true;
}

// public Cache New(Fuse.Elements.Element elm) [static] :135
Cache* Cache::New1(::g::Fuse::Elements::Element* elm)
{
    Cache* obj8 = (Cache*)uNew(Cache_typeof());
    obj8->ctor_(elm);
    return obj8;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Caching\$.uno(289)
// -------------------------------------------------------------------

// internal sealed class CacheHelper :289
// {
uType* CacheHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(CacheHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.CacheHelper", options);
    type->fp_ctor_ = (void*)CacheHelper__New1_fn;
    ::TYPES[21] = ::g::Fuse::Elements::Cache_typeof();
    ::TYPES[15] = ::g::Fuse::Elements::CacheTile_typeof()->Array();
    ::TYPES[22] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[12] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[5] = ::g::Uno::Float_typeof();
    ::TYPES[8] = ::g::Uno::Int2_typeof();
    ::TYPES[20] = ::g::Uno::Graphics::Texture2D_typeof();
    ::TYPES[16] = ::g::Fuse::Elements::CacheTile_typeof();
    ::TYPES[23] = ::g::Fuse::IViewport_typeof();
    ::TYPES[24] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[25] = ::g::Fuse_Elements_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Elements::CacheHelper, _draw_ac95a784), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Elements::CacheHelper, Blit_Coord_ac95a784_1_1_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::Elements::CacheHelper, Blit_Vertices_ac95a784_1_0_7), 0);
    return type;
}

// public generated CacheHelper() :289
void CacheHelper__ctor__fn(CacheHelper* __this)
{
    __this->ctor_();
}

// public void Blit(Fuse.DrawContext dc, Fuse.Elements.Cache cache, float opacity) :291
void CacheHelper__Blit_fn(CacheHelper* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Cache* cache, float* opacity)
{
    __this->Blit(dc, cache, *opacity);
}

// private generated void init_DrawCalls() :289
void CacheHelper__init_DrawCalls_fn(CacheHelper* __this)
{
    __this->init_DrawCalls();
}

// public generated CacheHelper New() :289
void CacheHelper__New1_fn(CacheHelper** __retval)
{
    *__retval = CacheHelper::New1();
}

// public generated CacheHelper() [instance] :289
void CacheHelper::ctor_()
{
    init_DrawCalls();
}

// public void Blit(Fuse.DrawContext dc, Fuse.Elements.Cache cache, float opacity) [instance] :291
void CacheHelper::Blit(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Cache* cache, float opacity)
{
    uArray* array1;
    int index2;
    int length3;

    for (array1 = uPtr(cache)->CacheTiles(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Fuse::Elements::CacheTile tile = uPtr(array1)->Item< ::g::Fuse::Elements::CacheTile>(index2);
        _draw_ac95a784.BlendEnabled(true);
        _draw_ac95a784.DepthTestEnabled(false);
        _draw_ac95a784.CullFace(uPtr(dc)->CullFace());
        _draw_ac95a784.BlendDstRgb(3);
        _draw_ac95a784.BlendDstAlpha(3);
        _draw_ac95a784.Use();
        _draw_ac95a784.Attrib1(0, 2, Blit_Coord_ac95a784_1_1_1, 8, 0);
        _draw_ac95a784.Uniform2(1, ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)uPtr(tile.Texture())->Size().X, (float)uPtr(tile.Texture())->Size().Y), dc->ViewportPointDensity()));
        _draw_ac95a784.Uniform12(2, tile._compositMatrix);
        _draw_ac95a784.Uniform12(3, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[23/*Fuse.IViewport*/])));
        _draw_ac95a784.Uniform(4, opacity);
        _draw_ac95a784.Sampler2(5, tile.Texture());
        _draw_ac95a784.DrawArrays(uPtr(Blit_Vertices_ac95a784_1_0_7)->Length());
    }
}

// private generated void init_DrawCalls() [instance] :289
void CacheHelper::init_DrawCalls()
{
    uArray* Vertices_ac95a784_1_0_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[24/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f));
    Blit_Coord_ac95a784_1_1_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_ac95a784_1_0_0), 0);
    Blit_Vertices_ac95a784_1_0_7 = Vertices_ac95a784_1_0_0;
    _draw_ac95a784 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::Fuse_Elements_bundle::CacheHelper6627cb47());
}

// public generated CacheHelper New() [static] :289
CacheHelper* CacheHelper::New1()
{
    CacheHelper* obj4 = (CacheHelper*)uNew(CacheHelper_typeof());
    obj4->ctor_();
    return obj4;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Caching\$.uno(104)
// -------------------------------------------------------------------

// internal struct CacheTile :104
// {
uStructType* CacheTile_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(CacheTile);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Elements.CacheTile", options);
    ::TYPES[17] = ::g::Fuse::CacheFramebuffer_typeof();
    ::TYPES[8] = ::g::Uno::Int2_typeof();
    ::TYPES[6] = ::g::Uno::Recti_typeof();
    ::TYPES[26] = ::g::Uno::Graphics::Framebuffer_typeof();
    type->SetFields(0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Elements::CacheTile, _compositMatrix), 0,
        ::g::Fuse::CacheFramebuffer_typeof(), offsetof(::g::Fuse::Elements::CacheTile, _framebuffer), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Elements::CacheTile, _rect), 0);
    return type;
}

// public void EnsureHasFramebuffer(object owner) :112
void CacheTile__EnsureHasFramebuffer_fn(CacheTile* __this, uObject* owner)
{
    __this->EnsureHasFramebuffer(owner);
}

// public texture2D get_Texture() :110
void CacheTile__get_Texture_fn(CacheTile* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->Texture();
}

// public void EnsureHasFramebuffer(object owner) [instance] :112
void CacheTile::EnsureHasFramebuffer(uObject* owner)
{
    if (((_framebuffer == NULL) || (uPtr(_framebuffer)->Width() != _rect.Size().X)) || (uPtr(_framebuffer)->Height() != _rect.Size().Y))
    {
        if (_framebuffer != NULL)
            uPtr(_framebuffer)->Dispose();

        _framebuffer = ::g::Fuse::CacheFramebuffer::New1(owner, _rect.Size().X, _rect.Size().Y, 3, 0);
    }
}

// public texture2D get_Texture() [instance] :110
::g::Uno::Graphics::Texture2D* CacheTile::Texture()
{
    return uPtr(uPtr(_framebuffer)->Framebuffer())->ColorBuffer();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1969)
// ------------------------------------------------------------

// public enum CachingMode :1969
uEnumType* CachingMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.CachingMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Optimized", 0LL,
        "Always", 1LL,
        "Never", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1669)
// ------------------------------------------------------------

// private sealed class TransformOrigins.CenterOrigin :1669
// {
TransformOrigins__CenterOrigin_type* TransformOrigins__CenterOrigin_typeof()
{
    static uSStrong<TransformOrigins__CenterOrigin_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TransformOrigins__CenterOrigin);
    options.TypeSize = sizeof(TransformOrigins__CenterOrigin_type);
    type = (TransformOrigins__CenterOrigin_type*)uClassType::New("Fuse.Elements.TransformOrigins.CenterOrigin", options);
    type->fp_ctor_ = (void*)TransformOrigins__CenterOrigin__New1_fn;
    type->interface0.fp_GetOffset = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TransformOrigins__CenterOrigin__GetOffset_fn;
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(TransformOrigins__CenterOrigin_type, interface0));
    return type;
}

// public generated CenterOrigin() :1669
void TransformOrigins__CenterOrigin__ctor__fn(TransformOrigins__CenterOrigin* __this)
{
    __this->ctor_();
}

// public float3 GetOffset(Fuse.Elements.Element elm) :1671
void TransformOrigins__CenterOrigin__GetOffset_fn(TransformOrigins__CenterOrigin* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetOffset(elm);
}

// public generated CenterOrigin New() :1669
void TransformOrigins__CenterOrigin__New1_fn(TransformOrigins__CenterOrigin** __retval)
{
    *__retval = TransformOrigins__CenterOrigin::New1();
}

// public generated CenterOrigin() [instance] :1669
void TransformOrigins__CenterOrigin::ctor_()
{
}

// public float3 GetOffset(Fuse.Elements.Element elm) [instance] :1671
::g::Uno::Float3 TransformOrigins__CenterOrigin::GetOffset(::g::Fuse::Elements::Element* elm)
{
    return ::g::Uno::Float3__New4(::g::Uno::Float2__op_Division1(uPtr(elm)->ActualSize(), 2.0f), 0.0f);
}

// public generated CenterOrigin New() [static] :1669
TransformOrigins__CenterOrigin* TransformOrigins__CenterOrigin::New1()
{
    TransformOrigins__CenterOrigin* obj1 = (TransformOrigins__CenterOrigin*)uNew(TransformOrigins__CenterOrigin_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Caching\$.uno(418)
// -------------------------------------------------------------------

// internal static class DisplayHelpers :418
// {
uClassType* DisplayHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.DisplayHelpers", options);
    ::TYPES[27] = ::g::Uno::Platform2::Display_typeof();
    ::TYPES[7] = ::g::Uno::Rect_typeof();
    ::TYPES[13] = ::g::Fuse::RootViewport_typeof();
    return type;
}

// public static int2 get_DisplaySizeHint() :422
void DisplayHelpers__get_DisplaySizeHint_fn(::g::Uno::Int2* __retval)
{
    *__retval = DisplayHelpers::DisplaySizeHint();
}

// public static float get_PointDensity() :438
void DisplayHelpers__get_PointDensity_fn(float* __retval)
{
    *__retval = DisplayHelpers::PointDensity();
}

// public static int2 get_DisplaySizeHint() [static] :422
::g::Uno::Int2 DisplayHelpers::DisplaySizeHint()
{
    ::g::Uno::Platform2::Display* display = ::g::Uno::Platform2::Display::MainDisplay();
    return ::g::Uno::Int2__op_Explicit(uPtr(display)->Frame().Size());
}

// public static float get_PointDensity() [static] :438
float DisplayHelpers::PointDensity()
{
    return ::g::Fuse::RootViewport::DefaultDensity();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(439)
// -----------------------------------------------------------

// public interfacemodifiers class Element :439
// {
// static Element() :439
static void Element__cctor_1_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret12;
    ::g::Fuse::StyleProperty1* ret13;
    ::g::Fuse::StylePropertyWithUnit* ret14;
    ::g::Fuse::StylePropertyWithUnit* ret15;
    ::g::Fuse::StylePropertyWithUnit* ret16;
    ::g::Fuse::StylePropertyWithUnit* ret17;
    ::g::Fuse::StylePropertyWithUnit* ret18;
    ::g::Fuse::StylePropertyWithUnit* ret19;
    ::g::Fuse::StyleProperty1* ret20;
    ::g::Fuse::StyleProperty1* ret21;
    ::g::Fuse::StyleProperty1* ret22;
    ::g::Fuse::StyleProperty1* ret23;
    ::g::Fuse::StylePropertyWithUnit* ret24;
    ::g::Fuse::StylePropertyWithUnit* ret25;
    ::g::Fuse::StylePropertyWithUnit* ret26;
    ::g::Fuse::StylePropertyWithUnit* ret27;
    ::g::Fuse::StyleProperty1* ret28;
    ::g::Fuse::StyleProperty1* ret29;
    ::g::Fuse::StyleProperty1* ret30;
    ::g::Fuse::StylePropertyWithUnit* ret31;
    ::g::Fuse::StylePropertyWithUnit* ret32;
    Element::CachingModeProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[28/*Fuse.StyleProperty<Fuse.Elements.Element, Fuse.Elements.CachingMode>*/], uCRef<int>(0), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)Element__OnCachingModeChanged_fn), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element, Fuse.Elements.CachingMode>*/], (void*)Element__SetCachingMode_fn), uDelegate::New(::TYPES[31/*Uno.Func<Fuse.Elements.Element, Fuse.Elements.CachingMode>*/], (void*)Element__GetCachingMode_fn), &ret12), ret12);
    Element::HitTestModeProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[32/*Fuse.StyleProperty<Fuse.Elements.Element, Fuse.Elements.HitTestMode>*/], uCRef<int>(5), NULL, &ret13), ret13);
    Element::WidthProperty_ = (::g::Fuse::StylePropertyWithUnit__New4_fn(::TYPES[33/*Fuse.StylePropertyWithUnit<Fuse.Elements.Element, float, Fuse.Elements.SizeUnit>*/], uCRef(0.0f), uCRef<int>(0), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), uDelegate::New(::TYPES[34/*Uno.Action<Fuse.Elements.Element, float>*/], (void*)Element__SetWidth_fn), uDelegate::New(::TYPES[35/*Uno.Func<Fuse.Elements.Element, float>*/], (void*)Element__GetWidth_fn), &ret14), ret14);
    Element::HeightProperty_ = (::g::Fuse::StylePropertyWithUnit__New4_fn(::TYPES[33/*Fuse.StylePropertyWithUnit<Fuse.Elements.Element, float, Fuse.Elements.SizeUnit>*/], uCRef(0.0f), uCRef<int>(0), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), uDelegate::New(::TYPES[34/*Uno.Action<Fuse.Elements.Element, float>*/], (void*)Element__SetHeight_fn), uDelegate::New(::TYPES[35/*Uno.Func<Fuse.Elements.Element, float>*/], (void*)Element__GetHeight_fn), &ret15), ret15);
    Element::MinWidthProperty_ = (::g::Fuse::StylePropertyWithUnit__New3_fn(::TYPES[33/*Fuse.StylePropertyWithUnit<Fuse.Elements.Element, float, Fuse.Elements.SizeUnit>*/], uCRef(0.0f), uCRef<int>(0), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret16), ret16);
    Element::MinHeightProperty_ = (::g::Fuse::StylePropertyWithUnit__New3_fn(::TYPES[33/*Fuse.StylePropertyWithUnit<Fuse.Elements.Element, float, Fuse.Elements.SizeUnit>*/], uCRef(0.0f), uCRef<int>(0), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret17), ret17);
    Element::MaxWidthProperty_ = (::g::Fuse::StylePropertyWithUnit__New3_fn(::TYPES[33/*Fuse.StylePropertyWithUnit<Fuse.Elements.Element, float, Fuse.Elements.SizeUnit>*/], uCRef(0.0f), uCRef<int>(0), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret18), ret18);
    Element::MaxHeightProperty_ = (::g::Fuse::StylePropertyWithUnit__New3_fn(::TYPES[33/*Fuse.StylePropertyWithUnit<Fuse.Elements.Element, float, Fuse.Elements.SizeUnit>*/], uCRef(0.0f), uCRef<int>(0), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret19), ret19);
    Element::AlignmentProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[36/*Fuse.StyleProperty<Fuse.Elements.Element, Fuse.Elements.Alignment>*/], uCRef<int>(0), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret20), ret20);
    Element::VisibilityProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[37/*Fuse.StyleProperty<Fuse.Elements.Element, Fuse.Elements.Visibility>*/], uCRef<int>(0), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)Element__OnVisibilityChanged_fn), &ret21), ret21);
    Element::MarginProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[38/*Fuse.StyleProperty<Fuse.Elements.Element, float4>*/], uCRef(::g::Uno::Float4__New1(0.0f)), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret22), ret22);
    Element::PaddingProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[38/*Fuse.StyleProperty<Fuse.Elements.Element, float4>*/], uCRef(::g::Uno::Float4__New1(0.0f)), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret23), ret23);
    Element::OffsetProperty_ = (::g::Fuse::StylePropertyWithUnit__New3_fn(::TYPES[39/*Fuse.StylePropertyWithUnit<Fuse.Elements.Element, float2, Fuse.Elements.SizeUnit>*/], uCRef(::g::Uno::Float2__New1(0.0f)), uCRef<int>(0), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret24), ret24);
    Element::XProperty_ = (::g::Fuse::StylePropertyWithUnit__New3_fn(::TYPES[33/*Fuse.StylePropertyWithUnit<Fuse.Elements.Element, float, Fuse.Elements.SizeUnit>*/], uCRef(0.0f), uCRef<int>(0), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret25), ret25);
    Element::YProperty_ = (::g::Fuse::StylePropertyWithUnit__New3_fn(::TYPES[33/*Fuse.StylePropertyWithUnit<Fuse.Elements.Element, float, Fuse.Elements.SizeUnit>*/], uCRef(0.0f), uCRef<int>(0), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret26), ret26);
    Element::AnchorProperty_ = (::g::Fuse::StylePropertyWithUnit__New3_fn(::TYPES[39/*Fuse.StylePropertyWithUnit<Fuse.Elements.Element, float2, Fuse.Elements.SizeUnit>*/], uCRef(::g::Uno::Float2__New1(0.0f)), uCRef<int>(0), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret27), ret27);
    Element::ClipToBoundsProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[40/*Fuse.StyleProperty<Fuse.Elements.Element, bool>*/], uCRef(false), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)Element__OnClipToBoundsChanged_fn), &ret28), ret28);
    Element::OpacityProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[41/*Fuse.StyleProperty<Fuse.Elements.Element, float>*/], uCRef(1.0f), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)Element__OnOpacityChanged_fn), &ret29), ret29);
    Element::TransformOriginProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[42/*Fuse.StyleProperty<Fuse.Elements.Element, Fuse.Elements.ITransformOrigin>*/], ::g::Fuse::Elements::TransformOrigins::Center(), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)Element__InvalidateLocalTransform1_fn), uDelegate::New(::TYPES[44/*Uno.Action<Fuse.Elements.Element, Fuse.Elements.ITransformOrigin>*/], (void*)Element__SetTransformOrigin_fn), uDelegate::New(::TYPES[45/*Uno.Func<Fuse.Elements.Element, Fuse.Elements.ITransformOrigin>*/], (void*)Element__GetTransformOrigin_fn), &ret30), ret30);
    Element::LimitHeightProperty_ = (::g::Fuse::StylePropertyWithUnit__New3_fn(::TYPES[33/*Fuse.StylePropertyWithUnit<Fuse.Elements.Element, float, Fuse.Elements.SizeUnit>*/], uCRef(0.0f), uCRef<int>(0), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret31), ret31);
    Element::LimitWidthProperty_ = (::g::Fuse::StylePropertyWithUnit__New3_fn(::TYPES[33/*Fuse.StylePropertyWithUnit<Fuse.Elements.Element, float, Fuse.Elements.SizeUnit>*/], uCRef(0.0f), uCRef<int>(0), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret32), ret32);
}

Element_type* Element_typeof()
{
    static uSStrong<Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 106;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Element);
    options.TypeSize = sizeof(Element_type);
    type = (Element_type*)uClassType::New("Fuse.Elements.Element", options);
    type->SetBase(::g::Fuse::Node_typeof());
    type->fp_cctor_ = Element__cctor_1_fn;
    type->fp_get_AbsoluteViewportOrigin = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*))Element__get_AbsoluteViewportOrigin_fn;
    type->fp_ArrangePaddingBox = Element__ArrangePaddingBox_fn;
    type->fp_CalcRenderBounds = Element__CalcRenderBounds_fn;
    type->fp_get_CanAdjustMarginBox = (void(*)(::g::Fuse::Node*, bool*))Element__get_CanAdjustMarginBox_fn;
    type->fp_Draw = (void(*)(::g::Fuse::Node*, ::g::Fuse::DrawContext*))Element__Draw_fn;
    type->fp_DrawSelection = (void(*)(::g::Fuse::Node*, ::g::Fuse::DrawContext*))Element__DrawSelection_fn;
    type->fp_FastTrackDrawWithOpacity = Element__FastTrackDrawWithOpacity_fn;
    type->fp_GetContentSize = Element__GetContentSize_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))Element__GetMarginSize_fn;
    type->fp_get_HitTestChildrenBounds = (void(*)(::g::Fuse::Node*, ::g::Fuse::NodeBounds**))Element__get_HitTestChildrenBounds_fn;
    type->fp_get_HitTestLocalBounds = (void(*)(::g::Fuse::Node*, ::g::Fuse::NodeBounds**))Element__get_HitTestLocalBounds_fn;
    type->fp_get_HitTestLocalVisualBounds = Element__get_HitTestLocalVisualBounds_fn;
    type->fp_InvalidateLocalTransform = (void(*)(::g::Fuse::Node*))Element__InvalidateLocalTransform_fn;
    type->fp_InvalidateVisual = (void(*)(::g::Fuse::Node*))Element__InvalidateVisual_fn;
    type->fp_get_IsLocalVisible = (void(*)(::g::Fuse::Node*, bool*))Element__get_IsLocalVisible_fn;
    type->fp_IsMarginBoxDependent = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node*, int*))Element__IsMarginBoxDependent_fn;
    type->fp_get_LocalBounds = (void(*)(::g::Fuse::Node*, ::g::Uno::Geometry::Box*))Element__get_LocalBounds_fn;
    type->fp_get_LocalRenderBounds = (void(*)(::g::Fuse::Node*, ::g::Uno::Rect*))Element__get_LocalRenderBounds_fn;
    type->fp_OnAdjustMarginBoxPosition = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*))Element__OnAdjustMarginBoxPosition_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))Element__OnArrangeMarginBox_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))Element__OnHitTest_fn;
    type->fp_OnHitTestChildren = Element__OnHitTestChildren_fn;
    type->fp_OnHitTestLocalVisual = Element__OnHitTestLocalVisual_fn;
    type->fp_OnInvalidateLayout = (void(*)(::g::Fuse::Node*))Element__OnInvalidateLayout_fn;
    type->fp_OnInvalidateRenderBounds = (void(*)(::g::Fuse::Node*, bool*))Element__OnInvalidateRenderBounds_fn;
    type->fp_OnIsEnabledChanged = (void(*)(::g::Fuse::Node*))Element__OnIsEnabledChanged_fn;
    type->fp_OnResetStyle = (void(*)(::g::Fuse::Node*))Element__OnResetStyle_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Element__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Element__OnUnrooted_fn;
    type->fp_PrependImplicitTransform = (void(*)(::g::Fuse::Node*, ::g::Fuse::FastMatrix*))Element__PrependImplicitTransform_fn;
    type->fp_PrependInverseTransformOrigin = (void(*)(::g::Fuse::Node*, ::g::Fuse::FastMatrix*))Element__PrependInverseTransformOrigin_fn;
    type->fp_PrependTransformOrigin = (void(*)(::g::Fuse::Node*, ::g::Fuse::FastMatrix*))Element__PrependTransformOrigin_fn;
    type->interface1.fp_Show = (void(*)(uObject*))Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::STRINGS[3] = uString::Const("CaptureRegion bigger than maximum texture size, dropping rendering (size: ");
    ::STRINGS[4] = uString::Const(", max-size: ");
    ::STRINGS[5] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Elements\\0.19.3\\$.uno");
    ::STRINGS[6] = uString::Const("Draw called on a non-rooted node");
    ::STRINGS[7] = uString::Const("Draw");
    ::TYPES[28] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::CachingMode_typeof());
    ::TYPES[29] = ::g::Uno::Action1_typeof()->MakeType(Element_typeof());
    ::TYPES[30] = ::g::Uno::Action2_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::CachingMode_typeof());
    ::TYPES[31] = ::g::Uno::Func1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::CachingMode_typeof());
    ::TYPES[32] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::HitTestMode_typeof());
    ::TYPES[33] = ::g::Fuse::StylePropertyWithUnit_typeof()->MakeType(Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Elements::SizeUnit_typeof());
    ::TYPES[34] = ::g::Uno::Action2_typeof()->MakeType(Element_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[35] = ::g::Uno::Func1_typeof()->MakeType(Element_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[36] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::Alignment_typeof());
    ::TYPES[37] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[38] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[39] = ::g::Fuse::StylePropertyWithUnit_typeof()->MakeType(Element_typeof(), ::g::Uno::Float2_typeof(), ::g::Fuse::Elements::SizeUnit_typeof());
    ::TYPES[40] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[41] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[42] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::ITransformOrigin_typeof());
    ::TYPES[43] = ::g::Fuse::Elements::TransformOrigins_typeof();
    ::TYPES[44] = ::g::Uno::Action2_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::ITransformOrigin_typeof());
    ::TYPES[45] = ::g::Uno::Func1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::ITransformOrigin_typeof());
    ::TYPES[46] = Element__GMSCacheItem_typeof()->Array();
    ::TYPES[47] = ::g::Fuse::Elements::BoxSizing_typeof();
    ::TYPES[48] = ::g::Fuse::Elements::StandardBoxSizing_typeof();
    ::TYPES[49] = ::g::Fuse::Effects::Effect_typeof();
    ::TYPES[50] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof());
    ::TYPES[51] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof());
    ::TYPES[7] = ::g::Uno::Rect_typeof();
    ::TYPES[4] = ::g::Fuse::Node_typeof();
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[3] = ::g::Uno::Float2_typeof();
    ::TYPES[8] = ::g::Uno::Int2_typeof();
    ::TYPES[20] = ::g::Uno::Graphics::Texture2D_typeof();
    ::TYPES[14] = uObject_typeof();
    ::TYPES[18] = ::g::Fuse::OrthographicFrustum_typeof();
    ::TYPES[19] = ::g::Fuse::IFrustum_typeof();
    ::TYPES[52] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof());
    ::TYPES[53] = ::g::Uno::Delegate_typeof();
    ::TYPES[54] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[6] = ::g::Uno::Recti_typeof();
    ::TYPES[55] = ::g::Fuse::SizeFlags_typeof();
    ::TYPES[56] = Element__GMSCacheItem_typeof();
    ::TYPES[12] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[5] = ::g::Uno::Float_typeof();
    ::TYPES[57] = ::g::Uno::EventHandler_typeof();
    ::TYPES[58] = ::g::Uno::EventArgs_typeof();
    ::TYPES[59] = ::g::Fuse::Elements::BoxPlacement_typeof();
    ::TYPES[60] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof());
    ::TYPES[61] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[62] = ::g::Fuse::Elements::PreplacementHandler_typeof();
    ::TYPES[63] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof());
    ::TYPES[64] = ::g::Uno::Action_typeof();
    ::TYPES[65] = ::g::Fuse::Elements::NoImplicitMaxBoxSizing_typeof();
    ::TYPES[66] = ::g::Fuse::Elements::LimitBoxSizing_typeof();
    ::TYPES[67] = ::g::Fuse::Elements::LayoutMasterBoxSizing_typeof();
    ::TYPES[68] = ::g::Fuse::NodeBounds_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(Element_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(Element_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(Element_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(Element_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(Element_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(Element_type, interface5));
    type->SetFields(53,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _actualAnchor), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _actualPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _actualPositionCache), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _actualSize), 0,
        ::g::Fuse::Elements::BoxSizing_typeof(), offsetof(::g::Fuse::Elements::Element, _boxSizing), 0,
        Element__BoxSizingMode_typeof(), offsetof(::g::Fuse::Elements::Element, _boxSizingMode), 0,
        ::g::Fuse::Elements::Cache_typeof(), offsetof(::g::Fuse::Elements::Element, _cache), 0,
        ::g::Fuse::Elements::CachingMode_typeof(), offsetof(::g::Fuse::Elements::Element, _cachingMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Elements::Element, _compositionEffects), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof()), offsetof(::g::Fuse::Elements::Element, _effects), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Elements::Element, _gmsAt), 0,
        Element__GMSCacheItem_typeof()->Array(), offsetof(::g::Fuse::Elements::Element, _gmsCache), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Elements::Element, _gmsCount), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Element, _haveActualPositionCache), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Elements::Element, _height), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _intendedSize), 0,
        ::g::Fuse::Elements::Visibility_typeof(), offsetof(::g::Fuse::Elements::Element, _oldVisibility), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Element, _pendingDispatchPlacement), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Elements::Element, _placedBefore), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _ppPrevPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _ppPrevSize), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Elements::Element, _renderBoundsWithEffects), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Element, _renderBoundsWithEffectsDirty), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Elements::Element, _renderBoundsWithoutEffects), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Element, _renderBoundsWithoutEffectsDirty), 0,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(::g::Fuse::Elements::Element, _transformOrigin), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Elements::Element, _width), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Element, ignoreTempArrange), 0,
        ::g::Fuse::Elements::ElementBatchEntry_typeof(), offsetof(::g::Fuse::Elements::Element, _ElementBatchEntry), 0,
        ::g::Fuse::PlacedHandler_typeof(), offsetof(::g::Fuse::Elements::Element, Placed1), 0,
        ::g::Fuse::Elements::PreplacementHandler_typeof(), offsetof(::g::Fuse::Elements::Element, Preplacement1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Elements::Element, PropertyChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::Alignment_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::AlignmentProperty_, uFieldFlagsStatic,
        ::g::Fuse::StylePropertyWithUnit_typeof()->MakeType(Element_typeof(), ::g::Uno::Float2_typeof(), ::g::Fuse::Elements::SizeUnit_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::AnchorProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::CachingMode_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::CachingModeProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::Bool_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::ClipToBoundsProperty_, uFieldFlagsStatic,
        ::g::Fuse::StylePropertyWithUnit_typeof()->MakeType(Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Elements::SizeUnit_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::HeightProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::HitTestMode_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::HitTestModeProperty_, uFieldFlagsStatic,
        ::g::Fuse::StylePropertyWithUnit_typeof()->MakeType(Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Elements::SizeUnit_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::LimitHeightProperty_, uFieldFlagsStatic,
        ::g::Fuse::StylePropertyWithUnit_typeof()->MakeType(Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Elements::SizeUnit_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::LimitWidthProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::MarginProperty_, uFieldFlagsStatic,
        ::g::Fuse::StylePropertyWithUnit_typeof()->MakeType(Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Elements::SizeUnit_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::MaxHeightProperty_, uFieldFlagsStatic,
        ::g::Fuse::StylePropertyWithUnit_typeof()->MakeType(Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Elements::SizeUnit_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::MaxWidthProperty_, uFieldFlagsStatic,
        ::g::Fuse::StylePropertyWithUnit_typeof()->MakeType(Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Elements::SizeUnit_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::MinHeightProperty_, uFieldFlagsStatic,
        ::g::Fuse::StylePropertyWithUnit_typeof()->MakeType(Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Elements::SizeUnit_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::MinWidthProperty_, uFieldFlagsStatic,
        ::g::Fuse::StylePropertyWithUnit_typeof()->MakeType(Element_typeof(), ::g::Uno::Float2_typeof(), ::g::Fuse::Elements::SizeUnit_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::OffsetProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::Float_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::OpacityProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::PaddingProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::ITransformOrigin_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::TransformOriginProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::Visibility_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::VisibilityProperty_, uFieldFlagsStatic,
        ::g::Fuse::StylePropertyWithUnit_typeof()->MakeType(Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Elements::SizeUnit_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::WidthProperty_, uFieldFlagsStatic,
        ::g::Fuse::StylePropertyWithUnit_typeof()->MakeType(Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Elements::SizeUnit_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::XProperty_, uFieldFlagsStatic,
        ::g::Fuse::StylePropertyWithUnit_typeof()->MakeType(Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Elements::SizeUnit_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::YProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(21,
        new uField("AlignmentProperty", 85),
        new uField("AnchorProperty", 86),
        new uField("CachingModeProperty", 87),
        new uField("ClipToBoundsProperty", 88),
        new uField("HeightProperty", 89),
        new uField("HitTestModeProperty", 90),
        new uField("LimitHeightProperty", 91),
        new uField("LimitWidthProperty", 92),
        new uField("MarginProperty", 93),
        new uField("MaxHeightProperty", 94),
        new uField("MaxWidthProperty", 95),
        new uField("MinHeightProperty", 96),
        new uField("MinWidthProperty", 97),
        new uField("OffsetProperty", 98),
        new uField("OpacityProperty", 99),
        new uField("PaddingProperty", 100),
        new uField("TransformOriginProperty", 101),
        new uField("VisibilityProperty", 102),
        new uField("WidthProperty", 103),
        new uField("XProperty", 104),
        new uField("YProperty", 105));
    type->Reflection.SetFunctions(65,
        new uFunction("get_ActualAnchor", NULL, (void*)Element__get_ActualAnchor_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ActualPosition", NULL, (void*)Element__get_ActualPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ActualSize", NULL, (void*)Element__get_ActualSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("AddStyleEffect", NULL, (void*)Element__AddStyleEffect_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Effects::Effect_typeof()),
        new uFunction("get_Alignment", NULL, (void*)Element__get_Alignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_Alignment", NULL, (void*)Element__set_Alignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("get_Anchor", NULL, (void*)Element__get_Anchor_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Anchor", NULL, (void*)Element__set_Anchor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_BoxSizing", NULL, (void*)Element__get_BoxSizing_fn, 0, false, Element__BoxSizingMode_typeof(), 0),
        new uFunction("set_BoxSizing", NULL, (void*)Element__set_BoxSizing_fn, 0, false, uVoid_typeof(), 1, Element__BoxSizingMode_typeof()),
        new uFunction("get_CachingMode", NULL, (void*)Element__get_CachingMode_fn, 0, false, ::g::Fuse::Elements::CachingMode_typeof(), 0),
        new uFunction("set_CachingMode", NULL, (void*)Element__set_CachingMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::CachingMode_typeof()),
        new uFunction("CaptureRegion", NULL, (void*)Element__CaptureRegion_fn, 0, false, ::g::Uno::Graphics::Framebuffer_typeof(), 3, ::g::Fuse::DrawContext_typeof(), ::g::Uno::Rect_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("get_ClipToBounds", NULL, (void*)Element__get_ClipToBounds_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ClipToBounds", NULL, (void*)Element__set_ClipToBounds_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Effects", NULL, (void*)Element__get_Effects_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof()), 0),
        new uFunction("GetVisibleViewportInvertPixelRect", NULL, (void*)Element__GetVisibleViewportInvertPixelRect_fn, 0, false, ::g::Uno::Recti_typeof(), 2, ::g::Fuse::DrawContext_typeof(), ::g::Uno::Rect_typeof()),
        new uFunction("get_HasActiveEffects", NULL, (void*)Element__get_HasActiveEffects_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasCompositionEffect", NULL, (void*)Element__get_HasCompositionEffect_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasEffects", NULL, (void*)Element__get_HasEffects_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Height", NULL, (void*)Element__get_Height_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Height", NULL, (void*)Element__set_Height_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_HitTestMode", NULL, (void*)Element__get_HitTestMode_fn, 0, false, ::g::Fuse::Elements::HitTestMode_typeof(), 0),
        new uFunction("set_HitTestMode", NULL, (void*)Element__set_HitTestMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::HitTestMode_typeof()),
        new uFunction("InvalidateRenderBoundsWithEffects", NULL, (void*)Element__InvalidateRenderBoundsWithEffects_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("InvalidateVisualComposition", NULL, (void*)Element__InvalidateVisualComposition_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("IsPointInside", NULL, (void*)Element__IsPointInside_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_LimitHeight", NULL, (void*)Element__get_LimitHeight_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_LimitHeight", NULL, (void*)Element__set_LimitHeight_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LimitWidth", NULL, (void*)Element__get_LimitWidth_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_LimitWidth", NULL, (void*)Element__set_LimitWidth_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Margin", NULL, (void*)Element__get_Margin_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Margin", NULL, (void*)Element__set_Margin_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_MaxHeight", NULL, (void*)Element__get_MaxHeight_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_MaxHeight", NULL, (void*)Element__set_MaxHeight_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_MaxWidth", NULL, (void*)Element__get_MaxWidth_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_MaxWidth", NULL, (void*)Element__set_MaxWidth_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_MinHeight", NULL, (void*)Element__get_MinHeight_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_MinHeight", NULL, (void*)Element__set_MinHeight_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_MinWidth", NULL, (void*)Element__get_MinWidth_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_MinWidth", NULL, (void*)Element__set_MinWidth_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Offset", NULL, (void*)Element__get_Offset_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Offset", NULL, (void*)Element__set_Offset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Opacity", NULL, (void*)Element__get_Opacity_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Opacity", NULL, (void*)Element__set_Opacity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Padding", NULL, (void*)Element__get_Padding_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Padding", NULL, (void*)Element__set_Padding_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("add_Placed", NULL, (void*)Element__add_Placed_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::PlacedHandler_typeof()),
        new uFunction("remove_Placed", NULL, (void*)Element__remove_Placed_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::PlacedHandler_typeof()),
        new uFunction("add_Preplacement", NULL, (void*)Element__add_Preplacement_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::PreplacementHandler_typeof()),
        new uFunction("remove_Preplacement", NULL, (void*)Element__remove_Preplacement_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::PreplacementHandler_typeof()),
        new uFunction("add_PropertyChanged", NULL, (void*)Element__add_PropertyChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_PropertyChanged", NULL, (void*)Element__remove_PropertyChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_RenderBoundsWithEffects", NULL, (void*)Element__get_RenderBoundsWithEffects_fn, 0, false, ::g::Uno::Rect_typeof(), 0),
        new uFunction("get_RenderBoundsWithoutEffects", NULL, (void*)Element__get_RenderBoundsWithoutEffects_fn, 0, false, ::g::Uno::Rect_typeof(), 0),
        new uFunction("get_TransformOrigin", NULL, (void*)Element__get_TransformOrigin_fn, 0, false, ::g::Fuse::Elements::ITransformOrigin_typeof(), 0),
        new uFunction("set_TransformOrigin", NULL, (void*)Element__set_TransformOrigin_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::ITransformOrigin_typeof()),
        new uFunction("get_Visibility", NULL, (void*)Element__get_Visibility_fn, 0, false, ::g::Fuse::Elements::Visibility_typeof(), 0),
        new uFunction("set_Visibility", NULL, (void*)Element__set_Visibility_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Visibility_typeof()),
        new uFunction("get_Width", NULL, (void*)Element__get_Width_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Width", NULL, (void*)Element__set_Width_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_X", NULL, (void*)Element__get_X_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_X", NULL, (void*)Element__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Y", NULL, (void*)Element__get_Y_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)Element__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// protected generated Element() :439
void Element__ctor_1_fn(Element* __this)
{
    __this->ctor_1();
}

// protected override sealed float2 get_AbsoluteViewportOrigin() :1215
void Element__get_AbsoluteViewportOrigin_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 ret41;
    ::g::Uno::Float2 p = __this->ActualPosition();
    p = ::g::Uno::Float2__op_Addition2(p, (::g::Fuse::Node__get_AbsoluteViewportOrigin_fn(__this, &ret41), ret41));
    return *__retval = p, void();
}

// public float2 get_ActualAnchor() :1399
void Element__get_ActualAnchor_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ActualAnchor();
}

// internal void set_ActualAnchor(float2 value) :1400
void Element__set_ActualAnchor_fn(Element* __this, ::g::Uno::Float2* value)
{
    __this->ActualAnchor(*value);
}

// public float2 get_ActualPosition() :1228
void Element__get_ActualPosition_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ActualPosition();
}

// public float2 get_ActualSize() :1255
void Element__get_ActualSize_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ActualSize();
}

// public void AddStyleEffect(Fuse.Effects.Effect e) :698
void Element__AddStyleEffect_fn(Element* __this, ::g::Fuse::Effects::Effect* e)
{
    __this->AddStyleEffect(e);
}

// public Fuse.Elements.Alignment get_Alignment() :1056
void Element__get_Alignment_fn(Element* __this, int* __retval)
{
    *__retval = __this->Alignment();
}

// public void set_Alignment(Fuse.Elements.Alignment value) :1057
void Element__set_Alignment_fn(Element* __this, int* value)
{
    __this->Alignment(*value);
}

// private Fuse.Elements.Element get_AncestorElement() :1616
void Element__get_AncestorElement_fn(Element* __this, Element** __retval)
{
    *__retval = __this->AncestorElement();
}

// public float2 get_Anchor() :1144
void Element__get_Anchor_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Anchor();
}

// public void set_Anchor(float2 value) :1145
void Element__set_Anchor_fn(Element* __this, ::g::Uno::Float2* value)
{
    __this->Anchor(*value);
}

// protected virtual void ArrangePaddingBox(float2 avsize, Fuse.SizeFlags flags) :1517
void Element__ArrangePaddingBox_fn(Element* __this, ::g::Uno::Float2* avsize, int* flags)
{
}

// public Fuse.Elements.Element.BoxSizingMode get_BoxSizing() :1325
void Element__get_BoxSizing_fn(Element* __this, int* __retval)
{
    *__retval = __this->BoxSizing();
}

// public void set_BoxSizing(Fuse.Elements.Element.BoxSizingMode value) :1326
void Element__set_BoxSizing_fn(Element* __this, int* value)
{
    __this->BoxSizing(*value);
}

// internal Fuse.Elements.BoxSizing get_BoxSizingObject() :1346
void Element__get_BoxSizingObject_fn(Element* __this, ::g::Fuse::Elements::BoxSizing** __retval)
{
    *__retval = __this->BoxSizingObject();
}

// private Fuse.Elements.Cache get_Cache() :772
void Element__get_Cache_fn(Element* __this, ::g::Fuse::Elements::Cache** __retval)
{
    *__retval = __this->Cache();
}

// public Fuse.Elements.CachingMode get_CachingMode() :577
void Element__get_CachingMode_fn(Element* __this, int* __retval)
{
    *__retval = __this->CachingMode();
}

// public void set_CachingMode(Fuse.Elements.CachingMode value) :578
void Element__set_CachingMode_fn(Element* __this, int* value)
{
    __this->CachingMode(*value);
}

// protected virtual Uno.Rect CalcRenderBounds() :510
void Element__CalcRenderBounds_fn(Element* __this, ::g::Uno::Rect* __retval)
{
    return *__retval = ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), __this->ActualSize()), void();
}

// protected Uno.Rect CalcRenderBoundsWithEffects() :457
void Element__CalcRenderBoundsWithEffects_fn(Element* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->CalcRenderBoundsWithEffects();
}

// internal override sealed bool get_CanAdjustMarginBox() :1436
void Element__get_CanAdjustMarginBox_fn(Element* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public framebuffer CaptureRegion(Fuse.DrawContext dc, Uno.Rect region, float2 padding) :587
void Element__CaptureRegion_fn(Element* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* region, ::g::Uno::Float2* padding, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->CaptureRegion(dc, *region, *padding);
}

// public bool get_ClipToBounds() :1154
void Element__get_ClipToBounds_fn(Element* __this, bool* __retval)
{
    *__retval = __this->ClipToBounds();
}

// public void set_ClipToBounds(bool value) :1155
void Element__set_ClipToBounds_fn(Element* __this, bool* value)
{
    __this->ClipToBounds(*value);
}

// private void Composit(Fuse.DrawContext dc) :777
void Element__Composit_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    __this->Composit(dc);
}

// internal void CompositEffects(Fuse.DrawContext dc) :805
void Element__CompositEffects_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    __this->CompositEffects(dc);
}

// private void DispatchPlacement() :1498
void Element__DispatchPlacement_fn(Element* __this)
{
    __this->DispatchPlacement();
}

// public override void Draw(Fuse.DrawContext dc) :617
void Element__Draw_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    if (!__this->IsLocalRooted())
        ::g::Fuse::Diagnostics::Error(::STRINGS[6/*"Draw called...*/], __this, ::STRINGS[5/*"C:\\Program...*/], 620, ::STRINGS[7/*"Draw"*/]);

    if (__this->Visibility() != 0)
        return;

    double t;
    ::g::Uno::Recti visibleRect = __this->GetVisibleViewportInvertPixelRect(dc, __this->RenderBoundsWithEffects());

    if ((visibleRect.Size().X == 0) || (visibleRect.Size().Y == 0))
    {
        __this->ValidateVisual();
        return;
    }

    if (__this->NeedsClipping())
    {
        uPtr(dc)->PushScissor(visibleRect);
        __this->Composit(dc);
        dc->PopScissor();
    }
    else
        __this->Composit(dc);

    __this->ValidateVisual();
}

// public override sealed void DrawSelection(Fuse.DrawContext dc) :667
void Element__DrawSelection_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawLocalSelectionRect(dc, ::g::Uno::Rect__New2(::g::Uno::Float2__New2(0.0f, 0.0f), __this->ActualSize()));
}

// public Uno.Collections.IList<Fuse.Effects.Effect> get_Effects() :691
void Element__get_Effects_fn(Element* __this, uObject** __retval)
{
    *__retval = __this->Effects();
}

// internal generated Fuse.Elements.ElementBatchEntry get_ElementBatchEntry() :775
void Element__get_ElementBatchEntry_fn(Element* __this, ::g::Fuse::Elements::ElementBatchEntry** __retval)
{
    *__retval = __this->ElementBatchEntry();
}

// internal generated void set_ElementBatchEntry(Fuse.Elements.ElementBatchEntry value) :775
void Element__set_ElementBatchEntry_fn(Element* __this, ::g::Fuse::Elements::ElementBatchEntry* value)
{
    __this->ElementBatchEntry(value);
}

// protected virtual bool FastTrackDrawWithOpacity(Fuse.DrawContext dc) :800
void Element__FastTrackDrawWithOpacity_fn(Element* __this, ::g::Fuse::DrawContext* dc, bool* __retval)
{
    return *__retval = false, void();
}

// private void Fuse.Animations.IResize.SetSize(float2 size) :1535
void Element__Fuse_Animations_IResize_SetSize_fn(Element* __this, ::g::Uno::Float2* size)
{
    ::g::Uno::Float2 size_ = *size;
    __this->_actualSize = size_;
    __this->InternArrangePaddingBox(size_, 7);
    __this->InvalidateVisual();
    __this->InvalidateRenderBounds();
    __this->InvalidateLocalTransform();
}

// private float3 Fuse.IActualPlacement.get_ActualPosition() :1269
void Element__Fuse_IActualPlacement_get_ActualPosition_fn(Element* __this, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__New4(__this->ActualPosition(), 0.0f), void();
}

// private float3 Fuse.IActualPlacement.get_ActualSize() :1268
void Element__Fuse_IActualPlacement_get_ActualSize_fn(Element* __this, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__New4(__this->ActualSize(), 0.0f), void();
}

// private void Fuse.Triggers.Actions.ICollapse.Collapse() :442
void Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn(Element* __this)
{
    __this->Visibility(1);
}

// private void Fuse.Triggers.Actions.IHide.Hide() :443
void Element__Fuse_Triggers_Actions_IHide_Hide_fn(Element* __this)
{
    __this->Visibility(2);
}

// private void Fuse.Triggers.Actions.IShow.Show() :441
void Element__Fuse_Triggers_Actions_IShow_Show_fn(Element* __this)
{
    __this->Visibility(0);
}

// private static Fuse.Elements.CachingMode GetCachingMode(Fuse.Elements.Element elm) :580
void Element__GetCachingMode_fn(Element* elm, int* __retval)
{
    *__retval = Element::GetCachingMode(elm);
}

// protected virtual float2 GetContentSize(float2 fillSize, Fuse.SizeFlags fillSet) :1391
void Element__GetContentSize_fn(Element* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// private static float GetHeight(Fuse.Elements.Element elm) :1006
void Element__GetHeight_fn(Element* elm, float* __retval)
{
    *__retval = Element::GetHeight(elm);
}

// public override sealed float2 GetMarginSize(float2 fillSize, Fuse.SizeFlags fillSet) :1355
void Element__GetMarginSize_fn(Element* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    Element__GMSCacheItem collection6;
    int fillSet_ = *fillSet;
    ::g::Uno::Float2 fillSize_ = *fillSize;

    if (!((fillSet_ & 1) == 1))
        fillSize_.X = 0.0f;

    if (!((fillSet_ & 2) == 2))
        fillSize_.Y = 0.0f;

    int cacheFillSet = fillSet_ & 3;

    for (int i = 0; i < __this->_gmsCount; ++i)
    {
        Element__GMSCacheItem g = uPtr(__this->_gmsCache)->Item<Element__GMSCacheItem>(i);

        if (((cacheFillSet == g.fillSet) && (::g::Uno::Math::Abs1(fillSize_.X - g.fillSize.X) < 1e-05f)) && (::g::Uno::Math::Abs1(fillSize_.Y - g.fillSize.Y) < 1e-05f))
            return *__retval = g.result, void();
    }

    ::g::Uno::Float2 sz = uPtr(__this->_boxSizing)->CalcMarginSize(__this, fillSize_, fillSet_);
    int n = (__this->_gmsAt++) % 2;
    __this->_gmsCount = ::g::Uno::Math::Min8(2, __this->_gmsCount + 1);
    uPtr(__this->_gmsCache)->Item<Element__GMSCacheItem>(n) = (collection6 = uDefault<Element__GMSCacheItem>(), collection6.fillSize = fillSize_, collection6.fillSet = cacheFillSet, collection6.result = sz, collection6);
    return *__retval = sz, void();
}

// private static Fuse.Elements.ITransformOrigin GetTransformOrigin(Fuse.Elements.Element elm) :1720
void Element__GetTransformOrigin_fn(Element* elm, uObject** __retval)
{
    *__retval = Element::GetTransformOrigin(elm);
}

// internal Uno.Recti GetViewportInvertPixelRect(Fuse.DrawContext dc, Uno.Rect localRegion) :520
void Element__GetViewportInvertPixelRect_fn(Element* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* localRegion, ::g::Uno::Recti* __retval)
{
    *__retval = __this->GetViewportInvertPixelRect(dc, *localRegion);
}

// public Uno.Recti GetVisibleViewportInvertPixelRect(Fuse.DrawContext dc, Uno.Rect localRegion) :536
void Element__GetVisibleViewportInvertPixelRect_fn(Element* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* localRegion, ::g::Uno::Recti* __retval)
{
    *__retval = __this->GetVisibleViewportInvertPixelRect(dc, *localRegion);
}

// private static float GetWidth(Fuse.Elements.Element elm) :993
void Element__GetWidth_fn(Element* elm, float* __retval)
{
    *__retval = Element::GetWidth(elm);
}

// private void GMSReset() :1307
void Element__GMSReset_fn(Element* __this)
{
    __this->GMSReset();
}

// public bool get_HasActiveEffects() :713
void Element__get_HasActiveEffects_fn(Element* __this, bool* __retval)
{
    *__retval = __this->HasActiveEffects();
}

// public bool get_HasCompositionEffect() :733
void Element__get_HasCompositionEffect_fn(Element* __this, bool* __retval)
{
    *__retval = __this->HasCompositionEffect();
}

// public bool get_HasEffects() :707
void Element__get_HasEffects_fn(Element* __this, bool* __retval)
{
    *__retval = __this->HasEffects();
}

// public float get_Height() :1003
void Element__get_Height_fn(Element* __this, float* __retval)
{
    *__retval = __this->Height();
}

// public void set_Height(float value) :1004
void Element__set_Height_fn(Element* __this, float* value)
{
    __this->Height(*value);
}

// protected override sealed Fuse.NodeBounds get_HitTestChildrenBounds() :962
void Element__get_HitTestChildrenBounds_fn(Element* __this, ::g::Fuse::NodeBounds** __retval)
{
    ::g::Fuse::NodeBounds* ret51;

    if ((__this->HitTestMode() & 4) == 4)
        return *__retval = (::g::Fuse::Node__get_HitTestChildrenBounds_fn(__this, &ret51), ret51), void();

    return *__retval = ::g::Fuse::NodeBounds::Empty(), void();
}

// protected override sealed Fuse.NodeBounds get_HitTestLocalBounds() :940
void Element__get_HitTestLocalBounds_fn(Element* __this, ::g::Fuse::NodeBounds** __retval)
{
    ::g::Fuse::NodeBounds* n = ::g::Fuse::NodeBounds::Empty();

    if ((__this->HitTestMode() & 2) == 2)
        n = uPtr(n)->AddRect(::g::Uno::Float2__New1(0.0f), __this->ActualSize());

    if ((__this->HitTestMode() & 1) == 1)
        n = uPtr(n)->Merge(__this->HitTestLocalVisualBounds(), NULL);

    return *__retval = n, void();
}

// protected virtual Fuse.NodeBounds get_HitTestLocalVisualBounds() :954
void Element__get_HitTestLocalVisualBounds_fn(Element* __this, ::g::Fuse::NodeBounds** __retval)
{
    return *__retval = ::g::Fuse::NodeBounds::Empty(), void();
}

// public Fuse.Elements.HitTestMode get_HitTestMode() :915
void Element__get_HitTestMode_fn(Element* __this, int* __retval)
{
    *__retval = __this->HitTestMode();
}

// public void set_HitTestMode(Fuse.Elements.HitTestMode value) :916
void Element__set_HitTestMode_fn(Element* __this, int* value)
{
    __this->HitTestMode(*value);
}

// internal float2 get_IntendedPosition() :1265
void Element__get_IntendedPosition_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IntendedPosition();
}

// internal float2 get_IntendedSize() :1260
void Element__get_IntendedSize_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IntendedSize();
}

// internal void InternArrangePaddingBox(float2 avsize, Fuse.SizeFlags flags) :1512
void Element__InternArrangePaddingBox_fn(Element* __this, ::g::Uno::Float2* avsize, int* flags)
{
    __this->InternArrangePaddingBox(*avsize, *flags);
}

// internal float2 InternGetContentSize(float2 fillSize, Fuse.SizeFlags fillSet) :1386
void Element__InternGetContentSize_fn(Element* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    *__retval = __this->InternGetContentSize(*fillSize, *fillSet);
}

// protected override sealed void InvalidateLocalTransform() :1763
void Element__InvalidateLocalTransform_fn(Element* __this)
{
    __this->InvalidateVisualComposition();
    Element* p = __this->AncestorElement();

    if (p != NULL)
        uPtr(p)->InvalidateRenderBounds();

    if (__this->ElementBatchEntry() != NULL)
        uPtr(__this->ElementBatchEntry())->InvalidateTransform();

    ::g::Fuse::Node__InvalidateLocalTransform_fn(__this);
}

// private static void InvalidateLocalTransform(Fuse.Elements.Element elm) :1728
void Element__InvalidateLocalTransform1_fn(Element* elm)
{
    Element::InvalidateLocalTransform1(elm);
}

// public void InvalidateRenderBoundsWithEffects() :1856
void Element__InvalidateRenderBoundsWithEffects_fn(Element* __this)
{
    __this->InvalidateRenderBoundsWithEffects();
}

// public override void InvalidateVisual() :1792
void Element__InvalidateVisual_fn(Element* __this)
{
    if (__this->Cache() != NULL)
        uPtr(__this->Cache())->Invalidate();

    if (__this->ElementBatchEntry() != NULL)
        uPtr(__this->ElementBatchEntry())->InvalidateVisual();

    if (__this->Visibility() != 0)
        return;

    ::g::Fuse::Node__InvalidateVisual_fn(__this);
}

// public void InvalidateVisualComposition() :1806
void Element__InvalidateVisualComposition_fn(Element* __this)
{
    __this->InvalidateVisualComposition();
}

// public override sealed bool get_IsLocalVisible() :1582
void Element__get_IsLocalVisible_fn(Element* __this, bool* __retval)
{
    return *__retval = __this->Visibility() == 0, void();
}

// protected override Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Node child) :1824
void Element__IsMarginBoxDependent_fn(Element* __this, ::g::Fuse::Node* child, int* __retval)
{
    return *__retval = uPtr(__this->_boxSizing)->IsContentRelativeSize(__this), void();
}

// public bool IsPointInside(float2 localPoint) :904
void Element__IsPointInside_fn(Element* __this, ::g::Uno::Float2* localPoint, bool* __retval)
{
    *__retval = __this->IsPointInside(*localPoint);
}

// public float get_LimitHeight() :2258
void Element__get_LimitHeight_fn(Element* __this, float* __retval)
{
    *__retval = __this->LimitHeight();
}

// public void set_LimitHeight(float value) :2259
void Element__set_LimitHeight_fn(Element* __this, float* value)
{
    __this->LimitHeight(*value);
}

// public float get_LimitWidth() :2267
void Element__get_LimitWidth_fn(Element* __this, float* __retval)
{
    *__retval = __this->LimitWidth();
}

// public void set_LimitWidth(float value) :2268
void Element__set_LimitWidth_fn(Element* __this, float* value)
{
    __this->LimitWidth(*value);
}

// public override sealed Uno.Geometry.Box get_LocalBounds() :1736
void Element__get_LocalBounds_fn(Element* __this, ::g::Uno::Geometry::Box* __retval)
{
    return *__retval = ::g::Uno::Geometry::Box__New1(::g::Uno::Float3__New1(0.0f), ::g::Uno::Float3__New4(__this->ActualSize(), 0.0f)), void();
}

// internal void LocalDraw(Fuse.DrawContext dc) :660
void Element__LocalDraw_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    __this->LocalDraw(dc);
}

// public override sealed Uno.Rect get_LocalRenderBounds() :551
void Element__get_LocalRenderBounds_fn(Element* __this, ::g::Uno::Rect* __retval)
{
    return *__retval = __this->RenderBoundsWithEffects(), void();
}

// public float4 get_Margin() :1089
void Element__get_Margin_fn(Element* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Margin();
}

// public void set_Margin(float4 value) :1090
void Element__set_Margin_fn(Element* __this, ::g::Uno::Float4* value)
{
    __this->Margin(*value);
}

// public float get_MaxHeight() :1046
void Element__get_MaxHeight_fn(Element* __this, float* __retval)
{
    *__retval = __this->MaxHeight();
}

// public void set_MaxHeight(float value) :1047
void Element__set_MaxHeight_fn(Element* __this, float* value)
{
    __this->MaxHeight(*value);
}

// public float get_MaxWidth() :1036
void Element__get_MaxWidth_fn(Element* __this, float* __retval)
{
    *__retval = __this->MaxWidth();
}

// public void set_MaxWidth(float value) :1037
void Element__set_MaxWidth_fn(Element* __this, float* value)
{
    __this->MaxWidth(*value);
}

// public float get_MinHeight() :1026
void Element__get_MinHeight_fn(Element* __this, float* __retval)
{
    *__retval = __this->MinHeight();
}

// public void set_MinHeight(float value) :1027
void Element__set_MinHeight_fn(Element* __this, float* value)
{
    __this->MinHeight(*value);
}

// public float get_MinWidth() :1016
void Element__get_MinWidth_fn(Element* __this, float* __retval)
{
    *__retval = __this->MinWidth();
}

// public void set_MinWidth(float value) :1017
void Element__set_MinWidth_fn(Element* __this, float* value)
{
    __this->MinWidth(*value);
}

// private bool get_NeedsClipping() :488
void Element__get_NeedsClipping_fn(Element* __this, bool* __retval)
{
    *__retval = __this->NeedsClipping();
}

// private void NotifyPropertyChanged() :1167
void Element__NotifyPropertyChanged_fn(Element* __this)
{
    __this->NotifyPropertyChanged();
}

// public float2 get_Offset() :1111
void Element__get_Offset_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Offset();
}

// public void set_Offset(float2 value) :1112
void Element__set_Offset_fn(Element* __this, ::g::Uno::Float2* value)
{
    __this->Offset(*value);
}

// internal override sealed void OnAdjustMarginBoxPosition(float2 position) :1437
void Element__OnAdjustMarginBoxPosition_fn(Element* __this, ::g::Uno::Float2* position)
{
    ::g::Uno::Float2 position_ = *position;
    __this->PerformPlacement(::g::Uno::Float2__op_Addition2(__this->_actualPosition, ::g::Uno::Float2__op_Subtraction2(position_, __this->MarginBoxPosition())), __this->_actualSize, 0);
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, float2 availableSize, Fuse.SizeFlags availSet) :1403
void Element__OnArrangeMarginBox_fn(Element* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 availableSize_ = *availableSize;
    int availSet_ = *availSet;
    ::g::Fuse::Elements::BoxPlacement bp = uPtr(__this->_boxSizing)->CalcBoxPlacement(__this, position_, availableSize_, availSet_);

    if (!(((availSet_ & 4) == 4) && __this->ignoreTempArrange))
    {
        if (__this->Visibility() != 1)
        {
            __this->ArrangePaddingBox(bp.Size, availSet_ | 3);
            __this->PerformPlacement(bp.Position, bp.Size, availSet_);
        }
    }

    return *__retval = bp.MarginBox, void();
}

// private static void OnCachingModeChanged(Fuse.Elements.Element elm) :582
void Element__OnCachingModeChanged_fn(Element* elm)
{
    Element::OnCachingModeChanged(elm);
}

// private static void OnClipToBoundsChanged(Fuse.Elements.Element elm) :1158
void Element__OnClipToBoundsChanged_fn(Element* elm)
{
    Element::OnClipToBoundsChanged(elm);
}

// private void OnEffectAdded(Fuse.Effects.Effect e) :736
void Element__OnEffectAdded_fn(Element* __this, ::g::Fuse::Effects::Effect* e)
{
    __this->OnEffectAdded(e);
}

// private void OnEffectRemoved(Fuse.Effects.Effect e) :747
void Element__OnEffectRemoved_fn(Element* __this, ::g::Fuse::Effects::Effect* e)
{
    __this->OnEffectRemoved(e);
}

// private void OnEffectRenderBoundsChanged(Fuse.Effects.Effect e) :764
void Element__OnEffectRenderBoundsChanged_fn(Element* __this, ::g::Fuse::Effects::Effect* e)
{
    __this->OnEffectRenderBoundsChanged(e);
}

// private void OnEffectRenderingChanged(Fuse.Effects.Effect e) :759
void Element__OnEffectRenderingChanged_fn(Element* __this, ::g::Fuse::Effects::Effect* e)
{
    __this->OnEffectRenderingChanged(e);
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :919
void Element__OnHitTest_fn(Element* __this, ::g::Fuse::HitTestContext* htc)
{
    if (__this->ClipToBounds() && !__this->IsPointInside(uPtr(htc)->LocalPoint()))
        return;

    if ((__this->HitTestMode() & 4) == 4)
        __this->OnHitTestChildren(htc);

    if ((__this->HitTestMode() & 1) == 1)
        __this->OnHitTestLocalVisual(htc);

    if ((__this->HitTestMode() & 2) == 2)
    {
        if (__this->IsPointInside(uPtr(htc)->LocalPoint()))
            uPtr(htc)->Hit(__this);
    }
}

// protected virtual void OnHitTestChildren(Fuse.HitTestContext htc) :936
void Element__OnHitTestChildren_fn(Element* __this, ::g::Fuse::HitTestContext* htc)
{
}

// protected virtual void OnHitTestLocalVisual(Fuse.HitTestContext htc) :935
void Element__OnHitTestLocalVisual_fn(Element* __this, ::g::Fuse::HitTestContext* htc)
{
}

// protected override void OnInvalidateLayout() :1818
void Element__OnInvalidateLayout_fn(Element* __this)
{
    ::g::Fuse::Node__OnInvalidateLayout_fn(__this);
    __this->GMSReset();
}

// protected override sealed bool OnInvalidateRenderBounds() :1829
void Element__OnInvalidateRenderBounds_fn(Element* __this, bool* __retval)
{
    __this->_renderBoundsWithoutEffectsDirty = true;
    __this->OnInvalidateRenderBoundsWithEffects();

    if (__this->ElementBatchEntry() != NULL)
        uPtr(__this->ElementBatchEntry())->InvalidateRenderBounds();

    return *__retval = __this->ClipToBounds(), void();
}

// private void OnInvalidateRenderBoundsWithEffects() :1840
void Element__OnInvalidateRenderBoundsWithEffects_fn(Element* __this)
{
    __this->OnInvalidateRenderBoundsWithEffects();
}

// protected override sealed void OnIsEnabledChanged() :1849
void Element__OnIsEnabledChanged_fn(Element* __this)
{
    ::g::Fuse::Node__OnIsEnabledChanged_fn(__this);
    __this->InvalidateVisual();
}

// private static void OnOpacityChanged(Fuse.Elements.Element elm) :1640
void Element__OnOpacityChanged_fn(Element* elm)
{
    Element::OnOpacityChanged(elm);
}

// internal void OnPreplacement() :1428
void Element__OnPreplacement_fn(Element* __this)
{
    __this->OnPreplacement();
}

// protected override void OnResetStyle() :1593
void Element__OnResetStyle_fn(Element* __this)
{
    ::g::Fuse::Effects::Effect* ret38;

    if (__this->_effects != NULL)

        for (int i = 0; i < uPtr(__this->_effects)->Count(); i++)
            if (uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_effects), uCRef<int>(i), &ret38), ret38))->AddedByStyle)
                uPtr(__this->_effects)->RemoveAt(i--);

    ::g::Fuse::Node__OnResetStyle_fn(__this);
}

// protected override void OnRooted() :1553
void Element__OnRooted_fn(Element* __this)
{
    ::g::Fuse::Effects::Effect* ret39;

    if (__this->HasEffects())

        for (uObject* enum7 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->Effects()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[49/*Fuse.Effects.Effect*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum7), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Effects::Effect* e = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum7), ::TYPES[52/*Uno.Collections.IEnumerator<Fuse.Effects.Effect>*/]), &ret39), ret39);
            uPtr(e)->Rooted();
        }

    __this->InvalidateVisualComposition();
    __this->_placedBefore = NULL;
    ::g::Fuse::Node__OnRooted_fn(__this);
}

// protected override void OnUnrooted() :1569
void Element__OnUnrooted_fn(Element* __this)
{
    ::g::Fuse::Effects::Effect* ret40;
    __this->InvalidateVisualComposition();

    if (__this->HasEffects())

        for (uObject* enum8 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->Effects()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[49/*Fuse.Effects.Effect*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum8), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Effects::Effect* e = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum8), ::TYPES[52/*Uno.Collections.IEnumerator<Fuse.Effects.Effect>*/]), &ret40), ret40);
            uPtr(e)->Unrooted();
        }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private static void OnVisibilityChanged(Fuse.Elements.Element elm) :1071
void Element__OnVisibilityChanged_fn(Element* elm)
{
    Element::OnVisibilityChanged(elm);
}

// public float get_Opacity() :1637
void Element__get_Opacity_fn(Element* __this, float* __retval)
{
    *__retval = __this->Opacity();
}

// public void set_Opacity(float value) :1638
void Element__set_Opacity_fn(Element* __this, float* value)
{
    __this->Opacity(*value);
}

// public float4 get_Padding() :1100
void Element__get_Padding_fn(Element* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Padding();
}

// public void set_Padding(float4 value) :1101
void Element__set_Padding_fn(Element* __this, ::g::Uno::Float4* value)
{
    __this->Padding(*value);
}

// internal void PerformPlacement(float2 position, float2 size, Fuse.SizeFlags flags) :1448
void Element__PerformPlacement_fn(Element* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size, int* flags)
{
    __this->PerformPlacement(*position, *size, *flags);
}

// public generated void add_Placed(Fuse.PlacedHandler value) :1419
void Element__add_Placed_fn(Element* __this, uDelegate* value)
{
    __this->add_Placed(value);
}

// public generated void remove_Placed(Fuse.PlacedHandler value) :1419
void Element__remove_Placed_fn(Element* __this, uDelegate* value)
{
    __this->remove_Placed(value);
}

// protected override void PrependImplicitTransform(Fuse.FastMatrix m) :1754
void Element__PrependImplicitTransform_fn(Element* __this, ::g::Fuse::FastMatrix* m)
{
    ::g::Uno::Float2 actualPosition = __this->ActualPosition();

    if ((actualPosition.X != 0.0f) || (actualPosition.Y != 0.0f))
        uPtr(m)->PrependTranslation1(::g::Uno::Float3__New4(::g::Uno::Float2__New2(actualPosition.X, actualPosition.Y), 0.0f));
}

// protected override sealed void PrependInverseTransformOrigin(Fuse.FastMatrix m) :1748
void Element__PrependInverseTransformOrigin_fn(Element* __this, ::g::Fuse::FastMatrix* m)
{
    ::g::Uno::Float3 off = ::g::Fuse::Elements::ITransformOrigin::GetOffset(uInterface(uPtr(__this->TransformOrigin()), ::TYPES[100/*Fuse.Elements.ITransformOrigin*/]), __this);
    uPtr(m)->PrependTranslation1(::g::Uno::Float3__op_UnaryNegation(off));
}

// protected override sealed void PrependTransformOrigin(Fuse.FastMatrix m) :1742
void Element__PrependTransformOrigin_fn(Element* __this, ::g::Fuse::FastMatrix* m)
{
    ::g::Uno::Float3 off = ::g::Fuse::Elements::ITransformOrigin::GetOffset(uInterface(uPtr(__this->TransformOrigin()), ::TYPES[100/*Fuse.Elements.ITransformOrigin*/]), __this);
    uPtr(m)->PrependTranslation1(off);
}

// public generated void add_Preplacement(Fuse.Elements.PreplacementHandler value) :1421
void Element__add_Preplacement_fn(Element* __this, uDelegate* value)
{
    __this->add_Preplacement(value);
}

// public generated void remove_Preplacement(Fuse.Elements.PreplacementHandler value) :1421
void Element__remove_Preplacement_fn(Element* __this, uDelegate* value)
{
    __this->remove_Preplacement(value);
}

// public generated void add_PropertyChanged(Uno.EventHandler value) :1165
void Element__add_PropertyChanged_fn(Element* __this, uDelegate* value)
{
    __this->add_PropertyChanged(value);
}

// public generated void remove_PropertyChanged(Uno.EventHandler value) :1165
void Element__remove_PropertyChanged_fn(Element* __this, uDelegate* value)
{
    __this->remove_PropertyChanged(value);
}

// public Uno.Rect get_RenderBoundsWithEffects() :474
void Element__get_RenderBoundsWithEffects_fn(Element* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->RenderBoundsWithEffects();
}

// public Uno.Rect get_RenderBoundsWithoutEffects() :494
void Element__get_RenderBoundsWithoutEffects_fn(Element* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->RenderBoundsWithoutEffects();
}

// internal void RequestLayout() :1349
void Element__RequestLayout_fn(Element* __this)
{
    __this->RequestLayout();
}

// private static void SetCachingMode(Fuse.Elements.Element elm, Fuse.Elements.CachingMode value) :581
void Element__SetCachingMode_fn(Element* elm, int* value)
{
    Element::SetCachingMode(elm, *value);
}

// private static void SetHeight(Fuse.Elements.Element elm, float val) :1007
void Element__SetHeight_fn(Element* elm, float* val)
{
    Element::SetHeight(elm, *val);
}

// private static void SetTransformOrigin(Fuse.Elements.Element elm, Fuse.Elements.ITransformOrigin value) :1724
void Element__SetTransformOrigin_fn(Element* elm, uObject* value)
{
    Element::SetTransformOrigin(elm, value);
}

// private static void SetWidth(Fuse.Elements.Element elm, float val) :994
void Element__SetWidth_fn(Element* elm, float* val)
{
    Element::SetWidth(elm, *val);
}

// public Fuse.Elements.ITransformOrigin get_TransformOrigin() :1717
void Element__get_TransformOrigin_fn(Element* __this, uObject** __retval)
{
    *__retval = __this->TransformOrigin();
}

// public void set_TransformOrigin(Fuse.Elements.ITransformOrigin value) :1718
void Element__set_TransformOrigin_fn(Element* __this, uObject* value)
{
    __this->TransformOrigin(value);
}

// public Fuse.Elements.Visibility get_Visibility() :1066
void Element__get_Visibility_fn(Element* __this, int* __retval)
{
    *__retval = __this->Visibility();
}

// public void set_Visibility(Fuse.Elements.Visibility value) :1067
void Element__set_Visibility_fn(Element* __this, int* value)
{
    __this->Visibility(*value);
}

// public float get_Width() :990
void Element__get_Width_fn(Element* __this, float* __retval)
{
    *__retval = __this->Width();
}

// public void set_Width(float value) :991
void Element__set_Width_fn(Element* __this, float* value)
{
    __this->Width(*value);
}

// public float get_X() :1122
void Element__get_X_fn(Element* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :1123
void Element__set_X_fn(Element* __this, float* value)
{
    __this->X(*value);
}

// public float get_Y() :1133
void Element__get_Y_fn(Element* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :1134
void Element__set_Y_fn(Element* __this, float* value)
{
    __this->Y(*value);
}

uSStrong< ::g::Fuse::StyleProperty1*> Element::AlignmentProperty_;
uSStrong< ::g::Fuse::StylePropertyWithUnit*> Element::AnchorProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::CachingModeProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::ClipToBoundsProperty_;
uSStrong< ::g::Fuse::StylePropertyWithUnit*> Element::HeightProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::HitTestModeProperty_;
uSStrong< ::g::Fuse::StylePropertyWithUnit*> Element::LimitHeightProperty_;
uSStrong< ::g::Fuse::StylePropertyWithUnit*> Element::LimitWidthProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::MarginProperty_;
uSStrong< ::g::Fuse::StylePropertyWithUnit*> Element::MaxHeightProperty_;
uSStrong< ::g::Fuse::StylePropertyWithUnit*> Element::MaxWidthProperty_;
uSStrong< ::g::Fuse::StylePropertyWithUnit*> Element::MinHeightProperty_;
uSStrong< ::g::Fuse::StylePropertyWithUnit*> Element::MinWidthProperty_;
uSStrong< ::g::Fuse::StylePropertyWithUnit*> Element::OffsetProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::OpacityProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::PaddingProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::TransformOriginProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::VisibilityProperty_;
uSStrong< ::g::Fuse::StylePropertyWithUnit*> Element::WidthProperty_;
uSStrong< ::g::Fuse::StylePropertyWithUnit*> Element::XProperty_;
uSStrong< ::g::Fuse::StylePropertyWithUnit*> Element::YProperty_;

// protected generated Element() [instance] :439
void Element::ctor_1()
{
    _gmsCache = uArray::New(::TYPES[46/*Fuse.Elements.Element.GMSCacheItem[]*/], 2);
    _boxSizing = ::g::Fuse::Elements::StandardBoxSizing::Singleton();
    _transformOrigin = ::g::Fuse::Elements::TransformOrigins::Center();
    _renderBoundsWithoutEffectsDirty = true;
    _renderBoundsWithEffectsDirty = true;
    ctor_();
}

// public float2 get_ActualAnchor() [instance] :1399
::g::Uno::Float2 Element::ActualAnchor()
{
    return _actualAnchor;
}

// internal void set_ActualAnchor(float2 value) [instance] :1400
void Element::ActualAnchor(::g::Uno::Float2 value)
{
    _actualAnchor = value;
}

// public float2 get_ActualPosition() [instance] :1228
::g::Uno::Float2 Element::ActualPosition()
{
    if (_haveActualPositionCache)
        return _actualPositionCache;

    if (!SnapToPixels())
        return _actualPosition;

    ::g::Uno::Float2 parentP = ::g::Uno::Float2__New1(0.0f);

    if (Parent() != NULL)
        parentP = uPtr(Parent())->AbsoluteViewportOrigin();

    ::g::Uno::Float2 p = ::g::Uno::Float2__op_Addition2(parentP, _actualPosition);
    p = Snap(p);
    p = ::g::Uno::Float2__op_Subtraction2(p, parentP);
    _actualPositionCache = p;
    _haveActualPositionCache = true;
    return p;
}

// public float2 get_ActualSize() [instance] :1255
::g::Uno::Float2 Element::ActualSize()
{
    return _actualSize;
}

// public void AddStyleEffect(Fuse.Effects.Effect e) [instance] :698
void Element::AddStyleEffect(::g::Fuse::Effects::Effect* e)
{
    uPtr(e)->AddedByStyle = true;
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Effects()), ::TYPES[50/*Uno.Collections.ICollection<Fuse.Effects.Effect>*/]), e);
}

// public Fuse.Elements.Alignment get_Alignment() [instance] :1056
int Element::Alignment()
{
    int ret42;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::AlignmentProperty()), this, &ret42), ret42);
}

// public void set_Alignment(Fuse.Elements.Alignment value) [instance] :1057
void Element::Alignment(int value)
{
    bool ret43;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::AlignmentProperty()), this, uCRef<int>(value), &ret43);
}

// private Fuse.Elements.Element get_AncestorElement() [instance] :1616
Element* Element::AncestorElement()
{
    ::g::Fuse::Node* n = Parent();

    while (n != NULL)
    {
        Element* elm = uAs<Element*>(n, Element_typeof());

        if (elm != NULL)
            return elm;

        n = uPtr(n)->Parent();
    }

    return NULL;
}

// public float2 get_Anchor() [instance] :1144
::g::Uno::Float2 Element::Anchor()
{
    ::g::Uno::Float2 ret44;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::AnchorProperty()), this, &ret44), ret44);
}

// public void set_Anchor(float2 value) [instance] :1145
void Element::Anchor(::g::Uno::Float2 value)
{
    bool ret45;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::AnchorProperty()), this, uCRef(value), &ret45);
}

// public Fuse.Elements.Element.BoxSizingMode get_BoxSizing() [instance] :1325
int Element::BoxSizing()
{
    return _boxSizingMode;
}

// public void set_BoxSizing(Fuse.Elements.Element.BoxSizingMode value) [instance] :1326
void Element::BoxSizing(int value)
{
    if (value == _boxSizingMode)
        return;

    _boxSizingMode = value;

    switch (_boxSizingMode)
    {
        case 0:
        {
            _boxSizing = ::g::Fuse::Elements::StandardBoxSizing::Singleton();
            break;
        }
        case 1:
        {
            _boxSizing = ::g::Fuse::Elements::NoImplicitMaxBoxSizing::Singleton1();
            break;
        }
        case 2:
        {
            _boxSizing = ::g::Fuse::Elements::LimitBoxSizing::Singleton();
            break;
        }
        case 3:
        {
            _boxSizing = ::g::Fuse::Elements::LayoutMasterBoxSizing::Singleton();
            break;
        }
    }

    InvalidateLayout(2);
}

// internal Fuse.Elements.BoxSizing get_BoxSizingObject() [instance] :1346
::g::Fuse::Elements::BoxSizing* Element::BoxSizingObject()
{
    return _boxSizing;
}

// private Fuse.Elements.Cache get_Cache() [instance] :772
::g::Fuse::Elements::Cache* Element::Cache()
{
    ::g::Fuse::Elements::Cache* ind11 = _cache;
    return (ind11 != NULL) ? ind11 : (::g::Fuse::Elements::Cache*)(_cache = ::g::Fuse::Elements::Cache::New1(this));
}

// public Fuse.Elements.CachingMode get_CachingMode() [instance] :577
int Element::CachingMode()
{
    return _cachingMode;
}

// public void set_CachingMode(Fuse.Elements.CachingMode value) [instance] :578
void Element::CachingMode(int value)
{
    bool ret46;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::CachingModeProperty()), this, uCRef<int>(value), &ret46);
}

// protected Uno.Rect CalcRenderBoundsWithEffects() [instance] :457
::g::Uno::Rect Element::CalcRenderBoundsWithEffects()
{
    ::g::Fuse::Effects::Effect* ret33;
    ::g::Fuse::Effects::Effect* ret34;
    ::g::Uno::Rect r = RenderBoundsWithoutEffects();

    if (HasActiveEffects())

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Effects()), ::TYPES[50/*Uno.Collections.ICollection<Fuse.Effects.Effect>*/])); i++)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Effects()), ::TYPES[51/*Uno.Collections.IList<Fuse.Effects.Effect>*/]), uCRef<int>(i), &ret33), ret33))->Active())
                r = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Effects()), ::TYPES[51/*Uno.Collections.IList<Fuse.Effects.Effect>*/]), uCRef<int>(i), &ret34), ret34))->ModifyRenderBounds(r);

    return r;
}

// public framebuffer CaptureRegion(Fuse.DrawContext dc, Uno.Rect region, float2 padding) [instance] :587
::g::Uno::Graphics::Framebuffer* Element::CaptureRegion(::g::Fuse::DrawContext* dc, ::g::Uno::Rect region, ::g::Uno::Float2 padding)
{
    ::g::Fuse::OrthographicFrustum* collection1;
    ::g::Uno::Float2 sz = ::g::Uno::Float2__op_Addition2(region.Size(), ::g::Uno::Float2__op_Multiply1(padding, 2.0f));
    ::g::Uno::Float2 pixelSize = ::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Multiply1(sz, AbsoluteZoom()));
    ::g::Uno::Int2 fsz = ::g::Uno::Int2__New2((int)pixelSize.X, (int)pixelSize.Y);

    if ((fsz.X > ::g::Uno::Graphics::Texture2D::MaxSize()) || (fsz.Y > ::g::Uno::Graphics::Texture2D::MaxSize()))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[3/*"CaptureRegi...*/], uBox(::TYPES[8/*int2*/], fsz)), ::STRINGS[4/*", max-size: "*/]), uBox<int>(::TYPES[0/*int*/], ::g::Uno::Graphics::Texture2D::MaxSize())), 1, ::STRINGS[5/*"C:\\Program...*/], 596);
        return NULL;
    }

    ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock1(fsz, 3, false);
    collection1 = ::g::Fuse::OrthographicFrustum::New1();
    ::g::Uno::Float2 ind9 = ::g::Uno::Float2__New2(region.Left - padding.X, region.Top - padding.Y);
    uPtr(collection1)->Origin(ind9);
    ;
    uPtr(collection1)->Size(sz);
    sz;
    ::g::Uno::Float4x4 ind10 = WorldTransformInverse();
    uPtr(collection1)->LocalFromWorld(ind10);
    ;
    ::g::Fuse::OrthographicFrustum* cc = collection1;
    uPtr(dc)->PushRenderTargetViewport(fb, (uObject*)cc);
    dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
    LocalDraw(dc);
    dc->PopRenderTargetViewport();
    return fb;
}

// public bool get_ClipToBounds() [instance] :1154
bool Element::ClipToBounds()
{
    bool ret47;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::ClipToBoundsProperty()), this, &ret47), ret47);
}

// public void set_ClipToBounds(bool value) [instance] :1155
void Element::ClipToBounds(bool value)
{
    bool ret48;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::ClipToBoundsProperty()), this, uCRef(value), &ret48);
}

// private void Composit(Fuse.DrawContext dc) [instance] :777
void Element::Composit(::g::Fuse::DrawContext* dc)
{
    if (((Opacity() <= 0.0f) || (RenderBoundsWithEffects().Size().X < 1.0f)) || (RenderBoundsWithEffects().Size().Y < 1.0f))
        return;

    if (Opacity() >= 1.0f)
    {
        uPtr(Cache())->DrawHeuristically(dc);
        return;
    }

    if (FastTrackDrawWithOpacity(dc))
        return;

    uPtr(Cache())->PinAndValidate(dc);
    uPtr(Cache())->Blit(dc, Opacity());
    uPtr(Cache())->Unpin();
}

// internal void CompositEffects(Fuse.DrawContext dc) [instance] :805
void Element::CompositEffects(::g::Fuse::DrawContext* dc)
{
    ::g::Fuse::Effects::Effect* ret35;
    ::g::Fuse::Effects::Effect* ret36;
    ::g::Fuse::Effects::Effect* ret37;
    bool hasActiveEffects = HasActiveEffects() && true;

    if (hasActiveEffects)

        for (uObject* enum3 = (uObject*)uPtr(_effects)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Effects::Effect* e = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[52/*Uno.Collections.IEnumerator<Fuse.Effects.Effect>*/]), &ret35), ret35);

            if ((uPtr(e)->Type() == 0) && uPtr(e)->Active())
            {
                double t;
                uPtr(e)->Render(dc);
            }
        }

    if (hasActiveEffects && HasCompositionEffect())

        for (uObject* enum4 = (uObject*)uPtr(_effects)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum4), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Effects::Effect* e1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum4), ::TYPES[52/*Uno.Collections.IEnumerator<Fuse.Effects.Effect>*/]), &ret36), ret36);

            if ((uPtr(e1)->Type() == 1) && uPtr(e1)->Active())
            {
                double t1;
                uPtr(e1)->Render(dc);
            }
        }
    else
        LocalDraw(dc);

    if (hasActiveEffects)

        for (uObject* enum5 = (uObject*)uPtr(_effects)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum5), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Effects::Effect* e2 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum5), ::TYPES[52/*Uno.Collections.IEnumerator<Fuse.Effects.Effect>*/]), &ret37), ret37);

            if ((uPtr(e2)->Type() == 2) && uPtr(e2)->Active())
            {
                double t2;
                uPtr(e2)->Render(dc);
            }
        }
}

// private void DispatchPlacement() [instance] :1498
void Element::DispatchPlacement()
{
    _pendingDispatchPlacement = false;

    if (::g::Uno::Delegate::op_Inequality(Placed1, NULL))
    {
        ::g::Fuse::PlacedArgs* args = ::g::Fuse::PlacedArgs::New2(_placedBefore != NULL, _ppPrevPosition, ActualPosition(), _ppPrevSize, ActualSize());
        uPtr(Placed1)->Invoke(2, this, args);
    }

    _placedBefore = Parent();
}

// public Uno.Collections.IList<Fuse.Effects.Effect> get_Effects() [instance] :691
uObject* Element::Effects()
{
    if (_effects == NULL)
        _effects = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[63/*Uno.Collections.ObservableList<Fuse.Effects.Effect>*/], uDelegate::New(::TYPES[60/*Uno.Action<Fuse.Effects.Effect>*/], (void*)Element__OnEffectAdded_fn, this), uDelegate::New(::TYPES[60/*Uno.Action<Fuse.Effects.Effect>*/], (void*)Element__OnEffectRemoved_fn, this)));

    return (uObject*)_effects;
}

// internal generated Fuse.Elements.ElementBatchEntry get_ElementBatchEntry() [instance] :775
::g::Fuse::Elements::ElementBatchEntry* Element::ElementBatchEntry()
{
    return _ElementBatchEntry;
}

// internal generated void set_ElementBatchEntry(Fuse.Elements.ElementBatchEntry value) [instance] :775
void Element::ElementBatchEntry(::g::Fuse::Elements::ElementBatchEntry* value)
{
    _ElementBatchEntry = value;
}

// internal Uno.Recti GetViewportInvertPixelRect(Fuse.DrawContext dc, Uno.Rect localRegion) [instance] :520
::g::Uno::Recti Element::GetViewportInvertPixelRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect localRegion)
{
    ::g::Uno::Float4x4 transformMatrix = uPtr(dc)->GetLocalToClipTransform(this);
    ::g::Uno::Rect esr = ::g::Uno::Rect__Transform(localRegion, transformMatrix);
    ::g::Uno::Float2 low = ::g::Uno::Math::Floor2(::g::Uno::Float2__op_Addition(0.005f, ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition1(::g::Uno::Math::Min3(esr.Minimum(), esr.Maximum()), 1.0f), 2.0f), ::g::Uno::Float2__op_Implicit1(dc->GLViewportPixelSize()))));
    ::g::Uno::Float2 high = ::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition1(::g::Uno::Math::Max3(esr.Minimum(), esr.Maximum()), 1.0f), 2.0f), ::g::Uno::Float2__op_Implicit1(dc->GLViewportPixelSize())), 0.005f));
    ::g::Uno::Recti r = ::g::Uno::Recti__New1((int)low.X, (int)((float)dc->GLViewportPixelSize().Y - high.Y), (int)high.X, (int)((float)dc->GLViewportPixelSize().Y - low.Y));
    return r;
}

// public Uno.Recti GetVisibleViewportInvertPixelRect(Fuse.DrawContext dc, Uno.Rect localRegion) [instance] :536
::g::Uno::Recti Element::GetVisibleViewportInvertPixelRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect localRegion)
{
    if (localRegion.IsInfinite())
        return uPtr(dc)->Scissor();

    ::g::Uno::Recti s = uPtr(dc)->Scissor();
    ::g::Uno::Recti v = GetViewportInvertPixelRect(dc, localRegion);
    ::g::Uno::Recti i = ::g::Uno::Recti__Intersect(s, v);

    if ((i.Size().X < 0) || (i.Size().Y < 0))
        return ::g::Uno::Recti__New1(0, 0, 0, 0);

    return i;
}

// private void GMSReset() [instance] :1307
void Element::GMSReset()
{
    _gmsCount = 0;
    _gmsAt = 0;
}

// public bool get_HasActiveEffects() [instance] :713
bool Element::HasActiveEffects()
{
    ::g::Fuse::Effects::Effect* ret49;

    if (HasEffects())

        for (uObject* enum2 = (uObject*)uPtr(_effects)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Effects::Effect* e = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[52/*Uno.Collections.IEnumerator<Fuse.Effects.Effect>*/]), &ret49), ret49);

            if (uPtr(e)->Active())
                return true;
        }

    return false;
}

// public bool get_HasCompositionEffect() [instance] :733
bool Element::HasCompositionEffect()
{
    return _compositionEffects > 0;
}

// public bool get_HasEffects() [instance] :707
bool Element::HasEffects()
{
    return (_effects != NULL) && (uPtr(_effects)->Count() > 0);
}

// public float get_Height() [instance] :1003
float Element::Height()
{
    return _height;
}

// public void set_Height(float value) [instance] :1004
void Element::Height(float value)
{
    bool ret50;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::HeightProperty()), this, uCRef(value), &ret50);
}

// public Fuse.Elements.HitTestMode get_HitTestMode() [instance] :915
int Element::HitTestMode()
{
    int ret52;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::HitTestModeProperty()), this, &ret52), ret52);
}

// public void set_HitTestMode(Fuse.Elements.HitTestMode value) [instance] :916
void Element::HitTestMode(int value)
{
    bool ret53;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::HitTestModeProperty()), this, uCRef<int>(value), &ret53);
}

// internal float2 get_IntendedPosition() [instance] :1265
::g::Uno::Float2 Element::IntendedPosition()
{
    return ActualPosition();
}

// internal float2 get_IntendedSize() [instance] :1260
::g::Uno::Float2 Element::IntendedSize()
{
    return _intendedSize;
}

// internal void InternArrangePaddingBox(float2 avsize, Fuse.SizeFlags flags) [instance] :1512
void Element::InternArrangePaddingBox(::g::Uno::Float2 avsize, int flags)
{
    ArrangePaddingBox(avsize, flags);
}

// internal float2 InternGetContentSize(float2 fillSize, Fuse.SizeFlags fillSet) [instance] :1386
::g::Uno::Float2 Element::InternGetContentSize(::g::Uno::Float2 fillSize, int fillSet)
{
    return GetContentSize(fillSize, fillSet);
}

// public void InvalidateRenderBoundsWithEffects() [instance] :1856
void Element::InvalidateRenderBoundsWithEffects()
{
    OnInvalidateRenderBoundsWithEffects();

    if (Parent() != NULL)
        uPtr(Parent())->InvalidateRenderBounds();
}

// public void InvalidateVisualComposition() [instance] :1806
void Element::InvalidateVisualComposition()
{
    if (ElementBatchEntry() != NULL)
        uPtr(ElementBatchEntry())->InvalidateVisualComposition();

    ::g::Fuse::Node* p = Parent();

    if (p != NULL)
        uPtr(p)->InvalidateVisual();
    else
        InvalidateVisual();
}

// public bool IsPointInside(float2 localPoint) [instance] :904
bool Element::IsPointInside(::g::Uno::Float2 localPoint)
{
    return !((((localPoint.X < 0.0f) || (localPoint.Y < 0.0f)) || (localPoint.X > ActualSize().X)) || (localPoint.Y > ActualSize().Y));
}

// public float get_LimitHeight() [instance] :2258
float Element::LimitHeight()
{
    float ret54;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::LimitHeightProperty()), this, &ret54), ret54);
}

// public void set_LimitHeight(float value) [instance] :2259
void Element::LimitHeight(float value)
{
    bool ret55;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::LimitHeightProperty()), this, uCRef(value), &ret55);
}

// public float get_LimitWidth() [instance] :2267
float Element::LimitWidth()
{
    float ret56;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::LimitWidthProperty()), this, &ret56), ret56);
}

// public void set_LimitWidth(float value) [instance] :2268
void Element::LimitWidth(float value)
{
    bool ret57;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::LimitWidthProperty()), this, uCRef(value), &ret57);
}

// internal void LocalDraw(Fuse.DrawContext dc) [instance] :660
void Element::LocalDraw(::g::Fuse::DrawContext* dc)
{
    OnDraw(dc);
}

// public float4 get_Margin() [instance] :1089
::g::Uno::Float4 Element::Margin()
{
    ::g::Uno::Float4 ret58;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::MarginProperty()), this, &ret58), ret58);
}

// public void set_Margin(float4 value) [instance] :1090
void Element::Margin(::g::Uno::Float4 value)
{
    bool ret59;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::MarginProperty()), this, uCRef(value), &ret59);
}

// public float get_MaxHeight() [instance] :1046
float Element::MaxHeight()
{
    float ret60;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::MaxHeightProperty()), this, &ret60), ret60);
}

// public void set_MaxHeight(float value) [instance] :1047
void Element::MaxHeight(float value)
{
    bool ret61;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::MaxHeightProperty()), this, uCRef(value), &ret61);
}

// public float get_MaxWidth() [instance] :1036
float Element::MaxWidth()
{
    float ret62;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::MaxWidthProperty()), this, &ret62), ret62);
}

// public void set_MaxWidth(float value) [instance] :1037
void Element::MaxWidth(float value)
{
    bool ret63;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::MaxWidthProperty()), this, uCRef(value), &ret63);
}

// public float get_MinHeight() [instance] :1026
float Element::MinHeight()
{
    float ret64;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::MinHeightProperty()), this, &ret64), ret64);
}

// public void set_MinHeight(float value) [instance] :1027
void Element::MinHeight(float value)
{
    bool ret65;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::MinHeightProperty()), this, uCRef(value), &ret65);
}

// public float get_MinWidth() [instance] :1016
float Element::MinWidth()
{
    float ret66;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::MinWidthProperty()), this, &ret66), ret66);
}

// public void set_MinWidth(float value) [instance] :1017
void Element::MinWidth(float value)
{
    bool ret67;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::MinWidthProperty()), this, uCRef(value), &ret67);
}

// private bool get_NeedsClipping() [instance] :488
bool Element::NeedsClipping()
{
    return ClipToBounds();
}

// private void NotifyPropertyChanged() [instance] :1167
void Element::NotifyPropertyChanged()
{
    if (::g::Uno::Delegate::op_Inequality(PropertyChanged1, NULL))
        uPtr(PropertyChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public float2 get_Offset() [instance] :1111
::g::Uno::Float2 Element::Offset()
{
    ::g::Uno::Float2 ret68;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::OffsetProperty()), this, &ret68), ret68);
}

// public void set_Offset(float2 value) [instance] :1112
void Element::Offset(::g::Uno::Float2 value)
{
    bool ret69;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::OffsetProperty()), this, uCRef(value), &ret69);
}

// private void OnEffectAdded(Fuse.Effects.Effect e) [instance] :736
void Element::OnEffectAdded(::g::Fuse::Effects::Effect* e)
{
    if (uPtr(e)->Type() == 1)
        _compositionEffects++;

    uPtr(e)->Added(this);
    e->add_RenderingChanged(uDelegate::New(::TYPES[60/*Uno.Action<Fuse.Effects.Effect>*/], (void*)Element__OnEffectRenderingChanged_fn, this));
    e->add_RenderBoundsChanged(uDelegate::New(::TYPES[60/*Uno.Action<Fuse.Effects.Effect>*/], (void*)Element__OnEffectRenderBoundsChanged_fn, this));
    InvalidateVisual();
}

// private void OnEffectRemoved(Fuse.Effects.Effect e) [instance] :747
void Element::OnEffectRemoved(::g::Fuse::Effects::Effect* e)
{
    if (uPtr(e)->Type() == 1)
        _compositionEffects--;

    uPtr(e)->Removed(this);
    e->remove_RenderingChanged(uDelegate::New(::TYPES[60/*Uno.Action<Fuse.Effects.Effect>*/], (void*)Element__OnEffectRenderingChanged_fn, this));
    e->remove_RenderBoundsChanged(uDelegate::New(::TYPES[60/*Uno.Action<Fuse.Effects.Effect>*/], (void*)Element__OnEffectRenderBoundsChanged_fn, this));
    InvalidateVisual();
    e->AddedByStyle = false;
}

// private void OnEffectRenderBoundsChanged(Fuse.Effects.Effect e) [instance] :764
void Element::OnEffectRenderBoundsChanged(::g::Fuse::Effects::Effect* e)
{
    InvalidateRenderBoundsWithEffects();
}

// private void OnEffectRenderingChanged(Fuse.Effects.Effect e) [instance] :759
void Element::OnEffectRenderingChanged(::g::Fuse::Effects::Effect* e)
{
    InvalidateVisual();
}

// private void OnInvalidateRenderBoundsWithEffects() [instance] :1840
void Element::OnInvalidateRenderBoundsWithEffects()
{
    if (ElementBatchEntry() != NULL)
        uPtr(ElementBatchEntry())->InvalidateRenderBounds();

    _renderBoundsWithEffectsDirty = true;
}

// internal void OnPreplacement() [instance] :1428
void Element::OnPreplacement()
{
    if (::g::Uno::Delegate::op_Inequality(Preplacement1, NULL))
        uPtr(Preplacement1)->Invoke(2, this, (::g::Fuse::Elements::PreplacementArgs*)::g::Fuse::Elements::PreplacementArgs::New2(_placedBefore != NULL));
}

// public float get_Opacity() [instance] :1637
float Element::Opacity()
{
    float ret70;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::OpacityProperty()), this, &ret70), ret70);
}

// public void set_Opacity(float value) [instance] :1638
void Element::Opacity(float value)
{
    bool ret71;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::OpacityProperty()), this, uCRef(value), &ret71);
}

// public float4 get_Padding() [instance] :1100
::g::Uno::Float4 Element::Padding()
{
    ::g::Uno::Float4 ret72;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::PaddingProperty()), this, &ret72), ret72);
}

// public void set_Padding(float4 value) [instance] :1101
void Element::Padding(::g::Uno::Float4 value)
{
    bool ret73;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::PaddingProperty()), this, uCRef(value), &ret73);
}

// internal void PerformPlacement(float2 position, float2 size, Fuse.SizeFlags flags) [instance] :1448
void Element::PerformPlacement(::g::Uno::Float2 position, ::g::Uno::Float2 size, int flags)
{
    bool temp = (flags & 4) == 4;
    ::g::Uno::Float2 s = ::g::Uno::Math::Max3(size, ::g::Uno::Float2__New1(0.0f));
    _ppPrevSize = _intendedSize;
    _ppPrevPosition = ActualPosition();
    bool newSize = (_ppPrevSize.X != s.X) || (_ppPrevSize.Y != s.Y);
    bool newPosition = (_ppPrevPosition.X != position.X) || (_ppPrevPosition.Y != position.Y);
    bool newParent = _placedBefore != Parent();

    if ((newParent || newPosition) || newSize)
    {
        if (!temp && !_pendingDispatchPlacement)
        {
            OnPreplacement();

            if (::g::Uno::Delegate::op_Inequality(Placed1, NULL))
            {
                ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[64/*Uno.Action*/], (void*)Element__DispatchPlacement_fn, this));
                _pendingDispatchPlacement = true;
            }
            else
                _placedBefore = Parent();
        }
    }

    if (newSize)
    {
        _actualSize = (_intendedSize = s);
        InvalidateVisual();
    }

    if (newPosition)
    {
        _actualPosition = position;
        _haveActualPositionCache = false;
        InvalidateVisualComposition();
    }

    if ((newParent || newPosition) || newSize)
    {
        InvalidateRenderBounds();
        InvalidateLocalTransform();
    }
}

// public generated void add_Placed(Fuse.PlacedHandler value) [instance] :1419
void Element::add_Placed(uDelegate* value)
{
    Placed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Placed1, value), ::TYPES[54/*Fuse.PlacedHandler*/]);
}

// public generated void remove_Placed(Fuse.PlacedHandler value) [instance] :1419
void Element::remove_Placed(uDelegate* value)
{
    Placed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Placed1, value), ::TYPES[54/*Fuse.PlacedHandler*/]);
}

// public generated void add_Preplacement(Fuse.Elements.PreplacementHandler value) [instance] :1421
void Element::add_Preplacement(uDelegate* value)
{
    Preplacement1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Preplacement1, value), ::TYPES[62/*Fuse.Elements.PreplacementHandler*/]);
}

// public generated void remove_Preplacement(Fuse.Elements.PreplacementHandler value) [instance] :1421
void Element::remove_Preplacement(uDelegate* value)
{
    Preplacement1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Preplacement1, value), ::TYPES[62/*Fuse.Elements.PreplacementHandler*/]);
}

// public generated void add_PropertyChanged(Uno.EventHandler value) [instance] :1165
void Element::add_PropertyChanged(uDelegate* value)
{
    PropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PropertyChanged1, value), ::TYPES[57/*Uno.EventHandler*/]);
}

// public generated void remove_PropertyChanged(Uno.EventHandler value) [instance] :1165
void Element::remove_PropertyChanged(uDelegate* value)
{
    PropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PropertyChanged1, value), ::TYPES[57/*Uno.EventHandler*/]);
}

// public Uno.Rect get_RenderBoundsWithEffects() [instance] :474
::g::Uno::Rect Element::RenderBoundsWithEffects()
{
    if (_renderBoundsWithEffectsDirty)
    {
        _renderBoundsWithEffects = CalcRenderBoundsWithEffects();
        _renderBoundsWithEffectsDirty = false;
    }

    return _renderBoundsWithEffects;
}

// public Uno.Rect get_RenderBoundsWithoutEffects() [instance] :494
::g::Uno::Rect Element::RenderBoundsWithoutEffects()
{
    if (_renderBoundsWithoutEffectsDirty)
    {
        _renderBoundsWithoutEffects = CalcRenderBounds();

        if (ClipToBounds())
            _renderBoundsWithoutEffects = ::g::Uno::Rect__Intersect(_renderBoundsWithoutEffects, ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), ActualSize()));

        _renderBoundsWithoutEffectsDirty = false;
    }

    return _renderBoundsWithoutEffects;
}

// internal void RequestLayout() [instance] :1349
void Element::RequestLayout()
{
    uPtr(_boxSizing)->RequestLayout(this);
}

// public Fuse.Elements.ITransformOrigin get_TransformOrigin() [instance] :1717
uObject* Element::TransformOrigin()
{
    return _transformOrigin;
}

// public void set_TransformOrigin(Fuse.Elements.ITransformOrigin value) [instance] :1718
void Element::TransformOrigin(uObject* value)
{
    bool ret74;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::TransformOriginProperty()), this, value, &ret74);
}

// public Fuse.Elements.Visibility get_Visibility() [instance] :1066
int Element::Visibility()
{
    int ret75;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::VisibilityProperty()), this, &ret75), ret75);
}

// public void set_Visibility(Fuse.Elements.Visibility value) [instance] :1067
void Element::Visibility(int value)
{
    bool ret76;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::VisibilityProperty()), this, uCRef<int>(value), &ret76);
}

// public float get_Width() [instance] :990
float Element::Width()
{
    return _width;
}

// public void set_Width(float value) [instance] :991
void Element::Width(float value)
{
    bool ret77;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::WidthProperty()), this, uCRef(value), &ret77);
}

// public float get_X() [instance] :1122
float Element::X()
{
    float ret78;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::XProperty()), this, &ret78), ret78);
}

// public void set_X(float value) [instance] :1123
void Element::X(float value)
{
    bool ret79;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::XProperty()), this, uCRef(value), &ret79);
}

// public float get_Y() [instance] :1133
float Element::Y()
{
    float ret80;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::YProperty()), this, &ret80), ret80);
}

// public void set_Y(float value) [instance] :1134
void Element::Y(float value)
{
    bool ret81;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::YProperty()), this, uCRef(value), &ret81);
}

// private static Fuse.Elements.CachingMode GetCachingMode(Fuse.Elements.Element elm) [static] :580
int Element::GetCachingMode(Element* elm)
{
    Element_typeof()->Init();
    return uPtr(elm)->_cachingMode;
}

// private static float GetHeight(Fuse.Elements.Element elm) [static] :1006
float Element::GetHeight(Element* elm)
{
    Element_typeof()->Init();
    return uPtr(elm)->_height;
}

// private static Fuse.Elements.ITransformOrigin GetTransformOrigin(Fuse.Elements.Element elm) [static] :1720
uObject* Element::GetTransformOrigin(Element* elm)
{
    Element_typeof()->Init();
    return uPtr(elm)->_transformOrigin;
}

// private static float GetWidth(Fuse.Elements.Element elm) [static] :993
float Element::GetWidth(Element* elm)
{
    Element_typeof()->Init();
    return uPtr(elm)->_width;
}

// private static void InvalidateLocalTransform(Fuse.Elements.Element elm) [static] :1728
void Element::InvalidateLocalTransform1(Element* elm)
{
    Element_typeof()->Init();
    uPtr(elm)->InvalidateLocalTransform();
}

// private static void OnCachingModeChanged(Fuse.Elements.Element elm) [static] :582
void Element::OnCachingModeChanged(Element* elm)
{
    Element_typeof()->Init();
    uPtr(elm)->InvalidateVisual();
}

// private static void OnClipToBoundsChanged(Fuse.Elements.Element elm) [static] :1158
void Element::OnClipToBoundsChanged(Element* elm)
{
    Element_typeof()->Init();
    uPtr(elm)->InvalidateVisual();
    elm->InvalidateHitTestBounds();
    elm->NotifyPropertyChanged();
}

// private static void OnOpacityChanged(Fuse.Elements.Element elm) [static] :1640
void Element::OnOpacityChanged(Element* elm)
{
    Element_typeof()->Init();
    uPtr(elm)->InvalidateVisualComposition();
    elm->NotifyPropertyChanged();
}

// private static void OnVisibilityChanged(Fuse.Elements.Element elm) [static] :1071
void Element::OnVisibilityChanged(Element* elm)
{
    Element_typeof()->Init();
    uPtr(elm)->OnLocalVisibleChanged();

    if ((elm->_oldVisibility == 1) || (elm->Visibility() == 1))
        elm->InvalidateLayout(2);

    elm->_oldVisibility = elm->Visibility();
    elm->InvalidateVisualComposition();
}

// private static void SetCachingMode(Fuse.Elements.Element elm, Fuse.Elements.CachingMode value) [static] :581
void Element::SetCachingMode(Element* elm, int value)
{
    Element_typeof()->Init();
    uPtr(elm)->_cachingMode = value;
}

// private static void SetHeight(Fuse.Elements.Element elm, float val) [static] :1007
void Element::SetHeight(Element* elm, float val)
{
    Element_typeof()->Init();
    uPtr(elm)->_height = val;
}

// private static void SetTransformOrigin(Fuse.Elements.Element elm, Fuse.Elements.ITransformOrigin value) [static] :1724
void Element::SetTransformOrigin(Element* elm, uObject* value)
{
    Element_typeof()->Init();
    uPtr(elm)->_transformOrigin = value;
}

// private static void SetWidth(Fuse.Elements.Element elm, float val) [static] :994
void Element::SetWidth(Element* elm, float val)
{
    Element_typeof()->Init();
    uPtr(elm)->_width = val;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Caching\$.uno(630)
// -------------------------------------------------------------------

// internal sealed class ElementAtlas :630
// {
uType* ElementAtlas_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ElementAtlas);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.ElementAtlas", options);
    type->fp_ctor_ = (void*)ElementAtlas__New1_fn;
    ::STRINGS[8] = uString::Const("element not already inserted anywhere!");
    ::STRINGS[9] = uString::Const("wrong atlas again, dummy!");
    ::STRINGS[10] = uString::Const("Removing from wrong atlas");
    ::TYPES[69] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::Element_typeof());
    ::TYPES[70] = ::g::Fuse::Elements::ElementAtlasFramebuffer_typeof();
    ::TYPES[57] = ::g::Uno::EventHandler_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[6] = ::g::Uno::Recti_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[71] = ::g::Fuse::Elements::ElementBatchEntry_typeof();
    ::TYPES[72] = ::g::Fuse::Elements::DisplayHelpers_typeof();
    ::TYPES[73] = ::g::Fuse::Elements::TextureAtlas_typeof();
    ::TYPES[74] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::Element_typeof());
    ::TYPES[4] = ::g::Fuse::Node_typeof();
    ::TYPES[3] = ::g::Uno::Float2_typeof();
    ::TYPES[18] = ::g::Fuse::OrthographicFrustum_typeof();
    ::TYPES[23] = ::g::Fuse::IViewport_typeof();
    ::TYPES[19] = ::g::Fuse::IFrustum_typeof();
    ::TYPES[12] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[7] = ::g::Uno::Rect_typeof();
    ::TYPES[5] = ::g::Uno::Float_typeof();
    ::TYPES[8] = ::g::Uno::Int2_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::Element_typeof()), offsetof(::g::Fuse::Elements::ElementAtlas, _elements), 0,
        ::g::Fuse::Elements::ElementAtlasFramebuffer_typeof(), offsetof(::g::Fuse::Elements::ElementAtlas, _framebuffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Elements::ElementAtlas, _invalidElements), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Elements::ElementAtlas, _spilledPixels), 0,
        ::g::Fuse::Elements::TextureAtlas_typeof(), offsetof(::g::Fuse::Elements::ElementAtlas, _textureAtlas), 0);
    return type;
}

// public ElementAtlas() :642
void ElementAtlas__ctor__fn(ElementAtlas* __this)
{
    __this->ctor_();
}

// public bool AddElement(Fuse.Elements.Element elm) :673
void ElementAtlas__AddElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm, bool* __retval)
{
    *__retval = __this->AddElement(elm);
}

// public void Dispose() :649
void ElementAtlas__Dispose_fn(ElementAtlas* __this)
{
    __this->Dispose();
}

// private void FillFramebuffer(Fuse.DrawContext dc, bool drawAll, Uno.Rect scissorRectInClipSpace) :789
void ElementAtlas__FillFramebuffer_fn(ElementAtlas* __this, ::g::Fuse::DrawContext* dc, bool* drawAll, ::g::Uno::Rect* scissorRectInClipSpace)
{
    __this->FillFramebuffer(dc, *drawAll, *scissorRectInClipSpace);
}

// public static Uno.Rect GetScissorRectInClipSpace(Fuse.DrawContext dc) :757
void ElementAtlas__GetScissorRectInClipSpace_fn(::g::Fuse::DrawContext* dc, ::g::Uno::Rect* __retval)
{
    *__retval = ElementAtlas::GetScissorRectInClipSpace(dc);
}

// internal void InvalidateElement(Fuse.Elements.Element elm) :660
void ElementAtlas__InvalidateElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->InvalidateElement(elm);
}

// public ElementAtlas New() :642
void ElementAtlas__New1_fn(ElementAtlas** __retval)
{
    *__retval = ElementAtlas::New1();
}

// private void OnFramebufferCollected(object sender, Uno.EventArgs eventArgs) :654
void ElementAtlas__OnFramebufferCollected_fn(ElementAtlas* __this, uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    __this->OnFramebufferCollected(sender, eventArgs);
}

// public framebuffer PinAndValidateFramebuffer(Fuse.DrawContext dc) :762
void ElementAtlas__PinAndValidateFramebuffer_fn(ElementAtlas* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->PinAndValidateFramebuffer(dc);
}

// public bool ReinsertElement(Fuse.Elements.Element elm) :715
void ElementAtlas__ReinsertElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm, bool* __retval)
{
    *__retval = __this->ReinsertElement(elm);
}

// public void RemoveElement(Fuse.Elements.Element elm) :697
void ElementAtlas__RemoveElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->RemoveElement(elm);
}

// public float get_SpilledRatio() :638
void ElementAtlas__get_SpilledRatio_fn(ElementAtlas* __this, float* __retval)
{
    *__retval = __this->SpilledRatio();
}

// public void Unpin() :784
void ElementAtlas__Unpin_fn(ElementAtlas* __this)
{
    __this->Unpin();
}

// private static float2 WindowCoordToClipSpace(float2 input, int2 viewportSize) :743
void ElementAtlas__WindowCoordToClipSpace_fn(::g::Uno::Float2* input, ::g::Uno::Int2* viewportSize, ::g::Uno::Float2* __retval)
{
    *__retval = ElementAtlas::WindowCoordToClipSpace(*input, *viewportSize);
}

// private static Uno.Rect WindowRectToClipSpace(Uno.Rect input, int2 viewportSize) :748
void ElementAtlas__WindowRectToClipSpace_fn(::g::Uno::Rect* input, ::g::Uno::Int2* viewportSize, ::g::Uno::Rect* __retval)
{
    *__retval = ElementAtlas::WindowRectToClipSpace(*input, *viewportSize);
}

// public ElementAtlas() [instance] :642
void ElementAtlas::ctor_()
{
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[69/*Uno.Collections.List<Fuse.Elements.Element>*/]));
    _framebuffer = ::g::Fuse::Elements::ElementAtlasFramebuffer::New1();
    uPtr(_framebuffer)->add_FramebufferCollected(uDelegate::New(::TYPES[57/*Uno.EventHandler*/], (void*)ElementAtlas__OnFramebufferCollected_fn, this));
    _textureAtlas = ::g::Fuse::Elements::TextureAtlas::New1(::g::Fuse::Elements::ElementAtlasFramebuffer::Size());
}

// public bool AddElement(Fuse.Elements.Element elm) [instance] :673
bool ElementAtlas::AddElement(::g::Fuse::Elements::Element* elm)
{
    ::g::Uno::Recti cacheRect;

    if (!::g::Fuse::Elements::Cache::GetCachingRect1(elm, &cacheRect))
        return false;

    ::g::Uno::Recti rect;

    if (!uPtr(_textureAtlas)->AddRect(cacheRect.Size(), &rect))
        return false;

    if (uPtr(elm)->ElementBatchEntry() == NULL)
        uPtr(elm)->ElementBatchEntry(::g::Fuse::Elements::ElementBatchEntry::New1(elm));

    ::g::Fuse::Elements::ElementBatchEntry* entry = elm->ElementBatchEntry();

    if (uPtr(entry)->_atlas != NULL)
        uPtr(uPtr(entry)->_atlas)->RemoveElement(elm);

    entry->_atlas = this;
    entry->_rect = rect;
    ::g::Uno::Collections::List__Add_fn(uPtr(_elements), elm);
    _invalidElements++;
    entry->IsValid = false;
    return true;
}

// public void Dispose() [instance] :649
void ElementAtlas::Dispose()
{
    uPtr(_framebuffer)->Dispose();
}

// private void FillFramebuffer(Fuse.DrawContext dc, bool drawAll, Uno.Rect scissorRectInClipSpace) [instance] :789
void ElementAtlas::FillFramebuffer(::g::Fuse::DrawContext* dc, bool drawAll, ::g::Uno::Rect scissorRectInClipSpace)
{
    ::g::Fuse::OrthographicFrustum* collection3;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::Element*> > ret7;
    float density = ::g::Fuse::Elements::DisplayHelpers::PointDensity();
    ::g::Uno::Float2 viewport = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(_textureAtlas)->Size()), density);

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::Element*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret7), ret7); enum2.MoveNext(::TYPES[74/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::Element* elm = enum2.Current(::TYPES[74/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]);
        ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();

        if (!uPtr(entry)->IsValid || drawAll)
        {
            ::g::Uno::Float4x4 localToClipTransform = uPtr(dc)->GetLocalToClipTransform(elm);
            ::g::Uno::Rect visibleRect = ::g::Uno::Rect__Transform(uPtr(elm)->RenderBoundsWithEffects(), localToClipTransform);

            if (!scissorRectInClipSpace.Intersects(visibleRect))
                continue;

            ::g::Uno::Recti cachingRect = ::g::Fuse::Elements::ElementBatch::GetCachingRect(elm);
            ::g::Uno::Float2 offset = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(::g::Uno::Int2__op_Subtraction1(uPtr(entry)->_rect.Minimum(), cachingRect.Minimum())), density);
            ::g::Uno::Float4x4 translation = ::g::Uno::Matrix::Translation(offset.X, offset.Y, 0.0f);
            collection3 = ::g::Fuse::OrthographicFrustum::New1();
            ::g::Uno::Float2 ind4 = ::g::Uno::Float2__New2(0.0f, 0.0f);
            uPtr(collection3)->Origin(ind4);
            ;
            uPtr(collection3)->Size(viewport);
            viewport;
            ::g::Uno::Float4x4 ind5 = ::g::Uno::Matrix::Mul8(elm->WorldTransformInverse(), translation);
            uPtr(collection3)->LocalFromWorld(ind5);
            ;
            ::g::Fuse::OrthographicFrustum* cc = collection3;
            dc->PushViewport((uObject*)::g::Fuse::FixedViewport::New1(uPtr(_textureAtlas)->Size(), density, (uObject*)cc));
            dc->PushScissor(entry->_rect);

            if (!drawAll)
                dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);

            elm->CompositEffects(dc);
            dc->PopScissor();
            dc->PopViewport();

            if (!entry->IsValid)
                _invalidElements--;

            entry->IsValid = true;
        }
    }
}

// internal void InvalidateElement(Fuse.Elements.Element elm) [instance] :660
void ElementAtlas::InvalidateElement(::g::Fuse::Elements::Element* elm)
{
    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();

    if (entry == NULL)
        return;

    if (uPtr(entry)->IsValid)
    {
        _invalidElements++;
        uPtr(entry)->IsValid = false;
    }
}

// private void OnFramebufferCollected(object sender, Uno.EventArgs eventArgs) [instance] :654
void ElementAtlas::OnFramebufferCollected(uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::Element*> > ret8;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::Element*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret8), ret8); enum1.MoveNext(::TYPES[74/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::Element* elm = enum1.Current(::TYPES[74/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]);
        InvalidateElement(elm);
    }
}

// public framebuffer PinAndValidateFramebuffer(Fuse.DrawContext dc) [instance] :762
::g::Uno::Graphics::Framebuffer* ElementAtlas::PinAndValidateFramebuffer(::g::Fuse::DrawContext* dc)
{
    ::g::Uno::Graphics::Framebuffer* fb = uPtr(_framebuffer)->Pin();

    if (_invalidElements > 0)
    {
        ::g::Uno::Rect scissorRectInClipSpace = ElementAtlas::GetScissorRectInClipSpace(dc);
        uPtr(dc)->PushRenderTarget(fb);
        bool drawAll = _invalidElements == uPtr(_elements)->Count();

        if (drawAll)
        {
            uPtr(dc)->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
            FillFramebuffer(dc, true, scissorRectInClipSpace);
        }
        else
            FillFramebuffer(dc, false, scissorRectInClipSpace);

        dc->PopRenderTarget();
    }

    return fb;
}

// public bool ReinsertElement(Fuse.Elements.Element elm) [instance] :715
bool ElementAtlas::ReinsertElement(::g::Fuse::Elements::Element* elm)
{
    if (uPtr(elm)->ElementBatchEntry() == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[8/*"element not...*/]));

    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();

    if (uPtr(entry)->_atlas != this)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[9/*"wrong atlas...*/]));

    ::g::Uno::Recti cacheRect;

    if (!::g::Fuse::Elements::Cache::GetCachingRect1(elm, &cacheRect))
        return false;

    ::g::Uno::Recti rect;

    if (!uPtr(_textureAtlas)->AddRect(cacheRect.Size(), &rect))
        return false;

    _spilledPixels = (_spilledPixels + uPtr(entry)->_rect.Area());
    entry->_rect = rect;

    if (entry->IsValid)
    {
        _invalidElements++;
        uPtr(entry)->IsValid = false;
    }

    return true;
}

// public void RemoveElement(Fuse.Elements.Element elm) [instance] :697
void ElementAtlas::RemoveElement(::g::Fuse::Elements::Element* elm)
{
    bool ret9;
    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();

    if (uPtr(entry)->_atlas != this)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[10/*"Removing fr...*/]));

    _spilledPixels = (_spilledPixels + uPtr(entry)->_rect.Area());

    if (!entry->IsValid)
        _invalidElements--;

    ::g::Uno::Collections::List__Remove_fn(uPtr(_elements), elm, &ret9);
    entry->_atlas = NULL;
}

// public float get_SpilledRatio() [instance] :638
float ElementAtlas::SpilledRatio()
{
    return (float)_spilledPixels / (float)(uPtr(_textureAtlas)->Size().X * uPtr(_textureAtlas)->Size().Y);
}

// public void Unpin() [instance] :784
void ElementAtlas::Unpin()
{
    uPtr(_framebuffer)->Unpin();
}

// public static Uno.Rect GetScissorRectInClipSpace(Fuse.DrawContext dc) [static] :757
::g::Uno::Rect ElementAtlas::GetScissorRectInClipSpace(::g::Fuse::DrawContext* dc)
{
    return ElementAtlas::WindowRectToClipSpace(::g::Uno::Rect__op_Implicit(uPtr(dc)->Scissor()), uPtr(dc)->GLViewportPixelSize());
}

// public ElementAtlas New() [static] :642
ElementAtlas* ElementAtlas::New1()
{
    ElementAtlas* obj6 = (ElementAtlas*)uNew(ElementAtlas_typeof());
    obj6->ctor_();
    return obj6;
}

// private static float2 WindowCoordToClipSpace(float2 input, int2 viewportSize) [static] :743
::g::Uno::Float2 ElementAtlas::WindowCoordToClipSpace(::g::Uno::Float2 input, ::g::Uno::Int2 viewportSize)
{
    return ::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Division2(input, ::g::Uno::Float2__op_Implicit1(viewportSize)), 2.0f), 1.0f);
}

// private static Uno.Rect WindowRectToClipSpace(Uno.Rect input, int2 viewportSize) [static] :748
::g::Uno::Rect ElementAtlas::WindowRectToClipSpace(::g::Uno::Rect input, ::g::Uno::Int2 viewportSize)
{
    ::g::Uno::Float2 leftTop = ElementAtlas::WindowCoordToClipSpace(input.LeftTop(), viewportSize);
    ::g::Uno::Float2 rightBottom = ElementAtlas::WindowCoordToClipSpace(input.RightBottom(), viewportSize);
    return ::g::Uno::Rect__ContainingPoints(::g::Uno::Float2__New2(leftTop.X, -leftTop.Y), ::g::Uno::Float2__New2(rightBottom.X, -rightBottom.Y));
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Caching\$.uno(338)
// -------------------------------------------------------------------

// internal sealed class ElementAtlasFramebuffer :338
// {
uType* ElementAtlasFramebuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ElementAtlasFramebuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.ElementAtlasFramebuffer", options);
    type->fp_ctor_ = (void*)ElementAtlasFramebuffer__New1_fn;
    ::STRINGS[11] = uString::Const("Cannot Collect while pinned!");
    ::STRINGS[12] = uString::Const("ElementAtlasFramebuffer already pinned");
    ::STRINGS[13] = uString::Const("ElementAtlasFramebuffer not already pinned");
    ::TYPES[53] = ::g::Uno::Delegate_typeof();
    ::TYPES[57] = ::g::Uno::EventHandler_typeof();
    ::TYPES[14] = uObject_typeof();
    ::TYPES[75] = ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof();
    ::TYPES[76] = ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof());
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[77] = ::g::Fuse::Elements::ElementAtlasFramebufferPool_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof()), offsetof(::g::Fuse::Elements::ElementAtlasFramebuffer, _fb), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementAtlasFramebuffer, _Pinned), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Elements::ElementAtlasFramebuffer, FramebufferCollected1), 0);
    return type;
}

// public generated ElementAtlasFramebuffer() :338
void ElementAtlasFramebuffer__ctor__fn(ElementAtlasFramebuffer* __this)
{
    __this->ctor_();
}

// internal void Collect() :381
void ElementAtlasFramebuffer__Collect_fn(ElementAtlasFramebuffer* __this)
{
    __this->Collect();
}

// public void Dispose() :343
void ElementAtlasFramebuffer__Dispose_fn(ElementAtlasFramebuffer* __this)
{
    __this->Dispose();
}

// internal generated void add_FramebufferCollected(Uno.EventHandler value) :379
void ElementAtlasFramebuffer__add_FramebufferCollected_fn(ElementAtlasFramebuffer* __this, uDelegate* value)
{
    __this->add_FramebufferCollected(value);
}

// internal generated void remove_FramebufferCollected(Uno.EventHandler value) :379
void ElementAtlasFramebuffer__remove_FramebufferCollected_fn(ElementAtlasFramebuffer* __this, uDelegate* value)
{
    __this->remove_FramebufferCollected(value);
}

// public generated ElementAtlasFramebuffer New() :338
void ElementAtlasFramebuffer__New1_fn(ElementAtlasFramebuffer** __retval)
{
    *__retval = ElementAtlasFramebuffer::New1();
}

// internal framebuffer Pin() :349
void ElementAtlasFramebuffer__Pin_fn(ElementAtlasFramebuffer* __this, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->Pin();
}

// internal generated bool get_Pinned() :341
void ElementAtlasFramebuffer__get_Pinned_fn(ElementAtlasFramebuffer* __this, bool* __retval)
{
    *__retval = __this->Pinned();
}

// private generated void set_Pinned(bool value) :341
void ElementAtlasFramebuffer__set_Pinned_fn(ElementAtlasFramebuffer* __this, bool* value)
{
    __this->Pinned(*value);
}

// public static int2 get_Size() :393
void ElementAtlasFramebuffer__get_Size_fn(::g::Uno::Int2* __retval)
{
    *__retval = ElementAtlasFramebuffer::Size();
}

// internal void Unpin() :371
void ElementAtlasFramebuffer__Unpin_fn(ElementAtlasFramebuffer* __this)
{
    __this->Unpin();
}

// public generated ElementAtlasFramebuffer() [instance] :338
void ElementAtlasFramebuffer::ctor_()
{
}

// internal void Collect() [instance] :381
void ElementAtlasFramebuffer::Collect()
{
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret2;

    if (Pinned())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[11/*"Cannot Coll...*/]));

    if (::g::Uno::Delegate::op_Inequality(FramebufferCollected1, NULL))
        uPtr(FramebufferCollected1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::New1());

    uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(_fb), &ret2), ret2))->Owner = NULL;
    _fb = NULL;
}

// public void Dispose() [instance] :343
void ElementAtlasFramebuffer::Dispose()
{
    if (_fb != NULL)
        Collect();
}

// internal generated void add_FramebufferCollected(Uno.EventHandler value) [instance] :379
void ElementAtlasFramebuffer::add_FramebufferCollected(uDelegate* value)
{
    FramebufferCollected1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(FramebufferCollected1, value), ::TYPES[57/*Uno.EventHandler*/]);
}

// internal generated void remove_FramebufferCollected(Uno.EventHandler value) [instance] :379
void ElementAtlasFramebuffer::remove_FramebufferCollected(uDelegate* value)
{
    FramebufferCollected1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(FramebufferCollected1, value), ::TYPES[57/*Uno.EventHandler*/]);
}

// internal framebuffer Pin() [instance] :349
::g::Uno::Graphics::Framebuffer* ElementAtlasFramebuffer::Pin()
{
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret3;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret4;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret5;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret6;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret7;

    if (Pinned())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[12/*"ElementAtla...*/]));

    Pinned(true);

    if (_fb == NULL)
    {
        ::g::Uno::Collections::LinkedListNode* fb = ::g::Fuse::Elements::ElementAtlasFramebufferPool::FindFramebuffer();

        if (uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(fb), &ret3), ret3))->Owner != NULL)
            uPtr(uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(fb), &ret4), ret4))->Owner)->Collect();

        uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(fb, &ret5), ret5))->Owner = this;
        _fb = fb;
    }
    else
        uPtr(uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(_fb), &ret6), ret6))->Pool)->UpdateUsage(_fb);

    return uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(_fb), &ret7), ret7))->Framebuffer;
}

// internal generated bool get_Pinned() [instance] :341
bool ElementAtlasFramebuffer::Pinned()
{
    return _Pinned;
}

// private generated void set_Pinned(bool value) [instance] :341
void ElementAtlasFramebuffer::Pinned(bool value)
{
    _Pinned = value;
}

// internal void Unpin() [instance] :371
void ElementAtlasFramebuffer::Unpin()
{
    if (!Pinned())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[13/*"ElementAtla...*/]));

    Pinned(false);
}

// public generated ElementAtlasFramebuffer New() [static] :338
ElementAtlasFramebuffer* ElementAtlasFramebuffer::New1()
{
    ElementAtlasFramebuffer* obj1 = (ElementAtlasFramebuffer*)uNew(ElementAtlasFramebuffer_typeof());
    obj1->ctor_();
    return obj1;
}

// public static int2 get_Size() [static] :393
::g::Uno::Int2 ElementAtlasFramebuffer::Size()
{
    return ::g::Fuse::Elements::ElementAtlasFramebufferPool::ElementAtlasSize();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Caching\$.uno(442)
// -------------------------------------------------------------------

// internal static class ElementAtlasFramebufferPool :442
// {
uClassType* ElementAtlasFramebufferPool_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.ElementAtlasFramebufferPool", options);
    ::TYPES[27] = ::g::Uno::Platform2::Display_typeof();
    ::TYPES[57] = ::g::Uno::EventHandler_typeof();
    ::TYPES[72] = ::g::Fuse::Elements::DisplayHelpers_typeof();
    ::TYPES[8] = ::g::Uno::Int2_typeof();
    ::TYPES[20] = ::g::Uno::Graphics::Texture2D_typeof();
    ::TYPES[53] = ::g::Uno::Delegate_typeof();
    type->SetFields(0,
        ::g::Uno::Int2_typeof(), (uintptr_t)&::g::Fuse::Elements::ElementAtlasFramebufferPool::_elementAtlasSize_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Elements::ElementAtlasFramebufferPool::_isInitialized_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl_typeof(), (uintptr_t)&::g::Fuse::Elements::ElementAtlasFramebufferPool::_poolImpl_, uFieldFlagsStatic,
        ::g::Uno::EventHandler_typeof(), (uintptr_t)&::g::Fuse::Elements::ElementAtlasFramebufferPool::AtlasSizeChanged1_, uFieldFlagsStatic);
    return type;
}

// public static generated void add_AtlasSizeChanged(Uno.EventHandler value) :460
void ElementAtlasFramebufferPool__add_AtlasSizeChanged_fn(uDelegate* value)
{
    ElementAtlasFramebufferPool::add_AtlasSizeChanged(value);
}

// public static generated void remove_AtlasSizeChanged(Uno.EventHandler value) :460
void ElementAtlasFramebufferPool__remove_AtlasSizeChanged_fn(uDelegate* value)
{
    ElementAtlasFramebufferPool::remove_AtlasSizeChanged(value);
}

// public static int2 get_ElementAtlasSize() :477
void ElementAtlasFramebufferPool__get_ElementAtlasSize_fn(::g::Uno::Int2* __retval)
{
    *__retval = ElementAtlasFramebufferPool::ElementAtlasSize();
}

// private static void set_ElementAtlasSize(int2 value) :482
void ElementAtlasFramebufferPool__set_ElementAtlasSize_fn(::g::Uno::Int2* value)
{
    ElementAtlasFramebufferPool::ElementAtlasSize(*value);
}

// private static void EnsurePool() :496
void ElementAtlasFramebufferPool__EnsurePool_fn()
{
    ElementAtlasFramebufferPool::EnsurePool();
}

// public static Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> FindFramebuffer() :507
void ElementAtlasFramebufferPool__FindFramebuffer_fn(::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = ElementAtlasFramebufferPool::FindFramebuffer();
}

// public static void Initialize() :445
void ElementAtlasFramebufferPool__Initialize_fn()
{
    ElementAtlasFramebufferPool::Initialize();
}

// private static void OnResized(object sender, Uno.EventArgs args) :470
void ElementAtlasFramebufferPool__OnResized_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    ElementAtlasFramebufferPool::OnResized(sender, args);
}

// private static void UpdateElementAtlasSize() :462
void ElementAtlasFramebufferPool__UpdateElementAtlasSize_fn()
{
    ElementAtlasFramebufferPool::UpdateElementAtlasSize();
}

::g::Uno::Int2 ElementAtlasFramebufferPool::_elementAtlasSize_;
bool ElementAtlasFramebufferPool::_isInitialized_;
uSStrong< ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl*> ElementAtlasFramebufferPool::_poolImpl_;
uSStrong<uDelegate*> ElementAtlasFramebufferPool::AtlasSizeChanged1_;

// private static void EnsurePool() [static] :496
void ElementAtlasFramebufferPool::EnsurePool()
{
    if (ElementAtlasFramebufferPool::_poolImpl() != NULL)
        return;

    ElementAtlasFramebufferPool::Initialize();
    ElementAtlasFramebufferPool::_poolImpl() = ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl::New1();
}

// public static Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> FindFramebuffer() [static] :507
::g::Uno::Collections::LinkedListNode* ElementAtlasFramebufferPool::FindFramebuffer()
{
    ElementAtlasFramebufferPool::EnsurePool();
    return uPtr(ElementAtlasFramebufferPool::_poolImpl())->FindFramebuffer();
}

// public static void Initialize() [static] :445
void ElementAtlasFramebufferPool::Initialize()
{
    if (ElementAtlasFramebufferPool::_isInitialized())
        return;

    ElementAtlasFramebufferPool::UpdateElementAtlasSize();
    uPtr(::g::Uno::Platform2::Display::MainDisplay())->add_FrameChanged(uDelegate::New(::TYPES[57/*Uno.EventHandler*/], (void*)ElementAtlasFramebufferPool__OnResized_fn));
    ElementAtlasFramebufferPool::_isInitialized() = true;
}

// private static void OnResized(object sender, Uno.EventArgs args) [static] :470
void ElementAtlasFramebufferPool::OnResized(uObject* sender, ::g::Uno::EventArgs* args)
{
    ElementAtlasFramebufferPool::UpdateElementAtlasSize();
}

// private static void UpdateElementAtlasSize() [static] :462
void ElementAtlasFramebufferPool::UpdateElementAtlasSize()
{
    ::g::Uno::Int2 clientSize = ::g::Fuse::Elements::DisplayHelpers::DisplaySizeHint();
    ElementAtlasFramebufferPool::ElementAtlasSize(::g::Uno::Int2__New2(::g::Uno::Math::Min8((clientSize.X * 3) / 2, ::g::Uno::Graphics::Texture2D::MaxSize()), ::g::Uno::Math::Min8(clientSize.Y / 2, ::g::Uno::Graphics::Texture2D::MaxSize())));
}

// public static int2 get_ElementAtlasSize() [static] :477
::g::Uno::Int2 ElementAtlasFramebufferPool::ElementAtlasSize()
{
    ElementAtlasFramebufferPool::Initialize();
    return ElementAtlasFramebufferPool::_elementAtlasSize();
}

// private static void set_ElementAtlasSize(int2 value) [static] :482
void ElementAtlasFramebufferPool::ElementAtlasSize(::g::Uno::Int2 value)
{
    if (::g::Uno::Int2::op_Inequality(ElementAtlasFramebufferPool::_elementAtlasSize(), value))
    {
        ElementAtlasFramebufferPool::_elementAtlasSize() = value;

        if (::g::Uno::Delegate::op_Inequality(ElementAtlasFramebufferPool::AtlasSizeChanged1(), NULL))
            uPtr(ElementAtlasFramebufferPool::AtlasSizeChanged1())->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::New1());
    }
}

// public static generated void add_AtlasSizeChanged(Uno.EventHandler value) [static] :460
void ElementAtlasFramebufferPool::add_AtlasSizeChanged(uDelegate* value)
{
    ElementAtlasFramebufferPool::AtlasSizeChanged1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ElementAtlasFramebufferPool::AtlasSizeChanged1(), value), ::TYPES[57/*Uno.EventHandler*/]);
}

// public static generated void remove_AtlasSizeChanged(Uno.EventHandler value) [static] :460
void ElementAtlasFramebufferPool::remove_AtlasSizeChanged(uDelegate* value)
{
    ElementAtlasFramebufferPool::AtlasSizeChanged1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ElementAtlasFramebufferPool::AtlasSizeChanged1(), value), ::TYPES[57/*Uno.EventHandler*/]);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Caching\$.uno(396)
// -------------------------------------------------------------------

// internal sealed class ElementAtlasFramebufferPoolEntry :396
// {
uType* ElementAtlasFramebufferPoolEntry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ElementAtlasFramebufferPoolEntry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.ElementAtlasFramebufferPoolEntry", options);
    type->fp_ctor_ = (void*)ElementAtlasFramebufferPoolEntry__New1_fn;
    type->SetFields(0,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry, Framebuffer), 0,
        ::g::Fuse::Elements::ElementAtlasFramebuffer_typeof(), offsetof(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry, Owner), 0,
        ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl_typeof(), offsetof(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry, Pool), 0);
    return type;
}

// public generated ElementAtlasFramebufferPoolEntry() :396
void ElementAtlasFramebufferPoolEntry__ctor__fn(ElementAtlasFramebufferPoolEntry* __this)
{
    __this->ctor_();
}

// public void Collect() :402
void ElementAtlasFramebufferPoolEntry__Collect_fn(ElementAtlasFramebufferPoolEntry* __this)
{
    __this->Collect();
}

// public void Dispose() :408
void ElementAtlasFramebufferPoolEntry__Dispose_fn(ElementAtlasFramebufferPoolEntry* __this)
{
    __this->Dispose();
}

// public generated ElementAtlasFramebufferPoolEntry New() :396
void ElementAtlasFramebufferPoolEntry__New1_fn(ElementAtlasFramebufferPoolEntry** __retval)
{
    *__retval = ElementAtlasFramebufferPoolEntry::New1();
}

// public generated ElementAtlasFramebufferPoolEntry() [instance] :396
void ElementAtlasFramebufferPoolEntry::ctor_()
{
}

// public void Collect() [instance] :402
void ElementAtlasFramebufferPoolEntry::Collect()
{
    if (Owner != NULL)
        uPtr(Owner)->Collect();
}

// public void Dispose() [instance] :408
void ElementAtlasFramebufferPoolEntry::Dispose()
{
    if (Framebuffer != NULL)
    {
        uPtr(Framebuffer)->Dispose();
        Framebuffer = NULL;
    }
}

// public generated ElementAtlasFramebufferPoolEntry New() [static] :396
ElementAtlasFramebufferPoolEntry* ElementAtlasFramebufferPoolEntry::New1()
{
    ElementAtlasFramebufferPoolEntry* obj1 = (ElementAtlasFramebufferPoolEntry*)uNew(ElementAtlasFramebufferPoolEntry_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Caching\$.uno(514)
// -------------------------------------------------------------------

// internal sealed class ElementAtlasFramebufferPoolImpl :514
// {
ElementAtlasFramebufferPoolImpl_type* ElementAtlasFramebufferPoolImpl_typeof()
{
    static uSStrong<ElementAtlasFramebufferPoolImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ElementAtlasFramebufferPoolImpl);
    options.TypeSize = sizeof(ElementAtlasFramebufferPoolImpl_type);
    type = (ElementAtlasFramebufferPoolImpl_type*)uClassType::New("Fuse.Elements.ElementAtlasFramebufferPoolImpl", options);
    type->fp_ctor_ = (void*)ElementAtlasFramebufferPoolImpl__New1_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))ElementAtlasFramebufferPoolImpl__Fuse_Resources_ISoftDisposable_SoftDispose_fn;
    ::TYPES[78] = ::g::Fuse::Resources::ISoftDisposable_typeof();
    ::TYPES[77] = ::g::Fuse::Elements::ElementAtlasFramebufferPool_typeof();
    ::TYPES[57] = ::g::Uno::EventHandler_typeof();
    ::TYPES[75] = ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof();
    ::TYPES[79] = ::g::Uno::Collections::LinkedList_typeof()->MakeType(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof());
    ::TYPES[76] = ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof());
    ::TYPES[70] = ::g::Fuse::Elements::ElementAtlasFramebuffer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Resources::ISoftDisposable_typeof(), offsetof(ElementAtlasFramebufferPoolImpl_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::LinkedList_typeof()->MakeType(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof()), offsetof(::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl, _framebufferPool), 0);
    return type;
}

// internal ElementAtlasFramebufferPoolImpl() :518
void ElementAtlasFramebufferPoolImpl__ctor__fn(ElementAtlasFramebufferPoolImpl* __this)
{
    __this->ctor_();
}

// private Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> AddEntry() :590
void ElementAtlasFramebufferPoolImpl__AddEntry_fn(ElementAtlasFramebufferPoolImpl* __this, ::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = __this->AddEntry();
}

// private extern void DiscardPool() :525
void ElementAtlasFramebufferPoolImpl__DiscardPool_fn(ElementAtlasFramebufferPoolImpl* __this)
{
    __this->DiscardPool();
}

// private void EnsurePool() :580
void ElementAtlasFramebufferPoolImpl__EnsurePool_fn(ElementAtlasFramebufferPoolImpl* __this)
{
    __this->EnsurePool();
}

// internal Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> FindFramebuffer() :598
void ElementAtlasFramebufferPoolImpl__FindFramebuffer_fn(ElementAtlasFramebufferPoolImpl* __this, ::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = __this->FindFramebuffer();
}

// private void Fuse.Resources.ISoftDisposable.SoftDispose() :575
void ElementAtlasFramebufferPoolImpl__Fuse_Resources_ISoftDisposable_SoftDispose_fn(ElementAtlasFramebufferPoolImpl* __this)
{
    __this->DiscardPool();
}

// internal ElementAtlasFramebufferPoolImpl New() :518
void ElementAtlasFramebufferPoolImpl__New1_fn(ElementAtlasFramebufferPoolImpl** __retval)
{
    *__retval = ElementAtlasFramebufferPoolImpl::New1();
}

// private void OnAtlasSizeChanged(object sender, Uno.EventArgs eventArgs) :570
void ElementAtlasFramebufferPoolImpl__OnAtlasSizeChanged_fn(ElementAtlasFramebufferPoolImpl* __this, uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    __this->OnAtlasSizeChanged(sender, eventArgs);
}

// internal void UpdateUsage(Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> fb) :614
void ElementAtlasFramebufferPoolImpl__UpdateUsage_fn(ElementAtlasFramebufferPoolImpl* __this, ::g::Uno::Collections::LinkedListNode* fb)
{
    __this->UpdateUsage(fb);
}

// internal ElementAtlasFramebufferPoolImpl() [instance] :518
void ElementAtlasFramebufferPoolImpl::ctor_()
{
    ::g::Fuse::Resources::DisposalManager::Add1((uObject*)this);
    ::g::Fuse::Elements::ElementAtlasFramebufferPool::add_AtlasSizeChanged(uDelegate::New(::TYPES[57/*Uno.EventHandler*/], (void*)ElementAtlasFramebufferPoolImpl__OnAtlasSizeChanged_fn, this));
}

// private Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> AddEntry() [instance] :590
::g::Uno::Collections::LinkedListNode* ElementAtlasFramebufferPoolImpl::AddEntry()
{
    ::g::Uno::Collections::LinkedListNode* ret2;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* entry = ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry::New1();
    entry->Pool = this;
    entry->Framebuffer = ::g::Uno::Graphics::Framebuffer::New1(::g::Fuse::Elements::ElementAtlasFramebufferPool::ElementAtlasSize(), 3, 0);
    return (::g::Uno::Collections::LinkedList__AddLast_fn(uPtr(_framebufferPool), entry, &ret2), ret2);
}

// private extern void DiscardPool() [instance] :525
void ElementAtlasFramebufferPoolImpl::DiscardPool()
{
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret3;
    GLHelper::SwapBackToBackgroundSurface();
    ::g::Uno::Collections::LinkedList* pool = _framebufferPool;

    if (pool == NULL)
        return;

    ::g::Uno::Collections::LinkedListNode* curr = (::g::Uno::Collections::LinkedListNode*)uPtr(pool)->First();

    while (curr != NULL)
    {
        ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* fb = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(curr), &ret3), ret3);
        uPtr(fb)->Collect();
        fb->Dispose();
        curr = (::g::Uno::Collections::LinkedListNode*)uPtr(curr)->Next();
    }

    pool->Clear();
    _framebufferPool = NULL;
}

// private void EnsurePool() [instance] :580
void ElementAtlasFramebufferPoolImpl::EnsurePool()
{
    if (_framebufferPool != NULL)
        return;

    _framebufferPool = ((::g::Uno::Collections::LinkedList*)::g::Uno::Collections::LinkedList::New1(::TYPES[79/*Uno.Collections.LinkedList<Fuse.Elements.ElementAtlasFramebufferPoolEntry>*/]));

    for (int i = 0; i < 20; ++i)
        AddEntry();
}

// internal Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> FindFramebuffer() [instance] :598
::g::Uno::Collections::LinkedListNode* ElementAtlasFramebufferPoolImpl::FindFramebuffer()
{
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret4;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret5;
    EnsurePool();
    ::g::Uno::Collections::LinkedListNode* fb = (::g::Uno::Collections::LinkedListNode*)uPtr(_framebufferPool)->Last();

    while ((fb != NULL) && ((uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(fb), &ret4), ret4))->Owner != NULL) && uPtr(uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(fb), &ret5), ret5))->Owner)->Pinned()))
        fb = (::g::Uno::Collections::LinkedListNode*)uPtr(fb)->Previous();

    if (fb == NULL)
        fb = AddEntry();

    UpdateUsage(fb);
    return fb;
}

// private void OnAtlasSizeChanged(object sender, Uno.EventArgs eventArgs) [instance] :570
void ElementAtlasFramebufferPoolImpl::OnAtlasSizeChanged(uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    DiscardPool();
}

// internal void UpdateUsage(Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> fb) [instance] :614
void ElementAtlasFramebufferPoolImpl::UpdateUsage(::g::Uno::Collections::LinkedListNode* fb)
{
    uPtr(_framebufferPool)->Remove1(fb);
    uPtr(_framebufferPool)->AddFirst1(fb);
}

// internal ElementAtlasFramebufferPoolImpl New() [static] :518
ElementAtlasFramebufferPoolImpl* ElementAtlasFramebufferPoolImpl::New1()
{
    ElementAtlasFramebufferPoolImpl* obj1 = (ElementAtlasFramebufferPoolImpl*)uNew(ElementAtlasFramebufferPoolImpl_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Caching\$.uno(1228)
// --------------------------------------------------------------------

// internal sealed class ElementBatch :1228
// {
ElementBatch_type* ElementBatch_typeof()
{
    static uSStrong<ElementBatch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ElementBatch);
    options.TypeSize = sizeof(ElementBatch_type);
    type = (ElementBatch_type*)uClassType::New("Fuse.Elements.ElementBatch", options);
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Uno::Float4x4*, ::g::Uno::Rect*))ElementBatch__Draw_fn;
    ::STRINGS[14] = uString::Const("wrong atlas, stupid!");
    ::STRINGS[15] = uString::Const("element has no caching rect");
    ::STRINGS[16] = uString::Const("wrong batch, stupid!");
    ::TYPES[80] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof());
    ::TYPES[81] = ::g::Uno::Graphics::VertexAttributeInfo_typeof();
    ::TYPES[71] = ::g::Fuse::Elements::ElementBatchEntry_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[7] = ::g::Uno::Rect_typeof();
    ::TYPES[8] = ::g::Uno::Int2_typeof();
    ::TYPES[82] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof());
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[26] = ::g::Uno::Graphics::Framebuffer_typeof();
    ::TYPES[4] = ::g::Fuse::Node_typeof();
    ::TYPES[22] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[12] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[83] = ::g::Uno::UShort_typeof();
    ::TYPES[72] = ::g::Fuse::Elements::DisplayHelpers_typeof();
    ::TYPES[84] = ::g::Uno::Float4x4_typeof();
    ::TYPES[85] = ::g::Uno::Float4_typeof();
    ::TYPES[6] = ::g::Uno::Recti_typeof();
    ::TYPES[3] = ::g::Uno::Float2_typeof();
    ::TYPES[73] = ::g::Fuse::Elements::TextureAtlas_typeof();
    ::TYPES[86] = ::g::Fuse::Elements::ElementAtlas_typeof();
    ::TYPES[25] = ::g::Fuse_Elements_bundle_typeof();
    type->SetInterfaces(
        ::g::Fuse::Elements::IElementBatchDrawable_typeof(), offsetof(ElementBatch_type, interface0));
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _draw_9aaabe09), 0,
        ::g::Fuse::Elements::ElementAtlas_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _elementAtlas), 0,
        ::g::Fuse::Elements::ElementBatcher_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _elementBatcher), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof()), offsetof(::g::Fuse::Elements::ElementBatch, _elements), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _indexBuffer), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _indexBufferValid), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _positionInfo), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _prevElementCount), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _renderBounds), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _renderBoundsValid), 0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _tempBuffer), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _texCoordInfo), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _vertexPositionBufferValid), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _vertexTexCoordBufferValid), 0);
    return type;
}

// public ElementBatch(Fuse.Elements.ElementBatcher elementBatcher, Fuse.Elements.ElementAtlas elementAtlas) :1239
void ElementBatch__ctor__fn(ElementBatch* __this, ::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas)
{
    __this->ctor_(elementBatcher, elementAtlas);
}

// public void AddElement(Fuse.Elements.Element elm) :1320
void ElementBatch__AddElement_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->AddElement(elm);
}

// private Uno.Rect CalcRenderBounds() :1296
void ElementBatch__CalcRenderBounds_fn(ElementBatch* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->CalcRenderBounds();
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) :1272
void ElementBatch__ConservativelySnapToCoveringIntegers_fn(::g::Uno::Rect* r, ::g::Uno::Recti* __retval)
{
    *__retval = ElementBatch::ConservativelySnapToCoveringIntegers(*r);
}

// public void Dispose() :1257
void ElementBatch__Dispose_fn(ElementBatch* __this)
{
    __this->Dispose();
}

// public void Draw(Fuse.DrawContext dc, float4x4 localToClipTransform, Uno.Rect scissorRectInClipSpace) :1367
void ElementBatch__Draw_fn(ElementBatch* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Rect* scissorRectInClipSpace)
{
    __this->Draw(dc, *localToClipTransform, *scissorRectInClipSpace);
}

// private void FillIndexBuffer() :1432
void ElementBatch__FillIndexBuffer_fn(ElementBatch* __this)
{
    __this->FillIndexBuffer();
}

// private void FillVertexPositionBuffer(Fuse.DrawContext dc) :1471
void ElementBatch__FillVertexPositionBuffer_fn(ElementBatch* __this, ::g::Fuse::DrawContext* dc)
{
    __this->FillVertexPositionBuffer(dc);
}

// private void FillVertexTexCoordBuffer() :1451
void ElementBatch__FillVertexTexCoordBuffer_fn(ElementBatch* __this)
{
    __this->FillVertexTexCoordBuffer();
}

// public static Uno.Recti GetCachingRect(Fuse.Elements.Element elm) :1286
void ElementBatch__GetCachingRect_fn(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* __retval)
{
    *__retval = ElementBatch::GetCachingRect(elm);
}

// private generated void init_DrawCalls() :1228
void ElementBatch__init_DrawCalls_fn(ElementBatch* __this)
{
    __this->init_DrawCalls();
}

// internal void InvalidateOpacity(Fuse.Elements.Element elm) :1360
void ElementBatch__InvalidateOpacity_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->InvalidateOpacity(elm);
}

// public void InvalidateRenderBounds(Fuse.Elements.Element elm) :1347
void ElementBatch__InvalidateRenderBounds_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->InvalidateRenderBounds(elm);
}

// internal void InvalidateTransform(Fuse.Elements.Element elm) :1354
void ElementBatch__InvalidateTransform_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->InvalidateTransform(elm);
}

// public bool IsFull() :1427
void ElementBatch__IsFull_fn(ElementBatch* __this, bool* __retval)
{
    *__retval = __this->IsFull();
}

// public ElementBatch New(Fuse.Elements.ElementBatcher elementBatcher, Fuse.Elements.ElementAtlas elementAtlas) :1239
void ElementBatch__New1_fn(::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas, ElementBatch** __retval)
{
    *__retval = ElementBatch::New1(elementBatcher, elementAtlas);
}

// public void RemoveElement(Fuse.Elements.Element elm) :1334
void ElementBatch__RemoveElement_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->RemoveElement(elm);
}

// public Uno.Rect get_RenderBounds() :1308
void ElementBatch__get_RenderBounds_fn(ElementBatch* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->RenderBounds();
}

// public ElementBatch(Fuse.Elements.ElementBatcher elementBatcher, Fuse.Elements.ElementAtlas elementAtlas) [instance] :1239
void ElementBatch::ctor_(::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas)
{
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[80/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>*/]));
    _elementBatcher = elementBatcher;
    _elementAtlas = elementAtlas;
    _positionInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _positionInfo.BufferOffset = 0;
    _positionInfo.BufferStride = 12;
    _positionInfo.Type = 3;
    _positionInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New3(1);
    _texCoordInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _texCoordInfo.BufferOffset = 0;
    _texCoordInfo.BufferStride = 8;
    _texCoordInfo.Type = 2;
    _texCoordInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New3(0);
    init_DrawCalls();
}

// public void AddElement(Fuse.Elements.Element elm) [instance] :1320
void ElementBatch::AddElement(::g::Fuse::Elements::Element* elm)
{
    if (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas != _elementAtlas)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[14/*"wrong atlas...*/]));

    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();
    uPtr(entry)->_batch = this;
    ::g::Uno::Collections::List__Add_fn(uPtr(_elements), entry);
    _indexBufferValid = false;
    _vertexPositionBufferValid = false;
    _vertexTexCoordBufferValid = false;
    _renderBoundsValid = false;
}

// private Uno.Rect CalcRenderBounds() [instance] :1296
::g::Uno::Rect ElementBatch::CalcRenderBounds()
{
    ::g::Fuse::Elements::ElementBatchEntry* ret6;
    ::g::Fuse::Elements::ElementBatchEntry* ret7;
    ::g::Uno::Rect rect = uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(0), &ret6), ret6))->_elm)->CalcRenderBoundsInParentSpace();

    for (int i = 1; i < uPtr(_elements)->Count(); i++)
        rect = ::g::Uno::Rect__Union(rect, uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(i), &ret7), ret7))->_elm)->CalcRenderBoundsInParentSpace());

    return rect;
}

// public void Dispose() [instance] :1257
void ElementBatch::Dispose()
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatchEntry*> > ret8;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatchEntry*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret8), ret8); enum1.MoveNext(::TYPES[82/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::ElementBatchEntry* elm = enum1.Current(::TYPES[82/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]);
        uPtr(elm)->_batch = NULL;
    }

    if (_positionInfo.Buffer != NULL)
        uPtr(_positionInfo.Buffer)->Dispose();

    if (_texCoordInfo.Buffer != NULL)
        uPtr(_texCoordInfo.Buffer)->Dispose();

    if (_indexBuffer != NULL)
        uPtr(_indexBuffer)->Dispose();
}

// public void Draw(Fuse.DrawContext dc, float4x4 localToClipTransform, Uno.Rect scissorRectInClipSpace) [instance] :1367
void ElementBatch::Draw(::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Rect scissorRectInClipSpace)
{
    ::g::Fuse::Elements::ElementBatchEntry* ret9;
    ::g::Uno::Rect visibleRect = ::g::Uno::Rect__Transform(RenderBounds(), localToClipTransform);

    if (!scissorRectInClipSpace.Intersects(visibleRect))
        return;

    ::g::Uno::Graphics::Framebuffer* fb = uPtr(_elementAtlas)->PinAndValidateFramebuffer(dc);

    if (_prevElementCount != uPtr(_elements)->Count())
    {
        _indexBufferValid = false;
        _vertexPositionBufferValid = false;
        _vertexTexCoordBufferValid = false;
        _tempBuffer = ::g::Uno::Buffer::New3((uPtr(_elements)->Count() * 4) * 12);
    }

    if (!_indexBufferValid)
    {
        FillIndexBuffer();
        _indexBufferValid = true;
    }

    if (!_vertexPositionBufferValid)
    {
        FillVertexPositionBuffer(dc);
        _vertexPositionBufferValid = true;
    }

    if (!_vertexTexCoordBufferValid)
    {
        FillVertexTexCoordBuffer();
        _vertexTexCoordBufferValid = true;
    }

    ::g::Uno::Graphics::Texture2D* tex = uPtr(fb)->ColorBuffer();
    ::g::Uno::Float4x4 transform = uPtr(dc)->GetLocalToClipTransform(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(0), &ret9), ret9))->_elm)->Parent());
    _draw_9aaabe09.BlendEnabled(true);
    _draw_9aaabe09.DepthTestEnabled(false);
    _draw_9aaabe09.CullFace(uPtr(dc)->CullFace());
    _draw_9aaabe09.BlendDstRgb(3);
    _draw_9aaabe09.BlendDstAlpha(3);
    _draw_9aaabe09.Use();
    _draw_9aaabe09.Attrib1(0, _positionInfo.Type, _positionInfo.Buffer, _positionInfo.BufferStride, _positionInfo.BufferOffset);
    _draw_9aaabe09.Attrib1(1, _texCoordInfo.Type, _texCoordInfo.Buffer, _texCoordInfo.BufferStride, _texCoordInfo.BufferOffset);
    _draw_9aaabe09.Uniform12(2, transform);
    _draw_9aaabe09.Sampler2(3, tex);
    _draw_9aaabe09.Draw(uPtr(_elements)->Count() * 6, 2, _indexBuffer);
    uPtr(_elementAtlas)->Unpin();
    _prevElementCount = uPtr(_elements)->Count();
}

// private void FillIndexBuffer() [instance] :1432
void ElementBatch::FillIndexBuffer()
{
    ::g::Uno::Buffer* indices = ::g::Uno::Buffer::New3((uPtr(_elements)->Count() * 6) * 2);

    for (int i = 0; i < uPtr(_elements)->Count(); ++i)
    {
        uPtr(indices)->Set23((i * 6) * 2, (uint16_t)(i * 4), true);
        indices->Set23(((i * 6) + 1) * 2, (uint16_t)((i * 4) + 2), true);
        indices->Set23(((i * 6) + 2) * 2, (uint16_t)((i * 4) + 1), true);
        indices->Set23(((i * 6) + 3) * 2, (uint16_t)(i * 4), true);
        indices->Set23(((i * 6) + 4) * 2, (uint16_t)((i * 4) + 3), true);
        indices->Set23(((i * 6) + 5) * 2, (uint16_t)((i * 4) + 2), true);
    }

    if (_indexBuffer != NULL)
        uPtr(_indexBuffer)->Dispose();

    _indexBuffer = ::g::Uno::Graphics::IndexBuffer::New2(indices, 0);
}

// private void FillVertexPositionBuffer(Fuse.DrawContext dc) [instance] :1471
void ElementBatch::FillVertexPositionBuffer(::g::Fuse::DrawContext* dc)
{
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Fuse::Elements::ElementBatchEntry* ret10;
    int elementCount = uPtr(_elements)->Count();
    ::g::Uno::Buffer* vertexPositions = _tempBuffer;
    float densityScale = 1.0f / ::g::Fuse::Elements::DisplayHelpers::PointDensity();

    for (int i = 0; i < elementCount; ++i)
    {
        ::g::Fuse::Elements::ElementBatchEntry* entry = (::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(i), &ret10), ret10);
        ::g::Uno::Recti cachingRect = ElementBatch::GetCachingRect(uPtr(entry)->_elm);
        float opacity = entry->_opacity;
        ::g::Uno::Float4x4 transform = uPtr(entry->_elm)->LocalTransform();
        ::g::Uno::Float2 positionOrigin = ::g::Uno::Float2__op_Addition2((ind2 = transform.Item(3), ::g::Uno::Float2__New2(ind2.X, ind2.Y)), ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Implicit1(cachingRect.Minimum()), densityScale));
        ::g::Uno::Float2 size = ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Implicit1(cachingRect.Size()), densityScale);
        ::g::Uno::Float2 right = ::g::Uno::Float2__op_Multiply1((ind3 = transform.Item(0), ::g::Uno::Float2__New2(ind3.X, ind3.Y)), size.X);
        ::g::Uno::Float2 up = ::g::Uno::Float2__op_Multiply1((ind4 = transform.Item(1), ::g::Uno::Float2__New2(ind4.X, ind4.Y)), size.Y);
        uPtr(vertexPositions)->Set6(((i * 4) * _positionInfo.BufferStride) + _positionInfo.BufferOffset, ::g::Uno::Float3__New4(positionOrigin, opacity), true);
        vertexPositions->Set6((((i * 4) + 1) * _positionInfo.BufferStride) + _positionInfo.BufferOffset, ::g::Uno::Float3__New4(::g::Uno::Float2__op_Addition2(positionOrigin, right), opacity), true);
        vertexPositions->Set6((((i * 4) + 2) * _positionInfo.BufferStride) + _positionInfo.BufferOffset, ::g::Uno::Float3__New4(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(positionOrigin, right), up), opacity), true);
        vertexPositions->Set6((((i * 4) + 3) * _positionInfo.BufferStride) + _positionInfo.BufferOffset, ::g::Uno::Float3__New4(::g::Uno::Float2__op_Addition2(positionOrigin, up), opacity), true);
    }

    uPtr(_positionInfo.Buffer)->Update(vertexPositions);
}

// private void FillVertexTexCoordBuffer() [instance] :1451
void ElementBatch::FillVertexTexCoordBuffer()
{
    ::g::Fuse::Elements::ElementBatchEntry* ret11;
    int elementCount = uPtr(_elements)->Count();
    ::g::Uno::Buffer* vertexTexCoords = _tempBuffer;

    for (int i = 0; i < elementCount; ++i)
    {
        ::g::Fuse::Elements::ElementBatchEntry* entry = (::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(i), &ret11), ret11);
        ::g::Uno::Recti cachingRect = ElementBatch::GetCachingRect(uPtr(entry)->_elm);
        ::g::Uno::Float2 texCoordOrigin = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Implicit1(entry->_rect.Minimum()), ::g::Uno::Float2__op_Implicit1(uPtr(uPtr(_elementAtlas)->_textureAtlas)->Size()));
        ::g::Uno::Float2 size = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Implicit1(cachingRect.Size()), ::g::Uno::Float2__op_Implicit1(uPtr(uPtr(_elementAtlas)->_textureAtlas)->Size()));
        uPtr(vertexTexCoords)->Set5(((i * 4) * _texCoordInfo.BufferStride) + _texCoordInfo.BufferOffset, texCoordOrigin, true);
        vertexTexCoords->Set5((((i * 4) + 1) * _texCoordInfo.BufferStride) + _texCoordInfo.BufferOffset, ::g::Uno::Float2__op_Addition2(texCoordOrigin, ::g::Uno::Float2__New2(size.X, 0.0f)), true);
        vertexTexCoords->Set5((((i * 4) + 2) * _texCoordInfo.BufferStride) + _texCoordInfo.BufferOffset, ::g::Uno::Float2__op_Addition2(texCoordOrigin, size), true);
        vertexTexCoords->Set5((((i * 4) + 3) * _texCoordInfo.BufferStride) + _texCoordInfo.BufferOffset, ::g::Uno::Float2__op_Addition2(texCoordOrigin, ::g::Uno::Float2__New2(0.0f, size.Y)), true);
    }

    uPtr(_texCoordInfo.Buffer)->Update(vertexTexCoords);
}

// private generated void init_DrawCalls() [instance] :1228
void ElementBatch::init_DrawCalls()
{
    _draw_9aaabe09 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::Fuse_Elements_bundle::ElementBatch2ee7bdf7());
}

// internal void InvalidateOpacity(Fuse.Elements.Element elm) [instance] :1360
void ElementBatch::InvalidateOpacity(::g::Fuse::Elements::Element* elm)
{
    _vertexPositionBufferValid = false;
}

// public void InvalidateRenderBounds(Fuse.Elements.Element elm) [instance] :1347
void ElementBatch::InvalidateRenderBounds(::g::Fuse::Elements::Element* elm)
{
    _vertexPositionBufferValid = false;
    _vertexTexCoordBufferValid = false;
    _renderBoundsValid = false;
}

// internal void InvalidateTransform(Fuse.Elements.Element elm) [instance] :1354
void ElementBatch::InvalidateTransform(::g::Fuse::Elements::Element* elm)
{
    _vertexPositionBufferValid = false;
    _renderBoundsValid = false;
}

// public bool IsFull() [instance] :1427
bool ElementBatch::IsFull()
{
    return (uPtr(_elements)->Count() * 6) >= 65535;
}

// public void RemoveElement(Fuse.Elements.Element elm) [instance] :1334
void ElementBatch::RemoveElement(::g::Fuse::Elements::Element* elm)
{
    bool ret12;

    if (uPtr(uPtr(elm)->ElementBatchEntry())->_batch != this)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[16/*"wrong batch...*/]));

    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();
    uPtr(entry)->_batch = NULL;
    ::g::Uno::Collections::List__Remove_fn(uPtr(_elements), entry, &ret12);
    _indexBufferValid = false;
    _vertexPositionBufferValid = false;
    _vertexTexCoordBufferValid = false;
}

// public Uno.Rect get_RenderBounds() [instance] :1308
::g::Uno::Rect ElementBatch::RenderBounds()
{
    if (!_renderBoundsValid)
    {
        _renderBounds = CalcRenderBounds();
        _renderBoundsValid = true;
    }

    return _renderBounds;
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) [static] :1272
::g::Uno::Recti ElementBatch::ConservativelySnapToCoveringIntegers(::g::Uno::Rect r)
{
    ::g::Uno::Int2 origin = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Floor2(r.Minimum()));
    ::g::Uno::Int2 size = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Addition1(r.Size(), 0.01f)));
    return ::g::Uno::Recti__New1(origin.X, origin.Y, (origin.X + size.X) + 1, (origin.Y + size.Y) + 1);
}

// public static Uno.Recti GetCachingRect(Fuse.Elements.Element elm) [static] :1286
::g::Uno::Recti ElementBatch::GetCachingRect(::g::Fuse::Elements::Element* elm)
{
    ::g::Uno::Rect bounds = uPtr(elm)->RenderBoundsWithEffects();

    if (bounds.IsInfinite())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[15/*"element has...*/]));

    return ::g::Uno::Recti__Inflate(ElementBatch::ConservativelySnapToCoveringIntegers(::g::Uno::Rect__Scale(bounds, elm->AbsoluteZoom())), 1);
}

// public ElementBatch New(Fuse.Elements.ElementBatcher elementBatcher, Fuse.Elements.ElementAtlas elementAtlas) [static] :1239
ElementBatch* ElementBatch::New1(::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas)
{
    ElementBatch* obj5 = (ElementBatch*)uNew(ElementBatch_typeof());
    obj5->ctor_(elementBatcher, elementAtlas);
    return obj5;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Caching\$.uno(1163)
// --------------------------------------------------------------------

// internal sealed class ElementBatchEntry :1163
// {
uType* ElementBatchEntry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(ElementBatchEntry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.ElementBatchEntry", options);
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[87] = ::g::Fuse::Elements::ElementBatcher_typeof();
    ::TYPES[88] = ::g::Fuse::Elements::ElementBatch_typeof();
    type->SetFields(0,
        ::g::Fuse::Elements::ElementAtlas_typeof(), offsetof(::g::Fuse::Elements::ElementBatchEntry, _atlas), 0,
        ::g::Fuse::Elements::ElementBatch_typeof(), offsetof(::g::Fuse::Elements::ElementBatchEntry, _batch), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Elements::ElementBatchEntry, _elm), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Elements::ElementBatchEntry, _opacity), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Elements::ElementBatchEntry, _rect), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementBatchEntry, IsValid), 0);
    return type;
}

// public ElementBatchEntry(Fuse.Elements.Element elm) :1165
void ElementBatchEntry__ctor__fn(ElementBatchEntry* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->ctor_(elm);
}

// private float GetEffectiveOpacity() :1171
void ElementBatchEntry__GetEffectiveOpacity_fn(ElementBatchEntry* __this, float* __retval)
{
    *__retval = __this->GetEffectiveOpacity();
}

// public void InvalidateRenderBounds() :1196
void ElementBatchEntry__InvalidateRenderBounds_fn(ElementBatchEntry* __this)
{
    __this->InvalidateRenderBounds();
}

// public void InvalidateTransform() :1205
void ElementBatchEntry__InvalidateTransform_fn(ElementBatchEntry* __this)
{
    __this->InvalidateTransform();
}

// public void InvalidateVisual() :1178
void ElementBatchEntry__InvalidateVisual_fn(ElementBatchEntry* __this)
{
    __this->InvalidateVisual();
}

// public void InvalidateVisualComposition() :1183
void ElementBatchEntry__InvalidateVisualComposition_fn(ElementBatchEntry* __this)
{
    __this->InvalidateVisualComposition();
}

// public ElementBatchEntry New(Fuse.Elements.Element elm) :1165
void ElementBatchEntry__New1_fn(::g::Fuse::Elements::Element* elm, ElementBatchEntry** __retval)
{
    *__retval = ElementBatchEntry::New1(elm);
}

// public void OnRemoved() :1211
void ElementBatchEntry__OnRemoved_fn(ElementBatchEntry* __this)
{
    __this->OnRemoved();
}

// public ElementBatchEntry(Fuse.Elements.Element elm) [instance] :1165
void ElementBatchEntry::ctor_(::g::Fuse::Elements::Element* elm)
{
    _elm = elm;
    _opacity = GetEffectiveOpacity();
}

// private float GetEffectiveOpacity() [instance] :1171
float ElementBatchEntry::GetEffectiveOpacity()
{
    if (uPtr(_elm)->Visibility() == 0)
        return uPtr(_elm)->Opacity();

    return 0.0f;
}

// public void InvalidateRenderBounds() [instance] :1196
void ElementBatchEntry::InvalidateRenderBounds()
{
    if (_batch != NULL)
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(uPtr(_batch)->_elementBatcher)->_reinsertCheckList), this);
        uPtr(_batch)->InvalidateRenderBounds(_elm);
    }
}

// public void InvalidateTransform() [instance] :1205
void ElementBatchEntry::InvalidateTransform()
{
    if (_batch != NULL)
        uPtr(_batch)->InvalidateTransform(_elm);
}

// public void InvalidateVisual() [instance] :1178
void ElementBatchEntry::InvalidateVisual()
{
    uPtr(_atlas)->InvalidateElement(_elm);
}

// public void InvalidateVisualComposition() [instance] :1183
void ElementBatchEntry::InvalidateVisualComposition()
{
    float opacity = GetEffectiveOpacity();

    if (_opacity != opacity)
    {
        if (_batch != NULL)
            uPtr(_batch)->InvalidateOpacity(_elm);

        _opacity = opacity;
    }
}

// public void OnRemoved() [instance] :1211
void ElementBatchEntry::OnRemoved()
{
    if (_atlas != NULL)
        uPtr(_atlas)->RemoveElement(_elm);

    if (_batch != NULL)
        uPtr(_batch)->RemoveElement(_elm);
}

// public ElementBatchEntry New(Fuse.Elements.Element elm) [static] :1165
ElementBatchEntry* ElementBatchEntry::New1(::g::Fuse::Elements::Element* elm)
{
    ElementBatchEntry* obj1 = (ElementBatchEntry*)uNew(ElementBatchEntry_typeof());
    obj1->ctor_(elm);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Caching\$.uno(859)
// -------------------------------------------------------------------

// internal sealed class ElementBatcher :859
// {
ElementBatcher_type* ElementBatcher_typeof()
{
    static uSStrong<ElementBatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ElementBatcher);
    options.TypeSize = sizeof(ElementBatcher_type);
    type = (ElementBatcher_type*)uClassType::New("Fuse.Elements.ElementBatcher", options);
    type->fp_ctor_ = (void*)ElementBatcher__New1_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))ElementBatcher__Fuse_Resources_ISoftDisposable_SoftDispose_fn;
    ::STRINGS[17] = uString::Const("BUG: atlas-insertion failed, but should not!");
    ::STRINGS[1] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Elements\\0.19.3\\Caching\\$.uno");
    ::TYPES[89] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[90] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementAtlas_typeof());
    ::TYPES[91] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementBatch_typeof());
    ::TYPES[92] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::IElementBatchDrawable_typeof());
    ::TYPES[80] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof());
    ::TYPES[78] = ::g::Fuse::Resources::ISoftDisposable_typeof();
    ::TYPES[77] = ::g::Fuse::Elements::ElementAtlasFramebufferPool_typeof();
    ::TYPES[57] = ::g::Uno::EventHandler_typeof();
    ::TYPES[93] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::ElementAtlas_typeof());
    ::TYPES[94] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[95] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::ElementBatch_typeof());
    ::TYPES[10] = ::g::Uno::Double_typeof();
    ::TYPES[86] = ::g::Fuse::Elements::ElementAtlas_typeof();
    ::TYPES[71] = ::g::Fuse::Elements::ElementBatchEntry_typeof();
    ::TYPES[82] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof());
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[8] = ::g::Uno::Int2_typeof();
    ::TYPES[6] = ::g::Uno::Recti_typeof();
    ::TYPES[4] = ::g::Fuse::Node_typeof();
    ::TYPES[96] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::IElementBatchDrawable_typeof());
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[72] = ::g::Fuse::Elements::DisplayHelpers_typeof();
    ::TYPES[97] = ::g::Fuse::Elements::IElementBatchDrawable_typeof();
    ::TYPES[88] = ::g::Fuse::Elements::ElementBatch_typeof();
    ::TYPES[3] = ::g::Uno::Float2_typeof();
    ::TYPES[7] = ::g::Uno::Rect_typeof();
    ::TYPES[5] = ::g::Uno::Float_typeof();
    ::TYPES[70] = ::g::Fuse::Elements::ElementAtlasFramebuffer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Resources::ISoftDisposable_typeof(), offsetof(ElementBatcher_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementAtlas_typeof()), offsetof(::g::Fuse::Elements::ElementBatcher, _atlasPool), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementBatch_typeof()), offsetof(::g::Fuse::Elements::ElementBatcher, _batchPool), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::IElementBatchDrawable_typeof()), offsetof(::g::Fuse::Elements::ElementBatcher, _drawList), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Elements::ElementBatcher, _elements), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof()), offsetof(::g::Fuse::Elements::ElementBatcher, _reinsertCheckList), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementBatcher, DrawListValid), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Elements::ElementBatcher, MaxSpilledRatio), 0);
    return type;
}

// public ElementBatcher() :867
void ElementBatcher__ctor__fn(ElementBatcher* __this)
{
    __this->ctor_();
}

// public void AddElement(Fuse.Node elm) :883
void ElementBatcher__AddElement_fn(ElementBatcher* __this, ::g::Fuse::Node* elm)
{
    __this->AddElement(elm);
}

// private Fuse.Elements.ElementAtlas allocAtlas() :895
void ElementBatcher__allocAtlas_fn(ElementBatcher* __this, ::g::Fuse::Elements::ElementAtlas** __retval)
{
    *__retval = __this->allocAtlas();
}

// private Fuse.Elements.ElementBatch allocBatch(Fuse.Elements.ElementAtlas atlas) :902
void ElementBatcher__allocBatch_fn(ElementBatcher* __this, ::g::Fuse::Elements::ElementAtlas* atlas, ::g::Fuse::Elements::ElementBatch** __retval)
{
    *__retval = __this->allocBatch(atlas);
}

// private void DiscardAtlasing() :909
void ElementBatcher__DiscardAtlasing_fn(ElementBatcher* __this)
{
    __this->DiscardAtlasing();
}

// private void DiscardBatching() :926
void ElementBatcher__DiscardBatching_fn(ElementBatcher* __this)
{
    __this->DiscardBatching();
}

// public void Draw(Fuse.DrawContext dc) :1084
void ElementBatcher__Draw_fn(ElementBatcher* __this, ::g::Fuse::DrawContext* dc)
{
    __this->Draw(dc);
}

// private void Fuse.Resources.ISoftDisposable.SoftDispose() :878
void ElementBatcher__Fuse_Resources_ISoftDisposable_SoftDispose_fn(ElementBatcher* __this)
{
    __this->DiscardAtlasing();
}

// private static int get_MaxElementPixels() :935
void ElementBatcher__get_MaxElementPixels_fn(int* __retval)
{
    *__retval = ElementBatcher::MaxElementPixels();
}

// private static int2 get_MaxElementSize() :933
void ElementBatcher__get_MaxElementSize_fn(::g::Uno::Int2* __retval)
{
    *__retval = ElementBatcher::MaxElementSize();
}

// public ElementBatcher New() :867
void ElementBatcher__New1_fn(ElementBatcher** __retval)
{
    *__retval = ElementBatcher::New1();
}

// private void OnAtlasSizeChanged(object sender, Uno.EventArgs args) :873
void ElementBatcher__OnAtlasSizeChanged_fn(ElementBatcher* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnAtlasSizeChanged(sender, args);
}

// public void RemoveAllElements() :889
void ElementBatcher__RemoveAllElements_fn(ElementBatcher* __this)
{
    __this->RemoveAllElements();
}

// public static bool ShouldBatchElement(Fuse.Node node) :950
void ElementBatcher__ShouldBatchElement_fn(::g::Fuse::Node* node, bool* __retval)
{
    *__retval = ElementBatcher::ShouldBatchElement(node);
}

// public static bool ShouldBatchElementWithCachingMode(Fuse.Elements.CachingMode mode) :945
void ElementBatcher__ShouldBatchElementWithCachingMode_fn(int* mode, bool* __retval)
{
    *__retval = ElementBatcher::ShouldBatchElementWithCachingMode(*mode);
}

// public static bool ShouldBatchElementWithSize(int2 size) :937
void ElementBatcher__ShouldBatchElementWithSize_fn(::g::Uno::Int2* size, bool* __retval)
{
    *__retval = ElementBatcher::ShouldBatchElementWithSize(*size);
}

// private void UpdateDrawList() :973
void ElementBatcher__UpdateDrawList_fn(ElementBatcher* __this)
{
    __this->UpdateDrawList();
}

// public ElementBatcher() [instance] :867
void ElementBatcher::ctor_()
{
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[89/*Uno.Collections.List<Fuse.Node>*/]));
    _atlasPool = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[90/*Uno.Collections.List<Fuse.Elements.ElementAtlas>*/]));
    _batchPool = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[91/*Uno.Collections.List<Fuse.Elements.ElementBatch>*/]));
    _drawList = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[92/*Uno.Collections.List<Fuse.Elements.IElementBatchDrawable>*/]));
    _reinsertCheckList = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[80/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>*/]));
    ::g::Fuse::Resources::DisposalManager::Add1((uObject*)this);
    ::g::Fuse::Elements::ElementAtlasFramebufferPool::add_AtlasSizeChanged(uDelegate::New(::TYPES[57/*Uno.EventHandler*/], (void*)ElementBatcher__OnAtlasSizeChanged_fn, this));
}

// public void AddElement(Fuse.Node elm) [instance] :883
void ElementBatcher::AddElement(::g::Fuse::Node* elm)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_elements), elm);
    DrawListValid = false;
}

// private Fuse.Elements.ElementAtlas allocAtlas() [instance] :895
::g::Fuse::Elements::ElementAtlas* ElementBatcher::allocAtlas()
{
    ::g::Fuse::Elements::ElementAtlas* atlas = ::g::Fuse::Elements::ElementAtlas::New1();
    ::g::Uno::Collections::List__Add_fn(uPtr(_atlasPool), atlas);
    return atlas;
}

// private Fuse.Elements.ElementBatch allocBatch(Fuse.Elements.ElementAtlas atlas) [instance] :902
::g::Fuse::Elements::ElementBatch* ElementBatcher::allocBatch(::g::Fuse::Elements::ElementAtlas* atlas)
{
    ::g::Fuse::Elements::ElementBatch* batch = ::g::Fuse::Elements::ElementBatch::New1(this, atlas);
    ::g::Uno::Collections::List__Add_fn(uPtr(_batchPool), batch);
    return batch;
}

// private void DiscardAtlasing() [instance] :909
void ElementBatcher::DiscardAtlasing()
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret14;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret15;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_atlasPool), &ret14), ret14); enum1.MoveNext(::TYPES[93/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::ElementAtlas* atlas = enum1.Current(::TYPES[93/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
        uPtr(atlas)->Dispose();
    }

    uPtr(_atlasPool)->Clear();

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret15), ret15); enum2.MoveNext(::TYPES[94/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* node = enum2.Current(::TYPES[94/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
        ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(node, ::TYPES[2/*Fuse.Elements.Element*/]);

        if (elm != NULL)
            uPtr(elm)->ElementBatchEntry(NULL);
    }

    uPtr(_drawList)->Clear();
    DrawListValid = false;
}

// private void DiscardBatching() [instance] :926
void ElementBatcher::DiscardBatching()
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatch*> > ret16;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatch*> > enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_batchPool), &ret16), ret16); enum3.MoveNext(::TYPES[95/*Uno.Collections.List<Fuse.Elements.ElementBatch>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::ElementBatch* batch = enum3.Current(::TYPES[95/*Uno.Collections.List<Fuse.Elements.ElementBatch>.Enumerator*/]);
        uPtr(batch)->Dispose();
    }

    uPtr(_batchPool)->Clear();
}

// public void Draw(Fuse.DrawContext dc) [instance] :1084
void ElementBatcher::Draw(::g::Fuse::DrawContext* dc)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret17;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret18;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret19;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret20;
    bool ret21;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatchEntry*> > ret22;
    ::g::Fuse::Node* ret23;
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret24;

    if ((double)MaxSpilledRatio > 0.5)
    {
        ::g::Uno::Collections::List* removeList = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[90/*Uno.Collections.List<Fuse.Elements.ElementAtlas>*/]);

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum7 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_atlasPool), &ret17), ret17); enum7.MoveNext(::TYPES[93/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]); )
        {
            ::g::Fuse::Elements::ElementAtlas* a = enum7.Current(::TYPES[93/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);

            if ((double)uPtr(a)->SpilledRatio() > 0.5)
                ::g::Uno::Collections::List__Add_fn(uPtr(removeList), a);
        }

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum8 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret18), ret18); enum8.MoveNext(::TYPES[94/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
        {
            ::g::Fuse::Node* node = enum8.Current(::TYPES[94/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
            ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(node, ::TYPES[2/*Fuse.Elements.Element*/]);

            if (elm == NULL)
                continue;

            for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum9 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(removeList), &ret19), ret19); enum9.MoveNext(::TYPES[93/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]); )
            {
                ::g::Fuse::Elements::ElementAtlas* a1 = enum9.Current(::TYPES[93/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);

                if ((uPtr(elm)->ElementBatchEntry() != NULL) && (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas == a1))
                    uPtr(elm)->ElementBatchEntry(NULL);
            }
        }

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum10 = (::g::Uno::Collections::List__GetEnumerator_fn(removeList, &ret20), ret20); enum10.MoveNext(::TYPES[93/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]); )
        {
            ::g::Fuse::Elements::ElementAtlas* a2 = enum10.Current(::TYPES[93/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
            ::g::Uno::Collections::List__Remove_fn(uPtr(_atlasPool), a2, &ret21);
            uPtr(a2)->Dispose();
        }

        DrawListValid = false;
    }

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatchEntry*> > enum11 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_reinsertCheckList), &ret22), ret22); enum11.MoveNext(::TYPES[82/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::ElementBatchEntry* e = enum11.Current(::TYPES[82/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]);
        ::g::Fuse::Elements::Element* elm1 = uPtr(e)->_elm;
        ::g::Fuse::Elements::ElementAtlas* atlas = e->_atlas;

        if (((elm1 == NULL) || (uPtr(elm1)->ElementBatchEntry() == NULL)) || (atlas == NULL))
            continue;

        ::g::Uno::Recti cachingRect;

        if ((!::g::Fuse::Elements::Cache::GetCachingRect1(elm1, &cachingRect) || (cachingRect.Size().X > e->_rect.Size().X)) || (cachingRect.Size().Y > e->_rect.Size().Y))
        {
            if (!uPtr(atlas)->ReinsertElement(elm1))
            {
                uPtr(atlas)->RemoveElement(elm1);
                uPtr(elm1)->ElementBatchEntry(NULL);
                DrawListValid = false;
            }
        }
    }

    uPtr(_reinsertCheckList)->Clear();

    if (!DrawListValid)
    {
        UpdateDrawList();
        DrawListValid = true;
    }

    ::g::Fuse::Node* parent = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(0), &ret23), ret23))->Parent();
    ::g::Uno::Float4x4 localToClipTransform = uPtr(dc)->GetLocalToClipTransform(parent);
    ::g::Uno::Rect scissorRectInClipSpace = ::g::Fuse::Elements::ElementAtlas::GetScissorRectInClipSpace(dc);

    for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum12 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_drawList), &ret24), ret24); enum12.MoveNext(::TYPES[96/*Uno.Collections.List<Fuse.Elements.IElementBatchDrawable>.Enumerator*/]); )
    {
        uObject* d = enum12.Current(::TYPES[96/*Uno.Collections.List<Fuse.Elements.IElementBatchDrawable>.Enumerator*/]);
        ::g::Fuse::Elements::IElementBatchDrawable::Draw(uInterface(uPtr(d), ::TYPES[97/*Fuse.Elements.IElementBatchDrawable*/]), dc, localToClipTransform, scissorRectInClipSpace);
    }
}

// private void OnAtlasSizeChanged(object sender, Uno.EventArgs args) [instance] :873
void ElementBatcher::OnAtlasSizeChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    DiscardAtlasing();
}

// public void RemoveAllElements() [instance] :889
void ElementBatcher::RemoveAllElements()
{
    uPtr(_elements)->Clear();
    DrawListValid = false;
}

// private void UpdateDrawList() [instance] :973
void ElementBatcher::UpdateDrawList()
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret25;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret26;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret27;
    uPtr(_drawList)->Clear();
    DiscardBatching();
    ::g::Uno::Int2 maxBatchRenderBounds = ::g::Uno::Int2__op_Multiply(::g::Fuse::Elements::DisplayHelpers::DisplaySizeHint(), 2);
    ::g::Fuse::Elements::ElementBatch* batch = NULL;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret25), ret25); enum4.MoveNext(::TYPES[94/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* node = enum4.Current(::TYPES[94/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);

        if (!ElementBatcher::ShouldBatchElement(node))
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(_drawList), (uObject*)::g::Fuse::Elements::SingleNodeDrawable::New1(node));
            batch = NULL;
            continue;
        }

        ::g::Fuse::Elements::Element* elm = uCast< ::g::Fuse::Elements::Element*>(node, ::TYPES[2/*Fuse.Elements.Element*/]);
        bool emitNewBatch = false;
        ::g::Fuse::Elements::ElementAtlas* atlas = NULL;

        if (batch == NULL)
        {
            emitNewBatch = true;

            if (uPtr(elm)->ElementBatchEntry() != NULL)
                atlas = uPtr(uPtr(elm)->ElementBatchEntry())->_atlas;
        }
        else
        {
            if ((uPtr(elm)->ElementBatchEntry() == NULL) || (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas == NULL))
            {
                atlas = uPtr(batch)->_elementAtlas;

                if (!uPtr(atlas)->AddElement(elm))
                    atlas = NULL;
            }
            else
            {
                if (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas != uPtr(batch)->_elementAtlas)
                    emitNewBatch = true;

                atlas = uPtr(uPtr(elm)->ElementBatchEntry())->_atlas;
            }
        }

        if ((batch != NULL) && !emitNewBatch)
        {
            ::g::Uno::Rect batchRenderBounds = uPtr(batch)->RenderBounds();
            ::g::Uno::Rect elmRenderBounds = uPtr(elm)->CalcRenderBoundsInParentSpace();
            ::g::Uno::Rect newRenderBounds = ::g::Uno::Rect__Union(batchRenderBounds, elmRenderBounds);

            if (((newRenderBounds.Size().X > (float)maxBatchRenderBounds.X) || (newRenderBounds.Size().Y > (float)maxBatchRenderBounds.Y)) || batch->IsFull())
                emitNewBatch = true;
        }

        if (emitNewBatch || (atlas == NULL))
        {
            if (atlas == NULL)
            {
                for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum5 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_atlasPool), &ret26), ret26); enum5.MoveNext(::TYPES[93/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]); )
                {
                    ::g::Fuse::Elements::ElementAtlas* a = enum5.Current(::TYPES[93/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);

                    if (uPtr(a)->AddElement(elm))
                    {
                        atlas = a;
                        break;
                    }
                }

                if (atlas == NULL)
                    atlas = allocAtlas();
            }

            batch = allocBatch(atlas);

            if (((uPtr(elm)->ElementBatchEntry() == NULL) || (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas != atlas)) && !uPtr(atlas)->AddElement(elm))
            {
                ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[17/*"BUG: atlas-...*/], 1, ::STRINGS[1/*"C:\\Program...*/], 1064);
                ::g::Uno::Collections::List__Add_fn(uPtr(_drawList), (uObject*)::g::Fuse::Elements::SingleNodeDrawable::New1(elm));
                batch = NULL;
                continue;
            }

            ::g::Uno::Collections::List__Add_fn(uPtr(_drawList), (uObject*)batch);
        }

        uPtr(batch)->AddElement(elm);
    }

    MaxSpilledRatio = 0.0f;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum6 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_atlasPool), &ret27), ret27); enum6.MoveNext(::TYPES[93/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::ElementAtlas* a1 = enum6.Current(::TYPES[93/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
        MaxSpilledRatio = ::g::Uno::Math::Max1(MaxSpilledRatio, uPtr(a1)->SpilledRatio());
    }
}

// public ElementBatcher New() [static] :867
ElementBatcher* ElementBatcher::New1()
{
    ElementBatcher* obj13 = (ElementBatcher*)uNew(ElementBatcher_typeof());
    obj13->ctor_();
    return obj13;
}

// public static bool ShouldBatchElement(Fuse.Node node) [static] :950
bool ElementBatcher::ShouldBatchElement(::g::Fuse::Node* node)
{
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(node, ::TYPES[2/*Fuse.Elements.Element*/]);

    if (elm == NULL)
        return false;

    if (uPtr(elm)->DrawCost() <= 1.0)
        return false;

    if (!ElementBatcher::ShouldBatchElementWithCachingMode(uPtr(elm)->CachingMode()))
        return false;

    ::g::Uno::Recti cacheRect;

    if (!::g::Fuse::Elements::Cache::GetCachingRect1(elm, &cacheRect))
        return false;

    return ElementBatcher::ShouldBatchElementWithSize(cacheRect.Size());
}

// public static bool ShouldBatchElementWithCachingMode(Fuse.Elements.CachingMode mode) [static] :945
bool ElementBatcher::ShouldBatchElementWithCachingMode(int mode)
{
    return mode != 2;
}

// public static bool ShouldBatchElementWithSize(int2 size) [static] :937
bool ElementBatcher::ShouldBatchElementWithSize(::g::Uno::Int2 size)
{
    ::g::Uno::Int2 maxSize = ElementBatcher::MaxElementSize();
    return ((size.X <= maxSize.X) && (size.Y <= maxSize.Y)) && ((size.X * size.Y) <= ElementBatcher::MaxElementPixels());
}

// private static int get_MaxElementPixels() [static] :935
int ElementBatcher::MaxElementPixels()
{
    return (ElementBatcher::MaxElementSize().X * ElementBatcher::MaxElementSize().Y) / 2;
}

// private static int2 get_MaxElementSize() [static] :933
::g::Uno::Int2 ElementBatcher::MaxElementSize()
{
    return ::g::Fuse::Elements::ElementAtlasFramebuffer::Size();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1297)
// ------------------------------------------------------------

// private struct Element.GMSCacheItem :1297
// {
uStructType* Element__GMSCacheItem_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(Element__GMSCacheItem);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Elements.Element.GMSCacheItem", options);
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element__GMSCacheItem, fillSize), 0,
        ::g::Fuse::SizeFlags_typeof(), offsetof(::g::Fuse::Elements::Element__GMSCacheItem, fillSet), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element__GMSCacheItem, result), 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(890)
// -----------------------------------------------------------

// public enum HitTestMode :890
uEnumType* HitTestMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.HitTestMode", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "None", 0LL,
        "LocalVisual", 1LL,
        "LocalBounds", 2LL,
        "Children", 4LL,
        "LocalVisualAndChildren", 5LL,
        "LocalBoundsAndChildren", 6LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Caching\$.uno(840)
// -------------------------------------------------------------------

// internal abstract interface IElementBatchDrawable :840
// {
uInterfaceType* IElementBatchDrawable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Elements.IElementBatchDrawable", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1657)
// ------------------------------------------------------------

// public abstract interface ITransformOrigin :1657
// {
uInterfaceType* ITransformOrigin_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Elements.ITransformOrigin", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("GetOffset", NULL, NULL, offsetof(ITransformOrigin, fp_GetOffset), false, ::g::Uno::Float3_typeof(), 1, ::g::Fuse::Elements::Element_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(2021)
// ------------------------------------------------------------

// public sealed class LayoutMasterBoxSizing :2021
// {
// static LayoutMasterBoxSizing() :2021
static void LayoutMasterBoxSizing__cctor__fn(uType* __type)
{
    LayoutMasterBoxSizing::Singleton_ = LayoutMasterBoxSizing::New1();
    LayoutMasterBoxSizing::_layoutMasterDataProperty_ = ::g::Fuse::Properties::CreateHandle();
}

::g::Fuse::Elements::BoxSizing_type* LayoutMasterBoxSizing_typeof()
{
    static uSStrong< ::g::Fuse::Elements::BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LayoutMasterBoxSizing);
    options.TypeSize = sizeof(::g::Fuse::Elements::BoxSizing_type);
    type = (::g::Fuse::Elements::BoxSizing_type*)uClassType::New("Fuse.Elements.LayoutMasterBoxSizing", options);
    type->SetBase(::g::Fuse::Elements::BoxSizing_typeof());
    type->fp_ctor_ = (void*)LayoutMasterBoxSizing__New1_fn;
    type->fp_cctor_ = LayoutMasterBoxSizing__cctor__fn;
    type->fp_CalcBoxPlacement = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, ::g::Uno::Float2*, int*, ::g::Fuse::Elements::BoxPlacement*))LayoutMasterBoxSizing__CalcBoxPlacement_fn;
    type->fp_CalcMarginSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))LayoutMasterBoxSizing__CalcMarginSize_fn;
    type->fp_IsContentRelativeSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, int*))LayoutMasterBoxSizing__IsContentRelativeSize_fn;
    type->fp_RequestLayout = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*))LayoutMasterBoxSizing__RequestLayout_fn;
    ::TYPES[59] = ::g::Fuse::Elements::BoxPlacement_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[48] = ::g::Fuse::Elements::StandardBoxSizing_typeof();
    ::TYPES[98] = LayoutMasterBoxSizing__LayoutMasterData_typeof();
    ::TYPES[4] = ::g::Fuse::Node_typeof();
    ::TYPES[14] = uObject_typeof();
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Elements::LayoutMasterBoxSizing::_layoutMasterDataProperty_, uFieldFlagsStatic,
        LayoutMasterBoxSizing_typeof(), (uintptr_t)&::g::Fuse::Elements::LayoutMasterBoxSizing::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 1));
    type->Reflection.SetFunctions(6,
        new uFunction("GetLayoutMaster", NULL, (void*)LayoutMasterBoxSizing__GetLayoutMaster_fn, 0, true, ::g::Fuse::Elements::Element_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("GetLayoutMasterMode", NULL, (void*)LayoutMasterBoxSizing__GetLayoutMasterMode_fn, 0, true, ::g::Fuse::Elements::LayoutMasterMode_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction(".ctor", NULL, (void*)LayoutMasterBoxSizing__New1_fn, 0, true, LayoutMasterBoxSizing_typeof(), 0),
        new uFunction("ResetLayoutMaster", NULL, (void*)LayoutMasterBoxSizing__ResetLayoutMaster_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("SetLayoutMaster", NULL, (void*)LayoutMasterBoxSizing__SetLayoutMaster_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Fuse::Elements::Element_typeof()),
        new uFunction("SetLayoutMasterMode", NULL, (void*)LayoutMasterBoxSizing__SetLayoutMasterMode_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Fuse::Elements::LayoutMasterMode_typeof()));
    return type;
}

// public generated LayoutMasterBoxSizing() :2021
void LayoutMasterBoxSizing__ctor_1_fn(LayoutMasterBoxSizing* __this)
{
    __this->ctor_1();
}

// public override sealed Fuse.Elements.BoxPlacement CalcBoxPlacement(Fuse.Elements.Element element, float2 position, float2 availableSize, Fuse.SizeFlags availSet) :2025
void LayoutMasterBoxSizing__CalcBoxPlacement_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Fuse::Elements::BoxPlacement* __retval)
{
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 availableSize_ = *availableSize;
    ::g::Fuse::Elements::Element* master = LayoutMasterBoxSizing::GetLayoutMaster(element);

    if (master == NULL)
    {
        ::g::Fuse::Elements::BoxPlacement bp;
        bp.MarginBox = uPtr(element)->ActualSize();
        bp.Position = element->ActualPosition();
        bp.Size = element->ActualSize();
        return *__retval = bp, void();
    }

    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcBoxPlacement(element, position_, availableSize_, 3), void();
}

// public override sealed float2 CalcMarginSize(Fuse.Elements.Element element, float2 fillSize, Fuse.SizeFlags fillSet) :2048
void LayoutMasterBoxSizing__CalcMarginSize_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 fillSize_ = *fillSize;
    int fillSet_ = *fillSet;
    ::g::Fuse::Elements::Element* master = LayoutMasterBoxSizing::GetLayoutMaster(element);

    if (master == NULL)
        return *__retval = uPtr(element)->ActualSize(), void();

    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcMarginSize(element, fillSize_, fillSet_), void();
}

// public static Fuse.Elements.Element GetLayoutMaster(Fuse.Elements.Element elm) :2168
void LayoutMasterBoxSizing__GetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = LayoutMasterBoxSizing::GetLayoutMaster(elm);
}

// private static Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData GetLayoutMasterData(Fuse.Elements.Element elm) :2143
void LayoutMasterBoxSizing__GetLayoutMasterData_fn(::g::Fuse::Elements::Element* elm, LayoutMasterBoxSizing__LayoutMasterData** __retval)
{
    *__retval = LayoutMasterBoxSizing::GetLayoutMasterData(elm);
}

// public static Fuse.Elements.LayoutMasterMode GetLayoutMasterMode(Fuse.Elements.Element elm) :2186
void LayoutMasterBoxSizing__GetLayoutMasterMode_fn(::g::Fuse::Elements::Element* elm, int* __retval)
{
    *__retval = LayoutMasterBoxSizing::GetLayoutMasterMode(elm);
}

// public override sealed Fuse.LayoutDependent IsContentRelativeSize(Fuse.Elements.Element element) :2155
void LayoutMasterBoxSizing__IsContentRelativeSize_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval)
{
    return *__retval = 0, void();
}

// public generated LayoutMasterBoxSizing New() :2021
void LayoutMasterBoxSizing__New1_fn(LayoutMasterBoxSizing** __retval)
{
    *__retval = LayoutMasterBoxSizing::New1();
}

// public override sealed void RequestLayout(Fuse.Elements.Element element) :2042
void LayoutMasterBoxSizing__RequestLayout_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element)
{
    LayoutMasterBoxSizing__LayoutMasterData* data = LayoutMasterBoxSizing::GetLayoutMasterData(element);
    uPtr(data)->ScheduleCheckLayout();
}

// public static void ResetLayoutMaster(Fuse.Elements.Element elm) :2174
void LayoutMasterBoxSizing__ResetLayoutMaster_fn(::g::Fuse::Elements::Element* elm)
{
    LayoutMasterBoxSizing::ResetLayoutMaster(elm);
}

// public static void SetLayoutMaster(Fuse.Elements.Element elm, Fuse.Elements.Element master) :2162
void LayoutMasterBoxSizing__SetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master)
{
    LayoutMasterBoxSizing::SetLayoutMaster(elm, master);
}

// public static void SetLayoutMasterMode(Fuse.Elements.Element elm, Fuse.Elements.LayoutMasterMode mode) :2180
void LayoutMasterBoxSizing__SetLayoutMasterMode_fn(::g::Fuse::Elements::Element* elm, int* mode)
{
    LayoutMasterBoxSizing::SetLayoutMasterMode(elm, *mode);
}

uSStrong< ::g::Fuse::PropertyHandle*> LayoutMasterBoxSizing::_layoutMasterDataProperty_;
uSStrong<LayoutMasterBoxSizing*> LayoutMasterBoxSizing::Singleton_;

// public generated LayoutMasterBoxSizing() [instance] :2021
void LayoutMasterBoxSizing::ctor_1()
{
    ctor_();
}

// public static Fuse.Elements.Element GetLayoutMaster(Fuse.Elements.Element elm) [static] :2168
::g::Fuse::Elements::Element* LayoutMasterBoxSizing::GetLayoutMaster(::g::Fuse::Elements::Element* elm)
{
    LayoutMasterBoxSizing_typeof()->Init();
    return uPtr(LayoutMasterBoxSizing::GetLayoutMasterData(elm))->Master();
}

// private static Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData GetLayoutMasterData(Fuse.Elements.Element elm) [static] :2143
LayoutMasterBoxSizing__LayoutMasterData* LayoutMasterBoxSizing::GetLayoutMasterData(::g::Fuse::Elements::Element* elm)
{
    LayoutMasterBoxSizing_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(LayoutMasterBoxSizing::_layoutMasterDataProperty(), &v))
        return uCast<LayoutMasterBoxSizing__LayoutMasterData*>(v, ::TYPES[98/*Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData*/]);

    LayoutMasterBoxSizing__LayoutMasterData* sd = LayoutMasterBoxSizing__LayoutMasterData::New1();
    sd->Element = elm;
    uPtr(uPtr(elm)->Properties())->Set(LayoutMasterBoxSizing::_layoutMasterDataProperty(), sd);
    return sd;
}

// public static Fuse.Elements.LayoutMasterMode GetLayoutMasterMode(Fuse.Elements.Element elm) [static] :2186
int LayoutMasterBoxSizing::GetLayoutMasterMode(::g::Fuse::Elements::Element* elm)
{
    LayoutMasterBoxSizing_typeof()->Init();
    return uPtr(LayoutMasterBoxSizing::GetLayoutMasterData(elm))->Mode;
}

// public generated LayoutMasterBoxSizing New() [static] :2021
LayoutMasterBoxSizing* LayoutMasterBoxSizing::New1()
{
    LayoutMasterBoxSizing* obj1 = (LayoutMasterBoxSizing*)uNew(LayoutMasterBoxSizing_typeof());
    obj1->ctor_1();
    return obj1;
}

// public static void ResetLayoutMaster(Fuse.Elements.Element elm) [static] :2174
void LayoutMasterBoxSizing::ResetLayoutMaster(::g::Fuse::Elements::Element* elm)
{
    LayoutMasterBoxSizing_typeof()->Init();
    uPtr(LayoutMasterBoxSizing::GetLayoutMasterData(elm))->Master(NULL);
}

// public static void SetLayoutMaster(Fuse.Elements.Element elm, Fuse.Elements.Element master) [static] :2162
void LayoutMasterBoxSizing::SetLayoutMaster(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master)
{
    LayoutMasterBoxSizing_typeof()->Init();
    uPtr(LayoutMasterBoxSizing::GetLayoutMasterData(elm))->Master(master);
}

// public static void SetLayoutMasterMode(Fuse.Elements.Element elm, Fuse.Elements.LayoutMasterMode mode) [static] :2180
void LayoutMasterBoxSizing::SetLayoutMasterMode(::g::Fuse::Elements::Element* elm, int mode)
{
    LayoutMasterBoxSizing_typeof()->Init();
    uPtr(LayoutMasterBoxSizing::GetLayoutMasterData(elm))->Mode = mode;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(2060)
// ------------------------------------------------------------

// private sealed class LayoutMasterBoxSizing.LayoutMasterData :2060
// {
uType* LayoutMasterBoxSizing__LayoutMasterData_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(LayoutMasterBoxSizing__LayoutMasterData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData", options);
    type->fp_ctor_ = (void*)LayoutMasterBoxSizing__LayoutMasterData__New1_fn;
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[4] = ::g::Fuse::Node_typeof();
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[85] = ::g::Uno::Float4_typeof();
    ::TYPES[7] = ::g::Uno::Rect_typeof();
    ::TYPES[64] = ::g::Uno::Action_typeof();
    ::TYPES[54] = ::g::Fuse::PlacedHandler_typeof();
    type->SetFields(0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Elements::LayoutMasterBoxSizing__LayoutMasterData, _master), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::LayoutMasterBoxSizing__LayoutMasterData, _pendingCheckLayout), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Elements::LayoutMasterBoxSizing__LayoutMasterData, Element), uFieldFlagsWeak,
        ::g::Fuse::Elements::LayoutMasterMode_typeof(), offsetof(::g::Fuse::Elements::LayoutMasterBoxSizing__LayoutMasterData, Mode), 0);
    return type;
}

// public generated LayoutMasterData() :2060
void LayoutMasterBoxSizing__LayoutMasterData__ctor__fn(LayoutMasterBoxSizing__LayoutMasterData* __this)
{
    __this->ctor_();
}

// internal void CheckLayout() :2103
void LayoutMasterBoxSizing__LayoutMasterData__CheckLayout_fn(LayoutMasterBoxSizing__LayoutMasterData* __this)
{
    __this->CheckLayout();
}

// public Fuse.Elements.Element get_Master() :2070
void LayoutMasterBoxSizing__LayoutMasterData__get_Master_fn(LayoutMasterBoxSizing__LayoutMasterData* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Master();
}

// public void set_Master(Fuse.Elements.Element value) :2071
void LayoutMasterBoxSizing__LayoutMasterData__set_Master_fn(LayoutMasterBoxSizing__LayoutMasterData* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Master(value);
}

// public generated LayoutMasterData New() :2060
void LayoutMasterBoxSizing__LayoutMasterData__New1_fn(LayoutMasterBoxSizing__LayoutMasterData** __retval)
{
    *__retval = LayoutMasterBoxSizing__LayoutMasterData::New1();
}

// private void OnPlaced(object s, object args) :2137
void LayoutMasterBoxSizing__LayoutMasterData__OnPlaced_fn(LayoutMasterBoxSizing__LayoutMasterData* __this, uObject* s, uObject* args)
{
    __this->OnPlaced(s, args);
}

// internal void ScheduleCheckLayout() :2093
void LayoutMasterBoxSizing__LayoutMasterData__ScheduleCheckLayout_fn(LayoutMasterBoxSizing__LayoutMasterData* __this)
{
    __this->ScheduleCheckLayout();
}

// public generated LayoutMasterData() [instance] :2060
void LayoutMasterBoxSizing__LayoutMasterData::ctor_()
{
}

// internal void CheckLayout() [instance] :2103
void LayoutMasterBoxSizing__LayoutMasterData::CheckLayout()
{
    ::g::Uno::Float4 ind1;
    _pendingCheckLayout = false;

    if ((((Element == NULL) || (_master == NULL)) || !uPtr(_master)->IsLocalRooted()) || !uPtr(Element)->IsLocalRooted())
        return;

    ::g::Uno::Float2 pos = ::g::Uno::Float2__New1(0.0f);
    ::g::Uno::Float2 size = ::g::Uno::Float2__New1(0.0f);

    if (Mode == 1)
    {
        pos = uPtr(_master)->ActualPosition();
        size = uPtr(_master)->ActualSize();
    }
    else if (Mode == 2)
    {
        ::g::Fuse::Elements::Element* pe = uAs< ::g::Fuse::Elements::Element*>(uPtr(_master)->Parent(), ::TYPES[2/*Fuse.Elements.Element*/]);

        if (pe != NULL)
        {
            pos = uPtr(pe)->ActualPosition();
            size = pe->ActualSize();
        }
    }
    else
    {
        ::g::Uno::Float4x4 m = uPtr(uPtr(_master)->Parent())->GetTransformTo(uPtr(Element)->Parent());
        pos = (ind1 = ::g::Uno::Vector::Transform1(uPtr(_master)->ActualPosition(), m), ::g::Uno::Float2__New2(ind1.X, ind1.Y));
        ::g::Uno::Rect r = ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), uPtr(_master)->ActualSize());
        size = ::g::Uno::Rect__Transform(r, m).Size();
    }

    uPtr(Element)->ArrangeMarginBox(pos, size, 3);
}

// public Fuse.Elements.Element get_Master() [instance] :2070
::g::Fuse::Elements::Element* LayoutMasterBoxSizing__LayoutMasterData::Master()
{
    return _master;
}

// public void set_Master(Fuse.Elements.Element value) [instance] :2071
void LayoutMasterBoxSizing__LayoutMasterData::Master(::g::Fuse::Elements::Element* value)
{
    if (_master == value)
        return;

    if (_master != NULL)
        uPtr(_master)->remove_Placed(uDelegate::New(::TYPES[54/*Fuse.PlacedHandler*/], (void*)LayoutMasterBoxSizing__LayoutMasterData__OnPlaced_fn, this));

    _master = value;

    if (_master != NULL)
        uPtr(_master)->add_Placed(uDelegate::New(::TYPES[54/*Fuse.PlacedHandler*/], (void*)LayoutMasterBoxSizing__LayoutMasterData__OnPlaced_fn, this));

    if (uPtr(Element)->IsLocalRooted())
        ScheduleCheckLayout();
}

// private void OnPlaced(object s, object args) [instance] :2137
void LayoutMasterBoxSizing__LayoutMasterData::OnPlaced(uObject* s, uObject* args)
{
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[64/*Uno.Action*/], (void*)LayoutMasterBoxSizing__LayoutMasterData__CheckLayout_fn, this));
}

// internal void ScheduleCheckLayout() [instance] :2093
void LayoutMasterBoxSizing__LayoutMasterData::ScheduleCheckLayout()
{
    if (!_pendingCheckLayout)
    {
        _pendingCheckLayout = true;
        ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[64/*Uno.Action*/], (void*)LayoutMasterBoxSizing__LayoutMasterData__CheckLayout_fn, this));
    }
}

// public generated LayoutMasterData New() [static] :2060
LayoutMasterBoxSizing__LayoutMasterData* LayoutMasterBoxSizing__LayoutMasterData::New1()
{
    LayoutMasterBoxSizing__LayoutMasterData* obj2 = (LayoutMasterBoxSizing__LayoutMasterData*)uNew(LayoutMasterBoxSizing__LayoutMasterData_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(2014)
// ------------------------------------------------------------

// public enum LayoutMasterMode :2014
uEnumType* LayoutMasterMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.LayoutMasterMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "ParentTransform", 0LL,
        "LocalLayout", 1LL,
        "ParentLayout", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(2200)
// ------------------------------------------------------------

// public sealed class LimitBoxSizing :2200
// {
// static LimitBoxSizing() :2200
static void LimitBoxSizing__cctor__fn(uType* __type)
{
    LimitBoxSizing::Singleton_ = LimitBoxSizing::New1();
}

::g::Fuse::Elements::BoxSizing_type* LimitBoxSizing_typeof()
{
    static uSStrong< ::g::Fuse::Elements::BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(LimitBoxSizing);
    options.TypeSize = sizeof(::g::Fuse::Elements::BoxSizing_type);
    type = (::g::Fuse::Elements::BoxSizing_type*)uClassType::New("Fuse.Elements.LimitBoxSizing", options);
    type->SetBase(::g::Fuse::Elements::BoxSizing_typeof());
    type->fp_ctor_ = (void*)LimitBoxSizing__New1_fn;
    type->fp_cctor_ = LimitBoxSizing__cctor__fn;
    type->fp_CalcBoxPlacement = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, ::g::Uno::Float2*, int*, ::g::Fuse::Elements::BoxPlacement*))LimitBoxSizing__CalcBoxPlacement_fn;
    type->fp_CalcMarginSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))LimitBoxSizing__CalcMarginSize_fn;
    ::TYPES[48] = ::g::Fuse::Elements::StandardBoxSizing_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[55] = ::g::Fuse::SizeFlags_typeof();
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[3] = ::g::Uno::Float2_typeof();
    ::TYPES[4] = ::g::Fuse::Node_typeof();
    type->SetFields(0,
        LimitBoxSizing_typeof(), (uintptr_t)&::g::Fuse::Elements::LimitBoxSizing::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LimitBoxSizing__New1_fn, 0, true, LimitBoxSizing_typeof(), 0));
    return type;
}

// public generated LimitBoxSizing() :2200
void LimitBoxSizing__ctor_1_fn(LimitBoxSizing* __this)
{
    __this->ctor_1();
}

// public override sealed Fuse.Elements.BoxPlacement CalcBoxPlacement(Fuse.Elements.Element element, float2 position, float2 availableSize, Fuse.SizeFlags availSet) :2204
void LimitBoxSizing__CalcBoxPlacement_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Fuse::Elements::BoxPlacement* __retval)
{
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 availableSize_ = *availableSize;
    int availSet_ = *availSet;
    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcBoxPlacement(element, position_, availableSize_, availSet_), void();
}

// public override sealed float2 CalcMarginSize(Fuse.Elements.Element element, float2 fillSize, Fuse.SizeFlags fillSet) :2210
void LimitBoxSizing__CalcMarginSize_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    bool ret2;
    int fillSet_ = *fillSet;
    bool ret3;
    ::g::Uno::Float2 fillSize_ = *fillSize;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::LimitHeightProperty()), element, &ret2), ret2))
        fillSet_ = fillSet_ & -3;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::LimitWidthProperty()), element, &ret3), ret3))
        fillSet_ = fillSet_ & -2;

    ::g::Uno::Float2 std = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcMarginSize(element, fillSize_, fillSet_);
    ::g::Uno::Float2 c = __this->Limit(element, std);
    return *__retval = c, void();
}

// private float2 Limit(Fuse.Elements.Element element, float2 std) :2222
void LimitBoxSizing__Limit_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* std, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Limit(element, *std);
}

// public generated LimitBoxSizing New() :2200
void LimitBoxSizing__New1_fn(LimitBoxSizing** __retval)
{
    *__retval = LimitBoxSizing::New1();
}

uSStrong<LimitBoxSizing*> LimitBoxSizing::Singleton_;

// public generated LimitBoxSizing() [instance] :2200
void LimitBoxSizing::ctor_1()
{
    ctor_();
}

// private float2 Limit(Fuse.Elements.Element element, float2 std) [instance] :2222
::g::Uno::Float2 LimitBoxSizing::Limit(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 std)
{
    bool ret4;
    float ret5;
    int ret6;
    bool ret7;
    float ret8;
    int ret9;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::LimitHeightProperty()), element, &ret4), ret4))
    {
        float height = (::g::Fuse::StyleProperty1__Get_fn(uPtr(::g::Fuse::Elements::Element::LimitHeightProperty()), element, &ret5), ret5);
        int unit = (::g::Fuse::StylePropertyWithUnit__GetUnit_fn(uPtr(::g::Fuse::Elements::Element::LimitHeightProperty()), element, &ret6), ret6);
        bool known;
        float size = UnitSize(element, height, unit, std.Y, true, &known);
        std.Y = ::g::Uno::Math::Min1(std.Y, size);
    }

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::LimitWidthProperty()), element, &ret7), ret7))
    {
        float height1 = (::g::Fuse::StyleProperty1__Get_fn(uPtr(::g::Fuse::Elements::Element::LimitWidthProperty()), element, &ret8), ret8);
        int unit1 = (::g::Fuse::StylePropertyWithUnit__GetUnit_fn(uPtr(::g::Fuse::Elements::Element::LimitWidthProperty()), element, &ret9), ret9);
        bool known1;
        float size1 = UnitSize(element, height1, unit1, std.X, true, &known1);
        std.X = ::g::Uno::Math::Min1(std.X, size1);
    }

    if (uPtr(element)->SnapToPixels())
        std = uPtr(element)->InternSnap(std);

    return std;
}

// public generated LimitBoxSizing New() [static] :2200
LimitBoxSizing* LimitBoxSizing::New1()
{
    LimitBoxSizing* obj1 = (LimitBoxSizing*)uNew(LimitBoxSizing_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(423)
// -----------------------------------------------------------

// internal sealed class NoImplicitMaxBoxSizing :423
// {
// static NoImplicitMaxBoxSizing() :423
static void NoImplicitMaxBoxSizing__cctor_1_fn(uType* __type)
{
    NoImplicitMaxBoxSizing::Singleton1_ = NoImplicitMaxBoxSizing::New2();
}

::g::Fuse::Elements::BoxSizing_type* NoImplicitMaxBoxSizing_typeof()
{
    static uSStrong< ::g::Fuse::Elements::BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NoImplicitMaxBoxSizing);
    options.TypeSize = sizeof(::g::Fuse::Elements::BoxSizing_type);
    type = (::g::Fuse::Elements::BoxSizing_type*)uClassType::New("Fuse.Elements.NoImplicitMaxBoxSizing", options);
    type->SetBase(::g::Fuse::Elements::StandardBoxSizing_typeof());
    type->fp_ctor_ = (void*)NoImplicitMaxBoxSizing__New2_fn;
    type->fp_cctor_ = NoImplicitMaxBoxSizing__cctor_1_fn;
    ::TYPES[48] = ::g::Fuse::Elements::StandardBoxSizing_typeof();
    type->SetFields(2,
        NoImplicitMaxBoxSizing_typeof(), (uintptr_t)&::g::Fuse::Elements::NoImplicitMaxBoxSizing::Singleton1_, uFieldFlagsStatic);
    return type;
}

// public NoImplicitMaxBoxSizing() :427
void NoImplicitMaxBoxSizing__ctor_2_fn(NoImplicitMaxBoxSizing* __this)
{
    __this->ctor_2();
}

// public NoImplicitMaxBoxSizing New() :427
void NoImplicitMaxBoxSizing__New2_fn(NoImplicitMaxBoxSizing** __retval)
{
    *__retval = NoImplicitMaxBoxSizing::New2();
}

uSStrong<NoImplicitMaxBoxSizing*> NoImplicitMaxBoxSizing::Singleton1_;

// public NoImplicitMaxBoxSizing() [instance] :427
void NoImplicitMaxBoxSizing::ctor_2()
{
    ctor_1();
    ImplicitMax = false;
}

// public NoImplicitMaxBoxSizing New() [static] :427
NoImplicitMaxBoxSizing* NoImplicitMaxBoxSizing::New2()
{
    NoImplicitMaxBoxSizing* obj1 = (NoImplicitMaxBoxSizing*)uNew(NoImplicitMaxBoxSizing_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(2283)
// ------------------------------------------------------------

// private class TranslationModes.OffsetMode :2283
// {
TranslationModes__OffsetMode_type* TranslationModes__OffsetMode_typeof()
{
    static uSStrong<TranslationModes__OffsetMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__OffsetMode);
    options.TypeSize = sizeof(TranslationModes__OffsetMode_type);
    type = (TranslationModes__OffsetMode_type*)uClassType::New("Fuse.Elements.TranslationModes.OffsetMode", options);
    type->fp_GetDstOffset = TranslationModes__OffsetMode__GetDstOffset_fn;
    type->fp_GetSrcOffset = TranslationModes__OffsetMode__GetSrcOffset_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__OffsetMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))TranslationModes__OffsetMode__get_Flags_fn;
    ::TYPES[99] = ::g::Fuse::Transform_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[4] = ::g::Fuse::Node_typeof();
    ::TYPES[85] = ::g::Uno::Float4_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(TranslationModes__OffsetMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__OffsetMode_type, interface1));
    return type;
}

// public generated OffsetMode() :2283
void TranslationModes__OffsetMode__ctor__fn(TranslationModes__OffsetMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :2307
void TranslationModes__OffsetMode__get_Flags_fn(TranslationModes__OffsetMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetAbsVector(Fuse.Translation t) :2285
void TranslationModes__OffsetMode__GetAbsVector_fn(TranslationModes__OffsetMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// protected virtual float3 GetDstOffset(Fuse.Elements.Element e) :2309
void TranslationModes__OffsetMode__GetDstOffset_fn(TranslationModes__OffsetMode* __this, ::g::Fuse::Elements::Element* e, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__New1(0.0f), void();
}

// protected virtual float3 GetSrcOffset(Fuse.Elements.Element e) :2310
void TranslationModes__OffsetMode__GetSrcOffset_fn(TranslationModes__OffsetMode* __this, ::g::Fuse::Elements::Element* e, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__New1(0.0f), void();
}

// public generated OffsetMode() [instance] :2283
void TranslationModes__OffsetMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :2307
int TranslationModes__OffsetMode::Flags()
{
    return 8;
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :2285
::g::Uno::Float3 TranslationModes__OffsetMode::GetAbsVector(::g::Fuse::Translation* t)
{
    ::g::Fuse::Node* n = uPtr(t)->RelativeNode();
    ::g::Fuse::Elements::Element* dstElement = uAs< ::g::Fuse::Elements::Element*>(n, ::TYPES[2/*Fuse.Elements.Element*/]);
    ::g::Uno::Float3 dst = ::g::Uno::Float3__New1(0.0f);

    if (dstElement != NULL)
        dst = GetDstOffset(dstElement);

    if ((t->Node == NULL) || (uPtr(t->Node)->Parent() == NULL))
        return ::g::Uno::Float3__New1(0.0f);

    ::g::Uno::Float4x4 m = ::g::Uno::Matrix::Mul8(uPtr(t->RelativeNode())->WorldTransform(), uPtr(uPtr(t->Node)->Parent())->WorldTransformInverse());
    ::g::Uno::Float4 ind1 = ::g::Uno::Vector::Transform4(dst, m);
    ::g::Uno::Float3 localP = ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z);
    ::g::Uno::Float3 localOff = ::g::Uno::Float3__New1(0.0f);
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(t->Node, ::TYPES[2/*Fuse.Elements.Element*/]);

    if (elm != NULL)
        localOff = ::g::Uno::Float3__op_UnaryNegation(::g::Uno::Float3__op_Addition2(::g::Uno::Float3__New4(uPtr(elm)->ActualPosition(), 0.0f), GetSrcOffset(elm)));

    ::g::Uno::Float3 worldChange = ::g::Uno::Float3__op_Addition2(localP, localOff);
    return worldChange;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(2313)
// ------------------------------------------------------------

// private sealed class TranslationModes.PositionOffsetMode :2313
// {
::g::Fuse::Elements::TranslationModes__OffsetMode_type* TranslationModes__PositionOffsetMode_typeof()
{
    static uSStrong< ::g::Fuse::Elements::TranslationModes__OffsetMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__PositionOffsetMode);
    options.TypeSize = sizeof(::g::Fuse::Elements::TranslationModes__OffsetMode_type);
    type = (::g::Fuse::Elements::TranslationModes__OffsetMode_type*)uClassType::New("Fuse.Elements.TranslationModes.PositionOffsetMode", options);
    type->SetBase(::g::Fuse::Elements::TranslationModes__OffsetMode_typeof());
    type->fp_ctor_ = (void*)TranslationModes__PositionOffsetMode__New2_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))::g::Fuse::Elements::TranslationModes__OffsetMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))::g::Fuse::Elements::TranslationModes__OffsetMode__get_Flags_fn;
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::Elements::TranslationModes__OffsetMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(::g::Fuse::Elements::TranslationModes__OffsetMode_type, interface1));
    return type;
}

// public generated PositionOffsetMode() :2313
void TranslationModes__PositionOffsetMode__ctor_1_fn(TranslationModes__PositionOffsetMode* __this)
{
    __this->ctor_1();
}

// public generated PositionOffsetMode New() :2313
void TranslationModes__PositionOffsetMode__New2_fn(TranslationModes__PositionOffsetMode** __retval)
{
    *__retval = TranslationModes__PositionOffsetMode::New2();
}

// public generated PositionOffsetMode() [instance] :2313
void TranslationModes__PositionOffsetMode::ctor_1()
{
    ctor_();
}

// public generated PositionOffsetMode New() [static] :2313
TranslationModes__PositionOffsetMode* TranslationModes__PositionOffsetMode::New2()
{
    TranslationModes__PositionOffsetMode* obj1 = (TranslationModes__PositionOffsetMode*)uNew(TranslationModes__PositionOffsetMode_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1198)
// ------------------------------------------------------------

// public sealed class PreplacementArgs :1198
// {
uType* PreplacementArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(PreplacementArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.PreplacementArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::PreplacementArgs, _HasPrev), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_HasPrev", NULL, (void*)PreplacementArgs__get_HasPrev_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
    return type;
}

// internal PreplacementArgs(bool hasPrev) :1203
void PreplacementArgs__ctor_1_fn(PreplacementArgs* __this, bool* hasPrev)
{
    __this->ctor_1(*hasPrev);
}

// public generated bool get_HasPrev() :1201
void PreplacementArgs__get_HasPrev_fn(PreplacementArgs* __this, bool* __retval)
{
    *__retval = __this->HasPrev();
}

// private generated void set_HasPrev(bool value) :1201
void PreplacementArgs__set_HasPrev_fn(PreplacementArgs* __this, bool* value)
{
    __this->HasPrev(*value);
}

// internal PreplacementArgs New(bool hasPrev) :1203
void PreplacementArgs__New2_fn(bool* hasPrev, PreplacementArgs** __retval)
{
    *__retval = PreplacementArgs::New2(*hasPrev);
}

// internal PreplacementArgs(bool hasPrev) [instance] :1203
void PreplacementArgs::ctor_1(bool hasPrev)
{
    ctor_();
    HasPrev(hasPrev);
}

// public generated bool get_HasPrev() [instance] :1201
bool PreplacementArgs::HasPrev()
{
    return _HasPrev;
}

// private generated void set_HasPrev(bool value) [instance] :1201
void PreplacementArgs::HasPrev(bool value)
{
    _HasPrev = value;
}

// internal PreplacementArgs New(bool hasPrev) [static] :1203
PreplacementArgs* PreplacementArgs::New2(bool hasPrev)
{
    PreplacementArgs* obj1 = (PreplacementArgs*)uNew(PreplacementArgs_typeof());
    obj1->ctor_1(hasPrev);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1209)
// ------------------------------------------------------------

// public delegate void PreplacementHandler(object sender, Fuse.Elements.PreplacementArgs args) :1209
uDelegateType* PreplacementHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Elements.PreplacementHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Elements::PreplacementArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1962)
// ------------------------------------------------------------

// internal enum SimpleAlignment :1962
uEnumType* SimpleAlignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.SimpleAlignment", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Begin", 0LL,
        "Center", 1LL,
        "End", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Caching\$.uno(845)
// -------------------------------------------------------------------

// internal sealed class SingleNodeDrawable :845
// {
SingleNodeDrawable_type* SingleNodeDrawable_typeof()
{
    static uSStrong<SingleNodeDrawable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SingleNodeDrawable);
    options.TypeSize = sizeof(SingleNodeDrawable_type);
    type = (SingleNodeDrawable_type*)uClassType::New("Fuse.Elements.SingleNodeDrawable", options);
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Uno::Float4x4*, ::g::Uno::Rect*))SingleNodeDrawable__Draw_fn;
    type->SetInterfaces(
        ::g::Fuse::Elements::IElementBatchDrawable_typeof(), offsetof(SingleNodeDrawable_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Elements::SingleNodeDrawable, _elm), 0);
    return type;
}

// public SingleNodeDrawable(Fuse.Node elm) :848
void SingleNodeDrawable__ctor__fn(SingleNodeDrawable* __this, ::g::Fuse::Node* elm)
{
    __this->ctor_(elm);
}

// public void Draw(Fuse.DrawContext dc, float4x4 localToClipTransform, Uno.Rect scissorRectInClipSpace) :853
void SingleNodeDrawable__Draw_fn(SingleNodeDrawable* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Rect* scissorRectInClipSpace)
{
    __this->Draw(dc, *localToClipTransform, *scissorRectInClipSpace);
}

// public SingleNodeDrawable New(Fuse.Node elm) :848
void SingleNodeDrawable__New1_fn(::g::Fuse::Node* elm, SingleNodeDrawable** __retval)
{
    *__retval = SingleNodeDrawable::New1(elm);
}

// public SingleNodeDrawable(Fuse.Node elm) [instance] :848
void SingleNodeDrawable::ctor_(::g::Fuse::Node* elm)
{
    _elm = elm;
}

// public void Draw(Fuse.DrawContext dc, float4x4 localToClipTransform, Uno.Rect scissorRectInClipSpace) [instance] :853
void SingleNodeDrawable::Draw(::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Rect scissorRectInClipSpace)
{
    uPtr(_elm)->Draw(dc);
}

// public SingleNodeDrawable New(Fuse.Node elm) [static] :848
SingleNodeDrawable* SingleNodeDrawable::New1(::g::Fuse::Node* elm)
{
    SingleNodeDrawable* obj1 = (SingleNodeDrawable*)uNew(SingleNodeDrawable_typeof());
    obj1->ctor_(elm);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(2335)
// ------------------------------------------------------------

// private sealed class TranslationModes.SizeFactorMode :2335
// {
TranslationModes__SizeFactorMode_type* TranslationModes__SizeFactorMode_typeof()
{
    static uSStrong<TranslationModes__SizeFactorMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__SizeFactorMode);
    options.TypeSize = sizeof(TranslationModes__SizeFactorMode_type);
    type = (TranslationModes__SizeFactorMode_type*)uClassType::New("Fuse.Elements.TranslationModes.SizeFactorMode", options);
    type->fp_ctor_ = (void*)TranslationModes__SizeFactorMode__New1_fn;
    type->interface0.fp_GetScaleVector = (void(*)(uObject*, ::g::Fuse::Scaling*, ::g::Uno::Float3*))TranslationModes__SizeFactorMode__GetScaleVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))TranslationModes__SizeFactorMode__get_Flags_fn;
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[99] = ::g::Fuse::Transform_typeof();
    ::TYPES[3] = ::g::Uno::Float2_typeof();
    type->SetInterfaces(
        ::g::Fuse::IScalingMode_typeof(), offsetof(TranslationModes__SizeFactorMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__SizeFactorMode_type, interface1));
    return type;
}

// public generated SizeFactorMode() :2335
void TranslationModes__SizeFactorMode__ctor__fn(TranslationModes__SizeFactorMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :2351
void TranslationModes__SizeFactorMode__get_Flags_fn(TranslationModes__SizeFactorMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetScaleVector(Fuse.Scaling t) :2337
void TranslationModes__SizeFactorMode__GetScaleVector_fn(TranslationModes__SizeFactorMode* __this, ::g::Fuse::Scaling* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetScaleVector(t);
}

// public generated SizeFactorMode New() :2335
void TranslationModes__SizeFactorMode__New1_fn(TranslationModes__SizeFactorMode** __retval)
{
    *__retval = TranslationModes__SizeFactorMode::New1();
}

// public generated SizeFactorMode() [instance] :2335
void TranslationModes__SizeFactorMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :2351
int TranslationModes__SizeFactorMode::Flags()
{
    return 1;
}

// public float3 GetScaleVector(Fuse.Scaling t) [instance] :2337
::g::Uno::Float3 TranslationModes__SizeFactorMode::GetScaleVector(::g::Fuse::Scaling* t)
{
    ::g::Fuse::Elements::Element* dst = uAs< ::g::Fuse::Elements::Element*>(uPtr(t)->RelativeNode(), ::TYPES[2/*Fuse.Elements.Element*/]);
    ::g::Fuse::Elements::Element* src = uAs< ::g::Fuse::Elements::Element*>(t->Node, ::TYPES[2/*Fuse.Elements.Element*/]);

    if ((dst == NULL) || (src == NULL))
        return ::g::Uno::Float3__New1(1.0f);

    ::g::Uno::Float2 sz = uPtr(src)->ActualSize();

    if ((sz.X < 1e-05f) || (sz.Y < 1e-05f))
        return ::g::Uno::Float3__New1(1.0f);

    return ::g::Uno::Float3__New4(::g::Uno::Float2__op_Division2(uPtr(dst)->ActualSize(), sz), 1.0f);
}

// public generated SizeFactorMode New() [static] :2335
TranslationModes__SizeFactorMode* TranslationModes__SizeFactorMode::New1()
{
    TranslationModes__SizeFactorMode* obj1 = (TranslationModes__SizeFactorMode*)uNew(TranslationModes__SizeFactorMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1976)
// ------------------------------------------------------------

// public enum SizeUnit :1976
uEnumType* SizeUnit_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.SizeUnit", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Points", 0LL,
        "Percent", 1LL,
        "Pixels", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(107)
// -----------------------------------------------------------

// internal class StandardBoxSizing :107
// {
// static StandardBoxSizing() :107
static void StandardBoxSizing__cctor__fn(uType* __type)
{
    StandardBoxSizing::Singleton_ = StandardBoxSizing::New1();
}

::g::Fuse::Elements::BoxSizing_type* StandardBoxSizing_typeof()
{
    static uSStrong< ::g::Fuse::Elements::BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(StandardBoxSizing);
    options.TypeSize = sizeof(::g::Fuse::Elements::BoxSizing_type);
    type = (::g::Fuse::Elements::BoxSizing_type*)uClassType::New("Fuse.Elements.StandardBoxSizing", options);
    type->SetBase(::g::Fuse::Elements::BoxSizing_typeof());
    type->fp_ctor_ = (void*)StandardBoxSizing__New1_fn;
    type->fp_cctor_ = StandardBoxSizing__cctor__fn;
    type->fp_CalcBoxPlacement = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, ::g::Uno::Float2*, int*, ::g::Fuse::Elements::BoxPlacement*))StandardBoxSizing__CalcBoxPlacement_fn;
    type->fp_CalcMarginSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))StandardBoxSizing__CalcMarginSize_fn;
    type->fp_IsContentRelativeSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, int*))StandardBoxSizing__IsContentRelativeSize_fn;
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[3] = ::g::Uno::Float2_typeof();
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[55] = ::g::Fuse::SizeFlags_typeof();
    ::TYPES[85] = ::g::Uno::Float4_typeof();
    ::TYPES[59] = ::g::Fuse::Elements::BoxPlacement_typeof();
    ::TYPES[4] = ::g::Fuse::Node_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::StandardBoxSizing, ImplicitMax), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Elements::StandardBoxSizing, pixelEpsilon), 0,
        StandardBoxSizing_typeof(), (uintptr_t)&::g::Fuse::Elements::StandardBoxSizing::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated StandardBoxSizing() :107
void StandardBoxSizing__ctor_1_fn(StandardBoxSizing* __this)
{
    __this->ctor_1();
}

// private float2 ApplyFixedPaddingBox(Fuse.Elements.Element element, float2 sz, float2 fillSize, Fuse.SizeFlags& fillSet, bool& fixedSize) :253
void StandardBoxSizing__ApplyFixedPaddingBox_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* sz, ::g::Uno::Float2* fillSize, int* fillSet, bool* fixedSize, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ApplyFixedPaddingBox(element, *sz, *fillSize, fillSet, fixedSize);
}

// public override sealed Fuse.Elements.BoxPlacement CalcBoxPlacement(Fuse.Elements.Element element, float2 position, float2 availableSize, Fuse.SizeFlags availSet) :111
void StandardBoxSizing__CalcBoxPlacement_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Fuse::Elements::BoxPlacement* __retval)
{
    ::g::Uno::Float2 availableSize_ = *availableSize;
    int availSet_ = *availSet;
    ::g::Uno::Float2 position_ = *position;
    bool ret16;
    int ret17;
    bool ret18;
    int ret19;
    bool ret20;
    int ret21;
    ::g::Uno::Float4 margin = uPtr(element)->Margin();
    ::g::Uno::Float2 avSize = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), availableSize_);
    ::g::Uno::Float2 marginBox = element->GetMarginSize(avSize, availSet_);
    ::g::Uno::Float2 paddingBox = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(marginBox, ::g::Uno::Float2__New2(margin.X, margin.Y)), ::g::Uno::Float2__New2(margin.Z, margin.W));
    avSize = ::g::Uno::Float2__op_Subtraction2(avSize, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(margin.X, margin.Y), ::g::Uno::Float2__New2(margin.Z, margin.W)));
    avSize = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), avSize);
    paddingBox = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), paddingBox);
    ::g::Uno::Float2 s = ::g::Uno::Float2__New1(0.0f);

    if (element->Visibility() != 1)
        s = paddingBox;

    ::g::Uno::Float2 p = position_;
    int halign = __this->EffectiveHorizontalAlignment(element);

    if (!((availSet_ & 1) == 1))
        halign = 0;

    int valign = __this->EffectiveVerticalAlignment(element);

    if (!((availSet_ & 2) == 2))
        valign = 0;

    p.X = (p.X + margin.X);

    switch (halign)
    {
        case 0:
            break;
        case 1:
        {
            p.X = (p.X + (avSize.X * 0.5f));
            break;
        }
        case 2:
        {
            p.X = (p.X + avSize.X);
            break;
        }
    }

    p.Y = (p.Y + margin.Y);

    if ((availSet_ & 2) == 2)

        switch (valign)
        {
            case 0:
                break;
            case 1:
            {
                p.Y = (p.Y + (avSize.Y * 0.5f));
                break;
            }
            case 2:
            {
                p.Y = (p.Y + avSize.Y);
                break;
            }
        }

    bool ignore;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::OffsetProperty()), element, &ret16), ret16))
    {
        ::g::Uno::Float2 offset = uPtr(element)->Offset();
        int offsetUnit = (::g::Fuse::StylePropertyWithUnit__GetUnit_fn(uPtr(::g::Fuse::Elements::Element::OffsetProperty()), element, &ret17), ret17);
        ::g::Uno::Float2 o = ::g::Uno::Float2__New2(__this->UnitSize(element, offset.X, offsetUnit, avSize.X, (availSet_ & 1) == 1, &ignore), __this->UnitSize(element, offset.Y, offsetUnit, avSize.Y, (availSet_ & 2) == 2, &ignore));
        p = ::g::Uno::Float2__op_Addition2(p, o);
    }

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::XProperty()), element, &ret18), ret18))
    {
        float o1 = uPtr(element)->X();
        int unit = (::g::Fuse::StylePropertyWithUnit__GetUnit_fn(uPtr(::g::Fuse::Elements::Element::XProperty()), element, &ret19), ret19);
        p.X = (p.X + __this->UnitSize(element, o1, unit, avSize.X, (availSet_ & 1) == 1, &ignore));
    }

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::YProperty()), element, &ret20), ret20))
    {
        float o2 = uPtr(element)->Y();
        int unit1 = (::g::Fuse::StylePropertyWithUnit__GetUnit_fn(uPtr(::g::Fuse::Elements::Element::YProperty()), element, &ret21), ret21);
        p.Y = (p.Y + __this->UnitSize(element, o2, unit1, avSize.Y, (availSet_ & 2) == 2, &ignore));
    }

    ::g::Uno::Float2 anchor;
    int anchorUnit;
    __this->EffectiveAnchor(element, halign, valign, &anchor, &anchorUnit);
    element->ActualAnchor(::g::Uno::Float2__New2(__this->UnitSize(element, anchor.X, anchorUnit, s.X, true, &ignore), __this->UnitSize(element, anchor.Y, anchorUnit, s.Y, true, &ignore)));
    p = ::g::Uno::Float2__op_Subtraction2(p, element->ActualAnchor());
    ::g::Fuse::Elements::BoxPlacement bp;
    bp.MarginBox = marginBox;
    bp.Position = p;
    bp.Size = s;
    return *__retval = bp, void();
}

// public override sealed float2 CalcMarginSize(Fuse.Elements.Element element, float2 fillSize, Fuse.SizeFlags fillSet) :197
void StandardBoxSizing__CalcMarginSize_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    bool ret22;
    ::g::Uno::Float2 fillSize_ = *fillSize;
    int fillSet_ = *fillSet;
    bool ret23;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MarginProperty()), element, &ret22), ret22))
        fillSize_ = ::g::Uno::Float2__op_Subtraction2(fillSize_, ::g::Uno::Float2__op_Addition2((ind1 = uPtr(element)->Margin(), ::g::Uno::Float2__New2(ind1.X, ind1.Y)), (ind2 = uPtr(element)->Margin(), ::g::Uno::Float2__New2(ind2.Z, ind2.W))));

    if (element->Visibility() == 1)
        return *__retval = ::g::Uno::Float2__New1(0.0f), void();

    bool childFixedSize;
    int childFillSet = fillSet_;
    ::g::Uno::Float2 childFillSize = __this->ApplyFixedPaddingBox(element, fillSize_, fillSize_, &childFillSet, &childFixedSize);
    ::g::Uno::Float2 sz = childFillSize;

    if (!childFixedSize)
    {
        sz = __this->GetPaddingSize(element, sz, childFillSet);
        ::g::Uno::Float2 lsz = __this->LimitPaddingBoxSize(element, sz, fillSize_, fillSet_);
        int nfs = childFillSet;
        bool needResize = false;

        if ((lsz.X < sz.X) && !((childFillSet & 1) == 1))
        {
            nfs = nfs | 1;
            needResize = true;
        }

        if ((lsz.Y < sz.Y) && !((childFillSet & 2) == 2))
        {
            nfs = nfs | 2;
            needResize = true;
        }

        if (needResize)
        {
            ::g::Uno::Float2 npsz = __this->GetPaddingSize(element, lsz, nfs);
            ::g::Uno::Float2 nsz = __this->LimitPaddingBoxSize(element, npsz, fillSize_, fillSet_);
            sz = nsz;
        }
        else
            sz = lsz;
    }
    else if (element->SnapToPixels())
        sz = __this->SnapUp(element, sz);

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MarginProperty()), element, &ret23), ret23))
        sz = ::g::Uno::Float2__op_Addition2(sz, ::g::Uno::Float2__op_Addition2((ind3 = element->Margin(), ::g::Uno::Float2__New2(ind3.X, ind3.Y)), (ind4 = element->Margin(), ::g::Uno::Float2__New2(ind4.Z, ind4.W))));

    return *__retval = sz, void();
}

// private float2 ConstrainMinMax(Fuse.Elements.Element element, float2 sz, float2 fillSize, Fuse.SizeFlags fillSet) :304
void StandardBoxSizing__ConstrainMinMax_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* sz, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ConstrainMinMax(element, *sz, *fillSize, *fillSet);
}

// private float2 GetPaddingSize(Fuse.Elements.Element element, float2 padFill, Fuse.SizeFlags fillSet) :391
void StandardBoxSizing__GetPaddingSize_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* padFill, int* fillSet, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetPaddingSize(element, *padFill, *fillSet);
}

// public override sealed Fuse.LayoutDependent IsContentRelativeSize(Fuse.Elements.Element element) :403
void StandardBoxSizing__IsContentRelativeSize_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval)
{
    bool ret36;
    bool ret37;
    bool ha = ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalAlign(uPtr(element)->Alignment()) != 0;
    bool w = (::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), element, &ret36), ret36);
    bool va = ::g::Fuse::Elements::AlignmentHelpers::GetVerticalAlign(element->Alignment()) != 0;
    bool h = (::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::HeightProperty()), element, &ret37), ret37);

    if (w && h)
        return *__retval = 0, void();

    if (ha || va)
        return *__retval = 4, void();

    return *__retval = 2, void();
}

// private float2 LimitPaddingBoxSize(Fuse.Elements.Element element, float2 sz, float2 fillSize, [Fuse.SizeFlags fillSet]) :372
void StandardBoxSizing__LimitPaddingBoxSize_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* sz, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LimitPaddingBoxSize(element, *sz, *fillSize, *fillSet);
}

// public generated StandardBoxSizing New() :107
void StandardBoxSizing__New1_fn(StandardBoxSizing** __retval)
{
    *__retval = StandardBoxSizing::New1();
}

// private float2 SnapUp(Fuse.Elements.Element element, float2 p) :385
void StandardBoxSizing__SnapUp_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapUp(element, *p);
}

uSStrong<StandardBoxSizing*> StandardBoxSizing::Singleton_;

// public generated StandardBoxSizing() [instance] :107
void StandardBoxSizing::ctor_1()
{
    ImplicitMax = true;
    pixelEpsilon = 0.005f;
    ctor_();
}

// private float2 ApplyFixedPaddingBox(Fuse.Elements.Element element, float2 sz, float2 fillSize, Fuse.SizeFlags& fillSet, bool& fixedSize) [instance] :253
::g::Uno::Float2 StandardBoxSizing::ApplyFixedPaddingBox(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 sz, ::g::Uno::Float2 fillSize, int* fillSet, bool* fixedSize)
{
    bool ret10;
    int ret11;
    bool ret12;
    bool ret13;
    int ret14;
    bool ret15;
    int origFillSet = *fillSet;
    bool known = false;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), element, &ret10), ret10))
    {
        int widthUnit = (::g::Fuse::StylePropertyWithUnit__GetUnit_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), element, &ret11), ret11);
        sz.X = UnitSize(element, uPtr(element)->Width(), widthUnit, fillSize.X, (*fillSet & 1) == 1, &known);
    }
    else if ((((*fillSet & 1) == 1) && (::g::Fuse::Elements::AlignmentHelpers::GetHorizontalAlign(uPtr(element)->Alignment()) == 0)) && !(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::XProperty()), element, &ret12), ret12))
    {
        sz.X = fillSize.X;
        known = true;
    }

    if (known)
        *fillSet = *fillSet | 1;
    else
        *fillSet = *fillSet & -2;

    *fixedSize = known;
    known = false;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::HeightProperty()), element, &ret13), ret13))
    {
        int heightUnit = (::g::Fuse::StylePropertyWithUnit__GetUnit_fn(uPtr(::g::Fuse::Elements::Element::HeightProperty()), element, &ret14), ret14);
        sz.Y = UnitSize(element, uPtr(element)->Height(), heightUnit, fillSize.Y, (*fillSet & 2) == 2, &known);
    }
    else if ((((*fillSet & 2) == 2) && (::g::Fuse::Elements::AlignmentHelpers::GetVerticalAlign(uPtr(element)->Alignment()) == 0)) && !(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::YProperty()), element, &ret15), ret15))
    {
        sz.Y = fillSize.Y;
        known = true;
    }

    if (known)
        *fillSet = *fillSet | 2;
    else
        *fillSet = *fillSet & -3;

    *fixedSize = *fixedSize && known;
    sz = ConstrainMinMax(element, sz, fillSize, origFillSet);
    return sz;
}

// private float2 ConstrainMinMax(Fuse.Elements.Element element, float2 sz, float2 fillSize, Fuse.SizeFlags fillSet) [instance] :304
::g::Uno::Float2 StandardBoxSizing::ConstrainMinMax(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 sz, ::g::Uno::Float2 fillSize, int fillSet)
{
    bool ret24;
    int ret25;
    bool ret26;
    bool ret27;
    int ret28;
    bool ret29;
    bool ret30;
    int ret31;
    bool ret32;
    int ret33;
    bool known = false;
    float limit = 0.0f;
    int unit = 0;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MaxWidthProperty()), element, &ret24), ret24))
    {
        limit = uPtr(element)->MaxWidth();
        unit = (::g::Fuse::StylePropertyWithUnit__GetUnit_fn(uPtr(::g::Fuse::Elements::Element::MaxWidthProperty()), element, &ret25), ret25);
        known = true;
    }
    else if (ImplicitMax && !(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), element, &ret26), ret26))
    {
        limit = 100.0f;
        unit = 1;
        known = true;
    }

    if (known)
    {
        float mx = UnitSize(element, limit, unit, fillSize.X, (fillSet & 1) == 1, &known);

        if (known)
            sz.X = ::g::Uno::Math::Min1(mx, sz.X);
    }

    known = false;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MaxHeightProperty()), element, &ret27), ret27))
    {
        limit = uPtr(element)->MaxHeight();
        unit = (::g::Fuse::StylePropertyWithUnit__GetUnit_fn(uPtr(::g::Fuse::Elements::Element::MaxHeightProperty()), element, &ret28), ret28);
        known = true;
    }
    else if (ImplicitMax && !(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::HeightProperty()), element, &ret29), ret29))
    {
        limit = 100.0f;
        unit = 1;
        known = true;
    }

    if (known)
    {
        float my = UnitSize(element, limit, unit, fillSize.Y, (fillSet & 2) == 2, &known);

        if (known)
            sz.Y = ::g::Uno::Math::Min1(my, sz.Y);
    }

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MinWidthProperty()), element, &ret30), ret30))
    {
        int minWidthUnit = (::g::Fuse::StylePropertyWithUnit__GetUnit_fn(uPtr(::g::Fuse::Elements::Element::MinWidthProperty()), element, &ret31), ret31);
        float mn = UnitSize(element, uPtr(element)->MinWidth(), minWidthUnit, fillSize.X, (fillSet & 1) == 1, &known);

        if (known)
            sz.X = ::g::Uno::Math::Max1(mn, sz.X);
    }

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MinHeightProperty()), element, &ret32), ret32))
    {
        int minHeightUnit = (::g::Fuse::StylePropertyWithUnit__GetUnit_fn(uPtr(::g::Fuse::Elements::Element::MinHeightProperty()), element, &ret33), ret33);
        float mn1 = UnitSize(element, uPtr(element)->MinHeight(), minHeightUnit, fillSize.Y, (fillSet & 2) == 2, &known);
        sz.Y = ::g::Uno::Math::Max1(mn1, sz.Y);
    }

    return sz;
}

// private float2 GetPaddingSize(Fuse.Elements.Element element, float2 padFill, Fuse.SizeFlags fillSet) [instance] :391
::g::Uno::Float2 StandardBoxSizing::GetPaddingSize(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 padFill, int fillSet)
{
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;
    ::g::Uno::Float4 ind8;
    bool ret34;
    bool ret35;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::PaddingProperty()), element, &ret34), ret34))
        padFill = ::g::Uno::Float2__op_Subtraction2(padFill, ::g::Uno::Float2__op_Addition2((ind5 = uPtr(element)->Padding(), ::g::Uno::Float2__New2(ind5.X, ind5.Y)), (ind6 = uPtr(element)->Padding(), ::g::Uno::Float2__New2(ind6.Z, ind6.W))));

    ::g::Uno::Float2 sz = element->InternGetContentSize(padFill, fillSet);

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::PaddingProperty()), element, &ret35), ret35))
        sz = ::g::Uno::Float2__op_Addition2(sz, ::g::Uno::Float2__op_Addition2((ind7 = element->Padding(), ::g::Uno::Float2__New2(ind7.X, ind7.Y)), (ind8 = element->Padding(), ::g::Uno::Float2__New2(ind8.Z, ind8.W))));

    return sz;
}

// private float2 LimitPaddingBoxSize(Fuse.Elements.Element element, float2 sz, float2 fillSize, [Fuse.SizeFlags fillSet]) [instance] :372
::g::Uno::Float2 StandardBoxSizing::LimitPaddingBoxSize(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 sz, ::g::Uno::Float2 fillSize, int fillSet)
{
    bool fixedSize;
    sz = ApplyFixedPaddingBox(element, sz, fillSize, &fillSet, &fixedSize);

    if (uPtr(element)->SnapToPixels())
        sz = SnapUp(element, sz);

    return sz;
}

// private float2 SnapUp(Fuse.Elements.Element element, float2 p) [instance] :385
::g::Uno::Float2 StandardBoxSizing::SnapUp(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 p)
{
    ::g::Uno::Float2 s = ::g::Uno::Float2__op_Division1(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply1(p, uPtr(element)->AbsoluteZoom()), pixelEpsilon)), uPtr(element)->AbsoluteZoom());
    return s;
}

// public generated StandardBoxSizing New() [static] :107
StandardBoxSizing* StandardBoxSizing::New1()
{
    StandardBoxSizing* obj9 = (StandardBoxSizing*)uNew(StandardBoxSizing_typeof());
    obj9->ctor_1();
    return obj9;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1994)
// ------------------------------------------------------------

// public enum StretchDirection :1994
uEnumType* StretchDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.StretchDirection", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Both", 0LL,
        "UpOnly", 1LL,
        "DownOnly", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1983)
// ------------------------------------------------------------

// public enum StretchMode :1983
uEnumType* StretchMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.StretchMode", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "PointPrecise", 0LL,
        "PixelPrecise", 1LL,
        "PointPrefer", 2LL,
        "Fill", 3LL,
        "Scale9", 4LL,
        "Uniform", 5LL,
        "UniformToFill", 6LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(2001)
// ------------------------------------------------------------

// public enum StretchSizing :2001
uEnumType* StretchSizing_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.StretchSizing", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Zero", 0LL,
        "Natural", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1878)
// ------------------------------------------------------------

// public enum TextAlignment :1878
uEnumType* TextAlignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.TextAlignment", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Left", 0LL,
        "Center", 1LL,
        "Right", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Caching\$.uno(1503)
// --------------------------------------------------------------------

// internal sealed class TextureAtlas :1503
// {
uType* TextureAtlas_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TextureAtlas);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.TextureAtlas", options);
    ::TYPES[6] = ::g::Uno::Recti_typeof();
    ::TYPES[8] = ::g::Uno::Int2_typeof();
    type->SetFields(0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Elements::TextureAtlas, _allocatedLine), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Elements::TextureAtlas, _allocatedLines), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::Elements::TextureAtlas, _Size), 0);
    return type;
}

// public TextureAtlas(int2 size) :1506
void TextureAtlas__ctor__fn(TextureAtlas* __this, ::g::Uno::Int2* size)
{
    __this->ctor_(*size);
}

// public bool AddRect(int2 size, Uno.Recti& ret) :1514
void TextureAtlas__AddRect_fn(TextureAtlas* __this, ::g::Uno::Int2* size, ::g::Uno::Recti* ret, bool* __retval)
{
    *__retval = __this->AddRect(*size, ret);
}

// public TextureAtlas New(int2 size) :1506
void TextureAtlas__New1_fn(::g::Uno::Int2* size, TextureAtlas** __retval)
{
    *__retval = TextureAtlas::New1(*size);
}

// public generated int2 get_Size() :1505
void TextureAtlas__get_Size_fn(TextureAtlas* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// private generated void set_Size(int2 value) :1505
void TextureAtlas__set_Size_fn(TextureAtlas* __this, ::g::Uno::Int2* value)
{
    __this->Size(*value);
}

// public TextureAtlas(int2 size) [instance] :1506
void TextureAtlas::ctor_(::g::Uno::Int2 size)
{
    Size(size);
}

// public bool AddRect(int2 size, Uno.Recti& ret) [instance] :1514
bool TextureAtlas::AddRect(::g::Uno::Int2 size, ::g::Uno::Recti* ret)
{
    if ((_allocatedLine.Right + size.X) > Size().X)
    {
        _allocatedLines = ::g::Uno::Recti__Union(_allocatedLines, _allocatedLine);
        _allocatedLine = ::g::Uno::Recti__New2(_allocatedLines.LeftBottom(), ::g::Uno::Int2__New2(0, 0));
    }

    if ((_allocatedLine.Bottom + size.Y) > Size().Y)
    {
        *ret = ::g::Uno::Recti__New1(0, 0, 0, 0);
        return false;
    }

    *ret = ::g::Uno::Recti__New2(_allocatedLine.RightTop(), size);
    _allocatedLine = ::g::Uno::Recti__Union(_allocatedLine, *ret);
    return true;
}

// public generated int2 get_Size() [instance] :1505
::g::Uno::Int2 TextureAtlas::Size()
{
    return _Size;
}

// private generated void set_Size(int2 value) [instance] :1505
void TextureAtlas::Size(::g::Uno::Int2 value)
{
    _Size = value;
}

// public TextureAtlas New(int2 size) [static] :1506
TextureAtlas* TextureAtlas::New1(::g::Uno::Int2 size)
{
    TextureAtlas* obj1 = (TextureAtlas*)uNew(TextureAtlas_typeof());
    obj1->ctor_(size);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1872)
// ------------------------------------------------------------

// public enum TextWrapping :1872
uEnumType* TextWrapping_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.TextWrapping", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "NoWrap", 0LL,
        "Wrap", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1664)
// ------------------------------------------------------------

// private sealed class TransformOrigins.TopLeftOrigin :1664
// {
TransformOrigins__TopLeftOrigin_type* TransformOrigins__TopLeftOrigin_typeof()
{
    static uSStrong<TransformOrigins__TopLeftOrigin_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TransformOrigins__TopLeftOrigin);
    options.TypeSize = sizeof(TransformOrigins__TopLeftOrigin_type);
    type = (TransformOrigins__TopLeftOrigin_type*)uClassType::New("Fuse.Elements.TransformOrigins.TopLeftOrigin", options);
    type->fp_ctor_ = (void*)TransformOrigins__TopLeftOrigin__New1_fn;
    type->interface0.fp_GetOffset = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TransformOrigins__TopLeftOrigin__GetOffset_fn;
    type->SetInterfaces(
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(TransformOrigins__TopLeftOrigin_type, interface0));
    return type;
}

// public generated TopLeftOrigin() :1664
void TransformOrigins__TopLeftOrigin__ctor__fn(TransformOrigins__TopLeftOrigin* __this)
{
    __this->ctor_();
}

// public float3 GetOffset(Fuse.Elements.Element elm) :1666
void TransformOrigins__TopLeftOrigin__GetOffset_fn(TransformOrigins__TopLeftOrigin* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetOffset(elm);
}

// public generated TopLeftOrigin New() :1664
void TransformOrigins__TopLeftOrigin__New1_fn(TransformOrigins__TopLeftOrigin** __retval)
{
    *__retval = TransformOrigins__TopLeftOrigin::New1();
}

// public generated TopLeftOrigin() [instance] :1664
void TransformOrigins__TopLeftOrigin::ctor_()
{
}

// public float3 GetOffset(Fuse.Elements.Element elm) [instance] :1666
::g::Uno::Float3 TransformOrigins__TopLeftOrigin::GetOffset(::g::Fuse::Elements::Element* elm)
{
    return ::g::Uno::Float3__New1(0.0f);
}

// public generated TopLeftOrigin New() [static] :1664
TransformOrigins__TopLeftOrigin* TransformOrigins__TopLeftOrigin::New1()
{
    TransformOrigins__TopLeftOrigin* obj1 = (TransformOrigins__TopLeftOrigin*)uNew(TransformOrigins__TopLeftOrigin_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(2317)
// ------------------------------------------------------------

// private sealed class TranslationModes.TransformOriginOffsetMode :2317
// {
::g::Fuse::Elements::TranslationModes__OffsetMode_type* TranslationModes__TransformOriginOffsetMode_typeof()
{
    static uSStrong< ::g::Fuse::Elements::TranslationModes__OffsetMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__TransformOriginOffsetMode);
    options.TypeSize = sizeof(::g::Fuse::Elements::TranslationModes__OffsetMode_type);
    type = (::g::Fuse::Elements::TranslationModes__OffsetMode_type*)uClassType::New("Fuse.Elements.TranslationModes.TransformOriginOffsetMode", options);
    type->SetBase(::g::Fuse::Elements::TranslationModes__OffsetMode_typeof());
    type->fp_ctor_ = (void*)TranslationModes__TransformOriginOffsetMode__New2_fn;
    type->fp_GetDstOffset = (void(*)(::g::Fuse::Elements::TranslationModes__OffsetMode*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TranslationModes__TransformOriginOffsetMode__GetDstOffset_fn;
    type->fp_GetSrcOffset = (void(*)(::g::Fuse::Elements::TranslationModes__OffsetMode*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TranslationModes__TransformOriginOffsetMode__GetSrcOffset_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))::g::Fuse::Elements::TranslationModes__OffsetMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))::g::Fuse::Elements::TranslationModes__OffsetMode__get_Flags_fn;
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::Elements::TranslationModes__OffsetMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(::g::Fuse::Elements::TranslationModes__OffsetMode_type, interface1));
    return type;
}

// public generated TransformOriginOffsetMode() :2317
void TranslationModes__TransformOriginOffsetMode__ctor_1_fn(TranslationModes__TransformOriginOffsetMode* __this)
{
    __this->ctor_1();
}

// protected override sealed float3 GetDstOffset(Fuse.Elements.Element e) :2319
void TranslationModes__TransformOriginOffsetMode__GetDstOffset_fn(TranslationModes__TransformOriginOffsetMode* __this, ::g::Fuse::Elements::Element* e, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Fuse::Elements::ITransformOrigin::GetOffset(uInterface(uPtr(uPtr(e)->TransformOrigin()), ::TYPES[100/*Fuse.Elements.ITransformOrigin*/]), e), void();
}

// protected override sealed float3 GetSrcOffset(Fuse.Elements.Element e) :2324
void TranslationModes__TransformOriginOffsetMode__GetSrcOffset_fn(TranslationModes__TransformOriginOffsetMode* __this, ::g::Fuse::Elements::Element* e, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Fuse::Elements::ITransformOrigin::GetOffset(uInterface(uPtr(uPtr(e)->TransformOrigin()), ::TYPES[100/*Fuse.Elements.ITransformOrigin*/]), e), void();
}

// public generated TransformOriginOffsetMode New() :2317
void TranslationModes__TransformOriginOffsetMode__New2_fn(TranslationModes__TransformOriginOffsetMode** __retval)
{
    *__retval = TranslationModes__TransformOriginOffsetMode::New2();
}

// public generated TransformOriginOffsetMode() [instance] :2317
void TranslationModes__TransformOriginOffsetMode::ctor_1()
{
    ctor_();
}

// public generated TransformOriginOffsetMode New() [static] :2317
TranslationModes__TransformOriginOffsetMode* TranslationModes__TransformOriginOffsetMode::New2()
{
    TranslationModes__TransformOriginOffsetMode* obj1 = (TranslationModes__TransformOriginOffsetMode*)uNew(TranslationModes__TransformOriginOffsetMode_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1662)
// ------------------------------------------------------------

// public static class TransformOrigins :1662
// {
// static TransformOrigins() :1662
static void TransformOrigins__cctor__fn(uType* __type)
{
    TransformOrigins__BoxCenter* collection2;
    TransformOrigins__BoxCenter* collection1;
    TransformOrigins::TopLeft_ = (uObject*)TransformOrigins__TopLeftOrigin::New1();
    TransformOrigins::Center_ = (uObject*)TransformOrigins__CenterOrigin::New1();
    TransformOrigins::Anchor_ = (uObject*)TransformOrigins__AnchorOrigin::New1();
    TransformOrigins::HorizontalBoxCenter_ = (uObject*)(collection2 = TransformOrigins__BoxCenter::New1(), uPtr(collection2)->Depth = ::g::Uno::Float2__New2(0.0f, 1.0f), collection2);
    TransformOrigins::VerticalBoxCenter_ = (uObject*)(collection1 = TransformOrigins__BoxCenter::New1(), uPtr(collection1)->Depth = ::g::Uno::Float2__New2(1.0f, 0.0f), collection1);
}

uClassType* TransformOrigins_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.TransformOrigins", options);
    type->fp_cctor_ = TransformOrigins__cctor__fn;
    ::TYPES[100] = ::g::Fuse::Elements::ITransformOrigin_typeof();
    ::TYPES[101] = TransformOrigins__BoxCenter_typeof();
    type->SetFields(0,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&::g::Fuse::Elements::TransformOrigins::Anchor_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&::g::Fuse::Elements::TransformOrigins::Center_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&::g::Fuse::Elements::TransformOrigins::TopLeft_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("Anchor", 0),
        new uField("Center", 1),
        new uField("HorizontalBoxCenter", 2),
        new uField("TopLeft", 3),
        new uField("VerticalBoxCenter", 4));
    return type;
}

uSStrong<uObject*> TransformOrigins::Anchor_;
uSStrong<uObject*> TransformOrigins::Center_;
uSStrong<uObject*> TransformOrigins::HorizontalBoxCenter_;
uSStrong<uObject*> TransformOrigins::TopLeft_;
uSStrong<uObject*> TransformOrigins::VerticalBoxCenter_;
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(2281)
// ------------------------------------------------------------

// public static class TranslationModes :2281
// {
// static TranslationModes() :2281
static void TranslationModes__cctor__fn(uType* __type)
{
    TranslationModes::TransformOriginOffset_ = (uObject*)TranslationModes__TransformOriginOffsetMode::New2();
    TranslationModes::PositionOffset_ = (uObject*)TranslationModes__PositionOffsetMode::New2();
    TranslationModes::SizeFactor_ = (uObject*)TranslationModes__SizeFactorMode::New1();
}

uClassType* TranslationModes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.TranslationModes", options);
    type->fp_cctor_ = TranslationModes__cctor__fn;
    ::TYPES[102] = ::g::Fuse::ITranslationMode_typeof();
    ::TYPES[103] = ::g::Fuse::IScalingMode_typeof();
    type->SetFields(0,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Elements::TranslationModes::PositionOffset_, uFieldFlagsStatic,
        ::g::Fuse::IScalingMode_typeof(), (uintptr_t)&::g::Fuse::Elements::TranslationModes::SizeFactor_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Elements::TranslationModes::TransformOriginOffset_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("PositionOffset", 0),
        new uField("SizeFactor", 1),
        new uField("TransformOriginOffset", 2));
    return type;
}

uSStrong<uObject*> TranslationModes::PositionOffset_;
uSStrong<uObject*> TranslationModes::SizeFactor_;
uSStrong<uObject*> TranslationModes::TransformOriginOffset_;
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(4523)
// ------------------------------------------------------------

// public sealed class Viewport :4523
// {
Viewport_type* Viewport_typeof()
{
    static uSStrong<Viewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 97;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(Viewport);
    options.TypeSize = sizeof(Viewport_type);
    type = (Viewport_type*)uClassType::New("Fuse.Elements.Viewport", options);
    type->SetBase(::g::Fuse::Elements::Element_typeof());
    type->fp_ctor_ = (void*)Viewport__New1_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*))Viewport__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))Viewport__GetContentSize_fn;
    type->fp_GetSubNode = (void(*)(::g::Fuse::Node*, int*, ::g::Fuse::Node**))Viewport__GetSubNode_fn;
    type->fp_get_HitTestBounds = (void(*)(::g::Fuse::Node*, ::g::Fuse::NodeBounds**))Viewport__get_HitTestBounds_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*))Viewport__OnDraw_fn;
    type->fp_OnHitTestChildren = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::HitTestContext*))Viewport__OnHitTestChildren_fn;
    type->fp_get_SubNodeCount = (void(*)(::g::Fuse::Node*, int*))Viewport__get_SubNodeCount_fn;
    type->interface6.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))Viewport__PointToWorldRay_fn;
    type->interface6.fp_get_PointDensity = (void(*)(uObject*, float*))Viewport__get_PointDensity1_fn;
    type->interface6.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))Viewport__get_Size_fn;
    type->interface6.fp_get_PixelSize = (void(*)(uObject*, ::g::Uno::Float2*))Viewport__get_PixelSize_fn;
    type->interface6.fp_get_ProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))Viewport__get_ProjectionTransform_fn;
    type->interface6.fp_get_ProjectionTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))Viewport__get_ProjectionTransformInverse_fn;
    type->interface6.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))Viewport__get_ViewProjectionTransform_fn;
    type->interface6.fp_get_ViewProjectionTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))Viewport__get_ViewProjectionTransformInverse_fn;
    type->interface6.fp_get_ViewTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))Viewport__get_ViewTransform_fn;
    type->interface6.fp_get_ViewTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))Viewport__get_ViewTransformInverse_fn;
    type->interface6.fp_get_ViewOrigin = (void(*)(uObject*, ::g::Uno::Float3*))Viewport__get_ViewOrigin_fn;
    type->interface6.fp_get_ViewRange = (void(*)(uObject*, ::g::Uno::Float2*))Viewport__get_ViewRange_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[19] = ::g::Fuse::IFrustum_typeof();
    ::TYPES[24] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Float_typeof();
    ::TYPES[3] = ::g::Uno::Float2_typeof();
    ::TYPES[104] = ::g::Fuse_Controls_bundle_typeof();
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[22] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[12] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[23] = ::g::Fuse::IViewport_typeof();
    ::TYPES[4] = ::g::Fuse::Node_typeof();
    ::TYPES[26] = ::g::Uno::Graphics::Framebuffer_typeof();
    ::TYPES[68] = ::g::Fuse::NodeBounds_typeof();
    ::TYPES[105] = ::g::Fuse::PerspectiveFrustum_typeof();
    ::TYPES[106] = ::g::Fuse::FrustumViewport_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(Viewport_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(Viewport_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(Viewport_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(Viewport_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(Viewport_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(Viewport_type, interface5),
        ::g::Fuse::IViewport_typeof(), offsetof(Viewport_type, interface6));
    type->SetFields(85,
        ::g::Uno::Graphics::PolygonFace_typeof(), offsetof(::g::Fuse::Elements::Viewport, _cullFace), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Elements::Viewport, _draw_a781a46e), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Viewport, _flatten), 0,
        ::g::Fuse::IFrustum_typeof(), offsetof(::g::Fuse::Elements::Viewport, _frustum), 0,
        ::g::Fuse::FrustumViewport_typeof(), offsetof(::g::Fuse::Elements::Viewport, _frustumViewport), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Viewport, _hasCullFace), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Elements::Viewport, _perspective), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Elements::Viewport, _rootNode), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Elements::Viewport, OnDraw_LocalTransform_a781a46e_4_8_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Elements::Viewport, OnDraw_LocalTransform_a781a46e_4_8_3), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Elements::Viewport, OnDraw_LocalTransform_a781a46e_4_8_4), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Elements::Viewport, OnDraw_VertexData_a781a46e_7_2_1), 0);
    type->Reflection.SetFunctions(21,
        new uFunction("get_CullFace", NULL, (void*)Viewport__get_CullFace_fn, 0, false, ::g::Uno::Graphics::PolygonFace_typeof(), 0),
        new uFunction("set_CullFace", NULL, (void*)Viewport__set_CullFace_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::PolygonFace_typeof()),
        new uFunction("get_Flatten", NULL, (void*)Viewport__get_Flatten_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Flatten", NULL, (void*)Viewport__set_Flatten_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)Viewport__New1_fn, 0, true, Viewport_typeof(), 0),
        new uFunction("get_Perspective", NULL, (void*)Viewport__get_Perspective_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Perspective", NULL, (void*)Viewport__set_Perspective_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_PixelSize", NULL, (void*)Viewport__get_PixelSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_PointDensity", NULL, (void*)Viewport__get_PointDensity1_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("PointToWorldRay", NULL, (void*)Viewport__PointToWorldRay_fn, 0, false, ::g::Uno::Geometry::Ray_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_ProjectionTransform", NULL, (void*)Viewport__get_ProjectionTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ProjectionTransformInverse", NULL, (void*)Viewport__get_ProjectionTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_RootNode", NULL, (void*)Viewport__get_RootNode_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_RootNode", NULL, (void*)Viewport__set_RootNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_Size", NULL, (void*)Viewport__get_Size_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ViewOrigin", NULL, (void*)Viewport__get_ViewOrigin_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("get_ViewProjectionTransform", NULL, (void*)Viewport__get_ViewProjectionTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewProjectionTransformInverse", NULL, (void*)Viewport__get_ViewProjectionTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewRange", NULL, (void*)Viewport__get_ViewRange_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ViewTransform", NULL, (void*)Viewport__get_ViewTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewTransformInverse", NULL, (void*)Viewport__get_ViewTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0));
    return type;
}

// public Viewport() :4525
void Viewport__ctor_2_fn(Viewport* __this)
{
    __this->ctor_2();
}

// protected override sealed void ArrangePaddingBox(float2 size, Fuse.SizeFlags flags) :4662
void Viewport__ArrangePaddingBox_fn(Viewport* __this, ::g::Uno::Float2* size, int* flags)
{
    ::g::Uno::Float2 size_ = *size;
    int flags_ = *flags;

    if (__this->RootNode() != NULL)
        uPtr(__this->RootNode())->ArrangeMarginBox(::g::Uno::Float2__New1(0.0f), size_, flags_);
}

// public Uno.Graphics.PolygonFace get_CullFace() :4534
void Viewport__get_CullFace_fn(Viewport* __this, int* __retval)
{
    *__retval = __this->CullFace();
}

// public void set_CullFace(Uno.Graphics.PolygonFace value) :4535
void Viewport__set_CullFace_fn(Viewport* __this, int* value)
{
    __this->CullFace(*value);
}

// public bool get_Flatten() :4606
void Viewport__get_Flatten_fn(Viewport* __this, bool* __retval)
{
    *__retval = __this->Flatten();
}

// public void set_Flatten(bool value) :4607
void Viewport__set_Flatten_fn(Viewport* __this, bool* value)
{
    __this->Flatten(*value);
}

// private Fuse.IFrustum get_Frustum() :4572
void Viewport__get_Frustum_fn(Viewport* __this, uObject** __retval)
{
    *__retval = __this->Frustum();
}

// private void set_Frustum(Fuse.IFrustum value) :4573
void Viewport__set_Frustum_fn(Viewport* __this, uObject* value)
{
    __this->Frustum(value);
}

// protected override sealed float2 GetContentSize(float2 fillSize, Fuse.SizeFlags fillSet) :4655
void Viewport__GetContentSize_fn(Viewport* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 fillSize_ = *fillSize;
    int fillSet_ = *fillSet;

    if (__this->RootNode() != NULL)
        return *__retval = uPtr(__this->RootNode())->GetMarginSize(fillSize_, fillSet_), void();

    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public override sealed Fuse.Node GetSubNode(int index) :4676
void Viewport__GetSubNode_fn(Viewport* __this, int* index, ::g::Fuse::Node** __retval)
{
    return *__retval = __this->RootNode(), void();
}

// private bool get_HasCullFace() :4543
void Viewport__get_HasCullFace_fn(Viewport* __this, bool* __retval)
{
    *__retval = __this->HasCullFace();
}

// public override sealed Fuse.NodeBounds get_HitTestBounds() :4715
void Viewport__get_HitTestBounds_fn(Viewport* __this, ::g::Fuse::NodeBounds** __retval)
{
    return *__retval = ::g::Fuse::NodeBounds::Infinite(), void();
}

// private generated void init_DrawCalls() :4523
void Viewport__init_DrawCalls_fn(Viewport* __this)
{
    __this->init_DrawCalls();
}

// public Viewport New() :4525
void Viewport__New1_fn(Viewport** __retval)
{
    *__retval = Viewport::New1();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :4614
void Viewport__OnDraw_fn(Viewport* __this, ::g::Fuse::DrawContext* dc)
{
    if ((__this->RootNode() == NULL) || (__this->Frustum() == NULL))
        return;

    if (__this->HasCullFace())
        uPtr(dc)->PushCullFace(__this->CullFace());

    if (__this->Flatten())
    {
        ::g::Uno::Float2 pxSize = __this->PixelSize();
        ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock1(::g::Uno::Int2__New2((int)pxSize.X, (int)pxSize.Y), 3, true);
        uPtr(dc)->PushRenderTargetViewport(fb, __this->Frustum());
        dc->Clear(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f), 1.0f);
        uPtr(__this->RootNode())->Draw(dc);
        dc->PopRenderTargetViewport();
        ::g::Uno::Float4x4 LocalTransform_a781a46e_4_8_5 = ::g::Uno::Matrix::Mul10(__this->OnDraw_LocalTransform_a781a46e_4_8_2, ::g::Uno::Matrix::Scaling1(__this->ActualSize().X, __this->ActualSize().Y, 1.0f), __this->OnDraw_LocalTransform_a781a46e_4_8_3, __this->OnDraw_LocalTransform_a781a46e_4_8_4);
        __this->_draw_a781a46e.BlendEnabled(true);
        __this->_draw_a781a46e.DepthTestEnabled(false);
        __this->_draw_a781a46e.CullFace(uPtr(dc)->CullFace());
        __this->_draw_a781a46e.BlendSrcRgb(2);
        __this->_draw_a781a46e.BlendDstRgb(3);
        __this->_draw_a781a46e.BlendDstAlpha(3);
        __this->_draw_a781a46e.Use();
        __this->_draw_a781a46e.Attrib1(0, 2, __this->OnDraw_VertexData_a781a46e_7_2_1, 8, 0);
        __this->_draw_a781a46e.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[23/*Fuse.IViewport*/])));
        __this->_draw_a781a46e.Uniform12(2, (__this != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_a781a46e_4_8_5, __this->WorldTransform()) : LocalTransform_a781a46e_4_8_5);
        __this->_draw_a781a46e.Sampler2(3, uPtr(fb)->ColorBuffer());
        __this->_draw_a781a46e.DrawArrays(6);
        ::g::Fuse::FramebufferPool::Release(fb);
    }
    else
    {
        __this->UpdateFrustum();
        uPtr(dc)->PushViewport((uObject*)__this);
        uPtr(__this->RootNode())->Draw(dc);
        dc->PopViewport();
    }

    if (__this->HasCullFace())
        dc->PopCullFace();
}

// protected override sealed void OnHitTestChildren(Fuse.HitTestContext htc) :4681
void Viewport__OnHitTestChildren_fn(Viewport* __this, ::g::Fuse::HitTestContext* htc)
{
    uPtr(__this->RootNode())->HitTest(htc);
}

// public float get_Perspective() :4584
void Viewport__get_Perspective_fn(Viewport* __this, float* __retval)
{
    *__retval = __this->Perspective();
}

// public void set_Perspective(float value) :4585
void Viewport__set_Perspective_fn(Viewport* __this, float* value)
{
    __this->Perspective(*value);
}

// public float2 get_PixelSize() :4690
void Viewport__get_PixelSize_fn(Viewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PixelSize();
}

// public float get_PointDensity() :4688
void Viewport__get_PointDensity1_fn(Viewport* __this, float* __retval)
{
    *__retval = __this->PointDensity1();
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pointPos) :4707
void Viewport__PointToWorldRay_fn(Viewport* __this, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->PointToWorldRay(*pointPos);
}

// public float4x4 get_ProjectionTransform() :4693
void Viewport__get_ProjectionTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ProjectionTransform();
}

// public float4x4 get_ProjectionTransformInverse() :4695
void Viewport__get_ProjectionTransformInverse_fn(Viewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ProjectionTransformInverse();
}

// public Fuse.Node get_RootNode() :4555
void Viewport__get_RootNode_fn(Viewport* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->RootNode();
}

// public void set_RootNode(Fuse.Node value) :4556
void Viewport__set_RootNode_fn(Viewport* __this, ::g::Fuse::Node* value)
{
    __this->RootNode(value);
}

// public float2 get_Size() :4689
void Viewport__get_Size_fn(Viewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public override sealed int get_SubNodeCount() :4670
void Viewport__get_SubNodeCount_fn(Viewport* __this, int* __retval)
{
    return *__retval = (__this->RootNode() != NULL) ? 1 : 0, void();
}

// private void UpdateFrustum() :4546
void Viewport__UpdateFrustum_fn(Viewport* __this)
{
    __this->UpdateFrustum();
}

// public float3 get_ViewOrigin() :4705
void Viewport__get_ViewOrigin_fn(Viewport* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->ViewOrigin();
}

// public float4x4 get_ViewProjectionTransform() :4697
void Viewport__get_ViewProjectionTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransform();
}

// public float4x4 get_ViewProjectionTransformInverse() :4699
void Viewport__get_ViewProjectionTransformInverse_fn(Viewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransformInverse();
}

// public float2 get_ViewRange() :4706
void Viewport__get_ViewRange_fn(Viewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ViewRange();
}

// public float4x4 get_ViewTransform() :4701
void Viewport__get_ViewTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewTransform();
}

// public float4x4 get_ViewTransformInverse() :4703
void Viewport__get_ViewTransformInverse_fn(Viewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewTransformInverse();
}

// public Viewport() [instance] :4525
void Viewport::ctor_2()
{
    _frustumViewport = ::g::Fuse::FrustumViewport::New1();
    _frustum = (uObject*)::g::Fuse::OrthographicFrustum::New1();
    ctor_1();
    UpdateFrustum();
    init_DrawCalls();
}

// public Uno.Graphics.PolygonFace get_CullFace() [instance] :4534
int Viewport::CullFace()
{
    return _cullFace;
}

// public void set_CullFace(Uno.Graphics.PolygonFace value) [instance] :4535
void Viewport::CullFace(int value)
{
    _cullFace = value;
    _hasCullFace = true;
    InvalidateVisual();
}

// public bool get_Flatten() [instance] :4606
bool Viewport::Flatten()
{
    return _flatten;
}

// public void set_Flatten(bool value) [instance] :4607
void Viewport::Flatten(bool value)
{
    _flatten = value;
    InvalidateVisual();
}

// private Fuse.IFrustum get_Frustum() [instance] :4572
uObject* Viewport::Frustum()
{
    return _frustum;
}

// private void set_Frustum(Fuse.IFrustum value) [instance] :4573
void Viewport::Frustum(uObject* value)
{
    _frustum = value;
    InvalidateVisual();
    UpdateFrustum();
}

// private bool get_HasCullFace() [instance] :4543
bool Viewport::HasCullFace()
{
    return _hasCullFace;
}

// private generated void init_DrawCalls() [instance] :4523
void Viewport::init_DrawCalls()
{
    OnDraw_VertexData_a781a46e_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[24/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f))), 0);
    OnDraw_LocalTransform_a781a46e_4_8_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    OnDraw_LocalTransform_a781a46e_4_8_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    OnDraw_LocalTransform_a781a46e_4_8_4 = ::g::Uno::Matrix::Translation(::g::Uno::Float2__New1(0.0f).X, ::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    _draw_a781a46e = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::Fuse_Controls_bundle::Viewport2da28930());
}

// public float get_Perspective() [instance] :4584
float Viewport::Perspective()
{
    return _perspective;
}

// public void set_Perspective(float value) [instance] :4585
void Viewport::Perspective(float value)
{
    if (value != _perspective)
    {
        _perspective = value;
        ::g::Fuse::PerspectiveFrustum* pf = uAs< ::g::Fuse::PerspectiveFrustum*>(Frustum(), ::TYPES[105/*Fuse.PerspectiveFrustum*/]);

        if (pf == NULL)
        {
            pf = ::g::Fuse::PerspectiveFrustum::New1();
            Frustum((uObject*)pf);
        }

        uPtr(pf)->Distance(_perspective);
        UpdateFrustum();
    }
}

// public float2 get_PixelSize() [instance] :4690
::g::Uno::Float2 Viewport::PixelSize()
{
    return ::g::Uno::Float2__op_Division1(ActualSize(), AbsoluteZoom());
}

// public float get_PointDensity() [instance] :4688
float Viewport::PointDensity1()
{
    return ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr(Parent())->Viewport()), ::TYPES[23/*Fuse.IViewport*/]));
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pointPos) [instance] :4707
::g::Uno::Geometry::Ray Viewport::PointToWorldRay(::g::Uno::Float2 pointPos)
{
    ::g::Uno::Geometry::Ray r = ::g::Fuse::FrustumViewport::PointToWorldRay((uObject*)this, pointPos);
    return r;
}

// public float4x4 get_ProjectionTransform() [instance] :4693
::g::Uno::Float4x4 Viewport::ProjectionTransform()
{
    return uPtr(_frustumViewport)->ProjectionTransform;
}

// public float4x4 get_ProjectionTransformInverse() [instance] :4695
::g::Uno::Float4x4 Viewport::ProjectionTransformInverse()
{
    return uPtr(_frustumViewport)->ProjectionTransformInverse;
}

// public Fuse.Node get_RootNode() [instance] :4555
::g::Fuse::Node* Viewport::RootNode()
{
    return _rootNode;
}

// public void set_RootNode(Fuse.Node value) [instance] :4556
void Viewport::RootNode(::g::Fuse::Node* value)
{
    if (_rootNode != NULL)
        uPtr(_rootNode)->OnRemoved(this);

    _rootNode = value;

    if (_rootNode != NULL)
        uPtr(_rootNode)->OnAdded(this);

    InvalidateLayout(2);
}

// public float2 get_Size() [instance] :4689
::g::Uno::Float2 Viewport::Size()
{
    return ActualSize();
}

// private void UpdateFrustum() [instance] :4546
void Viewport::UpdateFrustum()
{
    uPtr(_frustumViewport)->Update((uObject*)this, Frustum());
}

// public float3 get_ViewOrigin() [instance] :4705
::g::Uno::Float3 Viewport::ViewOrigin()
{
    return ::g::Fuse::IFrustum::GetWorldPosition(uInterface(uPtr(Frustum()), ::TYPES[19/*Fuse.IFrustum*/]), (uObject*)this);
}

// public float4x4 get_ViewProjectionTransform() [instance] :4697
::g::Uno::Float4x4 Viewport::ViewProjectionTransform()
{
    return uPtr(_frustumViewport)->ViewProjectionTransform;
}

// public float4x4 get_ViewProjectionTransformInverse() [instance] :4699
::g::Uno::Float4x4 Viewport::ViewProjectionTransformInverse()
{
    return uPtr(_frustumViewport)->ViewProjectionTransformInverse;
}

// public float2 get_ViewRange() [instance] :4706
::g::Uno::Float2 Viewport::ViewRange()
{
    return ::g::Fuse::IFrustum::GetDepthRange(uInterface(uPtr(Frustum()), ::TYPES[19/*Fuse.IFrustum*/]), (uObject*)this);
}

// public float4x4 get_ViewTransform() [instance] :4701
::g::Uno::Float4x4 Viewport::ViewTransform()
{
    return uPtr(_frustumViewport)->ViewTransform;
}

// public float4x4 get_ViewTransformInverse() [instance] :4703
::g::Uno::Float4x4 Viewport::ViewTransformInverse()
{
    return uPtr(_frustumViewport)->ViewTransformInverse;
}

// public Viewport New() [static] :4525
Viewport* Viewport::New1()
{
    Viewport* obj1 = (Viewport*)uNew(Viewport_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\$.uno(1885)
// ------------------------------------------------------------

// public enum Visibility :1885
uEnumType* Visibility_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.Visibility", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Visible", 0LL,
        "Collapsed", 1LL,
        "Hidden", 2LL);
    return type;
}

}}} // ::g::Fuse::Elements
