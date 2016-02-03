#include <app/Fuse.Controls.Circle.h>
#include <app/Fuse.Controls.Ellipse.h>
#include <app/Fuse.Controls.Graphics.ShapeVisual__Fuse_Controls_Circle.h>
#include <app/Fuse.Controls.Graphics.ShapeVisual__Fuse_Controls_Ellipse.h>
#include <app/Fuse.Controls.Graphics.ShapeVisual__Fuse_Controls_Path.h>
#include <app/Fuse.Controls.Graphics.ShapeVisual__Fuse_Controls_Rectangle.h>
#include <app/Fuse.Controls.Graphics.ShapeVisual__Fuse_Controls_RegularPolygon.h>
#include <app/Fuse.Controls.Graphics.ShapeVisual__Fuse_Controls_Star.h>
#include <app/Fuse.Controls.Graphics.Visual.h>
#include <app/Fuse.Controls.Path.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.RegularPolygon.h>
#include <app/Fuse.Controls.Shape.h>
#include <app/Fuse.Controls.Star.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeDrawCount.h>
#include <app/Fuse.SizeFlags.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ShapeVisual__Fuse_Controls_Circle__uType* ShapeVisual__Fuse_Controls_Circle__typeof()
{
    static ::uStaticStrong<ShapeVisual__Fuse_Controls_Circle__uType*> type;
    if (type != NULL) return type;

    type = (ShapeVisual__Fuse_Controls_Circle__uType*)::uAllocClassType(sizeof(ShapeVisual__Fuse_Controls_Circle__uType), "Fuse.Controls.Graphics.ShapeVisual<Fuse.Controls.Circle>", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Circle__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Circle*))ShapeVisual__Fuse_Controls_Circle__Attach;
    type->__fp_Detach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Circle*))ShapeVisual__Fuse_Controls_Circle__Detach;
    type->__fp_get_LocalDrawCount = (::app::Fuse::NodeDrawCount(*)(::app::Fuse::Node*))ShapeVisual__Fuse_Controls_Circle__get_LocalDrawCount;
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))ShapeVisual__Fuse_Controls_Circle__GetMarginSize;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Controls::Graphics::Visual*, ::app::Fuse::DrawContext*))ShapeVisual__Fuse_Controls_Circle__OnDraw;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ShapeVisual__Fuse_Controls_Circle__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction("get_Shape", ShapeVisual__Fuse_Controls_Circle__get_Shape, 0, false, ::app::Fuse::Controls::Shape__typeof()));

    ::uRegisterType(type);
    return type;
}

void ShapeVisual__Fuse_Controls_Circle___ObjInit_3(ShapeVisual__Fuse_Controls_Circle* __this)
{
    ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Circle___ObjInit_2(__this);
}

void ShapeVisual__Fuse_Controls_Circle__Attach(ShapeVisual__Fuse_Controls_Circle* __this)
{
    ::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->add_ShapeChanged(::uNewDelegateVirt(::app::Uno::Action__typeof(), __this, offsetof(::app::Fuse::Node__uType, __fp_InvalidateVisual)));
}

void ShapeVisual__Fuse_Controls_Circle__Detach(ShapeVisual__Fuse_Controls_Circle* __this)
{
    ::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->remove_ShapeChanged(::uNewDelegateVirt(::app::Uno::Action__typeof(), __this, offsetof(::app::Fuse::Node__uType, __fp_InvalidateVisual)));
}

::app::Fuse::NodeDrawCount ShapeVisual__Fuse_Controls_Circle__get_LocalDrawCount(ShapeVisual__Fuse_Controls_Circle* __this)
{
    ::app::Fuse::NodeDrawCount dc = ::uDefault< ::app::Fuse::NodeDrawCount>();
    int c = (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasFills() ? ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Fills())) : 0) + (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasStrokes() ? ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Strokes())) : 0);
    dc.Draw = c;
    dc.Pixels = (::uLong)(((__this->ActualSize().X * __this->ActualSize().Y) * __this->PointDensity()) * (float)c);
    return dc;
}

::app::Fuse::Controls::Shape* ShapeVisual__Fuse_Controls_Circle__get_Shape(ShapeVisual__Fuse_Controls_Circle* __this)
{
    return ::uCast< ::app::Fuse::Controls::Shape*>((::uObject*)__this->Control(), ::app::Fuse::Controls::Shape__typeof());
}

