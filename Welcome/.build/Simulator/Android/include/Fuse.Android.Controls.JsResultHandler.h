// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Android.java.util.Observer.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace java{namespace util{struct Observable;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct JsResultHandler;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// internal sealed extern class JsResultHandler :1984
// {
struct JsResultHandler_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::java::util::Observer interface2;
};

JsResultHandler_type* JsResultHandler_typeof();
void JsResultHandler__ctor_4_fn(JsResultHandler* __this, uString* name, uDelegate* callback);
void JsResultHandler__getExpr_fn(JsResultHandler* __this, uString* js, uString** __retval);
void JsResultHandler__get_Name_fn(JsResultHandler* __this, uString** __retval);
void JsResultHandler__New5_fn(uString* name, uDelegate* callback, JsResultHandler** __retval);
void JsResultHandler__update_fn(JsResultHandler* __this, ::g::Android::java::util::Observable* observable, ::g::Android::java::lang::Object* data);

struct JsResultHandler : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    uStrong<uString*> _name;
    uStrong<uDelegate*> Callback;

    void ctor_4(uString* name, uDelegate* callback);
    uString* getExpr(uString* js);
    uString* Name();
    void update(::g::Android::java::util::Observable* observable, ::g::Android::java::lang::Object* data);
    static JsResultHandler* New5(uString* name, uDelegate* callback);
};
// }

}}}} // ::g::Fuse::Android::Controls
