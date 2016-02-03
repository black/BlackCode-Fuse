#include <app/Fuse.Animations.AnimationVariant.h>
#include <app/Fuse.Animations.Easing.h>
#include <app/Fuse.Animations.KeyframeInterpolation.h>
#include <app/Fuse.Animations.MixOp.h>
#include <app/Fuse.Drawing.BlendMode.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.Drawing.GradientStop.h>
#include <app/Fuse.Drawing.LinearGradient.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.StaticBrush.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.CachingMode.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.HitTestMode.h>
#include <app/Fuse.Elements.SizeUnit.h>
#include <app/Fuse.Elements.StretchDirection.h>
#include <app/Fuse.Elements.StretchMode.h>
#include <app/Fuse.Elements.StretchSizing.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.Elements.Visibility.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Gestures.Edge.h>
#include <app/Fuse.Gestures.ScrollDirections.h>
#include <app/Fuse.Layouts.Dock.h>
#include <app/Fuse.Layouts.FlowDirection.h>
#include <app/Fuse.Layouts.Metric.h>
#include <app/Fuse.Layouts.Orientation.h>
#include <app/Fuse.Navigation.NavigationDirection.h>
#include <app/Fuse.Navigation.NavigationEdge.h>
#include <app/Fuse.Navigation.NavigationGotoMode.h>
#include <app/Fuse.Navigation.SnapTo.h>
#include <app/Fuse.Navigation.SwipeDirection.h>
#include <app/Fuse.Navigation.SwipeEnds.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Triggers.Actions.TriggerDirection.h>
#include <app/Fuse.Triggers.State.h>
#include <app/Fuse.Triggers.StateTransition.h>
#include <app/Fuse.Triggers.TriggerBypassMode.h>
#include <app/Uno.Bool.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Collections_List_object_.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__string__Uno_Collections-1df2e5ac.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__Uno_Collec-402bacc3.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__string_-3442ad91.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Collections_List_object_.h>
#include <app/Uno.Collections.List__object.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler__Uno_EventArgs.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Int3.h>
#include <app/Uno.Int4.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.IO.BinaryReader.h>
#include <app/Uno.IO.MemoryStream.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.IO.StreamReader.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.iOS.StatusBarStyle.h>
#include <app/Uno.Predicate__object.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.BundleFileSource.h>
#include <app/Uno.UX.Expression__bool.h>
#include <app/Uno.UX.Expression__char.h>
#include <app/Uno.UX.Expression__double.h>
#include <app/Uno.UX.Expression__float.h>
#include <app/Uno.UX.Expression__float2.h>
#include <app/Uno.UX.Expression__float3.h>
#include <app/Uno.UX.Expression__float4.h>
#include <app/Uno.UX.Expression__Fuse_Animations_AnimationVariant.h>
#include <app/Uno.UX.Expression__Fuse_Animations_Easing.h>
#include <app/Uno.UX.Expression__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Uno.UX.Expression__Fuse_Animations_MixOp.h>
#include <app/Uno.UX.Expression__Fuse_Drawing_BlendMode.h>
#include <app/Uno.UX.Expression__Fuse_Drawing_Brush.h>
#include <app/Uno.UX.Expression__Fuse_Drawing_DynamicBrush.h>
#include <app/Uno.UX.Expression__Fuse_Drawing_GradientStop.h>
#include <app/Uno.UX.Expression__Fuse_Drawing_LinearGradient.h>
#include <app/Uno.UX.Expression__Fuse_Drawing_SolidColor.h>
#include <app/Uno.UX.Expression__Fuse_Drawing_StaticBrush.h>
#include <app/Uno.UX.Expression__Fuse_Elements_Alignment.h>
#include <app/Uno.UX.Expression__Fuse_Elements_CachingMode.h>
#include <app/Uno.UX.Expression__Fuse_Elements_Element.h>
#include <app/Uno.UX.Expression__Fuse_Elements_HitTestMode.h>
#include <app/Uno.UX.Expression__Fuse_Elements_SizeUnit.h>
#include <app/Uno.UX.Expression__Fuse_Elements_StretchDirection.h>
#include <app/Uno.UX.Expression__Fuse_Elements_StretchMode.h>
#include <app/Uno.UX.Expression__Fuse_Elements_StretchSizing.h>
#include <app/Uno.UX.Expression__Fuse_Elements_TextAlignment.h>
#include <app/Uno.UX.Expression__Fuse_Elements_TextWrapping.h>
#include <app/Uno.UX.Expression__Fuse_Elements_Visibility.h>
#include <app/Uno.UX.Expression__Fuse_Font.h>
#include <app/Uno.UX.Expression__Fuse_Gestures_Edge.h>
#include <app/Uno.UX.Expression__Fuse_Gestures_ScrollDirections.h>
#include <app/Uno.UX.Expression__Fuse_Layouts_Dock.h>
#include <app/Uno.UX.Expression__Fuse_Layouts_FlowDirection.h>
#include <app/Uno.UX.Expression__Fuse_Layouts_Metric.h>
#include <app/Uno.UX.Expression__Fuse_Layouts_Orientation.h>
#include <app/Uno.UX.Expression__Fuse_Navigation_NavigationDirection.h>
#include <app/Uno.UX.Expression__Fuse_Navigation_NavigationEdge.h>
#include <app/Uno.UX.Expression__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Uno.UX.Expression__Fuse_Navigation_SnapTo.h>
#include <app/Uno.UX.Expression__Fuse_Navigation_SwipeDirection.h>
#include <app/Uno.UX.Expression__Fuse_Navigation_SwipeEnds.h>
#include <app/Uno.UX.Expression__Fuse_Node.h>
#include <app/Uno.UX.Expression__Fuse_Resources_ImageSource.h>
#include <app/Uno.UX.Expression__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Uno.UX.Expression__Fuse_Triggers_State.h>
#include <app/Uno.UX.Expression__Fuse_Triggers_StateTransition.h>
#include <app/Uno.UX.Expression__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Uno.UX.Expression__int.h>
#include <app/Uno.UX.Expression__int2.h>
#include <app/Uno.UX.Expression__int3.h>
#include <app/Uno.UX.Expression__int4.h>
#include <app/Uno.UX.Expression__long.h>
#include <app/Uno.UX.Expression__object.h>
#include <app/Uno.UX.Expression__short.h>
#include <app/Uno.UX.Expression__string.h>
#include <app/Uno.UX.Expression__Uno_EventArgs.h>
#include <app/Uno.UX.Expression__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Uno.UX.Expression__Uno_UX_FileSource.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.IFactory.h>
#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Resource.h>
#include <app/Uno.UX.StreamExtensions.h>
#include <app/Uno.UX.UXAttachedEventAdderAttribute.h>
#include <app/Uno.UX.UXAttachedEventRemoverAttribute.h>
#include <app/Uno.UX.UXAttachedPropertyGetterAttribute.h>
#include <app/Uno.UX.UXAttachedPropertyResetterAttribute.h>
#include <app/Uno.UX.UXAttachedPropertySetterAttribute.h>
#include <app/Uno.UX.UXAttachedPropertyStyleSetterAttribute.h>
#include <app/Uno.UX.UXAutoGenericAttribute.h>
#include <app/Uno.UX.UXComponentsAttribute.h>
#include <app/Uno.UX.UXConstructorAttribute.h>
#include <app/Uno.UX.UXContentAttribute.h>
#include <app/Uno.UX.UXContentModeAttribute.h>
#include <app/Uno.UX.UXFileNameAttribute.h>
#include <app/Uno.UX.UXGlobalResourceAttribute.h>
#include <app/Uno.UX.UXImplicitPropertySetterAttribute.h>
#include <app/Uno.UX.UXLineNumberAttribute.h>
#include <app/Uno.UX.UXNameAttribute.h>
#include <app/Uno.UX.UXParameterAttribute.h>
#include <app/Uno.UX.UXPrimaryAttribute.h>
#include <app/Uno.UX.UXSourceFileNameAttribute.h>
#include <app/Uno.UX.UXStyleListAttribute.h>
#include <app/Uno.UX.UXValueBindingAliasAttribute.h>
#include <app/Uno.UX.UXValueBindingArgumentAttribute.h>
#include <app/Uno.UX.UXValueBindingTargetAttribute.h>
#include <app/Uno.UX.UXValueChangedEventAttribute.h>
#include <app/Uno.UX.ValueChangedArgs__bool.h>
#include <app/Uno.UX.ValueChangedArgs__char.h>
#include <app/Uno.UX.ValueChangedArgs__double.h>
#include <app/Uno.UX.ValueChangedArgs__float.h>
#include <app/Uno.UX.ValueChangedArgs__float2.h>
#include <app/Uno.UX.ValueChangedArgs__float3.h>
#include <app/Uno.UX.ValueChangedArgs__float4.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Animations_AnimationVariant.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Animations_Easing.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Animations_MixOp.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_BlendMode.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_Brush.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_DynamicBrush.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_GradientStop.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_LinearGradient.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_SolidColor.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Drawing_StaticBrush.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_Alignment.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_CachingMode.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_Element.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_HitTestMode.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_SizeUnit.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_StretchDirection.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_StretchMode.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_StretchSizing.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_TextAlignment.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_TextWrapping.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Elements_Visibility.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Font.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Gestures_Edge.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Gestures_ScrollDirections.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Layouts_Dock.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Layouts_FlowDirection.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Layouts_Metric.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Layouts_Orientation.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Navigation_NavigationDirection.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Navigation_NavigationEdge.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Navigation_SnapTo.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Navigation_SwipeDirection.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Navigation_SwipeEnds.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Node.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Resources_ImageSource.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Triggers_State.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Triggers_StateTransition.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Uno.UX.ValueChangedArgs__int.h>
#include <app/Uno.UX.ValueChangedArgs__int2.h>
#include <app/Uno.UX.ValueChangedArgs__int3.h>
#include <app/Uno.UX.ValueChangedArgs__int4.h>
#include <app/Uno.UX.ValueChangedArgs__long.h>
#include <app/Uno.UX.ValueChangedArgs__object.h>
#include <app/Uno.UX.ValueChangedArgs__short.h>
#include <app/Uno.UX.ValueChangedArgs__string.h>
#include <app/Uno.UX.ValueChangedArgs__Uno_EventArgs.h>
#include <app/Uno.UX.ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Uno.UX.ValueChangedArgs__Uno_UX_FileSource.h>
#include <app/Uno.UX.ValueChangedHandler__bool.h>
#include <app/Uno.UX.ValueChangedHandler__char.h>
#include <app/Uno.UX.ValueChangedHandler__double.h>
#include <app/Uno.UX.ValueChangedHandler__float.h>
#include <app/Uno.UX.ValueChangedHandler__float2.h>
#include <app/Uno.UX.ValueChangedHandler__float3.h>
#include <app/Uno.UX.ValueChangedHandler__float4.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Animations_AnimationVariant.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Animations_Easing.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Animations_KeyframeInterpolation.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Animations_MixOp.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_BlendMode.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_Brush.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_DynamicBrush.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_GradientStop.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_LinearGradient.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_SolidColor.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Drawing_StaticBrush.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_Alignment.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_CachingMode.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_Element.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_HitTestMode.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_SizeUnit.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_StretchDirection.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_StretchMode.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_StretchSizing.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_TextAlignment.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_TextWrapping.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Elements_Visibility.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Font.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Gestures_Edge.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Gestures_ScrollDirections.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Layouts_Dock.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Layouts_FlowDirection.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Layouts_Metric.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Layouts_Orientation.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Navigation_NavigationDirection.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Navigation_NavigationEdge.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Navigation_NavigationGotoMode.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Navigation_SnapTo.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Navigation_SwipeDirection.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Navigation_SwipeEnds.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Node.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Resources_ImageSource.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Triggers_State.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Triggers_StateTransition.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Uno.UX.ValueChangedHandler__int.h>
#include <app/Uno.UX.ValueChangedHandler__int2.h>
#include <app/Uno.UX.ValueChangedHandler__int3.h>
#include <app/Uno.UX.ValueChangedHandler__int4.h>
#include <app/Uno.UX.ValueChangedHandler__long.h>
#include <app/Uno.UX.ValueChangedHandler__object.h>
#include <app/Uno.UX.ValueChangedHandler__short.h>
#include <app/Uno.UX.ValueChangedHandler__string.h>
#include <app/Uno.UX.ValueChangedHandler__Uno_EventArgs.h>
#include <app/Uno.UX.ValueChangedHandler__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Uno.UX.ValueChangedHandler__Uno_UX_FileSource.h>