::app::Uno::Float2 ShapeVisual__Fuse_Controls_Circle__GetMarginSize(ShapeVisual__Fuse_Controls_Circle* __this, ::app::Uno::Float2 availableSize, int flags)
{
    if (!((flags & 1) == 1))
    {
        availableSize.X = 0.0f;
    }

    if (!((flags & 2) == 2))
    {
        availableSize.Y = 0.0f;
    }

    return availableSize;
}

void ShapeVisual__Fuse_Controls_Circle__OnDraw(ShapeVisual__Fuse_Controls_Circle* __this, ::app::Fuse::DrawContext* dc)
{
    __this->PrepareDraw(dc);

    if (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasFills())
    {
        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Fills())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Drawing::Brush* fill = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Brush::Current(::uPtr< ::uObject*>(enum_123));
            __this->DrawFill(dc, fill);
        }
    }

    if (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasStrokes())
    {
        for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Strokes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
        {
            ::app::Fuse::Drawing::Stroke* stroke = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_124));
            __this->DrawStroke(dc, stroke);
        }
    }
}

void ShapeVisual__Fuse_Controls_Circle__PrepareDraw(ShapeVisual__Fuse_Controls_Circle* __this, ::app::Fuse::DrawContext* dc)
{
    ::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->PrepareDraw(dc, __this->ActualSize());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ShapeVisual__Fuse_Controls_Ellipse__uType* ShapeVisual__Fuse_Controls_Ellipse__typeof()
{
    static ::uStaticStrong<ShapeVisual__Fuse_Controls_Ellipse__uType*> type;
    if (type != NULL) return type;

    type = (ShapeVisual__Fuse_Controls_Ellipse__uType*)::uAllocClassType(sizeof(ShapeVisual__Fuse_Controls_Ellipse__uType), "Fuse.Controls.Graphics.ShapeVisual<Fuse.Controls.Ellipse>", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Ellipse__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Ellipse*))ShapeVisual__Fuse_Controls_Ellipse__Attach;
    type->__fp_Detach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Ellipse*))ShapeVisual__Fuse_Controls_Ellipse__Detach;
    type->__fp_get_LocalDrawCount = (::app::Fuse::NodeDrawCount(*)(::app::Fuse::Node*))ShapeVisual__Fuse_Controls_Ellipse__get_LocalDrawCount;
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))ShapeVisual__Fuse_Controls_Ellipse__GetMarginSize;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Controls::Graphics::Visual*, ::app::Fuse::DrawContext*))ShapeVisual__Fuse_Controls_Ellipse__OnDraw;
    type->__fp_PrepareDraw = ShapeVisual__Fuse_Controls_Ellipse__PrepareDraw;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ShapeVisual__Fuse_Controls_Ellipse__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction("get_Shape", ShapeVisual__Fuse_Controls_Ellipse__get_Shape, 0, false, ::app::Fuse::Controls::Shape__typeof()));

    ::uRegisterType(type);
    return type;
}

void ShapeVisual__Fuse_Controls_Ellipse___ObjInit_3(ShapeVisual__Fuse_Controls_Ellipse* __this)
{
    ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Ellipse___ObjInit_2(__this);
}

void ShapeVisual__Fuse_Controls_Ellipse__Attach(ShapeVisual__Fuse_Controls_Ellipse* __this)
{
    ::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->add_ShapeChanged(::uNewDelegateVirt(::app::Uno::Action__typeof(), __this, offsetof(::app::Fuse::Node__uType, __fp_InvalidateVisual)));
}

void ShapeVisual__Fuse_Controls_Ellipse__Detach(ShapeVisual__Fuse_Controls_Ellipse* __this)
{
    ::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->remove_ShapeChanged(::uNewDelegateVirt(::app::Uno::Action__typeof(), __this, offsetof(::app::Fuse::Node__uType, __fp_InvalidateVisual)));
}

