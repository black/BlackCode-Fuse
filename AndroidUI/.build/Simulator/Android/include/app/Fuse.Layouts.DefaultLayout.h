// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAYOUTS_DEFAULT_LAYOUT_H__
#define __APP_FUSE_LAYOUTS_DEFAULT_LAYOUT_H__

#include <app/Fuse.Layouts.Layout.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Layouts {

struct DefaultLayout;

struct DefaultLayout__uType : ::app::Fuse::Layouts::Layout__uType
{
};

DefaultLayout__uType* DefaultLayout__typeof();

void DefaultLayout___ObjInit_1(DefaultLayout* __this);
void DefaultLayout__ArrangePaddingBox(DefaultLayout* __this, ::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize);
::app::Uno::Float2 DefaultLayout__GetContentSize(DefaultLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Float2 DefaultLayout__GetElementsSize(DefaultLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
int DefaultLayout__IsMarginBoxDependent(DefaultLayout* __this, ::app::Fuse::Node* child);
DefaultLayout* DefaultLayout__New_1(::uStatic* __this);

struct DefaultLayout : ::app::Fuse::Layouts::Layout
{
    void _ObjInit_1() { DefaultLayout___ObjInit_1(this); }
    ::app::Uno::Float2 GetElementsSize(::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Layouts {

inline ::app::Uno::Float2 DefaultLayout::GetElementsSize(::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet) { return DefaultLayout__GetElementsSize(this, elements, fillSize, fillSet); }

}}}


#endif
