// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_KEYFRAMED_SPLINE__FLOAT3__FLOAT3_H__
#define __APP_UNO_CONTENT_SPLINES_KEYFRAMED_SPLINE__FLOAT3__FLOAT3_H__

#include <app/Uno.Content.Splines.Spline__float3.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_; } } }
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float3__float3; } } } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct KeyframedSpline__float3__float3;

struct KeyframedSpline__float3__float3__uType : ::app::Uno::Content::Splines::Spline__float3__uType
{
};

KeyframedSpline__float3__float3__uType* KeyframedSpline__float3__float3__typeof();

void KeyframedSpline__float3__float3___ObjInit_1(KeyframedSpline__float3__float3* __this);
void KeyframedSpline__float3__float3___ObjInit_2(KeyframedSpline__float3__float3* __this, ::uArray* keys);
int KeyframedSpline__float3__float3__AddKey(KeyframedSpline__float3__float3* __this, double time, ::app::Uno::Float3 value);
void KeyframedSpline__float3__float3__ClearKeys(KeyframedSpline__float3__float3* __this);
int KeyframedSpline__float3__float3__FindLeftIndex(KeyframedSpline__float3__float3* __this, double time);
int KeyframedSpline__float3__float3__FindNearestIndex(KeyframedSpline__float3__float3* __this, double time);
::app::Uno::Float3 KeyframedSpline__float3__float3__FindValue(KeyframedSpline__float3__float3* __this, double time);
void KeyframedSpline__float3__float3__FindValues(KeyframedSpline__float3__float3* __this, double time, ::app::Uno::Float3* a, ::app::Uno::Float3* b, float* p);
void KeyframedSpline__float3__float3__FindValues_1(KeyframedSpline__float3__float3* __this, double time, ::app::Uno::Float3* a, ::app::Uno::Float3* b, ::app::Uno::Float3* c, ::app::Uno::Float3* d, float* p);
double KeyframedSpline__float3__float3__get_End(KeyframedSpline__float3__float3* __this);
int KeyframedSpline__float3__float3__get_KeyCount(KeyframedSpline__float3__float3* __this);
double KeyframedSpline__float3__float3__get_Start(KeyframedSpline__float3__float3* __this);
double KeyframedSpline__float3__float3__GetTime(KeyframedSpline__float3__float3* __this, int index);
::app::Uno::Float3 KeyframedSpline__float3__float3__GetValue(KeyframedSpline__float3__float3* __this, int index);
float KeyframedSpline__float3__float3__Map(::uStatic* __this, double a, double b, double t);
void KeyframedSpline__float3__float3__RemoveKey(KeyframedSpline__float3__float3* __this, int index);
int KeyframedSpline__float3__float3__SetTime(KeyframedSpline__float3__float3* __this, int index, double time);
void KeyframedSpline__float3__float3__SetValue(KeyframedSpline__float3__float3* __this, int index, ::app::Uno::Float3 value);

struct KeyframedSpline__float3__float3 : ::app::Uno::Content::Splines::Spline__float3
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float3_float3_*> keys;
    int cache;

    void _ObjInit_1() { KeyframedSpline__float3__float3___ObjInit_1(this); }
    void _ObjInit_2(::uArray* keys) { KeyframedSpline__float3__float3___ObjInit_2(this, keys); }
    int AddKey(double time, ::app::Uno::Float3 value);
    void ClearKeys() { KeyframedSpline__float3__float3__ClearKeys(this); }
    int FindLeftIndex(double time) { return KeyframedSpline__float3__float3__FindLeftIndex(this, time); }
    int FindNearestIndex(double time) { return KeyframedSpline__float3__float3__FindNearestIndex(this, time); }
    ::app::Uno::Float3 FindValue(double time);
    void FindValues(double time, ::app::Uno::Float3* a, ::app::Uno::Float3* b, float* p) { KeyframedSpline__float3__float3__FindValues(this, time, a, b, p); }
    void FindValues_1(double time, ::app::Uno::Float3* a, ::app::Uno::Float3* b, ::app::Uno::Float3* c, ::app::Uno::Float3* d, float* p) { KeyframedSpline__float3__float3__FindValues_1(this, time, a, b, c, d, p); }
    int KeyCount() { return KeyframedSpline__float3__float3__get_KeyCount(this); }
    double GetTime(int index) { return KeyframedSpline__float3__float3__GetTime(this, index); }
    ::app::Uno::Float3 GetValue(int index);
    void RemoveKey(int index) { KeyframedSpline__float3__float3__RemoveKey(this, index); }
    int SetTime(int index, double time) { return KeyframedSpline__float3__float3__SetTime(this, index, time); }
    void SetValue(int index, ::app::Uno::Float3 value);
};

}}}}

#include <app/Uno.Float3.h>

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

inline int KeyframedSpline__float3__float3::AddKey(double time, ::app::Uno::Float3 value) { return KeyframedSpline__float3__float3__AddKey(this, time, value); }
inline ::app::Uno::Float3 KeyframedSpline__float3__float3::FindValue(double time) { return KeyframedSpline__float3__float3__FindValue(this, time); }
inline ::app::Uno::Float3 KeyframedSpline__float3__float3::GetValue(int index) { return KeyframedSpline__float3__float3__GetValue(this, index); }
inline void KeyframedSpline__float3__float3::SetValue(int index, ::app::Uno::Float3 value) { KeyframedSpline__float3__float3__SetValue(this, index, value); }

}}}}


#endif
