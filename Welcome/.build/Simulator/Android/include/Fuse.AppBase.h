// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Application.h>
namespace g{namespace Fuse{struct AppBase;}}
namespace g{namespace Fuse{struct Behavior;}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct RootViewport;}}
namespace g{namespace Fuse{struct Style;}}
namespace g{namespace Fuse{struct Theme;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Resource;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Exception;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{

// public abstract class AppBase :30
// {
struct AppBase_type : uType
{
    void(*fp_OnSetRootNode)(::g::Fuse::AppBase*, ::g::Fuse::Node*);
    void(*fp_OnSetTheme)(::g::Fuse::AppBase*, ::g::Fuse::Theme*);
    void(*fp_OnUpdate)(::g::Fuse::AppBase*);
};

AppBase_type* AppBase_typeof();
void AppBase__ctor_1_fn(AppBase* __this);
void AppBase__get_Background_fn(AppBase* __this, ::g::Uno::Float4* __retval);
void AppBase__set_Background_fn(AppBase* __this, ::g::Uno::Float4* value);
void AppBase__get_Behaviors_fn(AppBase* __this, uObject** __retval);
void AppBase__CheckPendingReify_fn(AppBase* __this);
void AppBase__get_Current1_fn(AppBase** __retval);
void AppBase__DrawSelection_fn(AppBase* __this, ::g::Fuse::DrawContext* dc);
void AppBase__FindSelection_fn(AppBase* __this, ::g::Fuse::Node* n);
void AppBase__get_NativeStyle_fn(AppBase* __this, ::g::Fuse::Style** __retval);
void AppBase__set_NativeStyle_fn(AppBase* __this, ::g::Fuse::Style* value);
void AppBase__OnEnteringBackground_fn(AppBase* __this, int* s);
void AppBase__OnLowMemory_fn(AppBase* __this, uObject* s, uObject* a);
void AppBase__OnSelectionChanged_fn(AppBase* __this, uObject* sender, ::g::Uno::EventArgs* args);
void AppBase__OnSetTheme_fn(AppBase* __this, ::g::Fuse::Theme* theme);
void AppBase__OnUnhandledException_fn(AppBase* __this, ::g::Uno::Exception* e);
void AppBase__OnUnhandledExceptionInternal_fn(::g::Uno::Exception* e);
void AppBase__OnUpdate_fn(AppBase* __this);
void AppBase__get_Resources_fn(AppBase* __this, uObject** __retval);
void AppBase__get_RootNode_fn(AppBase* __this, ::g::Fuse::Node** __retval);
void AppBase__set_RootNode_fn(AppBase* __this, ::g::Fuse::Node* value);
void AppBase__get_RootViewport_fn(AppBase* __this, ::g::Fuse::RootViewport** __retval);
void AppBase__set_RootViewport_fn(AppBase* __this, ::g::Fuse::RootViewport* value);
void AppBase__get_Theme_fn(AppBase* __this, ::g::Fuse::Theme** __retval);
void AppBase__set_Theme_fn(AppBase* __this, ::g::Fuse::Theme* value);
void AppBase__add_UnhandledException_fn(AppBase* __this, uDelegate* value);
void AppBase__remove_UnhandledException_fn(AppBase* __this, uDelegate* value);

struct AppBase : ::g::Uno::Application
{
    bool _hasPendingReify;
    bool _hasPendingRootNode;
    uStrong< ::g::Fuse::Node*> _pendingRootNode;
    uStrong< ::g::Fuse::Theme*> _pendingTheme;
    uStrong< ::g::Fuse::Node*> _rootNode;
    uStrong< ::g::Uno::Collections::List*> _selection;
    uStrong< ::g::Fuse::Theme*> _theme;
    uStrong< ::g::Fuse::Style*> _NativeStyle;
    uStrong< ::g::Fuse::RootViewport*> _RootViewport;
    uStrong<uDelegate*> UnhandledException1;

    void ctor_1();
    ::g::Uno::Float4 Background();
    void Background(::g::Uno::Float4 value);
    uObject* Behaviors();
    void CheckPendingReify();
    void DrawSelection(::g::Fuse::DrawContext* dc);
    void FindSelection(::g::Fuse::Node* n);
    ::g::Fuse::Style* NativeStyle();
    void NativeStyle(::g::Fuse::Style* value);
    void OnEnteringBackground(int s);
    void OnLowMemory(uObject* s, uObject* a);
    void OnSelectionChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnSetRootNode(::g::Fuse::Node* root) { (((AppBase_type*)__type)->fp_OnSetRootNode)(this, root); }
    void OnSetTheme(::g::Fuse::Theme* theme) { (((AppBase_type*)__type)->fp_OnSetTheme)(this, theme); }
    void OnUnhandledException(::g::Uno::Exception* e);
    void OnUpdate() { (((AppBase_type*)__type)->fp_OnUpdate)(this); }
    uObject* Resources();
    ::g::Fuse::Node* RootNode();
    void RootNode(::g::Fuse::Node* value);
    ::g::Fuse::RootViewport* RootViewport();
    void RootViewport(::g::Fuse::RootViewport* value);
    ::g::Fuse::Theme* Theme();
    void Theme(::g::Fuse::Theme* value);
    void add_UnhandledException(uDelegate* value);
    void remove_UnhandledException(uDelegate* value);
    static void OnSetTheme(AppBase* __this, ::g::Fuse::Theme* theme) { AppBase__OnSetTheme_fn(__this, theme); }
    static void OnUnhandledExceptionInternal(::g::Uno::Exception* e);
    static void OnUpdate(AppBase* __this) { AppBase__OnUpdate_fn(__this); }
    static AppBase* Current1();
};
// }

}} // ::g::Fuse
