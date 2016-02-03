// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.app.Activity.h>
#include <Android.android.app.Fragment.h>
#include <Android.android.app.TaskStackBuilder.h>
#include <Android.android.content.Context.h>
#include <Android.android.content.Intent.h>
#include <Android.android.content.res.Configuration.h>
#include <Android.android.graphics.Bitmap.h>
#include <Android.android.graphics.Canvas.h>
#include <Android.android.os.Bundle.h>
#include <Android.android.util.AttributeSet.h>
#include <Android.android.view.ActionMode.h>
#include <Android.android.view.KeyEvent.h>
#include <Android.android.view.Menu.h>
#include <Android.android.view.MenuItem.h>
#include <Android.android.view.MotionEvent.h>
#include <Android.android.view.View.h>
#include <Android.android.view.WindowManagerDLRLayoutParams.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.JNINativeMethod.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Primitives.ujvalue.h>
#include <Android.Base.Types.Arrays.h>
#include <Android.Base.Types.Bridge.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Bootstrapper.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.Iterable.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.Runnable.h>
#include <Android.java.lang.String.h>
#include <Android.java.util.Iterator.h>
#include <Android.java.util.Observable.h>
#include <Android.java.util.Observer.h>
#include <Android.Runtime.BooleanArray.h>
#include <Android.Runtime.ByteArray.h>
#include <Android.Runtime.CharArray.h>
#include <Android.Runtime.DoubleArray.h>
#include <Android.Runtime.FloatArray.h>
#include <Android.Runtime.IntArray.h>
#include <Android.Runtime.JAEnumerator-1.h>
#include <Android.Runtime.JavaGetter-1.h>
#include <Android.Runtime.JEnumerator.h>
#include <Android.Runtime.JOAEnumerator-1.h>
#include <Android.Runtime.LongArray.h>
#include <Android.Runtime.NativeActivityHelper.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Android.Runtime.ObjectArrayAUX.h>
#include <Android.Runtime.RunnableAction.h>
#include <Android.Runtime.ShortArray.h>
#include <Android.Runtime.UnoHelper.h>
#include <jni.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
//~
//~

