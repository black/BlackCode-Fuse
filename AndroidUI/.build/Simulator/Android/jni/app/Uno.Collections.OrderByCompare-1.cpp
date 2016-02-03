#include <app/Fuse.Drawing.GradientStop.h>
#include <app/Uno.Collections.OrderByCompare__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Func__Fuse_Drawing_GradientStop__Fuse_Drawing_GradientStop__int.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

OrderByCompare__Fuse_Drawing_GradientStop__uType* OrderByCompare__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<OrderByCompare__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (OrderByCompare__Fuse_Drawing_GradientStop__uType*)::uAllocClassType(sizeof(OrderByCompare__Fuse_Drawing_GradientStop__uType), "Uno.Collections.OrderByCompare<Fuse.Drawing.GradientStop>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_orderFunction", offsetof(OrderByCompare__Fuse_Drawing_GradientStop, _orderFunction));

    return type;
}

void OrderByCompare__Fuse_Drawing_GradientStop___ObjInit(OrderByCompare__Fuse_Drawing_GradientStop* __this, ::uDelegate* orderFunction)
{
    __this->_orderFunction = orderFunction;
}

int OrderByCompare__Fuse_Drawing_GradientStop__Compare(OrderByCompare__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* a, ::app::Fuse::Drawing::GradientStop* b)
{
    return ::uPtr< ::uDelegate*>(__this->_orderFunction)->Invoke< int, ::app::Fuse::Drawing::GradientStop*, ::app::Fuse::Drawing::GradientStop*>(a, b);
}

OrderByCompare__Fuse_Drawing_GradientStop* OrderByCompare__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::uDelegate* orderFunction)
{
    OrderByCompare__Fuse_Drawing_GradientStop* inst = (OrderByCompare__Fuse_Drawing_GradientStop*)::uAllocObject(sizeof(OrderByCompare__Fuse_Drawing_GradientStop), OrderByCompare__Fuse_Drawing_GradientStop__typeof());
    inst->_ObjInit(orderFunction);
    return inst;
}

}}}
