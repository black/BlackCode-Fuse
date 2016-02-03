// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.ITemplate.h>
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Uno{
namespace UX{

// public abstract class Template<T> :385
// {
struct Template_type : uType
{
    ::g::Uno::UX::ITemplate interface0;
    void(*fp_OnApply)(::g::Uno::UX::Template*, void*);
};

Template_type* Template_typeof();
void Template__ctor__fn(Template* __this);
void Template__get_AffectSubtypes_fn(Template* __this, bool* __retval);
void Template__set_AffectSubtypes_fn(Template* __this, bool* value);
void Template__Apply_fn(Template* __this, uObject* obj, bool* __retval);
void Template__get_Cascade_fn(Template* __this, bool* __retval);
void Template__set_Cascade_fn(Template* __this, bool* value);

struct Template : uObject
{
    bool _affectSubtypes;
    bool _cascade;

    void ctor_();
    bool AffectSubtypes();
    void AffectSubtypes(bool value);
    bool Apply(uObject* obj);
    bool Cascade();
    void Cascade(bool value);
    template<class T>
    void OnApply(T obj) { (((Template_type*)__type)->fp_OnApply)(this, uConstrain(__type->GetBase(Template_typeof())->T(0), obj)); }
    void OnApply_ex(void* obj) { (((Template_type*)__type)->fp_OnApply)(this, obj); }
};
// }

}}} // ::g::Uno::UX