//        #if (!#{Android.Runtime.NativeActivityHelper.OnActionModeFinished:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onActionModeFinished(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.ActionMode} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.view.ActionMode})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.view.ActionMode:TypeOf}, false, true)}) : (#{Android.android.view.ActionMode})uLoadWeakObject((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnActionModeFinished}==NULL) return;
//        #{OnActionModeFinished:Call(uarg0id)};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnActionModeStarted:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onActionModeStarted(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.ActionMode} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.view.ActionMode})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.view.ActionMode:TypeOf}, false, true)}) : (#{Android.android.view.ActionMode})uLoadWeakObject((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnActionModeStarted}==NULL) return;
//        #{OnActionModeStarted:Call(uarg0id)};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnActivityResult:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onActivityResult(JNIEnv *env, jclass clazz, jint arg0, jint arg1, jobject arg2, jlong arg2id) {
//        uAutoReleasePool pool;
//        #{Android.android.content.Intent} uarg2id = (arg2id==0 ? NULL : (arg2id == -1 ? ((#{Android.android.content.Intent})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg2,(#{Uno.Type})#{Android.android.content.Intent:TypeOf}, false, true)}) : (#{Android.android.content.Intent})uLoadWeakObject((uWeakObject*)arg2id)));
//
//        try
//        {
//        if (#{OnActivityResult}==NULL) return;
//        #{OnActivityResult:Call(arg0, arg1, uarg2id)};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnAttachFragment:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onAttachFragment(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.app.Fragment} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.app.Fragment})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.app.Fragment:TypeOf}, false, true)}) : (#{Android.android.app.Fragment})uLoadWeakObject((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnAttachFragment}==NULL) return;
//        #{OnAttachFragment:Call(uarg0id)};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnBackPressed:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onBackPressed(JNIEnv *env, jclass clazz) {
//        uAutoReleasePool pool;
//
//        try
//        {
//        if (#{OnBackPressed}==NULL) return;
//        #{OnBackPressed:Call()};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnContentChanged:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onContentChanged(JNIEnv *env, jclass clazz) {
//        uAutoReleasePool pool;
//
//        try
//        {
//        if (#{OnContentChanged}==NULL) return;
//        #{OnContentChanged:Call()};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnContextItemSelected:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onContextItemSelected(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.MenuItem} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.view.MenuItem})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.view.MenuItem:TypeOf}, false, true)}) : (#{Android.android.view.MenuItem})uLoadWeakObject((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnContextItemSelected}==NULL) return false;
//        if (#{OnContextItemSelected} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnContextItemSelected:Call(uarg0id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnContextMenuClosed:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onContextMenuClosed(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.Menu} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.view.Menu})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.view.Menu:TypeOf}, false, true)}) : (#{Android.android.view.Menu})uLoadWeakObject((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnContextMenuClosed}==NULL) return;
//        #{OnContextMenuClosed:Call(uarg0id)};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnGenericMotionEvent:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onGenericMotionEvent(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.MotionEvent} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.view.MotionEvent})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.view.MotionEvent:TypeOf}, false, true)}) : (#{Android.android.view.MotionEvent})uLoadWeakObject((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnGenericMotionEvent} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnGenericMotionEvent:Call(uarg0id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnKeyDown:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onKeyDown(JNIEnv *env, jclass clazz, jint arg0, jobject arg1, jlong arg1id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.KeyEvent} uarg1id = (arg1id==0 ? NULL : (arg1id == -1 ? ((#{Android.android.view.KeyEvent})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg1,(#{Uno.Type})#{Android.android.view.KeyEvent:TypeOf}, false, true)}) : (#{Android.android.view.KeyEvent})uLoadWeakObject((uWeakObject*)arg1id)));
//
//        try
//        {
//        if (#{OnKeyDown} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnKeyDown:Call(arg0, uarg1id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnKeyLongPress:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onKeyLongPress(JNIEnv *env, jclass clazz, jint arg0, jobject arg1, jlong arg1id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.KeyEvent} uarg1id = (arg1id==0 ? NULL : (arg1id == -1 ? ((#{Android.android.view.KeyEvent})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg1,(#{Uno.Type})#{Android.android.view.KeyEvent:TypeOf}, false, true)}) : (#{Android.android.view.KeyEvent})uLoadWeakObject((uWeakObject*)arg1id)));
//
//        try
//        {
//        if (#{OnKeyLongPress} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnKeyLongPress:Call(arg0, uarg1id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnKeyMultiple:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onKeyMultiple(JNIEnv *env, jclass clazz, jint arg0, jint arg1, jobject arg2, jlong arg2id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.KeyEvent} uarg2id = (arg2id==0 ? NULL : (arg2id == -1 ? ((#{Android.android.view.KeyEvent})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg2,(#{Uno.Type})#{Android.android.view.KeyEvent:TypeOf}, false, true)}) : (#{Android.android.view.KeyEvent})uLoadWeakObject((uWeakObject*)arg2id)));
//
//        try
//        {
//        if (#{OnKeyMultiple} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnKeyMultiple:Call(arg0, arg1, uarg2id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnKeyShortcut:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onKeyShortcut(JNIEnv *env, jclass clazz, jint arg0, jobject arg1, jlong arg1id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.KeyEvent} uarg1id = (arg1id==0 ? NULL : (arg1id == -1 ? ((#{Android.android.view.KeyEvent})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg1,(#{Uno.Type})#{Android.android.view.KeyEvent:TypeOf}, false, true)}) : (#{Android.android.view.KeyEvent})uLoadWeakObject((uWeakObject*)arg1id)));
//
//        try
//        {
//        if (#{OnKeyShortcut} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnKeyShortcut:Call(arg0, uarg1id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnKeyUp:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onKeyUp(JNIEnv *env, jclass clazz, jint arg0, jobject arg1, jlong arg1id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.KeyEvent} uarg1id = (arg1id==0 ? NULL : (arg1id == -1 ? ((#{Android.android.view.KeyEvent})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg1,(#{Uno.Type})#{Android.android.view.KeyEvent:TypeOf}, false, true)}) : (#{Android.android.view.KeyEvent})uLoadWeakObject((uWeakObject*)arg1id)));
//
//        try
//        {
//        if (#{OnKeyUp} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnKeyUp:Call(arg0, uarg1id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnLowMemory:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onLowMemory(JNIEnv *env, jclass clazz) {
//        uAutoReleasePool pool;
//
//        try
//        {
//        if (#{OnLowMemory}==NULL) return;
//        #{OnLowMemory:Call()};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnMenuItemSelected:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onMenuItemSelected(JNIEnv *env, jclass clazz, jint arg0, jobject arg1, jlong arg1id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.MenuItem} uarg1id = (arg1id==0 ? NULL : (arg1id == -1 ? ((#{Android.android.view.MenuItem})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg1,(#{Uno.Type})#{Android.android.view.MenuItem:TypeOf}, false, true)}) : (#{Android.android.view.MenuItem})uLoadWeakObject((uWeakObject*)arg1id)));
//
//        try
//        {
//        if (#{OnMenuItemSelected} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnMenuItemSelected:Call(arg0, uarg1id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnMenuOpened:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onMenuOpened(JNIEnv *env, jclass clazz, jint arg0, jobject arg1, jlong arg1id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.Menu} uarg1id = (arg1id==0 ? NULL : (arg1id == -1 ? ((#{Android.android.view.Menu})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg1,(#{Uno.Type})#{Android.android.view.Menu:TypeOf}, false, true)}) : (#{Android.android.view.Menu})uLoadWeakObject((uWeakObject*)arg1id)));
//
//        try
//        {
//        if (#{OnMenuOpened} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnMenuOpened:Call(arg0, uarg1id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnNavigateUp:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onNavigateUp(JNIEnv *env, jclass clazz) {
//        uAutoReleasePool pool;
//
//        try
//        {
//        if (#{OnNavigateUp} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnNavigateUp:Call()};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnNavigateUpFromChild:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onNavigateUpFromChild(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.app.Activity} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.app.Activity})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.app.Activity:TypeOf}, false, true)}) : (#{Android.android.app.Activity})uLoadWeakObject((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnNavigateUpFromChild} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnNavigateUpFromChild:Call(uarg0id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnPrepareNavigateUpTaskStack:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onPrepareNavigateUpTaskStack(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.app.TaskStackBuilder} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.app.TaskStackBuilder})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.app.TaskStackBuilder:TypeOf}, false, true)}) : (#{Android.android.app.TaskStackBuilder})uLoadWeakObject((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnPrepareNavigateUpTaskStack}==NULL) return;
//        #{OnPrepareNavigateUpTaskStack:Call(uarg0id)};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnProvideAssistData:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onProvideAssistData(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.os.Bundle} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.os.Bundle})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.os.Bundle:TypeOf}, false, true)}) : (#{Android.android.os.Bundle})uLoadWeakObject((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnProvideAssistData}==NULL) return;
//        #{OnProvideAssistData:Call(uarg0id)};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnSearchRequested:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onSearchRequested(JNIEnv *env, jclass clazz) {
//        uAutoReleasePool pool;
//
//        try
//        {
//        if (#{OnSearchRequested} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnSearchRequested:Call()};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnTouchEvent:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onTouchEvent(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.MotionEvent} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.view.MotionEvent})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.view.MotionEvent:TypeOf}, false, true)}) : (#{Android.android.view.MotionEvent})uLoadWeakObject((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnTouchEvent} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnTouchEvent:Call(uarg0id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnTrackballEvent:IsStripped})
//        jboolean JNICALL Android_NativeActivityHelper_onTrackballEvent(JNIEnv *env, jclass clazz, jobject arg0, jlong arg0id) {
//        uAutoReleasePool pool;
//        #{Android.android.view.MotionEvent} uarg0id = (arg0id==0 ? NULL : (arg0id == -1 ? ((#{Android.android.view.MotionEvent})#{Android.Base.Wrappers.JWrapper(Android.Base.Primitives.ujobject,Uno.Type,bool,bool):New(arg0,(#{Uno.Type})#{Android.android.view.MotionEvent:TypeOf}, false, true)}) : (#{Android.android.view.MotionEvent})uLoadWeakObject((uWeakObject*)arg0id)));
//
//        try
//        {
//        if (#{OnTrackballEvent} == NULL) {
//        return false;
//        } else {
//        return(jboolean) #{OnTrackballEvent:Call(uarg0id)};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnTrimMemory:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onTrimMemory(JNIEnv *env, jclass clazz, jint arg0) {
//        uAutoReleasePool pool;
//
//        try
//        {
//        if (#{OnTrimMemory}==NULL) return;
//        #{OnTrimMemory:Call(arg0)};
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
//~
//        #if (!#{Android.Runtime.NativeActivityHelper.OnUserInteraction:IsStripped})
//        void JNICALL Android_NativeActivityHelper_onUserInteraction(JNIEnv *env, jclass clazz) {
//        uAutoReleasePool pool;
//
//        try
//        {
//        if (#{OnUserInteraction} != NULL) {
//        #{OnUserInteraction:Call()};
//        }
//        }
//        catch (const uThrowable& t)
//        {
//        ::uString* str;
//        if (t.Exception && #{Uno.Exception:Of(t.Exception).Message:Get()}) {
//        str = #{Uno.Exception:Of(t.Exception).Message:Get()};
//        } else {
//        str = ::uNewStringAnsi("Unknown Uno Exception", 21);
//        }
//        #{Android.Base.JNI.ThrowNewException(string):Call(str)};
//        }
//        }
//        #endi
JNFUN(void,Binding_Android_Runtime_RunnableAction__run31342,jlong ujPtr) {
    INITCALLBACK(uPtr,uObject*);
    JTRY
    ::g::Android::java::lang::Runnable::run(uInterface(uPtr, ::g::Android::java::lang::Runnable_typeof()));
    JCATCH
}
static uString* STRINGS[9];
static uType* TYPES[35];

namespace g{
namespace Android{
namespace Runtime{

// C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno(840)
// -----------------------------------------------------

// public sealed extern class BooleanArray :840
// {
BooleanArray_type* BooleanArray_typeof()
{
    static uSStrong<BooleanArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(BooleanArray);
    options.TypeSize = sizeof(BooleanArray_type);
    type = (BooleanArray_type*)uClassType::New("Android.Runtime.BooleanArray", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))BooleanArray__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[1] = ::g::Android::Runtime::JAEnumerator_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::Runtime::JavaGetter_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(BooleanArray_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(BooleanArray_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(BooleanArray_type, interface2));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction("GetEnumerator", NULL, (void*)BooleanArray__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Bool_typeof()), 0));
    return type;
}

// public Uno.Collections.IEnumerator<bool> GetEnumerator() :861
void BooleanArray__GetEnumerator_fn(BooleanArray* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Uno.Collections.IEnumerator<bool> GetEnumerator() [instance] :861
uObject* BooleanArray::GetEnumerator()
{
    return (uObject*)((::g::Android::Runtime::JAEnumerator*)::g::Android::Runtime::JAEnumerator::New1(::TYPES[1/*Android.Runtime.JAEnumerator<bool>*/], this, ::g::Android::Base::JNI::GetArrayLength(_javaObject), uDelegate::New(::TYPES[3/*Android.Runtime.JavaGetter<bool>*/], (void*)::g::Android::Base::JNI__GetBooleanArrayElement_fn)));
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno(880)
// -----------------------------------------------------

// public sealed extern class ByteArray :880
// {
ByteArray_type* ByteArray_typeof()
{
    static uSStrong<ByteArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ByteArray);
    options.TypeSize = sizeof(ByteArray_type);
    type = (ByteArray_type*)uClassType::New("Android.Runtime.ByteArray", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))ByteArray__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::SByte_typeof());
    ::TYPES[5] = ::g::Android::Runtime::JAEnumerator_typeof()->MakeType(::g::Uno::SByte_typeof());
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[6] = ::g::Android::Runtime::JavaGetter_typeof()->MakeType(::g::Uno::SByte_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(ByteArray_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ByteArray_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::SByte_typeof()), offsetof(ByteArray_type, interface2));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction("GetEnumerator", NULL, (void*)ByteArray__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::SByte_typeof()), 0));
    return type;
}