::app::Fuse::NodeDrawCount ShapeVisual__Fuse_Controls_Ellipse__get_LocalDrawCount(ShapeVisual__Fuse_Controls_Ellipse* __this)
{
    ::app::Fuse::NodeDrawCount dc = ::uDefault< ::app::Fuse::NodeDrawCount>();
    int c = (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasFills() ? ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Fills())) : 0) + (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasStrokes() ? ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Strokes())) : 0);
    dc.Draw = c;
    dc.Pixels = (::uLong)(((__this->ActualSize().X * __this->ActualSize().Y) * __this->PointDensity()) * (float)c);
    return dc;
}

::app::Fuse::Controls::Shape* ShapeVisual__Fuse_Controls_Ellipse__get_Shape(ShapeVisual__Fuse_Controls_Ellipse* __this)
{
    return ::uCast< ::app::Fuse::Controls::Shape*>((::uObject*)__this->Control(), ::app::Fuse::Controls::Shape__typeof());
}

::app::Uno::Float2 ShapeVisual__Fuse_Controls_Ellipse__GetMarginSize(ShapeVisual__Fuse_Controls_Ellipse* __this, ::app::Uno::Float2 availableSize, int flags)
{
    if (!((flags & 1) == 1))
    {
        availableSize.X = 0.0f;
    }

    if (!((flags & 2) == 2))
    {
        availableSize.Y = 0.0f;
    }

    return availableSize;
}

void ShapeVisual__Fuse_Controls_Ellipse__OnDraw(ShapeVisual__Fuse_Controls_Ellipse* __this, ::app::Fuse::DrawContext* dc)
{
    __this->PrepareDraw(dc);

    if (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasFills())
    {
        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Fills())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Drawing::Brush* fill = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Brush::Current(::uPtr< ::uObject*>(enum_123));
            __this->DrawFill(dc, fill);
        }
    }

    if (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasStrokes())
    {
        for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Strokes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
        {
            ::app::Fuse::Drawing::Stroke* stroke = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_124));
            __this->DrawStroke(dc, stroke);
        }
    }
}

void ShapeVisual__Fuse_Controls_Ellipse__PrepareDraw(ShapeVisual__Fuse_Controls_Ellipse* __this, ::app::Fuse::DrawContext* dc)
{
    ::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->PrepareDraw(dc, __this->ActualSize());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ShapeVisual__Fuse_Controls_Path__uType* ShapeVisual__Fuse_Controls_Path__typeof()
{
    static ::uStaticStrong<ShapeVisual__Fuse_Controls_Path__uType*> type;
    if (type != NULL) return type;

    type = (ShapeVisual__Fuse_Controls_Path__uType*)::uAllocClassType(sizeof(ShapeVisual__Fuse_Controls_Path__uType), "Fuse.Controls.Graphics.ShapeVisual<Fuse.Controls.Path>", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Path__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Path*))ShapeVisual__Fuse_Controls_Path__Attach;
    type->__fp_Detach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Path*))ShapeVisual__Fuse_Controls_Path__Detach;
    type->__fp_get_LocalDrawCount = (::app::Fuse::NodeDrawCount(*)(::app::Fuse::Node*))ShapeVisual__Fuse_Controls_Path__get_LocalDrawCount;
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))ShapeVisual__Fuse_Controls_Path__GetMarginSize;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Controls::Graphics::Visual*, ::app::Fuse::DrawContext*))ShapeVisual__Fuse_Controls_Path__OnDraw;
    type->__fp_PrepareDraw = ShapeVisual__Fuse_Controls_Path__PrepareDraw;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ShapeVisual__Fuse_Controls_Path__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction("get_Shape", ShapeVisual__Fuse_Controls_Path__get_Shape, 0, false, ::app::Fuse::Controls::Shape__typeof()));

    ::uRegisterType(type);
    return type;
}

void ShapeVisual__Fuse_Controls_Path___ObjInit_3(ShapeVisual__Fuse_Controls_Path* __this)
{
    ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Path___ObjInit_2(__this);
}

void ShapeVisual__Fuse_Controls_Path__Attach(ShapeVisual__Fuse_Controls_Path* __this)
{
    ::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->add_ShapeChanged(::uNewDelegateVirt(::app::Uno::Action__typeof(), __this, offsetof(::app::Fuse::Node__uType, __fp_InvalidateVisual)));
}

