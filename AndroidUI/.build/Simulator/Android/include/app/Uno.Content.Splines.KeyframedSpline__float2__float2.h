// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Splines\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_SPLINES_KEYFRAMED_SPLINE__FLOAT2__FLOAT2_H__
#define __APP_UNO_CONTENT_SPLINES_KEYFRAMED_SPLINE__FLOAT2__FLOAT2_H__

#include <app/Uno.Content.Splines.Spline__float2.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_; } } }
namespace app { namespace Uno { namespace Content { namespace Splines { struct KeyframedSpline2_Key__float2__float2; } } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

struct KeyframedSpline__float2__float2;

struct KeyframedSpline__float2__float2__uType : ::app::Uno::Content::Splines::Spline__float2__uType
{
};

KeyframedSpline__float2__float2__uType* KeyframedSpline__float2__float2__typeof();

void KeyframedSpline__float2__float2___ObjInit_1(KeyframedSpline__float2__float2* __this);
void KeyframedSpline__float2__float2___ObjInit_2(KeyframedSpline__float2__float2* __this, ::uArray* keys);
int KeyframedSpline__float2__float2__AddKey(KeyframedSpline__float2__float2* __this, double time, ::app::Uno::Float2 value);
void KeyframedSpline__float2__float2__ClearKeys(KeyframedSpline__float2__float2* __this);
int KeyframedSpline__float2__float2__FindLeftIndex(KeyframedSpline__float2__float2* __this, double time);
int KeyframedSpline__float2__float2__FindNearestIndex(KeyframedSpline__float2__float2* __this, double time);
::app::Uno::Float2 KeyframedSpline__float2__float2__FindValue(KeyframedSpline__float2__float2* __this, double time);
void KeyframedSpline__float2__float2__FindValues(KeyframedSpline__float2__float2* __this, double time, ::app::Uno::Float2* a, ::app::Uno::Float2* b, float* p);
void KeyframedSpline__float2__float2__FindValues_1(KeyframedSpline__float2__float2* __this, double time, ::app::Uno::Float2* a, ::app::Uno::Float2* b, ::app::Uno::Float2* c, ::app::Uno::Float2* d, float* p);
double KeyframedSpline__float2__float2__get_End(KeyframedSpline__float2__float2* __this);
int KeyframedSpline__float2__float2__get_KeyCount(KeyframedSpline__float2__float2* __this);
double KeyframedSpline__float2__float2__get_Start(KeyframedSpline__float2__float2* __this);
double KeyframedSpline__float2__float2__GetTime(KeyframedSpline__float2__float2* __this, int index);
::app::Uno::Float2 KeyframedSpline__float2__float2__GetValue(KeyframedSpline__float2__float2* __this, int index);
float KeyframedSpline__float2__float2__Map(::uStatic* __this, double a, double b, double t);
void KeyframedSpline__float2__float2__RemoveKey(KeyframedSpline__float2__float2* __this, int index);
int KeyframedSpline__float2__float2__SetTime(KeyframedSpline__float2__float2* __this, int index, double time);
void KeyframedSpline__float2__float2__SetValue(KeyframedSpline__float2__float2* __this, int index, ::app::Uno::Float2 value);

struct KeyframedSpline__float2__float2 : ::app::Uno::Content::Splines::Spline__float2
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Splines_KeyframedSpline2_Key_float2_float2_*> keys;
    int cache;

    void _ObjInit_1() { KeyframedSpline__float2__float2___ObjInit_1(this); }
    void _ObjInit_2(::uArray* keys) { KeyframedSpline__float2__float2___ObjInit_2(this, keys); }
    int AddKey(double time, ::app::Uno::Float2 value);
    void ClearKeys() { KeyframedSpline__float2__float2__ClearKeys(this); }
    int FindLeftIndex(double time) { return KeyframedSpline__float2__float2__FindLeftIndex(this, time); }
    int FindNearestIndex(double time) { return KeyframedSpline__float2__float2__FindNearestIndex(this, time); }
    ::app::Uno::Float2 FindValue(double time);
    void FindValues(double time, ::app::Uno::Float2* a, ::app::Uno::Float2* b, float* p) { KeyframedSpline__float2__float2__FindValues(this, time, a, b, p); }
    void FindValues_1(double time, ::app::Uno::Float2* a, ::app::Uno::Float2* b, ::app::Uno::Float2* c, ::app::Uno::Float2* d, float* p) { KeyframedSpline__float2__float2__FindValues_1(this, time, a, b, c, d, p); }
    int KeyCount() { return KeyframedSpline__float2__float2__get_KeyCount(this); }
    double GetTime(int index) { return KeyframedSpline__float2__float2__GetTime(this, index); }
    ::app::Uno::Float2 GetValue(int index);
    void RemoveKey(int index) { KeyframedSpline__float2__float2__RemoveKey(this, index); }
    int SetTime(int index, double time) { return KeyframedSpline__float2__float2__SetTime(this, index, time); }
    void SetValue(int index, ::app::Uno::Float2 value);
};

}}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Uno {
namespace Content {
namespace Splines {

inline int KeyframedSpline__float2__float2::AddKey(double time, ::app::Uno::Float2 value) { return KeyframedSpline__float2__float2__AddKey(this, time, value); }
inline ::app::Uno::Float2 KeyframedSpline__float2__float2::FindValue(double time) { return KeyframedSpline__float2__float2__FindValue(this, time); }
inline ::app::Uno::Float2 KeyframedSpline__float2__float2::GetValue(int index) { return KeyframedSpline__float2__float2__GetValue(this, index); }
inline void KeyframedSpline__float2__float2::SetValue(int index, ::app::Uno::Float2 value) { KeyframedSpline__float2__float2__SetValue(this, index, value); }

}}}}


#endif