// public Uno.Collections.IEnumerator<sbyte> GetEnumerator() :901
void ByteArray__GetEnumerator_fn(ByteArray* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Uno.Collections.IEnumerator<sbyte> GetEnumerator() [instance] :901
uObject* ByteArray::GetEnumerator()
{
    return (uObject*)((::g::Android::Runtime::JAEnumerator*)::g::Android::Runtime::JAEnumerator::New1(::TYPES[5/*Android.Runtime.JAEnumerator<sbyte>*/], this, ::g::Android::Base::JNI::GetArrayLength(_javaObject), uDelegate::New(::TYPES[6/*Android.Runtime.JavaGetter<sbyte>*/], (void*)::g::Android::Base::JNI__GetByteArrayElement_fn)));
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno(920)
// -----------------------------------------------------

// public sealed extern class CharArray :920
// {
CharArray_type* CharArray_typeof()
{
    static uSStrong<CharArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(CharArray);
    options.TypeSize = sizeof(CharArray_type);
    type = (CharArray_type*)uClassType::New("Android.Runtime.CharArray", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))CharArray__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Char_typeof());
    ::TYPES[8] = ::g::Android::Runtime::JAEnumerator_typeof()->MakeType(::g::Uno::Char_typeof());
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[9] = ::g::Android::Runtime::JavaGetter_typeof()->MakeType(::g::Uno::Char_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(CharArray_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(CharArray_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Char_typeof()), offsetof(CharArray_type, interface2));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction("GetEnumerator", NULL, (void*)CharArray__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Char_typeof()), 0));
    return type;
}