void ShapeVisual__Fuse_Controls_Path__Detach(ShapeVisual__Fuse_Controls_Path* __this)
{
    ::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->remove_ShapeChanged(::uNewDelegateVirt(::app::Uno::Action__typeof(), __this, offsetof(::app::Fuse::Node__uType, __fp_InvalidateVisual)));
}

::app::Fuse::NodeDrawCount ShapeVisual__Fuse_Controls_Path__get_LocalDrawCount(ShapeVisual__Fuse_Controls_Path* __this)
{
    ::app::Fuse::NodeDrawCount dc = ::uDefault< ::app::Fuse::NodeDrawCount>();
    int c = (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasFills() ? ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Fills())) : 0) + (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasStrokes() ? ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Strokes())) : 0);
    dc.Draw = c;
    dc.Pixels = (::uLong)(((__this->ActualSize().X * __this->ActualSize().Y) * __this->PointDensity()) * (float)c);
    return dc;
}

::app::Fuse::Controls::Shape* ShapeVisual__Fuse_Controls_Path__get_Shape(ShapeVisual__Fuse_Controls_Path* __this)
{
    return ::uCast< ::app::Fuse::Controls::Shape*>((::uObject*)__this->Control(), ::app::Fuse::Controls::Shape__typeof());
}

::app::Uno::Float2 ShapeVisual__Fuse_Controls_Path__GetMarginSize(ShapeVisual__Fuse_Controls_Path* __this, ::app::Uno::Float2 availableSize, int flags)
{
    if (!((flags & 1) == 1))
    {
        availableSize.X = 0.0f;
    }

    if (!((flags & 2) == 2))
    {
        availableSize.Y = 0.0f;
    }

    return availableSize;
}

void ShapeVisual__Fuse_Controls_Path__OnDraw(ShapeVisual__Fuse_Controls_Path* __this, ::app::Fuse::DrawContext* dc)
{
    __this->PrepareDraw(dc);

    if (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasFills())
    {
        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Fills())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Drawing::Brush* fill = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Brush::Current(::uPtr< ::uObject*>(enum_123));
            __this->DrawFill(dc, fill);
        }
    }

    if (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasStrokes())
    {
        for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Strokes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
        {
            ::app::Fuse::Drawing::Stroke* stroke = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_124));
            __this->DrawStroke(dc, stroke);
        }
    }
}

void ShapeVisual__Fuse_Controls_Path__PrepareDraw(ShapeVisual__Fuse_Controls_Path* __this, ::app::Fuse::DrawContext* dc)
{
    ::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->PrepareDraw(dc, __this->ActualSize());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ShapeVisual__Fuse_Controls_Rectangle__uType* ShapeVisual__Fuse_Controls_Rectangle__typeof()
{
    static ::uStaticStrong<ShapeVisual__Fuse_Controls_Rectangle__uType*> type;
    if (type != NULL) return type;

    type = (ShapeVisual__Fuse_Controls_Rectangle__uType*)::uAllocClassType(sizeof(ShapeVisual__Fuse_Controls_Rectangle__uType), "Fuse.Controls.Graphics.ShapeVisual<Fuse.Controls.Rectangle>", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Rectangle__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Rectangle*))ShapeVisual__Fuse_Controls_Rectangle__Attach;
    type->__fp_Detach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Rectangle*))ShapeVisual__Fuse_Controls_Rectangle__Detach;
    type->__fp_get_LocalDrawCount = (::app::Fuse::NodeDrawCount(*)(::app::Fuse::Node*))ShapeVisual__Fuse_Controls_Rectangle__get_LocalDrawCount;
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))ShapeVisual__Fuse_Controls_Rectangle__GetMarginSize;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Controls::Graphics::Visual*, ::app::Fuse::DrawContext*))ShapeVisual__Fuse_Controls_Rectangle__OnDraw;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ShapeVisual__Fuse_Controls_Rectangle__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction("get_Shape", ShapeVisual__Fuse_Controls_Rectangle__get_Shape, 0, false, ::app::Fuse::Controls::Shape__typeof()));

    ::uRegisterType(type);
    return type;
}

void ShapeVisual__Fuse_Controls_Rectangle___ObjInit_3(ShapeVisual__Fuse_Controls_Rectangle* __this)
{
    ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Rectangle___ObjInit_2(__this);
}