namespace app {
namespace Uno {
namespace UX {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BundleFileSource__uType* BundleFileSource__typeof()
{
    static ::uStaticStrong<BundleFileSource__uType*> type;
    if (type != NULL) return type;

    type = (BundleFileSource__uType*)::uAllocClassType(sizeof(BundleFileSource__uType), "Uno.UX.BundleFileSource", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::FileSource__typeof());
    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))BundleFileSource__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))BundleFileSource__GetHashCode;
    type->__fp_OpenRead = (::app::Uno::IO::Stream*(*)(::app::Uno::UX::FileSource*))BundleFileSource__OpenRead;
    type->__fp_ReadAllBytes = (::uArray*(*)(::app::Uno::UX::FileSource*))BundleFileSource__ReadAllBytes;
    type->__fp_ReadAllText = (::uString*(*)(::app::Uno::UX::FileSource*))BundleFileSource__ReadAllText;

    type->SetStrongRefs(
        "BundleFile", offsetof(BundleFileSource, BundleFile));

    type->SetFields(1,
        ::uNewField("BundleFile", NULL, offsetof(BundleFileSource, BundleFile), ::app::Uno::BundleFile__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BundleFileSource__New_1, 0, true, BundleFileSource__typeof(), ::app::Uno::BundleFile__typeof()));

    ::uRegisterType(type);
    return type;
}

void BundleFileSource___ObjInit_1(BundleFileSource* __this, ::app::Uno::BundleFile* bundleFile)
{
    ::app::Uno::UX::FileSource___ObjInit(__this, ::uPtr< ::app::Uno::BundleFile*>(bundleFile)->Name());
    __this->BundleFile = bundleFile;
}

bool BundleFileSource__Equals(BundleFileSource* __this, ::uObject* o)
{
    BundleFileSource* bfs = ::uAs< BundleFileSource*>(o, BundleFileSource__typeof());

    if (bfs == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::app::Uno::BundleFile*>(::uPtr< BundleFileSource*>(bfs)->BundleFile), (::uObject*)__this->BundleFile);
}

int BundleFileSource__GetHashCode(BundleFileSource* __this)
{
    return ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::BundleFile*>(__this->BundleFile));
}

BundleFileSource* BundleFileSource__New_1(::uStatic* __this, ::app::Uno::BundleFile* bundleFile)
{
    BundleFileSource* inst = (BundleFileSource*)::uAllocObject(sizeof(BundleFileSource), BundleFileSource__typeof());
    inst->_ObjInit_1(bundleFile);
    return inst;
}

