// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.AppBase.h>
namespace g{namespace Fuse{namespace Controls{struct GraphicsView;}}}
namespace g{namespace Fuse{struct App;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Theme;}}

namespace g{
namespace Fuse{

// public abstract extern class App :9
// {
::g::Fuse::AppBase_type* App_typeof();
void App__ctor_2_fn(App* __this);
void App__OnSetRootNode_fn(App* __this, ::g::Fuse::Node* root);
void App__OnSetTheme_fn(App* __this, ::g::Fuse::Theme* theme);
void App__PropagateBackground_fn(App* __this);

struct App : ::g::Fuse::AppBase
{
    uStrong< ::g::Fuse::Controls::GraphicsView*> _graphicsView;

    void ctor_2();
    void PropagateBackground();
};
// }

}} // ::g::Fuse