void ShapeVisual__Fuse_Controls_Rectangle__Attach(ShapeVisual__Fuse_Controls_Rectangle* __this)
{
    ::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->add_ShapeChanged(::uNewDelegateVirt(::app::Uno::Action__typeof(), __this, offsetof(::app::Fuse::Node__uType, __fp_InvalidateVisual)));
}

void ShapeVisual__Fuse_Controls_Rectangle__Detach(ShapeVisual__Fuse_Controls_Rectangle* __this)
{
    ::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->remove_ShapeChanged(::uNewDelegateVirt(::app::Uno::Action__typeof(), __this, offsetof(::app::Fuse::Node__uType, __fp_InvalidateVisual)));
}

::app::Fuse::NodeDrawCount ShapeVisual__Fuse_Controls_Rectangle__get_LocalDrawCount(ShapeVisual__Fuse_Controls_Rectangle* __this)
{
    ::app::Fuse::NodeDrawCount dc = ::uDefault< ::app::Fuse::NodeDrawCount>();
    int c = (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasFills() ? ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Fills())) : 0) + (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasStrokes() ? ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Strokes())) : 0);
    dc.Draw = c;
    dc.Pixels = (::uLong)(((__this->ActualSize().X * __this->ActualSize().Y) * __this->PointDensity()) * (float)c);
    return dc;
}

::app::Fuse::Controls::Shape* ShapeVisual__Fuse_Controls_Rectangle__get_Shape(ShapeVisual__Fuse_Controls_Rectangle* __this)
{
    return ::uCast< ::app::Fuse::Controls::Shape*>((::uObject*)__this->Control(), ::app::Fuse::Controls::Shape__typeof());
}

::app::Uno::Float2 ShapeVisual__Fuse_Controls_Rectangle__GetMarginSize(ShapeVisual__Fuse_Controls_Rectangle* __this, ::app::Uno::Float2 availableSize, int flags)
{
    if (!((flags & 1) == 1))
    {
        availableSize.X = 0.0f;
    }

    if (!((flags & 2) == 2))
    {
        availableSize.Y = 0.0f;
    }

    return availableSize;
}

void ShapeVisual__Fuse_Controls_Rectangle__OnDraw(ShapeVisual__Fuse_Controls_Rectangle* __this, ::app::Fuse::DrawContext* dc)
{
    __this->PrepareDraw(dc);

    if (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasFills())
    {
        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Fills())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Drawing::Brush* fill = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Brush::Current(::uPtr< ::uObject*>(enum_123));
            __this->DrawFill(dc, fill);
        }
    }

    if (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasStrokes())
    {
        for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Strokes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
        {
            ::app::Fuse::Drawing::Stroke* stroke = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_124));
            __this->DrawStroke(dc, stroke);
        }
    }
}

void ShapeVisual__Fuse_Controls_Rectangle__PrepareDraw(ShapeVisual__Fuse_Controls_Rectangle* __this, ::app::Fuse::DrawContext* dc)
{
    ::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->PrepareDraw(dc, __this->ActualSize());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ShapeVisual__Fuse_Controls_RegularPolygon__uType* ShapeVisual__Fuse_Controls_RegularPolygon__typeof()
{
    static ::uStaticStrong<ShapeVisual__Fuse_Controls_RegularPolygon__uType*> type;
    if (type != NULL) return type;

    type = (ShapeVisual__Fuse_Controls_RegularPolygon__uType*)::uAllocClassType(sizeof(ShapeVisual__Fuse_Controls_RegularPolygon__uType), "Fuse.Controls.Graphics.ShapeVisual<Fuse.Controls.RegularPolygon>", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_RegularPolygon__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_RegularPolygon*))ShapeVisual__Fuse_Controls_RegularPolygon__Attach;
    type->__fp_Detach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_RegularPolygon*))ShapeVisual__Fuse_Controls_RegularPolygon__Detach;
    type->__fp_get_LocalDrawCount = (::app::Fuse::NodeDrawCount(*)(::app::Fuse::Node*))ShapeVisual__Fuse_Controls_RegularPolygon__get_LocalDrawCount;
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))ShapeVisual__Fuse_Controls_RegularPolygon__GetMarginSize;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Controls::Graphics::Visual*, ::app::Fuse::DrawContext*))ShapeVisual__Fuse_Controls_RegularPolygon__OnDraw;
    type->__fp_PrepareDraw = ShapeVisual__Fuse_Controls_RegularPolygon__PrepareDraw;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ShapeVisual__Fuse_Controls_RegularPolygon__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction("get_Shape", ShapeVisual__Fuse_Controls_RegularPolygon__get_Shape, 0, false, ::app::Fuse::Controls::Shape__typeof()));

    ::uRegisterType(type);
    return type;
}

