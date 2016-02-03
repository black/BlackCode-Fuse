// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.18.8\Graphics\Android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct BufferingArgs;}}}}}

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace Android{

// internal sealed extern class BufferingArgs :125
// {
uType* BufferingArgs_typeof();
void BufferingArgs__ctor_1_fn(BufferingArgs* __this, int* percent);
void BufferingArgs__New2_fn(int* percent, BufferingArgs** __retval);
void BufferingArgs__get_Percent_fn(BufferingArgs* __this, int* __retval);
void BufferingArgs__set_Percent_fn(BufferingArgs* __this, int* value);

struct BufferingArgs : ::g::Uno::EventArgs
{
    int _Percent;

    void ctor_1(int percent);
    int Percent();
    void Percent(int value);
    static BufferingArgs* New2(int percent);
};
// }

}}}}} // ::g::Fuse::Video::Graphics::Android
