#include <app/Fuse.iOS.Controls.Shape__Fuse_Controls_Circle.h>
#include <app/Fuse.iOS.Controls.Shape__Fuse_Controls_Rectangle.h>

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Shape__Fuse_Controls_Circle__uType* Shape__Fuse_Controls_Circle__typeof()
{
    static ::uStaticStrong<Shape__Fuse_Controls_Circle__uType*> type;
    if (type != NULL) return type;

    type = (Shape__Fuse_Controls_Circle__uType*)::uAllocClassType(sizeof(Shape__Fuse_Controls_Circle__uType), "Fuse.iOS.Controls.Shape<Fuse.Controls.Circle>", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Circle__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Shape__Fuse_Controls_Circle__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Shape__Fuse_Controls_Circle__New_1, 0, true, Shape__Fuse_Controls_Circle__typeof()));

    ::uRegisterType(type);
    return type;
}

void Shape__Fuse_Controls_Circle___ObjInit_3(Shape__Fuse_Controls_Circle* __this)
{
    ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Circle___ObjInit_2(__this);
}

Shape__Fuse_Controls_Circle* Shape__Fuse_Controls_Circle__New_1(::uStatic* __this)
{
    Shape__Fuse_Controls_Circle* inst = (Shape__Fuse_Controls_Circle*)::uAllocObject(sizeof(Shape__Fuse_Controls_Circle), Shape__Fuse_Controls_Circle__typeof());
    inst->_ObjInit_3();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Shape__Fuse_Controls_Rectangle__uType* Shape__Fuse_Controls_Rectangle__typeof()
{
    static ::uStaticStrong<Shape__Fuse_Controls_Rectangle__uType*> type;
    if (type != NULL) return type;

    type = (Shape__Fuse_Controls_Rectangle__uType*)::uAllocClassType(sizeof(Shape__Fuse_Controls_Rectangle__uType), "Fuse.iOS.Controls.Shape<Fuse.Controls.Rectangle>", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::Controls::Control__Fuse_Controls_Rectangle__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Shape__Fuse_Controls_Rectangle__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Shape__Fuse_Controls_Rectangle__New_1, 0, true, Shape__Fuse_Controls_Rectangle__typeof()));

    ::uRegisterType(type);
    return type;
}

void Shape__Fuse_Controls_Rectangle___ObjInit_3(Shape__Fuse_Controls_Rectangle* __this)
{
    ::app::Fuse::iOS::Controls::Control__Fuse_Controls_Rectangle___ObjInit_2(__this);
}

Shape__Fuse_Controls_Rectangle* Shape__Fuse_Controls_Rectangle__New_1(::uStatic* __this)
{
    Shape__Fuse_Controls_Rectangle* inst = (Shape__Fuse_Controls_Rectangle*)::uAllocObject(sizeof(Shape__Fuse_Controls_Rectangle), Shape__Fuse_Controls_Rectangle__typeof());
    inst->_ObjInit_3();
    return inst;
}

}}}}
