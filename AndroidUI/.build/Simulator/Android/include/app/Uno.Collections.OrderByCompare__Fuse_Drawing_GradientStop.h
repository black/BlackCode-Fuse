// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ORDER_BY_COMPARE__FUSE_DRAWING_GRADIENT_STOP_H__
#define __APP_UNO_COLLECTIONS_ORDER_BY_COMPARE__FUSE_DRAWING_GRADIENT_STOP_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }

namespace app {
namespace Uno {
namespace Collections {

struct OrderByCompare__Fuse_Drawing_GradientStop;

struct OrderByCompare__Fuse_Drawing_GradientStop__uType : ::uClassType
{
};

OrderByCompare__Fuse_Drawing_GradientStop__uType* OrderByCompare__Fuse_Drawing_GradientStop__typeof();

void OrderByCompare__Fuse_Drawing_GradientStop___ObjInit(OrderByCompare__Fuse_Drawing_GradientStop* __this, ::uDelegate* orderFunction);
int OrderByCompare__Fuse_Drawing_GradientStop__Compare(OrderByCompare__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* a, ::app::Fuse::Drawing::GradientStop* b);
OrderByCompare__Fuse_Drawing_GradientStop* OrderByCompare__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::uDelegate* orderFunction);

struct OrderByCompare__Fuse_Drawing_GradientStop : ::uObject
{
    ::uStrong< ::uDelegate*> _orderFunction;

    void _ObjInit(::uDelegate* orderFunction) { OrderByCompare__Fuse_Drawing_GradientStop___ObjInit(this, orderFunction); }
    int Compare(::app::Fuse::Drawing::GradientStop* a, ::app::Fuse::Drawing::GradientStop* b) { return OrderByCompare__Fuse_Drawing_GradientStop__Compare(this, a, b); }
};

}}}


#endif
