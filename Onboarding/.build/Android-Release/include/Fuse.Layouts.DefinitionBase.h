// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Layouts{struct DefinitionBase;}}}

namespace g{
namespace Fuse{
namespace Layouts{

// public abstract class DefinitionBase :391
// {
uType* DefinitionBase_typeof();
void DefinitionBase__ctor__fn(DefinitionBase* __this);
void DefinitionBase__get_ActualOffset_fn(DefinitionBase* __this, float* __retval);
void DefinitionBase__set_ActualOffset_fn(DefinitionBase* __this, float* value);
void DefinitionBase__add_Changed_fn(DefinitionBase* __this, uDelegate* value);
void DefinitionBase__remove_Changed_fn(DefinitionBase* __this, uDelegate* value);
void DefinitionBase__get_Implicit_fn(DefinitionBase* __this, bool* __retval);
void DefinitionBase__set_Implicit_fn(DefinitionBase* __this, bool* value);
void DefinitionBase__OnChanged_fn(DefinitionBase* __this);

struct DefinitionBase : uObject
{
    float _actualOffset;
    bool _Implicit;
    uStrong<uDelegate*> Changed1;

    void ctor_();
    float ActualOffset();
    void ActualOffset(float value);
    void add_Changed(uDelegate* value);
    void remove_Changed(uDelegate* value);
    bool Implicit();
    void Implicit(bool value);
    void OnChanged();
};
// }

}}} // ::g::Fuse::Layouts
