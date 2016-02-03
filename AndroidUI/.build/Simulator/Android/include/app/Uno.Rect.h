// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RECT_H__
#define __APP_UNO_RECT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Recti; } }

namespace app {
namespace Uno {

struct Rect;

struct Rect__uType : ::uStructType
{
};

Rect__uType* Rect__typeof();

void Rect___ObjInit(Rect* __this, float left, float top, float right, float bottom);
void Rect___ObjInit_1(Rect* __this, ::app::Uno::Float2 pos, ::app::Uno::Float2 size);
Rect Rect__ContainingPoints(::uStatic* __this, ::app::Uno::Float2 point0, ::app::Uno::Float2 point1);
Rect Rect__ContainingPoints_1(::uStatic* __this, ::app::Uno::Float2 point0, ::app::Uno::Float2 point1, ::app::Uno::Float2 point2, ::app::Uno::Float2 point3);
bool Rect__Equals_2(::uStatic* __this, Rect rect1, Rect rect2);
::app::Uno::Float2 Rect__get_LeftBottom(Rect* __this);
::app::Uno::Float2 Rect__get_LeftTop(Rect* __this);
::app::Uno::Float2 Rect__get_Maximum(Rect* __this);
::app::Uno::Float2 Rect__get_Minimum(Rect* __this);
::app::Uno::Float2 Rect__get_Position(Rect* __this);
::app::Uno::Float2 Rect__get_RightBottom(Rect* __this);
::app::Uno::Float2 Rect__get_RightTop(Rect* __this);
::app::Uno::Float2 Rect__get_Size(Rect* __this);
Rect Rect__Inflate(::uStatic* __this, Rect r, float size);
Rect Rect__Inflate_1(::uStatic* __this, Rect r, ::app::Uno::Float2 size);
Rect Rect__Intersect(::uStatic* __this, Rect a, Rect b);
bool Rect__Intersects(Rect* __this, Rect r);
Rect Rect__New_1(::uStatic* __this, float left, float top, float right, float bottom);
Rect Rect__New_2(::uStatic* __this, ::app::Uno::Float2 pos, ::app::Uno::Float2 size);
Rect Rect__op_Implicit(::uStatic* __this, ::app::Uno::Recti r);
Rect Rect__Scale(::uStatic* __this, Rect r, float scale);
Rect Rect__Scale_1(::uStatic* __this, Rect r, ::app::Uno::Float2 scale);
void Rect__set_Maximum(Rect* __this, ::app::Uno::Float2 value);
void Rect__set_Minimum(Rect* __this, ::app::Uno::Float2 value);
void Rect__set_Position(Rect* __this, ::app::Uno::Float2 value);
void Rect__set_Size(Rect* __this, ::app::Uno::Float2 value);
::uString* Rect__ToString(Rect* __this);
Rect Rect__Transform(::uStatic* __this, Rect r, ::app::Uno::Float4x4 matrix);
Rect Rect__Translate(::uStatic* __this, Rect r, ::app::Uno::Float2 offset);
Rect Rect__Union(::uStatic* __this, Rect a, Rect b);

struct Rect
{
    float Left;
    float Top;
    float Right;
    float Bottom;

    void _ObjInit(float left, float top, float right, float bottom) { Rect___ObjInit(this, left, top, right, bottom); }
    void _ObjInit_1(::app::Uno::Float2 pos, ::app::Uno::Float2 size);
    ::app::Uno::Float2 LeftBottom();
    ::app::Uno::Float2 LeftTop();
    ::app::Uno::Float2 Maximum();
    ::app::Uno::Float2 Minimum();
    ::app::Uno::Float2 Position();
    ::app::Uno::Float2 RightBottom();
    ::app::Uno::Float2 RightTop();
    ::app::Uno::Float2 Size();
    bool Intersects(Rect r);
    void Maximum(::app::Uno::Float2 value);
    void Minimum(::app::Uno::Float2 value);
    void Position(::app::Uno::Float2 value);
    void Size(::app::Uno::Float2 value);
    ::uString* ToString() { return Rect__ToString(this); }
};

}}

#include <app/Uno.Float2.h>

namespace app {
namespace Uno {

inline void Rect::_ObjInit_1(::app::Uno::Float2 pos, ::app::Uno::Float2 size) { Rect___ObjInit_1(this, pos, size); }
inline ::app::Uno::Float2 Rect::LeftBottom() { return Rect__get_LeftBottom(this); }
inline ::app::Uno::Float2 Rect::LeftTop() { return Rect__get_LeftTop(this); }
inline ::app::Uno::Float2 Rect::Maximum() { return Rect__get_Maximum(this); }
inline ::app::Uno::Float2 Rect::Minimum() { return Rect__get_Minimum(this); }
inline ::app::Uno::Float2 Rect::Position() { return Rect__get_Position(this); }
inline ::app::Uno::Float2 Rect::RightBottom() { return Rect__get_RightBottom(this); }
inline ::app::Uno::Float2 Rect::RightTop() { return Rect__get_RightTop(this); }
inline ::app::Uno::Float2 Rect::Size() { return Rect__get_Size(this); }
inline bool Rect::Intersects(Rect r) { return Rect__Intersects(this, r); }
inline void Rect::Maximum(::app::Uno::Float2 value) { Rect__set_Maximum(this, value); }
inline void Rect::Minimum(::app::Uno::Float2 value) { Rect__set_Minimum(this, value); }
inline void Rect::Position(::app::Uno::Float2 value) { Rect__set_Position(this, value); }
inline void Rect::Size(::app::Uno::Float2 value) { Rect__set_Size(this, value); }

}}


#endif