void ShapeVisual__Fuse_Controls_RegularPolygon___ObjInit_3(ShapeVisual__Fuse_Controls_RegularPolygon* __this)
{
    ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_RegularPolygon___ObjInit_2(__this);
}

void ShapeVisual__Fuse_Controls_RegularPolygon__Attach(ShapeVisual__Fuse_Controls_RegularPolygon* __this)
{
    ::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->add_ShapeChanged(::uNewDelegateVirt(::app::Uno::Action__typeof(), __this, offsetof(::app::Fuse::Node__uType, __fp_InvalidateVisual)));
}

void ShapeVisual__Fuse_Controls_RegularPolygon__Detach(ShapeVisual__Fuse_Controls_RegularPolygon* __this)
{
    ::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->remove_ShapeChanged(::uNewDelegateVirt(::app::Uno::Action__typeof(), __this, offsetof(::app::Fuse::Node__uType, __fp_InvalidateVisual)));
}

::app::Fuse::NodeDrawCount ShapeVisual__Fuse_Controls_RegularPolygon__get_LocalDrawCount(ShapeVisual__Fuse_Controls_RegularPolygon* __this)
{
    ::app::Fuse::NodeDrawCount dc = ::uDefault< ::app::Fuse::NodeDrawCount>();
    int c = (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasFills() ? ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Fills())) : 0) + (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasStrokes() ? ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Strokes())) : 0);
    dc.Draw = c;
    dc.Pixels = (::uLong)(((__this->ActualSize().X * __this->ActualSize().Y) * __this->PointDensity()) * (float)c);
    return dc;
}

::app::Fuse::Controls::Shape* ShapeVisual__Fuse_Controls_RegularPolygon__get_Shape(ShapeVisual__Fuse_Controls_RegularPolygon* __this)
{
    return ::uCast< ::app::Fuse::Controls::Shape*>((::uObject*)__this->Control(), ::app::Fuse::Controls::Shape__typeof());
}

::app::Uno::Float2 ShapeVisual__Fuse_Controls_RegularPolygon__GetMarginSize(ShapeVisual__Fuse_Controls_RegularPolygon* __this, ::app::Uno::Float2 availableSize, int flags)
{
    if (!((flags & 1) == 1))
    {
        availableSize.X = 0.0f;
    }

    if (!((flags & 2) == 2))
    {
        availableSize.Y = 0.0f;
    }

    return availableSize;
}

void ShapeVisual__Fuse_Controls_RegularPolygon__OnDraw(ShapeVisual__Fuse_Controls_RegularPolygon* __this, ::app::Fuse::DrawContext* dc)
{
    __this->PrepareDraw(dc);

    if (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasFills())
    {
        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Fills())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Drawing::Brush* fill = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Brush::Current(::uPtr< ::uObject*>(enum_123));
            __this->DrawFill(dc, fill);
        }
    }

    if (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasStrokes())
    {
        for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Strokes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
        {
            ::app::Fuse::Drawing::Stroke* stroke = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_124));
            __this->DrawStroke(dc, stroke);
        }
    }
}

