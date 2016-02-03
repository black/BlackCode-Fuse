// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GRAPHICS_SAMPLER_STATE_H__
#define __APP_UNO_GRAPHICS_SAMPLER_STATE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Graphics {

struct SamplerState;

struct SamplerState__uType : ::uStructType
{
};

SamplerState__uType* SamplerState__typeof();

void SamplerState___ObjInit(SamplerState* __this, int minFilter, int magFilter, int addressMode);
SamplerState SamplerState__get_LinearClamp(::uStatic* __this);
int SamplerState__get_MinFilterNoMipmap(SamplerState* __this);
SamplerState SamplerState__get_TrilinearClamp(::uStatic* __this);
SamplerState SamplerState__New_1(::uStatic* __this, int minFilter, int magFilter, int addressMode);

struct SamplerState
{
    int MinFilter;
    int MagFilter;
    int AddressU;
    int AddressV;
    int AddressW;

    void _ObjInit(int minFilter, int magFilter, int addressMode) { SamplerState___ObjInit(this, minFilter, magFilter, addressMode); }
    int MinFilterNoMipmap() { return SamplerState__get_MinFilterNoMipmap(this); }
};

}}}


#endif
