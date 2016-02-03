// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RANDOM_H__
#define __APP_UNO_RANDOM_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Uno {

struct Random;

struct Random__uType : ::uClassType
{
};

Random__uType* Random__typeof();

void Random___ObjInit(Random* __this, int seed);
Random* Random__New_1(::uStatic* __this, int seed);
float Random__NextFloat(Random* __this);
float Random__NextFloat_1(Random* __this, float minv, float maxv);
::app::Uno::Float2 Random__NextFloat2(Random* __this);
::app::Uno::Float3 Random__NextFloat3(Random* __this);
::app::Uno::Float4 Random__NextFloat4(Random* __this);
int Random__NextInt(Random* __this);
int Random__NextInt_1(Random* __this, int high);
int Random__NextInt_2(Random* __this, int low, int high);
void Random__SetSeed(Random* __this, int seed);

struct Random : ::uObject
{
    int z;
    int w;

    void _ObjInit(int seed) { Random___ObjInit(this, seed); }
    float NextFloat() { return Random__NextFloat(this); }
    float NextFloat_1(float minv, float maxv) { return Random__NextFloat_1(this, minv, maxv); }
    ::app::Uno::Float2 NextFloat2();
    ::app::Uno::Float3 NextFloat3();
    ::app::Uno::Float4 NextFloat4();
    int NextInt() { return Random__NextInt(this); }
    int NextInt_1(int high) { return Random__NextInt_1(this, high); }
    int NextInt_2(int low, int high) { return Random__NextInt_2(this, low, high); }
    void SetSeed(int seed) { Random__SetSeed(this, seed); }
};

}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Uno {

inline ::app::Uno::Float2 Random::NextFloat2() { return Random__NextFloat2(this); }
inline ::app::Uno::Float3 Random::NextFloat3() { return Random__NextFloat3(this); }
inline ::app::Uno::Float4 Random::NextFloat4() { return Random__NextFloat4(this); }

}}


#endif
