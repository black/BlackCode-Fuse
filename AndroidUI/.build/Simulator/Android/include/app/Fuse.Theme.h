// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_THEME_H__
#define __APP_FUSE_THEME_H__

#include <app/Fuse.Style.h>
#include <app/Uno.UX.ITemplate.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {

struct Theme;

struct Theme__uType : ::app::Fuse::Style__uType
{
};

Theme__uType* Theme__typeof();

void Theme___ObjInit_1(Theme* __this);
void Theme___ObjInit_2(Theme* __this, ::app::Fuse::Node* rootMediator);

struct Theme : ::app::Fuse::Style
{
    ::uStrong< ::app::Fuse::Node*> RootMediator;

    void _ObjInit_1() { Theme___ObjInit_1(this); }
    void _ObjInit_2(::app::Fuse::Node* rootMediator) { Theme___ObjInit_2(this, rootMediator); }
};

}}


#endif
