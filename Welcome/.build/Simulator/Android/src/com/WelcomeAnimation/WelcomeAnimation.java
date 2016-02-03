package com.WelcomeAnimation;

import android.os.Build;
import android.util.Log;
import android.os.Bundle;
import android.os.Looper;
import android.view.View;
import android.view.Window;
import android.app.Activity;
import android.view.Display;
import android.view.Surface;
import android.view.KeyEvent;
import android.content.Intent;
import android.app.AlertDialog;
import java.lang.reflect.Field;
import android.widget.TextView;
import android.widget.ScrollView;
import android.widget.FrameLayout;
import android.view.Choreographer;
import android.app.NativeActivity;
import android.view.WindowManager;
import android.widget.FrameLayout;
import android.annotation.TargetApi;
import android.view.ViewTreeObserver;
import android.content.DialogInterface;
import android.graphics.SurfaceTexture;
import android.annotation.SuppressLint;
import android.content.res.AssetManager;
import android.content.res.Configuration;
import android.view.View.OnLayoutChangeListener;

import android.annotation.TargetApi;
import android.app.Activity;
import android.app.Fragment;
import android.app.TaskStackBuilder;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.os.Build;
import android.os.Bundle;
import android.util.AttributeSet;
import android.view.ActionMode.Callback;
import android.view.ActionMode;
import android.view.ContextMenu.ContextMenuInfo;
import android.view.KeyEvent;
import android.view.Menu;
import android.view.MenuItem;
import android.view.MotionEvent;
import android.view.View;
import android.view.WindowManager.LayoutParams;
import java.lang.String;

public class WelcomeAnimation extends android.app.Activity
{
	// load c++ libs needed by uno
    static { CppManager.LoadLibraries(); }

    // state
    private static AppState _appState;  // lasts through all resurrections
    private static ActivityState.AndroidLifecycleListener _lifecycleListener; // gives lifecycle info the AppState
    public final ActivityState activityState; // one per activity

    //
    public WelcomeAnimation()
    {
    	super();
    	_appState = AppState.Create(this);
    	activityState = new ActivityState(_appState);
        _lifecycleListener = activityState.GetLifecycleProxy();
    }

    public static void TerminateNow()
    {
        _appState.CurrentActivity.activityState.Destroyed = true;
        android.os.Process.killProcess(android.os.Process.myPid());
    }

    public static void TerminateOnException(final Exception e)
    {
    	WelcomeAnimation activity = _appState.CurrentActivity;
        ActivityState activityState = activity.activityState;
        activityState.Destroyed = true;

        activity.runOnUiThread(new Runnable() {
        	public void run() {
        		AlertDialog d = MakeUnoExceptionAlertDialog(e);
        		d.setCanceledOnTouchOutside(false); d.show();
        	}});
    }

    private static AlertDialog MakeUnoExceptionAlertDialog(final Exception e)
    {
    	WelcomeAnimation activity = _appState.CurrentActivity;
    	final TextView textView = new TextView(activity);
    	textView.setText(makeExceptionString(e));
    	final ScrollView scrollView = new ScrollView(activity);
    	scrollView.addView(textView);
    	final AlertDialog.Builder b = new AlertDialog.Builder(activity);

        b.setTitle("Unhandled Exception");
        b.setView(scrollView);
        b.setCancelable(false);
        b.setPositiveButton("OK", new DialogInterface.OnClickListener() {
                public void onClick(DialogInterface dialog, int which) { AnyThrow.throwUncheked(e); }
            });
    	 return b.create();
    }

    private static class AnyThrow {
    	//Throws unchecked exception. We need this so we can rethrow the uno exception as a
    	// java exception from inside an interface method that doesnt allow exceptions.
        public static void throwUncheked(Throwable e) {
            AnyThrow.<RuntimeException>throwAny(e);
        }
        @SuppressWarnings("unchecked")
        private static <E extends Throwable> void throwAny(Throwable e) throws E {
            throw (E)e;
        }
    }

    private static String makeExceptionString(Exception e)
    {
    	return "-Uno Trace-\n\n" + e.getMessage() + "\n" + getJavaStackTrace(e);
    }

    private static String getJavaStackTrace(Exception e)
    {
    	String trace = "\n-Java Trace-\n";
    	for (StackTraceElement i : e.getStackTrace()) {
    		trace+="\n"+i.toString();
		}
    	return trace;
    }


