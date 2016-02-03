// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract interface IModule :130
// {
uInterfaceType* IModule_typeof();

struct IModule
{
    void(*fp_get_Code)(uObject*, uString**);
    void(*fp_Evaluate)(uObject*, uString*, ::g::Fuse::Scripting::Context*, uObject**);
    void(*fp_get_FileName)(uObject*, uString**);
    void(*fp_get_LineNumberOffset)(uObject*, int*);
    static uString* Code(const uInterface& __this) { uString* __retval; return __this.VTable<IModule>()->fp_get_Code(__this, &__retval), __retval; }
    static uObject* Evaluate(const uInterface& __this, uString* id, ::g::Fuse::Scripting::Context* c) { uObject* __retval; return __this.VTable<IModule>()->fp_Evaluate(__this, id, c, &__retval), __retval; }
    static uString* FileName(const uInterface& __this) { uString* __retval; return __this.VTable<IModule>()->fp_get_FileName(__this, &__retval), __retval; }
    static int LineNumberOffset(const uInterface& __this) { int __retval; return __this.VTable<IModule>()->fp_get_LineNumberOffset(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
