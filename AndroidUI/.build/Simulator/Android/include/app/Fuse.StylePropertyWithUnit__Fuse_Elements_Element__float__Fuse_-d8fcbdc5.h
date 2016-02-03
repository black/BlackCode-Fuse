// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY_WITH_UNIT__FUSE_ELEMENTS_ELEMENT__FLOAT__FUSE__D8FCBDC5_H__
#define __APP_FUSE_STYLE_PROPERTY_WITH_UNIT__FUSE_ELEMENTS_ELEMENT__FLOAT__FUSE__D8FCBDC5_H__

#include <app/Fuse.StyleProperty__Fuse_Elements_Element__float.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {

struct StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit;

struct StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__uType : ::app::Fuse::StyleProperty__Fuse_Elements_Element__float__uType
{
};

StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__uType* StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__typeof();

void StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit___ObjInit_3(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* __this, float defaultValue, int defaultUnit, ::uDelegate* changedCallback);
void StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit___ObjInit_4(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* __this, float defaultValue, int defaultUnit, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
int StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__GetUnit(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Elements::Element* owner);
StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__New_3(::uStatic* __this, float defaultValue, int defaultUnit, ::uDelegate* changedCallback);
StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__New_4(::uStatic* __this, float defaultValue, int defaultUnit, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter);
bool StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__Reset_1(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Elements::Element* owner);
void StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__ResetFor(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Node* n);
bool StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__Set_1(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Elements::Element* owner, float value, int unit);
bool StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__SetStyle_1(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Elements::Element* owner, float value, int unit);

struct StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit : ::app::Fuse::StyleProperty__Fuse_Elements_Element__float
{
    int _unitId;
    ::uStrong< ::app::Fuse::PropertyHandle*> _unitHandle;
    int _defaultUnit;

    void _ObjInit_3(float defaultValue, int defaultUnit, ::uDelegate* changedCallback) { StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit___ObjInit_3(this, defaultValue, defaultUnit, changedCallback); }
    void _ObjInit_4(float defaultValue, int defaultUnit, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter) { StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit___ObjInit_4(this, defaultValue, defaultUnit, changedCallback, setter, getter); }
    int GetUnit(::app::Fuse::Elements::Element* owner) { return StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__GetUnit(this, owner); }
    bool Reset_1(::app::Fuse::Elements::Element* owner) { return StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__Reset_1(this, owner); }
    bool Set_1(::app::Fuse::Elements::Element* owner, float value, int unit) { return StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__Set_1(this, owner, value, unit); }
    bool SetStyle_1(::app::Fuse::Elements::Element* owner, float value, int unit) { return StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__SetStyle_1(this, owner, value, unit); }
};

}}


#endif