// public Uno.Collections.IEnumerator<char> GetEnumerator() :941
void CharArray__GetEnumerator_fn(CharArray* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Uno.Collections.IEnumerator<char> GetEnumerator() [instance] :941
uObject* CharArray::GetEnumerator()
{
    return (uObject*)((::g::Android::Runtime::JAEnumerator*)::g::Android::Runtime::JAEnumerator::New1(::TYPES[8/*Android.Runtime.JAEnumerator<char>*/], this, ::g::Android::Base::JNI::GetArrayLength(_javaObject), uDelegate::New(::TYPES[9/*Android.Runtime.JavaGetter<char>*/], (void*)::g::Android::Base::JNI__GetCharArrayElement_fn)));
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno(1120)
// ------------------------------------------------------

// public sealed extern class DoubleArray :1120
// {
DoubleArray_type* DoubleArray_typeof()
{
    static uSStrong<DoubleArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(DoubleArray);
    options.TypeSize = sizeof(DoubleArray_type);
    type = (DoubleArray_type*)uClassType::New("Android.Runtime.DoubleArray", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))DoubleArray__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[10] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[11] = ::g::Android::Runtime::JAEnumerator_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[12] = ::g::Android::Runtime::JavaGetter_typeof()->MakeType(::g::Uno::Double_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(DoubleArray_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(DoubleArray_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(DoubleArray_type, interface2));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction("GetEnumerator", NULL, (void*)DoubleArray__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Double_typeof()), 0));
    return type;
}

// public Uno.Collections.IEnumerator<double> GetEnumerator() :1142
void DoubleArray__GetEnumerator_fn(DoubleArray* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Uno.Collections.IEnumerator<double> GetEnumerator() [instance] :1142
uObject* DoubleArray::GetEnumerator()
{
    return (uObject*)((::g::Android::Runtime::JAEnumerator*)::g::Android::Runtime::JAEnumerator::New1(::TYPES[11/*Android.Runtime.JAEnumerator<double>*/], this, ::g::Android::Base::JNI::GetArrayLength(_javaObject), uDelegate::New(::TYPES[12/*Android.Runtime.JavaGetter<double>*/], (void*)::g::Android::Base::JNI__GetDoubleArrayElement_fn)));
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno(1081)
// ------------------------------------------------------

// public sealed extern class FloatArray :1081
// {
FloatArray_type* FloatArray_typeof()
{
    static uSStrong<FloatArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(FloatArray);
    options.TypeSize = sizeof(FloatArray_type);
    type = (FloatArray_type*)uClassType::New("Android.Runtime.FloatArray", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))FloatArray__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[13] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[14] = ::g::Android::Runtime::JAEnumerator_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[15] = ::g::Android::Runtime::JavaGetter_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[16] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(FloatArray_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(FloatArray_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(FloatArray_type, interface2));
    type->SetFields(5);
    type->Reflection.SetFunctions(5,
        new uFunction("GetEnumerator", NULL, (void*)FloatArray__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Float_typeof()), 0),
        new uFunction("get_Item", NULL, (void*)FloatArray__get_Item_fn, 0, false, ::g::Uno::Float_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, (void*)FloatArray__set_Item_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)FloatArray__New6_fn, 0, true, FloatArray_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("ToUnoArray", NULL, (void*)FloatArray__ToUnoArray_fn, 0, false, ::g::Uno::Float_typeof()->Array(), 0));
    return type;
}

// public FloatArray(int length) :1084
void FloatArray__ctor_5_fn(FloatArray* __this, int* length)
{
    __this->ctor_5(*length);
}

// public Uno.Collections.IEnumerator<float> GetEnumerator() :1101
void FloatArray__GetEnumerator_fn(FloatArray* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public float get_Item(int i) :1091
void FloatArray__get_Item_fn(FloatArray* __this, int* i, float* __retval)
{
    *__retval = __this->Item(*i);
}

// public void set_Item(int i, float value) :1095
void FloatArray__set_Item_fn(FloatArray* __this, int* i, float* value)
{
    __this->Item(*i, *value);
}

// public FloatArray New(int length) :1084
void FloatArray__New6_fn(int* length, FloatArray** __retval)
{
    *__retval = FloatArray::New6(*length);
}

// public float[] ToUnoArray() :1106
void FloatArray__ToUnoArray_fn(FloatArray* __this, uArray** __retval)
{
    *__retval = __this->ToUnoArray();
}

// public FloatArray(int length) [instance] :1084
void FloatArray::ctor_5(int length)
{
    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    _javaObject = ::g::Android::Base::JNI::NewFloatArray(length);
}

// public Uno.Collections.IEnumerator<float> GetEnumerator() [instance] :1101
uObject* FloatArray::GetEnumerator()
{
    return (uObject*)((::g::Android::Runtime::JAEnumerator*)::g::Android::Runtime::JAEnumerator::New1(::TYPES[14/*Android.Runtime.JAEnumerator<float>*/], this, ::g::Android::Base::JNI::GetArrayLength(_javaObject), uDelegate::New(::TYPES[15/*Android.Runtime.JavaGetter<float>*/], (void*)::g::Android::Base::JNI__GetFloatArrayElement_fn)));
}

// public float get_Item(int i) [instance] :1091
float FloatArray::Item(int i)
{
    return ::g::Android::Base::JNI::GetFloatArrayElement((uObject*)this, i);
}

// public void set_Item(int i, float value) [instance] :1095
void FloatArray::Item(int i, float value)
{
    ::g::Android::Base::JNI::SetFloatArrayElement((uObject*)this, i, value);
}

// public float[] ToUnoArray() [instance] :1106
uArray* FloatArray::ToUnoArray()
{
    return ::g::Android::Base::Types::Arrays::JavaToUnoFloatArray(_javaObject);
}

// public FloatArray New(int length) [static] :1084
FloatArray* FloatArray::New6(int length)
{
    FloatArray* obj2 = (FloatArray*)uNew(FloatArray_typeof());
    obj2->ctor_5(length);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno(1002)
// ------------------------------------------------------

// public sealed extern class IntArray :1002
// {
IntArray_type* IntArray_typeof()
{
    static uSStrong<IntArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(IntArray);
    options.TypeSize = sizeof(IntArray_type);
    type = (IntArray_type*)uClassType::New("Android.Runtime.IntArray", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))IntArray__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[17] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[18] = ::g::Android::Runtime::JAEnumerator_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[19] = ::g::Android::Runtime::JavaGetter_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[16] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(IntArray_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(IntArray_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Int_typeof()), offsetof(IntArray_type, interface2));
    type->SetFields(5);
    type->Reflection.SetFunctions(4,
        new uFunction("GetEnumerator", NULL, (void*)IntArray__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Int_typeof()), 0),
        new uFunction("get_Item", NULL, (void*)IntArray__get_Item_fn, 0, false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, (void*)IntArray__set_Item_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)IntArray__New6_fn, 0, true, IntArray_typeof(), 1, ::g::Uno::Int_typeof()));
    return type;
}

// public IntArray(int length) :1006
void IntArray__ctor_5_fn(IntArray* __this, int* length)
{
    __this->ctor_5(*length);
}

// public Uno.Collections.IEnumerator<int> GetEnumerator() :1023
void IntArray__GetEnumerator_fn(IntArray* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public int get_Item(int i) :1013
void IntArray__get_Item_fn(IntArray* __this, int* i, int* __retval)
{
    *__retval = __this->Item(*i);
}

// public void set_Item(int i, int value) :1017
void IntArray__set_Item_fn(IntArray* __this, int* i, int* value)
{
    __this->Item(*i, *value);
}

// public IntArray New(int length) :1006
void IntArray__New6_fn(int* length, IntArray** __retval)
{
    *__retval = IntArray::New6(*length);
}

// public IntArray(int length) [instance] :1006
void IntArray::ctor_5(int length)
{
    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    _javaObject = ::g::Android::Base::JNI::NewIntArray(length);
}

// public Uno.Collections.IEnumerator<int> GetEnumerator() [instance] :1023
uObject* IntArray::GetEnumerator()
{
    return (uObject*)((::g::Android::Runtime::JAEnumerator*)::g::Android::Runtime::JAEnumerator::New1(::TYPES[18/*Android.Runtime.JAEnumerator<int>*/], this, ::g::Android::Base::JNI::GetArrayLength(_javaObject), uDelegate::New(::TYPES[19/*Android.Runtime.JavaGetter<int>*/], (void*)::g::Android::Base::JNI__GetIntArrayElement_fn)));
}

// public int get_Item(int i) [instance] :1013
int IntArray::Item(int i)
{
    return ::g::Android::Base::JNI::GetIntArrayElement((uObject*)this, i);
}

// public void set_Item(int i, int value) [instance] :1017
void IntArray::Item(int i, int value)
{
    ::g::Android::Base::JNI::SetIntArrayElement((uObject*)this, i, value);
}

// public IntArray New(int length) [static] :1006
IntArray* IntArray::New6(int length)
{
    IntArray* obj2 = (IntArray*)uNew(IntArray_typeof());
    obj2->ctor_5(length);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno(755)
// -----------------------------------------------------

// public sealed extern class JAEnumerator<T> :755
// {
JAEnumerator_type* JAEnumerator_typeof()
{
    static uSStrong<JAEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(JAEnumerator);
    options.TypeSize = sizeof(JAEnumerator_type);
    type = (JAEnumerator_type*)uClassType::New("Android.Runtime.JAEnumerator`1", options);
    type->interface1.fp_Dispose = (void(*)(uObject*))JAEnumerator__Uno_IDisposable_Dispose_fn;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))JAEnumerator__get_Current_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))JAEnumerator__MoveNext_fn;
    ::TYPES[20] = ::g::Android::Runtime::JavaGetter_typeof();
    ::TYPES[16] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetPrecalc(
        ::TYPES[20/*Android.Runtime.JavaGetter`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(JAEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(JAEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(JAEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Android::Runtime::JAEnumerator, _current), 0,
        ::g::Android::Runtime::JavaGetter_typeof()->MakeType(type->T(0)), offsetof(::g::Android::Runtime::JAEnumerator, _getter), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Android::Runtime::JAEnumerator, _length), 0,
        ::g::Android::Base::Wrappers::JWrapper_typeof(), offsetof(::g::Android::Runtime::JAEnumerator, _source), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Current", NULL, (void*)JAEnumerator__get_Current_fn, 0, false, type->T(0), 0),
        new uFunction("MoveNext", NULL, (void*)JAEnumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", type, (void*)JAEnumerator__New1_fn, 0, true, type, 3, ::g::Android::Base::Wrappers::JWrapper_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Runtime::JavaGetter_typeof()->MakeType(type->T(0))));
    return type;
}

// public JAEnumerator(Android.Base.Wrappers.JWrapper source, int length, Android.Runtime.JavaGetter<T> getter) :762
void JAEnumerator__ctor__fn(JAEnumerator* __this, ::g::Android::Base::Wrappers::JWrapper* source, int* length, uDelegate* getter)
{
    __this->ctor_(source, *length, getter);
}

// public T get_Current() :770
void JAEnumerator__get_Current_fn(JAEnumerator* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Android.Runtime.JavaGetter<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((uPtr(__this->_getter)->Invoke(&ret2, 2, (uObject*)__this->_source, uCRef<int>(__this->_current)), ret2)), void();
}

// public bool MoveNext() :777
void JAEnumerator__MoveNext_fn(JAEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public JAEnumerator New(Android.Base.Wrappers.JWrapper source, int length, Android.Runtime.JavaGetter<T> getter) :762
void JAEnumerator__New1_fn(uType* __type, ::g::Android::Base::Wrappers::JWrapper* source, int* length, uDelegate* getter, JAEnumerator** __retval)
{
    *__retval = JAEnumerator::New1(__type, source, *length, getter);
}

// public void Uno.IDisposable.Dispose() :787
void JAEnumerator__Uno_IDisposable_Dispose_fn(JAEnumerator* __this)
{
}

// public JAEnumerator(Android.Base.Wrappers.JWrapper source, int length, Android.Runtime.JavaGetter<T> getter) [instance] :762
void JAEnumerator::ctor_(::g::Android::Base::Wrappers::JWrapper* source, int length, uDelegate* getter)
{
    _current = -1;
    _length = length;
    _source = source;
    _getter = getter;
}

// public bool MoveNext() [instance] :777
bool JAEnumerator::MoveNext()
{
    if ((_current + 1) >= _length)
        return false;
    else
    {
        _current = (_current + 1);
        return true;
    }
}

// public JAEnumerator New(Android.Base.Wrappers.JWrapper source, int length, Android.Runtime.JavaGetter<T> getter) [static] :762
JAEnumerator* JAEnumerator::New1(uType* __type, ::g::Android::Base::Wrappers::JWrapper* source, int length, uDelegate* getter)
{
    JAEnumerator* obj1 = (JAEnumerator*)uNew(__type);
    obj1->ctor_(source, length, getter);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno(752)
// -----------------------------------------------------

// public extern delegate T JavaGetter<T>(Android.Base.Wrappers.IJWrapper array, int index) :752
uDelegateType* JavaGetter_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Android.Runtime.JavaGetter`1", 2, 1);
    type->SetSignature(type->T(0),
        ::g::Android::Base::Wrappers::IJWrapper_typeof(),
        ::g::Uno::Int_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno(704)
// -----------------------------------------------------

// public sealed extern class JEnumerator :704
// {
JEnumerator_type* JEnumerator_typeof()
{
    static uSStrong<JEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(JEnumerator);
    options.TypeSize = sizeof(JEnumerator_type);
    type = (JEnumerator_type*)uClassType::New("Android.Runtime.JEnumerator", options);
    type->interface1.fp_Dispose = (void(*)(uObject*))JEnumerator__Uno_IDisposable_Dispose_fn;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))JEnumerator__get_Current_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))JEnumerator__MoveNext_fn;
    ::STRINGS[0] = uString::Const("Not in valid state to get current value from Enumerator");
    ::TYPES[21] = ::g::Uno::Bool_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Android::java::lang::Object_typeof()), offsetof(JEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(JEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(JEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Android::java::lang::Object_typeof(), offsetof(::g::Android::Runtime::JEnumerator, _current), 0,
        ::g::Android::java::util::Iterator_typeof(), offsetof(::g::Android::Runtime::JEnumerator, _iterator), 0,
        ::g::Android::java::lang::Iterable_typeof(), offsetof(::g::Android::Runtime::JEnumerator, _source), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Android::Runtime::JEnumerator, begun), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Current", NULL, (void*)JEnumerator__get_Current_fn, 0, false, ::g::Android::java::lang::Object_typeof(), 0),
        new uFunction("MoveNext", NULL, (void*)JEnumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)JEnumerator__New1_fn, 0, true, JEnumerator_typeof(), 1, ::g::Android::java::lang::Iterable_typeof()),
        new uFunction("Reset", NULL, (void*)JEnumerator__Reset_fn, 0, false, uVoid_typeof(), 0));
    return type;
}

// public JEnumerator(Android.java.lang.Iterable source) :711
void JEnumerator__ctor__fn(JEnumerator* __this, uObject* source)
{
    __this->ctor_(source);
}

// private Android.java.lang.Object _currentElement() :718
void JEnumerator___currentElement_fn(JEnumerator* __this, ::g::Android::java::lang::Object** __retval)
{
    *__retval = __this->_currentElement();
}

// public Android.java.lang.Object get_Current() :717
void JEnumerator__get_Current_fn(JEnumerator* __this, ::g::Android::java::lang::Object** __retval)
{
    *__retval = __this->Current();
}

// public bool MoveNext() :732
void JEnumerator__MoveNext_fn(JEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public JEnumerator New(Android.java.lang.Iterable source) :711
void JEnumerator__New1_fn(uObject* source, JEnumerator** __retval)
{
    *__retval = JEnumerator::New1(source);
}

// public void Reset() :727
void JEnumerator__Reset_fn(JEnumerator* __this)
{
    __this->Reset();
}

// public void Uno.IDisposable.Dispose() :742
void JEnumerator__Uno_IDisposable_Dispose_fn(JEnumerator* __this)
{
    __this->_current = NULL;
    __this->_iterator = NULL;
    __this->_source = NULL;
}

// public JEnumerator(Android.java.lang.Iterable source) [instance] :711
void JEnumerator::ctor_(uObject* source)
{
    _source = source;
    Reset();
}

// private Android.java.lang.Object _currentElement() [instance] :718
::g::Android::java::lang::Object* JEnumerator::_currentElement()
{
    if (!begun)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Not in vali...*/]));
    else
        return _current;
}

