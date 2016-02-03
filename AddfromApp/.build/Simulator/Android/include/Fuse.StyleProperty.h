// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct StyleProperty;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{

// public abstract class StyleProperty :5413
// {
struct StyleProperty_type : uType
{
    void(*fp_HasValueFor)(::g::Fuse::StyleProperty*, uObject*, bool*);
    void(*fp_ResetFor)(::g::Fuse::StyleProperty*, ::g::Fuse::Node*);
    void(*fp_ResetStyleFor)(::g::Fuse::StyleProperty*, ::g::Fuse::Node*);
};

StyleProperty_type* StyleProperty_typeof();
void StyleProperty__ctor__fn(StyleProperty* __this);
void StyleProperty__ResetAll_fn(::g::Fuse::Node* n);
void StyleProperty__ResetAllStyle_fn(::g::Fuse::Node* n);

struct StyleProperty : uObject
{
    static int _propertyEnum_;
    static int& _propertyEnum() { return _propertyEnum_; }
    static uSStrong< ::g::Uno::Collections::List*> All_;
    static uSStrong< ::g::Uno::Collections::List*>& All() { return All_; }

    void ctor_();
    bool HasValueFor(uObject* owner) { bool __retval; return (((StyleProperty_type*)__type)->fp_HasValueFor)(this, owner, &__retval), __retval; }
    void ResetFor(::g::Fuse::Node* n) { (((StyleProperty_type*)__type)->fp_ResetFor)(this, n); }
    void ResetStyleFor(::g::Fuse::Node* n) { (((StyleProperty_type*)__type)->fp_ResetStyleFor)(this, n); }
    static void ResetAll(::g::Fuse::Node* n);
    static void ResetAllStyle(::g::Fuse::Node* n);
};
// }

}} // ::g::Fuse
