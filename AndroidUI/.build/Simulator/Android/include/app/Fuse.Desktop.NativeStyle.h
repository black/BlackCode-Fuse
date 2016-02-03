// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Desktop\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DESKTOP_NATIVE_STYLE_H__
#define __APP_FUSE_DESKTOP_NATIVE_STYLE_H__

#include <app/Fuse.Style.h>
#include <app/Uno.UX.ITemplate.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Desktop {

struct NativeStyle;

struct NativeStyle__uType : ::app::Fuse::Style__uType
{
};

NativeStyle__uType* NativeStyle__typeof();

void NativeStyle___ObjInit_1(NativeStyle* __this);
void NativeStyle__InitializeUX(NativeStyle* __this);
NativeStyle* NativeStyle__New_2(::uStatic* __this);

struct NativeStyle : ::app::Fuse::Style
{
    void _ObjInit_1() { NativeStyle___ObjInit_1(this); }
    void InitializeUX() { NativeStyle__InitializeUX(this); }
};

}}}


#endif