// public Android.java.lang.Object get_Current() [instance] :717
::g::Android::java::lang::Object* JEnumerator::Current()
{
    return _currentElement();
}

// public bool MoveNext() [instance] :732
bool JEnumerator::MoveNext()
{
    begun = true;
    bool hasNext = ::g::Android::java::util::Iterator::hasNext(uInterface(uPtr(_iterator), ::g::Android::java::util::Iterator_typeof()));

    if (hasNext)
        _current = ::g::Android::java::util::Iterator::next(uInterface(uPtr(_iterator), ::g::Android::java::util::Iterator_typeof()));

    return hasNext;
}

// public void Reset() [instance] :727
void JEnumerator::Reset()
{
    _iterator = ::g::Android::java::lang::Iterable::iterator(uInterface(uPtr(_source), ::g::Android::java::lang::Iterable_typeof()));
}

// public JEnumerator New(Android.java.lang.Iterable source) [static] :711
JEnumerator* JEnumerator::New1(uObject* source)
{
    JEnumerator* obj1 = (JEnumerator*)uNew(JEnumerator_typeof());
    obj1->ctor_(source);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno(795)
// -----------------------------------------------------

// public sealed extern class JOAEnumerator<T> :795
// {
JOAEnumerator_type* JOAEnumerator_typeof()
{
    static uSStrong<JOAEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(JOAEnumerator);
    options.TypeSize = sizeof(JOAEnumerator_type);
    type = (JOAEnumerator_type*)uClassType::New("Android.Runtime.JOAEnumerator`1", options);
    type->interface1.fp_Dispose = (void(*)(uObject*))JOAEnumerator__Uno_IDisposable_Dispose_fn;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))JOAEnumerator__get_Current_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))JOAEnumerator__MoveNext_fn;
    ::STRINGS[1] = uString::Const("JavaEnumerator: The position is not valid.");
    ::TYPES[22] = ::g::Android::Runtime::ObjectArray_typeof();
    type->SetPrecalc(
        ::TYPES[22/*Android.Runtime.ObjectArray`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(JOAEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(JOAEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(JOAEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Android::Runtime::JOAEnumerator, _current), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Android::Runtime::JOAEnumerator, _length), 0,
        ::g::Android::Runtime::ObjectArray_typeof()->MakeType(type->T(0)), offsetof(::g::Android::Runtime::JOAEnumerator, _source), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Current", NULL, (void*)JOAEnumerator__get_Current_fn, 0, false, type->T(0), 0),
        new uFunction("MoveNext", NULL, (void*)JOAEnumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", type, (void*)JOAEnumerator__New1_fn, 0, true, type, 2, ::g::Android::Runtime::ObjectArray_typeof()->MakeType(type->T(0)), ::g::Uno::Int_typeof()));
    return type;
}

// public JOAEnumerator(Android.Runtime.ObjectArray<T> source, int length) :801
void JOAEnumerator__ctor__fn(JOAEnumerator* __this, ::g::Android::Runtime::ObjectArray* source, int* length)
{
    __this->ctor_(source, *length);
}

// public T get_Current() :809
void JOAEnumerator__get_Current_fn(JOAEnumerator* __this, uObject** __retval)
{
    *__retval = __this->Current();
}

// public bool MoveNext() :823
void JOAEnumerator__MoveNext_fn(JOAEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public JOAEnumerator New(Android.Runtime.ObjectArray<T> source, int length) :801
void JOAEnumerator__New1_fn(uType* __type, ::g::Android::Runtime::ObjectArray* source, int* length, JOAEnumerator** __retval)
{
    *__retval = JOAEnumerator::New1(__type, source, *length);
}

// public void Uno.IDisposable.Dispose() :833
void JOAEnumerator__Uno_IDisposable_Dispose_fn(JOAEnumerator* __this)
{
}

// public JOAEnumerator(Android.Runtime.ObjectArray<T> source, int length) [instance] :801
void JOAEnumerator::ctor_(::g::Android::Runtime::ObjectArray* source, int length)
{
    _current = -1;
    _length = length;
    _source = source;
}

// public T get_Current() [instance] :809
uObject* JOAEnumerator::Current()
{
    uType* __types[] = {
        __type->Precalced(0/*Android.Runtime.ObjectArray<T>*/),
        __type->T(0),
    };

    if ((_current < 0) || (_current >= _length))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"JavaEnumera...*/]));
    else
        return (uObject*)uPtr(_source)->Item(_current);
}

// public bool MoveNext() [instance] :823
bool JOAEnumerator::MoveNext()
{
    if ((_current + 1) >= _length)
        return false;
    else
    {
        _current = (_current + 1);
        return true;
    }
}

// public JOAEnumerator New(Android.Runtime.ObjectArray<T> source, int length) [static] :801
JOAEnumerator* JOAEnumerator::New1(uType* __type, ::g::Android::Runtime::ObjectArray* source, int length)
{
    JOAEnumerator* obj1 = (JOAEnumerator*)uNew(__type);
    obj1->ctor_(source, length);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno(1042)
// ------------------------------------------------------

// public sealed extern class LongArray :1042
// {
LongArray_type* LongArray_typeof()
{
    static uSStrong<LongArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(LongArray);
    options.TypeSize = sizeof(LongArray_type);
    type = (LongArray_type*)uClassType::New("Android.Runtime.LongArray", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))LongArray__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[23] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Long_typeof());
    ::TYPES[24] = ::g::Android::Runtime::JAEnumerator_typeof()->MakeType(::g::Uno::Long_typeof());
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[25] = ::g::Android::Runtime::JavaGetter_typeof()->MakeType(::g::Uno::Long_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(LongArray_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(LongArray_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Long_typeof()), offsetof(LongArray_type, interface2));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction("GetEnumerator", NULL, (void*)LongArray__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Long_typeof()), 0));
    return type;
}

