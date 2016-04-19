#include <BootstrapperImpl_Android.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Types.Bridge.h>
#include <Android.android.animation.Animator.h>
#include <Android.android.animation.TimeAnimator.h>
#include <Android.android.animation.ValueAnimator.h>
#include <Android.android.app.Activity.h>
#include <Android.android.app.Fragment.h>
#include <Android.android.app.TaskStackBuilder.h>
#include <Android.android.content.ComponentName.h>
#include <Android.android.content.Context.h>
#include <Android.android.content.ContextWrapper.h>
#include <Android.android.content.Intent.h>
#include <Android.android.content.res.AssetFileDescriptor.h>
#include <Android.android.content.res.AssetManager.h>
#include <Android.android.content.res.ColorStateList.h>
#include <Android.android.content.res.Configuration.h>
#include <Android.android.content.res.Resources.h>
#include <Android.android.graphics.Bitmap.h>
#include <Android.android.graphics.BitmapDLRConfig.h>
#include <Android.android.graphics.BitmapFactory.h>
#include <Android.android.graphics.Canvas.h>
#include <Android.android.graphics.Color.h>
#include <Android.android.graphics.drawable.Drawable.h>
#include <Android.android.graphics.drawable.LayerDrawable.h>
#include <Android.android.graphics.drawable.ShapeDrawable.h>
#include <Android.android.graphics.drawable.shapes.ArcShape.h>
#include <Android.android.graphics.drawable.shapes.RectShape.h>
#include <Android.android.graphics.drawable.shapes.RoundRectShape.h>
#include <Android.android.graphics.drawable.shapes.Shape.h>
#include <Android.android.graphics.Matrix.h>
#include <Android.android.graphics.Paint.h>
#include <Android.android.graphics.PaintDLRStyle.h>
#include <Android.android.graphics.PorterDuffDLRMode.h>
#include <Android.android.graphics.Rect.h>
#include <Android.android.graphics.RectF.h>
#include <Android.android.graphics.SurfaceTexture.h>
#include <Android.android.graphics.Typeface.h>
#include <Android.android.media.AudioManager.h>
#include <Android.android.media.MediaPlayer.h>
#include <Android.android.net.Uri.h>
#include <Android.android.opengl.GLUtils.h>
#include <Android.android.os.BuildDLRVERSION.h>
#include <Android.android.os.Bundle.h>
#include <Android.android.os.Parcel.h>
#include <Android.android.os.Vibrator.h>
#include <Android.android.test.mock.MockContext.h>
#include <Android.android.text.Layout.h>
#include <Android.android.text.LayoutDLRAlignment.h>
#include <Android.android.text.StaticLayout.h>
#include <Android.android.text.TextPaint.h>
#include <Android.android.text.TextUtilsDLRTruncateAt.h>
#include <Android.android.util.TypedValue.h>
#include <Android.android.view.ActionMode.h>
#include <Android.android.view.ActionProvider.h>
#include <Android.android.view.Choreographer.h>
#include <Android.android.view.ContextThemeWrapper.h>
#include <Android.android.view.Gravity.h>
#include <Android.android.view.inputmethod.InputMethodManager.h>
#include <Android.android.view.KeyEvent.h>
#include <Android.android.view.MotionEvent.h>
#include <Android.android.view.Surface.h>
#include <Android.android.view.SurfaceView.h>
#include <Android.android.view.TextureView.h>
#include <Android.android.view.View.h>
#include <Android.android.view.ViewDLRMeasureSpec.h>
#include <Android.android.view.ViewGroup.h>
#include <Android.android.view.ViewGroupDLRLayoutParams.h>
#include <Android.android.view.ViewGroupDLRMarginLayoutParams.h>
#include <Android.android.view.WindowManagerDLRLayoutParams.h>
#include <Android.android.webkit.WebChromeClient.h>
#include <Android.android.webkit.WebSettings.h>
#include <Android.android.webkit.WebView.h>
#include <Android.android.webkit.WebViewClient.h>
#include <Android.android.widget.AbsoluteLayout.h>
#include <Android.android.widget.AbsSeekBar.h>
#include <Android.android.widget.Button.h>
#include <Android.android.widget.CompoundButton.h>
#include <Android.android.widget.EditText.h>
#include <Android.android.widget.FrameLayout.h>
#include <Android.android.widget.FrameLayoutDLRLayoutParams.h>
#include <Android.android.widget.HorizontalScrollView.h>
#include <Android.android.widget.ImageView.h>
#include <Android.android.widget.ImageViewDLRScaleType.h>
#include <Android.android.widget.ProgressBar.h>
#include <Android.android.widget.RelativeLayout.h>
#include <Android.android.widget.RelativeLayoutDLRLayoutParams.h>
#include <Android.android.widget.ScrollView.h>
#include <Android.android.widget.SeekBar.h>
#include <Android.android.widget.Switch.h>
#include <Android.android.widget.TextView.h>
#include <Android.com.fuse.ExperimentalHttp.HttpRequest.h>
#include <Android.Fallbacks.Android_android_animation_Animator.h>
#include <Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h>
#include <Android.Fallbacks.Android_android_content_Context.h>
#include <Android.Fallbacks.Android_android_graphics_drawable_Drawable.h>
#include <Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape.h>
#include <Android.Fallbacks.Android_android_graphics_SurfaceTextureDLROnF-45d51137.h>
#include <Android.Fallbacks.Android_android_media_AudioManagerDLROnAudioF-b4dcb473.h>
#include <Android.Fallbacks.Android_android_media_MediaPlayerDLROnComplet-64af01f3.h>
#include <Android.Fallbacks.Android_android_media_MediaPlayerDLROnErrorListener.h>
#include <Android.Fallbacks.Android_android_media_MediaPlayerDLROnPreparedListener.h>
#include <Android.Fallbacks.Android_android_net_Uri.h>
#include <Android.Fallbacks.Android_android_os_IBinder.h>
#include <Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h>
#include <Android.Fallbacks.Android_android_os_IInterface.h>
#include <Android.Fallbacks.Android_android_os_Vibrator.h>
#include <Android.Fallbacks.Android_android_text_Editable.h>
#include <Android.Fallbacks.Android_android_text_GetChars.h>
#include <Android.Fallbacks.Android_android_text_InputFilter.h>
#include <Android.Fallbacks.Android_android_text_Layout.h>
#include <Android.Fallbacks.Android_android_text_Spannable.h>
#include <Android.Fallbacks.Android_android_text_Spanned.h>
#include <Android.Fallbacks.Android_android_text_TextWatcher.h>
#include <Android.Fallbacks.Android_android_util_AttributeSet.h>
#include <Android.Fallbacks.Android_android_view_ActionMode.h>
#include <Android.Fallbacks.Android_android_view_ActionProvider.h>
#include <Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback.h>
#include <Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h>
#include <Android.Fallbacks.Android_android_view_Menu.h>
#include <Android.Fallbacks.Android_android_view_MenuItem.h>
#include <Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h>
#include <Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-b952820b.h>
#include <Android.Fallbacks.Android_android_view_SubMenu.h>
#include <Android.Fallbacks.Android_android_view_SurfaceHolder.h>
#include <Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback.h>
#include <Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h>
#include <Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTex-57881719.h>
#include <Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener.h>
#include <Android.Fallbacks.Android_android_view_ViewDLROnTouchListener.h>
#include <Android.Fallbacks.Android_android_view_ViewGroup.h>
#include <Android.Fallbacks.Android_android_webkit_WebSettings.h>
#include <Android.Fallbacks.Android_android_widget_AbsSeekBar.h>
#include <Android.Fallbacks.Android_android_widget_CompoundButton.h>
#include <Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-91091c48.h>
#include <Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-e452c5ca.h>
#include <Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-1b5558e6.h>
#include <Android.Fallbacks.Android_java_io_InputStream.h>
#include <Android.Fallbacks.Android_java_lang_CharSequence.h>
#include <Android.Fallbacks.Android_java_lang_Runnable.h>
#include <Android.Fallbacks.Android_java_util_Observer.h>
#include <Android.java.io.FileDescriptor.h>
#include <Android.java.io.InputStream.h>
#include <Android.java.lang.Class.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.reflect.AccessibleObject.h>
#include <Android.java.lang.reflect.Field.h>
#include <Android.java.lang.String.h>
#include <Android.java.lang.System.h>
#include <Android.java.lang.Thread.h>
#include <Android.java.net.URL.h>
#include <Android.java.util.Observable.h>
#include <Android.Runtime.BooleanArray.h>
#include <Android.Runtime.ByteArray.h>
#include <Android.Runtime.CharArray.h>
#include <Android.Runtime.DoubleArray.h>
#include <Android.Runtime.FloatArray.h>
#include <Android.Runtime.IntArray.h>
#include <Android.Runtime.LongArray.h>
#include <Android.Runtime.RunnableAction.h>
#include <Android.Runtime.ShortArray.h>
#include <Fuse.Android.Controls.AndroidSeekBar.h>
#include <Fuse.Android.Controls.CompoundButton.Listener.h>
#include <Fuse.Android.Controls.EditorActionListener.h>
#include <Fuse.Android.Controls.Image.ImageLoader.BitmapLoader.h>
#include <Fuse.Android.Controls.JsResultHandler.h>
#include <Fuse.Android.Controls.ProgressChangedListener.h>
#include <Fuse.Android.Controls.TextChangedListener.h>
#include <Fuse.Android.Controls.WebChromeClient.h>
#include <Fuse.Android.Controls.WebViewClient.h>
#include <Fuse.Android.FocusChangedListener.h>
#include <Fuse.Android.InputDispatch.TouchListener.h>
#include <Fuse.Android.NativeViews.GLSurfaceTextureListener.h>
#include <Fuse.Android.NativeViews.HorizontalScrollView.h>
#include <Fuse.Android.NativeViews.SurfaceCallback.h>
#include <Fuse.Android.NativeViews.VerticalScrollView.h>
#include <Fuse.Android.RootViewContainer.h>
#include <Fuse.App.FrameCallback.h>
#include <Fuse.App.TimeListener.h>
#include <Fuse.Video.Graphics.Android.CompletionEvent.h>
#include <Fuse.Video.Graphics.Android.ErrorEvent.h>
#include <Fuse.Video.Graphics.Android.FrameAvailableEvent.h>
#include <Fuse.Video.Graphics.Android.PreparedEvent.h>
void BootstrapperImpl() {
    ::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.animation.Animator", 26, ::g::Android::Fallbacks::Android_android_animation_Animator_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.animation.TimeAnimator$TimeListener", 43, ::g::Android::Fallbacks::Android_android_animation_TimeAnimatorDLRTimeListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.content.Context", 23, ::g::Android::Fallbacks::Android_android_content_Context_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.graphics.drawable.Drawable", 34, ::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.graphics.drawable.shapes.Shape", 38, ::g::Android::Fallbacks::Android_android_graphics_drawable_shapes_Shape_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.graphics.SurfaceTexture$OnFrameAvailableListener", 56, ::g::Android::Fallbacks::Android_android_graphics_SurfaceTextureDLROnFrameAvailableListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.media.AudioManager$OnAudioFocusChangeListener", 53, ::g::Android::Fallbacks::Android_android_media_AudioManagerDLROnAudioFocusChangeListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.media.MediaPlayer$OnCompletionListener", 46, ::g::Android::Fallbacks::Android_android_media_MediaPlayerDLROnCompletionListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.media.MediaPlayer$OnErrorListener", 41, ::g::Android::Fallbacks::Android_android_media_MediaPlayerDLROnErrorListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.media.MediaPlayer$OnPreparedListener", 44, ::g::Android::Fallbacks::Android_android_media_MediaPlayerDLROnPreparedListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.net.Uri", 15, ::g::Android::Fallbacks::Android_android_net_Uri_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.os.IBinder", 18, ::g::Android::Fallbacks::Android_android_os_IBinder_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.os.IBinder$DeathRecipient", 33, ::g::Android::Fallbacks::Android_android_os_IBinderDLRDeathRecipient_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.os.IInterface", 21, ::g::Android::Fallbacks::Android_android_os_IInterface_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.os.Vibrator", 19, ::g::Android::Fallbacks::Android_android_os_Vibrator_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.text.Editable", 21, ::g::Android::Fallbacks::Android_android_text_Editable_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.text.GetChars", 21, ::g::Android::Fallbacks::Android_android_text_GetChars_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.text.InputFilter", 24, ::g::Android::Fallbacks::Android_android_text_InputFilter_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.text.Layout", 19, ::g::Android::Fallbacks::Android_android_text_Layout_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.text.Spannable", 22, ::g::Android::Fallbacks::Android_android_text_Spannable_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.text.Spanned", 20, ::g::Android::Fallbacks::Android_android_text_Spanned_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.text.TextWatcher", 24, ::g::Android::Fallbacks::Android_android_text_TextWatcher_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.util.AttributeSet", 25, ::g::Android::Fallbacks::Android_android_util_AttributeSet_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.ActionMode", 23, ::g::Android::Fallbacks::Android_android_view_ActionMode_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.ActionProvider", 27, ::g::Android::Fallbacks::Android_android_view_ActionProvider_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.Choreographer$FrameCallback", 40, ::g::Android::Fallbacks::Android_android_view_ChoreographerDLRFrameCallback_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.ContextMenu$ContextMenuInfo", 40, ::g::Android::Fallbacks::Android_android_view_ContextMenuDLRContextMenuInfo_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.Menu", 17, ::g::Android::Fallbacks::Android_android_view_Menu_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.MenuItem", 21, ::g::Android::Fallbacks::Android_android_view_MenuItem_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.MenuItem$OnActionExpandListener", 44, ::g::Android::Fallbacks::Android_android_view_MenuItemDLROnActionExpandListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.MenuItem$OnMenuItemClickListener", 45, ::g::Android::Fallbacks::Android_android_view_MenuItemDLROnMenuItemClickListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.SubMenu", 20, ::g::Android::Fallbacks::Android_android_view_SubMenu_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.SurfaceHolder", 26, ::g::Android::Fallbacks::Android_android_view_SurfaceHolder_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.SurfaceHolder$Callback", 35, ::g::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.SurfaceHolder$Callback2", 36, ::g::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.TextureView$SurfaceTextureListener", 47, ::g::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.View$OnFocusChangeListener", 39, ::g::Android::Fallbacks::Android_android_view_ViewDLROnFocusChangeListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.View$OnTouchListener", 33, ::g::Android::Fallbacks::Android_android_view_ViewDLROnTouchListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.ViewGroup", 22, ::g::Android::Fallbacks::Android_android_view_ViewGroup_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.webkit.WebSettings", 26, ::g::Android::Fallbacks::Android_android_webkit_WebSettings_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.widget.AbsSeekBar", 25, ::g::Android::Fallbacks::Android_android_widget_AbsSeekBar_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.widget.CompoundButton", 29, ::g::Android::Fallbacks::Android_android_widget_CompoundButton_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.widget.CompoundButton$OnCheckedChangeListener", 53, ::g::Android::Fallbacks::Android_android_widget_CompoundButtonDLROnCheckedChangeListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.widget.SeekBar$OnSeekBarChangeListener", 46, ::g::Android::Fallbacks::Android_android_widget_SeekBarDLROnSeekBarChangeListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.widget.TextView$OnEditorActionListener", 46, ::g::Android::Fallbacks::Android_android_widget_TextViewDLROnEditorActionListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("java.io.InputStream", 19, ::g::Android::Fallbacks::Android_java_io_InputStream_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("java.lang.CharSequence", 22, ::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("java.lang.Runnable", 18, ::g::Android::Fallbacks::Android_java_lang_Runnable_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("java.util.Observer", 18, ::g::Android::Fallbacks::Android_java_util_Observer_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[B", 2, ::g::Android::Runtime::ByteArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[C", 2, ::g::Android::Runtime::CharArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[D", 2, ::g::Android::Runtime::DoubleArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[F", 2, ::g::Android::Runtime::FloatArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[I", 2, ::g::Android::Runtime::IntArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[J", 2, ::g::Android::Runtime::LongArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[S", 2, ::g::Android::Runtime::ShortArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[Z", 2, ::g::Android::Runtime::BooleanArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.animation.Animator", 26, ::g::Android::android::animation::Animator_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.animation.TimeAnimator", 30, ::g::Android::android::animation::TimeAnimator_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.animation.ValueAnimator", 31, ::g::Android::android::animation::ValueAnimator_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.app.Activity", 20, ::g::Android::android::app::Activity_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.app.Fragment", 20, ::g::Android::android::app::Fragment_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.app.TaskStackBuilder", 28, ::g::Android::android::app::TaskStackBuilder_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.content.ComponentName", 29, ::g::Android::android::content::ComponentName_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.content.Context", 23, ::g::Android::android::content::Context_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.content.ContextWrapper", 30, ::g::Android::android::content::ContextWrapper_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.content.Intent", 22, ::g::Android::android::content::Intent_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.content.res.AssetFileDescriptor", 39, ::g::Android::android::content::res::AssetFileDescriptor_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.content.res.AssetManager", 32, ::g::Android::android::content::res::AssetManager_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.content.res.ColorStateList", 34, ::g::Android::android::content::res::ColorStateList_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.content.res.Configuration", 33, ::g::Android::android::content::res::Configuration_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.content.res.Resources", 29, ::g::Android::android::content::res::Resources_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.Bitmap", 23, ::g::Android::android::graphics::Bitmap_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.Bitmap$Config", 30, ::g::Android::android::graphics::BitmapDLRConfig_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.BitmapFactory", 30, ::g::Android::android::graphics::BitmapFactory_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.Canvas", 23, ::g::Android::android::graphics::Canvas_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.Color", 22, ::g::Android::android::graphics::Color_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.drawable.Drawable", 34, ::g::Android::android::graphics::drawable::Drawable_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.drawable.LayerDrawable", 39, ::g::Android::android::graphics::drawable::LayerDrawable_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.drawable.ShapeDrawable", 39, ::g::Android::android::graphics::drawable::ShapeDrawable_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.drawable.shapes.ArcShape", 41, ::g::Android::android::graphics::drawable::shapes::ArcShape_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.drawable.shapes.RectShape", 42, ::g::Android::android::graphics::drawable::shapes::RectShape_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.drawable.shapes.RoundRectShape", 47, ::g::Android::android::graphics::drawable::shapes::RoundRectShape_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.drawable.shapes.Shape", 38, ::g::Android::android::graphics::drawable::shapes::Shape_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.Matrix", 23, ::g::Android::android::graphics::Matrix_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.Paint", 22, ::g::Android::android::graphics::Paint_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.Paint$Style", 28, ::g::Android::android::graphics::PaintDLRStyle_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.PorterDuff$Mode", 32, ::g::Android::android::graphics::PorterDuffDLRMode_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.Rect", 21, ::g::Android::android::graphics::Rect_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.RectF", 22, ::g::Android::android::graphics::RectF_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.SurfaceTexture", 31, ::g::Android::android::graphics::SurfaceTexture_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.Typeface", 25, ::g::Android::android::graphics::Typeface_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.media.AudioManager", 26, ::g::Android::android::media::AudioManager_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.media.MediaPlayer", 25, ::g::Android::android::media::MediaPlayer_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.net.Uri", 15, ::g::Android::android::net::Uri_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.opengl.GLUtils", 22, ::g::Android::android::opengl::GLUtils_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.os.Build$VERSION", 24, ::g::Android::android::os::BuildDLRVERSION_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.os.Bundle", 17, ::g::Android::android::os::Bundle_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.os.Parcel", 17, ::g::Android::android::os::Parcel_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.os.Vibrator", 19, ::g::Android::android::os::Vibrator_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.test.mock.MockContext", 29, ::g::Android::android::test::mock::MockContext_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.text.Layout", 19, ::g::Android::android::text::Layout_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.text.Layout$Alignment", 29, ::g::Android::android::text::LayoutDLRAlignment_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.text.StaticLayout", 25, ::g::Android::android::text::StaticLayout_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.text.TextPaint", 22, ::g::Android::android::text::TextPaint_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.text.TextUtils$TruncateAt", 33, ::g::Android::android::text::TextUtilsDLRTruncateAt_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.util.TypedValue", 23, ::g::Android::android::util::TypedValue_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.ActionMode", 23, ::g::Android::android::view::ActionMode_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.ActionProvider", 27, ::g::Android::android::view::ActionProvider_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.Choreographer", 26, ::g::Android::android::view::Choreographer_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.ContextThemeWrapper", 32, ::g::Android::android::view::ContextThemeWrapper_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.Gravity", 20, ::g::Android::android::view::Gravity_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.inputmethod.InputMethodManager", 43, ::g::Android::android::view::inputmethod::InputMethodManager_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.KeyEvent", 21, ::g::Android::android::view::KeyEvent_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.MotionEvent", 24, ::g::Android::android::view::MotionEvent_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.Surface", 20, ::g::Android::android::view::Surface_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.SurfaceView", 24, ::g::Android::android::view::SurfaceView_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.TextureView", 24, ::g::Android::android::view::TextureView_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.View", 17, ::g::Android::android::view::View_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.View$MeasureSpec", 29, ::g::Android::android::view::ViewDLRMeasureSpec_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.ViewGroup", 22, ::g::Android::android::view::ViewGroup_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.ViewGroup$LayoutParams", 35, ::g::Android::android::view::ViewGroupDLRLayoutParams_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.ViewGroup$MarginLayoutParams", 41, ::g::Android::android::view::ViewGroupDLRMarginLayoutParams_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.WindowManager$LayoutParams", 39, ::g::Android::android::view::WindowManagerDLRLayoutParams_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.webkit.WebChromeClient", 30, ::g::Android::android::webkit::WebChromeClient_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.webkit.WebSettings", 26, ::g::Android::android::webkit::WebSettings_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.webkit.WebView", 22, ::g::Android::android::webkit::WebView_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.webkit.WebViewClient", 28, ::g::Android::android::webkit::WebViewClient_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.widget.AbsoluteLayout", 29, ::g::Android::android::widget::AbsoluteLayout_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.widget.AbsSeekBar", 25, ::g::Android::android::widget::AbsSeekBar_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.widget.Button", 21, ::g::Android::android::widget::Button_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.widget.CompoundButton", 29, ::g::Android::android::widget::CompoundButton_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.widget.EditText", 23, ::g::Android::android::widget::EditText_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.widget.FrameLayout", 26, ::g::Android::android::widget::FrameLayout_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.widget.FrameLayout$LayoutParams", 39, ::g::Android::android::widget::FrameLayoutDLRLayoutParams_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.widget.HorizontalScrollView", 35, ::g::Android::android::widget::HorizontalScrollView_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.widget.ImageView", 24, ::g::Android::android::widget::ImageView_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.widget.ImageView$ScaleType", 34, ::g::Android::android::widget::ImageViewDLRScaleType_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.widget.ProgressBar", 26, ::g::Android::android::widget::ProgressBar_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.widget.RelativeLayout", 29, ::g::Android::android::widget::RelativeLayout_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.widget.RelativeLayout$LayoutParams", 42, ::g::Android::android::widget::RelativeLayoutDLRLayoutParams_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.widget.ScrollView", 25, ::g::Android::android::widget::ScrollView_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.widget.SeekBar", 22, ::g::Android::android::widget::SeekBar_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.widget.Switch", 21, ::g::Android::android::widget::Switch_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.widget.TextView", 23, ::g::Android::android::widget::TextView_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Android_Runtime_RunnableAction", 38, ::g::Android::Runtime::RunnableAction_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Android_Controls_AndroidSeekBar", 44, ::g::Fuse::Android::Controls::AndroidSeekBar_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Android_Controls_CompoundButton_Listener", 53, ::g::Fuse::Android::Controls::CompoundButton__Listener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Android_Controls_EditorActionListener", 50, ::g::Fuse::Android::Controls::EditorActionListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Android_Controls_Image_ImageLoader_BitmapLoader", 60, ::g::Fuse::Android::Controls::Image__ImageLoader__BitmapLoader_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Android_Controls_JsResultHandler", 45, ::g::Fuse::Android::Controls::JsResultHandler_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Android_Controls_ProgressChangedListener", 53, ::g::Fuse::Android::Controls::ProgressChangedListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Android_Controls_TextChangedListener", 49, ::g::Fuse::Android::Controls::TextChangedListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Android_Controls_WebChromeClient", 45, ::g::Fuse::Android::Controls::WebChromeClient_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Android_Controls_WebViewClient", 43, ::g::Fuse::Android::Controls::WebViewClient_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Android_FocusChangedListener", 41, ::g::Fuse::Android::FocusChangedListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Android_InputDispatch_TouchListener", 48, ::g::Fuse::Android::InputDispatch__TouchListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Android_NativeViews_GLSurfaceTextureListener", 57, ::g::Fuse::Android::NativeViews::GLSurfaceTextureListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Android_NativeViews_HorizontalScrollView", 53, ::g::Fuse::Android::NativeViews::HorizontalScrollView_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Android_NativeViews_SurfaceCallback", 48, ::g::Fuse::Android::NativeViews::SurfaceCallback_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Android_NativeViews_VerticalScrollView", 51, ::g::Fuse::Android::NativeViews::VerticalScrollView_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Android_RootViewContainer", 38, ::g::Fuse::Android::RootViewContainer_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_App_FrameCallback", 30, ::g::Fuse::App__FrameCallback_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_App_TimeListener", 29, ::g::Fuse::App__TimeListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Video_Graphics_Android_CompletionEvent", 51, ::g::Fuse::Video::Graphics::Android::CompletionEvent_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Video_Graphics_Android_ErrorEvent", 46, ::g::Fuse::Video::Graphics::Android::ErrorEvent_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Video_Graphics_Android_FrameAvailableEvent", 55, ::g::Fuse::Video::Graphics::Android::FrameAvailableEvent_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Video_Graphics_Android_PreparedEvent", 49, ::g::Fuse::Video::Graphics::Android::PreparedEvent_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("com.fuse.ExperimentalHttp.HttpRequest", 37, ::g::Android::com::fuse::ExperimentalHttp::HttpRequest_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("java.io.FileDescriptor", 22, ::g::Android::java::io::FileDescriptor_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("java.io.InputStream", 19, ::g::Android::java::io::InputStream_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("java.lang.Class", 15, ::g::Android::java::lang::Class_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("java.lang.Object", 16, ::g::Android::java::lang::Object_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("java.lang.reflect.AccessibleObject", 34, ::g::Android::java::lang::reflect::AccessibleObject_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("java.lang.reflect.Field", 23, ::g::Android::java::lang::reflect::Field_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("java.lang.String", 16, ::g::Android::java::lang::String_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("java.lang.System", 16, ::g::Android::java::lang::System_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("java.lang.Thread", 16, ::g::Android::java::lang::Thread_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("java.net.URL", 12, ::g::Android::java::net::URL_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("java.util.Observable", 20, ::g::Android::java::util::Observable_typeof());
}
