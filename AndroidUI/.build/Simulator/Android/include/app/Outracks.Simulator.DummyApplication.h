// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_DUMMY_APPLICATION_H__
#define __APP_OUTRACKS_SIMULATOR_DUMMY_APPLICATION_H__

#include <app/Uno.Application.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {

struct DummyApplication;

struct DummyApplication__uType : ::app::Uno::Application__uType
{
};

DummyApplication__uType* DummyApplication__typeof();

void DummyApplication___ObjInit_1(DummyApplication* __this);
DummyApplication* DummyApplication__New_1(::uStatic* __this);

struct DummyApplication : ::app::Uno::Application
{
    void _ObjInit_1() { DummyApplication___ObjInit_1(this); }
};

}}}


#endif
