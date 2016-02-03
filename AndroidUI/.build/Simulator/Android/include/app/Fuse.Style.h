// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_STYLE_H__
#define __APP_FUSE_STYLE_H__

#include <app/Uno.Object.h>
#include <app/Uno.UX.ITemplate.h>
#include <Uno.h>
namespace app { namespace Uno { namespace UX { struct Resource; } } }

namespace app {
namespace Fuse {

struct Style;

struct Style__uType : ::uClassType
{
    ::app::Uno::UX::ITemplate __interface_0;
};

Style__uType* Style__typeof();

void Style___ObjInit(Style* __this);
void Style__add_TemplatesChanged(Style* __this, ::uDelegate* value);
bool Style__Apply(Style* __this, ::uObject* target);
bool Style__get_HasResources(Style* __this);
::uObject* Style__get_Resources(Style* __this);
::uObject* Style__get_Styles(Style* __this);
::uObject* Style__get_Templates(Style* __this);
Style* Style__New_1(::uStatic* __this);
void Style__OnResourceChanged(Style* __this, ::app::Uno::UX::Resource* r);
void Style__OnTemplateAdded(Style* __this, ::uObject* tpl);
void Style__OnTemplateRemoved(Style* __this, ::uObject* tpl);
void Style__OnTemplatesChanged(Style* __this);
void Style__remove_TemplatesChanged(Style* __this, ::uDelegate* value);
bool Style__TryGetResource(Style* __this, ::uString* key, ::uDelegate* acceptor, ::uObject** resource);

struct Style : ::uObject
{
    ::uStrong< ::uObject*> _templates;
    ::uStrong< ::uObject*> _styles;
    bool AddedByStyle;
    ::uStrong< ::uObject*> _resources;
    ::uStrong< ::uDelegate*> TemplatesChanged;

    void _ObjInit() { Style___ObjInit(this); }
    void add_TemplatesChanged(::uDelegate* value) { Style__add_TemplatesChanged(this, value); }
    bool Apply(::uObject* target) { return Style__Apply(this, target); }
    bool HasResources() { return Style__get_HasResources(this); }
    ::uObject* Resources() { return Style__get_Resources(this); }
    ::uObject* Styles() { return Style__get_Styles(this); }
    ::uObject* Templates() { return Style__get_Templates(this); }
    void OnResourceChanged(::app::Uno::UX::Resource* r) { Style__OnResourceChanged(this, r); }
    void OnTemplateAdded(::uObject* tpl) { Style__OnTemplateAdded(this, tpl); }
    void OnTemplateRemoved(::uObject* tpl) { Style__OnTemplateRemoved(this, tpl); }
    void OnTemplatesChanged() { Style__OnTemplatesChanged(this); }
    void remove_TemplatesChanged(::uDelegate* value) { Style__remove_TemplatesChanged(this, value); }
    bool TryGetResource(::uString* key, ::uDelegate* acceptor, ::uObject** resource) { return Style__TryGetResource(this, key, acceptor, resource); }
};

}}


#endif