// public Uno.Collections.IEnumerator<long> GetEnumerator() :1062
void LongArray__GetEnumerator_fn(LongArray* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Uno.Collections.IEnumerator<long> GetEnumerator() [instance] :1062
uObject* LongArray::GetEnumerator()
{
    return (uObject*)((::g::Android::Runtime::JAEnumerator*)::g::Android::Runtime::JAEnumerator::New1(::TYPES[24/*Android.Runtime.JAEnumerator<long>*/], this, ::g::Android::Base::JNI::GetArrayLength(_javaObject), uDelegate::New(::TYPES[25/*Android.Runtime.JavaGetter<long>*/], (void*)::g::Android::Base::JNI__GetLongArrayElement_fn)));
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno(635)
// -----------------------------------------------------

// public static extern class NativeActivityHelper :635
// {
// static NativeActivityHelper() :682
static void NativeActivityHelper__cctor__fn(uType* __type)
{
    NativeActivityHelper::Init();
}

uClassType* NativeActivityHelper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Runtime.NativeActivityHelper", options);
    type->fp_cctor_ = NativeActivityHelper__cctor__fn;
    type->Reflection.SetFunctions(1,
        new uFunction("Init", NULL, (void*)NativeActivityHelper__Init_fn, 0, true, uVoid_typeof(), 0));
    return type;
}

// public static extern void Init() :688
void NativeActivityHelper__Init_fn()
{
    NativeActivityHelper::Init();
}

// public static extern void Init() [static] :688
void NativeActivityHelper::Init()
{
    NativeActivityHelper_typeof()->Init();
    ::g::Android::Base::JNI::Init();
    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
    
    jclass cls = ::g::Android::Base::JNI::LoadClass(jni, "com.Add_from_App.Add_from_App");
    
    JNINativeMethod nativeFunc;
    //#if (!#{Android.Runtime.NativeActivityHelper.OnActionModeFinished:IsStripped})
    //nativeFunc = {(char* const)"__n_onActionModeFinished", (char* const)"(Landroid/view/ActionMode;J)V", (void *)&Android_NativeActivityHelper_onActionModeFinished};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnActionModeStarted:IsStripped})
    //nativeFunc = {(char* const)"__n_onActionModeStarted", (char* const)"(Landroid/view/ActionMode;J)V", (void *)&Android_NativeActivityHelper_onActionModeStarted};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnAttachFragment:IsStripped})
    //nativeFunc = {(char* const)"__n_onAttachFragment", (char* const)"(Landroid/app/Fragment;J)V", (void *)&Android_NativeActivityHelper_onAttachFragment};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnBackPressed:IsStripped})
    //nativeFunc = {(char* const)"__n_onBackPressed", (char* const)"()V", (void *)&Android_NativeActivityHelper_onBackPressed};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnContentChanged:IsStripped})
    //nativeFunc = {(char* const)"__n_onContentChanged", (char* const)"()V", (void *)&Android_NativeActivityHelper_onContentChanged};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnContextItemSelected:IsStripped})
    //nativeFunc = {(char* const)"__n_onContextItemSelected", (char* const)"(Landroid/view/MenuItem;J)Z", (void *)&Android_NativeActivityHelper_onContextItemSelected};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnContextMenuClosed:IsStripped})
    //nativeFunc = {(char* const)"__n_onContextMenuClosed", (char* const)"(Landroid/view/Menu;J)V", (void *)&Android_NativeActivityHelper_onContextMenuClosed};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnGenericMotionEvent:IsStripped})
    //nativeFunc = {(char* const)"__n_onGenericMotionEvent", (char* const)"(Landroid/view/MotionEvent;J)Z", (void *)&Android_NativeActivityHelper_onGenericMotionEvent};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnKeyDown:IsStripped})
    //nativeFunc = {(char* const)"__n_onKeyDown", (char* const)"(ILandroid/view/KeyEvent;J)Z", (void *)&Android_NativeActivityHelper_onKeyDown};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnKeyLongPress:IsStripped})
    //nativeFunc = {(char* const)"__n_onKeyLongPress", (char* const)"(ILandroid/view/KeyEvent;J)Z", (void *)&Android_NativeActivityHelper_onKeyLongPress};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnKeyMultiple:IsStripped})
    //nativeFunc = {(char* const)"__n_onKeyMultiple", (char* const)"(IILandroid/view/KeyEvent;J)Z", (void *)&Android_NativeActivityHelper_onKeyMultiple};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnKeyShortcut:IsStripped})
    //nativeFunc = {(char* const)"__n_onKeyShortcut", (char* const)"(ILandroid/view/KeyEvent;J)Z", (void *)&Android_NativeActivityHelper_onKeyShortcut};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnKeyUp:IsStripped})
    //nativeFunc = {(char* const)"__n_onKeyUp", (char* const)"(ILandroid/view/KeyEvent;J)Z", (void *)&Android_NativeActivityHelper_onKeyUp};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnLowMemory:IsStripped})
    //nativeFunc = {(char* const)"__n_onLowMemory", (char* const)"()V", (void *)&Android_NativeActivityHelper_onLowMemory};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnMenuItemSelected:IsStripped})
    //nativeFunc = {(char* const)"__n_onMenuItemSelected", (char* const)"(ILandroid/view/MenuItem;J)Z", (void *)&Android_NativeActivityHelper_onMenuItemSelected};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnMenuOpened:IsStripped})
    //nativeFunc = {(char* const)"__n_onMenuOpened", (char* const)"(ILandroid/view/Menu;J)Z", (void *)&Android_NativeActivityHelper_onMenuOpened};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnNavigateUp:IsStripped})
    //nativeFunc = {(char* const)"__n_onNavigateUp", (char* const)"()Z", (void *)&Android_NativeActivityHelper_onNavigateUp};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnNavigateUpFromChild:IsStripped})
    //nativeFunc = {(char* const)"__n_onNavigateUpFromChild", (char* const)"(Landroid/app/Activity;J)Z", (void *)&Android_NativeActivityHelper_onNavigateUpFromChild};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnPrepareNavigateUpTaskStack:IsStripped})
    //nativeFunc = {(char* const)"__n_onPrepareNavigateUpTaskStack", (char* const)"(Landroid/app/TaskStackBuilder;J)V", (void *)&Android_NativeActivityHelper_onPrepareNavigateUpTaskStack};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnProvideAssistData:IsStripped})
    //nativeFunc = {(char* const)"__n_onProvideAssistData", (char* const)"(Landroid/os/Bundle;J)V", (void *)&Android_NativeActivityHelper_onProvideAssistData};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnSearchRequested:IsStripped})
    //nativeFunc = {(char* const)"__n_onSearchRequested", (char* const)"()Z", (void *)&Android_NativeActivityHelper_onSearchRequested};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnTouchEvent:IsStripped})
    //nativeFunc = {(char* const)"__n_onTouchEvent", (char* const)"(Landroid/view/MotionEvent;J)Z", (void *)&Android_NativeActivityHelper_onTouchEvent};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnTrackballEvent:IsStripped})
    //nativeFunc = {(char* const)"__n_onTrackballEvent", (char* const)"(Landroid/view/MotionEvent;J)Z", (void *)&Android_NativeActivityHelper_onTrackballEvent};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnTrimMemory:IsStripped})
    //nativeFunc = {(char* const)"__n_onTrimMemory", (char* const)"(I)V", (void *)&Android_NativeActivityHelper_onTrimMemory};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnUserInteraction:IsStripped})
    //nativeFunc = {(char* const)"__n_onUserInteraction", (char* const)"()V", (void *)&Android_NativeActivityHelper_onUserInteraction};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endif
    
    //#if (!#{Android.Runtime.NativeActivityHelper.OnActivityResult:IsStripped})
    //nativeFunc = {(char* const)"__n_onActivityResult", (char* const)"(IILandroid/content/Intent;J)V", (void *)&Android_NativeActivityHelper_onActivityResult};
    //#{Android.Runtime.UnoHelper.RegisterCallback(Android.Base.Primitives.JNINativeMethod, Android.Base.Primitives.ujobject):Call(nativeFunc,(#{Android.Base.Primitives.ujobject})cls)};
    //#endi
    
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno(1173)
// ------------------------------------------------------

// public sealed extern class ObjectArray<T> :1173
// {
ObjectArray_type* ObjectArray_typeof()
{
    static uSStrong<ObjectArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ObjectArray);
    options.TypeSize = sizeof(ObjectArray_type);
    type = (ObjectArray_type*)uClassType::New("Android.Runtime.ObjectArray`1", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))ObjectArray__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::STRINGS[2] = uString::Const(".");
    ::STRINGS[3] = uString::Const("/");
    ::STRINGS[4] = uString::Const("Index (");
    ::STRINGS[5] = uString::Const(") out of bounds for array of length ");
    ::TYPES[26] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[27] = ::g::Android::Runtime::JOAEnumerator_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[16] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[28] = uObject_typeof();
    type->SetPrecalc(
        ::TYPES[26/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0)),
        ::TYPES[27/*Android.Runtime.JOAEnumerator`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(ObjectArray_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ObjectArray_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(ObjectArray_type, interface2));
    type->SetFields(5);
    type->Reflection.SetFunctions(4,
        new uFunction("GetEnumerator", NULL, (void*)ObjectArray__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), 0),
        new uFunction("get_Item", NULL, (void*)ObjectArray__get_Item_fn, 0, false, type->T(0), 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, (void*)ObjectArray__set_Item_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), type->T(0)),
        new uFunction(".ctor", type, (void*)ObjectArray__New6_fn, 0, true, type, 1, ::g::Uno::Int_typeof()));
    return type;
}

// public ObjectArray(Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType) :1179
void ObjectArray__ctor_4_fn(ObjectArray* __this, jobject* obj, uType* typePtr, bool* typeHasFallbackClass, bool* resolveType)
{
    __this->ctor_4(*obj, typePtr, *typeHasFallbackClass, *resolveType);
}

// public ObjectArray(int length) :1175
void ObjectArray__ctor_5_fn(ObjectArray* __this, int* length)
{
    __this->ctor_5(*length);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :1204
void ObjectArray__GetEnumerator_fn(ObjectArray* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public T get_Item(int i) :1183
void ObjectArray__get_Item_fn(ObjectArray* __this, int* i, uObject** __retval)
{
    *__retval = __this->Item(*i);
}

// public void set_Item(int i, T value) :1193
void ObjectArray__set_Item_fn(ObjectArray* __this, int* i, uObject* value)
{
    __this->Item(*i, value);
}

// public ObjectArray New(int length) :1175
void ObjectArray__New6_fn(uType* __type, int* length, ObjectArray** __retval)
{
    *__retval = ObjectArray::New6(__type, *length);
}

// public ObjectArray(Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType) [instance] :1179
void ObjectArray::ctor_4(jobject obj, uType* typePtr, bool typeHasFallbackClass, bool resolveType)
{
    ctor_3(obj, typePtr, typeHasFallbackClass, false);
}

// public ObjectArray(int length) [instance] :1175
void ObjectArray::ctor_5(int length)
{
    uType* __types[] = {
        __type->T(0),
    };
    ctor_4(::g::Android::Runtime::ObjectArrayAUX::makeArrayJObject(::g::Uno::String::Replace1(uPtr(::g::Uno::String::Substring(uPtr(uPtr(__types[0])->ToString()), 8)), ::STRINGS[2/*"."*/], ::STRINGS[3/*"/"*/]), length), __type, false, false);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :1204
