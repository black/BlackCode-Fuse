// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_KEYFRAMED_SPLINE__FLOAT__FLOAT_H__
#define __APP_UNO_CONTENT_SPLINES_KEYFRAMED_SPLINE__FLOAT__FLOAT_H__

#include <app/Uno.Content.Splines.Spline__float.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_; } } }
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float__float; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct KeyframedSpline__float__float;

struct KeyframedSpline__float__float__uType : ::app::Uno::Content::Splines::Spline__float__uType
{
};

KeyframedSpline__float__float__uType* KeyframedSpline__float__float__typeof();

void KeyframedSpline__float__float___ObjInit_1(KeyframedSpline__float__float* __this);
void KeyframedSpline__float__float___ObjInit_2(KeyframedSpline__float__float* __this, ::uArray* keys);
int KeyframedSpline__float__float__AddKey(KeyframedSpline__float__float* __this, double time, float value);
void KeyframedSpline__float__float__ClearKeys(KeyframedSpline__float__float* __this);
int KeyframedSpline__float__float__FindLeftIndex(KeyframedSpline__float__float* __this, double time);
int KeyframedSpline__float__float__FindNearestIndex(KeyframedSpline__float__float* __this, double time);
float KeyframedSpline__float__float__FindValue(KeyframedSpline__float__float* __this, double time);
void KeyframedSpline__float__float__FindValues(KeyframedSpline__float__float* __this, double time, float* a, float* b, float* p);
void KeyframedSpline__float__float__FindValues_1(KeyframedSpline__float__float* __this, double time, float* a, float* b, float* c, float* d, float* p);
double KeyframedSpline__float__float__get_End(KeyframedSpline__float__float* __this);
int KeyframedSpline__float__float__get_KeyCount(KeyframedSpline__float__float* __this);
double KeyframedSpline__float__float__get_Start(KeyframedSpline__float__float* __this);
double KeyframedSpline__float__float__GetTime(KeyframedSpline__float__float* __this, int index);
float KeyframedSpline__float__float__GetValue(KeyframedSpline__float__float* __this, int index);
float KeyframedSpline__float__float__Map(::uStatic* __this, double a, double b, double t);
void KeyframedSpline__float__float__RemoveKey(KeyframedSpline__float__float* __this, int index);
int KeyframedSpline__float__float__SetTime(KeyframedSpline__float__float* __this, int index, double time);
void KeyframedSpline__float__float__SetValue(KeyframedSpline__float__float* __this, int index, float value);

struct KeyframedSpline__float__float : ::app::Uno::Content::Splines::Spline__float
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float_float_*> keys;
    int cache;

    void _ObjInit_1() { KeyframedSpline__float__float___ObjInit_1(this); }
    void _ObjInit_2(::uArray* keys) { KeyframedSpline__float__float___ObjInit_2(this, keys); }
    int AddKey(double time, float value) { return KeyframedSpline__float__float__AddKey(this, time, value); }
    void ClearKeys() { KeyframedSpline__float__float__ClearKeys(this); }
    int FindLeftIndex(double time) { return KeyframedSpline__float__float__FindLeftIndex(this, time); }
    int FindNearestIndex(double time) { return KeyframedSpline__float__float__FindNearestIndex(this, time); }
    float FindValue(double time) { return KeyframedSpline__float__float__FindValue(this, time); }
    void FindValues(double time, float* a, float* b, float* p) { KeyframedSpline__float__float__FindValues(this, time, a, b, p); }
    void FindValues_1(double time, float* a, float* b, float* c, float* d, float* p) { KeyframedSpline__float__float__FindValues_1(this, time, a, b, c, d, p); }
    int KeyCount() { return KeyframedSpline__float__float__get_KeyCount(this); }
    double GetTime(int index) { return KeyframedSpline__float__float__GetTime(this, index); }
    float GetValue(int index) { return KeyframedSpline__float__float__GetValue(this, index); }
    void RemoveKey(int index) { KeyframedSpline__float__float__RemoveKey(this, index); }
    int SetTime(int index, double time) { return KeyframedSpline__float__float__SetTime(this, index, time); }
    void SetValue(int index, float value) { KeyframedSpline__float__float__SetValue(this, index, value); }
};

}}}}


#endif