	@Override
    protected void onCreate(Bundle savedInstanceState)
    {
        // Set action bar default state
    	_appState.SystemUI.StatusBarOnCreate(this);

    	// Set current view
    	_appState.Layout.AttachToActivity(this);

        // mandatory call to super
        super.onCreate(savedInstanceState);

        // start main loop
        activityState.MainLoop.Start();

        // ensure arrival of any intent
        onNewIntent(getIntent());

        // call c++ for setup
    	LOG.D( "Call OnCreate");
        ActivityNativeEntryPoints.cppOnCreate(AppRuntimeSettings.SeperateUnoThread);
        LOG.D( "Called OnCreate");

        //
        FinishOnCreate();
    }

    private String pendingURI = "";
    @Override
    protected void onNewIntent (Intent intent)
    {
        if (intent!=null && intent.getData()!=null)
        {
            LOG.D("action> "+intent.getAction());
            LOG.D("scheme> "+intent.getScheme());
            LOG.D("datastring> "+intent.getDataString());
            pendingURI = intent.getDataString();
        }
        
    }

    private void FinishOnCreate()
    {
    	_appState.HasCreated = true;
        ActivityNativeEntryPoints.cppOnConfigChanged();
    }

    @Override
    public boolean onKeyUp(int keyCode, KeyEvent event)
    {
    	if (keyCode == KeyEvent.KEYCODE_MENU) {
            ActivityNativeEntryPoints.cppOnKeyUp(200);
    		return true;
    	}
        if (keyCode == KeyEvent.KEYCODE_BACK) {
            ActivityNativeEntryPoints.cppOnKeyUp(201);
            if (AppRuntimeSettings.KillOnBackButton) finish();
            return true;
        }
        if (1 == 0) {
    return __n_onKeyUp(keyCode,event,com.Bindings.UnoHelper.GetUnoObjectRef(event));
} else
        {
            return false;
        }
    }
    @Override
    public boolean onKeyDown(int keyCode, KeyEvent event)
    {
    	if (keyCode == KeyEvent.KEYCODE_MENU) {
            ActivityNativeEntryPoints.cppOnKeyDown(200);
    		return true;
    	}
        if (keyCode == KeyEvent.KEYCODE_BACK) {
            ActivityNativeEntryPoints.cppOnKeyDown(201);
            if (AppRuntimeSettings.KillOnBackButton) finish();
            return true;
        }
        if (1 == 0) {
    return __n_onKeyDown(keyCode,event,com.Bindings.UnoHelper.GetUnoObjectRef(event));
} else
        {
            return false;
        }
    }
    @Override
    public void onActivityResult (int arg0, int arg1, android.content.Intent arg2)
    {
        if (!_appState.HasCreated) return;
        com.fuse.Native.Camera.IntentCallback(arg0, arg1, arg2);
if (1 == 0) {
    __n_onActivityResult(arg0,arg1,arg2,com.Bindings.UnoHelper.GetUnoObjectRef(arg2));
} else {
   super.onActivityResult(arg0,arg1,arg2);
}
    }

    @SuppressLint("NewApi")
	@SuppressWarnings("deprecation")
	@Override
    protected void onDestroy() {
    	activityState.Destroyed = true;
    	LOG.D( "Call OnDestroy");
    	_appState.Layout.DetachFromActivity();
    	super.onDestroy();
    	LOG.D( "Called OnDestroy");
        if (AppRuntimeSettings.KillActivityOnDestroy) android.os.Process.killProcess(android.os.Process.myPid());
    }

    @Override
    protected void onPause() {
        focusOnPause();
    	LOG.D( "Call OnPause");
        super.onPause();
        ActivityNativeEntryPoints.cppOnPause();
        _appState.Layout.RootLayout.setVisibility(View.GONE);
        _lifecycleListener.onPause();
        LOG.D( "Called OnPause");
    }

    @Override
    protected void onResume() {
    	LOG.D( "Call OnResume");
        super.onResume();
        _appState.SystemUI.UpdateStatusBar();
        _appState.Layout.RootLayout.setVisibility(View.VISIBLE);
        ActivityNativeEntryPoints.cppOnResume();
        _lifecycleListener.onResume();
        LOG.D( "Called OnResume");
        focusOnResume();

        if (pendingURI!="")
        {
            ActivityNativeEntryPoints.cppOnReceiveURI(pendingURI);
            pendingURI = "";
        }
    }

