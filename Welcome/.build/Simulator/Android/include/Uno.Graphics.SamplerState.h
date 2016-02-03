// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{struct SamplerState;}}}

namespace g{
namespace Uno{
namespace Graphics{

// public struct SamplerState :745
// {
uStructType* SamplerState_typeof();
void SamplerState__ctor__fn(SamplerState* __this, int* minFilter, int* magFilter, int* addressMode);
void SamplerState__get_LinearClamp_fn(SamplerState* __retval);
void SamplerState__get_MinFilterNoMipmap_fn(SamplerState* __this, int* __retval);
void SamplerState__New1_fn(int* minFilter, int* magFilter, int* addressMode, SamplerState* __retval);
void SamplerState__get_TrilinearClamp_fn(SamplerState* __retval);

struct SamplerState
{
    int MinFilter;
    int MagFilter;
    int AddressU;
    int AddressV;
    int AddressW;

    void ctor_(int minFilter, int magFilter, int addressMode);
    int MinFilterNoMipmap();
};

SamplerState SamplerState__New1(int minFilter, int magFilter, int addressMode);
SamplerState SamplerState__LinearClamp();
SamplerState SamplerState__TrilinearClamp();
// }

}}} // ::g::Uno::Graphics
