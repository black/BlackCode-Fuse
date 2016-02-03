// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_CASE_H__
#define __APP_FUSE_REACTIVE_CASE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct Match; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct Case;

struct Case__uType : ::uClassType
{
};

Case__uType* Case__typeof();

void Case___ObjInit(Case* __this);
bool Case__get_Bool(Case* __this);
::uObject* Case__get_Factories(Case* __this);
bool Case__get_IsDefault(Case* __this);
double Case__get_Number(Case* __this);
::uString* Case__get_String(Case* __this);
::uObject* Case__get_Value(Case* __this);
void Case__Invalidate(Case* __this);
Case* Case__New_1(::uStatic* __this);
void Case__OnFactoriesChanged(Case* __this, ::uObject* f);
void Case__set_Bool(Case* __this, bool value);
void Case__set_IsDefault(Case* __this, bool value);
void Case__set_Number(Case* __this, double value);
void Case__set_String(Case* __this, ::uString* value);
void Case__set_Value(Case* __this, ::uObject* value);

struct Case : ::uObject
{
    ::uStrong< ::app::Fuse::Reactive::Match*> _match;
    ::uStrong< ::uObject*> _value;
    ::uStrong< ::uObject*> _factories;
    bool _IsDefault;

    void _ObjInit() { Case___ObjInit(this); }
    bool Bool() { return Case__get_Bool(this); }
    ::uObject* Factories() { return Case__get_Factories(this); }
    bool IsDefault() { return Case__get_IsDefault(this); }
    double Number() { return Case__get_Number(this); }
    ::uString* String() { return Case__get_String(this); }
    ::uObject* Value() { return Case__get_Value(this); }
    void Invalidate() { Case__Invalidate(this); }
    void OnFactoriesChanged(::uObject* f) { Case__OnFactoriesChanged(this, f); }
    void Bool(bool value) { Case__set_Bool(this, value); }
    void IsDefault(bool value) { Case__set_IsDefault(this, value); }
    void Number(double value) { Case__set_Number(this, value); }
    void String(::uString* value) { Case__set_String(this, value); }
    void Value(::uObject* value) { Case__set_Value(this, value); }
};

}}}


#endif