    @Override
    protected void onRestart() {
    	LOG.D( "Call OnRestart");
        super.onRestart();
        ActivityNativeEntryPoints.cppOnRestart();
        LOG.D( "Called OnRestart");
    }

    @Override
    protected void onSaveInstanceState(Bundle outState) {
    	LOG.D( "Call OnSave");
        ActivityNativeEntryPoints.cppOnSaveInstanceState(null); // {TODO} direct byte buffer?
        LOG.D( "Called OnSave");
    }

    @Override
    protected void onStart() {
    	LOG.D( "Call OnStart");
        super.onStart();
        ActivityNativeEntryPoints.cppOnStart();
        _lifecycleListener.onStart();
        LOG.D( "Called OnStart");
    }

    @Override
    protected void onStop() {
    	LOG.D( "Call OnStop");
        super.onStop();
        ActivityNativeEntryPoints.cppOnStop();
        _lifecycleListener.onStop();
        LOG.D( "Called OnStop");
        if (Build.VERSION.SDK_INT < 11 && AppRuntimeSettings.KillActivityOnDestroy) {
            android.os.Process.killProcess(android.os.Process.myPid());
        }
    }

    @Override
    public void onConfigurationChanged(Configuration arg0) {
    	LOG.D( "Call OnConfigChanged");
        super.onConfigurationChanged(arg0);
        if (!activityState.Destroyed) {
            ActivityNativeEntryPoints.cppOnConfigChanged();
            
        }
        LOG.D( "Called OnConfigChanged");
    }

    @Override
    public void onLowMemory() {
    	LOG.D( "Call OnLowMem");
        super.onLowMemory();
        if (!activityState.Destroyed) {
            ActivityNativeEntryPoints.cppOnLowMemory();
            if (1 == 0) {
    __n_onLowMemory();
} else {
   super.onLowMemory();
}
        }
        LOG.D( "Called OnLowMem");
    }

    //------------------------------------------------
    // Normalize Focus Changed Events.
    // Force the focus changed events to be have as a part of the regular
    // lifecycle model, only firing between resume & pause.

    private boolean cachedForResume = false;
    private boolean currentlyInteractive = false;
    private boolean allowedToChangeFocus = false;

    @Override
    public void onWindowFocusChanged(boolean arg0) {
        super.onWindowFocusChanged(arg0);
        if (!activityState.Destroyed) {
        	if (arg0!=currentlyInteractive) {
        		if (allowedToChangeFocus) {
        			currentlyInteractive = arg0;
                    LOG.D( "Call OnFocusChanged:"+arg0);
        			ActivityNativeEntryPoints.cppOnWindowFocusChanged(arg0);
                    LOG.D( "Called OnFocusChanged:"+arg0);
        		} else if (arg0=true) {
        			cachedForResume = true;
        		}
        	}
            _lifecycleListener.onWindowFocusChanged(arg0);
        }
    }
    private void focusOnResume()
    {
    	if (!activityState.Destroyed) {
    		if (currentlyInteractive) {
    			Log.e(AppRuntimeSettings.AppName, "State Error: Java backend asserts interactive pre-resume.");
    		}
    		if (currentlyInteractive) {
    			Log.e(AppRuntimeSettings.AppName, "State Error: Java backend asserts allow interact state change pre-resume.");
    		}
    		if (cachedForResume) {
        		currentlyInteractive = true;
                LOG.D( "Call OnFocusChanged:true (for onResume)");
        		ActivityNativeEntryPoints.cppOnWindowFocusChanged(true);
                LOG.D( "Called OnFocusChanged:true  (for onResume)");
        	}
        	cachedForResume = false;
        	allowedToChangeFocus = true;
        }
    }
    private void focusOnPause()
    {
    	if (!activityState.Destroyed) {
        	if (currentlyInteractive) {
        		currentlyInteractive = false;
        		cachedForResume = false;
                LOG.D( "Call OnFocusChanged:false (for onPause)");
        		ActivityNativeEntryPoints.cppOnWindowFocusChanged(false);
                LOG.D( "Called OnFocusChanged:false (for onPause)");
        	}
        }
    	allowedToChangeFocus = false;
    }

    //-----------------------------------------------------------