::app::Uno::IO::Stream* BundleFileSource__OpenRead(BundleFileSource* __this)
{
    return ::uPtr< ::app::Uno::BundleFile*>(__this->BundleFile)->OpenRead();
}

::uArray* BundleFileSource__ReadAllBytes(BundleFileSource* __this)
{
    return ::uPtr< ::app::Uno::BundleFile*>(__this->BundleFile)->ReadAllBytes();
}

::uString* BundleFileSource__ReadAllText(BundleFileSource* __this)
{
    return ::uPtr< ::app::Uno::BundleFile*>(__this->BundleFile)->ReadAllText();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__bool__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<bool>", 0);

    type->SetSignature(::app::Uno::Bool__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__char__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<char>", 0);

    type->SetSignature(::app::Uno::Char__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__double__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<double>", 0);

    type->SetSignature(::app::Uno::Double__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__float__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<float>", 0);

    type->SetSignature(::app::Uno::Float__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__float2__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<float2>", 0);

    type->SetSignature(::app::Uno::Float2__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__float3__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<float3>", 0);

    type->SetSignature(::app::Uno::Float3__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__float4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<float4>", 0);

    type->SetSignature(::app::Uno::Float4__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Animations_AnimationVariant__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Animations.AnimationVariant>", 0);

    type->SetSignature(::app::Fuse::Animations::AnimationVariant__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Animations_Easing__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Animations.Easing>", 0);

    type->SetSignature(::app::Fuse::Animations::Easing__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Animations_KeyframeInterpolation__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Animations.KeyframeInterpolation>", 0);

    type->SetSignature(::app::Fuse::Animations::KeyframeInterpolation__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Animations_MixOp__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Animations.MixOp>", 0);

    type->SetSignature(::app::Fuse::Animations::MixOp__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Drawing_BlendMode__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Drawing.BlendMode>", 0);

    type->SetSignature(::app::Fuse::Drawing::BlendMode__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Drawing.Brush>", 0);

    type->SetSignature(::app::Fuse::Drawing::Brush__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Drawing_DynamicBrush__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Drawing.DynamicBrush>", 0);

    type->SetSignature(::app::Fuse::Drawing::DynamicBrush__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Drawing.GradientStop>", 0);

    type->SetSignature(::app::Fuse::Drawing::GradientStop__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Drawing_LinearGradient__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Drawing.LinearGradient>", 0);

    type->SetSignature(::app::Fuse::Drawing::LinearGradient__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Drawing_SolidColor__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Drawing.SolidColor>", 0);

    type->SetSignature(::app::Fuse::Drawing::SolidColor__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Drawing_StaticBrush__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Drawing.StaticBrush>", 0);

    type->SetSignature(::app::Fuse::Drawing::StaticBrush__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Elements.Alignment>", 0);

    type->SetSignature(::app::Fuse::Elements::Alignment__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Elements.CachingMode>", 0);

    type->SetSignature(::app::Fuse::Elements::CachingMode__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Elements.Element>", 0);

    type->SetSignature(::app::Fuse::Elements::Element__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Elements.HitTestMode>", 0);

    type->SetSignature(::app::Fuse::Elements::HitTestMode__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Elements.SizeUnit>", 0);

    type->SetSignature(::app::Fuse::Elements::SizeUnit__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Elements.StretchDirection>", 0);

    type->SetSignature(::app::Fuse::Elements::StretchDirection__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Elements.StretchMode>", 0);

    type->SetSignature(::app::Fuse::Elements::StretchMode__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Elements.StretchSizing>", 0);

    type->SetSignature(::app::Fuse::Elements::StretchSizing__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Elements.TextAlignment>", 0);

    type->SetSignature(::app::Fuse::Elements::TextAlignment__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Elements.TextWrapping>", 0);

    type->SetSignature(::app::Fuse::Elements::TextWrapping__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Elements.Visibility>", 0);

    type->SetSignature(::app::Fuse::Elements::Visibility__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Font__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Font>", 0);

    type->SetSignature(::app::Fuse::Font__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Gestures_Edge__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Gestures.Edge>", 0);

    type->SetSignature(::app::Fuse::Gestures::Edge__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Gestures.ScrollDirections>", 0);

    type->SetSignature(::app::Fuse::Gestures::ScrollDirections__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Layouts_Dock__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Layouts.Dock>", 0);

    type->SetSignature(::app::Fuse::Layouts::Dock__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Layouts_FlowDirection__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Layouts.FlowDirection>", 0);

    type->SetSignature(::app::Fuse::Layouts::FlowDirection__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Layouts_Metric__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Layouts.Metric>", 0);

    type->SetSignature(::app::Fuse::Layouts::Metric__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Layouts.Orientation>", 0);

    type->SetSignature(::app::Fuse::Layouts::Orientation__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Navigation_NavigationDirection__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Navigation.NavigationDirection>", 0);

    type->SetSignature(::app::Fuse::Navigation::NavigationDirection__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Navigation_NavigationEdge__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Navigation.NavigationEdge>", 0);

    type->SetSignature(::app::Fuse::Navigation::NavigationEdge__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Navigation_NavigationGotoMode__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Navigation.NavigationGotoMode>", 0);

    type->SetSignature(::app::Fuse::Navigation::NavigationGotoMode__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Navigation_SnapTo__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Navigation.SnapTo>", 0);

    type->SetSignature(::app::Fuse::Navigation::SnapTo__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Navigation_SwipeDirection__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Navigation.SwipeDirection>", 0);

    type->SetSignature(::app::Fuse::Navigation::SwipeDirection__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Navigation_SwipeEnds__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Navigation.SwipeEnds>", 0);

    type->SetSignature(::app::Fuse::Navigation::SwipeEnds__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Node>", 0);

    type->SetSignature(::app::Fuse::Node__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Resources.ImageSource>", 0);

    type->SetSignature(::app::Fuse::Resources::ImageSource__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Triggers_Actions_TriggerDirection__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Triggers.Actions.TriggerDirection>", 0);

    type->SetSignature(::app::Fuse::Triggers::Actions::TriggerDirection__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Triggers.State>", 0);

    type->SetSignature(::app::Fuse::Triggers::State__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Triggers_StateTransition__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Triggers.StateTransition>", 0);

    type->SetSignature(::app::Fuse::Triggers::StateTransition__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Fuse_Triggers_TriggerBypassMode__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Fuse.Triggers.TriggerBypassMode>", 0);

    type->SetSignature(::app::Fuse::Triggers::TriggerBypassMode__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__int__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<int>", 0);

    type->SetSignature(::app::Uno::Int__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__int2__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<int2>", 0);

    type->SetSignature(::app::Uno::Int2__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__int3__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<int3>", 0);

    type->SetSignature(::app::Uno::Int3__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__int4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<int4>", 0);

    type->SetSignature(::app::Uno::Int4__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__long__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<long>", 0);

    type->SetSignature(::app::Uno::Long__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__object__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<object>", 0);

    type->SetSignature(::uObject__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__short__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<short>", 0);

    type->SetSignature(::app::Uno::Short__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__string__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<string>", 0);

    type->SetSignature(::app::Uno::String__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Uno_EventArgs__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Uno.EventArgs>", 0);

    type->SetSignature(::app::Uno::EventArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Uno_Platform_iOS_StatusBarStyle__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Uno.Platform.iOS.StatusBarStyle>", 0);

    type->SetSignature(::app::Uno::Platform::iOS::StatusBarStyle__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<Uno.UX.FileSource>", 0);

    type->SetSignature(::app::Uno::UX::FileSource__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FileSource__uType* FileSource__typeof()
{
    static ::uStaticStrong<FileSource__uType*> type;
    if (type != NULL) return type;

    type = (FileSource__uType*)::uAllocClassType(sizeof(FileSource__uType), "Uno.UX.FileSource", false, 0, 2, 0);

    type->__fp_ReadAllBytes = FileSource__ReadAllBytes;
    type->__fp_ReadAllText = FileSource__ReadAllText;

    type->SetStrongRefs(
        "DataChanged", offsetof(FileSource, DataChanged),
        "Name", offsetof(FileSource, Name));

    type->SetFields(1,
        ::uNewField("Name", NULL, offsetof(FileSource, Name), ::app::Uno::String__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("add_DataChanged", FileSource__add_DataChanged, 0, false, ::app::Uno::EventHandler__Uno_EventArgs__typeof()),
        ::uNewFunctionVoid("OnDataChanged", FileSource__OnDataChanged, 0, false),
        ::uNewFunction("OpenRead", type->__fp_OpenRead, offsetof(FileSource__uType, __fp_OpenRead), false, ::app::Uno::IO::Stream__typeof()),
        ::uNewFunction("ReadAllBytes", type->__fp_ReadAllBytes, offsetof(FileSource__uType, __fp_ReadAllBytes), false, ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunction("ReadAllText", type->__fp_ReadAllText, offsetof(FileSource__uType, __fp_ReadAllText), false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("remove_DataChanged", FileSource__remove_DataChanged, 0, false, ::app::Uno::EventHandler__Uno_EventArgs__typeof()));

    ::uRegisterType(type);
    return type;
}

void FileSource___ObjInit(FileSource* __this, ::uString* name)
{
    __this->Name = name;
}

void FileSource__add_DataChanged(FileSource* __this, ::uDelegate* value)
{
    __this->DataChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->DataChanged, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_EventArgs__typeof());
}

void FileSource__OnDataChanged(FileSource* __this)
{
    ::uDelegate* dataChanged = __this->DataChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)dataChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(dataChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

FileSource* FileSource__op_Implicit(::uStatic* __this, ::app::Uno::BundleFile* bundleFile)
{
    return (FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, bundleFile);
}

::uArray* FileSource__ReadAllBytes(FileSource* __this)
{
    return ::app::Uno::UX::StreamExtensions__ReadAllBytes(NULL, ::app::Uno::IO::BinaryReader__New_1(NULL, __this->OpenRead()));
}

::uString* FileSource__ReadAllText(FileSource* __this)
{
    return ::uPtr< ::app::Uno::IO::StreamReader*>(::app::Uno::IO::StreamReader__New_1(NULL, __this->OpenRead()))->ReadToEnd();
}

void FileSource__remove_DataChanged(FileSource* __this, ::uDelegate* value)
{
    __this->DataChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->DataChanged, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_EventArgs__typeof());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IFactory__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.UX.IFactory");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ITemplate__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.UX.ITemplate");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*> Resource___globals;

Resource__uType* Resource__typeof()
{
    static ::uStaticStrong<Resource__uType*> type;
    if (type != NULL) return type;

    type = (Resource__uType*)::uAllocClassType(sizeof(Resource__uType), "Uno.UX.Resource", false, 0, 2, 0);

    type->SetStrongRefs(
        "_Key", offsetof(Resource, _Key),
        "_Value", offsetof(Resource, _Value));

    type->SetFields(1,
        ::uNewField("_globals", &Resource___globals, 0, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object___typeof()));

    type->SetFunctions(8,
        ::uNewFunction("get_Key", Resource__get_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", Resource__get_Value, 0, false, ::uObject__typeof()),
        ::uNewFunction("GetGlobalKey", Resource__GetGlobalKey, 0, true, ::app::Uno::String__typeof(), ::uObject__typeof()),
        ::uNewFunction(".ctor", Resource__New_1, 0, true, Resource__typeof(), ::app::Uno::String__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Key", Resource__set_Key, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Value", Resource__set_Value, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("SetGlobalKey", Resource__SetGlobalKey, 0, true, ::uObject__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("TryFindGlobal", Resource__TryFindGlobal, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Predicate__object__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Resource___ObjInit(Resource* __this, ::uString* key, ::uObject* value)
{
    __this->Key(key);
    __this->Value(value);
}

::uString* Resource__get_Key(Resource* __this)
{
    return __this->_Key;
}

::uObject* Resource__get_Value(Resource* __this)
{
    return __this->_Value;
}

::uString* Resource__GetGlobalKey(::uStatic* __this, ::uObject* obj)
{
    if (Resource___globals == NULL)
    {
        return NULL;
    }

    for (::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Collections_List_object_ enum_124 = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(Resource___globals)->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__string__Uno_Collections_List_object_ list = enum_124.Current();

        if (::uPtr< ::app::Uno::Collections::List__object*>(list.Value())->Contains(obj))
        {
            return list.Key();
        }
    }

    return NULL;
}

Resource* Resource__New_1(::uStatic* __this, ::uString* key, ::uObject* value)
{
    Resource* inst = (Resource*)::uAllocObject(sizeof(Resource), Resource__typeof());
    inst->_ObjInit(key, value);
    return inst;
}

void Resource__set_Key(Resource* __this, ::uString* value)
{
    __this->_Key = value;
}

void Resource__set_Value(Resource* __this, ::uObject* value)
{
    __this->_Value = value;
}

void Resource__SetGlobalKey(::uStatic* __this, ::uObject* obj, ::uString* key)
{
    if (Resource___globals == NULL)
    {
        Resource___globals = ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object___New_1(NULL);
    }

    for (::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_ enum_123 = ::uPtr< ::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Collections_List_object_*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(Resource___globals)->Values())->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Collections::List__object* list = enum_123.Current();

        if (::uPtr< ::app::Uno::Collections::List__object*>(list)->Contains(obj))
        {
            ::uPtr< ::app::Uno::Collections::List__object*>(list)->Remove(obj);
            break;
        }
    }

    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(Resource___globals)->ContainsKey(key))
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(Resource___globals)->Add(key, ::app::Uno::Collections::List__object__New_1(NULL));
    }

    ::uPtr< ::app::Uno::Collections::List__object*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(Resource___globals)->Item(key))->Add(obj);
}

bool Resource__TryFindGlobal(::uStatic* __this, ::uString* key, ::uDelegate* acceptor, ::uObject** res)
{
    if (Resource___globals != NULL)
    {
        ::app::Uno::Collections::List__object* list;

        if (::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(Resource___globals)->TryGetValue(key, &list))
        {
            for (int i = ::uPtr< ::app::Uno::Collections::List__object*>(list)->Count(); (i--) > 0; )
            {
                ::uObject* v = ::uPtr< ::app::Uno::Collections::List__object*>(list)->Item(i);

                if (::uPtr< ::uDelegate*>(acceptor)->Invoke< bool, ::uObject*>(v))
                {
                    *res = v;
                    return true;
                }
            }
        }
    }

    *res = NULL;
    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StreamExtensions__uType* StreamExtensions__typeof()
{
    static ::uStaticStrong<StreamExtensions__uType*> type;
    if (type != NULL) return type;

    type = (StreamExtensions__uType*)::uAllocClassType(sizeof(StreamExtensions__uType), "Uno.UX.StreamExtensions");

    type->SetFunctions(2,
        ::uNewFunction("ReadAllBytes", StreamExtensions__ReadAllBytes, 0, true, ::uGetArrayType(::app::Uno::Byte__typeof()), ::app::Uno::IO::BinaryReader__typeof()),
        ::uNewFunction("ToArray", StreamExtensions__ToArray, 0, true, ::uGetArrayType(::app::Uno::Byte__typeof()), ::app::Uno::IO::MemoryStream__typeof()));

    ::uRegisterType(type);
    return type;
}

::uArray* StreamExtensions__ReadAllBytes(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    int bufferSize = 4096;
    {
        ::app::Uno::IO::MemoryStream* ms = ::app::Uno::IO::MemoryStream__New_1(NULL);

        try
        {
            {
                ::uArray* buffer;

                do
                {
                    buffer = ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadBytes(4096);
                    ::uPtr< ::app::Uno::IO::MemoryStream*>(ms)->Write(buffer, 0, ::uPtr< ::uArray*>(buffer)->Length());
                }
                while (::uPtr< ::uArray*>(buffer)->Length() == 4096);

                return StreamExtensions__ToArray(NULL, ms);
            }
        }
        catch (const ::uThrowable& __t)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>((::uObject*)ms));
            throw __t;
        }
        // finally
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>((::uObject*)ms));
        }
    }

    U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Bug in Uno compiler, this case should never ever happen.")));
}

::uArray* StreamExtensions__ToArray(::uStatic* __this, ::app::Uno::IO::MemoryStream* memoryStream)
{
    ::uArray* buffer = ::uPtr< ::app::Uno::IO::MemoryStream*>(memoryStream)->GetBuffer();
    ::uArray* bytes = ::uNewArray(::app::Uno::Byte__typeof(), (int)memoryStream->Length());

    for (int i = 0; (::uLong)i < memoryStream->Length(); ++i)
    {
        ::uPtr< ::uArray*>(bytes)->Item< ::uByte>(i) = ::uPtr< ::uArray*>(buffer)->Item< ::uByte>(i);
    }

    return bytes;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXAttachedEventAdderAttribute__uType* UXAttachedEventAdderAttribute__typeof()
{
    static ::uStaticStrong<UXAttachedEventAdderAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXAttachedEventAdderAttribute__uType*)::uAllocClassType(sizeof(UXAttachedEventAdderAttribute__uType), "Uno.UX.UXAttachedEventAdderAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Name", offsetof(UXAttachedEventAdderAttribute, Name));

    type->SetFields(1,
        ::uNewField("Name", NULL, offsetof(UXAttachedEventAdderAttribute, Name), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXAttachedEventAdderAttribute__New_1, 0, true, UXAttachedEventAdderAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXAttachedEventAdderAttribute___ObjInit_1(UXAttachedEventAdderAttribute* __this, ::uString* name)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Name = name;
}

UXAttachedEventAdderAttribute* UXAttachedEventAdderAttribute__New_1(::uStatic* __this, ::uString* name)
{
    UXAttachedEventAdderAttribute* inst = (UXAttachedEventAdderAttribute*)::uAllocObject(sizeof(UXAttachedEventAdderAttribute), UXAttachedEventAdderAttribute__typeof());
    inst->_ObjInit_1(name);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXAttachedEventRemoverAttribute__uType* UXAttachedEventRemoverAttribute__typeof()
{
    static ::uStaticStrong<UXAttachedEventRemoverAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXAttachedEventRemoverAttribute__uType*)::uAllocClassType(sizeof(UXAttachedEventRemoverAttribute__uType), "Uno.UX.UXAttachedEventRemoverAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Name", offsetof(UXAttachedEventRemoverAttribute, Name));

    type->SetFields(1,
        ::uNewField("Name", NULL, offsetof(UXAttachedEventRemoverAttribute, Name), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXAttachedEventRemoverAttribute__New_1, 0, true, UXAttachedEventRemoverAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXAttachedEventRemoverAttribute___ObjInit_1(UXAttachedEventRemoverAttribute* __this, ::uString* name)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Name = name;
}

UXAttachedEventRemoverAttribute* UXAttachedEventRemoverAttribute__New_1(::uStatic* __this, ::uString* name)
{
    UXAttachedEventRemoverAttribute* inst = (UXAttachedEventRemoverAttribute*)::uAllocObject(sizeof(UXAttachedEventRemoverAttribute), UXAttachedEventRemoverAttribute__typeof());
    inst->_ObjInit_1(name);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXAttachedPropertyGetterAttribute__uType* UXAttachedPropertyGetterAttribute__typeof()
{
    static ::uStaticStrong<UXAttachedPropertyGetterAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXAttachedPropertyGetterAttribute__uType*)::uAllocClassType(sizeof(UXAttachedPropertyGetterAttribute__uType), "Uno.UX.UXAttachedPropertyGetterAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Name", offsetof(UXAttachedPropertyGetterAttribute, Name));

    type->SetFields(1,
        ::uNewField("Name", NULL, offsetof(UXAttachedPropertyGetterAttribute, Name), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXAttachedPropertyGetterAttribute__New_1, 0, true, UXAttachedPropertyGetterAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXAttachedPropertyGetterAttribute___ObjInit_1(UXAttachedPropertyGetterAttribute* __this, ::uString* name)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Name = name;
}

UXAttachedPropertyGetterAttribute* UXAttachedPropertyGetterAttribute__New_1(::uStatic* __this, ::uString* name)
{
    UXAttachedPropertyGetterAttribute* inst = (UXAttachedPropertyGetterAttribute*)::uAllocObject(sizeof(UXAttachedPropertyGetterAttribute), UXAttachedPropertyGetterAttribute__typeof());
    inst->_ObjInit_1(name);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXAttachedPropertyResetterAttribute__uType* UXAttachedPropertyResetterAttribute__typeof()
{
    static ::uStaticStrong<UXAttachedPropertyResetterAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXAttachedPropertyResetterAttribute__uType*)::uAllocClassType(sizeof(UXAttachedPropertyResetterAttribute__uType), "Uno.UX.UXAttachedPropertyResetterAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Name", offsetof(UXAttachedPropertyResetterAttribute, Name));

    type->SetFields(1,
        ::uNewField("Name", NULL, offsetof(UXAttachedPropertyResetterAttribute, Name), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXAttachedPropertyResetterAttribute__New_1, 0, true, UXAttachedPropertyResetterAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXAttachedPropertyResetterAttribute___ObjInit_1(UXAttachedPropertyResetterAttribute* __this, ::uString* name)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Name = name;
}

UXAttachedPropertyResetterAttribute* UXAttachedPropertyResetterAttribute__New_1(::uStatic* __this, ::uString* name)
{
    UXAttachedPropertyResetterAttribute* inst = (UXAttachedPropertyResetterAttribute*)::uAllocObject(sizeof(UXAttachedPropertyResetterAttribute), UXAttachedPropertyResetterAttribute__typeof());
    inst->_ObjInit_1(name);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXAttachedPropertySetterAttribute__uType* UXAttachedPropertySetterAttribute__typeof()
{
    static ::uStaticStrong<UXAttachedPropertySetterAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXAttachedPropertySetterAttribute__uType*)::uAllocClassType(sizeof(UXAttachedPropertySetterAttribute__uType), "Uno.UX.UXAttachedPropertySetterAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Name", offsetof(UXAttachedPropertySetterAttribute, Name));

    type->SetFields(1,
        ::uNewField("Name", NULL, offsetof(UXAttachedPropertySetterAttribute, Name), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXAttachedPropertySetterAttribute__New_1, 0, true, UXAttachedPropertySetterAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXAttachedPropertySetterAttribute___ObjInit_1(UXAttachedPropertySetterAttribute* __this, ::uString* name)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Name = name;
}

UXAttachedPropertySetterAttribute* UXAttachedPropertySetterAttribute__New_1(::uStatic* __this, ::uString* name)
{
    UXAttachedPropertySetterAttribute* inst = (UXAttachedPropertySetterAttribute*)::uAllocObject(sizeof(UXAttachedPropertySetterAttribute), UXAttachedPropertySetterAttribute__typeof());
    inst->_ObjInit_1(name);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXAttachedPropertyStyleSetterAttribute__uType* UXAttachedPropertyStyleSetterAttribute__typeof()
{
    static ::uStaticStrong<UXAttachedPropertyStyleSetterAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXAttachedPropertyStyleSetterAttribute__uType*)::uAllocClassType(sizeof(UXAttachedPropertyStyleSetterAttribute__uType), "Uno.UX.UXAttachedPropertyStyleSetterAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Name", offsetof(UXAttachedPropertyStyleSetterAttribute, Name));

    type->SetFields(1,
        ::uNewField("Name", NULL, offsetof(UXAttachedPropertyStyleSetterAttribute, Name), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXAttachedPropertyStyleSetterAttribute__New_1, 0, true, UXAttachedPropertyStyleSetterAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXAttachedPropertyStyleSetterAttribute___ObjInit_1(UXAttachedPropertyStyleSetterAttribute* __this, ::uString* name)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Name = name;
}

UXAttachedPropertyStyleSetterAttribute* UXAttachedPropertyStyleSetterAttribute__New_1(::uStatic* __this, ::uString* name)
{
    UXAttachedPropertyStyleSetterAttribute* inst = (UXAttachedPropertyStyleSetterAttribute*)::uAllocObject(sizeof(UXAttachedPropertyStyleSetterAttribute), UXAttachedPropertyStyleSetterAttribute__typeof());
    inst->_ObjInit_1(name);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXAutoGenericAttribute__uType* UXAutoGenericAttribute__typeof()
{
    static ::uStaticStrong<UXAutoGenericAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXAutoGenericAttribute__uType*)::uAllocClassType(sizeof(UXAutoGenericAttribute__uType), "Uno.UX.UXAutoGenericAttribute", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Alias", offsetof(UXAutoGenericAttribute, Alias),
        "Property", offsetof(UXAutoGenericAttribute, Property));

    type->SetFields(2,
        ::uNewField("Alias", NULL, offsetof(UXAutoGenericAttribute, Alias), ::app::Uno::String__typeof()),
        ::uNewField("Property", NULL, offsetof(UXAutoGenericAttribute, Property), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXAutoGenericAttribute__New_1, 0, true, UXAutoGenericAttribute__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXAutoGenericAttribute___ObjInit_1(UXAutoGenericAttribute* __this, ::uString* alias, ::uString* property)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Alias = alias;
    __this->Property = property;
}

UXAutoGenericAttribute* UXAutoGenericAttribute__New_1(::uStatic* __this, ::uString* alias, ::uString* property)
{
    UXAutoGenericAttribute* inst = (UXAutoGenericAttribute*)::uAllocObject(sizeof(UXAutoGenericAttribute), UXAutoGenericAttribute__typeof());
    inst->_ObjInit_1(alias, property);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXComponentsAttribute__uType* UXComponentsAttribute__typeof()
{
    static ::uStaticStrong<UXComponentsAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXComponentsAttribute__uType*)::uAllocClassType(sizeof(UXComponentsAttribute__uType), "Uno.UX.UXComponentsAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXComponentsAttribute__New_1, 0, true, UXComponentsAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXComponentsAttribute___ObjInit_1(UXComponentsAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

UXComponentsAttribute* UXComponentsAttribute__New_1(::uStatic* __this)
{
    UXComponentsAttribute* inst = (UXComponentsAttribute*)::uAllocObject(sizeof(UXComponentsAttribute), UXComponentsAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXConstructorAttribute__uType* UXConstructorAttribute__typeof()
{
    static ::uStaticStrong<UXConstructorAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXConstructorAttribute__uType*)::uAllocClassType(sizeof(UXConstructorAttribute__uType), "Uno.UX.UXConstructorAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXConstructorAttribute__New_1, 0, true, UXConstructorAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXConstructorAttribute___ObjInit_1(UXConstructorAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

UXConstructorAttribute* UXConstructorAttribute__New_1(::uStatic* __this)
{
    UXConstructorAttribute* inst = (UXConstructorAttribute*)::uAllocObject(sizeof(UXConstructorAttribute), UXConstructorAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXContentAttribute__uType* UXContentAttribute__typeof()
{
    static ::uStaticStrong<UXContentAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXContentAttribute__uType*)::uAllocClassType(sizeof(UXContentAttribute__uType), "Uno.UX.UXContentAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXContentAttribute__New_1, 0, true, UXContentAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXContentAttribute___ObjInit_1(UXContentAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

UXContentAttribute* UXContentAttribute__New_1(::uStatic* __this)
{
    UXContentAttribute* inst = (UXContentAttribute*)::uAllocObject(sizeof(UXContentAttribute), UXContentAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXContentModeAttribute__uType* UXContentModeAttribute__typeof()
{
    static ::uStaticStrong<UXContentModeAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXContentModeAttribute__uType*)::uAllocClassType(sizeof(UXContentModeAttribute__uType), "Uno.UX.UXContentModeAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Mode", offsetof(UXContentModeAttribute, Mode));

    type->SetFields(1,
        ::uNewField("Mode", NULL, offsetof(UXContentModeAttribute, Mode), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXContentModeAttribute__New_1, 0, true, UXContentModeAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXContentModeAttribute___ObjInit_1(UXContentModeAttribute* __this, ::uString* mode)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Mode = mode;
}

UXContentModeAttribute* UXContentModeAttribute__New_1(::uStatic* __this, ::uString* mode)
{
    UXContentModeAttribute* inst = (UXContentModeAttribute*)::uAllocObject(sizeof(UXContentModeAttribute), UXContentModeAttribute__typeof());
    inst->_ObjInit_1(mode);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXFileNameAttribute__uType* UXFileNameAttribute__typeof()
{
    static ::uStaticStrong<UXFileNameAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXFileNameAttribute__uType*)::uAllocClassType(sizeof(UXFileNameAttribute__uType), "Uno.UX.UXFileNameAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXFileNameAttribute__New_1, 0, true, UXFileNameAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXFileNameAttribute___ObjInit_1(UXFileNameAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

UXFileNameAttribute* UXFileNameAttribute__New_1(::uStatic* __this)
{
    UXFileNameAttribute* inst = (UXFileNameAttribute*)::uAllocObject(sizeof(UXFileNameAttribute), UXFileNameAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXGlobalResourceAttribute__uType* UXGlobalResourceAttribute__typeof()
{
    static ::uStaticStrong<UXGlobalResourceAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXGlobalResourceAttribute__uType*)::uAllocClassType(sizeof(UXGlobalResourceAttribute__uType), "Uno.UX.UXGlobalResourceAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Alias", offsetof(UXGlobalResourceAttribute, Alias));

    type->SetFields(1,
        ::uNewField("Alias", NULL, offsetof(UXGlobalResourceAttribute, Alias), ::app::Uno::String__typeof()));

    type->SetFunctions(2,
        ::uNewFunction(".ctor", UXGlobalResourceAttribute__New_1, 0, true, UXGlobalResourceAttribute__typeof()),
        ::uNewFunction(".ctor", UXGlobalResourceAttribute__New_2, 0, true, UXGlobalResourceAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXGlobalResourceAttribute___ObjInit_1(UXGlobalResourceAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

void UXGlobalResourceAttribute___ObjInit_2(UXGlobalResourceAttribute* __this, ::uString* alias)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Alias = alias;
}

UXGlobalResourceAttribute* UXGlobalResourceAttribute__New_1(::uStatic* __this)
{
    UXGlobalResourceAttribute* inst = (UXGlobalResourceAttribute*)::uAllocObject(sizeof(UXGlobalResourceAttribute), UXGlobalResourceAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

UXGlobalResourceAttribute* UXGlobalResourceAttribute__New_2(::uStatic* __this, ::uString* alias)
{
    UXGlobalResourceAttribute* inst = (UXGlobalResourceAttribute*)::uAllocObject(sizeof(UXGlobalResourceAttribute), UXGlobalResourceAttribute__typeof());
    inst->_ObjInit_2(alias);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXImplicitPropertySetterAttribute__uType* UXImplicitPropertySetterAttribute__typeof()
{
    static ::uStaticStrong<UXImplicitPropertySetterAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXImplicitPropertySetterAttribute__uType*)::uAllocClassType(sizeof(UXImplicitPropertySetterAttribute__uType), "Uno.UX.UXImplicitPropertySetterAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Type", offsetof(UXImplicitPropertySetterAttribute, Type));

    type->SetFields(1,
        ::uNewField("Type", NULL, offsetof(UXImplicitPropertySetterAttribute, Type), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXImplicitPropertySetterAttribute__New_1, 0, true, UXImplicitPropertySetterAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXImplicitPropertySetterAttribute___ObjInit_1(UXImplicitPropertySetterAttribute* __this, ::uString* type)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Type = type;
}

UXImplicitPropertySetterAttribute* UXImplicitPropertySetterAttribute__New_1(::uStatic* __this, ::uString* type)
{
    UXImplicitPropertySetterAttribute* inst = (UXImplicitPropertySetterAttribute*)::uAllocObject(sizeof(UXImplicitPropertySetterAttribute), UXImplicitPropertySetterAttribute__typeof());
    inst->_ObjInit_1(type);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXLineNumberAttribute__uType* UXLineNumberAttribute__typeof()
{
    static ::uStaticStrong<UXLineNumberAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXLineNumberAttribute__uType*)::uAllocClassType(sizeof(UXLineNumberAttribute__uType), "Uno.UX.UXLineNumberAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXLineNumberAttribute__New_1, 0, true, UXLineNumberAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXLineNumberAttribute___ObjInit_1(UXLineNumberAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

UXLineNumberAttribute* UXLineNumberAttribute__New_1(::uStatic* __this)
{
    UXLineNumberAttribute* inst = (UXLineNumberAttribute*)::uAllocObject(sizeof(UXLineNumberAttribute), UXLineNumberAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXNameAttribute__uType* UXNameAttribute__typeof()
{
    static ::uStaticStrong<UXNameAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXNameAttribute__uType*)::uAllocClassType(sizeof(UXNameAttribute__uType), "Uno.UX.UXNameAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXNameAttribute__New_1, 0, true, UXNameAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXNameAttribute___ObjInit_1(UXNameAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

UXNameAttribute* UXNameAttribute__New_1(::uStatic* __this)
{
    UXNameAttribute* inst = (UXNameAttribute*)::uAllocObject(sizeof(UXNameAttribute), UXNameAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXParameterAttribute__uType* UXParameterAttribute__typeof()
{
    static ::uStaticStrong<UXParameterAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXParameterAttribute__uType*)::uAllocClassType(sizeof(UXParameterAttribute__uType), "Uno.UX.UXParameterAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Name", offsetof(UXParameterAttribute, Name));

    type->SetFields(1,
        ::uNewField("Name", NULL, offsetof(UXParameterAttribute, Name), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXParameterAttribute__New_1, 0, true, UXParameterAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXParameterAttribute___ObjInit_1(UXParameterAttribute* __this, ::uString* name)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Name = name;
}

UXParameterAttribute* UXParameterAttribute__New_1(::uStatic* __this, ::uString* name)
{
    UXParameterAttribute* inst = (UXParameterAttribute*)::uAllocObject(sizeof(UXParameterAttribute), UXParameterAttribute__typeof());
    inst->_ObjInit_1(name);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXPrimaryAttribute__uType* UXPrimaryAttribute__typeof()
{
    static ::uStaticStrong<UXPrimaryAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXPrimaryAttribute__uType*)::uAllocClassType(sizeof(UXPrimaryAttribute__uType), "Uno.UX.UXPrimaryAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXPrimaryAttribute__New_1, 0, true, UXPrimaryAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXPrimaryAttribute___ObjInit_1(UXPrimaryAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

UXPrimaryAttribute* UXPrimaryAttribute__New_1(::uStatic* __this)
{
    UXPrimaryAttribute* inst = (UXPrimaryAttribute*)::uAllocObject(sizeof(UXPrimaryAttribute), UXPrimaryAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXSourceFileNameAttribute__uType* UXSourceFileNameAttribute__typeof()
{
    static ::uStaticStrong<UXSourceFileNameAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXSourceFileNameAttribute__uType*)::uAllocClassType(sizeof(UXSourceFileNameAttribute__uType), "Uno.UX.UXSourceFileNameAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXSourceFileNameAttribute__New_1, 0, true, UXSourceFileNameAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXSourceFileNameAttribute___ObjInit_1(UXSourceFileNameAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

UXSourceFileNameAttribute* UXSourceFileNameAttribute__New_1(::uStatic* __this)
{
    UXSourceFileNameAttribute* inst = (UXSourceFileNameAttribute*)::uAllocObject(sizeof(UXSourceFileNameAttribute), UXSourceFileNameAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXStyleListAttribute__uType* UXStyleListAttribute__typeof()
{
    static ::uStaticStrong<UXStyleListAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXStyleListAttribute__uType*)::uAllocClassType(sizeof(UXStyleListAttribute__uType), "Uno.UX.UXStyleListAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "AddMethod", offsetof(UXStyleListAttribute, AddMethod));

    type->SetFields(1,
        ::uNewField("AddMethod", NULL, offsetof(UXStyleListAttribute, AddMethod), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXStyleListAttribute__New_1, 0, true, UXStyleListAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXStyleListAttribute___ObjInit_1(UXStyleListAttribute* __this, ::uString* addMethod)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->AddMethod = addMethod;
}

UXStyleListAttribute* UXStyleListAttribute__New_1(::uStatic* __this, ::uString* addMethod)
{
    UXStyleListAttribute* inst = (UXStyleListAttribute*)::uAllocObject(sizeof(UXStyleListAttribute), UXStyleListAttribute__typeof());
    inst->_ObjInit_1(addMethod);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXValueBindingAliasAttribute__uType* UXValueBindingAliasAttribute__typeof()
{
    static ::uStaticStrong<UXValueBindingAliasAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXValueBindingAliasAttribute__uType*)::uAllocClassType(sizeof(UXValueBindingAliasAttribute__uType), "Uno.UX.UXValueBindingAliasAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Alias", offsetof(UXValueBindingAliasAttribute, Alias));

    type->SetFields(1,
        ::uNewField("Alias", NULL, offsetof(UXValueBindingAliasAttribute, Alias), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXValueBindingAliasAttribute__New_1, 0, true, UXValueBindingAliasAttribute__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXValueBindingAliasAttribute___ObjInit_1(UXValueBindingAliasAttribute* __this, ::uString* alias)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Alias = alias;
}

UXValueBindingAliasAttribute* UXValueBindingAliasAttribute__New_1(::uStatic* __this, ::uString* alias)
{
    UXValueBindingAliasAttribute* inst = (UXValueBindingAliasAttribute*)::uAllocObject(sizeof(UXValueBindingAliasAttribute), UXValueBindingAliasAttribute__typeof());
    inst->_ObjInit_1(alias);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXValueBindingArgumentAttribute__uType* UXValueBindingArgumentAttribute__typeof()
{
    static ::uStaticStrong<UXValueBindingArgumentAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXValueBindingArgumentAttribute__uType*)::uAllocClassType(sizeof(UXValueBindingArgumentAttribute__uType), "Uno.UX.UXValueBindingArgumentAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXValueBindingArgumentAttribute__New_1, 0, true, UXValueBindingArgumentAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXValueBindingArgumentAttribute___ObjInit_1(UXValueBindingArgumentAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

UXValueBindingArgumentAttribute* UXValueBindingArgumentAttribute__New_1(::uStatic* __this)
{
    UXValueBindingArgumentAttribute* inst = (UXValueBindingArgumentAttribute*)::uAllocObject(sizeof(UXValueBindingArgumentAttribute), UXValueBindingArgumentAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXValueBindingTargetAttribute__uType* UXValueBindingTargetAttribute__typeof()
{
    static ::uStaticStrong<UXValueBindingTargetAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXValueBindingTargetAttribute__uType*)::uAllocClassType(sizeof(UXValueBindingTargetAttribute__uType), "Uno.UX.UXValueBindingTargetAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXValueBindingTargetAttribute__New_1, 0, true, UXValueBindingTargetAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXValueBindingTargetAttribute___ObjInit_1(UXValueBindingTargetAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

UXValueBindingTargetAttribute* UXValueBindingTargetAttribute__New_1(::uStatic* __this)
{
    UXValueBindingTargetAttribute* inst = (UXValueBindingTargetAttribute*)::uAllocObject(sizeof(UXValueBindingTargetAttribute), UXValueBindingTargetAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\Attributes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXValueChangedEventAttribute__uType* UXValueChangedEventAttribute__typeof()
{
    static ::uStaticStrong<UXValueChangedEventAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXValueChangedEventAttribute__uType*)::uAllocClassType(sizeof(UXValueChangedEventAttribute__uType), "Uno.UX.UXValueChangedEventAttribute", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "EventName", offsetof(UXValueChangedEventAttribute, EventName),
        "OriginSetterName", offsetof(UXValueChangedEventAttribute, OriginSetterName));

    type->SetFields(2,
        ::uNewField("EventName", NULL, offsetof(UXValueChangedEventAttribute, EventName), ::app::Uno::String__typeof()),
        ::uNewField("OriginSetterName", NULL, offsetof(UXValueChangedEventAttribute, OriginSetterName), ::app::Uno::String__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", UXValueChangedEventAttribute__New_1, 0, true, UXValueChangedEventAttribute__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void UXValueChangedEventAttribute___ObjInit_1(UXValueChangedEventAttribute* __this, ::uString* originSetterName, ::uString* eventName)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->OriginSetterName = originSetterName;
    __this->EventName = eventName;
}

UXValueChangedEventAttribute* UXValueChangedEventAttribute__New_1(::uStatic* __this, ::uString* originSetterName, ::uString* eventName)
{
    UXValueChangedEventAttribute* inst = (UXValueChangedEventAttribute*)::uAllocObject(sizeof(UXValueChangedEventAttribute), UXValueChangedEventAttribute__typeof());
    inst->_ObjInit_1(originSetterName, eventName);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__bool__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<bool>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__bool__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__char__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<char>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__char__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__double__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<double>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__double__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__float__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<float>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__float__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__float2__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<float2>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__float2__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__float3__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<float3>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__float3__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__float4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<float4>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__float4__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Animations_AnimationVariant__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Animations.AnimationVariant>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Animations_AnimationVariant__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Animations_Easing__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Animations.Easing>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Animations_Easing__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Animations_KeyframeInterpolation__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Animations.KeyframeInterpolation>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Animations_KeyframeInterpolation__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Animations_MixOp__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Animations.MixOp>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Animations_MixOp__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Drawing_BlendMode__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Drawing.BlendMode>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_BlendMode__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Drawing.Brush>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_Brush__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Drawing_DynamicBrush__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Drawing.DynamicBrush>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_DynamicBrush__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Drawing.GradientStop>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_GradientStop__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Drawing_LinearGradient__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Drawing.LinearGradient>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_LinearGradient__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Drawing_SolidColor__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Drawing.SolidColor>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_SolidColor__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Drawing_StaticBrush__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Drawing.StaticBrush>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Drawing_StaticBrush__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Elements.Alignment>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_Alignment__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Elements.CachingMode>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_CachingMode__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Elements.Element>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_Element__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Elements.HitTestMode>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_HitTestMode__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Elements.SizeUnit>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_SizeUnit__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Elements.StretchDirection>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_StretchDirection__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Elements.StretchMode>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_StretchMode__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Elements.StretchSizing>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_StretchSizing__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Elements.TextAlignment>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_TextAlignment__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Elements.TextWrapping>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_TextWrapping__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Elements.Visibility>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Elements_Visibility__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Font__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Font>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Font__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Gestures_Edge__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Gestures.Edge>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Gestures_Edge__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Gestures.ScrollDirections>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Gestures_ScrollDirections__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Layouts_Dock__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Layouts.Dock>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Layouts_Dock__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Layouts_FlowDirection__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Layouts.FlowDirection>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Layouts_FlowDirection__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Layouts_Metric__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Layouts.Metric>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Layouts_Metric__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Layouts.Orientation>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Layouts_Orientation__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Navigation_NavigationDirection__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationDirection>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_NavigationDirection__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Navigation_NavigationEdge__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationEdge>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_NavigationEdge__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Navigation_NavigationGotoMode__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationGotoMode>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_NavigationGotoMode__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Navigation_SnapTo__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Navigation.SnapTo>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_SnapTo__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Navigation_SwipeDirection__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Navigation.SwipeDirection>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_SwipeDirection__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Navigation_SwipeEnds__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Navigation.SwipeEnds>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Navigation_SwipeEnds__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Node>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Node__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Resources.ImageSource>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Resources_ImageSource__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Triggers_Actions_TriggerDirection__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Triggers.Actions.TriggerDirection>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Triggers_Actions_TriggerDirection__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Triggers.State>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Triggers_State__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Triggers_StateTransition__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Triggers.StateTransition>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Triggers_StateTransition__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Triggers_TriggerBypassMode__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Triggers.TriggerBypassMode>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Triggers_TriggerBypassMode__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__int__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<int>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__int__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__int2__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<int2>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__int2__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__int3__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<int3>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__int3__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__int4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<int4>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__int4__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__long__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<long>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__long__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__object__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<object>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__object__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__short__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<short>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__short__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__string__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<string>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__string__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Uno_EventArgs__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Uno.EventArgs>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Uno_EventArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Uno_Platform_iOS_StatusBarStyle__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Uno.Platform.iOS.StatusBarStyle>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Uno_Platform_iOS_StatusBarStyle__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Uno.UX.FileSource>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Uno_UX_FileSource__typeof());

    ::uRegisterType(type);
    return type;
}

}}}
