// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ORDER_BY__FUSE_DRAWING_GRADIENT_STOP_H__
#define __APP_UNO_COLLECTIONS_ORDER_BY__FUSE_DRAWING_GRADIENT_STOP_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }

namespace app {
namespace Uno {
namespace Collections {

struct OrderBy__Fuse_Drawing_GradientStop;

struct OrderBy__Fuse_Drawing_GradientStop__uType : ::uClassType
{
};

OrderBy__Fuse_Drawing_GradientStop__uType* OrderBy__Fuse_Drawing_GradientStop__typeof();

void OrderBy__Fuse_Drawing_GradientStop___ObjInit(OrderBy__Fuse_Drawing_GradientStop* __this, ::uDelegate* orderFunction);
int OrderBy__Fuse_Drawing_GradientStop__Compare(OrderBy__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* a, ::app::Fuse::Drawing::GradientStop* b);
OrderBy__Fuse_Drawing_GradientStop* OrderBy__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::uDelegate* orderFunction);

struct OrderBy__Fuse_Drawing_GradientStop : ::uObject
{
    ::uStrong< ::uDelegate*> _orderFunction;

    void _ObjInit(::uDelegate* orderFunction) { OrderBy__Fuse_Drawing_GradientStop___ObjInit(this, orderFunction); }
    int Compare(::app::Fuse::Drawing::GradientStop* a, ::app::Fuse::Drawing::GradientStop* b) { return OrderBy__Fuse_Drawing_GradientStop__Compare(this, a, b); }
};

}}}


#endif
