// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_PROPERTY_H__
#define __APP_FUSE_STYLE_PROPERTY_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_StyleProperty; } } }

namespace app {
namespace Fuse {

struct StyleProperty;

extern int StyleProperty___propertyEnum;
extern ::uStaticStrong< ::app::Uno::Collections::List__Fuse_StyleProperty*> StyleProperty__All;

struct StyleProperty__uType : ::uClassType
{
    bool(*__fp_HasValueFor)(StyleProperty*, ::uObject*);
    void(*__fp_ResetFor)(StyleProperty*, ::app::Fuse::Node*);
    void(*__fp_ResetStyleFor)(StyleProperty*, ::app::Fuse::Node*);
};

StyleProperty__uType* StyleProperty__typeof();

void StyleProperty___ObjInit(StyleProperty* __this);
void StyleProperty__ResetAll(::uStatic* __this, ::app::Fuse::Node* n);
void StyleProperty__ResetAllStyle(::uStatic* __this, ::app::Fuse::Node* n);

struct StyleProperty : ::uObject
{
    void _ObjInit() { StyleProperty___ObjInit(this); }
    bool HasValueFor(::uObject* owner) { return (((StyleProperty__uType*)this->__obj_type)->__fp_HasValueFor)(this, owner); }
    void ResetFor(::app::Fuse::Node* n) { (((StyleProperty__uType*)this->__obj_type)->__fp_ResetFor)(this, n); }
    void ResetStyleFor(::app::Fuse::Node* n) { (((StyleProperty__uType*)this->__obj_type)->__fp_ResetStyleFor)(this, n); }
};

}}


#endif
