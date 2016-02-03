// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_ARRAY_H__
#define __APP_UNO_ARRAY_H__

#include <Uno.h>
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
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct RenderTargetEntry; } }
namespace app { namespace Fuse { struct Stage; } }
namespace app { namespace Fuse { struct Style; } }
namespace app { namespace Fuse { struct StyleProperty; } }
namespace app { namespace Fuse { struct Transform; } }
namespace app { namespace Fuse { struct UpdateListener; } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct BindVariable; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Expression; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Parameter; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Statement; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct ExceptionInfo; } } } }
namespace app { namespace Outracks { namespace Simulator { struct Task__Outracks_Simulator_ISimulatorClient; } } }
namespace app { namespace Outracks { namespace Simulator { struct Task__Uno_Net_IPEndPoint__; } } }
namespace app { namespace Uno { namespace Collections { struct ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster; } } }
namespace app { namespace Uno { namespace Collections { struct ConcurrentCollection1_ModItem__Uno_EventHandler; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type; } } }
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
namespace app { namespace Uno { namespace UX { struct FileSource; } } }
namespace app { namespace Uno { namespace UX { struct Resource; } } }
namespace app { namespace Uno { struct CharPunctuationChecker_PunctuationRange; } }
namespace app { namespace Uno { struct Exception; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Int4; } }

namespace app {
namespace Uno {

struct Array__uType : ::uClassType
{
};

Array__uType* Array__typeof();

void Array__Copy__byte(::uStatic* __this, ::uArray* sourceArray, ::uArray* destinationArray, int length);
void Array__Copy__byte_1(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void Array__Copy__char(::uStatic* __this, ::uArray* sourceArray, ::uArray* destinationArray, int length);
void Array__Copy__char_1(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void Array__Copy__Outracks_Simulator_Bytecode_BindVariable(::uStatic* __this, ::uArray* sourceArray, ::uArray* destinationArray, int length);
void Array__Copy__Outracks_Simulator_Bytecode_Expression(::uStatic* __this, ::uArray* sourceArray, ::uArray* destinationArray, int length);
void Array__Copy__Outracks_Simulator_Bytecode_Parameter(::uStatic* __this, ::uArray* sourceArray, ::uArray* destinationArray, int length);
void Array__Copy__Outracks_Simulator_Bytecode_Statement(::uStatic* __this, ::uArray* sourceArray, ::uArray* destinationArray, int length);
void Array__Copy__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this, ::uArray* sourceArray, ::uArray* destinationArray, int length);
void Array__Copy__Outracks_Simulator_Protocol_ExceptionInfo(::uStatic* __this, ::uArray* sourceArray, ::uArray* destinationArray, int length);
void Array__Copy__string(::uStatic* __this, ::uArray* sourceArray, ::uArray* destinationArray, int length);
void Array__Copy__Uno_Exception(::uStatic* __this, ::uArray* sourceArray, ::uArray* destinationArray, int length);
void Array__Sort__byte(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__byte__(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__char(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Experimental_Cache_DiskCacheEntry(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__float2(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__float3(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__float4(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__framebuffer(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_Animator(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_IMixerMaster(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_Keyframe(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_bool_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_char_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_double_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_float_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_float2_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_float3_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_float4_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Animations_Easing_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Animations_KeyframeInterpolation_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Animations_MixOp_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Drawing_BlendMode_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Drawing_Brush_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Drawing_DynamicBrush_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Drawing_LinearGradient_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Drawing_SolidColor_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Drawing_StaticBrush_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Elements_Alignment_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Elements_CachingMode_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Elements_Element_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Elements_HitTestMode_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Elements_SizeUnit_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Elements_StretchDirection_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Elements_StretchMode_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Elements_StretchSizing_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Elements_TextAlignment_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Elements_TextWrapping_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Font_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Gestures_ScrollDirections_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Layouts_FlowDirection_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Layouts_Metric_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationDirection_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationEdge_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationGotoMode_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Navigation_SnapTo_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeDirection_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Navigation_SwipeEnds_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Node_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Transform_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Triggers_Actions_TriggerDirection_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Triggers_State_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Triggers_StateTransition_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Fuse_Triggers_TriggerBypassMode_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_int_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_int2_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_int3_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_int4_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_long_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_object_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_short_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_string_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Uno_EventArgs_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Animations_MixerHandle_Uno_UX_FileSource_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Behavior(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_CacheFramebuffer(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Controls_Control(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Controls_Internal_WordWrapperWord(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Controls_Internal_WrappedLine(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Controls_TextEdit_LineCacheLine(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Drawing_Batching_Batch(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Drawing_Batching_Entry(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Drawing_Brush(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Drawing_Contour(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Drawing_GradientStop(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Drawing_Internal_MultiBuffer_Field(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Drawing_PathGeometry(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Drawing_Stroke(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Effects_Effect(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Elements_Element(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Elements_ElementAtlas(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Elements_ElementBatch(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Elements_ElementBatchEntry(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Elements_IElementBatchDrawable(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Entities_Component(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Entities_Entity(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Entities_Entry(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Input_Capturer(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Input_FocusGainedHandler(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Input_FocusLostHandler(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Input_IsFocusableChangedHandler(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Input_KeyPressedHandler(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Input_KeyReleasedHandler(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Input_Pointer_PELHolder(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Input_PointerEnteredHandler(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Input_PointerLeftHandler(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Input_PointerMovedHandler(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Input_PointerPressedHandler(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Input_PointerReleasedHandler(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Input_PointerWheelMovedHandler(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Input_TextEnteredHandler(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_iOS_StatusBarConfig(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_IViewport(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Layouts_Column(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Layouts_DefinitionBase_ParseDataItem(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Layouts_Row(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Navigation_INavigationAnimator(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Navigation_IPageResourceBinding(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Node(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Physics_Body(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Physics_IRule(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Reactive_Case(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Reactive_FuseJS_Timer_Time(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Reactive_JavaScript(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_RenderTargetEntry(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Resources_ImageSource(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Resources_IMemoryResource(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Resources_ISoftDisposable(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Scripting_INameListener(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Scripting_NativeMember(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Stage(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Style(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_StyleProperty(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Transform(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Triggers_Actions_TriggerAction(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_Triggers_State(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Fuse_UpdateListener(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__int(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__int4(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__object(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Outracks_Simulator_Task_Uno_Net_IPEndPoint___(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__string(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Action(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_CharPunctuationChecker_PunctuationRange(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Collections_Dictionary_Outracks_Simulator_Bytecode_TypeName_Uno_Type_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Content_Models_ModelDrawable(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Content_Models_ModelNode(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Content_Models_ModelParameter_float4x4_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Content_Models_ModelSkin(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Content_Models_SkinBone(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Content_Models_SkinDrawable(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Content_Models_VertexInfluence(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Content_Splines_KeyframedSpline2_Key_float_float_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Content_Splines_KeyframedSpline2_Key_float4_float4_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Data_Json_Value(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Data_Xml_XmlAttribute(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Data_Xml_XmlAttributeHandle(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Data_Xml_XmlLinkedNode(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Data_Xml_XmlNodeHandle(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Diagnostics_ProfileEvent(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_EventHandler(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Exception(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Graphics_PolygonFace(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Net_Http_HttpMessageHandlerRequest(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Platform_Key(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Reflection_CppField(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Reflection_CppFunction(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_Runtime_Implementation_Internal_FormatStringToken(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_UX_FileSource(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_UX_IFactory(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_UX_ITemplate(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void Array__Sort__Uno_UX_Resource(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);

}}


#endif
