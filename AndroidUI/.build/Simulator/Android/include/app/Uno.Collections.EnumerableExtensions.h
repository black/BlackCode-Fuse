// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct LineCacheLine; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct Batch; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct HalfEdge; } } } }
namespace app { namespace Fuse { namespace Drawing { struct Border; } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }
namespace app { namespace Fuse { namespace Drawing { struct PolygonDrawable; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }
namespace app { namespace Fuse { namespace Input { struct Capturer; } } }
namespace app { namespace Fuse { struct Behavior; } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct BindVariable; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Expression; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Parameter; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Statement; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct ExceptionInfo; } } } }
namespace app { namespace Outracks { namespace Simulator { struct DialogButton; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_GradientStop; } } }
namespace app { namespace Uno { namespace Collections { struct List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_; } } }
namespace app { namespace Uno { namespace Collections { struct List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___; } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlNodeHandle; } } } }
namespace app { namespace Uno { namespace Net { struct IPEndPoint; } } }
namespace app { namespace Uno { namespace UX { struct Resource; } } }
namespace app { namespace Uno { struct Exception; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions__uType : ::uClassType
{
};

EnumerableExtensions__uType* EnumerableExtensions__typeof();

::uObject* EnumerableExtensions__AsEnumerable__Outracks_Simulator_DialogButton(::uStatic* __this, ::uArray* self);
int EnumerableExtensions__Count__Fuse_Drawing_Tesselation_Face(::uStatic* __this, ::uObject* self);
::app::Fuse::Controls::TextEdit::LineCacheLine* EnumerableExtensions__First__Fuse_Controls_TextEdit_LineCacheLine(::uStatic* __this, ::uObject* self);
::app::Fuse::Input::Capturer* EnumerableExtensions__First__Fuse_Input_Capturer(::uStatic* __this, ::uObject* self);
::app::Fuse::Drawing::Batching::Batch* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Batching_Batch(::uStatic* __this, ::uObject* self);
::app::Fuse::Drawing::Batching::Batch* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Batching_Batch_1(::uStatic* __this, ::uObject* self, ::uDelegate* where);
::app::Fuse::Drawing::Brush* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Brush(::uStatic* __this, ::uObject* self);
::app::Fuse::Drawing::Brush* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Brush_1(::uStatic* __this, ::uObject* self, ::uDelegate* where);
::app::Fuse::Drawing::Stroke* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Stroke(::uStatic* __this, ::uObject* self);
::app::Fuse::Drawing::Stroke* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Stroke_1(::uStatic* __this, ::uObject* self, ::uDelegate* where);
::app::Fuse::Drawing::Tesselation::HalfEdge* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Tesselation_HalfEdge(::uStatic* __this, ::uObject* self);
::app::Fuse::Drawing::Tesselation::HalfEdge* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Tesselation_HalfEdge_1(::uStatic* __this, ::uObject* self, ::uDelegate* where);
::app::Fuse::Entities::Entity* EnumerableExtensions__Last__Fuse_Entities_Entity(::uStatic* __this, ::uObject* self);
::app::Uno::Data::Xml::XmlNodeHandle* EnumerableExtensions__Last__Uno_Data_Xml_XmlNodeHandle(::uStatic* __this, ::uObject* self);
::uObject* EnumerableExtensions__OrderBy__Fuse_Drawing_GradientStop(::uStatic* __this, ::uObject* self, ::uDelegate* orderFunction);
::uObject* EnumerableExtensions__OrderBy__Fuse_Drawing_GradientStop_1(::uStatic* __this, ::uObject* self, ::uDelegate* orderFunction);
::uObject* EnumerableExtensions__Select__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh(::uStatic* __this, ::uObject* self, ::uDelegate* func);
::uObject* EnumerableExtensions__Select__Fuse_Drawing_Border__Fuse_Drawing_Contour(::uStatic* __this, ::uObject* self, ::uDelegate* func);
::uObject* EnumerableExtensions__Select__Fuse_Drawing_Contour__Fuse_Drawing_Border(::uStatic* __this, ::uObject* self, ::uDelegate* func);
::uObject* EnumerableExtensions__Select__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Fuse_Drawing_Tesselation_ActiveRegion(::uStatic* __this, ::uObject* self, ::uDelegate* func);
::uObject* EnumerableExtensions__Select__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour(::uStatic* __this, ::uObject* self, ::uDelegate* func);
::uObject* EnumerableExtensions__Select__Fuse_Drawing_Tesselation_Face__Uno_Geometry_Triangle2D(::uStatic* __this, ::uObject* self, ::uDelegate* func);
::uObject* EnumerableExtensions__Select__Fuse_Drawing_Tesselation_HalfEdge__float2(::uStatic* __this, ::uObject* self, ::uDelegate* func);
::uObject* EnumerableExtensions__Select__Outracks_Simulator_Bytecode_Parameter__string(::uStatic* __this, ::uObject* self, ::uDelegate* func);
::uObject* EnumerableExtensions__Select__string__string(::uStatic* __this, ::uObject* self, ::uDelegate* func);
::uArray* EnumerableExtensions__ToArray__float2(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__float3(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__float4(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__Fuse_Behavior(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_Batching_Batch(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_Border(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_Contour(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_GradientStop(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_PolygonDrawable(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_BindVariable(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_Expression(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_Parameter(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_Statement(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__Outracks_Simulator_Bytecode_TypeName(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__Outracks_Simulator_DialogButton(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__Outracks_Simulator_Protocol_ExceptionInfo(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__string(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__Uno_Exception(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__Uno_Net_IPEndPoint(::uStatic* __this, ::uObject* self);
::uArray* EnumerableExtensions__ToArray__Uno_UX_Resource(::uStatic* __this, ::uObject* self);
::app::Uno::Collections::List__Fuse_Drawing_GradientStop* EnumerableExtensions__ToList__Fuse_Drawing_GradientStop(::uStatic* __this, ::uObject* self);
::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* EnumerableExtensions__ToList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_(::uStatic* __this, ::uObject* self);
::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___* EnumerableExtensions__ToList__Outracks_Simulator_Task_Uno_Net_IPEndPoint___(::uStatic* __this, ::uObject* self);
::uObject* EnumerableExtensions__Union__float2(::uStatic* __this, ::uObject* self, ::uObject* other);
::uObject* EnumerableExtensions__Union__Fuse_Drawing_Contour(::uStatic* __this, ::uObject* self, ::uObject* other);
::uObject* EnumerableExtensions__Union__Outracks_Simulator_Bytecode_Statement(::uStatic* __this, ::uObject* self, ::uObject* other);
::uObject* EnumerableExtensions__Union__Outracks_Simulator_DialogButton(::uStatic* __this, ::uObject* self, ::uObject* other);
::uObject* EnumerableExtensions__Where__Fuse_Drawing_Tesselation_Face(::uStatic* __this, ::uObject* self, ::uDelegate* predicate);

}}}


#endif