uObject* ObjectArray::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerator<T>*/),
        __type->T(0),
        __type->Precalced(1/*Android.Runtime.JOAEnumerator<T>*/),
    };
    return (uObject*)((::g::Android::Runtime::JOAEnumerator*)::g::Android::Runtime::JOAEnumerator::New1(__types[2], this, ::g::Android::Base::JNI::GetArrayLength(_javaObject)));
}

// public T get_Item(int i) [instance] :1183
uObject* ObjectArray::Item(int i)
{
    uType* __types[] = {
        __type->T(0),
    };
    int len = ::g::Android::Base::JNI::GetArrayLength(_javaObject);

    if ((i >= 0) && (i < len))
    {
        jobject jobj = ::g::Android::Base::JNI::GetObjectArrayElement((uObject*)this, i);
        return uAs<uObject*>(::g::Android::Base::Wrappers::JWrapper::New1(jobj, ::g::Android::Base::JNI::GetDefaultType(), false, true), __types[0]);
    }
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[4/*"Index ("*/], uBox<int>(::g::Uno::Int_typeof(), i)), ::STRINGS[5/*") out of bo...*/]), uBox<int>(::g::Uno::Int_typeof(), len))));
}

// public void set_Item(int i, T value) [instance] :1193
void ObjectArray::Item(int i, uObject* value)
{
    int len = ::g::Android::Base::JNI::GetArrayLength(_javaObject);

    if ((i >= 0) && (i < len))
    {
        uObject* obj = (uObject*)value;
        ::g::Android::Base::JNI::SetObjectArrayElement((uObject*)this, i, ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(uPtr(obj), ::TYPES[16/*Android.Base.Wrappers.IJWrapper*/])));
    }
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[4/*"Index ("*/], uBox<int>(::g::Uno::Int_typeof(), i)), ::STRINGS[5/*") out of bo...*/]), uBox<int>(::g::Uno::Int_typeof(), len))));
}

// public ObjectArray New(int length) [static] :1175
ObjectArray* ObjectArray::New6(uType* __type, int length)
{
    ObjectArray* obj1 = (ObjectArray*)uNew(__type);
    obj1->ctor_5(length);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno(1166)
// ------------------------------------------------------

// internal static extern class ObjectArrayAUX :1166
// {
uClassType* ObjectArrayAUX_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Runtime.ObjectArrayAUX", options);
    return type;
}

// internal static extern Android.Base.Primitives.ujobject makeArrayJObject(string typeName, int length) :1169
void ObjectArrayAUX__makeArrayJObject_fn(uString* typeName_, int* length_, jobject* __retval)
{
    *__retval = ObjectArrayAUX::makeArrayJObject(typeName_, *length_);
}

