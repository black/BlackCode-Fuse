// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_BUNDLE_REGISTRY_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_BUNDLE_REGISTRY_H__

#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

extern ::uStaticStrong< ::uArray*> BundleRegistry___data;

struct BundleRegistry__uType : ::uClassType
{
};

BundleRegistry__uType* BundleRegistry__typeof();

::uObject* BundleRegistry__Get(::uStatic* __this, int index);
void BundleRegistry__Init(::uStatic* __this, int resourceCount);
void BundleRegistry__Register(::uStatic* __this, int index, ::uObject* data);
void BundleRegistry__RegisterBuffer(::uStatic* __this, int index, ::uString* filename);
void BundleRegistry__RegisterBundleFile(::uStatic* __this, int index, ::uString* filename);
void BundleRegistry__RegisterFontFace(::uStatic* __this, int index, ::uString* filename);
void BundleRegistry__RegisterIndexBuffer(::uStatic* __this, int index, ::uString* filename);
void BundleRegistry__RegisterTexture2D(::uStatic* __this, int index, ::uString* filename);
void BundleRegistry__RegisterTextureCube(::uStatic* __this, int index, ::uString* filename);
void BundleRegistry__RegisterVertexBuffer(::uStatic* __this, int index, ::uString* filename);

}}}}}


#endif