void ShapeVisual__Fuse_Controls_RegularPolygon__PrepareDraw(ShapeVisual__Fuse_Controls_RegularPolygon* __this, ::app::Fuse::DrawContext* dc)
{
    ::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->PrepareDraw(dc, __this->ActualSize());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ShapeVisual__Fuse_Controls_Star__uType* ShapeVisual__Fuse_Controls_Star__typeof()
{
    static ::uStaticStrong<ShapeVisual__Fuse_Controls_Star__uType*> type;
    if (type != NULL) return type;

    type = (ShapeVisual__Fuse_Controls_Star__uType*)::uAllocClassType(sizeof(ShapeVisual__Fuse_Controls_Star__uType), "Fuse.Controls.Graphics.ShapeVisual<Fuse.Controls.Star>", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Star__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Star*))ShapeVisual__Fuse_Controls_Star__Attach;
    type->__fp_Detach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Star*))ShapeVisual__Fuse_Controls_Star__Detach;
    type->__fp_get_LocalDrawCount = (::app::Fuse::NodeDrawCount(*)(::app::Fuse::Node*))ShapeVisual__Fuse_Controls_Star__get_LocalDrawCount;
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))ShapeVisual__Fuse_Controls_Star__GetMarginSize;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Controls::Graphics::Visual*, ::app::Fuse::DrawContext*))ShapeVisual__Fuse_Controls_Star__OnDraw;
    type->__fp_PrepareDraw = ShapeVisual__Fuse_Controls_Star__PrepareDraw;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ShapeVisual__Fuse_Controls_Star__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction("get_Shape", ShapeVisual__Fuse_Controls_Star__get_Shape, 0, false, ::app::Fuse::Controls::Shape__typeof()));

    ::uRegisterType(type);
    return type;
}

void ShapeVisual__Fuse_Controls_Star___ObjInit_3(ShapeVisual__Fuse_Controls_Star* __this)
{
    ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Star___ObjInit_2(__this);
}

void ShapeVisual__Fuse_Controls_Star__Attach(ShapeVisual__Fuse_Controls_Star* __this)
{
    ::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->add_ShapeChanged(::uNewDelegateVirt(::app::Uno::Action__typeof(), __this, offsetof(::app::Fuse::Node__uType, __fp_InvalidateVisual)));
}

void ShapeVisual__Fuse_Controls_Star__Detach(ShapeVisual__Fuse_Controls_Star* __this)
{
    ::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->remove_ShapeChanged(::uNewDelegateVirt(::app::Uno::Action__typeof(), __this, offsetof(::app::Fuse::Node__uType, __fp_InvalidateVisual)));
}

::app::Fuse::NodeDrawCount ShapeVisual__Fuse_Controls_Star__get_LocalDrawCount(ShapeVisual__Fuse_Controls_Star* __this)
{
    ::app::Fuse::NodeDrawCount dc = ::uDefault< ::app::Fuse::NodeDrawCount>();
    int c = (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasFills() ? ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Fills())) : 0) + (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasStrokes() ? ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Strokes())) : 0);
    dc.Draw = c;
    dc.Pixels = (::uLong)(((__this->ActualSize().X * __this->ActualSize().Y) * __this->PointDensity()) * (float)c);
    return dc;
}

::app::Fuse::Controls::Shape* ShapeVisual__Fuse_Controls_Star__get_Shape(ShapeVisual__Fuse_Controls_Star* __this)
{
    return ::uCast< ::app::Fuse::Controls::Shape*>((::uObject*)__this->Control(), ::app::Fuse::Controls::Shape__typeof());
}

::app::Uno::Float2 ShapeVisual__Fuse_Controls_Star__GetMarginSize(ShapeVisual__Fuse_Controls_Star* __this, ::app::Uno::Float2 availableSize, int flags)
{
    if (!((flags & 1) == 1))
    {
        availableSize.X = 0.0f;
    }

    if (!((flags & 2) == 2))
    {
        availableSize.Y = 0.0f;
    }

    return availableSize;
}

void ShapeVisual__Fuse_Controls_Star__OnDraw(ShapeVisual__Fuse_Controls_Star* __this, ::app::Fuse::DrawContext* dc)
{
    __this->PrepareDraw(dc);

    if (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasFills())
    {
        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Fills())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Drawing::Brush* fill = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Brush::Current(::uPtr< ::uObject*>(enum_123));
            __this->DrawFill(dc, fill);
        }
    }

    if (::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->HasStrokes())
    {
        for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->Strokes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
        {
            ::app::Fuse::Drawing::Stroke* stroke = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_124));
            __this->DrawStroke(dc, stroke);
        }
    }
}

void ShapeVisual__Fuse_Controls_Star__PrepareDraw(ShapeVisual__Fuse_Controls_Star* __this, ::app::Fuse::DrawContext* dc)
{
    ::uPtr< ::app::Fuse::Controls::Shape*>(__this->Shape())->PrepareDraw(dc, __this->ActualSize());
}

}}}}
