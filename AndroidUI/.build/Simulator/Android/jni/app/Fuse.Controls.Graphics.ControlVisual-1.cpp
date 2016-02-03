#include <app/Fuse.Controls.Circle.h>
#include <app/Fuse.Controls.Ellipse.h>
#include <app/Fuse.Controls.Graphics.ControlVisual__Fuse_Controls_Circle.h>
#include <app/Fuse.Controls.Graphics.ControlVisual__Fuse_Controls_Ellipse.h>
#include <app/Fuse.Controls.Graphics.ControlVisual__Fuse_Controls_Image.h>
#include <app/Fuse.Controls.Graphics.ControlVisual__Fuse_Controls_Path.h>
#include <app/Fuse.Controls.Graphics.ControlVisual__Fuse_Controls_Rectangle.h>
#include <app/Fuse.Controls.Graphics.ControlVisual__Fuse_Controls_RegularPolygon.h>
#include <app/Fuse.Controls.Graphics.ControlVisual__Fuse_Controls_Star.h>
#include <app/Fuse.Controls.Graphics.ControlVisual__Fuse_Controls_TextControl.h>
#include <app/Fuse.Controls.Graphics.ControlVisual__Fuse_Controls_TextInput.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.Path.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.RegularPolygon.h>
#include <app/Fuse.Controls.Star.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeBounds.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlVisual__Fuse_Controls_Circle__uType* ControlVisual__Fuse_Controls_Circle__typeof()
{
    static ::uStaticStrong<ControlVisual__Fuse_Controls_Circle__uType*> type;
    if (type != NULL) return type;

    type = (ControlVisual__Fuse_Controls_Circle__uType*)::uAllocClassType(sizeof(ControlVisual__Fuse_Controls_Circle__uType), "Fuse.Controls.Graphics.ControlVisual<Fuse.Controls.Circle>", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::Visual__typeof());
    type->__fp_get_HitTestLocalBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_Circle__get_HitTestLocalBounds;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_Circle__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_Circle__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlVisual__Fuse_Controls_Circle__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlVisual__Fuse_Controls_Circle, _control));

    type->SetFields(1,
        ::uNewField("_control", NULL, offsetof(ControlVisual__Fuse_Controls_Circle, _control), ::app::Fuse::Controls::Circle__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("get_Control", ControlVisual__Fuse_Controls_Circle__get_Control, 0, false, ::app::Fuse::Controls::Circle__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlVisual__Fuse_Controls_Circle___ObjInit_2(ControlVisual__Fuse_Controls_Circle* __this)
{
    ::app::Fuse::Controls::Graphics::Visual___ObjInit_1(__this);
}

::app::Fuse::Controls::Circle* ControlVisual__Fuse_Controls_Circle__FindControl(ControlVisual__Fuse_Controls_Circle* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::Circle__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::Circle*>(p, ::app::Fuse::Controls::Circle__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::Circle* ControlVisual__Fuse_Controls_Circle__get_Control(ControlVisual__Fuse_Controls_Circle* __this)
{
    return __this->_control;
}

::app::Fuse::NodeBounds* ControlVisual__Fuse_Controls_Circle__get_HitTestLocalBounds(ControlVisual__Fuse_Controls_Circle* __this)
{
    return ::app::Fuse::NodeBounds__Rect(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
}

void ControlVisual__Fuse_Controls_Circle__OnRooted(ControlVisual__Fuse_Controls_Circle* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_control = __this->FindControl();

    if ((::uObject*)__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::Circle__typeof())));
    }

    __this->Attach();
}

void ControlVisual__Fuse_Controls_Circle__OnUnrooted(ControlVisual__Fuse_Controls_Circle* __this)
{
    __this->Detach();
    __this->_control = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlVisual__Fuse_Controls_Ellipse__uType* ControlVisual__Fuse_Controls_Ellipse__typeof()
{
    static ::uStaticStrong<ControlVisual__Fuse_Controls_Ellipse__uType*> type;
    if (type != NULL) return type;

    type = (ControlVisual__Fuse_Controls_Ellipse__uType*)::uAllocClassType(sizeof(ControlVisual__Fuse_Controls_Ellipse__uType), "Fuse.Controls.Graphics.ControlVisual<Fuse.Controls.Ellipse>", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::Visual__typeof());
    type->__fp_get_HitTestLocalBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_Ellipse__get_HitTestLocalBounds;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_Ellipse__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_Ellipse__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlVisual__Fuse_Controls_Ellipse__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlVisual__Fuse_Controls_Ellipse, _control));

    type->SetFields(1,
        ::uNewField("_control", NULL, offsetof(ControlVisual__Fuse_Controls_Ellipse, _control), ::app::Fuse::Controls::Ellipse__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("get_Control", ControlVisual__Fuse_Controls_Ellipse__get_Control, 0, false, ::app::Fuse::Controls::Ellipse__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlVisual__Fuse_Controls_Ellipse___ObjInit_2(ControlVisual__Fuse_Controls_Ellipse* __this)
{
    ::app::Fuse::Controls::Graphics::Visual___ObjInit_1(__this);
}

::app::Fuse::Controls::Ellipse* ControlVisual__Fuse_Controls_Ellipse__FindControl(ControlVisual__Fuse_Controls_Ellipse* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::Ellipse__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::Ellipse*>(p, ::app::Fuse::Controls::Ellipse__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::Ellipse* ControlVisual__Fuse_Controls_Ellipse__get_Control(ControlVisual__Fuse_Controls_Ellipse* __this)
{
    return __this->_control;
}

::app::Fuse::NodeBounds* ControlVisual__Fuse_Controls_Ellipse__get_HitTestLocalBounds(ControlVisual__Fuse_Controls_Ellipse* __this)
{
    return ::app::Fuse::NodeBounds__Rect(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
}

void ControlVisual__Fuse_Controls_Ellipse__OnRooted(ControlVisual__Fuse_Controls_Ellipse* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_control = __this->FindControl();

    if ((::uObject*)__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::Ellipse__typeof())));
    }

    __this->Attach();
}

void ControlVisual__Fuse_Controls_Ellipse__OnUnrooted(ControlVisual__Fuse_Controls_Ellipse* __this)
{
    __this->Detach();
    __this->_control = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlVisual__Fuse_Controls_Image__uType* ControlVisual__Fuse_Controls_Image__typeof()
{
    static ::uStaticStrong<ControlVisual__Fuse_Controls_Image__uType*> type;
    if (type != NULL) return type;

    type = (ControlVisual__Fuse_Controls_Image__uType*)::uAllocClassType(sizeof(ControlVisual__Fuse_Controls_Image__uType), "Fuse.Controls.Graphics.ControlVisual<Fuse.Controls.Image>", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::Visual__typeof());
    type->__fp_get_HitTestLocalBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_Image__get_HitTestLocalBounds;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_Image__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_Image__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlVisual__Fuse_Controls_Image__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlVisual__Fuse_Controls_Image, _control));

    type->SetFields(1,
        ::uNewField("_control", NULL, offsetof(ControlVisual__Fuse_Controls_Image, _control), ::app::Fuse::Controls::Image__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("get_Control", ControlVisual__Fuse_Controls_Image__get_Control, 0, false, ::app::Fuse::Controls::Image__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlVisual__Fuse_Controls_Image___ObjInit_2(ControlVisual__Fuse_Controls_Image* __this)
{
    ::app::Fuse::Controls::Graphics::Visual___ObjInit_1(__this);
}

::app::Fuse::Controls::Image* ControlVisual__Fuse_Controls_Image__FindControl(ControlVisual__Fuse_Controls_Image* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::Image__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::Image*>(p, ::app::Fuse::Controls::Image__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::Image* ControlVisual__Fuse_Controls_Image__get_Control(ControlVisual__Fuse_Controls_Image* __this)
{
    return __this->_control;
}

::app::Fuse::NodeBounds* ControlVisual__Fuse_Controls_Image__get_HitTestLocalBounds(ControlVisual__Fuse_Controls_Image* __this)
{
    return ::app::Fuse::NodeBounds__Rect(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
}

void ControlVisual__Fuse_Controls_Image__OnRooted(ControlVisual__Fuse_Controls_Image* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_control = __this->FindControl();

    if ((::uObject*)__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::Image__typeof())));
    }

    __this->Attach();
}

void ControlVisual__Fuse_Controls_Image__OnUnrooted(ControlVisual__Fuse_Controls_Image* __this)
{
    __this->Detach();
    __this->_control = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlVisual__Fuse_Controls_Path__uType* ControlVisual__Fuse_Controls_Path__typeof()
{
    static ::uStaticStrong<ControlVisual__Fuse_Controls_Path__uType*> type;
    if (type != NULL) return type;

    type = (ControlVisual__Fuse_Controls_Path__uType*)::uAllocClassType(sizeof(ControlVisual__Fuse_Controls_Path__uType), "Fuse.Controls.Graphics.ControlVisual<Fuse.Controls.Path>", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::Visual__typeof());
    type->__fp_get_HitTestLocalBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_Path__get_HitTestLocalBounds;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_Path__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_Path__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlVisual__Fuse_Controls_Path__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlVisual__Fuse_Controls_Path, _control));

    type->SetFields(1,
        ::uNewField("_control", NULL, offsetof(ControlVisual__Fuse_Controls_Path, _control), ::app::Fuse::Controls::Path__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("get_Control", ControlVisual__Fuse_Controls_Path__get_Control, 0, false, ::app::Fuse::Controls::Path__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlVisual__Fuse_Controls_Path___ObjInit_2(ControlVisual__Fuse_Controls_Path* __this)
{
    ::app::Fuse::Controls::Graphics::Visual___ObjInit_1(__this);
}

::app::Fuse::Controls::Path* ControlVisual__Fuse_Controls_Path__FindControl(ControlVisual__Fuse_Controls_Path* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::Path__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::Path*>(p, ::app::Fuse::Controls::Path__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::Path* ControlVisual__Fuse_Controls_Path__get_Control(ControlVisual__Fuse_Controls_Path* __this)
{
    return __this->_control;
}

::app::Fuse::NodeBounds* ControlVisual__Fuse_Controls_Path__get_HitTestLocalBounds(ControlVisual__Fuse_Controls_Path* __this)
{
    return ::app::Fuse::NodeBounds__Rect(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
}

void ControlVisual__Fuse_Controls_Path__OnRooted(ControlVisual__Fuse_Controls_Path* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_control = __this->FindControl();

    if ((::uObject*)__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::Path__typeof())));
    }

    __this->Attach();
}

void ControlVisual__Fuse_Controls_Path__OnUnrooted(ControlVisual__Fuse_Controls_Path* __this)
{
    __this->Detach();
    __this->_control = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlVisual__Fuse_Controls_Rectangle__uType* ControlVisual__Fuse_Controls_Rectangle__typeof()
{
    static ::uStaticStrong<ControlVisual__Fuse_Controls_Rectangle__uType*> type;
    if (type != NULL) return type;

    type = (ControlVisual__Fuse_Controls_Rectangle__uType*)::uAllocClassType(sizeof(ControlVisual__Fuse_Controls_Rectangle__uType), "Fuse.Controls.Graphics.ControlVisual<Fuse.Controls.Rectangle>", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::Visual__typeof());
    type->__fp_get_HitTestLocalBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_Rectangle__get_HitTestLocalBounds;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_Rectangle__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_Rectangle__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlVisual__Fuse_Controls_Rectangle__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlVisual__Fuse_Controls_Rectangle, _control));

    type->SetFields(1,
        ::uNewField("_control", NULL, offsetof(ControlVisual__Fuse_Controls_Rectangle, _control), ::app::Fuse::Controls::Rectangle__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("get_Control", ControlVisual__Fuse_Controls_Rectangle__get_Control, 0, false, ::app::Fuse::Controls::Rectangle__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlVisual__Fuse_Controls_Rectangle___ObjInit_2(ControlVisual__Fuse_Controls_Rectangle* __this)
{
    ::app::Fuse::Controls::Graphics::Visual___ObjInit_1(__this);
}

::app::Fuse::Controls::Rectangle* ControlVisual__Fuse_Controls_Rectangle__FindControl(ControlVisual__Fuse_Controls_Rectangle* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::Rectangle__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::Rectangle*>(p, ::app::Fuse::Controls::Rectangle__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::Rectangle* ControlVisual__Fuse_Controls_Rectangle__get_Control(ControlVisual__Fuse_Controls_Rectangle* __this)
{
    return __this->_control;
}

::app::Fuse::NodeBounds* ControlVisual__Fuse_Controls_Rectangle__get_HitTestLocalBounds(ControlVisual__Fuse_Controls_Rectangle* __this)
{
    return ::app::Fuse::NodeBounds__Rect(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
}

void ControlVisual__Fuse_Controls_Rectangle__OnRooted(ControlVisual__Fuse_Controls_Rectangle* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_control = __this->FindControl();

    if ((::uObject*)__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::Rectangle__typeof())));
    }

    __this->Attach();
}

void ControlVisual__Fuse_Controls_Rectangle__OnUnrooted(ControlVisual__Fuse_Controls_Rectangle* __this)
{
    __this->Detach();
    __this->_control = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlVisual__Fuse_Controls_RegularPolygon__uType* ControlVisual__Fuse_Controls_RegularPolygon__typeof()
{
    static ::uStaticStrong<ControlVisual__Fuse_Controls_RegularPolygon__uType*> type;
    if (type != NULL) return type;

    type = (ControlVisual__Fuse_Controls_RegularPolygon__uType*)::uAllocClassType(sizeof(ControlVisual__Fuse_Controls_RegularPolygon__uType), "Fuse.Controls.Graphics.ControlVisual<Fuse.Controls.RegularPolygon>", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::Visual__typeof());
    type->__fp_get_HitTestLocalBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_RegularPolygon__get_HitTestLocalBounds;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_RegularPolygon__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_RegularPolygon__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlVisual__Fuse_Controls_RegularPolygon__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlVisual__Fuse_Controls_RegularPolygon, _control));

    type->SetFields(1,
        ::uNewField("_control", NULL, offsetof(ControlVisual__Fuse_Controls_RegularPolygon, _control), ::app::Fuse::Controls::RegularPolygon__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("get_Control", ControlVisual__Fuse_Controls_RegularPolygon__get_Control, 0, false, ::app::Fuse::Controls::RegularPolygon__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlVisual__Fuse_Controls_RegularPolygon___ObjInit_2(ControlVisual__Fuse_Controls_RegularPolygon* __this)
{
    ::app::Fuse::Controls::Graphics::Visual___ObjInit_1(__this);
}

::app::Fuse::Controls::RegularPolygon* ControlVisual__Fuse_Controls_RegularPolygon__FindControl(ControlVisual__Fuse_Controls_RegularPolygon* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::RegularPolygon__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::RegularPolygon*>(p, ::app::Fuse::Controls::RegularPolygon__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::RegularPolygon* ControlVisual__Fuse_Controls_RegularPolygon__get_Control(ControlVisual__Fuse_Controls_RegularPolygon* __this)
{
    return __this->_control;
}

::app::Fuse::NodeBounds* ControlVisual__Fuse_Controls_RegularPolygon__get_HitTestLocalBounds(ControlVisual__Fuse_Controls_RegularPolygon* __this)
{
    return ::app::Fuse::NodeBounds__Rect(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
}

void ControlVisual__Fuse_Controls_RegularPolygon__OnRooted(ControlVisual__Fuse_Controls_RegularPolygon* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_control = __this->FindControl();

    if ((::uObject*)__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::RegularPolygon__typeof())));
    }

    __this->Attach();
}

void ControlVisual__Fuse_Controls_RegularPolygon__OnUnrooted(ControlVisual__Fuse_Controls_RegularPolygon* __this)
{
    __this->Detach();
    __this->_control = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlVisual__Fuse_Controls_Star__uType* ControlVisual__Fuse_Controls_Star__typeof()
{
    static ::uStaticStrong<ControlVisual__Fuse_Controls_Star__uType*> type;
    if (type != NULL) return type;

    type = (ControlVisual__Fuse_Controls_Star__uType*)::uAllocClassType(sizeof(ControlVisual__Fuse_Controls_Star__uType), "Fuse.Controls.Graphics.ControlVisual<Fuse.Controls.Star>", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::Visual__typeof());
    type->__fp_get_HitTestLocalBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_Star__get_HitTestLocalBounds;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_Star__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_Star__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlVisual__Fuse_Controls_Star__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlVisual__Fuse_Controls_Star, _control));

    type->SetFields(1,
        ::uNewField("_control", NULL, offsetof(ControlVisual__Fuse_Controls_Star, _control), ::app::Fuse::Controls::Star__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("get_Control", ControlVisual__Fuse_Controls_Star__get_Control, 0, false, ::app::Fuse::Controls::Star__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlVisual__Fuse_Controls_Star___ObjInit_2(ControlVisual__Fuse_Controls_Star* __this)
{
    ::app::Fuse::Controls::Graphics::Visual___ObjInit_1(__this);
}

::app::Fuse::Controls::Star* ControlVisual__Fuse_Controls_Star__FindControl(ControlVisual__Fuse_Controls_Star* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::Star__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::Star*>(p, ::app::Fuse::Controls::Star__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::Star* ControlVisual__Fuse_Controls_Star__get_Control(ControlVisual__Fuse_Controls_Star* __this)
{
    return __this->_control;
}

::app::Fuse::NodeBounds* ControlVisual__Fuse_Controls_Star__get_HitTestLocalBounds(ControlVisual__Fuse_Controls_Star* __this)
{
    return ::app::Fuse::NodeBounds__Rect(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
}

void ControlVisual__Fuse_Controls_Star__OnRooted(ControlVisual__Fuse_Controls_Star* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_control = __this->FindControl();

    if ((::uObject*)__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::Star__typeof())));
    }

    __this->Attach();
}

void ControlVisual__Fuse_Controls_Star__OnUnrooted(ControlVisual__Fuse_Controls_Star* __this)
{
    __this->Detach();
    __this->_control = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlVisual__Fuse_Controls_TextControl__uType* ControlVisual__Fuse_Controls_TextControl__typeof()
{
    static ::uStaticStrong<ControlVisual__Fuse_Controls_TextControl__uType*> type;
    if (type != NULL) return type;

    type = (ControlVisual__Fuse_Controls_TextControl__uType*)::uAllocClassType(sizeof(ControlVisual__Fuse_Controls_TextControl__uType), "Fuse.Controls.Graphics.ControlVisual<Fuse.Controls.TextControl>", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::Visual__typeof());
    type->__fp_get_HitTestLocalBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_TextControl__get_HitTestLocalBounds;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_TextControl__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_TextControl__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlVisual__Fuse_Controls_TextControl__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlVisual__Fuse_Controls_TextControl, _control));

    type->SetFields(1,
        ::uNewField("_control", NULL, offsetof(ControlVisual__Fuse_Controls_TextControl, _control), ::app::Fuse::Controls::TextControl__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("get_Control", ControlVisual__Fuse_Controls_TextControl__get_Control, 0, false, ::app::Fuse::Controls::TextControl__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlVisual__Fuse_Controls_TextControl___ObjInit_2(ControlVisual__Fuse_Controls_TextControl* __this)
{
    ::app::Fuse::Controls::Graphics::Visual___ObjInit_1(__this);
}

::app::Fuse::Controls::TextControl* ControlVisual__Fuse_Controls_TextControl__FindControl(ControlVisual__Fuse_Controls_TextControl* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::TextControl__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::TextControl*>(p, ::app::Fuse::Controls::TextControl__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::TextControl* ControlVisual__Fuse_Controls_TextControl__get_Control(ControlVisual__Fuse_Controls_TextControl* __this)
{
    return __this->_control;
}

::app::Fuse::NodeBounds* ControlVisual__Fuse_Controls_TextControl__get_HitTestLocalBounds(ControlVisual__Fuse_Controls_TextControl* __this)
{
    return ::app::Fuse::NodeBounds__Rect(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
}

void ControlVisual__Fuse_Controls_TextControl__OnRooted(ControlVisual__Fuse_Controls_TextControl* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_control = __this->FindControl();

    if ((::uObject*)__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::TextControl__typeof())));
    }

    __this->Attach();
}

void ControlVisual__Fuse_Controls_TextControl__OnUnrooted(ControlVisual__Fuse_Controls_TextControl* __this)
{
    __this->Detach();
    __this->_control = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlVisual__Fuse_Controls_TextInput__uType* ControlVisual__Fuse_Controls_TextInput__typeof()
{
    static ::uStaticStrong<ControlVisual__Fuse_Controls_TextInput__uType*> type;
    if (type != NULL) return type;

    type = (ControlVisual__Fuse_Controls_TextInput__uType*)::uAllocClassType(sizeof(ControlVisual__Fuse_Controls_TextInput__uType), "Fuse.Controls.Graphics.ControlVisual<Fuse.Controls.TextInput>", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::Visual__typeof());
    type->__fp_get_HitTestLocalBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_TextInput__get_HitTestLocalBounds;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_TextInput__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))ControlVisual__Fuse_Controls_TextInput__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlVisual__Fuse_Controls_TextInput__uType, __interface_0));

    type->SetStrongRefs(
        "_control", offsetof(ControlVisual__Fuse_Controls_TextInput, _control));

    type->SetFields(1,
        ::uNewField("_control", NULL, offsetof(ControlVisual__Fuse_Controls_TextInput, _control), ::app::Fuse::Controls::TextInput__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("get_Control", ControlVisual__Fuse_Controls_TextInput__get_Control, 0, false, ::app::Fuse::Controls::TextInput__typeof()));

    ::uRegisterType(type);
    return type;
}

void ControlVisual__Fuse_Controls_TextInput___ObjInit_2(ControlVisual__Fuse_Controls_TextInput* __this)
{
    ::app::Fuse::Controls::Graphics::Visual___ObjInit_1(__this);
}

::app::Fuse::Controls::TextInput* ControlVisual__Fuse_Controls_TextInput__FindControl(ControlVisual__Fuse_Controls_TextInput* __this)
{
    ::app::Fuse::Node* p = (::app::Fuse::Node*)__this;

    while (p != NULL)
    {
        if (::uIs(p, ::app::Fuse::Controls::TextInput__typeof()))
        {
            return ::uCast< ::app::Fuse::Controls::TextInput*>(p, ::app::Fuse::Controls::TextInput__typeof());
        }

        p = ::uPtr< ::app::Fuse::Node*>(p)->Parent();
    }

    return NULL;
}

::app::Fuse::Controls::TextInput* ControlVisual__Fuse_Controls_TextInput__get_Control(ControlVisual__Fuse_Controls_TextInput* __this)
{
    return __this->_control;
}

::app::Fuse::NodeBounds* ControlVisual__Fuse_Controls_TextInput__get_HitTestLocalBounds(ControlVisual__Fuse_Controls_TextInput* __this)
{
    return ::app::Fuse::NodeBounds__Rect(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
}

void ControlVisual__Fuse_Controls_TextInput__OnRooted(ControlVisual__Fuse_Controls_TextInput* __this)
{
    ::app::Fuse::Node__OnRooted(__this);
    __this->_control = __this->FindControl();

    if ((::uObject*)__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" must be rooted in the subtree of a ")), (::uObject*)(::uType*)::app::Fuse::Controls::TextInput__typeof())));
    }

    __this->Attach();
}

void ControlVisual__Fuse_Controls_TextInput__OnUnrooted(ControlVisual__Fuse_Controls_TextInput* __this)
{
    __this->Detach();
    __this->_control = NULL;
    ::app::Fuse::Node__OnUnrooted(__this);
}

}}}}
