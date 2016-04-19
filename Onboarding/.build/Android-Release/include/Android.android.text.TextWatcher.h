// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace android{
namespace text{

// public abstract extern interface TextWatcher :4331
// {
uInterfaceType* TextWatcher_typeof();

struct TextWatcher
{
    void(*fp_afterTextChanged)(uObject*, uObject*);
    void(*fp_beforeTextChanged)(uObject*, uObject*, int*, int*, int*);
    void(*fp_onTextChanged)(uObject*, uObject*, int*, int*, int*);
    static void afterTextChanged(const uInterface& __this, uObject* arg0) { __this.VTable<TextWatcher>()->fp_afterTextChanged(__this, arg0); }
    static void beforeTextChanged(const uInterface& __this, uObject* arg0, int arg1, int arg2, int arg3) { __this.VTable<TextWatcher>()->fp_beforeTextChanged(__this, arg0, &arg1, &arg2, &arg3); }
    static void onTextChanged(const uInterface& __this, uObject* arg0, int arg1, int arg2, int arg3) { __this.VTable<TextWatcher>()->fp_onTextChanged(__this, arg0, &arg1, &arg2, &arg3); }
};
// }

}}}} // ::g::Android::android::text
