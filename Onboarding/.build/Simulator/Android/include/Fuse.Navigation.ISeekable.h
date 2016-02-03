// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct EndSeekArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct UpdateSeekArgs;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract interface ISeekable :1660
// {
uInterfaceType* ISeekable_typeof();

struct ISeekable
{
    void(*fp_BeginSeek)(uObject*);
    void(*fp_EndSeek)(uObject*, ::g::Fuse::Navigation::EndSeekArgs*);
    void(*fp_Seek)(uObject*, ::g::Fuse::Navigation::UpdateSeekArgs*);
    static void BeginSeek(const uInterface& __this) { __this.VTable<ISeekable>()->fp_BeginSeek(__this); }
    static void EndSeek(const uInterface& __this, ::g::Fuse::Navigation::EndSeekArgs* args) { __this.VTable<ISeekable>()->fp_EndSeek(__this, args); }
    static void Seek(const uInterface& __this, ::g::Fuse::Navigation::UpdateSeekArgs* args) { __this.VTable<ISeekable>()->fp_Seek(__this, args); }
};
// }

}}} // ::g::Fuse::Navigation
