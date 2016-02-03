// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_FACTORY_CLOSURE__FUSE_CAMERA_PICTURE_RESULT_H__
#define __APP_FUSE_SCRIPTING_FACTORY_CLOSURE__FUSE_CAMERA_PICTURE_RESULT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Threading { struct Promise__Fuse_Camera_PictureResult; } } }

namespace app {
namespace Fuse {
namespace Scripting {

struct FactoryClosure__Fuse_Camera_PictureResult;

struct FactoryClosure__Fuse_Camera_PictureResult__uType : ::uClassType
{
};

FactoryClosure__Fuse_Camera_PictureResult__uType* FactoryClosure__Fuse_Camera_PictureResult__typeof();

void FactoryClosure__Fuse_Camera_PictureResult___ObjInit(FactoryClosure__Fuse_Camera_PictureResult* __this, ::uDelegate* factory, ::uArray* args, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* promise);
FactoryClosure__Fuse_Camera_PictureResult* FactoryClosure__Fuse_Camera_PictureResult__New_1(::uStatic* __this, ::uDelegate* factory, ::uArray* args, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* promise);
void FactoryClosure__Fuse_Camera_PictureResult__Run(FactoryClosure__Fuse_Camera_PictureResult* __this);

struct FactoryClosure__Fuse_Camera_PictureResult : ::uObject
{
    ::uStrong< ::uDelegate*> _factory;
    ::uStrong< ::uArray*> _args;
    ::uStrong< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*> _promise;

    void _ObjInit(::uDelegate* factory, ::uArray* args, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* promise) { FactoryClosure__Fuse_Camera_PictureResult___ObjInit(this, factory, args, promise); }
    void Run() { FactoryClosure__Fuse_Camera_PictureResult__Run(this); }
};

}}}


#endif
