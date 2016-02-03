// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_KEYFRAMED_SPLINE__FLOAT4X4__FLOAT4X4_H__
#define __APP_UNO_CONTENT_SPLINES_KEYFRAMED_SPLINE__FLOAT4X4__FLOAT4X4_H__

#include <app/Uno.Content.Splines.Spline__float4x4.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_; } } }
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float4x4__float4x4; } } } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct KeyframedSpline__float4x4__float4x4;

struct KeyframedSpline__float4x4__float4x4__uType : ::app::Uno::Content::Splines::Spline__float4x4__uType
{
};

KeyframedSpline__float4x4__float4x4__uType* KeyframedSpline__float4x4__float4x4__typeof();

void KeyframedSpline__float4x4__float4x4___ObjInit_1(KeyframedSpline__float4x4__float4x4* __this);
void KeyframedSpline__float4x4__float4x4___ObjInit_2(KeyframedSpline__float4x4__float4x4* __this, ::uArray* keys);
int KeyframedSpline__float4x4__float4x4__AddKey(KeyframedSpline__float4x4__float4x4* __this, double time, ::app::Uno::Float4x4 value);
void KeyframedSpline__float4x4__float4x4__ClearKeys(KeyframedSpline__float4x4__float4x4* __this);
int KeyframedSpline__float4x4__float4x4__FindLeftIndex(KeyframedSpline__float4x4__float4x4* __this, double time);
int KeyframedSpline__float4x4__float4x4__FindNearestIndex(KeyframedSpline__float4x4__float4x4* __this, double time);
::app::Uno::Float4x4 KeyframedSpline__float4x4__float4x4__FindValue(KeyframedSpline__float4x4__float4x4* __this, double time);
void KeyframedSpline__float4x4__float4x4__FindValues(KeyframedSpline__float4x4__float4x4* __this, double time, ::app::Uno::Float4x4* a, ::app::Uno::Float4x4* b, float* p);
void KeyframedSpline__float4x4__float4x4__FindValues_1(KeyframedSpline__float4x4__float4x4* __this, double time, ::app::Uno::Float4x4* a, ::app::Uno::Float4x4* b, ::app::Uno::Float4x4* c, ::app::Uno::Float4x4* d, float* p);
double KeyframedSpline__float4x4__float4x4__get_End(KeyframedSpline__float4x4__float4x4* __this);
int KeyframedSpline__float4x4__float4x4__get_KeyCount(KeyframedSpline__float4x4__float4x4* __this);
double KeyframedSpline__float4x4__float4x4__get_Start(KeyframedSpline__float4x4__float4x4* __this);
double KeyframedSpline__float4x4__float4x4__GetTime(KeyframedSpline__float4x4__float4x4* __this, int index);
::app::Uno::Float4x4 KeyframedSpline__float4x4__float4x4__GetValue(KeyframedSpline__float4x4__float4x4* __this, int index);
float KeyframedSpline__float4x4__float4x4__Map(::uStatic* __this, double a, double b, double t);
void KeyframedSpline__float4x4__float4x4__RemoveKey(KeyframedSpline__float4x4__float4x4* __this, int index);
int KeyframedSpline__float4x4__float4x4__SetTime(KeyframedSpline__float4x4__float4x4* __this, int index, double time);
void KeyframedSpline__float4x4__float4x4__SetValue(KeyframedSpline__float4x4__float4x4* __this, int index, ::app::Uno::Float4x4 value);

struct KeyframedSpline__float4x4__float4x4 : ::app::Uno::Content::Splines::Spline__float4x4
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float4x4_float4x4_*> keys;
    int cache;

    void _ObjInit_1() { KeyframedSpline__float4x4__float4x4___ObjInit_1(this); }
    void _ObjInit_2(::uArray* keys) { KeyframedSpline__float4x4__float4x4___ObjInit_2(this, keys); }
    int AddKey(double time, ::app::Uno::Float4x4 value);
    void ClearKeys() { KeyframedSpline__float4x4__float4x4__ClearKeys(this); }
    int FindLeftIndex(double time) { return KeyframedSpline__float4x4__float4x4__FindLeftIndex(this, time); }
    int FindNearestIndex(double time) { return KeyframedSpline__float4x4__float4x4__FindNearestIndex(this, time); }
    ::app::Uno::Float4x4 FindValue(double time);
    void FindValues(double time, ::app::Uno::Float4x4* a, ::app::Uno::Float4x4* b, float* p) { KeyframedSpline__float4x4__float4x4__FindValues(this, time, a, b, p); }
    void FindValues_1(double time, ::app::Uno::Float4x4* a, ::app::Uno::Float4x4* b, ::app::Uno::Float4x4* c, ::app::Uno::Float4x4* d, float* p) { KeyframedSpline__float4x4__float4x4__FindValues_1(this, time, a, b, c, d, p); }
    int KeyCount() { return KeyframedSpline__float4x4__float4x4__get_KeyCount(this); }
    double GetTime(int index) { return KeyframedSpline__float4x4__float4x4__GetTime(this, index); }
    ::app::Uno::Float4x4 GetValue(int index);
    void RemoveKey(int index) { KeyframedSpline__float4x4__float4x4__RemoveKey(this, index); }
    int SetTime(int index, double time) { return KeyframedSpline__float4x4__float4x4__SetTime(this, index, time); }
    void SetValue(int index, ::app::Uno::Float4x4 value);
};

}}}}

#include <app/Uno.Float4x4.h>

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

inline int KeyframedSpline__float4x4__float4x4::AddKey(double time, ::app::Uno::Float4x4 value) { return KeyframedSpline__float4x4__float4x4__AddKey(this, time, value); }
inline ::app::Uno::Float4x4 KeyframedSpline__float4x4__float4x4::FindValue(double time) { return KeyframedSpline__float4x4__float4x4__FindValue(this, time); }
inline ::app::Uno::Float4x4 KeyframedSpline__float4x4__float4x4::GetValue(int index) { return KeyframedSpline__float4x4__float4x4__GetValue(this, index); }
inline void KeyframedSpline__float4x4__float4x4::SetValue(int index, ::app::Uno::Float4x4 value) { KeyframedSpline__float4x4__float4x4__SetValue(this, index, value); }

}}}}


#endif
