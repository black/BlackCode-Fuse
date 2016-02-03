// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RECTI_H__
#define __APP_UNO_RECTI_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Uno {

struct Recti;

struct Recti__uType : ::uStructType
{
};

Recti__uType* Recti__typeof();

void Recti___ObjInit(Recti* __this, int left, int top, int right, int bottom);
void Recti___ObjInit_1(Recti* __this, ::app::Uno::Int2 pos, ::app::Uno::Int2 size);
bool Recti__Equals_2(::uStatic* __this, Recti rect1, Recti rect2);
int Recti__get_Area(Recti* __this);
::app::Uno::Int2 Recti__get_LeftBottom(Recti* __this);
::app::Uno::Int2 Recti__get_Maximum(Recti* __this);
::app::Uno::Int2 Recti__get_Minimum(Recti* __this);
::app::Uno::Int2 Recti__get_Position(Recti* __this);
::app::Uno::Int2 Recti__get_RightTop(Recti* __this);
::app::Uno::Int2 Recti__get_Size(Recti* __this);
Recti Recti__Inflate(::uStatic* __this, Recti r, int size);
Recti Recti__Inflate_1(::uStatic* __this, Recti r, ::app::Uno::Int2 size);
Recti Recti__Intersect(::uStatic* __this, Recti a, Recti b);
Recti Recti__New_1(::uStatic* __this, int left, int top, int right, int bottom);
Recti Recti__New_2(::uStatic* __this, ::app::Uno::Int2 pos, ::app::Uno::Int2 size);
void Recti__set_Maximum(Recti* __this, ::app::Uno::Int2 value);
void Recti__set_Minimum(Recti* __this, ::app::Uno::Int2 value);
void Recti__set_Position(Recti* __this, ::app::Uno::Int2 value);
void Recti__set_Size(Recti* __this, ::app::Uno::Int2 value);
::uString* Recti__ToString(Recti* __this);
Recti Recti__Union(::uStatic* __this, Recti a, Recti b);

struct Recti
{
    int Left;
    int Top;
    int Right;
    int Bottom;

    void _ObjInit(int left, int top, int right, int bottom) { Recti___ObjInit(this, left, top, right, bottom); }
    void _ObjInit_1(::app::Uno::Int2 pos, ::app::Uno::Int2 size);
    int Area() { return Recti__get_Area(this); }
    ::app::Uno::Int2 LeftBottom();
    ::app::Uno::Int2 Maximum();
    ::app::Uno::Int2 Minimum();
    ::app::Uno::Int2 Position();
    ::app::Uno::Int2 RightTop();
    ::app::Uno::Int2 Size();
    void Maximum(::app::Uno::Int2 value);
    void Minimum(::app::Uno::Int2 value);
    void Position(::app::Uno::Int2 value);
    void Size(::app::Uno::Int2 value);
    ::uString* ToString() { return Recti__ToString(this); }
};

}}

#include <app/Uno.Int2.h>

namespace app {
namespace Uno {

inline void Recti::_ObjInit_1(::app::Uno::Int2 pos, ::app::Uno::Int2 size) { Recti___ObjInit_1(this, pos, size); }
inline ::app::Uno::Int2 Recti::LeftBottom() { return Recti__get_LeftBottom(this); }
inline ::app::Uno::Int2 Recti::Maximum() { return Recti__get_Maximum(this); }
inline ::app::Uno::Int2 Recti::Minimum() { return Recti__get_Minimum(this); }
inline ::app::Uno::Int2 Recti::Position() { return Recti__get_Position(this); }
inline ::app::Uno::Int2 Recti::RightTop() { return Recti__get_RightTop(this); }
inline ::app::Uno::Int2 Recti::Size() { return Recti__get_Size(this); }
inline void Recti::Maximum(::app::Uno::Int2 value) { Recti__set_Maximum(this, value); }
inline void Recti::Minimum(::app::Uno::Int2 value) { Recti__set_Minimum(this, value); }
inline void Recti::Position(::app::Uno::Int2 value) { Recti__set_Position(this, value); }
inline void Recti::Size(::app::Uno::Int2 value) { Recti__set_Size(this, value); }

}}


#endif
