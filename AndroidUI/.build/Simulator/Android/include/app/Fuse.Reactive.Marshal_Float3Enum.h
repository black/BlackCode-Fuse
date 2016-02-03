// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_MARSHAL_FLOAT3_ENUM_H__
#define __APP_FUSE_REACTIVE_MARSHAL_FLOAT3_ENUM_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Reactive {

struct Marshal_Float3Enum;

struct Marshal_Float3Enum__uType : ::uClassType
{
};

Marshal_Float3Enum__uType* Marshal_Float3Enum__typeof();

void Marshal_Float3Enum___ObjInit(Marshal_Float3Enum* __this, ::uObject* obj, ::uDelegate* callback);
void Marshal_Float3Enum__Convert(Marshal_Float3Enum* __this, ::app::Uno::Float4 v);
Marshal_Float3Enum* Marshal_Float3Enum__New_1(::uStatic* __this, ::uObject* obj, ::uDelegate* callback);

struct Marshal_Float3Enum : ::uObject
{
    ::uStrong< ::uDelegate*> _callback;

    void _ObjInit(::uObject* obj, ::uDelegate* callback) { Marshal_Float3Enum___ObjInit(this, obj, callback); }
    void Convert(::app::Uno::Float4 v);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Reactive {

inline void Marshal_Float3Enum::Convert(::app::Uno::Float4 v) { Marshal_Float3Enum__Convert(this, v); }

}}}


#endif
