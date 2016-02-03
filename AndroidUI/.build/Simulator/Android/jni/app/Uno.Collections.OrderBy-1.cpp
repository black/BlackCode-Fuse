#include <app/Fuse.Drawing.GradientStop.h>
#include <app/Uno.Collections.OrderBy__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Func__Fuse_Drawing_GradientStop__int.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

OrderBy__Fuse_Drawing_GradientStop__uType* OrderBy__Fuse_Drawing_GradientStop__typeof()
{
    static ::uStaticStrong<OrderBy__Fuse_Drawing_GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (OrderBy__Fuse_Drawing_GradientStop__uType*)::uAllocClassType(sizeof(OrderBy__Fuse_Drawing_GradientStop__uType), "Uno.Collections.OrderBy<Fuse.Drawing.GradientStop>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_orderFunction", offsetof(OrderBy__Fuse_Drawing_GradientStop, _orderFunction));

    return type;
}

void OrderBy__Fuse_Drawing_GradientStop___ObjInit(OrderBy__Fuse_Drawing_GradientStop* __this, ::uDelegate* orderFunction)
{
    __this->_orderFunction = orderFunction;
}

int OrderBy__Fuse_Drawing_GradientStop__Compare(OrderBy__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* a, ::app::Fuse::Drawing::GradientStop* b)
{
    return ::uPtr< ::uDelegate*>(__this->_orderFunction)->Invoke< int, ::app::Fuse::Drawing::GradientStop*>(a) - ::uPtr< ::uDelegate*>(__this->_orderFunction)->Invoke< int, ::app::Fuse::Drawing::GradientStop*>(b);
}

OrderBy__Fuse_Drawing_GradientStop* OrderBy__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::uDelegate* orderFunction)
{
    OrderBy__Fuse_Drawing_GradientStop* inst = (OrderBy__Fuse_Drawing_GradientStop*)::uAllocObject(sizeof(OrderBy__Fuse_Drawing_GradientStop), OrderBy__Fuse_Drawing_GradientStop__typeof());
    inst->_ObjInit(orderFunction);
    return inst;
}

}}}
