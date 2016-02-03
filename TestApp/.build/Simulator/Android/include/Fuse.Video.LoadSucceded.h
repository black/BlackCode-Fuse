// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.18.8\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Video.LoadResult.h>
namespace g{namespace Fuse{namespace Video{struct LoadSucceded;}}}

namespace g{
namespace Fuse{
namespace Video{

// internal sealed class LoadSucceded :552
// {
uType* LoadSucceded_typeof();
void LoadSucceded__ctor_1_fn(LoadSucceded* __this, uObject* player);
void LoadSucceded__New1_fn(uObject* player, LoadSucceded** __retval);
void LoadSucceded__get_Player_fn(LoadSucceded* __this, uObject** __retval);
void LoadSucceded__set_Player_fn(LoadSucceded* __this, uObject* value);

struct LoadSucceded : ::g::Fuse::Video::LoadResult
{
    uStrong<uObject*> _Player;

    void ctor_1(uObject* player);
    uObject* Player();
    void Player(uObject* value);
    static LoadSucceded* New1(uObject* player);
};
// }

}}} // ::g::Fuse::Video