    @Override
public boolean onContextItemSelected (android.view.MenuItem arg0)
{
    if (!_appState.HasCreated) return false;
    if (1 == 0) {
        return __n_onContextItemSelected(arg0,com.Bindings.UnoHelper.GetUnoObjectRef(arg0));
    } else {
       return super.onContextItemSelected(arg0);
    }
}
public static native boolean __n_onContextItemSelected(android.view.MenuItem arg0,long arg0id);
@Override
public boolean onKeyLongPress (int arg0,android.view.KeyEvent arg1)
{
    if (!_appState.HasCreated) return false;
    if (1 == 0) {
        return __n_onKeyLongPress(arg0,arg1,com.Bindings.UnoHelper.GetUnoObjectRef(arg1));
    } else {
       return super.onKeyLongPress(arg0,arg1);
    }
}
public static native boolean __n_onKeyLongPress(int arg0,android.view.KeyEvent arg1,long arg1id);
@Override
public boolean onKeyMultiple (int arg0,int arg1,android.view.KeyEvent arg2)
{
    if (!_appState.HasCreated) return false;
    if (1 == 0) {
        return __n_onKeyMultiple(arg0,arg1,arg2,com.Bindings.UnoHelper.GetUnoObjectRef(arg2));
    } else {
       return super.onKeyMultiple(arg0,arg1,arg2);
    }
}
public static native boolean __n_onKeyMultiple(int arg0,int arg1,android.view.KeyEvent arg2,long arg2id);
@Override
public boolean onMenuItemSelected (int arg0,android.view.MenuItem arg1)
{
    if (!_appState.HasCreated) return false;
    if (1 == 0) {
        return __n_onMenuItemSelected(arg0,arg1,com.Bindings.UnoHelper.GetUnoObjectRef(arg1));
    } else {
       return super.onMenuItemSelected(arg0,arg1);
    }
}
public static native boolean __n_onMenuItemSelected(int arg0,android.view.MenuItem arg1,long arg1id);
@Override
public boolean onSearchRequested ()
{
    if (!_appState.HasCreated) return false;
    if (1 == 0) {
        return __n_onSearchRequested();
    } else {
       return super.onSearchRequested();
    }
}
public static native boolean __n_onSearchRequested();
@Override
public boolean onTouchEvent (android.view.MotionEvent arg0)
{
    if (!_appState.HasCreated) return false;
    if (1 == 0) {
        return __n_onTouchEvent(arg0,com.Bindings.UnoHelper.GetUnoObjectRef(arg0));
    } else {
       return super.onTouchEvent(arg0);
    }
}
public static native boolean __n_onTouchEvent(android.view.MotionEvent arg0,long arg0id);
@Override
public boolean onTrackballEvent (android.view.MotionEvent arg0)
{
    if (!_appState.HasCreated) return false;
    if (1 == 0) {
        return __n_onTrackballEvent(arg0,com.Bindings.UnoHelper.GetUnoObjectRef(arg0));
    } else {
       return super.onTrackballEvent(arg0);
    }
}
@TargetApi(Build.VERSION_CODES.ICE_CREAM_SANDWICH)
public static native boolean __n_onTrackballEvent(android.view.MotionEvent arg0,long arg0id);
@Override
public void onBackPressed ()
{
    if (!_appState.HasCreated) return;
    if (1 == 0) {
        __n_onBackPressed();
    } else {
       super.onBackPressed();
    }
}
public static native void __n_onBackPressed();
@Override
public void onContentChanged ()
{
    if (!_appState.HasCreated) return;
    if (1 == 0) {
        __n_onContentChanged();
    } else {
       super.onContentChanged();
    }
}
public static native void __n_onContentChanged();
@Override
public void onContextMenuClosed (android.view.Menu arg0)
{
    if (!_appState.HasCreated) return;
    if (1 == 0) {
        __n_onContextMenuClosed(arg0,com.Bindings.UnoHelper.GetUnoObjectRef(arg0));
    } else {
       super.onContextMenuClosed(arg0);
    }
}
public static native void __n_onContextMenuClosed(android.view.Menu arg0,long arg0id);
@Override
public void onUserInteraction ()
{
    if (!_appState.HasCreated) return;
    if (1 == 0) {
        __n_onUserInteraction();
    } else {
       super.onUserInteraction();
    }
}
public static native void __n_onUserInteraction();
@TargetApi(Build.VERSION_CODES.HONEYCOMB)
@Override
    public boolean onKeyShortcut (int arg0,android.view.KeyEvent arg1)
    {
        if (!_appState.HasCreated) return false;
        if (1 == 0) {
            return __n_onKeyShortcut(arg0,arg1,com.Bindings.UnoHelper.GetUnoObjectRef(arg1));
        } else {
           return super.onKeyShortcut(arg0,arg1);
        }
    }
    public static native boolean __n_onKeyShortcut(int arg0,android.view.KeyEvent arg1,long arg1id);
@TargetApi(Build.VERSION_CODES.HONEYCOMB)
@Override
    public void onActionModeFinished (android.view.ActionMode arg0)
    {
        if (!_appState.HasCreated) return;
        if (1 == 0) {
            __n_onActionModeFinished(arg0,com.Bindings.UnoHelper.GetUnoObjectRef(arg0));
        } else {
           super.onActionModeFinished(arg0);
        }
    }
    public static native void __n_onActionModeFinished(android.view.ActionMode arg0,long arg0id);
@TargetApi(Build.VERSION_CODES.HONEYCOMB)
@Override
    public void onActionModeStarted (android.view.ActionMode arg0)
    {
        if (!_appState.HasCreated) return;
        if (1 == 0) {
            __n_onActionModeStarted(arg0,com.Bindings.UnoHelper.GetUnoObjectRef(arg0));
        } else {
           super.onActionModeStarted(arg0);
        }
    }
    public static native void __n_onActionModeStarted(android.view.ActionMode arg0,long arg0id);
@TargetApi(Build.VERSION_CODES.HONEYCOMB)
@Override
    public void onAttachFragment (android.app.Fragment arg0)
    {
        if (!_appState.HasCreated) return;
        if (1 == 0) {
            __n_onAttachFragment(arg0,com.Bindings.UnoHelper.GetUnoObjectRef(arg0));
        } else {
           super.onAttachFragment(arg0);
        }
    }
    public static native void __n_onAttachFragment(android.app.Fragment arg0,long arg0id);
@TargetApi(Build.VERSION_CODES.HONEYCOMB_MR1)
@Override
    public boolean onGenericMotionEvent (android.view.MotionEvent arg0)
    {
        if (!_appState.HasCreated) return false;
        if (1 == 0) {
            return __n_onGenericMotionEvent(arg0,com.Bindings.UnoHelper.GetUnoObjectRef(arg0));
        } else {
           return super.onGenericMotionEvent(arg0);
        }
    }
    public static native boolean __n_onGenericMotionEvent(android.view.MotionEvent arg0,long arg0id);
@TargetApi(Build.VERSION_CODES.ICE_CREAM_SANDWICH)
@Override
    public void onTrimMemory (int arg0)
    {
        if (!_appState.HasCreated) return;
        if (1 == 0) {
            __n_onTrimMemory(arg0);
        } else {
           super.onTrimMemory(arg0);
        }
    }
    public static native void __n_onTrimMemory(int arg0);
@TargetApi(Build.VERSION_CODES.JELLY_BEAN)
@Override
    public boolean onMenuOpened (int arg0,android.view.Menu arg1)
    {
        if (!_appState.HasCreated) return false;
        if (1 == 0) {
            return __n_onMenuOpened(arg0,arg1,com.Bindings.UnoHelper.GetUnoObjectRef(arg1));
        } else {
           return super.onMenuOpened(arg0,arg1);
        }
    }
    public static native boolean __n_onMenuOpened(int arg0,android.view.Menu arg1,long arg1id);
@TargetApi(Build.VERSION_CODES.JELLY_BEAN)
@Override
    public boolean onNavigateUp ()
    {
        if (!_appState.HasCreated) return false;
        if (1 == 0) {
            return __n_onNavigateUp();
        } else {
           return super.onNavigateUp();
        }
    }
    public static native boolean __n_onNavigateUp();
@TargetApi(Build.VERSION_CODES.JELLY_BEAN)
@Override
    public boolean onNavigateUpFromChild (android.app.Activity arg0)
    {
        if (!_appState.HasCreated) return false;
        if (1 == 0) {
            return __n_onNavigateUpFromChild(arg0,com.Bindings.UnoHelper.GetUnoObjectRef(arg0));
        } else {
           return super.onNavigateUpFromChild(arg0);
        }
    }
    public static native boolean __n_onNavigateUpFromChild(android.app.Activity arg0,long arg0id);
@TargetApi(Build.VERSION_CODES.JELLY_BEAN)
@Override
    public void onPrepareNavigateUpTaskStack (android.app.TaskStackBuilder arg0)
    {
        if (!_appState.HasCreated) return;
        if (1 == 0) {
            __n_onPrepareNavigateUpTaskStack(arg0,com.Bindings.UnoHelper.GetUnoObjectRef(arg0));
        } else {
           super.onPrepareNavigateUpTaskStack(arg0);
        }
    }
    public static native void __n_onPrepareNavigateUpTaskStack(android.app.TaskStackBuilder arg0,long arg0id);
@TargetApi(Build.VERSION_CODES.JELLY_BEAN_MR2)
@Override
    public void onProvideAssistData (android.os.Bundle arg0)
    {
        if (!_appState.HasCreated) return;
        if (1 == 0) {
            __n_onProvideAssistData(arg0,com.Bindings.UnoHelper.GetUnoObjectRef(arg0));
        } else {
           super.onProvideAssistData(arg0);
        }
    }
    public static native void __n_onProvideAssistData(android.os.Bundle arg0,long arg0id);
public static native boolean __n_onKeyDown(int arg0,android.view.KeyEvent arg1,long arg1id);
public static native boolean __n_onKeyUp(int arg0,android.view.KeyEvent arg1,long arg1id);
public static native void __n_onActivityResult(int arg0,int arg1,android.content.Intent arg2,long arg2id);
public static native void __n_onLowMemory();

