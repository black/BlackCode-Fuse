// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_WEAK_REFERENCE__OBJECT_H__
#define __APP_UNO_WEAK_REFERENCE__OBJECT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct WeakReference__object;

struct WeakReference__object__uType : ::uClassType
{
};

WeakReference__object__uType* WeakReference__object__typeof();

void WeakReference__object___ObjInit(WeakReference__object* __this, ::uObject* target);
WeakReference__object* WeakReference__object__New_1(::uStatic* __this, ::uObject* target);
void WeakReference__object__SetTarget(WeakReference__object* __this, ::uObject* target);
bool WeakReference__object__TryGetTarget(WeakReference__object* __this, ::uObject** target);

struct WeakReference__object : ::uObject
{
    ::uStrong< ::uObject*> _target;

    void _ObjInit(::uObject* target) { WeakReference__object___ObjInit(this, target); }
    void SetTarget(::uObject* target) { WeakReference__object__SetTarget(this, target); }
    bool TryGetTarget(::uObject** target) { return WeakReference__object__TryGetTarget(this, target); }
};

}}


#endif