// internal static extern Android.Base.Primitives.ujobject makeArrayJObject(string typeName, int length) [static] :1169
jobject ObjectArrayAUX::makeArrayJObject(uString* typeName_, int length_)
{
    INIT_JNI;
    char const* clsName = uStringToCStr(typeName_);
    return U_JNIVAR->NewObjectArray(length_, LOAD_SYS_CLASS(clsName), NULL);
    uFreeCStr(clsName);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno(58)
// ----------------------------------------------------

// public sealed extern class RunnableAction :58
// {
RunnableAction_type* RunnableAction_typeof()
{
    static uSStrong<RunnableAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(RunnableAction);
    options.TypeSize = sizeof(RunnableAction_type);
    type = (RunnableAction_type*)uClassType::New("Android.Runtime.RunnableAction", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_run = (void(*)(uObject*))RunnableAction__run_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::STRINGS[6] = uString::Const("com.Bindings.Binding_Android_Runtime_RunnableAction");
    ::STRINGS[7] = uString::Const("<init>");
    ::STRINGS[8] = uString::Const("(J)V");
    ::TYPES[21] = ::g::Uno::Bool_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[29] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[30] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(RunnableAction_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(RunnableAction_type, interface1),
        ::g::Android::java::lang::Runnable_typeof(), offsetof(RunnableAction_type, interface2));
    type->SetFields(5,
        ::g::Uno::Action_typeof(), offsetof(::g::Android::Runtime::RunnableAction, _internalAction), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::Runtime::RunnableAction::_javaClass2_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)RunnableAction__New5_fn, 0, true, RunnableAction_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("run", NULL, (void*)RunnableAction__run_fn, 0, false, uVoid_typeof(), 0));
    return type;
}

// public RunnableAction(Uno.Action actn) :61
void RunnableAction__ctor_4_fn(RunnableAction* __this, uDelegate* actn)
{
    __this->ctor_4(actn);
}

// public RunnableAction New(Uno.Action actn) :61
void RunnableAction__New5_fn(uDelegate* actn, RunnableAction** __retval)
{
    *__retval = RunnableAction::New5(actn);
}

// public void run() :65
void RunnableAction__run_fn(RunnableAction* __this)
{
    __this->run();
}

jclass RunnableAction::_javaClass2_;

// public RunnableAction(Uno.Action actn) [instance] :61
void RunnableAction::ctor_4(uDelegate* actn)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[6/*"com.Binding...*/];
    }

    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(RunnableAction::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        RunnableAction::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[6/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_run","(J)V",Binding_Android_Runtime_RunnableAction__run31342);
        COMMIT_REG_MTD(RunnableAction::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[7/*"<init>"*/], ::STRINGS[8/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _internalAction = actn;
}

// public void run() [instance] :65
void RunnableAction::run()
{
    uPtr(_internalAction)->InvokeVoid();
}

// public RunnableAction New(Uno.Action actn) [static] :61
RunnableAction* RunnableAction::New5(uDelegate* actn)
{
    RunnableAction* obj1 = (RunnableAction*)uNew(RunnableAction_typeof());
    obj1->ctor_4(actn);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno(961)
// -----------------------------------------------------

// public sealed extern class ShortArray :961
// {
ShortArray_type* ShortArray_typeof()
{
    static uSStrong<ShortArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ShortArray);
    options.TypeSize = sizeof(ShortArray_type);
    type = (ShortArray_type*)uClassType::New("Android.Runtime.ShortArray", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))ShortArray__GetEnumerator_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[31] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Short_typeof());
    ::TYPES[32] = ::g::Android::Runtime::JAEnumerator_typeof()->MakeType(::g::Uno::Short_typeof());
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[33] = ::g::Android::Runtime::JavaGetter_typeof()->MakeType(::g::Uno::Short_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(ShortArray_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ShortArray_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Short_typeof()), offsetof(ShortArray_type, interface2));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction("GetEnumerator", NULL, (void*)ShortArray__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Short_typeof()), 0));
    return type;
}

// public Uno.Collections.IEnumerator<short> GetEnumerator() :982
void ShortArray__GetEnumerator_fn(ShortArray* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Uno.Collections.IEnumerator<short> GetEnumerator() [instance] :982
uObject* ShortArray::GetEnumerator()
{
    return (uObject*)((::g::Android::Runtime::JAEnumerator*)::g::Android::Runtime::JAEnumerator::New1(::TYPES[32/*Android.Runtime.JAEnumerator<short>*/], this, ::g::Android::Base::JNI::GetArrayLength(_javaObject), uDelegate::New(::TYPES[33/*Android.Runtime.JavaGetter<short>*/], (void*)::g::Android::Base::JNI__GetShortArrayElement_fn)));
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\$.uno(14)
// ----------------------------------------------------

// public static extern class UnoHelper :14
// {
uClassType* UnoHelper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Runtime.UnoHelper", options);
    ::TYPES[34] = ::g::Android::java::lang::Runnable_typeof();
    type->SetFields(0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::Runtime::UnoHelper::_helperCls_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Android::Runtime::UnoHelper::_inited_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Runtime::UnoHelper::_makeJSObservableMid_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("Init", NULL, (void*)UnoHelper__Init_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("MakeJSObservable", NULL, (void*)UnoHelper__MakeJSObservable_fn, 0, true, ::g::Android::java::util::Observable_typeof(), 1, ::g::Android::java::util::Observer_typeof()),
        new uFunction("RegisterCallback", NULL, (void*)UnoHelper__RegisterCallback_fn, 0, true, uVoid_typeof(), 2, ::g::Android::Base::Primitives::JNINativeMethod_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("RunnableFromAction", NULL, (void*)UnoHelper__RunnableFromAction_fn, 0, true, ::g::Android::java::lang::Runnable_typeof(), 1, ::g::Uno::Action_typeof()));
    return type;
}

// public static extern void Init() :51
void UnoHelper__Init_fn()
{
    UnoHelper::Init();
}

// public static extern Android.java.util.Observable MakeJSObservable(Android.java.util.Observer observer) :43
void UnoHelper__MakeJSObservable_fn(uObject* observer_, ::g::Android::java::util::Observable** __retval)
{
    *__retval = UnoHelper::MakeJSObservable(observer_);
}

// public static extern void RegisterCallback(Android.Base.Primitives.JNINativeMethod nativeFunc, Android.Base.Primitives.ujobject optionalClass) :54
void UnoHelper__RegisterCallback_fn(JNINativeMethod* nativeFunc_, jobject* optionalClass_)
{
    UnoHelper::RegisterCallback(*nativeFunc_, *optionalClass_);
}

// public static Android.java.lang.Runnable RunnableFromAction(Uno.Action actn) :20
void UnoHelper__RunnableFromAction_fn(uDelegate* actn, uObject** __retval)
{
    *__retval = UnoHelper::RunnableFromAction(actn);
}

jclass UnoHelper::_helperCls_;
bool UnoHelper::_inited_;
jmethodID UnoHelper::_makeJSObservableMid_;

// public static extern void Init() [static] :51
void UnoHelper::Init()
{
    if (UnoHelper::_inited()) { return; }
    ::g::Android::Base::JNI::Init();
    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
    UnoHelper::_helperCls() = reinterpret_cast<jclass>(jni->NewGlobalRef(::g::Android::Base::JNI::LoadClass(::g::Android::Base::JNI::GetEnvPtr(), "com.Bindings.UnoHelper")));
    if (!UnoHelper::_helperCls()) {
        U_THROW(::g::Uno::Exception::New2(uNewStringUtf8("Could not cache class for UnoHelper",35)));
    }
    UnoHelper::_inited() = true;
}

// public static extern Android.java.util.Observable MakeJSObservable(Android.java.util.Observer observer) [static] :43
::g::Android::java::util::Observable* UnoHelper::MakeJSObservable(uObject* observer_)
{
    INIT_JNI;
    jobject _jobserver = ((!observer_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(observer_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(UnoHelper::_makeJSObservableMid(),UnoHelper::_helperCls(),"MakeJSObservable","(Ljava/util/Observer;)Ljava/util/Observable;",GetStaticMethodID,"Id for method UnoHelper.MakeJSObservable could not be cached",60);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(UnoHelper::_helperCls(), UnoHelper::_makeJSObservableMid(), _jobserver),result,::g::Android::java::util::Observable_typeof(),::g::Android::java::util::Observable*,false,false);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return (::g::Android::java::util::Observable*)result;
}

// public static extern void RegisterCallback(Android.Base.Primitives.JNINativeMethod nativeFunc, Android.Base.Primitives.ujobject optionalClass) [static] :54
void UnoHelper::RegisterCallback(JNINativeMethod nativeFunc_, jobject optionalClass_)
{
    if (!UnoHelper::_inited()) { UnoHelper::Init(); }
    jclass cls;
    if (optionalClass_) {
        cls = (jclass)optionalClass_;
    } else {
        cls = UnoHelper::_helperCls();
    }
    jint attached = ::g::Android::Base::JNI::GetEnvPtr()->RegisterNatives(cls, &nativeFunc_, 1);
    if (attached < 0) {
        U_THROW(::g::Uno::Exception::New2(uNewStringUtf8("Could not register the instantiation callback function",54)));
    }
}

// public static Android.java.lang.Runnable RunnableFromAction(Uno.Action actn) [static] :20
uObject* UnoHelper::RunnableFromAction(uDelegate* actn)
{
    return (uObject*)::g::Android::Runtime::RunnableAction::New5(actn);
}
// }

}}} // ::g::Android::Runtime