    //-----------------------------------------------------------

    public static int ReflectR(String path)
    {
    	try {
    		int lastDot = path.lastIndexOf(".", path.length()-1);
    		Class<?> cls = Class.forName(R.class.getName()+"$"+(((String)path.subSequence(0, lastDot)).replace('.','$')));
			Field f = cls.getField((String)path.subSequence(lastDot+1, path.length()));
			return f.getInt(null);
		} catch (Exception e) {
			return -1;
		}
    }

    //-----------------------------------------------------------
    // Here be less favorable stuff that has tickets for cleanup

    // these two are cludges until we clean up UIEntryPoints & the custom views
    public static void RunOnUIThread(Runnable action)
    {
    	_appState.CurrentActivity.runOnUiThread(action);
    }
    public static Object GetSystemService(String name)
    {
    	return _appState.CurrentActivity.getSystemService(name);
    }
    public static boolean GetIsDestroyed()
    {
    	return _appState.CurrentActivity.activityState.Destroyed;
    }

    // used by c++ and annoyingly the custom view, fix this
    public static Activity GetRootActivity()
    {
        return _appState.CurrentActivity;
    }
    public static FrameLayout GetRootView()
    {
        return _appState.Layout.RootLayout;
    }
    public static AssetManager GetAssetManager()
    {
        return _appState.CurrentActivity.getAssets();
    }
    public static float GetStatusBarHeight()
    {
        return _appState.SystemUI.GetStatusBarHeight();
    }
    public static void HideStatusBar()
    {
        _appState.SystemUI.HideStatusBar();
    }
    public static void ShowStatusBar()
    {
        _appState.SystemUI.ShowStatusBar();
    }
    public static void EnterFullscreen()
    {
        _appState.SystemUI.EnterFullscreen();
    }

    public static void SetAsRootView(Object view)
    {
        final View uview = (View)view;
        _appState.CurrentActivity.runOnUiThread(new Runnable() { public void run() {
            if (uview==null)
            {
                _appState.Layout.RootLayout.removeAllViews();
            }
            else
            {
                if (_appState.Layout.RootLayout.getChildCount()>0)
                {
                    _appState.Layout.RootLayout.removeAllViews();
                }
                _appState.Layout.RootLayout.addView(uview, 0);
            }
        }});
    }

    private static SurfaceTexture _keepDummySurfaceTexture;
    public static Object CreateDummySurface(int texName)
    {
        // this is a temp hack. Moments like this make me want to make attribute
        // that gives bad code a halflife, after 2 months it deletes itself.
        _keepDummySurfaceTexture = new SurfaceTexture(texName);
        return new Surface(_keepDummySurfaceTexture);
    }

    // Used by xli
    public static int ShowMessageBox(CharSequence caption, CharSequence message, int buttons, int hints)
    {
        return MessageBoxHelper.ShowMessageBox(_appState.CurrentActivity, caption, message, buttons, hints);
    }
}
