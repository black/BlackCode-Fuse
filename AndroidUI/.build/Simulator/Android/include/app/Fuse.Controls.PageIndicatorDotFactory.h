// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_PAGE_INDICATOR_DOT_FACTORY_H__
#define __APP_FUSE_CONTROLS_PAGE_INDICATOR_DOT_FACTORY_H__

#include <app/Uno.Object.h>
#include <app/Uno.UX.IFactory.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Controls {

struct PageIndicatorDotFactory;

struct PageIndicatorDotFactory__uType : ::uClassType
{
    ::app::Uno::UX::IFactory __interface_0;
};

PageIndicatorDotFactory__uType* PageIndicatorDotFactory__typeof();

void PageIndicatorDotFactory___ObjInit(PageIndicatorDotFactory* __this);
::uObject* PageIndicatorDotFactory__New_1(PageIndicatorDotFactory* __this);
PageIndicatorDotFactory* PageIndicatorDotFactory__New_2(::uStatic* __this);

struct PageIndicatorDotFactory : ::uObject
{
    void _ObjInit() { PageIndicatorDotFactory___ObjInit(this); }
    ::uObject* New_1() { return PageIndicatorDotFactory__New_1(this); }
};

}}}


#endif
