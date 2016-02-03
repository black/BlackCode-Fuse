// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_APP_BASE_H__
#define __APP_FUSE_APP_BASE_H__

#include <app/Uno.Application.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct RootViewport; } }
namespace app { namespace Fuse { struct Theme; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Node; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Exception; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {

struct AppBase;

struct AppBase__uType : ::app::Uno::Application__uType
{
    void(*__fp_OnSetRootNode)(AppBase*, ::app::Fuse::Node*);
    void(*__fp_OnSetTheme)(AppBase*, ::app::Fuse::Theme*);
    void(*__fp_OnUpdate)(AppBase*);
};

AppBase__uType* AppBase__typeof();

void AppBase___ObjInit_1(AppBase* __this);
void AppBase__add_UnhandledException(AppBase* __this, ::uDelegate* value);
void AppBase__CheckPending(AppBase* __this);
void AppBase__DrawSelection(AppBase* __this, ::app::Fuse::DrawContext* dc);
void AppBase__FindSelection(AppBase* __this, ::app::Fuse::Node* n);
::app::Uno::Float4 AppBase__get_Background(AppBase* __this);
::uObject* AppBase__get_Behaviors(AppBase* __this);
AppBase* AppBase__get_Current_1(::uStatic* __this);
::uObject* AppBase__get_Resources(AppBase* __this);
::app::Fuse::Node* AppBase__get_RootNode(AppBase* __this);
::app::Fuse::RootViewport* AppBase__get_RootViewport(AppBase* __this);
::app::Fuse::Theme* AppBase__get_Theme(AppBase* __this);
void AppBase__OnEnteringBackground(AppBase* __this, int s);
void AppBase__OnLowMemory(AppBase* __this, ::uObject* s, ::uObject* a);
void AppBase__OnSelectionChanged(AppBase* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void AppBase__OnSetTheme(AppBase* __this, ::app::Fuse::Theme* theme);
void AppBase__OnUnhandledException(AppBase* __this, ::app::Uno::Exception* e);
void AppBase__OnUnhandledExceptionInternal(::uStatic* __this, ::app::Uno::Exception* e);
void AppBase__OnUpdate(AppBase* __this);
void AppBase__remove_UnhandledException(AppBase* __this, ::uDelegate* value);
void AppBase__set_Background(AppBase* __this, ::app::Uno::Float4 value);
void AppBase__set_RootNode(AppBase* __this, ::app::Fuse::Node* value);
void AppBase__set_RootViewport(AppBase* __this, ::app::Fuse::RootViewport* value);
void AppBase__set_Theme(AppBase* __this, ::app::Fuse::Theme* value);

struct AppBase : ::app::Uno::Application
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Node*> _selection;
    bool _hasPendingRootNode;
    ::uStrong< ::app::Fuse::Node*> _rootNode;
    ::uStrong< ::app::Fuse::Node*> _pendingRootNode;
    ::uStrong< ::app::Fuse::Theme*> _theme;
    ::uStrong< ::app::Fuse::Theme*> _pendingTheme;
    ::uStrong< ::uDelegate*> UnhandledException;
    ::uStrong< ::app::Fuse::RootViewport*> _RootViewport;

    void _ObjInit_1() { AppBase___ObjInit_1(this); }
    void add_UnhandledException(::uDelegate* value) { AppBase__add_UnhandledException(this, value); }
    void CheckPending() { AppBase__CheckPending(this); }
    void DrawSelection(::app::Fuse::DrawContext* dc) { AppBase__DrawSelection(this, dc); }
    void FindSelection(::app::Fuse::Node* n) { AppBase__FindSelection(this, n); }
    ::app::Uno::Float4 Background();
    ::uObject* Behaviors() { return AppBase__get_Behaviors(this); }
    ::uObject* Resources() { return AppBase__get_Resources(this); }
    ::app::Fuse::Node* RootNode() { return AppBase__get_RootNode(this); }
    ::app::Fuse::RootViewport* RootViewport() { return AppBase__get_RootViewport(this); }
    ::app::Fuse::Theme* Theme() { return AppBase__get_Theme(this); }
    void OnEnteringBackground(int s) { AppBase__OnEnteringBackground(this, s); }
    void OnLowMemory(::uObject* s, ::uObject* a) { AppBase__OnLowMemory(this, s, a); }
    void OnSelectionChanged(::uObject* sender, ::app::Uno::EventArgs* args) { AppBase__OnSelectionChanged(this, sender, args); }
    void OnSetRootNode(::app::Fuse::Node* root) { (((AppBase__uType*)this->__obj_type)->__fp_OnSetRootNode)(this, root); }
    void OnSetTheme(::app::Fuse::Theme* theme) { (((AppBase__uType*)this->__obj_type)->__fp_OnSetTheme)(this, theme); }
    void OnUnhandledException(::app::Uno::Exception* e) { AppBase__OnUnhandledException(this, e); }
    void OnUpdate() { (((AppBase__uType*)this->__obj_type)->__fp_OnUpdate)(this); }
    void remove_UnhandledException(::uDelegate* value) { AppBase__remove_UnhandledException(this, value); }
    void Background(::app::Uno::Float4 value);
    void RootNode(::app::Fuse::Node* value) { AppBase__set_RootNode(this, value); }
    void RootViewport(::app::Fuse::RootViewport* value) { AppBase__set_RootViewport(this, value); }
    void Theme(::app::Fuse::Theme* value) { AppBase__set_Theme(this, value); }
};

}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float4 AppBase::Background() { return AppBase__get_Background(this); }
inline void AppBase::Background(::app::Uno::Float4 value) { AppBase__set_Background(this, value); }

}}


#endif
