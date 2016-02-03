// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_GENERIC_EQUALS_IMPL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_GENERIC_EQUALS_IMPL_H__

#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Experimental { namespace Cache { struct DiskCacheEntry; } } }
namespace app { namespace Fuse { namespace Animations { struct Animator; } } }
namespace app { namespace Fuse { namespace Animations { struct Keyframe; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__bool; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__char; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__double; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__float; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__float2; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__float3; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__float4; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Animations_AnimationVariant; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Animations_Easing; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Animations_KeyframeInterpolation; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Animations_MixOp; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Drawing_BlendMode; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Drawing_Brush; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Drawing_DynamicBrush; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Drawing_GradientStop; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Drawing_LinearGradient; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Drawing_SolidColor; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Drawing_StaticBrush; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Elements_Alignment; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Elements_CachingMode; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Elements_Element; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Elements_HitTestMode; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Elements_SizeUnit; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Elements_StretchDirection; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Elements_StretchMode; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Elements_StretchSizing; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Elements_TextAlignment; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Elements_TextWrapping; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Elements_Visibility; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Font; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Gestures_Edge; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Gestures_ScrollDirections; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Layouts_Dock; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Layouts_FlowDirection; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Layouts_Metric; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Layouts_Orientation; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Navigation_NavigationDirection; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Navigation_NavigationEdge; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Navigation_NavigationGotoMode; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Navigation_SnapTo; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Navigation_SwipeDirection; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Navigation_SwipeEnds; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Node; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Resources_ImageSource; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Transform; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Triggers_Actions_TriggerDirection; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Triggers_State; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Triggers_StateTransition; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Triggers_TriggerBypassMode; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__int; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__int2; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__int3; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__int4; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__long; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__object; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__short; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__string; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Uno_EventArgs; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Uno_Platform_iOS_StatusBarStyle; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Uno_UX_FileSource; } } }
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct DefaultTextRenderer_FontKey; } } } }
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WordWrapperWord; } } } }
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WrappedLine; } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct LineCacheLine; } } } }
namespace app { namespace Fuse { namespace Controls { struct Control; } } }
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct Batch; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct Entry; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Internal { struct MultiBuffer_Field; } } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { namespace Effects { struct Effect; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Elements { struct ElementAtlas; } } }
namespace app { namespace Fuse { namespace Elements { struct ElementBatch; } } }
namespace app { namespace Fuse { namespace Elements { struct ElementBatchEntry; } } }
namespace app { namespace Fuse { namespace Entities { struct Component; } } }
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }
namespace app { namespace Fuse { namespace Entities { struct Entry; } } }
namespace app { namespace Fuse { namespace Entities { struct Material; } } }
namespace app { namespace Fuse { namespace Entities { struct Mesh; } } }
namespace app { namespace Fuse { namespace Input { struct Capturer; } } }
namespace app { namespace Fuse { namespace Input { struct Pointer_PELHolder; } } }
namespace app { namespace Fuse { namespace iOS { struct StatusBarConfig; } } }
namespace app { namespace Fuse { namespace Layouts { struct Column; } } }
namespace app { namespace Fuse { namespace Layouts { struct DefinitionBase_ParseDataItem; } } }
namespace app { namespace Fuse { namespace Layouts { struct Row; } } }
namespace app { namespace Fuse { namespace Physics { struct Body; } } }
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct Timer_Time; } } } }
namespace app { namespace Fuse { namespace Reactive { struct Case; } } }
namespace app { namespace Fuse { namespace Reactive { struct JavaScript; } } }
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }
namespace app { namespace Fuse { namespace Scripting { struct NativeMember; } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct TriggerAction; } } } }
namespace app { namespace Fuse { namespace Triggers { struct State; } } }
namespace app { namespace Fuse { struct Behavior; } }
namespace app { namespace Fuse { struct CacheFramebuffer; } }
namespace app { namespace Fuse { struct Font; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct RenderTargetEntry; } }
namespace app { namespace Fuse { struct Stage; } }
namespace app { namespace Fuse { struct Style; } }
namespace app { namespace Fuse { struct StyleProperty; } }
namespace app { namespace Fuse { struct Transform; } }
namespace app { namespace Fuse { struct UpdateListener; } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Variable; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct MessageFromClient; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct MessageToClient; } } } }
namespace app { namespace Outracks { namespace Simulator { struct Task__Outracks_Simulator_ISimulatorClient; } } }
namespace app { namespace Outracks { namespace Simulator { struct Task__Uno_Net_IPEndPoint__; } } }
namespace app { namespace Uno { namespace Collections { struct ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster; } } }
namespace app { namespace Uno { namespace Collections { struct ConcurrentCollection1_ModItem__Uno_EventHandler; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type; } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct BitmapFont_CharPair; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelDrawable; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelNode; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameter__float4x4; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelSkin; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct SkinBone; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct SkinDrawable; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct VertexInfluence; } } } }
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float__float; } } } }
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float2__float2; } } } }
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float3__float3; } } } }
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float4__float4; } } } }
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float4x4__float4x4; } } } }
namespace app { namespace Uno { namespace Data { namespace Json { struct Value; } } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlAttribute; } } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlAttributeHandle; } } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlLinkedNode; } } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlNodeHandle; } } } }
namespace app { namespace Uno { namespace Diagnostics { struct ProfileEvent; } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct FormatStringToken; } } } } }
namespace app { namespace Uno { namespace Threading { struct Promise__bool; } } }
namespace app { namespace Uno { namespace Threading { struct Promise__Fuse_Camera_PictureResult; } } }
namespace app { namespace Uno { namespace Threading { struct Promise__string; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }
namespace app { namespace Uno { namespace UX { struct Resource; } } }
namespace app { namespace Uno { struct Byte2; } }
namespace app { namespace Uno { struct Byte4; } }
namespace app { namespace Uno { struct CharPunctuationChecker_PunctuationRange; } }
namespace app { namespace Uno { struct Exception; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float2x2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float3x3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Int2; } }
namespace app { namespace Uno { struct Int3; } }
namespace app { namespace Uno { struct Int4; } }
namespace app { namespace Uno { struct SByte2; } }
namespace app { namespace Uno { struct SByte4; } }
namespace app { namespace Uno { struct Short2; } }
namespace app { namespace Uno { struct Short4; } }
namespace app { namespace Uno { struct UShort2; } }
namespace app { namespace Uno { struct UShort4; } }
namespace app { struct HashableWeakReference; }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

struct GenericEqualsImpl__uType : ::uClassType
{
};

GenericEqualsImpl__uType* GenericEqualsImpl__typeof();

bool GenericEqualsImpl__Equals__Android_android_view_View(::uStatic* __this, ::app::Android::android::view::View* left_, ::app::Android::android::view::View* right_);
bool GenericEqualsImpl__Equals__byte(::uStatic* __this, ::uByte left_, ::uByte right_);
bool GenericEqualsImpl__Equals__byte__(::uStatic* __this, ::uArray* left_, ::uArray* right_);
bool GenericEqualsImpl__Equals__byte2(::uStatic* __this, ::app::Uno::Byte2 left_, ::app::Uno::Byte2 right_);
bool GenericEqualsImpl__Equals__byte4(::uStatic* __this, ::app::Uno::Byte4 left_, ::app::Uno::Byte4 right_);
bool GenericEqualsImpl__Equals__char(::uStatic* __this, ::uChar left_, ::uChar right_);
bool GenericEqualsImpl__Equals__Experimental_Cache_DiskCacheEntry(::uStatic* __this, ::app::Experimental::Cache::DiskCacheEntry* left_, ::app::Experimental::Cache::DiskCacheEntry* right_);
bool GenericEqualsImpl__Equals__float2(::uStatic* __this, ::app::Uno::Float2 left_, ::app::Uno::Float2 right_);
bool GenericEqualsImpl__Equals__float2x2(::uStatic* __this, ::app::Uno::Float2x2 left_, ::app::Uno::Float2x2 right_);
bool GenericEqualsImpl__Equals__float3(::uStatic* __this, ::app::Uno::Float3 left_, ::app::Uno::Float3 right_);
bool GenericEqualsImpl__Equals__float3x3(::uStatic* __this, ::app::Uno::Float3x3 left_, ::app::Uno::Float3x3 right_);
bool GenericEqualsImpl__Equals__float4(::uStatic* __this, ::app::Uno::Float4 left_, ::app::Uno::Float4 right_);
bool GenericEqualsImpl__Equals__float4x4(::uStatic* __this, ::app::Uno::Float4x4 left_, ::app::Uno::Float4x4 right_);
bool GenericEqualsImpl__Equals__framebuffer(::uStatic* __this, ::app::Uno::Graphics::Framebuffer* left_, ::app::Uno::Graphics::Framebuffer* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_Animator(::uStatic* __this, ::app::Fuse::Animations::Animator* left_, ::app::Fuse::Animations::Animator* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_IMixerMaster(::uStatic* __this, ::uObject* left_, ::uObject* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_Keyframe(::uStatic* __this, ::app::Fuse::Animations::Keyframe* left_, ::app::Fuse::Animations::Keyframe* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_bool_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__bool* left_, ::app::Fuse::Animations::MixerHandle__bool* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_char_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__char* left_, ::app::Fuse::Animations::MixerHandle__char* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_double_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__double* left_, ::app::Fuse::Animations::MixerHandle__double* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_float_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float* left_, ::app::Fuse::Animations::MixerHandle__float* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_float2_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float2* left_, ::app::Fuse::Animations::MixerHandle__float2* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_float3_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float3* left_, ::app::Fuse::Animations::MixerHandle__float3* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_float4_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float4* left_, ::app::Fuse::Animations::MixerHandle__float4* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Animations_AnimationVariant* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Animations_AnimationVariant* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Animations_Easing_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Animations_Easing* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Animations_Easing* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Animations_KeyframeInterpolation* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Animations_KeyframeInterpolation* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Animations_MixOp_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Animations_MixOp* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Animations_MixOp* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_BlendMode* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Drawing_Brush_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_Brush* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_Brush* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_DynamicBrush* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_DynamicBrush* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Drawing_LinearGradient_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_LinearGradient* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_LinearGradient* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Drawing_SolidColor_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_SolidColor* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_SolidColor* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Drawing_StaticBrush_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_StaticBrush* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_StaticBrush* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Elements_Alignment_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Alignment* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Alignment* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Elements_CachingMode_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_CachingMode* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_CachingMode* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Elements_Element_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Element* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Elements_HitTestMode_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_HitTestMode* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_HitTestMode* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Elements_SizeUnit_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_SizeUnit* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_SizeUnit* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Elements_StretchDirection_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchDirection* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchDirection* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchMode* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchMode* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Elements_StretchSizing_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchSizing* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_StretchSizing* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Elements_TextAlignment_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextAlignment* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextAlignment* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Elements_TextWrapping_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextWrapping* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextWrapping* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Font_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Font* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Font* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Gestures_ScrollDirections_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_ScrollDirections* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_ScrollDirections* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_FlowDirection* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Metric* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationDirection_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationDirection* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationDirection* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationEdge* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationGotoMode_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationGotoMode* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationGotoMode* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Navigation_SnapTo_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SnapTo* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SnapTo* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeDirection* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeEnds_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeEnds* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_SwipeEnds* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Node_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Node* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Node* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Transform_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_Actions_TriggerDirection* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_Actions_TriggerDirection* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Triggers_State_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Triggers_StateTransition_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_StateTransition* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_StateTransition* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_TriggerBypassMode* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_TriggerBypassMode* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_int_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__int* left_, ::app::Fuse::Animations::MixerHandle__int* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_int2_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__int2* left_, ::app::Fuse::Animations::MixerHandle__int2* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_int3_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__int3* left_, ::app::Fuse::Animations::MixerHandle__int3* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_int4_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__int4* left_, ::app::Fuse::Animations::MixerHandle__int4* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_long_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__long* left_, ::app::Fuse::Animations::MixerHandle__long* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_object_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__object* left_, ::app::Fuse::Animations::MixerHandle__object* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_short_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__short* left_, ::app::Fuse::Animations::MixerHandle__short* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_string_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__string* left_, ::app::Fuse::Animations::MixerHandle__string* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Uno_EventArgs_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Uno_EventArgs* left_, ::app::Fuse::Animations::MixerHandle__Uno_EventArgs* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle* left_, ::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle* right_);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Uno_UX_FileSource_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* left_, ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* right_);
bool GenericEqualsImpl__Equals__Fuse_Behavior(::uStatic* __this, ::app::Fuse::Behavior* left_, ::app::Fuse::Behavior* right_);
bool GenericEqualsImpl__Equals__Fuse_CacheFramebuffer(::uStatic* __this, ::app::Fuse::CacheFramebuffer* left_, ::app::Fuse::CacheFramebuffer* right_);
bool GenericEqualsImpl__Equals__Fuse_Controls_Control(::uStatic* __this, ::app::Fuse::Controls::Control* left_, ::app::Fuse::Controls::Control* right_);
bool GenericEqualsImpl__Equals__Fuse_Controls_Internal_DefaultTextRenderer_FontKey(::uStatic* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* left_, ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* right_);
bool GenericEqualsImpl__Equals__Fuse_Controls_Internal_WordWrapperWord(::uStatic* __this, ::app::Fuse::Controls::Internal::WordWrapperWord* left_, ::app::Fuse::Controls::Internal::WordWrapperWord* right_);
bool GenericEqualsImpl__Equals__Fuse_Controls_Internal_WrappedLine(::uStatic* __this, ::app::Fuse::Controls::Internal::WrappedLine* left_, ::app::Fuse::Controls::Internal::WrappedLine* right_);
bool GenericEqualsImpl__Equals__Fuse_Controls_TextEdit_LineCacheLine(::uStatic* __this, ::app::Fuse::Controls::TextEdit::LineCacheLine* left_, ::app::Fuse::Controls::TextEdit::LineCacheLine* right_);
bool GenericEqualsImpl__Equals__Fuse_Drawing_Batching_Batch(::uStatic* __this, ::app::Fuse::Drawing::Batching::Batch* left_, ::app::Fuse::Drawing::Batching::Batch* right_);
bool GenericEqualsImpl__Equals__Fuse_Drawing_Batching_Entry(::uStatic* __this, ::app::Fuse::Drawing::Batching::Entry* left_, ::app::Fuse::Drawing::Batching::Entry* right_);
bool GenericEqualsImpl__Equals__Fuse_Drawing_Brush(::uStatic* __this, ::app::Fuse::Drawing::Brush* left_, ::app::Fuse::Drawing::Brush* right_);
bool GenericEqualsImpl__Equals__Fuse_Drawing_Contour(::uStatic* __this, ::app::Fuse::Drawing::Contour* left_, ::app::Fuse::Drawing::Contour* right_);
bool GenericEqualsImpl__Equals__Fuse_Drawing_GradientStop(::uStatic* __this, ::app::Fuse::Drawing::GradientStop* left_, ::app::Fuse::Drawing::GradientStop* right_);
bool GenericEqualsImpl__Equals__Fuse_Drawing_Internal_MultiBuffer_Field(::uStatic* __this, ::app::Fuse::Drawing::Internal::MultiBuffer_Field* left_, ::app::Fuse::Drawing::Internal::MultiBuffer_Field* right_);
bool GenericEqualsImpl__Equals__Fuse_Drawing_PathGeometry(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* left_, ::app::Fuse::Drawing::PathGeometry* right_);
bool GenericEqualsImpl__Equals__Fuse_Drawing_Stroke(::uStatic* __this, ::app::Fuse::Drawing::Stroke* left_, ::app::Fuse::Drawing::Stroke* right_);
bool GenericEqualsImpl__Equals__Fuse_Effects_Effect(::uStatic* __this, ::app::Fuse::Effects::Effect* left_, ::app::Fuse::Effects::Effect* right_);
bool GenericEqualsImpl__Equals__Fuse_Elements_Element(::uStatic* __this, ::app::Fuse::Elements::Element* left_, ::app::Fuse::Elements::Element* right_);
bool GenericEqualsImpl__Equals__Fuse_Elements_ElementAtlas(::uStatic* __this, ::app::Fuse::Elements::ElementAtlas* left_, ::app::Fuse::Elements::ElementAtlas* right_);
bool GenericEqualsImpl__Equals__Fuse_Elements_ElementBatch(::uStatic* __this, ::app::Fuse::Elements::ElementBatch* left_, ::app::Fuse::Elements::ElementBatch* right_);
bool GenericEqualsImpl__Equals__Fuse_Elements_ElementBatchEntry(::uStatic* __this, ::app::Fuse::Elements::ElementBatchEntry* left_, ::app::Fuse::Elements::ElementBatchEntry* right_);
bool GenericEqualsImpl__Equals__Fuse_Elements_IElementBatchDrawable(::uStatic* __this, ::uObject* left_, ::uObject* right_);
bool GenericEqualsImpl__Equals__Fuse_Entities_Component(::uStatic* __this, ::app::Fuse::Entities::Component* left_, ::app::Fuse::Entities::Component* right_);
bool GenericEqualsImpl__Equals__Fuse_Entities_Entity(::uStatic* __this, ::app::Fuse::Entities::Entity* left_, ::app::Fuse::Entities::Entity* right_);
bool GenericEqualsImpl__Equals__Fuse_Entities_Entry(::uStatic* __this, ::app::Fuse::Entities::Entry left_, ::app::Fuse::Entities::Entry right_);
bool GenericEqualsImpl__Equals__Fuse_Entities_Material(::uStatic* __this, ::app::Fuse::Entities::Material* left_, ::app::Fuse::Entities::Material* right_);
bool GenericEqualsImpl__Equals__Fuse_Entities_Mesh(::uStatic* __this, ::app::Fuse::Entities::Mesh* left_, ::app::Fuse::Entities::Mesh* right_);
bool GenericEqualsImpl__Equals__Fuse_Font(::uStatic* __this, ::app::Fuse::Font* left_, ::app::Fuse::Font* right_);
bool GenericEqualsImpl__Equals__Fuse_IFlush(::uStatic* __this, ::uObject* left_, ::uObject* right_);
bool GenericEqualsImpl__Equals__Fuse_Input_Capturer(::uStatic* __this, ::app::Fuse::Input::Capturer* left_, ::app::Fuse::Input::Capturer* right_);
bool GenericEqualsImpl__Equals__Fuse_Input_FocusGainedHandler(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Fuse_Input_FocusLostHandler(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Fuse_Input_IsFocusableChangedHandler(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Fuse_Input_KeyPressedHandler(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Fuse_Input_KeyReleasedHandler(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Fuse_Input_Pointer_PELHolder(::uStatic* __this, ::app::Fuse::Input::Pointer_PELHolder* left_, ::app::Fuse::Input::Pointer_PELHolder* right_);
bool GenericEqualsImpl__Equals__Fuse_Input_PointerEnteredHandler(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Fuse_Input_PointerLeftHandler(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Fuse_Input_PointerMovedHandler(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Fuse_Input_PointerPressedHandler(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Fuse_Input_PointerReleasedHandler(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Fuse_Input_PointerWheelMovedHandler(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Fuse_Input_TextEnteredHandler(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Fuse_iOS_StatusBarConfig(::uStatic* __this, ::app::Fuse::iOS::StatusBarConfig* left_, ::app::Fuse::iOS::StatusBarConfig* right_);
bool GenericEqualsImpl__Equals__Fuse_IViewport(::uStatic* __this, ::uObject* left_, ::uObject* right_);
bool GenericEqualsImpl__Equals__Fuse_Layouts_Column(::uStatic* __this, ::app::Fuse::Layouts::Column* left_, ::app::Fuse::Layouts::Column* right_);
bool GenericEqualsImpl__Equals__Fuse_Layouts_DefinitionBase_ParseDataItem(::uStatic* __this, ::app::Fuse::Layouts::DefinitionBase_ParseDataItem left_, ::app::Fuse::Layouts::DefinitionBase_ParseDataItem right_);
bool GenericEqualsImpl__Equals__Fuse_Layouts_Row(::uStatic* __this, ::app::Fuse::Layouts::Row* left_, ::app::Fuse::Layouts::Row* right_);
bool GenericEqualsImpl__Equals__Fuse_Navigation_INavigationAnimator(::uStatic* __this, ::uObject* left_, ::uObject* right_);
bool GenericEqualsImpl__Equals__Fuse_Navigation_IPageResourceBinding(::uStatic* __this, ::uObject* left_, ::uObject* right_);
bool GenericEqualsImpl__Equals__Fuse_Navigation_NavigationEdge(::uStatic* __this, int left_, int right_);
bool GenericEqualsImpl__Equals__Fuse_Node(::uStatic* __this, ::app::Fuse::Node* left_, ::app::Fuse::Node* right_);
bool GenericEqualsImpl__Equals__Fuse_Physics_Body(::uStatic* __this, ::app::Fuse::Physics::Body* left_, ::app::Fuse::Physics::Body* right_);
bool GenericEqualsImpl__Equals__Fuse_Physics_IRule(::uStatic* __this, ::uObject* left_, ::uObject* right_);
bool GenericEqualsImpl__Equals__Fuse_Reactive_Case(::uStatic* __this, ::app::Fuse::Reactive::Case* left_, ::app::Fuse::Reactive::Case* right_);
bool GenericEqualsImpl__Equals__Fuse_Reactive_FuseJS_Timer_Time(::uStatic* __this, ::app::Fuse::Reactive::FuseJS::Timer_Time* left_, ::app::Fuse::Reactive::FuseJS::Timer_Time* right_);
bool GenericEqualsImpl__Equals__Fuse_Reactive_JavaScript(::uStatic* __this, ::app::Fuse::Reactive::JavaScript* left_, ::app::Fuse::Reactive::JavaScript* right_);
bool GenericEqualsImpl__Equals__Fuse_RenderTargetEntry(::uStatic* __this, ::app::Fuse::RenderTargetEntry* left_, ::app::Fuse::RenderTargetEntry* right_);
bool GenericEqualsImpl__Equals__Fuse_Resources_ImageSource(::uStatic* __this, ::app::Fuse::Resources::ImageSource* left_, ::app::Fuse::Resources::ImageSource* right_);
bool GenericEqualsImpl__Equals__Fuse_Resources_IMemoryResource(::uStatic* __this, ::uObject* left_, ::uObject* right_);
bool GenericEqualsImpl__Equals__Fuse_Resources_ISoftDisposable(::uStatic* __this, ::uObject* left_, ::uObject* right_);
bool GenericEqualsImpl__Equals__Fuse_Scripting_INameListener(::uStatic* __this, ::uObject* left_, ::uObject* right_);
bool GenericEqualsImpl__Equals__Fuse_Scripting_NativeMember(::uStatic* __this, ::app::Fuse::Scripting::NativeMember* left_, ::app::Fuse::Scripting::NativeMember* right_);
bool GenericEqualsImpl__Equals__Fuse_Stage(::uStatic* __this, ::app::Fuse::Stage* left_, ::app::Fuse::Stage* right_);
bool GenericEqualsImpl__Equals__Fuse_Style(::uStatic* __this, ::app::Fuse::Style* left_, ::app::Fuse::Style* right_);
bool GenericEqualsImpl__Equals__Fuse_StyleProperty(::uStatic* __this, ::app::Fuse::StyleProperty* left_, ::app::Fuse::StyleProperty* right_);
bool GenericEqualsImpl__Equals__Fuse_Transform(::uStatic* __this, ::app::Fuse::Transform* left_, ::app::Fuse::Transform* right_);
bool GenericEqualsImpl__Equals__Fuse_Triggers_Actions_TriggerAction(::uStatic* __this, ::app::Fuse::Triggers::Actions::TriggerAction* left_, ::app::Fuse::Triggers::Actions::TriggerAction* right_);
bool GenericEqualsImpl__Equals__Fuse_Triggers_State(::uStatic* __this, ::app::Fuse::Triggers::State* left_, ::app::Fuse::Triggers::State* right_);
bool GenericEqualsImpl__Equals__Fuse_UpdateListener(::uStatic* __this, ::app::Fuse::UpdateListener* left_, ::app::Fuse::UpdateListener* right_);
bool GenericEqualsImpl__Equals__HashableWeakReference(::uStatic* __this, ::app::HashableWeakReference* left_, ::app::HashableWeakReference* right_);
bool GenericEqualsImpl__Equals__int(::uStatic* __this, int left_, int right_);
bool GenericEqualsImpl__Equals__int2(::uStatic* __this, ::app::Uno::Int2 left_, ::app::Uno::Int2 right_);
bool GenericEqualsImpl__Equals__int3(::uStatic* __this, ::app::Uno::Int3 left_, ::app::Uno::Int3 right_);
bool GenericEqualsImpl__Equals__int4(::uStatic* __this, ::app::Uno::Int4 left_, ::app::Uno::Int4 right_);
bool GenericEqualsImpl__Equals__object(::uStatic* __this, ::uObject* left_, ::uObject* right_);
bool GenericEqualsImpl__Equals__object__(::uStatic* __this, ::uArray* left_, ::uArray* right_);
bool GenericEqualsImpl__Equals__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* left_, ::app::Outracks::Simulator::Bytecode::TypeName* right_);
bool GenericEqualsImpl__Equals__Outracks_Simulator_Bytecode_Variable(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Variable* left_, ::app::Outracks::Simulator::Bytecode::Variable* right_);
bool GenericEqualsImpl__Equals__Outracks_Simulator_Protocol_MessageFromClient(::uStatic* __this, ::app::Outracks::Simulator::Protocol::MessageFromClient* left_, ::app::Outracks::Simulator::Protocol::MessageFromClient* right_);
bool GenericEqualsImpl__Equals__Outracks_Simulator_Protocol_MessageToClient(::uStatic* __this, ::app::Outracks::Simulator::Protocol::MessageToClient* left_, ::app::Outracks::Simulator::Protocol::MessageToClient* right_);
bool GenericEqualsImpl__Equals__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_(::uStatic* __this, ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* left_, ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* right_);
bool GenericEqualsImpl__Equals__Outracks_Simulator_Task_Uno_Net_IPEndPoint___(::uStatic* __this, ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* left_, ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* right_);
bool GenericEqualsImpl__Equals__sbyte2(::uStatic* __this, ::app::Uno::SByte2 left_, ::app::Uno::SByte2 right_);
bool GenericEqualsImpl__Equals__sbyte4(::uStatic* __this, ::app::Uno::SByte4 left_, ::app::Uno::SByte4 right_);
bool GenericEqualsImpl__Equals__short2(::uStatic* __this, ::app::Uno::Short2 left_, ::app::Uno::Short2 right_);
bool GenericEqualsImpl__Equals__short4(::uStatic* __this, ::app::Uno::Short4 left_, ::app::Uno::Short4 right_);
bool GenericEqualsImpl__Equals__string(::uStatic* __this, ::uString* left_, ::uString* right_);
bool GenericEqualsImpl__Equals__Uno_Action(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Uno_Action_bool_(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Uno_Action_Fuse_Camera_PictureResult_(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Uno_Action_string_(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Uno_Action_Uno_Exception_(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Uno_CharPunctuationChecker_PunctuationRange(::uStatic* __this, ::app::Uno::CharPunctuationChecker_PunctuationRange* left_, ::app::Uno::CharPunctuationChecker_PunctuationRange* right_);
bool GenericEqualsImpl__Equals__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_(::uStatic* __this, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster left_, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster right_);
bool GenericEqualsImpl__Equals__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_(::uStatic* __this, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler left_, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler right_);
bool GenericEqualsImpl__Equals__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_(::uStatic* __this, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* left_, ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* right_);
bool GenericEqualsImpl__Equals__Uno_Content_Fonts_BitmapFont_CharPair(::uStatic* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair left_, ::app::Uno::Content::Fonts::BitmapFont_CharPair right_);
bool GenericEqualsImpl__Equals__Uno_Content_Models_ModelDrawable(::uStatic* __this, ::app::Uno::Content::Models::ModelDrawable* left_, ::app::Uno::Content::Models::ModelDrawable* right_);
bool GenericEqualsImpl__Equals__Uno_Content_Models_ModelNode(::uStatic* __this, ::app::Uno::Content::Models::ModelNode* left_, ::app::Uno::Content::Models::ModelNode* right_);
bool GenericEqualsImpl__Equals__Uno_Content_Models_ModelParameter_float4x4_(::uStatic* __this, ::app::Uno::Content::Models::ModelParameter__float4x4* left_, ::app::Uno::Content::Models::ModelParameter__float4x4* right_);
bool GenericEqualsImpl__Equals__Uno_Content_Models_ModelSkin(::uStatic* __this, ::app::Uno::Content::Models::ModelSkin* left_, ::app::Uno::Content::Models::ModelSkin* right_);
bool GenericEqualsImpl__Equals__Uno_Content_Models_SkinBone(::uStatic* __this, ::app::Uno::Content::Models::SkinBone* left_, ::app::Uno::Content::Models::SkinBone* right_);
bool GenericEqualsImpl__Equals__Uno_Content_Models_SkinDrawable(::uStatic* __this, ::app::Uno::Content::Models::SkinDrawable* left_, ::app::Uno::Content::Models::SkinDrawable* right_);
bool GenericEqualsImpl__Equals__Uno_Content_Models_VertexInfluence(::uStatic* __this, ::app::Uno::Content::Models::VertexInfluence* left_, ::app::Uno::Content::Models::VertexInfluence* right_);
bool GenericEqualsImpl__Equals__Uno_Content_Splines_KeyframedSpline2_Key_float_float_(::uStatic* __this, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float left_, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float right_);
bool GenericEqualsImpl__Equals__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_(::uStatic* __this, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2 left_, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2 right_);
bool GenericEqualsImpl__Equals__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_(::uStatic* __this, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3 left_, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3 right_);
bool GenericEqualsImpl__Equals__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_(::uStatic* __this, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4 left_, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4 right_);
bool GenericEqualsImpl__Equals__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_(::uStatic* __this, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4 left_, ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4 right_);
bool GenericEqualsImpl__Equals__Uno_Data_Json_Value(::uStatic* __this, ::app::Uno::Data::Json::Value* left_, ::app::Uno::Data::Json::Value* right_);
bool GenericEqualsImpl__Equals__Uno_Data_Xml_XmlAttribute(::uStatic* __this, ::app::Uno::Data::Xml::XmlAttribute* left_, ::app::Uno::Data::Xml::XmlAttribute* right_);
bool GenericEqualsImpl__Equals__Uno_Data_Xml_XmlAttributeHandle(::uStatic* __this, ::app::Uno::Data::Xml::XmlAttributeHandle* left_, ::app::Uno::Data::Xml::XmlAttributeHandle* right_);
bool GenericEqualsImpl__Equals__Uno_Data_Xml_XmlLinkedNode(::uStatic* __this, ::app::Uno::Data::Xml::XmlLinkedNode* left_, ::app::Uno::Data::Xml::XmlLinkedNode* right_);
bool GenericEqualsImpl__Equals__Uno_Data_Xml_XmlNodeHandle(::uStatic* __this, ::app::Uno::Data::Xml::XmlNodeHandle* left_, ::app::Uno::Data::Xml::XmlNodeHandle* right_);
bool GenericEqualsImpl__Equals__Uno_Diagnostics_ProfileEvent(::uStatic* __this, ::app::Uno::Diagnostics::ProfileEvent* left_, ::app::Uno::Diagnostics::ProfileEvent* right_);
bool GenericEqualsImpl__Equals__Uno_EventHandler(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
bool GenericEqualsImpl__Equals__Uno_Exception(::uStatic* __this, ::app::Uno::Exception* left_, ::app::Uno::Exception* right_);
bool GenericEqualsImpl__Equals__Uno_Graphics_PolygonFace(::uStatic* __this, int left_, int right_);
bool GenericEqualsImpl__Equals__Uno_Net_Http_HttpMessageHandlerRequest(::uStatic* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* left_, ::app::Uno::Net::Http::HttpMessageHandlerRequest* right_);
bool GenericEqualsImpl__Equals__Uno_Platform_Key(::uStatic* __this, int left_, int right_);
bool GenericEqualsImpl__Equals__Uno_Reflection_CppField(::uStatic* __this, ::uField* left_, ::uField* right_);
bool GenericEqualsImpl__Equals__Uno_Reflection_CppFunction(::uStatic* __this, ::uFunction* left_, ::uFunction* right_);
bool GenericEqualsImpl__Equals__Uno_Runtime_Implementation_Internal_FormatStringToken(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::FormatStringToken* left_, ::app::Uno::Runtime::Implementation::Internal::FormatStringToken* right_);
bool GenericEqualsImpl__Equals__Uno_Threading_Promise_bool_(::uStatic* __this, ::app::Uno::Threading::Promise__bool* left_, ::app::Uno::Threading::Promise__bool* right_);
bool GenericEqualsImpl__Equals__Uno_Threading_Promise_Fuse_Camera_PictureResult_(::uStatic* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* left_, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* right_);
bool GenericEqualsImpl__Equals__Uno_Threading_Promise_string_(::uStatic* __this, ::app::Uno::Threading::Promise__string* left_, ::app::Uno::Threading::Promise__string* right_);
bool GenericEqualsImpl__Equals__Uno_Type(::uStatic* __this, ::uType* left_, ::uType* right_);
bool GenericEqualsImpl__Equals__Uno_UX_FileSource(::uStatic* __this, ::app::Uno::UX::FileSource* left_, ::app::Uno::UX::FileSource* right_);
bool GenericEqualsImpl__Equals__Uno_UX_IFactory(::uStatic* __this, ::uObject* left_, ::uObject* right_);
bool GenericEqualsImpl__Equals__Uno_UX_ITemplate(::uStatic* __this, ::uObject* left_, ::uObject* right_);
bool GenericEqualsImpl__Equals__Uno_UX_Resource(::uStatic* __this, ::app::Uno::UX::Resource* left_, ::app::Uno::UX::Resource* right_);
bool GenericEqualsImpl__Equals__ushort2(::uStatic* __this, ::app::Uno::UShort2 left_, ::app::Uno::UShort2 right_);
bool GenericEqualsImpl__Equals__ushort4(::uStatic* __this, ::app::Uno::UShort4 left_, ::app::Uno::UShort4 right_);

}}}}


#endif
