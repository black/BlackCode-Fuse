// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
namespace g{namespace Fuse{namespace Controls{struct PropertyBinding;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace UX{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class PropertyBinding<T> :460
// {
::g::Fuse::Behavior_type* PropertyBinding_typeof();
void PropertyBinding__ctor_1_fn(PropertyBinding* __this, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source);
void PropertyBinding__New1_fn(uType* __type, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, PropertyBinding** __retval);
void PropertyBinding__OnRooted_fn(PropertyBinding* __this, ::g::Fuse::Node* parentNode);
void PropertyBinding__OnSourceValueChanged_fn(PropertyBinding* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* args);
void PropertyBinding__OnTargetValueChanged_fn(PropertyBinding* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* args);
void PropertyBinding__OnUnrooted_fn(PropertyBinding* __this, ::g::Fuse::Node* parentNode);
void PropertyBinding__get_Source_fn(PropertyBinding* __this, ::g::Uno::UX::Property** __retval);
void PropertyBinding__set_Source_fn(PropertyBinding* __this, ::g::Uno::UX::Property* value);
void PropertyBinding__get_Target_fn(PropertyBinding* __this, ::g::Uno::UX::Property** __retval);
void PropertyBinding__set_Target_fn(PropertyBinding* __this, ::g::Uno::UX::Property* value);

struct PropertyBinding : ::g::Fuse::Behavior
{
    uStrong< ::g::Uno::UX::Property*> _Source;
    uStrong< ::g::Uno::UX::Property*> _Target;

    void ctor_1(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source);
    void OnSourceValueChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* args);
    void OnTargetValueChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* args);
    ::g::Uno::UX::Property* Source();
    void Source(::g::Uno::UX::Property* value);
    ::g::Uno::UX::Property* Target();
    void Target(::g::Uno::UX::Property* value);
    static PropertyBinding* New1(uType* __type, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source);
};
// }

}}} // ::g::Fuse::Controls
