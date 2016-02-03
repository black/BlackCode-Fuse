// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.ITemplate.h>
namespace g{namespace Fuse{struct Style;}}
namespace g{namespace Uno{namespace UX{struct Resource;}}}

namespace g{
namespace Fuse{

// public class Style :5753
// {
struct Style_type : uType
{
    ::g::Uno::UX::ITemplate interface0;
};

Style_type* Style_typeof();
void Style__ctor__fn(Style* __this);
void Style__Apply_fn(Style* __this, uObject* target, bool* __retval);
void Style__get_HasResources_fn(Style* __this, bool* __retval);
void Style__New1_fn(Style** __retval);
void Style__OnResourceChanged_fn(Style* __this, ::g::Uno::UX::Resource* r);
void Style__OnTemplateAdded_fn(Style* __this, uObject* tpl);
void Style__OnTemplateRemoved_fn(Style* __this, uObject* tpl);
void Style__OnTemplatesChanged_fn(Style* __this);
void Style__get_Resources_fn(Style* __this, uObject** __retval);
void Style__get_Styles_fn(Style* __this, uObject** __retval);
void Style__get_Templates_fn(Style* __this, uObject** __retval);
void Style__add_TemplatesChanged_fn(Style* __this, uDelegate* value);
void Style__remove_TemplatesChanged_fn(Style* __this, uDelegate* value);
void Style__TryGetResource_fn(Style* __this, uString* key, uDelegate* acceptor, uObject** resource, bool* __retval);

struct Style : uObject
{
    uStrong<uObject*> _resources;
    uStrong<uObject*> _styles;
    uStrong<uObject*> _templates;
    bool AddedByStyle;
    uStrong<uDelegate*> TemplatesChanged1;

    void ctor_();
    bool Apply(uObject* target);
    bool HasResources();
    void OnResourceChanged(::g::Uno::UX::Resource* r);
    void OnTemplateAdded(uObject* tpl);
    void OnTemplateRemoved(uObject* tpl);
    void OnTemplatesChanged();
    uObject* Resources();
    uObject* Styles();
    uObject* Templates();
    void add_TemplatesChanged(uDelegate* value);
    void remove_TemplatesChanged(uDelegate* value);
    bool TryGetResource(uString* key, uDelegate* acceptor, uObject** resource);
    static Style* New1();
};
// }

}} // ::g::Fuse
