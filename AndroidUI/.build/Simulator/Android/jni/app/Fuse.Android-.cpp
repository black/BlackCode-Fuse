#include <app/Android.android.app.Activity.h>
#include <app/Android.android.content.Context.h>
#include <app/Android.android.content.ContextWrapper.h>
#include <app/Android.android.content.res.AssetManager.h>
#include <app/Android.android.content.res.Resources.h>
#include <app/Android.android.graphics.Bitmap.h>
#include <app/Android.android.graphics.BitmapDLRConfig.h>
#include <app/Android.android.graphics.BitmapFactory.h>
#include <app/Android.android.graphics.Canvas.h>
#include <app/Android.android.graphics.Color.h>
#include <app/Android.android.graphics.drawable.Drawable.h>
#include <app/Android.android.graphics.drawable.ShapeDrawable.h>
#include <app/Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h>
#include <app/Android.android.graphics.drawable.shapes.ArcShape.h>
#include <app/Android.android.graphics.drawable.shapes.RectShape.h>
#include <app/Android.android.graphics.drawable.shapes.RoundRectShape.h>
#include <app/Android.android.graphics.drawable.shapes.Shape.h>
#include <app/Android.android.graphics.LinearGradient.h>
#include <app/Android.android.graphics.Matrix.h>
#include <app/Android.android.graphics.Paint.h>
#include <app/Android.android.graphics.PorterDuffDLRMode.h>
#include <app/Android.android.graphics.Rect.h>
#include <app/Android.android.graphics.RectF.h>
#include <app/Android.android.graphics.Shader.h>
#include <app/Android.android.graphics.ShaderDLRTileMode.h>
#include <app/Android.android.graphics.SurfaceTexture.h>
#include <app/Android.android.graphics.Typeface.h>
#include <app/Android.android.opengl.GLUtils.h>
#include <app/Android.android.os.BuildDLRVERSION.h>
#include <app/Android.android.os.IBinder.h>
#include <app/Android.android.text.Editable.h>
#include <app/Android.android.text.Layout.h>
#include <app/Android.android.text.LayoutDLRAlignment.h>
#include <app/Android.android.text.StaticLayout.h>
#include <app/Android.android.text.TextPaint.h>
#include <app/Android.android.text.TextUtilsDLRTruncateAt.h>
#include <app/Android.android.view.inputmethod.InputMethodManager.h>
#include <app/Android.android.view.KeyEvent.h>
#include <app/Android.android.view.MotionEvent.h>
#include <app/Android.android.view.Surface.h>
#include <app/Android.android.view.SurfaceHolder.h>
#include <app/Android.android.view.SurfaceHolderDLRCallback.h>
#include <app/Android.android.view.SurfaceView.h>
#include <app/Android.android.view.TextureView.h>
#include <app/Android.android.view.TextureViewDLRSurfaceTextureListener.h>
#include <app/Android.android.view.View.h>
#include <app/Android.android.view.ViewDLRMeasureSpec.h>
#include <app/Android.android.view.ViewDLROnTouchListener.h>
#include <app/Android.android.view.ViewGroup.h>
#include <app/Android.android.view.ViewGroupDLRLayoutParams.h>
#include <app/Android.android.webkit.WebChromeClient.h>
#include <app/Android.android.webkit.WebView.h>
#include <app/Android.android.webkit.WebViewClient.h>
#include <app/Android.android.widget.AbsSeekBar.h>
#include <app/Android.android.widget.Button.h>
#include <app/Android.android.widget.CompoundButton.h>
#include <app/Android.android.widget.EditText.h>
#include <app/Android.android.widget.FrameLayout.h>
#include <app/Android.android.widget.FrameLayoutDLRLayoutParams.h>
#include <app/Android.android.widget.ImageView.h>
#include <app/Android.android.widget.ImageViewDLRScaleType.h>
#include <app/Android.android.widget.ProgressBar.h>
#include <app/Android.android.widget.RelativeLayout.h>
#include <app/Android.android.widget.RelativeLayoutDLRLayoutParams.h>
#include <app/Android.android.widget.SeekBar.h>
#include <app/Android.android.widget.Switch.h>
#include <app/Android.android.widget.TextView.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujlong.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Primitives.ujvalue.h>
#include <app/Android.Base.Versions.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_text_Editable.h>
#include <app/Android.Fallbacks.Android_android_view_SurfaceHolder.h>
#include <app/Android.Fallbacks.Android_android_widget_CompoundButton.h>
#include <app/Android.Fallbacks.Android_java_lang_CharSequence.h>
#include <app/Android.java.io.InputStream.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Android.java.lang.Class.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.reflect.AccessibleObject.h>
#include <app/Android.java.lang.reflect.Field.h>
#include <app/Android.java.lang.Runnable.h>
#include <app/Android.java.lang.String.h>
#include <app/Android.java.lang.Thread.h>
#include <app/Android.java.net.URL.h>
#include <app/Android.Runtime.FloatArray.h>
#include <app/Android.Runtime.IntArray.h>
#include <app/Android.Runtime.ObjectArray__Android_android_graphics_drawable_Drawable.h>
#include <app/Android.Runtime.UnoHelper.h>
#include <app/Fuse.Android.AndroidExtensions.h>
#include <app/Fuse.Android.AndroidSeekBar.h>
#include <app/Fuse.Android.BindingView.h>
#include <app/Fuse.Android.BitmapFactory.h>
#include <app/Fuse.Android.Blitter.h>
#include <app/Fuse.Android.Button.h>
#include <app/Fuse.Android.CheckBox.h>
#include <app/Fuse.Android.Circle.h>
#include <app/Fuse.Android.CompoundButton.h>
#include <app/Fuse.Android.CompoundButton_Listener.h>
#include <app/Fuse.Android.ContentControl.h>
#include <app/Fuse.Android.ControlView__Fuse_Controls_Circle.h>
#include <app/Fuse.Android.ControlView__Fuse_Controls_Rectangle.h>
#include <app/Fuse.Android.ControlView__Fuse_Controls_TextInput.h>
#include <app/Fuse.Android.ControlView__Fuse_Controls_ToggleControl.h>
#include <app/Fuse.Android.EditorActionArgs.h>
#include <app/Fuse.Android.EditorActionHandler.h>
#include <app/Fuse.Android.EditorActionListener.h>
#include <app/Fuse.Android.FocusChangedHandler.h>
#include <app/Fuse.Android.FocusChangedListener.h>
#include <app/Fuse.Android.FocusManager.h>
#include <app/Fuse.Android.GLSurfaceTextureListener.h>
#include <app/Fuse.Android.GraphicsView.h>
#include <app/Fuse.Android.Helpers.h>
#include <app/Fuse.Android.HorizontalScrollView.h>
#include <app/Fuse.Android.Image.h>
#include <app/Fuse.Android.Image_ImageLoader.h>
#include <app/Fuse.Android.Image_ImageLoader_BitmapLoader.h>
#include <app/Fuse.Android.InputDispatch.h>
#include <app/Fuse.Android.InputDispatch_TouchListener.h>
#include <app/Fuse.Android.LeafView.h>
#include <app/Fuse.Android.MapView.h>
#include <app/Fuse.Android.NativeStyle.h>
#include <app/Fuse.Android.NativeStyle_Template.h>
#include <app/Fuse.Android.NativeStyle_Template_Template1.h>
#include <app/Fuse.Android.NativeStyle_Template_Template2.h>
#include <app/Fuse.Android.NativeStyle_Template_Template3.h>
#include <app/Fuse.Android.NativeStyle_Template_Template3_Factory.h>
#include <app/Fuse.Android.NativeStyle_Template_Template3_Factory1.h>
#include <app/Fuse.Android.NativeTemplate.h>
#include <app/Fuse.Android.NativeView.h>
#include <app/Fuse.Android.NativeViewHost.h>
#include <app/Fuse.Android.ParentView__Fuse_Controls_GraphicsView.h>
#include <app/Fuse.Android.PlainTextEdit.h>
#include <app/Fuse.Android.ProgressChangedHandler.h>
#include <app/Fuse.Android.ProgressChangedListener.h>
#include <app/Fuse.Android.RadioButton.h>
#include <app/Fuse.Android.Rectangle.h>
#include <app/Fuse.Android.RelativeLayout.h>
#include <app/Fuse.Android.RootView.h>
#include <app/Fuse.Android.RootViewContainer.h>
#include <app/Fuse.Android.ScrollView.h>
#include <app/Fuse.Android.SeekBar.h>
#include <app/Fuse.Android.ShaderFactory.h>
#include <app/Fuse.Android.SurfaceCallback.h>
#include <app/Fuse.Android.SurfaceView.h>
#include <app/Fuse.Android.Switch.h>
#include <app/Fuse.Android.TextChangedHandler.h>
#include <app/Fuse.Android.TextChangedListener.h>
#include <app/Fuse.Android.TextEdit.h>
#include <app/Fuse.Android.TextRenderer.h>
#include <app/Fuse.Android.TextureView.h>
#include <app/Fuse.Android.TextView.h>
#include <app/Fuse.Android.ToggleButton.h>
#include <app/Fuse.Android.TypefaceCache.h>
#include <app/Fuse.Android.VerticalScrollView.h>
#include <app/Fuse.Android.View.h>
#include <app/Fuse.Android.WebChromeClient.h>
#include <app/Fuse.Android.WebView.h>
#include <app/Fuse.AppBase.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Circle.h>
#include <app/Fuse.Controls.ContentControl.h>
#include <app/Fuse.Controls.Graphics.ControlVisual__Fuse_Controls_TextControl.h>
#include <app/Fuse.Controls.Graphics.GraphicsStyle.h>
#include <app/Fuse.Controls.Graphics.Visual.h>
#include <app/Fuse.Controls.GraphicsView.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.MapView.h>
#include <app/Fuse.Controls.NativeViewHost.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.PlainTextEdit.h>
#include <app/Fuse.Controls.RangeControl.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.ScrollPropertyChangedArgs.h>
#include <app/Fuse.Controls.ScrollPropertyChangedHandler.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.Controls.Slider.h>
#include <app/Fuse.Controls.Switch.h>
#include <app/Fuse.Controls.TextBlock.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Controls.ToggleControl.h>
#include <app/Fuse.Controls.WebView.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.GradientStop.h>
#include <app/Fuse.Drawing.LinearGradient.h>
#include <app/Fuse.Drawing.ResampleMode.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.StretchDirection.h>
#include <app/Fuse.Elements.StretchMode.h>
#include <app/Fuse.Elements.StretchSizing.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Gestures.ScrollDirections.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.PointerEventData.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Internal.SizingContainer.h>
#include <app/Fuse.InvalidateLayoutReason.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeBounds.h>
#include <app/Fuse.PlacedHandler.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.Resources.DisposalManager.h>
#include <app/Fuse.Resources.FileImageSource.h>
#include <app/Fuse.Resources.HttpImageSource.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.RootViewport.h>
#include <app/Fuse.SizeFlags.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.StyleProperty__Fuse_Android_Button__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__Fuse_Font.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Fuse.UpdateStage.h>
#include <app/OpenGL.GL.h>
#include <app/OpenGL.GLTextureHandle.h>
#include <app/OpenGL.GLTextureTarget.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Android_android_graphics_Bitmap.h>
#include <app/Uno.Action__Fuse_Android_Button.h>
#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Collections.Dictionary__Android_android_view_View__Fuse_Node.h>
#include <app/Uno.Collections.Dictionary__string__Android_android_graphics_Bitmap.h>
#include <app/Uno.Collections.Dictionary__string__Android_android_graphics_Typeface.h>
#include <app/Uno.Collections.HashSet__int.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Func__Android_android_view_MotionEvent__bool.h>
#include <app/Uno.Graphics.BlendOperand.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.Format.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Graphics.VideoTexture.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.IntPtr.h>
#include <app/Uno.IO.Directory.h>
#include <app/Uno.IO.File.h>
#include <app/Uno.IO.UserDirectory.h>
#include <app/Uno.Long.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.PointerType.h>
#include <app/Uno.Platform.TextInputHint.h>
#include <app/Uno.Platform.ViewNativeHandle.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Platform2.Display.h>
#include <app/Uno.Quaternion.h>
#include <app/Uno.Recti.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>
#include <app/Uno.UX.BundleFileSource.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.IFactory.h>
#include <app/Uno.UX.Template__Fuse_Controls_GraphicsView.h>
#include <app/Uno.UX.Template__Fuse_Controls_NativeViewHost.h>
#include <app/Uno.UX.Template__Fuse_Controls_PlainTextEdit.h>
#include <app/Uno.UX.Template__Fuse_Controls_TextBlock.h>
#include <app/Uno.UX.ValueChangedArgs__bool.h>
#include <app/Uno.UX.ValueChangedArgs__string.h>
#include <app/Uno.UX.ValueChangedHandler__bool.h>
#include <app/Uno.UX.ValueChangedHandler__string.h>
#include <app/Uno.Vector.h>
//~
JNFUN(jboolean,Binding_Fuse_Android_AndroidSeekBar__onTouchEvent24551,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::app::Android::android::widget::AbsSeekBar*);
    JARG_TO_UNO(arg1,::app::Android::android::view::MotionEvent*,((::app::Android::android::view::MotionEvent*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::android::view::MotionEvent__typeof(), false, true, true)));
    JTRY
    return (jboolean)uPtr->onTouchEvent(tmparg1);
    JCATCH
}
JNFUN(jboolean,Binding_Fuse_Android_EditorActionListener__onEditorAction26520,jlong ujPtr, jobject arg0, jint arg1, jobject arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,::uObject*);
    JARG_TO_UNO(arg3,::app::Android::android::widget::TextView*,((::app::Android::android::widget::TextView*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::android::widget::TextView__typeof(), false, true, true)));
    JARG_TO_UNO(arg5,::app::Android::android::view::KeyEvent*,((::app::Android::android::view::KeyEvent*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg2, (::uType*)::app::Android::android::view::KeyEvent__typeof(), false, true, true)));
    JTRY
    return (jboolean)::app::Android::android::widget::TextViewDLROnEditorActionListener::onEditorAction(uPtr, tmparg3, ((int)arg1), tmparg5);
    JCATCH
}
JNFUN(jboolean,Binding_Fuse_Android_GLSurfaceTextureListener__onSurfaceTextureDestroyed22644,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::uObject*);
    JARG_TO_UNO(arg1,::app::Android::android::graphics::SurfaceTexture*,((::app::Android::android::graphics::SurfaceTexture*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::android::graphics::SurfaceTexture__typeof(), false, true, true)));
    JTRY
    return (jboolean)::app::Android::android::view::TextureViewDLRSurfaceTextureListener::onSurfaceTextureDestroyed(uPtr, tmparg1);
    JCATCH
}
JNFUN(jboolean,Binding_Fuse_Android_InputDispatch_TouchListener__onTouch22729,jlong ujPtr, jobject arg0, jobject arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,::uObject*);
    JARG_TO_UNO(arg2,::app::Android::android::view::View*,((::app::Android::android::view::View*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::android::view::View__typeof(), false, true, true)));
    JARG_TO_UNO(arg3,::app::Android::android::view::MotionEvent*,((::app::Android::android::view::MotionEvent*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg1, (::uType*)::app::Android::android::view::MotionEvent__typeof(), false, true, true)));
    JTRY
    return (jboolean)::app::Android::android::view::ViewDLROnTouchListener::onTouch(uPtr, tmparg2, tmparg3);
    JCATCH
}
JNFUN(jboolean,Binding_Fuse_Android_RootViewContainer__onInterceptTouchEvent23409,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::app::Android::android::view::ViewGroup*);
    JARG_TO_UNO(arg1,::app::Android::android::view::MotionEvent*,((::app::Android::android::view::MotionEvent*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::android::view::MotionEvent__typeof(), false, true, true)));
    JTRY
    return (jboolean)uPtr->onInterceptTouchEvent(tmparg1);
    JCATCH
}
JNFUN(jboolean,Binding_Fuse_Android_RootViewContainer__onTouchEvent22991,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::app::Android::android::view::View*);
    JARG_TO_UNO(arg1,::app::Android::android::view::MotionEvent*,((::app::Android::android::view::MotionEvent*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::android::view::MotionEvent__typeof(), false, true, true)));
    JTRY
    return (jboolean)uPtr->onTouchEvent(tmparg1);
    JCATCH
}
JNFUN(jobject,Binding_Fuse_Android_ShaderFactory__resize6361,jlong ujPtr, jint arg0, jint arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,::app::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory*);
    JTRY
    UNOCALLANDRETURN(uPtr->resize(((int)arg0), ((int)arg1)));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_CompoundButton_Listener__onCheckedChanged24924,jlong ujPtr, jobject arg0, jboolean arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,::uObject*);
    JARG_TO_UNO(arg2,::app::Android::android::widget::CompoundButton*,((::app::Android::android::widget::CompoundButton*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::Fallbacks::Android_android_widget_CompoundButton__typeof(), true, true, true)));
    JTRY
    ::app::Android::android::widget::CompoundButtonDLROnCheckedChangeListener::onCheckedChanged(uPtr, tmparg2, ((bool)arg1));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_FocusChangedListener__onFocusChange22722,jlong ujPtr, jobject arg0, jboolean arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,::uObject*);
    JARG_TO_UNO(arg2,::app::Android::android::view::View*,((::app::Android::android::view::View*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::android::view::View__typeof(), false, true, true)));
    JTRY
    ::app::Android::android::view::ViewDLROnFocusChangeListener::onFocusChange(uPtr, tmparg2, ((bool)arg1));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_GLSurfaceTextureListener__onSurfaceTextureAvailable22642,jlong ujPtr, jobject arg0, jint arg1, jint arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,::uObject*);
    JARG_TO_UNO(arg3,::app::Android::android::graphics::SurfaceTexture*,((::app::Android::android::graphics::SurfaceTexture*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::android::graphics::SurfaceTexture__typeof(), false, true, true)));
    JTRY
    ::app::Android::android::view::TextureViewDLRSurfaceTextureListener::onSurfaceTextureAvailable(uPtr, tmparg3, ((int)arg1), ((int)arg2));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_GLSurfaceTextureListener__onSurfaceTextureSizeChanged22643,jlong ujPtr, jobject arg0, jint arg1, jint arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,::uObject*);
    JARG_TO_UNO(arg3,::app::Android::android::graphics::SurfaceTexture*,((::app::Android::android::graphics::SurfaceTexture*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::android::graphics::SurfaceTexture__typeof(), false, true, true)));
    JTRY
    ::app::Android::android::view::TextureViewDLRSurfaceTextureListener::onSurfaceTextureSizeChanged(uPtr, tmparg3, ((int)arg1), ((int)arg2));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_GLSurfaceTextureListener__onSurfaceTextureUpdated22645,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::uObject*);
    JARG_TO_UNO(arg1,::app::Android::android::graphics::SurfaceTexture*,((::app::Android::android::graphics::SurfaceTexture*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::android::graphics::SurfaceTexture__typeof(), false, true, true)));
    JTRY
    ::app::Android::android::view::TextureViewDLRSurfaceTextureListener::onSurfaceTextureUpdated(uPtr, tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_HorizontalScrollView__onScrollChanged22996,jlong ujPtr, jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4, jlong arg5, jlong arg6, jlong arg7) {
    INITCALLBACK(uPtr,::app::Android::android::view::View*);
    JTRY
    uPtr->onScrollChanged(((int)arg0), ((int)arg1), ((int)arg2), ((int)arg3));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Image_ImageLoader_BitmapLoader__run31342,jlong ujPtr) {
    INITCALLBACK(uPtr,::uObject*);
    JTRY
    ::app::Android::java::lang::Runnable::run(uPtr);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_ProgressChangedListener__onProgressChanged26181,jlong ujPtr, jobject arg0, jint arg1, jboolean arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,::uObject*);
    JARG_TO_UNO(arg3,::app::Android::android::widget::SeekBar*,((::app::Android::android::widget::SeekBar*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::android::widget::SeekBar__typeof(), false, true, true)));
    JTRY
    ::app::Android::android::widget::SeekBarDLROnSeekBarChangeListener::onProgressChanged(uPtr, tmparg3, ((int)arg1), ((bool)arg2));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_ProgressChangedListener__onStartTrackingTouch26182,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::uObject*);
    JARG_TO_UNO(arg1,::app::Android::android::widget::SeekBar*,((::app::Android::android::widget::SeekBar*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::android::widget::SeekBar__typeof(), false, true, true)));
    JTRY
    ::app::Android::android::widget::SeekBarDLROnSeekBarChangeListener::onStartTrackingTouch(uPtr, tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_ProgressChangedListener__onStopTrackingTouch26183,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::uObject*);
    JARG_TO_UNO(arg1,::app::Android::android::widget::SeekBar*,((::app::Android::android::widget::SeekBar*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::android::widget::SeekBar__typeof(), false, true, true)));
    JTRY
    ::app::Android::android::widget::SeekBarDLROnSeekBarChangeListener::onStopTrackingTouch(uPtr, tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_SurfaceCallback__surfaceChanged22607,jlong ujPtr, jobject arg0, jint arg1, jint arg2, jint arg3, jlong arg4, jlong arg5, jlong arg6, jlong arg7) {
    INITCALLBACK(uPtr,::uObject*);
    JARG_TO_UNO(arg4,::uObject*,((::uObject*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::Fallbacks::Android_android_view_SurfaceHolder__typeof(), true, true, true)));
    JTRY
    ::app::Android::android::view::SurfaceHolderDLRCallback::surfaceChanged(uPtr, tmparg4, ((int)arg1), ((int)arg2), ((int)arg3));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_SurfaceCallback__surfaceCreated22606,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::uObject*);
    JARG_TO_UNO(arg1,::uObject*,((::uObject*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::Fallbacks::Android_android_view_SurfaceHolder__typeof(), true, true, true)));
    JTRY
    ::app::Android::android::view::SurfaceHolderDLRCallback::surfaceCreated(uPtr, tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_SurfaceCallback__surfaceDestroyed22608,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::uObject*);
    JARG_TO_UNO(arg1,::uObject*,((::uObject*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::Fallbacks::Android_android_view_SurfaceHolder__typeof(), true, true, true)));
    JTRY
    ::app::Android::android::view::SurfaceHolderDLRCallback::surfaceDestroyed(uPtr, tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_SurfaceCallback__surfaceRedrawNeeded22609,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::uObject*);
    JARG_TO_UNO(arg1,::uObject*,((::uObject*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::Fallbacks::Android_android_view_SurfaceHolder__typeof(), true, true, true)));
    JTRY
    ::app::Android::android::view::SurfaceHolderDLRCallback2::surfaceRedrawNeeded(uPtr, tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_TextChangedListener__afterTextChanged20153,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::uObject*);
    JARG_TO_UNO(arg1,::uObject*,((::uObject*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::Fallbacks::Android_android_text_Editable__typeof(), true, true, true)));
    JTRY
    ::app::Android::android::text::TextWatcher::afterTextChanged(uPtr, tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_TextChangedListener__beforeTextChanged20151,jlong ujPtr, jobject arg0, jint arg1, jint arg2, jint arg3, jlong arg4, jlong arg5, jlong arg6, jlong arg7) {
    INITCALLBACK(uPtr,::uObject*);
    JARG_TO_UNO(arg4,::uObject*,((::uObject*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(), true, true, true)));
    JTRY
    ::app::Android::android::text::TextWatcher::beforeTextChanged(uPtr, tmparg4, ((int)arg1), ((int)arg2), ((int)arg3));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_TextChangedListener__onTextChanged20152,jlong ujPtr, jobject arg0, jint arg1, jint arg2, jint arg3, jlong arg4, jlong arg5, jlong arg6, jlong arg7) {
    INITCALLBACK(uPtr,::uObject*);
    JARG_TO_UNO(arg4,::uObject*,((::uObject*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(), true, true, true)));
    JTRY
    ::app::Android::android::text::TextWatcher::onTextChanged(uPtr, tmparg4, ((int)arg1), ((int)arg2), ((int)arg3));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_VerticalScrollView__onScrollChanged22996,jlong ujPtr, jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4, jlong arg5, jlong arg6, jlong arg7) {
    INITCALLBACK(uPtr,::app::Android::android::view::View*);
    JTRY
    uPtr->onScrollChanged(((int)arg0), ((int)arg1), ((int)arg2), ((int)arg3));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_WebChromeClient__onProgressChanged24000,jlong ujPtr, jobject arg0, jint arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,::app::Android::android::webkit::WebChromeClient*);
    JARG_TO_UNO(arg2,::app::Android::android::webkit::WebView*,((::app::Android::android::webkit::WebView*)::app::Android::Base::Wrappers::JWrapper__New_2(NULL, arg0, (::uType*)::app::Android::android::webkit::WebView__typeof(), false, true, true)));
    JTRY
    uPtr->onProgressChanged(tmparg2, ((int)arg1));
    JCATCH
}

namespace app {
namespace Fuse {
namespace Android {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AndroidExtensions__uType* AndroidExtensions__typeof()
{
    static ::uStaticStrong<AndroidExtensions__uType*> type;
    if (type != NULL) return type;

    type = (AndroidExtensions__uType*)::uAllocClassType(sizeof(AndroidExtensions__uType), "Fuse.Android.AndroidExtensions");

    type->SetFunctions(1,
        ::uNewFunction("ToDrawable", AndroidExtensions__ToDrawable, 0, true, ::app::Android::android::graphics::drawable::Drawable__typeof(), ::app::Fuse::Drawing::LinearGradient__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Android::android::graphics::drawable::Drawable* AndroidExtensions__ToDrawable(::uStatic* __this, ::app::Fuse::Drawing::LinearGradient* linearGradient)
{
    ::app::Android::android::graphics::drawable::ShapeDrawable* shapeDrawable = ::app::Android::android::graphics::drawable::ShapeDrawable__New_5(NULL);
    ::uPtr< ::app::Android::android::graphics::drawable::ShapeDrawable*>(shapeDrawable)->setShape((::app::Android::android::graphics::drawable::shapes::Shape*)::app::Android::android::graphics::drawable::shapes::RectShape__New_5(NULL));
    shapeDrawable->setShaderFactory((::app::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory*)::app::Fuse::Android::ShaderFactory__New_5(NULL, (::app::Fuse::Drawing::Brush*)linearGradient));
    return (::app::Android::android::graphics::drawable::Drawable*)shapeDrawable;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass AndroidSeekBar___javaClass_6;

AndroidSeekBar__uType* AndroidSeekBar__typeof()
{
    static ::uStaticStrong<AndroidSeekBar__uType*> type;
    if (type != NULL) return type;

    type = (AndroidSeekBar__uType*)::uAllocClassType(sizeof(AndroidSeekBar__uType), "Fuse.Android.AndroidSeekBar", false, 2, 1, 0);

    type->SetBaseType(::app::Android::android::widget::SeekBar__typeof());
    type->__fp_onTouchEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))AndroidSeekBar__onTouchEvent;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(AndroidSeekBar__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(AndroidSeekBar__uType, __interface_1));

    type->SetStrongRefs(
        "_touchCallback", offsetof(AndroidSeekBar, _touchCallback));

    type->SetFields(2,
        ::uNewField("_javaClass", &AndroidSeekBar___javaClass_6, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("_touchCallback", NULL, offsetof(AndroidSeekBar, _touchCallback), ::app::Uno::Func__Android_android_view_MotionEvent__bool__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", AndroidSeekBar__New_17, 0, true, AndroidSeekBar__typeof(), ::app::Android::android::content::Context__typeof(), ::app::Uno::Func__Android_android_view_MotionEvent__bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void AndroidSeekBar___ObjInit_20(AndroidSeekBar* __this, ::app::Android::android::content::Context* arg0, ::uDelegate* touchCallback)
{
    if (!__this->_subclassed)
    {
        __this->_subclassed = true;
        __this->_javaClassName = ::uGetConstString("com.Bindings.Binding_Fuse_Android_AndroidSeekBar");
    }

    ::app::Android::android::widget::SeekBar___ObjInit_19(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);

    if (::app::Android::Base::Primitives::ujclass__op_Equality(NULL, AndroidSeekBar___javaClass_6, ::app::Android::Base::Primitives::ujclass__get_Null(NULL)))
    {
        AndroidSeekBar___javaClass_6 = ::app::Android::Base::JNI__LocalToGlobalRef(NULL, ::app::Android::Base::JNI__LoadClass_3(NULL, ::uGetConstString("com.Bindings.Binding_Fuse_Android_AndroidSeekBar"), false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onTouchEvent","(JLandroid/view/MotionEvent;J)Z",Binding_Fuse_Android_AndroidSeekBar__onTouchEvent24551);
        COMMIT_REG_MTD(AndroidSeekBar___javaClass_6);
    }

    jclass tmpCls = ::app::Android::Base::JNI__LoadClass_3(NULL, __this->_javaClassName, false);
    jmethodID mtd = ::app::Android::Base::JNI__GetMethodID(NULL, tmpCls, ::uGetConstString("<init>"), ::uGetConstString("(JLandroid/content/Context;)V"));
    jobject tmp = ::app::Android::Base::JNI__NewObject_2(NULL, tmpCls, mtd, ::app::Android::Base::Primitives::ujvalue__op_Implicit_16(NULL, (jlong)__this->__obj_weak), ::app::Android::Base::Primitives::ujvalue__op_Implicit_17(NULL, ::uPtr< ::app::Android::android::content::Context*>(arg0)->_GetJavaObject()));
    ::app::Android::Base::JNI__CheckException(NULL);
    __this->_javaObject = ::app::Android::Base::JNI__LocalToGlobalRef_1(NULL, tmp);
    ::app::Android::Base::JNI__DeleteLocalRef(NULL, tmpCls);
    __this->_touchCallback = touchCallback;
}

AndroidSeekBar* AndroidSeekBar__New_17(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uDelegate* touchCallback)
{
    AndroidSeekBar* inst = (AndroidSeekBar*)::uAllocObject(sizeof(AndroidSeekBar), AndroidSeekBar__typeof());
    inst->_ObjInit_20(arg0, touchCallback);
    return inst;
}

bool AndroidSeekBar__onTouchEvent(AndroidSeekBar* __this, ::app::Android::android::view::MotionEvent* motionEvent)
{
    ::app::Android::android::widget::AbsSeekBar__onTouchEvent(__this, motionEvent);
    return ::uPtr< ::uDelegate*>(__this->_touchCallback)->Invoke< bool, ::app::Android::android::view::MotionEvent*>(motionEvent);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BindingView__uType* BindingView__typeof()
{
    static ::uStaticStrong<BindingView__uType*> type;
    if (type != NULL) return type;

    type = (BindingView__uType*)::uAllocClassType(sizeof(BindingView__uType), "Fuse.Android.BindingView");

    type->SetFunctions(1,
        ::uNewFunction("GetNativeViewHandle", BindingView__GetNativeViewHandle, 0, true, ::app::Uno::Platform::ViewNativeHandle__typeof(), ::app::Android::android::view::View__typeof()));

    ::uRegisterType(type);
    return type;
}

uPlatform2::ViewNativeHandle BindingView__GetNativeViewHandle(::uStatic* __this, ::app::Android::android::view::View* view)
{
    return (uPlatform2::ViewNativeHandle)::uPtr< ::app::Android::android::view::View*>(view)->_GetJavaObject();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap*> BitmapFactory___bitmapCache;

BitmapFactory__uType* BitmapFactory__typeof()
{
    static ::uStaticStrong<BitmapFactory__uType*> type;
    if (type != NULL) return type;

    type = (BitmapFactory__uType*)::uAllocClassType(sizeof(BitmapFactory__uType), "Fuse.Android.BitmapFactory");

    type->SetFields(1,
        ::uNewField("_bitmapCache", &BitmapFactory___bitmapCache, 0, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("GetBitmap", BitmapFactory__GetBitmap, 0, true, ::app::Android::android::graphics::Bitmap__typeof(), ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction("GetBitmapFromBundleFile", BitmapFactory__GetBitmapFromBundleFile, 0, true, ::app::Android::android::graphics::Bitmap__typeof(), ::app::Uno::UX::BundleFileSource__typeof()),
        ::uNewFunction("GetBitmapFromFileSource", BitmapFactory__GetBitmapFromFileSource, 0, true, ::app::Android::android::graphics::Bitmap__typeof(), ::app::Uno::UX::FileSource__typeof()));

    ::uRegisterType(type);
    return type;
}

void BitmapFactory___TypeInit(::uStatic* __this)
{
    BitmapFactory___bitmapCache = ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap__New_1(NULL);
}

::app::Android::android::graphics::Bitmap* BitmapFactory__GetBitmap(::uStatic* __this, ::app::Uno::UX::FileSource* file)
{
    if (::uIs(file, ::app::Uno::UX::BundleFileSource__typeof()))
    {
        return BitmapFactory__GetBitmapFromBundleFile(NULL, ::uCast< ::app::Uno::UX::BundleFileSource*>(file, ::app::Uno::UX::BundleFileSource__typeof()));
    }

    return BitmapFactory__GetBitmapFromFileSource(NULL, file);
}

::app::Android::android::graphics::Bitmap* BitmapFactory__GetBitmapFromBundleFile(::uStatic* __this, ::app::Uno::UX::BundleFileSource* bundleFile)
{
    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap*>(BitmapFactory___bitmapCache)->ContainsKey(::uPtr< ::app::Uno::UX::BundleFileSource*>(bundleFile)->Name))
    {
        ::app::Android::android::content::res::AssetManager* assetManager = ::uPtr< ::app::Android::android::app::Activity*>(::app::Android::android::app::Activity__GetAppActivity(NULL))->getAssets();
        ::app::Android::java::io::InputStream* stream = ::uPtr< ::app::Android::android::content::res::AssetManager*>(assetManager)->open(::app::Android::java::lang::String__op_Implicit(NULL, ::uPtr< ::app::Uno::UX::BundleFileSource*>(bundleFile)->Name));
        ::app::Android::android::graphics::Bitmap* bitmap = ::app::Android::android::graphics::BitmapFactory__decodeStream(NULL, stream);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap*>(BitmapFactory___bitmapCache)->Add(bundleFile->Name, bitmap);
        ::uPtr< ::app::Android::java::io::InputStream*>(stream)->close();
        return bitmap;
    }

    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap*>(BitmapFactory___bitmapCache)->Item(::uPtr< ::app::Uno::UX::BundleFileSource*>(bundleFile)->Name);
}

::app::Android::android::graphics::Bitmap* BitmapFactory__GetBitmapFromFileSource(::uStatic* __this, ::app::Uno::UX::FileSource* file)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap*>(BitmapFactory___bitmapCache)->ContainsKey(::uPtr< ::app::Uno::UX::FileSource*>(file)->Name))
    {
        return ::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap*>(BitmapFactory___bitmapCache)->Item(::uPtr< ::app::Uno::UX::FileSource*>(file)->Name);
    }

    ::uArray* data = ::uPtr< ::app::Uno::UX::FileSource*>(file)->ReadAllBytes();
    ::uString* path = ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::IO::Directory__GetUserDirectory(NULL, 1), ::uGetConstString("/tempImage"));
    ::app::Uno::IO::File__WriteAllBytes(NULL, path, data);
    ::app::Android::android::graphics::Bitmap* bitmap = ::app::Android::android::graphics::BitmapFactory__decodeFile(NULL, ::app::Android::java::lang::String__op_Implicit(NULL, path));
    ::app::Uno::IO::File__Delete(NULL, path);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap*>(BitmapFactory___bitmapCache)->Add(file->Name, bitmap);
    return bitmap;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Blitter*> Blitter__Singleton;

Blitter__uType* Blitter__typeof()
{
    static ::uStaticStrong<Blitter__uType*> type;
    if (type != NULL) return type;

    type = (Blitter__uType*)::uAllocClassType(sizeof(Blitter__uType), "Fuse.Android.Blitter", false, 0, 9, 0);

    type->SetStrongRefs(
        "_draw_9662c2a9._compiledProgram", offsetof(Blitter, _draw_9662c2a9._compiledProgram),
        "_draw_9662c2a9._constValues", offsetof(Blitter, _draw_9662c2a9._constValues),
        "_draw_9662c2a9._Program", offsetof(Blitter, _draw_9662c2a9._Program),
        "_draw_fc927db0._compiledProgram", offsetof(Blitter, _draw_fc927db0._compiledProgram),
        "_draw_fc927db0._constValues", offsetof(Blitter, _draw_fc927db0._constValues),
        "_draw_fc927db0._Program", offsetof(Blitter, _draw_fc927db0._Program),
        "Blit_v_9662c2a9_1_7_1", offsetof(Blitter, Blit_v_9662c2a9_1_7_1),
        "Blit_v_fc927db0_1_7_1", offsetof(Blitter, Blit_v_fc927db0_1_7_1),
        "Blit_verts_9662c2a9_1_6_5", offsetof(Blitter, Blit_verts_9662c2a9_1_6_5));

    type->SetFields(1,
        ::uNewField("Singleton", &Blitter__Singleton, 0, Blitter__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Blit", Blitter__Blit, 0, false, ::app::Uno::Graphics::Texture2D__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float4x4__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("Blit", Blitter__Blit_1, 0, false, ::app::Uno::Graphics::VideoTexture__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float4x4__typeof()),
        ::uNewFunction(".ctor", Blitter__New_1, 0, true, Blitter__typeof()));

    ::uRegisterType(type);
    return type;
}

void Blitter___ObjInit(Blitter* __this)
{
    __this->init_DrawCalls();
}

void Blitter___TypeInit(::uStatic* __this)
{
    Blitter__Singleton = Blitter__New_1(NULL);
}

void Blitter__Blit(Blitter* __this, ::app::Uno::Graphics::Texture2D* vt, ::app::Uno::Float2 pos, ::app::Uno::Float2 size, ::app::Uno::Float4x4 localToClipTransform, ::app::Uno::Float2 extent)
{
    {
        __this->_draw_fc927db0.BlendEnabled(true);
        __this->_draw_fc927db0.BlendSrcAlpha(7);
        __this->_draw_fc927db0.BlendDstRgb(3);
        __this->_draw_fc927db0.CullFace(0);
        __this->_draw_fc927db0.Use();
        __this->_draw_fc927db0.Attrib_1(0, 2, __this->Blit_v_fc927db0_1_7_1, 8, 0);
        __this->_draw_fc927db0.Uniform_12(1, size);
        __this->_draw_fc927db0.Uniform_12(2, pos);
        __this->_draw_fc927db0.Uniform_17(3, localToClipTransform);
        __this->_draw_fc927db0.Uniform_12(4, extent);
        __this->_draw_fc927db0.Sampler_2(5, vt);
        __this->_draw_fc927db0.DrawArrays(::uPtr< ::uArray*>(__this->Blit_verts_9662c2a9_1_6_5)->Length());
    }
}

void Blitter__Blit_1(Blitter* __this, ::app::Uno::Graphics::VideoTexture* vt, ::app::Uno::Float2 pos, ::app::Uno::Float2 size, ::app::Uno::Float4x4 localToClipTransform)
{
    {
        __this->_draw_9662c2a9.BlendEnabled(true);
        __this->_draw_9662c2a9.BlendSrcAlpha(7);
        __this->_draw_9662c2a9.BlendDstRgb(3);
        __this->_draw_9662c2a9.CullFace(0);
        __this->_draw_9662c2a9.Use();
        __this->_draw_9662c2a9.Attrib_1(0, 2, __this->Blit_v_9662c2a9_1_7_1, 8, 0);
        __this->_draw_9662c2a9.Uniform_12(1, size);
        __this->_draw_9662c2a9.Uniform_12(2, pos);
        __this->_draw_9662c2a9.Uniform_17(3, localToClipTransform);
        __this->_draw_9662c2a9.Sampler_6(4, vt);
        __this->_draw_9662c2a9.DrawArrays(::uPtr< ::uArray*>(__this->Blit_verts_9662c2a9_1_6_5)->Length());
    }
}

void Blitter__free_DrawCalls(Blitter* __this)
{
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->Blit_v_9662c2a9_1_7_1)->Dispose();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->Blit_v_fc927db0_1_7_1)->Dispose();
}

void Blitter__init_DrawCalls(Blitter* __this)
{
    ::uArray* array_123;
    array_123 = ::uNewArray(::app::Uno::Float2__typeof(), 6);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f);
    ::uArray* verts_9662c2a9_1_6_0 = array_123;
    __this->Blit_v_9662c2a9_1_7_1 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, verts_9662c2a9_1_6_0), 0);
    __this->Blit_verts_9662c2a9_1_6_5 = verts_9662c2a9_1_6_0;
    __this->Blit_v_fc927db0_1_7_1 = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, verts_9662c2a9_1_6_0), 0);
    __this->_draw_9662c2a9 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 106), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_fc927db0 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 107), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

Blitter* Blitter__New_1(::uStatic* __this)
{
    Blitter* inst = (Blitter*)::uAllocObject(sizeof(Blitter), Blitter__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Android_Button__float4*> Button__TextColorProperty;

Button__uType* Button__typeof()
{
    static ::uStaticStrong<Button__uType*> type;
    if (type != NULL) return type;

    type = (Button__uType*)::uAllocClassType(sizeof(Button__uType), "Fuse.Android.Button", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Android::ControlView__Fuse_Controls_Button__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_Button*))Button__Attach;
    type->__fp_CreateInternal = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))Button__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_Button*))Button__Detach;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Button__uType, __interface_0));

    type->SetStrongRefs(
        "_buttonView", offsetof(Button, _buttonView));

    type->SetFields(2,
        ::uNewField("_buttonView", NULL, offsetof(Button, _buttonView), ::app::Android::android::widget::Button__typeof()),
        ::uNewField("TextColorProperty", &Button__TextColorProperty, 0, ::app::Fuse::StyleProperty__Fuse_Android_Button__float4__typeof()));

    type->SetFunctions(6,
        ::uNewFunction("get_TextColor", Button__get_TextColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction(".ctor", Button__New_1, 0, true, Button__typeof()),
        ::uNewFunctionVoid("OnButtonPropertyChanged", Button__OnButtonPropertyChanged, 0, true, Button__typeof()),
        ::uNewFunctionVoid("OnTextChanged", Button__OnTextChanged, 0, false, ::uObject__typeof(), ::app::Uno::UX::ValueChangedArgs__string__typeof()),
        ::uNewFunctionVoid("set_TextColor", Button__set_TextColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("SetText", Button__SetText, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void Button___ObjInit_3(Button* __this)
{
    ::app::Fuse::Android::ControlView__Fuse_Controls_Button___ObjInit_2(__this);
}

void Button___TypeInit_1(::uStatic* __this)
{
    Button__TextColorProperty = ::app::Fuse::StyleProperty__Fuse_Android_Button__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Android_Button__typeof(), (const void*)Button__OnButtonPropertyChanged));
}

void Button__Attach(Button* __this)
{
    ::uPtr< ::app::Fuse::Controls::Button*>(__this->Control())->add_TextChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)Button__OnTextChanged, __this));
    Button__OnButtonPropertyChanged(NULL, __this);
    __this->SetText(::uPtr< ::app::Fuse::Controls::Button*>(__this->Control())->Text());
}

::app::Android::android::view::View* Button__CreateInternal(Button* __this)
{
    if (::app::Android::java::lang::Object__op_Equality_1(NULL, (::app::Android::java::lang::Object*)__this->_buttonView, NULL))
    {
        __this->_buttonView = ::app::Android::android::widget::Button__New_13(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));
        ::uPtr< ::app::Android::android::widget::Button*>(__this->_buttonView)->setHorizontallyScrolling(false);
        ::uPtr< ::app::Android::android::widget::Button*>(__this->_buttonView)->setEllipsize(NULL);
    }

    return (::app::Android::android::view::View*)__this->_buttonView;
}

void Button__Detach(Button* __this)
{
    ::uPtr< ::app::Fuse::Controls::Button*>(__this->Control())->remove_TextChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)Button__OnTextChanged, __this));
}

::app::Uno::Float4 Button__get_TextColor(Button* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Android_Button__float4*>(Button__TextColorProperty)->Get(__this);
}

Button* Button__New_1(::uStatic* __this)
{
    Button* inst = (Button*)::uAllocObject(sizeof(Button), Button__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Button__OnButtonPropertyChanged(::uStatic* __this, Button* t)
{
    ::uPtr< Button*>(t)->CreateInternal();
    ::uPtr< ::app::Android::android::widget::Button*>(t->_buttonView)->setTextColor_1(::app::Fuse::Android::Helpers__EncodeColor(NULL, t->TextColor()));
}

void Button__OnTextChanged(Button* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args)
{
    __this->SetText(::uPtr< ::app::Uno::UX::ValueChangedArgs__string*>(args)->Value());
}

void Button__set_TextColor(Button* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Android_Button__float4*>(Button__TextColorProperty)->Set(__this, value);
}

void Button__SetText(Button* __this, ::uString* value)
{
    ::uObject* charSequence = (::uObject*)::app::Android::java::lang::String__op_Implicit(NULL, (value != NULL) ? value : ::uGetConstString(""));
    ::uPtr< ::app::Android::android::widget::Button*>(__this->_buttonView)->setText_1(charSequence);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CheckBox__uType* CheckBox__typeof()
{
    static ::uStaticStrong<CheckBox__uType*> type;
    if (type != NULL) return type;

    type = (CheckBox__uType*)::uAllocClassType(sizeof(CheckBox__uType), "Fuse.Android.CheckBox", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Android::CompoundButton__typeof());
    type->__fp_CreateCompoundButton = (::app::Android::android::widget::CompoundButton*(*)(::app::Fuse::Android::CompoundButton*))CheckBox__CreateCompoundButton;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(CheckBox__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", CheckBox__New_1, 0, true, CheckBox__typeof()));

    ::uRegisterType(type);
    return type;
}

void CheckBox___ObjInit_4(CheckBox* __this)
{
    ::app::Fuse::Android::CompoundButton___ObjInit_3(__this);
}

::app::Android::android::widget::CompoundButton* CheckBox__CreateCompoundButton(CheckBox* __this)
{
    return (::app::Android::android::widget::CompoundButton*)::app::Android::android::widget::Switch__New_17(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));
}

CheckBox* CheckBox__New_1(::uStatic* __this)
{
    CheckBox* inst = (CheckBox*)::uAllocObject(sizeof(CheckBox), CheckBox__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Circle__uType* Circle__typeof()
{
    static ::uStaticStrong<Circle__uType*> type;
    if (type != NULL) return type;

    type = (Circle__uType*)::uAllocClassType(sizeof(Circle__uType), "Fuse.Android.Circle", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Android::Shape__Fuse_Controls_Circle__typeof());
    type->__fp_AdjustLayout = (::app::Uno::Float4(*)(::app::Fuse::Android::View*, ::app::Uno::Float2, ::app::Uno::Float2))Circle__AdjustLayout;
    type->__fp_UpdateShapeDrawable = (void(*)(::app::Fuse::Android::Shape__Fuse_Controls_Circle*, ::app::Android::android::graphics::drawable::ShapeDrawable*))Circle__UpdateShapeDrawable;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Circle__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Circle__New_1, 0, true, Circle__typeof()));

    ::uRegisterType(type);
    return type;
}

void Circle___ObjInit_4(Circle* __this)
{
    ::app::Fuse::Android::Shape__Fuse_Controls_Circle___ObjInit_3(__this);
}

::app::Uno::Float4 Circle__AdjustLayout(Circle* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 size)
{
    float mn = ::app::Uno::Math__Min_1(NULL, size.X, size.Y);
    ::app::Uno::Float2 np = ::app::Uno::Float2__op_Subtraction_1(NULL, ::app::Uno::Float2__op_Addition_2(NULL, position, ::app::Uno::Float2__op_Division_1(NULL, size, 2.0f)), mn / 2.0f);
    ::app::Uno::Float2 ns = ::app::Uno::Float2__New_1(NULL, mn);
    return ::app::Uno::Float4__New_7(NULL, np, ns);
}

Circle* Circle__New_1(::uStatic* __this)
{
    Circle* inst = (Circle*)::uAllocObject(sizeof(Circle), Circle__typeof());
    inst->_ObjInit_4();
    return inst;
}

void Circle__UpdateShapeDrawable(Circle* __this, ::app::Android::android::graphics::drawable::ShapeDrawable* shape)
{
    bool angle = ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Control())->UseAngle();
    float start = angle ? ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Control())->StartAngleDegrees() : 0.0f;
    float end = angle ? ::uPtr< ::app::Fuse::Controls::Circle*>(__this->Control())->EffectiveEndAngleDegrees() : 360.0f;
    ::app::Android::android::graphics::drawable::shapes::ArcShape* arc = ::app::Android::android::graphics::drawable::shapes::ArcShape__New_7(NULL, start, end - start);
    ::uPtr< ::app::Android::android::graphics::drawable::ShapeDrawable*>(shape)->setShape((::app::Android::android::graphics::drawable::shapes::Shape*)arc);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CompoundButton__uType* CompoundButton__typeof()
{
    static ::uStaticStrong<CompoundButton__uType*> type;
    if (type != NULL) return type;

    type = (CompoundButton__uType*)::uAllocClassType(sizeof(CompoundButton__uType), "Fuse.Android.CompoundButton", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Android::ControlView__Fuse_Controls_ToggleControl__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_ToggleControl*))CompoundButton__Attach;
    type->__fp_CreateInternal = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))CompoundButton__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_ToggleControl*))CompoundButton__Detach;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(CompoundButton__uType, __interface_0));

    type->SetStrongRefs(
        "_switch", offsetof(CompoundButton, _switch));

    type->SetFields(1,
        ::uNewField("_switch", NULL, offsetof(CompoundButton, _switch), ::app::Android::android::widget::CompoundButton__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("CreateCompoundButton", type->__fp_CreateCompoundButton, offsetof(CompoundButton__uType, __fp_CreateCompoundButton), false, ::app::Android::android::widget::CompoundButton__typeof()),
        ::uNewFunctionVoid("InitValue", CompoundButton__InitValue, 0, false),
        ::uNewFunctionVoid("OnValueChanged", CompoundButton__OnValueChanged, 0, false, ::uObject__typeof(), ::app::Uno::UX::ValueChangedArgs__bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void CompoundButton___ObjInit_3(CompoundButton* __this)
{
    ::app::Fuse::Android::ControlView__Fuse_Controls_ToggleControl___ObjInit_2(__this);
}

void CompoundButton__Attach(CompoundButton* __this)
{
    ::uPtr< ::app::Fuse::Controls::ToggleControl*>(__this->Control())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__bool__typeof(), (const void*)CompoundButton__OnValueChanged, __this));
    __this->InitValue();
}

::app::Android::android::view::View* CompoundButton__CreateInternal(CompoundButton* __this)
{
    __this->_switch = __this->CreateCompoundButton();
    ::app::Fuse::Android::CompoundButton_Listener__New_5(NULL, __this);
    return (::app::Android::android::view::View*)__this->_switch;
}

void CompoundButton__Detach(CompoundButton* __this)
{
    ::uPtr< ::app::Fuse::Controls::ToggleControl*>(__this->Control())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__bool__typeof(), (const void*)CompoundButton__OnValueChanged, __this));
}

void CompoundButton__InitValue(CompoundButton* __this)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_switch, NULL))
    {
        ::uPtr< ::app::Android::android::widget::CompoundButton*>(__this->_switch)->setChecked(::uPtr< ::app::Fuse::Controls::ToggleControl*>(__this->Control())->Value());
    }
}

void CompoundButton__OnValueChanged(CompoundButton* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__bool* args)
{
    if (::uPtr< ::app::Uno::UX::ValueChangedArgs__bool*>(args)->Origin() == __this)
    {
        return;
    }

    ::uPtr< ::app::Android::android::widget::CompoundButton*>(__this->_switch)->setChecked(::uPtr< ::app::Uno::UX::ValueChangedArgs__bool*>(args)->Value());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass CompoundButton_Listener___javaClass_2;

CompoundButton_Listener__uType* CompoundButton_Listener__typeof()
{
    static ::uStaticStrong<CompoundButton_Listener__uType*> type;
    if (type != NULL) return type;

    type = (CompoundButton_Listener__uType*)::uAllocClassType(sizeof(CompoundButton_Listener__uType), "Fuse.Android.CompoundButton.Listener", false, 3, 1, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onCheckedChanged = (void(*)(void*, ::app::Android::android::widget::CompoundButton*, bool))CompoundButton_Listener__onCheckedChanged;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(CompoundButton_Listener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(CompoundButton_Listener__uType, __interface_1),
        ::app::Android::android::widget::CompoundButtonDLROnCheckedChangeListener__typeof(), offsetof(CompoundButton_Listener__uType, __interface_2));

    type->SetStrongRefs(
        "_s", offsetof(CompoundButton_Listener, _s));

    return type;
}

void CompoundButton_Listener___ObjInit_4(CompoundButton_Listener* __this, ::app::Fuse::Android::CompoundButton* s)
{
    if (!__this->_subclassed)
    {
        __this->_subclassed = true;
        __this->_javaClassName = ::uGetConstString("com.Bindings.Binding_Fuse_Android_CompoundButton_Listener");
    }

    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);

    if (::app::Android::Base::Primitives::ujclass__op_Equality(NULL, CompoundButton_Listener___javaClass_2, ::app::Android::Base::Primitives::ujclass__get_Null(NULL)))
    {
        CompoundButton_Listener___javaClass_2 = ::app::Android::Base::JNI__LocalToGlobalRef(NULL, ::app::Android::Base::JNI__LoadClass_3(NULL, ::uGetConstString("com.Bindings.Binding_Fuse_Android_CompoundButton_Listener"), false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onCheckedChanged","(JLandroid/widget/CompoundButton;ZJJ)V",Binding_Fuse_Android_CompoundButton_Listener__onCheckedChanged24924);
        COMMIT_REG_MTD(CompoundButton_Listener___javaClass_2);
    }

    jclass tmpCls = ::app::Android::Base::JNI__LoadClass_3(NULL, __this->_javaClassName, false);
    jmethodID mtd = ::app::Android::Base::JNI__GetMethodID(NULL, tmpCls, ::uGetConstString("<init>"), ::uGetConstString("(J)V"));
    jobject tmp = ::app::Android::Base::JNI__NewObject_1(NULL, tmpCls, mtd, ::app::Android::Base::Primitives::ujvalue__op_Implicit_16(NULL, (jlong)__this->__obj_weak));
    ::app::Android::Base::JNI__CheckException(NULL);
    __this->_javaObject = ::app::Android::Base::JNI__LocalToGlobalRef_1(NULL, tmp);
    ::app::Android::Base::JNI__DeleteLocalRef(NULL, tmpCls);
    __this->_s = s;
    ::uPtr< ::app::Android::android::widget::CompoundButton*>(::uPtr< ::app::Fuse::Android::CompoundButton*>(__this->_s)->_switch)->setOnCheckedChangeListener((::uObject*)__this);
}

CompoundButton_Listener* CompoundButton_Listener__New_5(::uStatic* __this, ::app::Fuse::Android::CompoundButton* s)
{
    CompoundButton_Listener* inst = (CompoundButton_Listener*)::uAllocObject(sizeof(CompoundButton_Listener), CompoundButton_Listener__typeof());
    inst->_ObjInit_4(s);
    return inst;
}

void CompoundButton_Listener__onCheckedChanged(CompoundButton_Listener* __this, ::app::Android::android::widget::CompoundButton* buttonView, bool isChecked)
{
    ::uPtr< ::app::Fuse::Controls::ToggleControl*>(::uPtr< ::app::Fuse::Android::CompoundButton*>(__this->_s)->Control())->SetValue(isChecked, (::uObject*)__this->_s);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContentControl__uType* ContentControl__typeof()
{
    static ::uStaticStrong<ContentControl__uType*> type;
    if (type != NULL) return type;

    type = (ContentControl__uType*)::uAllocClassType(sizeof(ContentControl__uType), "Fuse.Android.ContentControl", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Android::ParentView__Fuse_Controls_ContentControl__typeof());
    type->__fp_ChildRooted = (void(*)(::app::Fuse::Android::NativeView*, ::app::Fuse::Android::NativeView*))ContentControl__ChildRooted;
    type->__fp_ChildUnrooted = (void(*)(::app::Fuse::Android::NativeView*, ::app::Fuse::Android::NativeView*))ContentControl__ChildUnrooted;
    type->__fp_CreateInternal = (::app::Android::android::view::View*(*)(::app::Fuse::Android::NativeView*))ContentControl__CreateInternal;
    type->__fp_NotifyNewSize = (void(*)(::app::Fuse::Android::NativeView*, ::app::Fuse::Android::NativeView*))ContentControl__NotifyNewSize;

    type->SetStrongRefs(
        "_relativeLayout", offsetof(ContentControl, _relativeLayout));

    type->SetFields(1,
        ::uNewField("_relativeLayout", NULL, offsetof(ContentControl, _relativeLayout), ::app::Android::android::widget::RelativeLayout__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ContentControl__New_1, 0, true, ContentControl__typeof()));

    ::uRegisterType(type);
    return type;
}

void ContentControl___ObjInit_3(ContentControl* __this)
{
    ::app::Fuse::Android::ParentView__Fuse_Controls_ContentControl___ObjInit_2(__this);
}

void ContentControl__ChildRooted(ContentControl* __this, ::app::Fuse::Android::NativeView* child)
{
    __this->NotifyNewSize(child);
    ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->addView_1(::uPtr< ::app::Fuse::Android::NativeView*>(child)->Handle(), 0);
}

void ContentControl__ChildUnrooted(ContentControl* __this, ::app::Fuse::Android::NativeView* child)
{
    ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->removeView(::uPtr< ::app::Fuse::Android::NativeView*>(child)->Handle());
}

::app::Android::android::view::View* ContentControl__CreateInternal(ContentControl* __this)
{
    __this->_relativeLayout = ::app::Android::android::widget::RelativeLayout__New_9(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));
    ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->setLayoutParams((::app::Android::android::view::ViewGroupDLRLayoutParams*)::app::Android::android::widget::RelativeLayoutDLRLayoutParams__New_15(NULL, -1, -1));
    return (::app::Android::android::view::View*)__this->_relativeLayout;
}

ContentControl* ContentControl__New_1(::uStatic* __this)
{
    ContentControl* inst = (ContentControl*)::uAllocObject(sizeof(ContentControl), ContentControl__typeof());
    inst->_ObjInit_3();
    return inst;
}

void ContentControl__NotifyNewSize(ContentControl* __this, ::app::Fuse::Android::NativeView* child)
{
    if ((__this->Node() == NULL) || !::uPtr< ::app::Fuse::Node*>(__this->Node())->IsLocalRooted())
    {
        return;
    }

    float density = ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Node())->Viewport()));
    int w = (int)(::uPtr< ::app::Fuse::Android::NativeView*>(child)->Size().X * density);
    int h = (int)(child->Size().Y * density);
    ::app::Android::android::widget::RelativeLayoutDLRLayoutParams* layoutParams = ::app::Android::android::widget::RelativeLayoutDLRLayoutParams__New_15(NULL, w, h);
    ::uPtr< ::app::Android::android::view::View*>(child->Handle())->setLayoutParams((::app::Android::android::view::ViewGroupDLRLayoutParams*)layoutParams);
    ::uPtr< ::app::Android::android::view::View*>(child->Handle())->invalidate();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EditorActionArgs__uType* EditorActionArgs__typeof()
{
    static ::uStaticStrong<EditorActionArgs__uType*> type;
    if (type != NULL) return type;

    type = (EditorActionArgs__uType*)::uAllocClassType(sizeof(EditorActionArgs__uType), "Fuse.Android.EditorActionArgs", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", EditorActionArgs__New_2, 0, true, EditorActionArgs__typeof()));

    ::uRegisterType(type);
    return type;
}

void EditorActionArgs___ObjInit_1(EditorActionArgs* __this)
{
    ::app::Uno::EventArgs___ObjInit(__this);
}

EditorActionArgs* EditorActionArgs__New_2(::uStatic* __this)
{
    EditorActionArgs* inst = (EditorActionArgs*)::uAllocObject(sizeof(EditorActionArgs), EditorActionArgs__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* EditorActionHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Android.EditorActionHandler", 2);

    type->SetSignature(::app::Uno::Bool__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Android::EditorActionArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass EditorActionListener___javaClass_2;

EditorActionListener__uType* EditorActionListener__typeof()
{
    static ::uStaticStrong<EditorActionListener__uType*> type;
    if (type != NULL) return type;

    type = (EditorActionListener__uType*)::uAllocClassType(sizeof(EditorActionListener__uType), "Fuse.Android.EditorActionListener", false, 3, 2, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onEditorAction = (bool(*)(void*, ::app::Android::android::widget::TextView*, int, ::app::Android::android::view::KeyEvent*))EditorActionListener__Android_android_widget_TextViewDLROnEditorActionListener_onEditorAction;
    type->__interface_1.__fp_Dispose = (void(*)(void*))EditorActionListener__Dispose_1;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(EditorActionListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(EditorActionListener__uType, __interface_1),
        ::app::Android::android::widget::TextViewDLROnEditorActionListener__typeof(), offsetof(EditorActionListener__uType, __interface_2));

    type->SetStrongRefs(
        "_handler", offsetof(EditorActionListener, _handler),
        "_textView", offsetof(EditorActionListener, _textView));

    type->SetFields(3,
        ::uNewField("_handler", NULL, offsetof(EditorActionListener, _handler), ::app::Fuse::Android::EditorActionHandler__typeof()),
        ::uNewField("_javaClass", &EditorActionListener___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("_textView", NULL, offsetof(EditorActionListener, _textView), ::app::Android::android::widget::TextView__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("AddHandler", EditorActionListener__AddHandler, 0, true, ::app::Uno::IDisposable__typeof(), ::app::Android::android::widget::TextView__typeof(), ::app::Fuse::Android::EditorActionHandler__typeof()),
        ::uNewFunction("Android.android.widget.TextViewDLROnEditorActionListener.onEditorAction", EditorActionListener__Android_android_widget_TextViewDLROnEditorActionListener_onEditorAction, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::widget::TextView__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::view::KeyEvent__typeof()),
        ::uNewFunctionVoid("Dispose", EditorActionListener__Dispose_1, 0, false));

    ::uRegisterType(type);
    return type;
}

void EditorActionListener___ObjInit_4(EditorActionListener* __this, ::app::Android::android::widget::TextView* textView, ::uDelegate* handler)
{
    if (!__this->_subclassed)
    {
        __this->_subclassed = true;
        __this->_javaClassName = ::uGetConstString("com.Bindings.Binding_Fuse_Android_EditorActionListener");
    }

    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);

    if (::app::Android::Base::Primitives::ujclass__op_Equality(NULL, EditorActionListener___javaClass_2, ::app::Android::Base::Primitives::ujclass__get_Null(NULL)))
    {
        EditorActionListener___javaClass_2 = ::app::Android::Base::JNI__LocalToGlobalRef(NULL, ::app::Android::Base::JNI__LoadClass_3(NULL, ::uGetConstString("com.Bindings.Binding_Fuse_Android_EditorActionListener"), false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onEditorAction","(JLandroid/widget/TextView;ILandroid/view/KeyEvent;JJJ)Z",Binding_Fuse_Android_EditorActionListener__onEditorAction26520);
        COMMIT_REG_MTD(EditorActionListener___javaClass_2);
    }

    jclass tmpCls = ::app::Android::Base::JNI__LoadClass_3(NULL, __this->_javaClassName, false);
    jmethodID mtd = ::app::Android::Base::JNI__GetMethodID(NULL, tmpCls, ::uGetConstString("<init>"), ::uGetConstString("(J)V"));
    jobject tmp = ::app::Android::Base::JNI__NewObject_1(NULL, tmpCls, mtd, ::app::Android::Base::Primitives::ujvalue__op_Implicit_16(NULL, (jlong)__this->__obj_weak));
    ::app::Android::Base::JNI__CheckException(NULL);
    __this->_javaObject = ::app::Android::Base::JNI__LocalToGlobalRef_1(NULL, tmp);
    ::app::Android::Base::JNI__DeleteLocalRef(NULL, tmpCls);
    __this->_textView = textView;
    ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setOnEditorActionListener((::uObject*)__this);
    __this->_handler = handler;
}

::uObject* EditorActionListener__AddHandler(::uStatic* __this, ::app::Android::android::widget::TextView* textView, ::uDelegate* handler)
{
    return (::uObject*)EditorActionListener__New_5(NULL, textView, handler);
}

bool EditorActionListener__Android_android_widget_TextViewDLROnEditorActionListener_onEditorAction(EditorActionListener* __this, ::app::Android::android::widget::TextView* v, int actionId, ::app::Android::android::view::KeyEvent* ev)
{
    return ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_handler, NULL) ? ::uPtr< ::uDelegate*>(__this->_handler)->Invoke< bool, ::uObject*, ::app::Fuse::Android::EditorActionArgs*>((::uObject*)__this, ::app::Fuse::Android::EditorActionArgs__New_2(NULL)) : false;
}

void EditorActionListener__Dispose_1(EditorActionListener* __this)
{
    ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setOnEditorActionListener(NULL);
}

EditorActionListener* EditorActionListener__New_5(::uStatic* __this, ::app::Android::android::widget::TextView* textView, ::uDelegate* handler)
{
    EditorActionListener* inst = (EditorActionListener*)::uAllocObject(sizeof(EditorActionListener), EditorActionListener__typeof());
    inst->_ObjInit_4(textView, handler);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* FocusChangedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Android.FocusChangedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::Bool__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass FocusChangedListener___javaClass_2;

FocusChangedListener__uType* FocusChangedListener__typeof()
{
    static ::uStaticStrong<FocusChangedListener__uType*> type;
    if (type != NULL) return type;

    type = (FocusChangedListener__uType*)::uAllocClassType(sizeof(FocusChangedListener__uType), "Fuse.Android.FocusChangedListener", false, 3, 2, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_1.__fp_Dispose = (void(*)(void*))FocusChangedListener__Uno_IDisposable_Dispose_1;
    type->__interface_2.__fp_onFocusChange = (void(*)(void*, ::app::Android::android::view::View*, bool))FocusChangedListener__Android_android_view_ViewDLROnFocusChangeListener_onFocusChange;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(FocusChangedListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(FocusChangedListener__uType, __interface_1),
        ::app::Android::android::view::ViewDLROnFocusChangeListener__typeof(), offsetof(FocusChangedListener__uType, __interface_2));

    type->SetStrongRefs(
        "_handler", offsetof(FocusChangedListener, _handler),
        "_view", offsetof(FocusChangedListener, _view));

    type->SetFields(3,
        ::uNewField("_handler", NULL, offsetof(FocusChangedListener, _handler), ::app::Fuse::Android::FocusChangedHandler__typeof()),
        ::uNewField("_javaClass", &FocusChangedListener___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("_view", NULL, offsetof(FocusChangedListener, _view), ::app::Android::android::view::View__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("AddHandler", FocusChangedListener__AddHandler, 0, true, ::app::Uno::IDisposable__typeof(), ::app::Android::android::view::View__typeof(), ::app::Fuse::Android::FocusChangedHandler__typeof()),
        ::uNewFunctionVoid("Android.android.view.ViewDLROnFocusChangeListener.onFocusChange", FocusChangedListener__Android_android_view_ViewDLROnFocusChangeListener_onFocusChange, 0, false, ::app::Android::android::view::View__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Uno.IDisposable.Dispose", FocusChangedListener__Uno_IDisposable_Dispose_1, 0, false));

    ::uRegisterType(type);
    return type;
}

void FocusChangedListener___ObjInit_4(FocusChangedListener* __this, ::app::Android::android::view::View* view, ::uDelegate* handler)
{
    if (!__this->_subclassed)
    {
        __this->_subclassed = true;
        __this->_javaClassName = ::uGetConstString("com.Bindings.Binding_Fuse_Android_FocusChangedListener");
    }

    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);

    if (::app::Android::Base::Primitives::ujclass__op_Equality(NULL, FocusChangedListener___javaClass_2, ::app::Android::Base::Primitives::ujclass__get_Null(NULL)))
    {
        FocusChangedListener___javaClass_2 = ::app::Android::Base::JNI__LocalToGlobalRef(NULL, ::app::Android::Base::JNI__LoadClass_3(NULL, ::uGetConstString("com.Bindings.Binding_Fuse_Android_FocusChangedListener"), false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onFocusChange","(JLandroid/view/View;ZJJ)V",Binding_Fuse_Android_FocusChangedListener__onFocusChange22722);
        COMMIT_REG_MTD(FocusChangedListener___javaClass_2);
    }

    jclass tmpCls = ::app::Android::Base::JNI__LoadClass_3(NULL, __this->_javaClassName, false);
    jmethodID mtd = ::app::Android::Base::JNI__GetMethodID(NULL, tmpCls, ::uGetConstString("<init>"), ::uGetConstString("(J)V"));
    jobject tmp = ::app::Android::Base::JNI__NewObject_1(NULL, tmpCls, mtd, ::app::Android::Base::Primitives::ujvalue__op_Implicit_16(NULL, (jlong)__this->__obj_weak));
    ::app::Android::Base::JNI__CheckException(NULL);
    __this->_javaObject = ::app::Android::Base::JNI__LocalToGlobalRef_1(NULL, tmp);
    ::app::Android::Base::JNI__DeleteLocalRef(NULL, tmpCls);
    __this->_view = view;
    __this->_handler = handler;
    ::uPtr< ::app::Android::android::view::View*>(__this->_view)->setOnFocusChangeListener((::uObject*)__this);
}

::uObject* FocusChangedListener__AddHandler(::uStatic* __this, ::app::Android::android::view::View* view, ::uDelegate* handler)
{
    return (::uObject*)FocusChangedListener__New_5(NULL, view, handler);
}

void FocusChangedListener__Android_android_view_ViewDLROnFocusChangeListener_onFocusChange(FocusChangedListener* __this, ::app::Android::android::view::View* v, bool hasFocus)
{
    ::uPtr< ::uDelegate*>(__this->_handler)->InvokeVoid< ::uObject*, bool>((::uObject*)v, hasFocus);
}

FocusChangedListener* FocusChangedListener__New_5(::uStatic* __this, ::app::Android::android::view::View* view, ::uDelegate* handler)
{
    FocusChangedListener* inst = (FocusChangedListener*)::uAllocObject(sizeof(FocusChangedListener), FocusChangedListener__typeof());
    inst->_ObjInit_4(view, handler);
    return inst;
}

void FocusChangedListener__Uno_IDisposable_Dispose_1(FocusChangedListener* __this)
{
    ::uPtr< ::app::Android::android::view::View*>(__this->_view)->setOnFocusChangeListener(NULL);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< FocusManager*> FocusManager__Singleton;

FocusManager__uType* FocusManager__typeof()
{
    static ::uStaticStrong<FocusManager__uType*> type;
    if (type != NULL) return type;

    type = (FocusManager__uType*)::uAllocClassType(sizeof(FocusManager__uType), "Fuse.Android.FocusManager", false, 0, 3, 0);

    type->SetStrongRefs(
        "HideKeyboardContext", offsetof(FocusManager, HideKeyboardContext),
        "HideKeyboardWindowToken", offsetof(FocusManager, HideKeyboardWindowToken),
        "LoseFocus", offsetof(FocusManager, LoseFocus));

    type->SetFields(4,
        ::uNewField("HideKeyboardContext", NULL, offsetof(FocusManager, HideKeyboardContext), ::app::Android::android::content::Context__typeof()),
        ::uNewField("HideKeyboardWindowToken", NULL, offsetof(FocusManager, HideKeyboardWindowToken), ::app::Android::android::os::IBinder__typeof()),
        ::uNewField("LoseFocus", NULL, offsetof(FocusManager, LoseFocus), ::app::Android::android::view::View__typeof()),
        ::uNewField("Singleton", &FocusManager__Singleton, 0, FocusManager__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("CompleteFocusLoss", FocusManager__CompleteFocusLoss, 0, false),
        ::uNewFunction(".ctor", FocusManager__New_1, 0, true, FocusManager__typeof()));

    ::uRegisterType(type);
    return type;
}

void FocusManager___ObjInit(FocusManager* __this)
{
}

void FocusManager___TypeInit(::uStatic* __this)
{
    FocusManager__Singleton = FocusManager__New_1(NULL);
}

void FocusManager__CompleteFocusLoss(FocusManager* __this)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->LoseFocus, NULL))
    {
        if (::uPtr< ::app::Android::android::view::View*>(__this->LoseFocus)->hasFocus())
        {
            ::uPtr< ::app::Android::android::view::View*>(::uPtr< ::app::Android::android::view::View*>(__this->LoseFocus)->getRootView())->requestFocus();
        }

        __this->LoseFocus = NULL;
    }

    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->HideKeyboardContext, NULL))
    {
        ::app::Android::android::view::inputmethod::InputMethodManager* imm = ::uCast< ::app::Android::android::view::inputmethod::InputMethodManager*>(::uPtr< ::app::Android::android::content::Context*>(__this->HideKeyboardContext)->getSystemService(::app::Android::android::content::Context__get_INPUT_METHOD_SERVICE(NULL)), ::app::Android::android::view::inputmethod::InputMethodManager__typeof());
        ::uPtr< ::app::Android::android::view::inputmethod::InputMethodManager*>(imm)->hideSoftInputFromWindow(__this->HideKeyboardWindowToken, 0);
        __this->HideKeyboardContext = NULL;
    }
}

FocusManager* FocusManager__New_1(::uStatic* __this)
{
    FocusManager* inst = (FocusManager*)::uAllocObject(sizeof(FocusManager), FocusManager__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass GLSurfaceTextureListener___javaClass_2;

GLSurfaceTextureListener__uType* GLSurfaceTextureListener__typeof()
{
    static ::uStaticStrong<GLSurfaceTextureListener__uType*> type;
    if (type != NULL) return type;

    type = (GLSurfaceTextureListener__uType*)::uAllocClassType(sizeof(GLSurfaceTextureListener__uType), "Fuse.Android.GLSurfaceTextureListener", false, 3, 1, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onSurfaceTextureAvailable = (void(*)(void*, ::app::Android::android::graphics::SurfaceTexture*, int, int))GLSurfaceTextureListener__onSurfaceTextureAvailable;
    type->__interface_2.__fp_onSurfaceTextureSizeChanged = (void(*)(void*, ::app::Android::android::graphics::SurfaceTexture*, int, int))GLSurfaceTextureListener__onSurfaceTextureSizeChanged;
    type->__interface_2.__fp_onSurfaceTextureDestroyed = (bool(*)(void*, ::app::Android::android::graphics::SurfaceTexture*))GLSurfaceTextureListener__onSurfaceTextureDestroyed;
    type->__interface_2.__fp_onSurfaceTextureUpdated = (void(*)(void*, ::app::Android::android::graphics::SurfaceTexture*))GLSurfaceTextureListener__onSurfaceTextureUpdated;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(GLSurfaceTextureListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(GLSurfaceTextureListener__uType, __interface_1),
        ::app::Android::android::view::TextureViewDLRSurfaceTextureListener__typeof(), offsetof(GLSurfaceTextureListener__uType, __interface_2));

    type->SetStrongRefs(
        "_tv", offsetof(GLSurfaceTextureListener, _tv));

    type->SetFields(2,
        ::uNewField("_javaClass", &GLSurfaceTextureListener___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("_tv", NULL, offsetof(GLSurfaceTextureListener, _tv), ::app::Fuse::Android::TextureView__typeof()));

    type->SetFunctions(5,
        ::uNewFunction(".ctor", GLSurfaceTextureListener__New_5, 0, true, GLSurfaceTextureListener__typeof(), ::app::Fuse::Android::TextureView__typeof()),
        ::uNewFunctionVoid("onSurfaceTextureAvailable", GLSurfaceTextureListener__onSurfaceTextureAvailable, 0, false, ::app::Android::android::graphics::SurfaceTexture__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("onSurfaceTextureDestroyed", GLSurfaceTextureListener__onSurfaceTextureDestroyed, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::graphics::SurfaceTexture__typeof()),
        ::uNewFunctionVoid("onSurfaceTextureSizeChanged", GLSurfaceTextureListener__onSurfaceTextureSizeChanged, 0, false, ::app::Android::android::graphics::SurfaceTexture__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onSurfaceTextureUpdated", GLSurfaceTextureListener__onSurfaceTextureUpdated, 0, false, ::app::Android::android::graphics::SurfaceTexture__typeof()));

    ::uRegisterType(type);
    return type;
}

void GLSurfaceTextureListener___ObjInit_4(GLSurfaceTextureListener* __this, ::app::Fuse::Android::TextureView* tv)
{
    if (!__this->_subclassed)
    {
        __this->_subclassed = true;
        __this->_javaClassName = ::uGetConstString("com.Bindings.Binding_Fuse_Android_GLSurfaceTextureListener");
    }

    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);

    if (::app::Android::Base::Primitives::ujclass__op_Equality(NULL, GLSurfaceTextureListener___javaClass_2, ::app::Android::Base::Primitives::ujclass__get_Null(NULL)))
    {
        GLSurfaceTextureListener___javaClass_2 = ::app::Android::Base::JNI__LocalToGlobalRef(NULL, ::app::Android::Base::JNI__LoadClass_3(NULL, ::uGetConstString("com.Bindings.Binding_Fuse_Android_GLSurfaceTextureListener"), false));
        JniHelper jni;
        BEGIN_REG_MTD(4);
        REG_MTD(0,"__n_onSurfaceTextureAvailable","(JLandroid/graphics/SurfaceTexture;IIJJJ)V",Binding_Fuse_Android_GLSurfaceTextureListener__onSurfaceTextureAvailable22642);
        REG_MTD(1,"__n_onSurfaceTextureSizeChanged","(JLandroid/graphics/SurfaceTexture;IIJJJ)V",Binding_Fuse_Android_GLSurfaceTextureListener__onSurfaceTextureSizeChanged22643);
        REG_MTD(2,"__n_onSurfaceTextureDestroyed","(JLandroid/graphics/SurfaceTexture;J)Z",Binding_Fuse_Android_GLSurfaceTextureListener__onSurfaceTextureDestroyed22644);
        REG_MTD(3,"__n_onSurfaceTextureUpdated","(JLandroid/graphics/SurfaceTexture;J)V",Binding_Fuse_Android_GLSurfaceTextureListener__onSurfaceTextureUpdated22645);
        COMMIT_REG_MTD(GLSurfaceTextureListener___javaClass_2);
    }

    jclass tmpCls = ::app::Android::Base::JNI__LoadClass_3(NULL, __this->_javaClassName, false);
    jmethodID mtd = ::app::Android::Base::JNI__GetMethodID(NULL, tmpCls, ::uGetConstString("<init>"), ::uGetConstString("(J)V"));
    jobject tmp = ::app::Android::Base::JNI__NewObject_1(NULL, tmpCls, mtd, ::app::Android::Base::Primitives::ujvalue__op_Implicit_16(NULL, (jlong)__this->__obj_weak));
    ::app::Android::Base::JNI__CheckException(NULL);
    __this->_javaObject = ::app::Android::Base::JNI__LocalToGlobalRef_1(NULL, tmp);
    ::app::Android::Base::JNI__DeleteLocalRef(NULL, tmpCls);
    __this->_tv = tv;
}

GLSurfaceTextureListener* GLSurfaceTextureListener__New_5(::uStatic* __this, ::app::Fuse::Android::TextureView* tv)
{
    GLSurfaceTextureListener* inst = (GLSurfaceTextureListener*)::uAllocObject(sizeof(GLSurfaceTextureListener), GLSurfaceTextureListener__typeof());
    inst->_ObjInit_4(tv);
    return inst;
}

void GLSurfaceTextureListener__onSurfaceTextureAvailable(GLSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* texture, int width, int height)
{
    ::uPtr< ::app::Fuse::Android::TextureView*>(__this->_tv)->OnSurfaceCreated(::app::Android::android::view::Surface__New_5(NULL, texture));
    ::uPtr< ::app::Fuse::Controls::GraphicsView*>(::uPtr< ::app::Fuse::Android::TextureView*>(__this->_tv)->Control())->InvalidateVisual();
}

bool GLSurfaceTextureListener__onSurfaceTextureDestroyed(GLSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* surface)
{
    ::uPtr< ::app::Fuse::Android::TextureView*>(__this->_tv)->OnSurfaceDestroyed();
    return false;
}

void GLSurfaceTextureListener__onSurfaceTextureSizeChanged(GLSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* texture, int width, int height)
{
    ::uPtr< ::app::Fuse::Controls::GraphicsView*>(::uPtr< ::app::Fuse::Android::TextureView*>(__this->_tv)->Control())->InvalidateVisual();
}

void GLSurfaceTextureListener__onSurfaceTextureUpdated(GLSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* surface)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsView__uType* GraphicsView__typeof()
{
    static ::uStaticStrong<GraphicsView__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsView__uType*)::uAllocClassType(sizeof(GraphicsView__uType), "Fuse.Android.GraphicsView", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Android::ParentView__Fuse_Controls_GraphicsView__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Android::ParentView__Fuse_Controls_GraphicsView*))GraphicsView__Attach;
    type->__fp_ChildRooted = (void(*)(::app::Fuse::Android::NativeView*, ::app::Fuse::Android::NativeView*))GraphicsView__ChildRooted;
    type->__fp_ChildUnrooted = (void(*)(::app::Fuse::Android::NativeView*, ::app::Fuse::Android::NativeView*))GraphicsView__ChildUnrooted;
    type->__fp_CreateInternal = (::app::Android::android::view::View*(*)(::app::Fuse::Android::NativeView*))GraphicsView__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::Android::ParentView__Fuse_Controls_GraphicsView*))GraphicsView__Detach;
    type->__fp_NotifyNewSize = (void(*)(::app::Fuse::Android::NativeView*, ::app::Fuse::Android::NativeView*))GraphicsView__NotifyNewSize;

    type->SetStrongRefs(
        "_dc", offsetof(GraphicsView, _dc),
        "_relativeLayout", offsetof(GraphicsView, _relativeLayout),
        "_surface", offsetof(GraphicsView, _surface));

    type->SetFields(6,
        ::uNewField("_dc", NULL, offsetof(GraphicsView, _dc), ::app::Fuse::DrawContext__typeof()),
        ::uNewField("_eglSurface", NULL, offsetof(GraphicsView, _eglSurface), ::app::Uno::IntPtr__typeof()),
        ::uNewField("_nativeWindow", NULL, offsetof(GraphicsView, _nativeWindow), ::app::Uno::IntPtr__typeof()),
        ::uNewField("_relativeLayout", NULL, offsetof(GraphicsView, _relativeLayout), ::app::Android::android::widget::RelativeLayout__typeof()),
        ::uNewField("_surface", NULL, offsetof(GraphicsView, _surface), ::app::Android::android::view::Surface__typeof()),
        ::uNewField("rotationHackRedrawCount", NULL, offsetof(GraphicsView, rotationHackRedrawCount), ::app::Uno::Int__typeof()));

    type->SetFunctions(6,
        ::uNewFunction("CreateGraphicsView", type->__fp_CreateGraphicsView, offsetof(GraphicsView__uType, __fp_CreateGraphicsView), false, ::app::Android::android::view::View__typeof()),
        ::uNewFunctionVoid("DrawFrame", GraphicsView__DrawFrame, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunction("Find", GraphicsView__Find, 0, true, GraphicsView__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("OnResized", GraphicsView__OnResized, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnSurfaceCreated", GraphicsView__OnSurfaceCreated, 0, false, ::app::Android::android::view::Surface__typeof()),
        ::uNewFunctionVoid("OnSurfaceDestroyed", GraphicsView__OnSurfaceDestroyed, 0, false));

    ::uRegisterType(type);
    return type;
}

void GraphicsView___ObjInit_3(GraphicsView* __this)
{
    __this->_eglSurface = ::app::Uno::IntPtr__Zero;
    __this->_nativeWindow = ::app::Uno::IntPtr__Zero;
    ::app::Fuse::Android::ParentView__Fuse_Controls_GraphicsView___ObjInit_2(__this);
}

void GraphicsView__Attach(GraphicsView* __this)
{
    __this->_dc = ::app::Fuse::DrawContext__New_1(NULL, (::uObject*)__this->Control());
    ::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->Control())->add_Redraw(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)GraphicsView__DrawFrame, __this));
    ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->add_FrameChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)GraphicsView__OnResized, __this));
    ::app::Fuse::Android::ParentView__Fuse_Controls_GraphicsView__Attach(__this);
}

void GraphicsView__ChildRooted(GraphicsView* __this, ::app::Fuse::Android::NativeView* child)
{
    __this->NotifyNewSize(child);
    ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->addView_1(::uPtr< ::app::Fuse::Android::NativeView*>(child)->Handle(), 0);
    ::uPtr< ::app::Android::android::view::View*>(child->Handle())->bringToFront();
}

void GraphicsView__ChildUnrooted(GraphicsView* __this, ::app::Fuse::Android::NativeView* child)
{
    ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->removeView(::uPtr< ::app::Fuse::Android::NativeView*>(child)->Handle());
}

::app::Android::android::view::View* GraphicsView__CreateInternal(GraphicsView* __this)
{
    __this->_relativeLayout = ::app::Android::android::widget::RelativeLayout__New_9(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));
    ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->setLayoutParams((::app::Android::android::view::ViewGroupDLRLayoutParams*)::app::Android::android::widget::RelativeLayoutDLRLayoutParams__New_15(NULL, -1, -1));
    ::app::Android::android::view::View* graphicsView = __this->CreateGraphicsView();
    ::uPtr< ::app::Android::android::view::View*>(graphicsView)->setLayoutParams((::app::Android::android::view::ViewGroupDLRLayoutParams*)::app::Android::android::widget::RelativeLayoutDLRLayoutParams__New_15(NULL, -1, -1));
    ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->addView_1(graphicsView, 0);
    return (::app::Android::android::view::View*)__this->_relativeLayout;
}

void GraphicsView__Detach(GraphicsView* __this)
{
    ::app::Fuse::Android::ParentView__Fuse_Controls_GraphicsView__Detach(__this);
    ::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->Control())->remove_Redraw(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)GraphicsView__DrawFrame, __this));
    ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->remove_FrameChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)GraphicsView__OnResized, __this));
    __this->_dc = NULL;
}

void GraphicsView__DrawFrame(GraphicsView* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::IntPtr__op_Equality(NULL, __this->_eglSurface, ::app::Uno::IntPtr__Zero))
    {
        return;
    }

    GLHelper::MakeCurrent(GLHelper::GetSurfaceContext(), (EGLSurface)__this->_eglSurface);
    int width = (int)(::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->Control())->ActualSize().X * ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->Control())->Viewport())));
    int height = (int)(::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->Control())->ActualSize().Y * ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->Control())->Viewport())));
    ::app::OpenGL::GL__Viewport(NULL, 0, 0, width, height);
    ::uPtr< ::app::Fuse::DrawContext*>(__this->_dc)->CaptureRootbuffer();
    ::uPtr< ::app::Fuse::DrawContext*>(__this->_dc)->PushViewport((::uObject*)__this->Control());
    ::uPtr< ::app::Fuse::DrawContext*>(__this->_dc)->PushScissor(::app::Uno::Recti__New_1(NULL, 0, 0, width, height));
    ::uPtr< ::app::Fuse::DrawContext*>(__this->_dc)->Clear(::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->Control())->Background_1(), 1.0f);
    double startTime = double();
    ::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->Control())->Draw(__this->_dc);
    ::uPtr< ::app::Fuse::DrawContext*>(__this->_dc)->PopScissor();
    ::uPtr< ::app::Fuse::DrawContext*>(__this->_dc)->PopViewport();
    double swapBuffersStart = double();
    ::uPtr< ::app::Fuse::DrawContext*>(__this->_dc)->ReleaseRootbuffer();
    GLHelper::SwapBuffers(__this->_eglSurface);

    if (__this->rotationHackRedrawCount > 0)
    {
        __this->rotationHackRedrawCount = __this->rotationHackRedrawCount - 1;
        ::uPtr< ::app::Fuse::Controls::GraphicsView*>(__this->Control())->InvalidateVisual();
    }
}

GraphicsView* GraphicsView__Find(::uStatic* __this, ::app::Fuse::Node* node)
{
    GraphicsView* ind_123;
    return (node != NULL) ? (ind_123 = ::uAs< GraphicsView*>(::app::Fuse::Android::NativeView__GetFrom(NULL, node), GraphicsView__typeof()), ((ind_123 != NULL) ? ind_123 : GraphicsView__Find(NULL, ::uPtr< ::app::Fuse::Node*>(node)->Parent()))) : NULL;
}

void GraphicsView__NotifyNewSize(GraphicsView* __this, ::app::Fuse::Android::NativeView* child)
{
    if ((__this->Node() == NULL) || !::uPtr< ::app::Fuse::Node*>(__this->Node())->IsLocalRooted())
    {
        return;
    }

    float density = ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Node())->Viewport()));
    int w = (int)(::uPtr< ::app::Fuse::Android::NativeView*>(child)->Size().X * density);
    int h = (int)(child->Size().Y * density);
    ::app::Android::android::widget::RelativeLayoutDLRLayoutParams* layoutParams = ::app::Android::android::widget::RelativeLayoutDLRLayoutParams__New_15(NULL, w, h);
    ::uPtr< ::app::Android::android::view::View*>(child->Handle())->setLayoutParams((::app::Android::android::view::ViewGroupDLRLayoutParams*)layoutParams);
    ::uPtr< ::app::Android::android::view::View*>(child->Handle())->invalidate();
}

void GraphicsView__OnResized(GraphicsView* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->rotationHackRedrawCount = 5;
}

void GraphicsView__OnSurfaceCreated(GraphicsView* __this, ::app::Android::android::view::Surface* s)
{
    __this->_surface = s;
    __this->_nativeWindow = GLHelper::GetANativeWindowFromSurface(::uPtr< ::app::Android::android::view::Surface*>(s)->_javaObject);
    EGLSurface tmpS;
    GLHelper::CreateNewSurfaceAndMakeCurrent((ANativeWindow*)__this->_nativeWindow, tmpS);
    __this->_eglSurface = tmpS;
}

void GraphicsView__OnSurfaceDestroyed(GraphicsView* __this)
{
    GLHelper::SwapBackToBackgroundSurface((EGLSurface)__this->_eglSurface);
    __this->_eglSurface = ::app::Uno::IntPtr__Zero;
    ANativeWindow_release((ANativeWindow*)__this->_nativeWindow);
    __this->_surface = NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Helpers__uType* Helpers__typeof()
{
    static ::uStaticStrong<Helpers__uType*> type;
    if (type != NULL) return type;

    type = (Helpers__uType*)::uAllocClassType(sizeof(Helpers__uType), "Fuse.Android.Helpers");

    type->SetFunctions(1,
        ::uNewFunction("EncodeColor", Helpers__EncodeColor, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

int Helpers__EncodeColor(::uStatic* __this, ::app::Uno::Float4 c)
{
    int r = ::app::Uno::Math__Clamp_8(NULL, (int)(c.X * 255.0f), 0, 255);
    int g = ::app::Uno::Math__Clamp_8(NULL, (int)(c.Y * 255.0f), 0, 255);
    int b = ::app::Uno::Math__Clamp_8(NULL, (int)(c.Z * 255.0f), 0, 255);
    int a = ::app::Uno::Math__Clamp_8(NULL, (int)(c.W * 255.0f), 0, 255);
    return (((a << 24) | (r << 16)) | (g << 8)) | b;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass HorizontalScrollView___javaClass_6;

HorizontalScrollView__uType* HorizontalScrollView__typeof()
{
    static ::uStaticStrong<HorizontalScrollView__uType*> type;
    if (type != NULL) return type;

    type = (HorizontalScrollView__uType*)::uAllocClassType(sizeof(HorizontalScrollView__uType), "Fuse.Android.HorizontalScrollView", false, 3, 1, 0);

    type->SetBaseType(::app::Android::android::widget::HorizontalScrollView__typeof());
    type->__fp_onScrollChanged = (void(*)(::app::Android::android::view::View*, int, int, int, int))HorizontalScrollView__onScrollChanged;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(HorizontalScrollView__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(HorizontalScrollView__uType, __interface_1),
        ::app::Android::android::view::ViewParent__typeof(), offsetof(HorizontalScrollView__uType, __interface_2));

    type->SetStrongRefs(
        "_sv", offsetof(HorizontalScrollView, _sv));

    type->SetFields(2,
        ::uNewField("_javaClass", &HorizontalScrollView___javaClass_6, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("_sv", NULL, offsetof(HorizontalScrollView, _sv), ::app::Fuse::Android::ScrollView__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", HorizontalScrollView__New_17, 0, true, HorizontalScrollView__typeof(), ::app::Fuse::Android::ScrollView__typeof()));

    ::uRegisterType(type);
    return type;
}

void HorizontalScrollView___ObjInit_20(HorizontalScrollView* __this, ::app::Fuse::Android::ScrollView* sv)
{
    if (!__this->_subclassed)
    {
        __this->_subclassed = true;
        __this->_javaClassName = ::uGetConstString("com.Bindings.Binding_Fuse_Android_HorizontalScrollView");
    }

    ::app::Android::android::widget::HorizontalScrollView___ObjInit_19(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);

    if (::app::Android::Base::Primitives::ujclass__op_Equality(NULL, HorizontalScrollView___javaClass_6, ::app::Android::Base::Primitives::ujclass__get_Null(NULL)))
    {
        HorizontalScrollView___javaClass_6 = ::app::Android::Base::JNI__LocalToGlobalRef(NULL, ::app::Android::Base::JNI__LoadClass_3(NULL, ::uGetConstString("com.Bindings.Binding_Fuse_Android_HorizontalScrollView"), false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onScrollChanged","(JIIIIJJJJ)V",Binding_Fuse_Android_HorizontalScrollView__onScrollChanged22996);
        COMMIT_REG_MTD(HorizontalScrollView___javaClass_6);
    }

    jclass tmpCls = ::app::Android::Base::JNI__LoadClass_3(NULL, __this->_javaClassName, false);
    jmethodID mtd = ::app::Android::Base::JNI__GetMethodID(NULL, tmpCls, ::uGetConstString("<init>"), ::uGetConstString("(JLandroid/content/Context;)V"));
    jobject tmp = ::app::Android::Base::JNI__NewObject_2(NULL, tmpCls, mtd, ::app::Android::Base::Primitives::ujvalue__op_Implicit_16(NULL, (jlong)__this->__obj_weak), ::app::Android::Base::Primitives::ujvalue__op_Implicit_17(NULL, ::uPtr< ::app::Android::android::content::Context*>((::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL))->_GetJavaObject()));
    ::app::Android::Base::JNI__CheckException(NULL);
    __this->_javaObject = ::app::Android::Base::JNI__LocalToGlobalRef_1(NULL, tmp);
    ::app::Android::Base::JNI__DeleteLocalRef(NULL, tmpCls);
    __this->_sv = sv;
}

HorizontalScrollView* HorizontalScrollView__New_17(::uStatic* __this, ::app::Fuse::Android::ScrollView* sv)
{
    HorizontalScrollView* inst = (HorizontalScrollView*)::uAllocObject(sizeof(HorizontalScrollView), HorizontalScrollView__typeof());
    inst->_ObjInit_20(sv);
    return inst;
}

void HorizontalScrollView__onScrollChanged(HorizontalScrollView* __this, int x, int y, int oldx, int oldy)
{
    ::uPtr< ::app::Fuse::Android::ScrollView*>(__this->_sv)->OnScrollChanged(x, y);
    ::app::Android::android::view::View__onScrollChanged(__this, x, y, oldx, oldy);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Image__uType* Image__typeof()
{
    static ::uStaticStrong<Image__uType*> type;
    if (type != NULL) return type;

    type = (Image__uType*)::uAllocClassType(sizeof(Image__uType), "Fuse.Android.Image", false, 1, 5, 0);

    type->SetBaseType(::app::Fuse::Android::ControlView__Fuse_Controls_Image__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_Image*))Image__Attach;
    type->__fp_CreateInternal = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))Image__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_Image*))Image__Detach;
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))Image__GetMarginSize;
    type->__fp_OnArrangeMarginBox = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, ::app::Uno::Float2, int))Image__OnArrangeMarginBox;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Image__uType, __interface_0));

    type->SetStrongRefs(
        "_bitmap", offsetof(Image, _bitmap),
        "_currentImageLoader", offsetof(Image, _currentImageLoader),
        "_imageContainer", offsetof(Image, _imageContainer),
        "_imageView", offsetof(Image, _imageView),
        "_sizing", offsetof(Image, _sizing));

    type->SetFields(5,
        ::uNewField("_bitmap", NULL, offsetof(Image, _bitmap), ::app::Android::android::graphics::Bitmap__typeof()),
        ::uNewField("_currentImageLoader", NULL, offsetof(Image, _currentImageLoader), ::app::Fuse::Android::Image_ImageLoader__typeof()),
        ::uNewField("_imageContainer", NULL, offsetof(Image, _imageContainer), ::app::Android::android::widget::RelativeLayout__typeof()),
        ::uNewField("_imageView", NULL, offsetof(Image, _imageView), ::app::Android::android::widget::ImageView__typeof()),
        ::uNewField("_sizing", NULL, offsetof(Image, _sizing), ::app::Fuse::Internal::SizingContainer__typeof()));

    type->SetFunctions(13,
        ::uNewFunctionVoid("ClearSource", Image__ClearSource, 0, false),
        ::uNewFunction("CreateMatrix", Image__CreateMatrix, 0, false, ::app::Android::android::graphics::Matrix__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Bitmap", Image__get_Bitmap, 0, false, ::app::Android::android::graphics::Bitmap__typeof()),
        ::uNewFunction("GetSize", Image__GetSize, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("Invalidate", Image__Invalidate, 0, false),
        ::uNewFunction(".ctor", Image__New_1, 0, true, Image__typeof()),
        ::uNewFunctionVoid("OnParamChanged", Image__OnParamChanged, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnSourceChanged", Image__OnSourceChanged, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("set_Bitmap", Image__set_Bitmap, 0, false, ::app::Android::android::graphics::Bitmap__typeof()),
        ::uNewFunctionVoid("SetDensity", Image__SetDensity, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("SetImageViewSize", Image__SetImageViewSize, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("SetResampleMode", Image__SetResampleMode, 0, false, ::app::Fuse::Drawing::ResampleMode__typeof()),
        ::uNewFunctionVoid("SetSource", Image__SetSource, 0, false, ::app::Android::android::graphics::Bitmap__typeof()));

    ::uRegisterType(type);
    return type;
}

void Image___ObjInit_3(Image* __this)
{
    ::app::Fuse::Android::ControlView__Fuse_Controls_Image___ObjInit_2(__this);
    __this->_sizing = ::app::Fuse::Internal::SizingContainer__New_1(NULL);
}

void Image__Attach(Image* __this)
{
    __this->Create();
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->add_ParamChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnParamChanged, __this));
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->add_SourceChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnSourceChanged, __this));
    __this->OnParamChanged(NULL, NULL);
    __this->OnSourceChanged(NULL, NULL);
}

void Image__ClearSource(Image* __this)
{
    ::uPtr< ::app::Android::android::widget::ImageView*>(__this->_imageView)->setImageBitmap(NULL);
    ::uPtr< ::app::Android::android::widget::ImageView*>(__this->_imageView)->invalidate();
    __this->Invalidate();
}

::app::Android::android::view::View* Image__CreateInternal(Image* __this)
{
    if (::app::Android::java::lang::Object__op_Equality_1(NULL, (::app::Android::java::lang::Object*)__this->_imageView, NULL))
    {
        __this->_imageView = ::app::Android::android::widget::ImageView__New_9(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));
        ::uPtr< ::app::Android::android::widget::ImageView*>(__this->_imageView)->setScaleType(::app::Android::android::widget::ImageViewDLRScaleType__get_MATRIX(NULL));
        __this->_imageContainer = ::app::Android::android::widget::RelativeLayout__New_9(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));
        ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_imageContainer)->setLayoutParams((::app::Android::android::view::ViewGroupDLRLayoutParams*)::app::Android::android::widget::FrameLayoutDLRLayoutParams__New_16(NULL, -1, -1));
        __this->SetImageViewSize(::app::Uno::Float2__New_1(NULL, 0.0f));
        ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_imageContainer)->addView((::app::Android::android::view::View*)__this->_imageView);
        ::uPtr< ::app::Android::android::widget::ImageView*>(__this->_imageView)->invalidate();
        ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_imageContainer)->invalidate();
    }

    return (::app::Android::android::view::View*)__this->_imageContainer;
}

::app::Android::android::graphics::Matrix* Image__CreateMatrix(Image* __this, ::app::Uno::Float2 translation, ::app::Uno::Float2 scale)
{
    ::app::Android::Runtime::FloatArray* m = ::app::Android::Runtime::FloatArray__New_5(NULL, 9);
    ::uPtr< ::app::Android::Runtime::FloatArray*>(m)->Item(0, scale.X);
    m->Item(1, 0.0f);
    m->Item(2, translation.X);
    m->Item(3, 0.0f);
    m->Item(4, scale.Y);
    m->Item(5, translation.Y);
    m->Item(6, 0.0f);
    m->Item(7, 0.0f);
    m->Item(8, 1.0f);
    ::app::Android::android::graphics::Matrix* matrix = ::app::Android::android::graphics::Matrix__New_5(NULL);
    ::uPtr< ::app::Android::android::graphics::Matrix*>(matrix)->setValues(m);
    return matrix;
}

void Image__Detach(Image* __this)
{
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->remove_ParamChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnParamChanged, __this));
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->remove_SourceChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnSourceChanged, __this));
}

::app::Android::android::graphics::Bitmap* Image__get_Bitmap(Image* __this)
{
    return __this->_bitmap;
}

::app::Uno::Float2 Image__GetMarginSize(Image* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->snapToPixels = ::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->SnapToPixels();
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->absoluteZoom = ::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->AbsoluteZoom();
    ::app::Uno::Float2 measuredSize = __this->GetSize();
    ::app::Uno::Float2 marginSize = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->ExpandFillSize(measuredSize, fillSize, fillSet);
    return marginSize;
}

::app::Uno::Float2 Image__GetSize(Image* __this)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_imageView, NULL))
    {
        ::uPtr< ::app::Android::android::widget::ImageView*>(__this->_imageView)->measure(::app::Android::android::view::ViewDLRMeasureSpec__get_UNSPECIFIED(NULL), ::app::Android::android::view::ViewDLRMeasureSpec__get_UNSPECIFIED(NULL));
        return ::app::Uno::Float2__New_2(NULL, (float)::uPtr< ::app::Android::android::widget::ImageView*>(__this->_imageView)->getMeasuredWidth(), (float)::uPtr< ::app::Android::android::widget::ImageView*>(__this->_imageView)->getMeasuredHeight());
    }

    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

void Image__Invalidate(Image* __this)
{
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->InvalidateLayout(2);
}

Image* Image__New_1(::uStatic* __this)
{
    Image* inst = (Image*)::uAllocObject(sizeof(Image), Image__typeof());
    inst->_ObjInit_3();
    return inst;
}

::app::Uno::Float2 Image__OnArrangeMarginBox(Image* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet)
{
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->snapToPixels = ::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->SnapToPixels();
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->absoluteZoom = ::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->AbsoluteZoom();
    ::app::Uno::Float2 contentDesiredSize = __this->GetSize();
    ::app::Uno::Float2 scale = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->CalcScale(availableSize, contentDesiredSize);
    ::app::Uno::Float2 origin = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->CalcOrigin(availableSize, ::app::Uno::Float2__op_Multiply_2(NULL, contentDesiredSize, scale));
    ::app::Uno::Float2 drawOrigin = origin;
    ::app::Uno::Float2 drawSize = ::app::Uno::Float2__op_Multiply_2(NULL, contentDesiredSize, scale);
    ::app::Uno::Float4 uvClip = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->CalcClip(availableSize, &drawOrigin, &drawSize);
    ::app::Uno::Float2 transformOrigin = ::app::Uno::Float2__op_Subtraction_2(NULL, origin, drawOrigin);
    float density = ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport()));
    __this->SetImageViewSize(::app::Uno::Float2__op_Multiply_1(NULL, drawSize, density));
    ::uPtr< ::app::Android::android::widget::ImageView*>(__this->_imageView)->setImageMatrix(__this->CreateMatrix(::app::Uno::Float2__op_Multiply_1(NULL, transformOrigin, density), ::app::Uno::Float2__op_Multiply_1(NULL, scale, density)));
    ::uPtr< ::app::Android::android::widget::ImageView*>(__this->_imageView)->invalidate();
    ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_imageContainer)->invalidate();
    __this->Position(drawOrigin);
    __this->ActualSize(drawSize);
    ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Android::NativeView__NotifyNewTransform, __this->NativeView()));
    return __this->ActualSize();
}

void Image__OnParamChanged(Image* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    if (((::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->SetStretchMode(::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->StretchMode()) || ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->SetStretchDirection(::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->StretchDirection())) || ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->SetStretchSizing(::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->StretchSizing())) || ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->_sizing)->SetAlignment(::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->ContentAlignment()))
    {
        __this->Invalidate();
    }

    __this->SetDensity(::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->Density());
    __this->SetResampleMode(::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->ResampleMode());
}

void Image__OnSourceChanged(Image* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    if (__this->_currentImageLoader != NULL)
    {
        ::uPtr< ::app::Fuse::Android::Image_ImageLoader*>(__this->_currentImageLoader)->Cancel();
        __this->_currentImageLoader = NULL;
    }

    if (::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->Source() == NULL)
    {
        return;
    }

    ::app::Fuse::Resources::FileImageSource* fs = ::uAs< ::app::Fuse::Resources::FileImageSource*>(::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->Source(), ::app::Fuse::Resources::FileImageSource__typeof());

    if (fs != NULL)
    {
        __this->Bitmap(::app::Fuse::Android::BitmapFactory__GetBitmap(NULL, ::uPtr< ::app::Fuse::Resources::FileImageSource*>(fs)->File()));
        __this->OnParamChanged(NULL, NULL);
    }

    ::app::Fuse::Resources::HttpImageSource* http = ::uAs< ::app::Fuse::Resources::HttpImageSource*>(::uPtr< ::app::Fuse::Controls::Image*>(__this->Control())->Source(), ::app::Fuse::Resources::HttpImageSource__typeof());

    if (http != NULL)
    {
        __this->_currentImageLoader = ::app::Fuse::Android::Image_ImageLoader__New_1(NULL, __this, ::uPtr< ::app::Fuse::Resources::HttpImageSource*>(http)->Url());
    }
}

void Image__set_Bitmap(Image* __this, ::app::Android::android::graphics::Bitmap* value)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_bitmap, NULL))
    {
        __this->ClearSource();
    }

    __this->_bitmap = value;
    __this->SetSource(__this->_bitmap);
}

void Image__SetDensity(Image* __this, float density)
{
}

void Image__SetImageViewSize(Image* __this, ::app::Uno::Float2 size)
{
    ::uPtr< ::app::Android::android::widget::ImageView*>(__this->_imageView)->setLayoutParams((::app::Android::android::view::ViewGroupDLRLayoutParams*)::app::Android::android::widget::RelativeLayoutDLRLayoutParams__New_15(NULL, (int)size.X, (int)size.Y));
}

void Image__SetResampleMode(Image* __this, int mode)
{
    if (::app::Android::java::lang::Object__op_Equality_1(NULL, (::app::Android::java::lang::Object*)__this->Bitmap(), NULL))
    {
        return;
    }

    if (::app::Android::android::os::BuildDLRVERSION__get_SDK_INT(NULL) >= 17)
    {
        ::uPtr< ::app::Android::android::graphics::Bitmap*>(__this->Bitmap())->setHasMipMap(false);
    }

    switch (mode)
    {
        case 0:
        {
            break;
        }
        case 1:
        {
            break;
        }
        case 2:
        {
            if (::app::Android::android::os::BuildDLRVERSION__get_SDK_INT(NULL) >= 17)
            {
                ::uPtr< ::app::Android::android::graphics::Bitmap*>(__this->Bitmap())->setHasMipMap(true);
            }

            break;
        }
    }

    ::uPtr< ::app::Android::android::widget::ImageView*>(__this->_imageView)->invalidate();
}

void Image__SetSource(Image* __this, ::app::Android::android::graphics::Bitmap* bitmap)
{
    ::uPtr< ::app::Android::android::widget::ImageView*>(__this->_imageView)->setImageBitmap(bitmap);
    ::uPtr< ::app::Android::android::widget::ImageView*>(__this->_imageView)->invalidate();
    __this->Invalidate();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Image_ImageLoader__uType* Image_ImageLoader__typeof()
{
    static ::uStaticStrong<Image_ImageLoader__uType*> type;
    if (type != NULL) return type;

    type = (Image_ImageLoader__uType*)::uAllocClassType(sizeof(Image_ImageLoader__uType), "Fuse.Android.Image.ImageLoader", false, 0, 3, 0);

    type->SetStrongRefs(
        "_image", offsetof(Image_ImageLoader, _image),
        "_loader", offsetof(Image_ImageLoader, _loader),
        "_thread", offsetof(Image_ImageLoader, _thread));

    return type;
}

void Image_ImageLoader___ObjInit(Image_ImageLoader* __this, ::app::Fuse::Android::Image* image, ::uString* url)
{
    __this->_image = image;
    __this->_loader = ::app::Fuse::Android::Image_ImageLoader_BitmapLoader__New_5(NULL, url, ::uNewDelegateNonVirt(::app::Uno::Action__Android_android_graphics_Bitmap__typeof(), (const void*)Image_ImageLoader__OnDone, __this));
    __this->_thread = ::app::Android::java::lang::Thread__New_6(NULL, (::uObject*)__this->_loader);
    ::uPtr< ::app::Android::java::lang::Thread*>(__this->_thread)->start();
}

void Image_ImageLoader__Cancel(Image_ImageLoader* __this)
{
    ::uPtr< ::app::Android::java::lang::Thread*>(__this->_thread)->stop();
}

Image_ImageLoader* Image_ImageLoader__New_1(::uStatic* __this, ::app::Fuse::Android::Image* image, ::uString* url)
{
    Image_ImageLoader* inst = (Image_ImageLoader*)::uAllocObject(sizeof(Image_ImageLoader), Image_ImageLoader__typeof());
    inst->_ObjInit(image, url);
    return inst;
}

void Image_ImageLoader__OnDone(Image_ImageLoader* __this, ::app::Android::android::graphics::Bitmap* bitmap)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)bitmap, NULL) && (__this->_image != NULL))
    {
        ::uPtr< ::app::Fuse::Android::Image*>(__this->_image)->Bitmap(bitmap);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Image_ImageLoader_BitmapLoader___javaClass_2;

Image_ImageLoader_BitmapLoader__uType* Image_ImageLoader_BitmapLoader__typeof()
{
    static ::uStaticStrong<Image_ImageLoader_BitmapLoader__uType*> type;
    if (type != NULL) return type;

    type = (Image_ImageLoader_BitmapLoader__uType*)::uAllocClassType(sizeof(Image_ImageLoader_BitmapLoader__uType), "Fuse.Android.Image.ImageLoader.BitmapLoader", false, 3, 3, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_run = (void(*)(void*))Image_ImageLoader_BitmapLoader__Android_java_lang_Runnable_run;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Image_ImageLoader_BitmapLoader__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Image_ImageLoader_BitmapLoader__uType, __interface_1),
        ::app::Android::java::lang::Runnable__typeof(), offsetof(Image_ImageLoader_BitmapLoader__uType, __interface_2));

    type->SetStrongRefs(
        "_bitmap", offsetof(Image_ImageLoader_BitmapLoader, _bitmap),
        "_doneCallback", offsetof(Image_ImageLoader_BitmapLoader, _doneCallback),
        "_url", offsetof(Image_ImageLoader_BitmapLoader, _url));

    return type;
}

void Image_ImageLoader_BitmapLoader___ObjInit_4(Image_ImageLoader_BitmapLoader* __this, ::uString* url, ::uDelegate* doneCallback)
{
    if (!__this->_subclassed)
    {
        __this->_subclassed = true;
        __this->_javaClassName = ::uGetConstString("com.Bindings.Binding_Fuse_Android_Image_ImageLoader_BitmapLoader");
    }

    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);

    if (::app::Android::Base::Primitives::ujclass__op_Equality(NULL, Image_ImageLoader_BitmapLoader___javaClass_2, ::app::Android::Base::Primitives::ujclass__get_Null(NULL)))
    {
        Image_ImageLoader_BitmapLoader___javaClass_2 = ::app::Android::Base::JNI__LocalToGlobalRef(NULL, ::app::Android::Base::JNI__LoadClass_3(NULL, ::uGetConstString("com.Bindings.Binding_Fuse_Android_Image_ImageLoader_BitmapLoader"), false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_run","(J)V",Binding_Fuse_Android_Image_ImageLoader_BitmapLoader__run31342);
        COMMIT_REG_MTD(Image_ImageLoader_BitmapLoader___javaClass_2);
    }

    jclass tmpCls = ::app::Android::Base::JNI__LoadClass_3(NULL, __this->_javaClassName, false);
    jmethodID mtd = ::app::Android::Base::JNI__GetMethodID(NULL, tmpCls, ::uGetConstString("<init>"), ::uGetConstString("(J)V"));
    jobject tmp = ::app::Android::Base::JNI__NewObject_1(NULL, tmpCls, mtd, ::app::Android::Base::Primitives::ujvalue__op_Implicit_16(NULL, (jlong)__this->__obj_weak));
    ::app::Android::Base::JNI__CheckException(NULL);
    __this->_javaObject = ::app::Android::Base::JNI__LocalToGlobalRef_1(NULL, tmp);
    ::app::Android::Base::JNI__DeleteLocalRef(NULL, tmpCls);
    __this->_url = url;
    __this->_doneCallback = doneCallback;
}

void Image_ImageLoader_BitmapLoader__Android_java_lang_Runnable_run(Image_ImageLoader_BitmapLoader* __this)
{
    try
    {
        ::app::Android::java::io::InputStream* stream = ::uCast< ::app::Android::java::io::InputStream*>(::uPtr< ::app::Android::java::net::URL*>(::app::Android::java::net::URL__New_5(NULL, ::app::Android::java::lang::String__op_Implicit(NULL, __this->_url)))->getContent(), ::app::Android::java::io::InputStream__typeof());
        __this->_bitmap = ::app::Android::android::graphics::BitmapFactory__decodeStream(NULL, stream);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Loading image from url failed:"), ::uPtr< ::app::Uno::Exception*>(e)->Message()), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Android.Views\\0.11.3\\$.uno"), 980);
        }
        else
        {
            throw __t;
        }
    }

    ::uPtr< ::app::Android::android::app::Activity*>(::app::Android::android::app::Activity__GetAppActivity(NULL))->runOnUiThread(::app::Android::Runtime::UnoHelper__RunnableFromAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Image_ImageLoader_BitmapLoader__Done, __this)));
}

void Image_ImageLoader_BitmapLoader__Done(Image_ImageLoader_BitmapLoader* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_doneCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_doneCallback)->InvokeVoid< ::app::Android::android::graphics::Bitmap*>(__this->_bitmap);
    }
}

Image_ImageLoader_BitmapLoader* Image_ImageLoader_BitmapLoader__New_5(::uStatic* __this, ::uString* url, ::uDelegate* doneCallback)
{
    Image_ImageLoader_BitmapLoader* inst = (Image_ImageLoader_BitmapLoader*)::uAllocObject(sizeof(Image_ImageLoader_BitmapLoader), Image_ImageLoader_BitmapLoader__typeof());
    inst->_ObjInit_4(url, doneCallback);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::HashSet__int*> InputDispatch___activePointers;
::uStaticStrong< ::uObject*> InputDispatch___captureIdentiy;
::uStaticStrong< ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node*> InputDispatch___listeners;
::uStaticStrong< ::app::Fuse::Android::InputDispatch_TouchListener*> InputDispatch___touchListener;

InputDispatch__uType* InputDispatch__typeof()
{
    static ::uStaticStrong<InputDispatch__uType*> type;
    if (type != NULL) return type;

    type = (InputDispatch__uType*)::uAllocClassType(sizeof(InputDispatch__uType), "Fuse.Android.InputDispatch");

    type->SetFields(4,
        ::uNewField("_activePointers", &InputDispatch___activePointers, 0, ::app::Uno::Collections::HashSet__int__typeof()),
        ::uNewField("_captureIdentiy", &InputDispatch___captureIdentiy, 0, ::uObject__typeof()),
        ::uNewField("_listeners", &InputDispatch___listeners, 0, ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node__typeof()),
        ::uNewField("_touchListener", &InputDispatch___touchListener, 0, ::app::Fuse::Android::InputDispatch_TouchListener__typeof()));

    type->SetFunctions(13,
        ::uNewFunctionVoid("AddListener", InputDispatch__AddListener, 0, true, ::app::Fuse::Android::NativeView__typeof()),
        ::uNewFunction("FindRoot", InputDispatch__FindRoot, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("GetNode", InputDispatch__GetNode, 0, true, ::app::Fuse::Node__typeof(), ::app::Android::android::view::View__typeof()),
        ::uNewFunctionVoid("LostCallback", InputDispatch__LostCallback, 0, true),
        ::uNewFunction("MakePointerEventData", InputDispatch__MakePointerEventData, 0, true, ::uGetArrayType(::app::Fuse::Input::PointerEventData__typeof()), ::app::Fuse::Node__typeof(), ::app::Android::android::view::View__typeof(), ::app::Android::android::view::MotionEvent__typeof()),
        ::uNewFunctionVoid("RaiseCancel", InputDispatch__RaiseCancel, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerEventData__typeof()),
        ::uNewFunctionVoid("RaiseEvent", InputDispatch__RaiseEvent, 0, true, ::app::Fuse::Node__typeof(), ::app::Android::android::view::View__typeof(), ::app::Android::android::view::MotionEvent__typeof()),
        ::uNewFunctionVoid("RaiseMoved", InputDispatch__RaiseMoved, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerEventData__typeof()),
        ::uNewFunctionVoid("RaisePressed", InputDispatch__RaisePressed, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerEventData__typeof()),
        ::uNewFunctionVoid("RaiseReleased", InputDispatch__RaiseReleased, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Input::PointerEventData__typeof()),
        ::uNewFunction("RegisterPointer", InputDispatch__RegisterPointer, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("RemoveListener", InputDispatch__RemoveListener, 0, true, ::app::Fuse::Android::NativeView__typeof()),
        ::uNewFunctionVoid("UnregisterPointer", InputDispatch__UnregisterPointer, 0, true, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void InputDispatch___TypeInit(::uStatic* __this)
{
    InputDispatch___listeners = ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node__New_1(NULL);
    InputDispatch___activePointers = ::app::Uno::Collections::HashSet__int__New_1(NULL);
    InputDispatch___captureIdentiy = ::app::Uno::Object__New(NULL);
}

void InputDispatch__AddListener(::uStatic* __this, ::app::Fuse::Android::NativeView* nativeView)
{
    if (::app::Android::java::lang::Object__op_Equality_1(NULL, (::app::Android::java::lang::Object*)InputDispatch___touchListener, NULL))
    {
        InputDispatch___touchListener = ::app::Fuse::Android::InputDispatch_TouchListener__New_5(NULL);
    }

    ::uPtr< ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node*>(InputDispatch___listeners)->Add(::uPtr< ::app::Fuse::Android::NativeView*>(nativeView)->Handle(), ::uPtr< ::app::Fuse::Android::NativeView*>(nativeView)->Node());
    ::uPtr< ::app::Android::android::view::View*>(nativeView->Handle())->setOnTouchListener((::uObject*)InputDispatch___touchListener);
}

::app::Fuse::Node* InputDispatch__FindRoot(::uStatic* __this, ::app::Fuse::Node* n)
{
    if (::uPtr< ::app::Fuse::Node*>(n)->Parent() == NULL)
    {
        return n;
    }

    return InputDispatch__FindRoot(NULL, ::uPtr< ::app::Fuse::Node*>(n)->Parent());
}

::app::Fuse::Node* InputDispatch__GetNode(::uStatic* __this, ::app::Android::android::view::View* handle)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node*>(InputDispatch___listeners)->ContainsKey(handle))
    {
        return ::uPtr< ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node*>(InputDispatch___listeners)->Item(handle);
    }

    return NULL;
}

void InputDispatch__LostCallback(::uStatic* __this)
{
}

::uArray* InputDispatch__MakePointerEventData(::uStatic* __this, ::app::Fuse::Node* node, ::app::Android::android::view::View* view, ::app::Android::android::view::MotionEvent* motionEvent)
{
    ::app::Fuse::Input::PointerEventData* collection_123;
    ::uArray* pointerEventData = ::uNewArray(::app::Fuse::Input::PointerEventData__typeof(), ::uPtr< ::app::Android::android::view::MotionEvent*>(motionEvent)->getPointerCount());
    ::app::Android::Runtime::IntArray* intArray = ::app::Android::Runtime::IntArray__New_5(NULL, 2);
    ::uPtr< ::app::Android::android::view::View*>(view)->getLocationOnScreen(intArray);
    ::app::Uno::Float2 offset = ::app::Uno::Float2__New_2(NULL, (float)::uPtr< ::app::Android::Runtime::IntArray*>(intArray)->Item(0), (float)::uPtr< ::app::Android::Runtime::IntArray*>(intArray)->Item(1));
    float density = ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(node)->Viewport()));

    for (int i = 0; i < pointerEventData->Length(); i++)
    {
        ::app::Uno::Float2 windowPoint = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Addition_2(NULL, offset, ::app::Uno::Float2__New_2(NULL, ::uPtr< ::app::Android::android::view::MotionEvent*>(motionEvent)->getX_1(i), ::uPtr< ::app::Android::android::view::MotionEvent*>(motionEvent)->getY_1(i))), density);
        int pointerId = motionEvent->getPointerId(i);
        ::uPtr< ::uArray*>(pointerEventData)->ItemStrong< ::app::Fuse::Input::PointerEventData*>(i) = (collection_123 = ::app::Fuse::Input::PointerEventData__New_1(NULL), ::uPtr< ::app::Fuse::Input::PointerEventData*>(collection_123)->PointIndex = pointerId, ::uPtr< ::app::Fuse::Input::PointerEventData*>(collection_123)->WindowPoint = windowPoint, ::uPtr< ::app::Fuse::Input::PointerEventData*>(collection_123)->Timestamp = (double)motionEvent->getEventTime() / 1000.0, ::uPtr< ::app::Fuse::Input::PointerEventData*>(collection_123)->PointerType = 2, ::uPtr< ::app::Fuse::Input::PointerEventData*>(collection_123)->IsPrimary = pointerId == 0, collection_123);
    }

    return pointerEventData;
}

void InputDispatch__RaiseCancel(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerEventData* data)
{
    InputDispatch__UnregisterPointer(NULL, ::uPtr< ::app::Fuse::Input::PointerEventData*>(data)->PointIndex);

    try
    {
        if (::app::Fuse::Input::Pointer__HardCapture(NULL, ::uPtr< ::app::Fuse::Input::PointerEventData*>(data)->PointIndex, node, InputDispatch___captureIdentiy, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)InputDispatch__LostCallback)))
        {
            ::app::Fuse::Input::Pointer__ReleaseHardCapture(NULL, ::uPtr< ::app::Fuse::Input::PointerEventData*>(data)->PointIndex);
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
        }
        else
        {
            throw __t;
        }
    }
}

void InputDispatch__RaiseEvent(::uStatic* __this, ::app::Fuse::Node* node, ::app::Android::android::view::View* view, ::app::Android::android::view::MotionEvent* motionEvent)
{
    int action = ::uPtr< ::app::Android::android::view::MotionEvent*>(motionEvent)->getActionMasked();
    ::uArray* data = InputDispatch__MakePointerEventData(NULL, node, view, motionEvent);

    switch (action)
    {
        case 3:
        {
            for (int i = 0; i < ::uPtr< ::uArray*>(data)->Length(); i++)
            {
                InputDispatch__RaiseCancel(NULL, node, ::uPtr< ::uArray*>(data)->Item< ::app::Fuse::Input::PointerEventData*>(i));
            }

            break;
        }
        case 0:
        case 5:
        {
            for (int i = 0; i < ::uPtr< ::uArray*>(data)->Length(); i++)
            {
                InputDispatch__RaisePressed(NULL, node, ::uPtr< ::uArray*>(data)->Item< ::app::Fuse::Input::PointerEventData*>(i));
            }

            break;
        }
        case 2:
        {
            for (int i = 0; i < ::uPtr< ::uArray*>(data)->Length(); i++)
            {
                InputDispatch__RaiseMoved(NULL, node, ::uPtr< ::uArray*>(data)->Item< ::app::Fuse::Input::PointerEventData*>(i));
            }

            break;
        }
        case 1:
        case 6:
        {
            {
                int pointerMask = ::app::Android::android::view::MotionEvent__get_ACTION_POINTER_INDEX_MASK(NULL);
                int pointerShit = ::app::Android::android::view::MotionEvent__get_ACTION_POINTER_INDEX_SHIFT(NULL);
                int pointerIndex = (::uPtr< ::app::Android::android::view::MotionEvent*>(motionEvent)->getAction() & pointerMask) >> pointerShit;
                InputDispatch__RaiseReleased(NULL, node, ::uPtr< ::uArray*>(data)->Item< ::app::Fuse::Input::PointerEventData*>(pointerIndex));
            }

            break;
        }
    }
}

void InputDispatch__RaiseMoved(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerEventData* data)
{
    try
    {
        ::app::Fuse::Input::Pointer__RaiseMoved(NULL, InputDispatch__FindRoot(NULL, node), data);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
        }
        else
        {
            throw __t;
        }
    }
}

void InputDispatch__RaisePressed(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerEventData* data)
{
    if (!InputDispatch__RegisterPointer(NULL, ::uPtr< ::app::Fuse::Input::PointerEventData*>(data)->PointIndex))
    {
        return;
    }

    try
    {
        ::app::Fuse::Input::Pointer__RaisePressed(NULL, InputDispatch__FindRoot(NULL, node), data);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
        }
        else
        {
            throw __t;
        }
    }
}

void InputDispatch__RaiseReleased(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerEventData* data)
{
    InputDispatch__UnregisterPointer(NULL, ::uPtr< ::app::Fuse::Input::PointerEventData*>(data)->PointIndex);

    try
    {
        ::app::Fuse::Input::Pointer__RaiseReleased(NULL, InputDispatch__FindRoot(NULL, node), data);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Fuse::AppBase__OnUnhandledExceptionInternal(NULL, e);
        }
        else
        {
            throw __t;
        }
    }
}

bool InputDispatch__RegisterPointer(::uStatic* __this, int pointerId)
{
    if (!::uPtr< ::app::Uno::Collections::HashSet__int*>(InputDispatch___activePointers)->Contains(pointerId))
    {
        ::uPtr< ::app::Uno::Collections::HashSet__int*>(InputDispatch___activePointers)->Add(pointerId);
        return true;
    }

    return false;
}

void InputDispatch__RemoveListener(::uStatic* __this, ::app::Fuse::Android::NativeView* nativeView)
{
    ::uPtr< ::app::Android::android::view::View*>(::uPtr< ::app::Fuse::Android::NativeView*>(nativeView)->Handle())->setOnTouchListener(NULL);
    ::uPtr< ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node*>(InputDispatch___listeners)->Remove(nativeView->Handle());
}

void InputDispatch__UnregisterPointer(::uStatic* __this, int pointerId)
{
    if (::uPtr< ::app::Uno::Collections::HashSet__int*>(InputDispatch___activePointers)->Contains(pointerId))
    {
        ::uPtr< ::app::Uno::Collections::HashSet__int*>(InputDispatch___activePointers)->Remove(pointerId);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass InputDispatch_TouchListener___javaClass_2;

InputDispatch_TouchListener__uType* InputDispatch_TouchListener__typeof()
{
    static ::uStaticStrong<InputDispatch_TouchListener__uType*> type;
    if (type != NULL) return type;

    type = (InputDispatch_TouchListener__uType*)::uAllocClassType(sizeof(InputDispatch_TouchListener__uType), "Fuse.Android.InputDispatch.TouchListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onTouch = (bool(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))InputDispatch_TouchListener__onTouch;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(InputDispatch_TouchListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(InputDispatch_TouchListener__uType, __interface_1),
        ::app::Android::android::view::ViewDLROnTouchListener__typeof(), offsetof(InputDispatch_TouchListener__uType, __interface_2));

    return type;
}

void InputDispatch_TouchListener___ObjInit_4(InputDispatch_TouchListener* __this)
{
    if (!__this->_subclassed)
    {
        __this->_subclassed = true;
        __this->_javaClassName = ::uGetConstString("com.Bindings.Binding_Fuse_Android_InputDispatch_TouchListener");
    }

    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);

    if (::app::Android::Base::Primitives::ujclass__op_Equality(NULL, InputDispatch_TouchListener___javaClass_2, ::app::Android::Base::Primitives::ujclass__get_Null(NULL)))
    {
        InputDispatch_TouchListener___javaClass_2 = ::app::Android::Base::JNI__LocalToGlobalRef(NULL, ::app::Android::Base::JNI__LoadClass_3(NULL, ::uGetConstString("com.Bindings.Binding_Fuse_Android_InputDispatch_TouchListener"), false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onTouch","(JLandroid/view/View;Landroid/view/MotionEvent;JJ)Z",Binding_Fuse_Android_InputDispatch_TouchListener__onTouch22729);
        COMMIT_REG_MTD(InputDispatch_TouchListener___javaClass_2);
    }

    jclass tmpCls = ::app::Android::Base::JNI__LoadClass_3(NULL, __this->_javaClassName, false);
    jmethodID mtd = ::app::Android::Base::JNI__GetMethodID(NULL, tmpCls, ::uGetConstString("<init>"), ::uGetConstString("(J)V"));
    jobject tmp = ::app::Android::Base::JNI__NewObject_1(NULL, tmpCls, mtd, ::app::Android::Base::Primitives::ujvalue__op_Implicit_16(NULL, (jlong)__this->__obj_weak));
    ::app::Android::Base::JNI__CheckException(NULL);
    __this->_javaObject = ::app::Android::Base::JNI__LocalToGlobalRef_1(NULL, tmp);
    ::app::Android::Base::JNI__DeleteLocalRef(NULL, tmpCls);
}

InputDispatch_TouchListener* InputDispatch_TouchListener__New_5(::uStatic* __this)
{
    InputDispatch_TouchListener* inst = (InputDispatch_TouchListener*)::uAllocObject(sizeof(InputDispatch_TouchListener), InputDispatch_TouchListener__typeof());
    inst->_ObjInit_4();
    return inst;
}

bool InputDispatch_TouchListener__onTouch(InputDispatch_TouchListener* __this, ::app::Android::android::view::View* view, ::app::Android::android::view::MotionEvent* motionEvent)
{
    ::app::Fuse::Node* node = ::app::Fuse::Android::InputDispatch__GetNode(NULL, view);

    if (node == NULL)
    {
        return false;
    }

    ::app::Fuse::Android::InputDispatch__RaiseEvent(NULL, node, view, motionEvent);
    return false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LeafView__uType* LeafView__typeof()
{
    static ::uStaticStrong<LeafView__uType*> type;
    if (type != NULL) return type;

    type = (LeafView__uType*)::uAllocClassType(sizeof(LeafView__uType), "Fuse.Android.LeafView", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Android::NativeView__typeof());
    type->__fp_CreateInternal = (::app::Android::android::view::View*(*)(::app::Fuse::Android::NativeView*))LeafView__CreateInternal;
    type->__fp_get_Size = (::app::Uno::Float2(*)(::app::Fuse::Android::NativeView*))LeafView__get_Size;

    type->SetFunctions(2,
        ::uNewFunction("get_View", LeafView__get_View, 0, false, ::app::Fuse::Android::View__typeof()),
        ::uNewFunction(".ctor", LeafView__New_1, 0, true, LeafView__typeof()));

    ::uRegisterType(type);
    return type;
}

void LeafView___ObjInit_2(LeafView* __this)
{
    ::app::Fuse::Android::NativeView___ObjInit_1(__this);
}

::app::Android::android::view::View* LeafView__CreateInternal(LeafView* __this)
{
    return ::uPtr< ::app::Fuse::Android::View*>(__this->View())->Create();
}

::app::Uno::Float2 LeafView__get_Size(LeafView* __this)
{
    return ::uPtr< ::app::Fuse::Android::View*>(__this->View())->ActualSize();
}

::app::Fuse::Android::View* LeafView__get_View(LeafView* __this)
{
    return ::uAs< ::app::Fuse::Android::View*>(__this->Node(), ::app::Fuse::Android::View__typeof());
}

LeafView* LeafView__New_1(::uStatic* __this)
{
    LeafView* inst = (LeafView*)::uAllocObject(sizeof(LeafView), LeafView__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MapView__uType* MapView__typeof()
{
    static ::uStaticStrong<MapView__uType*> type;
    if (type != NULL) return type;

    type = (MapView__uType*)::uAllocClassType(sizeof(MapView__uType), "Fuse.Android.MapView", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Android::ControlView__Fuse_Controls_MapView__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_MapView*))MapView__Attach;
    type->__fp_CreateInternal = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))MapView__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_MapView*))MapView__Detach;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(MapView__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", MapView__New_1, 0, true, MapView__typeof()));

    ::uRegisterType(type);
    return type;
}

void MapView___ObjInit_3(MapView* __this)
{
    ::app::Fuse::Android::ControlView__Fuse_Controls_MapView___ObjInit_2(__this);
}

void MapView__Attach(MapView* __this)
{
}

::app::Android::android::view::View* MapView__CreateInternal(MapView* __this)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Not implemented on this platform")));
}

void MapView__Detach(MapView* __this)
{
}

MapView* MapView__New_1(::uStatic* __this)
{
    MapView* inst = (MapView*)::uAllocObject(sizeof(MapView), MapView__typeof());
    inst->_ObjInit_3();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle__uType* NativeStyle__typeof()
{
    static ::uStaticStrong<NativeStyle__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle__uType*)::uAllocClassType(sizeof(NativeStyle__uType), "Fuse.Android.NativeStyle", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Style__typeof());

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle__uType, __interface_0));

    type->SetFunctions(2,
        ::uNewFunctionVoid("InitializeUX", NativeStyle__InitializeUX, 0, false),
        ::uNewFunction(".ctor", NativeStyle__New_2, 0, true, NativeStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeStyle___ObjInit_1(NativeStyle* __this)
{
    ::app::Fuse::Style___ObjInit(__this);
    __this->InitializeUX();
}

void NativeStyle__InitializeUX(NativeStyle* __this)
{
    ::app::Fuse::Android::NativeStyle_Template* collection_123;
    ::app::Fuse::Android::NativeTemplate* temp = ::app::Fuse::Android::NativeTemplate__New_1(NULL);
    collection_123 = ::app::Fuse::Android::NativeStyle_Template__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::Android::NativeStyle_Template*>(collection_123)->Cascade(true);
    collection_123->AffectSubtypes(true);
    ::app::Fuse::Android::NativeStyle_Template* temp1 = collection_123;
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(__this->Templates()), (::uObject*)temp1);
}

NativeStyle* NativeStyle__New_2(::uStatic* __this)
{
    NativeStyle* inst = (NativeStyle*)::uAllocObject(sizeof(NativeStyle), NativeStyle__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template__uType* NativeStyle_Template__typeof()
{
    static ::uStaticStrong<NativeStyle_Template__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template__uType*)::uAllocClassType(sizeof(NativeStyle_Template__uType), "Fuse.Android.NativeStyle.Template", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_GraphicsView__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_GraphicsView*, ::app::Fuse::Controls::GraphicsView*))NativeStyle_Template__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", NativeStyle_Template__New_1, 0, true, NativeStyle_Template__typeof(), ::app::Fuse::Android::NativeStyle__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeStyle_Template___ObjInit_1(NativeStyle_Template* __this, ::app::Fuse::Android::NativeStyle* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_GraphicsView___ObjInit(__this);
    __this->__parent = parent;
}

NativeStyle_Template* NativeStyle_Template__New_1(::uStatic* __this, ::app::Fuse::Android::NativeStyle* parent)
{
    NativeStyle_Template* inst = (NativeStyle_Template*)::uAllocObject(sizeof(NativeStyle_Template), NativeStyle_Template__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void NativeStyle_Template__OnApply(NativeStyle_Template* __this, ::app::Fuse::Controls::GraphicsView* self)
{
    ::app::Fuse::Android::NativeStyle_Template_Template1* collection_123;
    ::app::Fuse::Android::NativeStyle_Template_Template2* collection_124;
    ::app::Fuse::Android::NativeStyle_Template_Template3* collection_125;
    ::app::Fuse::Style* temp = ::app::Fuse::Style__New_1(NULL);
    collection_123 = ::app::Fuse::Android::NativeStyle_Template_Template1__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::Android::NativeStyle_Template_Template1*>(collection_123)->Cascade(true);
    collection_123->AffectSubtypes(true);
    ::app::Fuse::Android::NativeStyle_Template_Template1* temp1 = collection_123;
    collection_124 = ::app::Fuse::Android::NativeStyle_Template_Template2__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::Android::NativeStyle_Template_Template2*>(collection_124)->Cascade(true);
    collection_124->AffectSubtypes(true);
    ::app::Fuse::Android::NativeStyle_Template_Template2* temp2 = collection_124;
    collection_125 = ::app::Fuse::Android::NativeStyle_Template_Template3__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::Android::NativeStyle_Template_Template3*>(collection_125)->Cascade(true);
    collection_125->AffectSubtypes(true);
    ::app::Fuse::Android::NativeStyle_Template_Template3* temp3 = collection_125;
    ::app::Fuse::Controls::Graphics::GraphicsStyle* temp4 = ::app::Fuse::Controls::Graphics::GraphicsStyle__New_2(NULL);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Style*>(temp)->Templates()), (::uObject*)temp1);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(temp->Templates()), (::uObject*)temp2);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(temp->Templates()), (::uObject*)temp3);
    ::uPtr< ::app::Fuse::Controls::GraphicsView*>(self)->AddStyleStyle(temp);
    self->AddStyleStyle((::app::Fuse::Style*)temp4);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template1__uType* NativeStyle_Template_Template1__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template1__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template1__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template1__uType), "Fuse.Android.NativeStyle.Template.Template1", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_TextBlock__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_TextBlock*, ::app::Fuse::Controls::TextBlock*))NativeStyle_Template_Template1__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template_Template1__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template1, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", NativeStyle_Template_Template1__New_1, 0, true, NativeStyle_Template_Template1__typeof(), ::app::Fuse::Android::NativeStyle_Template__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeStyle_Template_Template1___ObjInit_1(NativeStyle_Template_Template1* __this, ::app::Fuse::Android::NativeStyle_Template* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_TextBlock___ObjInit(__this);
    __this->__parent = parent;
}

NativeStyle_Template_Template1* NativeStyle_Template_Template1__New_1(::uStatic* __this, ::app::Fuse::Android::NativeStyle_Template* parent)
{
    NativeStyle_Template_Template1* inst = (NativeStyle_Template_Template1*)::uAllocObject(sizeof(NativeStyle_Template_Template1), NativeStyle_Template_Template1__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void NativeStyle_Template_Template1__OnApply(NativeStyle_Template_Template1* __this, ::app::Fuse::Controls::TextBlock* self)
{
    ::app::Fuse::Android::TextRenderer* temp = ::app::Fuse::Android::TextRenderer__New_1(NULL);
    ::uPtr< ::app::Fuse::Controls::TextBlock*>(self)->AddStyleChild((::app::Fuse::Node*)temp);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template2__uType* NativeStyle_Template_Template2__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template2__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template2__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template2__uType), "Fuse.Android.NativeStyle.Template.Template2", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_NativeViewHost__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_NativeViewHost*, ::app::Fuse::Controls::NativeViewHost*))NativeStyle_Template_Template2__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template_Template2__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template2, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", NativeStyle_Template_Template2__New_1, 0, true, NativeStyle_Template_Template2__typeof(), ::app::Fuse::Android::NativeStyle_Template__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeStyle_Template_Template2___ObjInit_1(NativeStyle_Template_Template2* __this, ::app::Fuse::Android::NativeStyle_Template* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_NativeViewHost___ObjInit(__this);
    __this->__parent = parent;
}

NativeStyle_Template_Template2* NativeStyle_Template_Template2__New_1(::uStatic* __this, ::app::Fuse::Android::NativeStyle_Template* parent)
{
    NativeStyle_Template_Template2* inst = (NativeStyle_Template_Template2*)::uAllocObject(sizeof(NativeStyle_Template_Template2), NativeStyle_Template_Template2__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void NativeStyle_Template_Template2__OnApply(NativeStyle_Template_Template2* __this, ::app::Fuse::Controls::NativeViewHost* self)
{
    ::app::Fuse::Android::NativeViewHost* temp = ::app::Fuse::Android::NativeViewHost__New_1(NULL);
    ::uPtr< ::app::Fuse::Controls::NativeViewHost*>(self)->AddStyleBehavior((::app::Fuse::Behavior*)temp);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template3__uType* NativeStyle_Template_Template3__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template3__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template3__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template3__uType), "Fuse.Android.NativeStyle.Template.Template3", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit*, ::app::Fuse::Controls::PlainTextEdit*))NativeStyle_Template_Template3__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeStyle_Template_Template3__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template3, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", NativeStyle_Template_Template3__New_1, 0, true, NativeStyle_Template_Template3__typeof(), ::app::Fuse::Android::NativeStyle_Template__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeStyle_Template_Template3___ObjInit_1(NativeStyle_Template_Template3* __this, ::app::Fuse::Android::NativeStyle_Template* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit___ObjInit(__this);
    __this->__parent = parent;
}

NativeStyle_Template_Template3* NativeStyle_Template_Template3__New_1(::uStatic* __this, ::app::Fuse::Android::NativeStyle_Template* parent)
{
    NativeStyle_Template_Template3* inst = (NativeStyle_Template_Template3*)::uAllocObject(sizeof(NativeStyle_Template_Template3), NativeStyle_Template_Template3__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void NativeStyle_Template_Template3__OnApply(NativeStyle_Template_Template3* __this, ::app::Fuse::Controls::PlainTextEdit* self)
{
    ::app::Fuse::Android::NativeStyle_Template_Template3_Factory* temp = ::app::Fuse::Android::NativeStyle_Template_Template3_Factory__New_2(NULL, __this);
    ::app::Fuse::Android::NativeStyle_Template_Template3_Factory1* temp1 = ::app::Fuse::Android::NativeStyle_Template_Template3_Factory1__New_2(NULL, __this);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*>(::app::Fuse::Controls::PlainTextEdit__NativeEditProperty)->SetStyle(self, (::uObject*)temp);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*>(::app::Fuse::Controls::PlainTextEdit__NativeTextProperty)->SetStyle(self, (::uObject*)temp1);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template3_Factory__uType* NativeStyle_Template_Template3_Factory__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template3_Factory__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template3_Factory__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template3_Factory__uType), "Fuse.Android.NativeStyle.Template.Template3.Factory", false, 1, 1, 0);

    type->__interface_0.__fp_New_1 = (::uObject*(*)(void*))NativeStyle_Template_Template3_Factory__New_1;

    type->SetInterfaces(
        ::app::Uno::UX::IFactory__typeof(), offsetof(NativeStyle_Template_Template3_Factory__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template3_Factory, __parent));

    type->SetFunctions(2,
        ::uNewFunction("New", NativeStyle_Template_Template3_Factory__New_1, 0, false, ::uObject__typeof()),
        ::uNewFunction(".ctor", NativeStyle_Template_Template3_Factory__New_2, 0, true, NativeStyle_Template_Template3_Factory__typeof(), ::app::Fuse::Android::NativeStyle_Template_Template3__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeStyle_Template_Template3_Factory___ObjInit(NativeStyle_Template_Template3_Factory* __this, ::app::Fuse::Android::NativeStyle_Template_Template3* parent)
{
    __this->__parent = parent;
}

::uObject* NativeStyle_Template_Template3_Factory__New_1(NativeStyle_Template_Template3_Factory* __this)
{
    ::app::Fuse::Android::PlainTextEdit* self = ::app::Fuse::Android::PlainTextEdit__New_2(NULL);
    return (::uObject*)self;
}

NativeStyle_Template_Template3_Factory* NativeStyle_Template_Template3_Factory__New_2(::uStatic* __this, ::app::Fuse::Android::NativeStyle_Template_Template3* parent)
{
    NativeStyle_Template_Template3_Factory* inst = (NativeStyle_Template_Template3_Factory*)::uAllocObject(sizeof(NativeStyle_Template_Template3_Factory), NativeStyle_Template_Template3_Factory__typeof());
    inst->_ObjInit(parent);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeStyle_Template_Template3_Factory1__uType* NativeStyle_Template_Template3_Factory1__typeof()
{
    static ::uStaticStrong<NativeStyle_Template_Template3_Factory1__uType*> type;
    if (type != NULL) return type;

    type = (NativeStyle_Template_Template3_Factory1__uType*)::uAllocClassType(sizeof(NativeStyle_Template_Template3_Factory1__uType), "Fuse.Android.NativeStyle.Template.Template3.Factory1", false, 1, 1, 0);

    type->__interface_0.__fp_New_1 = (::uObject*(*)(void*))NativeStyle_Template_Template3_Factory1__New_1;

    type->SetInterfaces(
        ::app::Uno::UX::IFactory__typeof(), offsetof(NativeStyle_Template_Template3_Factory1__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(NativeStyle_Template_Template3_Factory1, __parent));

    type->SetFunctions(2,
        ::uNewFunction("New", NativeStyle_Template_Template3_Factory1__New_1, 0, false, ::uObject__typeof()),
        ::uNewFunction(".ctor", NativeStyle_Template_Template3_Factory1__New_2, 0, true, NativeStyle_Template_Template3_Factory1__typeof(), ::app::Fuse::Android::NativeStyle_Template_Template3__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeStyle_Template_Template3_Factory1___ObjInit(NativeStyle_Template_Template3_Factory1* __this, ::app::Fuse::Android::NativeStyle_Template_Template3* parent)
{
    __this->__parent = parent;
}

::uObject* NativeStyle_Template_Template3_Factory1__New_1(NativeStyle_Template_Template3_Factory1* __this)
{
    ::app::Fuse::Android::TextRenderer* self = ::app::Fuse::Android::TextRenderer__New_1(NULL);
    return (::uObject*)self;
}

NativeStyle_Template_Template3_Factory1* NativeStyle_Template_Template3_Factory1__New_2(::uStatic* __this, ::app::Fuse::Android::NativeStyle_Template_Template3* parent)
{
    NativeStyle_Template_Template3_Factory1* inst = (NativeStyle_Template_Template3_Factory1*)::uAllocObject(sizeof(NativeStyle_Template_Template3_Factory1), NativeStyle_Template_Template3_Factory1__typeof());
    inst->_ObjInit(parent);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeTemplate__uType* NativeTemplate__typeof()
{
    static ::uStaticStrong<NativeTemplate__uType*> type;
    if (type != NULL) return type;

    type = (NativeTemplate__uType*)::uAllocClassType(sizeof(NativeTemplate__uType), "Fuse.Android.NativeTemplate", false, 1, 0, 0);

    type->__interface_0.__fp_Apply = (bool(*)(void*, ::uObject*))NativeTemplate__Apply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(NativeTemplate__uType, __interface_0));

    type->SetFunctions(4,
        ::uNewFunction("Apply", NativeTemplate__Apply, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunction("HasGraphicsView", NativeTemplate__HasGraphicsView, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("HaveGraphicsViewAncestor", NativeTemplate__HaveGraphicsViewAncestor, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", NativeTemplate__New_1, 0, true, NativeTemplate__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeTemplate___ObjInit(NativeTemplate* __this)
{
}

bool NativeTemplate__Apply(NativeTemplate* __this, ::uObject* obj)
{
    ::app::Fuse::Controls::Panel* panel = ::uAs< ::app::Fuse::Controls::Panel*>(obj, ::app::Fuse::Controls::Panel__typeof());

    if ((panel != NULL) && !__this->HaveGraphicsViewAncestor((::app::Fuse::Node*)panel))
    {
        ::uPtr< ::app::Fuse::Controls::Panel*>(panel)->AddStyleBehavior((::app::Fuse::Behavior*)::app::Fuse::Android::RelativeLayout__New_1(NULL));

        if (::uIs(panel, ::app::Fuse::Controls::Button__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::Android::Button__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::Switch__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::Android::Switch__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::TextInput__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::Android::TextEdit__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::TextBlock__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::Android::TextView__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::Slider__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::Android::SeekBar__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::Image__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::Android::Image__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::Rectangle__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::Android::Rectangle__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::Circle__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::Android::Circle__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::WebView__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::Android::WebView__New_1(NULL));
        }

        if (::uIs(panel, ::app::Fuse::Controls::MapView__typeof()))
        {
            panel->AddStyleChild((::app::Fuse::Node*)::app::Fuse::Android::MapView__New_1(NULL));
        }
    }

    ::app::Fuse::Controls::ContentControl* contentControl = ::uAs< ::app::Fuse::Controls::ContentControl*>(obj, ::app::Fuse::Controls::ContentControl__typeof());

    if ((contentControl != NULL) && !__this->HaveGraphicsViewAncestor((::app::Fuse::Node*)contentControl))
    {
        if (::uIs(contentControl, ::app::Fuse::Controls::GraphicsView__typeof()))
        {
            ::uPtr< ::app::Fuse::Controls::ContentControl*>(contentControl)->AddStyleBehavior((::app::Fuse::Behavior*)::app::Fuse::Android::SurfaceView__New_1(NULL));
        }
        else if (::uIs(contentControl, ::app::Fuse::Controls::ScrollView__typeof()))
        {
            contentControl->AddStyleBehavior((::app::Fuse::Behavior*)::app::Fuse::Android::ScrollView__New_1(NULL));
        }
        else
        {
            contentControl->AddStyleBehavior((::app::Fuse::Behavior*)::app::Fuse::Android::ContentControl__New_1(NULL));
        }
    }

    return true;
}

bool NativeTemplate__HasGraphicsView(NativeTemplate* __this, ::app::Fuse::Node* node)
{
    return (node != NULL) ? (::uAs< ::app::Fuse::Android::GraphicsView*>(::app::Fuse::Android::NativeView__GetFrom(NULL, node), ::app::Fuse::Android::GraphicsView__typeof()) != NULL) : false;
}

bool NativeTemplate__HaveGraphicsViewAncestor(NativeTemplate* __this, ::app::Fuse::Node* node)
{
    if (::uPtr< ::app::Fuse::Node*>(node)->Parent() == NULL)
    {
        return false;
    }

    if (::uIs(::uPtr< ::app::Fuse::Node*>(node)->Parent(), ::app::Fuse::Controls::GraphicsView__typeof()))
    {
        return true;
    }

    return __this->HaveGraphicsViewAncestor(::uPtr< ::app::Fuse::Node*>(node)->Parent());
}

NativeTemplate* NativeTemplate__New_1(::uStatic* __this)
{
    NativeTemplate* inst = (NativeTemplate*)::uAllocObject(sizeof(NativeTemplate), NativeTemplate__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> NativeView___viewHandle;

NativeView__uType* NativeView__typeof()
{
    static ::uStaticStrong<NativeView__uType*> type;
    if (type != NULL) return type;

    type = (NativeView__uType*)::uAllocClassType(sizeof(NativeView__uType), "Fuse.Android.NativeView", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_ChildRooted = NativeView__ChildRooted;
    type->__fp_ChildUnrooted = NativeView__ChildUnrooted;
    type->__fp_get_Parent = NativeView__get_Parent;
    type->__fp_get_Transform = NativeView__get_Transform;
    type->__fp_NotifyNewSize = NativeView__NotifyNewSize;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))NativeView__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))NativeView__OnUnrooted;

    type->SetStrongRefs(
        "_node", offsetof(NativeView, _node),
        "_parentCache", offsetof(NativeView, _parentCache),
        "_view", offsetof(NativeView, _view));

    type->SetFields(9,
        ::uNewField("_node", NULL, offsetof(NativeView, _node), ::app::Fuse::Node__typeof()),
        ::uNewField("_oldPos", NULL, offsetof(NativeView, _oldPos), ::app::Uno::Float2__typeof()),
        ::uNewField("_oldScale", NULL, offsetof(NativeView, _oldScale), ::app::Uno::Float2__typeof()),
        ::uNewField("_oldSize", NULL, offsetof(NativeView, _oldSize), ::app::Uno::Float2__typeof()),
        ::uNewField("_parentCache", NULL, offsetof(NativeView, _parentCache), NativeView__typeof()),
        ::uNewField("_rotation", NULL, offsetof(NativeView, _rotation), ::app::Uno::Float__typeof()),
        ::uNewField("_updatingTransform", NULL, offsetof(NativeView, _updatingTransform), ::app::Uno::Bool__typeof()),
        ::uNewField("_view", NULL, offsetof(NativeView, _view), ::app::Android::android::view::View__typeof()),
        ::uNewField("_viewHandle", &NativeView___viewHandle, 0, ::app::Fuse::PropertyHandle__typeof()));

    type->SetFunctions(24,
        ::uNewFunctionVoid("CancelNotifyNewTransform", NativeView__CancelNotifyNewTransform, 0, false),
        ::uNewFunctionVoid("ChildRooted", type->__fp_ChildRooted, offsetof(NativeView__uType, __fp_ChildRooted), false, NativeView__typeof()),
        ::uNewFunctionVoid("ChildUnrooted", type->__fp_ChildUnrooted, offsetof(NativeView__uType, __fp_ChildUnrooted), false, NativeView__typeof()),
        ::uNewFunction("Create", NativeView__Create, 0, false, ::app::Android::android::view::View__typeof()),
        ::uNewFunction("CreateInternal", type->__fp_CreateInternal, offsetof(NativeView__uType, __fp_CreateInternal), false, ::app::Android::android::view::View__typeof()),
        ::uNewFunction("get_Handle", NativeView__get_Handle, 0, false, ::app::Android::android::view::View__typeof()),
        ::uNewFunction("get_Node", NativeView__get_Node, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_Parent", type->__fp_get_Parent, offsetof(NativeView__uType, __fp_get_Parent), false, NativeView__typeof()),
        ::uNewFunction("get_Size", type->__fp_get_Size, offsetof(NativeView__uType, __fp_get_Size), false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Transform", type->__fp_get_Transform, offsetof(NativeView__uType, __fp_get_Transform), false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("GetFrom", NativeView__GetFrom, 0, true, NativeView__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("HookEvents", NativeView__HookEvents, 0, false),
        ::uNewFunctionVoid("NotifyNewSize", type->__fp_NotifyNewSize, offsetof(NativeView__uType, __fp_NotifyNewSize), false, NativeView__typeof()),
        ::uNewFunctionVoid("NotifyNewTransform", NativeView__NotifyNewTransform, 0, false),
        ::uNewFunctionVoid("OnIsEnabledChanged", NativeView__OnIsEnabledChanged, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("OnPlaced", NativeView__OnPlaced, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnPropertyChanged", NativeView__OnPropertyChanged, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnTransformsChanged", NativeView__OnTransformsChanged, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("RootNativeView", NativeView__RootNativeView, 0, false),
        ::uNewFunctionVoid("set_Handle", NativeView__set_Handle, 0, false, ::app::Android::android::view::View__typeof()),
        ::uNewFunctionVoid("set_Node", NativeView__set_Node, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("UnhookEvents", NativeView__UnhookEvents, 0, false),
        ::uNewFunctionVoid("UnrootNativeView", NativeView__UnrootNativeView, 0, false),
        ::uNewFunctionVoid("UpdateTransform", NativeView__UpdateTransform, 0, false));

    ::uRegisterType(type);
    return type;
}

void NativeView___ObjInit_1(NativeView* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

void NativeView___TypeInit(::uStatic* __this)
{
    NativeView___viewHandle = ::app::Fuse::Properties__CreateHandle(NULL);
}

void NativeView__CancelNotifyNewTransform(NativeView* __this)
{
    if (__this->_updatingTransform)
    {
        ::app::Fuse::UpdateManager__RemoveOnceAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)NativeView__UpdateTransform, __this), 4);
        __this->_updatingTransform = false;
    }
}

void NativeView__ChildRooted(NativeView* __this, NativeView* child)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" does not support child views"))));
}

void NativeView__ChildUnrooted(NativeView* __this, NativeView* child)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" does not support child views"))));
}

::app::Android::android::view::View* NativeView__Create(NativeView* __this)
{
    return __this->CreateInternal();
}

::app::Android::android::view::View* NativeView__get_Handle(NativeView* __this)
{
    return __this->_view;
}

::app::Fuse::Node* NativeView__get_Node(NativeView* __this)
{
    return __this->_node;
}

NativeView* NativeView__get_Parent(NativeView* __this)
{
    NativeView* p = NativeView__GetFrom(NULL, ::uPtr< ::app::Fuse::Node*>(__this->_node)->Parent());

    if (p != NULL)
    {
        __this->_parentCache = p;
    }

    return (p != NULL) ? p : __this->_parentCache;
}

::app::Uno::Float4x4 NativeView__get_Transform(NativeView* __this)
{
    return ::uPtr< ::app::Fuse::Node*>(__this->Node())->LocalTransform();
}

NativeView* NativeView__GetFrom(::uStatic* __this, ::app::Fuse::Node* node)
{
    return (node != NULL) ? ::uAs< NativeView*>(::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->Get(NativeView___viewHandle), NativeView__typeof()) : NULL;
}

void NativeView__HookEvents(NativeView* __this)
{
    if (::uIs(__this->Node(), ::app::Fuse::Elements::Element__typeof()))
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(::uCast< ::app::Fuse::Elements::Element*>(__this->Node(), ::app::Fuse::Elements::Element__typeof()))->add_Placed(::uNewDelegateNonVirt(::app::Fuse::PlacedHandler__typeof(), (const void*)NativeView__OnPlaced, __this));
        ::uPtr< ::app::Fuse::Elements::Element*>(::uCast< ::app::Fuse::Elements::Element*>(__this->Node(), ::app::Fuse::Elements::Element__typeof()))->add_PropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)NativeView__OnPropertyChanged, __this));
        __this->OnPropertyChanged(NULL, NULL);
    }

    ::uPtr< ::app::Fuse::Node*>(__this->Node())->add_IsEnabledChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)NativeView__OnIsEnabledChanged, __this));
    ::uPtr< ::app::Fuse::Node*>(__this->Node())->add_TransformsChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)NativeView__OnTransformsChanged, __this));
    __this->OnIsEnabledChanged(NULL, NULL);
}

void NativeView__NotifyNewSize(NativeView* __this, NativeView* child)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this, ::uGetConstString(" does not support child views"))));
}

void NativeView__NotifyNewTransform(NativeView* __this)
{
    if (!__this->_updatingTransform)
    {
        ::app::Fuse::UpdateManager__AddOnceAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)NativeView__UpdateTransform, __this), 4);
        __this->_updatingTransform = true;
    }
}

void NativeView__OnIsEnabledChanged(NativeView* __this, ::uObject* s, ::uObject* a)
{
    ::uPtr< ::app::Android::android::view::View*>(__this->Handle())->setEnabled(::uPtr< ::app::Fuse::Node*>(__this->Node())->IsEnabled());
}

void NativeView__OnPlaced(NativeView* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->NotifyNewTransform();
}

void NativeView__OnPropertyChanged(NativeView* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::app::Fuse::Elements::Element* elm = ::uCast< ::app::Fuse::Elements::Element*>(__this->Node(), ::app::Fuse::Elements::Element__typeof());
    ::uPtr< ::app::Android::android::view::View*>(__this->Handle())->setAlpha(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Opacity());

    if (::uIs(__this->Handle(), ::app::Android::android::view::ViewGroup__typeof()))
    {
        ::uPtr< ::app::Android::android::view::ViewGroup*>(::uCast< ::app::Android::android::view::ViewGroup*>(__this->Handle(), ::app::Android::android::view::ViewGroup__typeof()))->setClipChildren(elm->ClipToBounds());
    }
}

void NativeView__OnRooted(NativeView* __this, ::app::Fuse::Node* n)
{
    __this->Node(n);
    __this->Handle(__this->Create());
    __this->HookEvents();
    __this->RootNativeView();
    __this->NotifyNewTransform();
    ::app::Fuse::Android::InputDispatch__AddListener(NULL, __this);
}

void NativeView__OnTransformsChanged(NativeView* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->NotifyNewTransform();
}

void NativeView__OnUnrooted(NativeView* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Android::InputDispatch__RemoveListener(NULL, __this);
    __this->CancelNotifyNewTransform();
    __this->UnrootNativeView();
    __this->UnhookEvents();
    __this->Node(NULL);
    __this->Handle(NULL);
    __this->_parentCache = NULL;
}

void NativeView__RootNativeView(NativeView* __this)
{
    if (::uIs(::uPtr< ::app::Fuse::Node*>(__this->Node())->Parent(), ::app::Fuse::RootViewport__typeof()))
    {
        ::app::Fuse::Android::RootView__SetRoot(NULL, __this);
    }
    else if (__this->Parent() == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, (::uObject*)__this->Node(), ::uGetConstString(" must have a native parent view. Theme provides no native view for parent type ")), (::uObject*)::uPtr< ::app::Fuse::Node*>(__this->Node())->Parent())));
    }
    else
    {
        ::uPtr< NativeView*>(__this->Parent())->ChildRooted(__this);
    }
}

void NativeView__set_Handle(NativeView* __this, ::app::Android::android::view::View* value)
{
    __this->_view = value;
}

void NativeView__set_Node(NativeView* __this, ::app::Fuse::Node* value)
{
    if (__this->_node != NULL)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Properties())->Clear(NativeView___viewHandle);
    }

    __this->_node = value;

    if (__this->_node != NULL)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Properties())->Set(NativeView___viewHandle, (::uObject*)__this);
    }
}

void NativeView__UnhookEvents(NativeView* __this)
{
    if (::uIs(__this->Node(), ::app::Fuse::Elements::Element__typeof()))
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(::uCast< ::app::Fuse::Elements::Element*>(__this->Node(), ::app::Fuse::Elements::Element__typeof()))->remove_Placed(::uNewDelegateNonVirt(::app::Fuse::PlacedHandler__typeof(), (const void*)NativeView__OnPlaced, __this));
        ::uPtr< ::app::Fuse::Elements::Element*>(::uCast< ::app::Fuse::Elements::Element*>(__this->Node(), ::app::Fuse::Elements::Element__typeof()))->remove_PropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)NativeView__OnPropertyChanged, __this));
    }

    ::uPtr< ::app::Fuse::Node*>(__this->Node())->remove_IsEnabledChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)NativeView__OnIsEnabledChanged, __this));
    ::uPtr< ::app::Fuse::Node*>(__this->Node())->remove_TransformsChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)NativeView__OnTransformsChanged, __this));
}

void NativeView__UnrootNativeView(NativeView* __this)
{
    if (::uIs(::uPtr< ::app::Fuse::Node*>(__this->Node())->Parent(), ::app::Fuse::RootViewport__typeof()))
    {
        ::app::Fuse::Android::RootView__ClearRoot(NULL);
    }
    else if (__this->Parent() != NULL)
    {
        ::uPtr< NativeView*>(__this->Parent())->ChildUnrooted(__this);
    }
}

void NativeView__UpdateTransform(NativeView* __this)
{
    if (__this->Node() == NULL)
    {
        return;
    }

    __this->_updatingTransform = false;
    ::app::Uno::Float4x4 t = __this->Transform();
    ::app::Uno::Float3 scale = ::app::Uno::Float3();
    ::app::Uno::Float4 rotation = ::app::Uno::Float4();
    ::app::Uno::Float3 translation = ::app::Uno::Float3();
    ::app::Uno::Matrix__Decompose(NULL, t, &scale, &rotation, &translation);

    if (::app::Uno::Float2__op_Inequality(NULL, ::app::Uno::Float2__New_2(NULL, scale.X, scale.Y), __this->_oldScale))
    {
        ::uPtr< ::app::Android::android::view::View*>(__this->_view)->setScaleX(scale.X);
        ::uPtr< ::app::Android::android::view::View*>(__this->_view)->setScaleY(scale.Y);
        __this->_oldScale = ::app::Uno::Float2__New_2(NULL, scale.X, scale.Y);
    }

    ::app::Uno::Float3 r = ::app::Uno::Quaternion__ToEulerAngleDegrees(NULL, rotation);

    if (__this->_rotation != r.Z)
    {
        __this->_rotation = r.Z;
        ::uPtr< ::app::Android::android::view::View*>(__this->_view)->setRotation(__this->_rotation);
    }

    float density = ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Node())->Viewport()));
    float x = translation.X;
    float y = translation.Y;
    ::app::Fuse::Controls::ScrollView* sv = ::uAs< ::app::Fuse::Controls::ScrollView*>(::uPtr< ::app::Fuse::Node*>(__this->Node())->Parent(), ::app::Fuse::Controls::ScrollView__typeof());

    if (sv != NULL)
    {
        x = x + ::uPtr< ::app::Fuse::Controls::ScrollView*>(sv)->ScrollPosition().X;
        y = y + sv->ScrollPosition().Y;
    }

    ::app::Uno::Float2 pos = ::app::Uno::Float2__New_2(NULL, x * density, y * density);

    if (::app::Uno::Vector__Distance(NULL, pos, __this->_oldPos) > 0.1f)
    {
        ::uPtr< ::app::Android::android::view::View*>(__this->_view)->setTranslationX(pos.X);
        ::uPtr< ::app::Android::android::view::View*>(__this->_view)->setTranslationY(pos.Y);
        __this->_oldPos = pos;
    }

    if (::app::Uno::Float2__op_Inequality(NULL, __this->Size(), __this->_oldSize))
    {
        if (__this->Parent() != NULL)
        {
            ::uPtr< NativeView*>(__this->Parent())->NotifyNewSize(__this);
        }
        else if (::app::Fuse::Android::RootView__IsRoot(NULL, __this))
        {
            ::app::Fuse::Android::RootView__UpdateSize(NULL, __this->Size());
        }

        __this->_oldSize = __this->Size();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeViewHost__uType* NativeViewHost__typeof()
{
    static ::uStaticStrong<NativeViewHost__uType*> type;
    if (type != NULL) return type;

    type = (NativeViewHost__uType*)::uAllocClassType(sizeof(NativeViewHost__uType), "Fuse.Android.NativeViewHost", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Android::ParentView__Fuse_Controls_NativeViewHost__typeof());
    type->__fp_ChildRooted = (void(*)(::app::Fuse::Android::NativeView*, ::app::Fuse::Android::NativeView*))NativeViewHost__ChildRooted;
    type->__fp_ChildUnrooted = (void(*)(::app::Fuse::Android::NativeView*, ::app::Fuse::Android::NativeView*))NativeViewHost__ChildUnrooted;
    type->__fp_CreateInternal = (::app::Android::android::view::View*(*)(::app::Fuse::Android::NativeView*))NativeViewHost__CreateInternal;
    type->__fp_get_Parent = (::app::Fuse::Android::NativeView*(*)(::app::Fuse::Android::NativeView*))NativeViewHost__get_Parent;
    type->__fp_get_Transform = (::app::Uno::Float4x4(*)(::app::Fuse::Android::NativeView*))NativeViewHost__get_Transform;
    type->__fp_NotifyNewSize = (void(*)(::app::Fuse::Android::NativeView*, ::app::Fuse::Android::NativeView*))NativeViewHost__NotifyNewSize;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))NativeViewHost__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))NativeViewHost__OnUnrooted;

    type->SetStrongRefs(
        "_relativeLayout", offsetof(NativeViewHost, _relativeLayout));

    type->SetFields(1,
        ::uNewField("_relativeLayout", NULL, offsetof(NativeViewHost, _relativeLayout), ::app::Android::android::widget::RelativeLayout__typeof()));

    type->SetFunctions(2,
        ::uNewFunction(".ctor", NativeViewHost__New_1, 0, true, NativeViewHost__typeof()),
        ::uNewFunctionVoid("Update", NativeViewHost__Update, 0, false));

    ::uRegisterType(type);
    return type;
}

void NativeViewHost___ObjInit_3(NativeViewHost* __this)
{
    ::app::Fuse::Android::ParentView__Fuse_Controls_NativeViewHost___ObjInit_2(__this);
}

void NativeViewHost__ChildRooted(NativeViewHost* __this, ::app::Fuse::Android::NativeView* child)
{
    __this->NotifyNewSize(child);
    ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->addView_1(::uPtr< ::app::Fuse::Android::NativeView*>(child)->Handle(), 0);
}

void NativeViewHost__ChildUnrooted(NativeViewHost* __this, ::app::Fuse::Android::NativeView* child)
{
    ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->removeView(::uPtr< ::app::Fuse::Android::NativeView*>(child)->Handle());
}

::app::Android::android::view::View* NativeViewHost__CreateInternal(NativeViewHost* __this)
{
    if (::app::Android::java::lang::Object__op_Equality_1(NULL, (::app::Android::java::lang::Object*)__this->_relativeLayout, NULL))
    {
        __this->_relativeLayout = ::app::Android::android::widget::RelativeLayout__New_9(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));
        ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->setLayoutParams((::app::Android::android::view::ViewGroupDLRLayoutParams*)::app::Android::android::widget::RelativeLayoutDLRLayoutParams__New_15(NULL, -1, -1));
    }

    return (::app::Android::android::view::View*)__this->_relativeLayout;
}

::app::Fuse::Android::NativeView* NativeViewHost__get_Parent(NativeViewHost* __this)
{
    return (::app::Fuse::Android::NativeView*)((__this->Node() != NULL) ? ::app::Fuse::Android::GraphicsView__Find(NULL, ::uPtr< ::app::Fuse::Node*>(__this->Node())->Parent()) : NULL);
}

::app::Uno::Float4x4 NativeViewHost__get_Transform(NativeViewHost* __this)
{
    return ::app::Uno::Matrix__Mul_8(NULL, ::app::Uno::Matrix__Invert_2(NULL, ::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::Android::NativeView*>(__this->Parent())->Node())->LocalTransform()), ::uPtr< ::app::Fuse::Node*>(__this->Node())->WorldTransform());
}

NativeViewHost* NativeViewHost__New_1(::uStatic* __this)
{
    NativeViewHost* inst = (NativeViewHost*)::uAllocObject(sizeof(NativeViewHost), NativeViewHost__typeof());
    inst->_ObjInit_3();
    return inst;
}

void NativeViewHost__NotifyNewSize(NativeViewHost* __this, ::app::Fuse::Android::NativeView* child)
{
    if ((__this->Node() == NULL) || !::uPtr< ::app::Fuse::Node*>(__this->Node())->IsLocalRooted())
    {
        return;
    }

    float density = ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Node())->Viewport()));
    int w = (int)(::uPtr< ::app::Fuse::Android::NativeView*>(child)->Size().X * density);
    int h = (int)(child->Size().Y * density);
    ::app::Android::android::widget::RelativeLayoutDLRLayoutParams* layoutParams = ::app::Android::android::widget::RelativeLayoutDLRLayoutParams__New_15(NULL, w, h);
    ::uPtr< ::app::Android::android::view::View*>(child->Handle())->setLayoutParams((::app::Android::android::view::ViewGroupDLRLayoutParams*)layoutParams);
    ::uPtr< ::app::Android::android::view::View*>(child->Handle())->invalidate();
}

void NativeViewHost__OnRooted(NativeViewHost* __this, ::app::Fuse::Node* node)
{
    ::app::Fuse::Android::ParentView__Fuse_Controls_NativeViewHost__OnRooted(__this, node);
    ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)NativeViewHost__Update, __this), 0);
}

void NativeViewHost__OnUnrooted(NativeViewHost* __this, ::app::Fuse::Node* node)
{
    ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)NativeViewHost__Update, __this), 0);
    ::app::Fuse::Android::ParentView__Fuse_Controls_NativeViewHost__OnUnrooted(__this, node);
}

void NativeViewHost__Update(NativeViewHost* __this)
{
    __this->NotifyNewTransform();
    ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->setLayoutParams((::app::Android::android::view::ViewGroupDLRLayoutParams*)::app::Android::android::widget::RelativeLayoutDLRLayoutParams__New_15(NULL, -1, -1));
    ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->invalidate();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PlainTextEdit__uType* PlainTextEdit__typeof()
{
    static ::uStaticStrong<PlainTextEdit__uType*> type;
    if (type != NULL) return type;

    type = (PlainTextEdit__uType*)::uAllocClassType(sizeof(PlainTextEdit__uType), "Fuse.Android.PlainTextEdit", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Android::TextEdit__typeof());
    type->__fp_get_Plain = (bool(*)(::app::Fuse::Android::TextEdit*))PlainTextEdit__get_Plain;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(PlainTextEdit__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", PlainTextEdit__New_2, 0, true, PlainTextEdit__typeof()));

    ::uRegisterType(type);
    return type;
}

void PlainTextEdit___ObjInit_5(PlainTextEdit* __this)
{
    ::app::Fuse::Android::TextEdit___ObjInit_4(__this);
}

bool PlainTextEdit__get_Plain(PlainTextEdit* __this)
{
    return true;
}

PlainTextEdit* PlainTextEdit__New_2(::uStatic* __this)
{
    PlainTextEdit* inst = (PlainTextEdit*)::uAllocObject(sizeof(PlainTextEdit), PlainTextEdit__typeof());
    inst->_ObjInit_5();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ProgressChangedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Android.ProgressChangedHandler", 3);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::Int__typeof(),
        ::app::Uno::Bool__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ProgressChangedListener___javaClass_2;

ProgressChangedListener__uType* ProgressChangedListener__typeof()
{
    static ::uStaticStrong<ProgressChangedListener__uType*> type;
    if (type != NULL) return type;

    type = (ProgressChangedListener__uType*)::uAllocClassType(sizeof(ProgressChangedListener__uType), "Fuse.Android.ProgressChangedListener", false, 3, 2, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onProgressChanged = (void(*)(void*, ::app::Android::android::widget::SeekBar*, int, bool))ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onProgressChanged;
    type->__interface_2.__fp_onStartTrackingTouch = (void(*)(void*, ::app::Android::android::widget::SeekBar*))ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onStartTrackingTouch;
    type->__interface_2.__fp_onStopTrackingTouch = (void(*)(void*, ::app::Android::android::widget::SeekBar*))ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onStopTrackingTouch;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ProgressChangedListener__Uno_IDisposable_Dispose_1;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ProgressChangedListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ProgressChangedListener__uType, __interface_1),
        ::app::Android::android::widget::SeekBarDLROnSeekBarChangeListener__typeof(), offsetof(ProgressChangedListener__uType, __interface_2));

    type->SetStrongRefs(
        "_handler", offsetof(ProgressChangedListener, _handler),
        "_seekBar", offsetof(ProgressChangedListener, _seekBar));

    type->SetFields(3,
        ::uNewField("_handler", NULL, offsetof(ProgressChangedListener, _handler), ::app::Fuse::Android::ProgressChangedHandler__typeof()),
        ::uNewField("_javaClass", &ProgressChangedListener___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("_seekBar", NULL, offsetof(ProgressChangedListener, _seekBar), ::app::Android::android::widget::SeekBar__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("AddHandler", ProgressChangedListener__AddHandler, 0, true, ::app::Uno::IDisposable__typeof(), ::app::Android::android::widget::SeekBar__typeof(), ::app::Fuse::Android::ProgressChangedHandler__typeof()),
        ::uNewFunctionVoid("Android.android.widget.SeekBarDLROnSeekBarChangeListener.onProgressChanged", ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onProgressChanged, 0, false, ::app::Android::android::widget::SeekBar__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Android.android.widget.SeekBarDLROnSeekBarChangeListener.onStartTrackingTouch", ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onStartTrackingTouch, 0, false, ::app::Android::android::widget::SeekBar__typeof()),
        ::uNewFunctionVoid("Android.android.widget.SeekBarDLROnSeekBarChangeListener.onStopTrackingTouch", ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onStopTrackingTouch, 0, false, ::app::Android::android::widget::SeekBar__typeof()),
        ::uNewFunctionVoid("Uno.IDisposable.Dispose", ProgressChangedListener__Uno_IDisposable_Dispose_1, 0, false));

    ::uRegisterType(type);
    return type;
}

void ProgressChangedListener___ObjInit_4(ProgressChangedListener* __this, ::app::Android::android::widget::SeekBar* seekBar, ::uDelegate* handler)
{
    if (!__this->_subclassed)
    {
        __this->_subclassed = true;
        __this->_javaClassName = ::uGetConstString("com.Bindings.Binding_Fuse_Android_ProgressChangedListener");
    }

    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);

    if (::app::Android::Base::Primitives::ujclass__op_Equality(NULL, ProgressChangedListener___javaClass_2, ::app::Android::Base::Primitives::ujclass__get_Null(NULL)))
    {
        ProgressChangedListener___javaClass_2 = ::app::Android::Base::JNI__LocalToGlobalRef(NULL, ::app::Android::Base::JNI__LoadClass_3(NULL, ::uGetConstString("com.Bindings.Binding_Fuse_Android_ProgressChangedListener"), false));
        JniHelper jni;
        BEGIN_REG_MTD(3);
        REG_MTD(0,"__n_onProgressChanged","(JLandroid/widget/SeekBar;IZJJJ)V",Binding_Fuse_Android_ProgressChangedListener__onProgressChanged26181);
        REG_MTD(1,"__n_onStartTrackingTouch","(JLandroid/widget/SeekBar;J)V",Binding_Fuse_Android_ProgressChangedListener__onStartTrackingTouch26182);
        REG_MTD(2,"__n_onStopTrackingTouch","(JLandroid/widget/SeekBar;J)V",Binding_Fuse_Android_ProgressChangedListener__onStopTrackingTouch26183);
        COMMIT_REG_MTD(ProgressChangedListener___javaClass_2);
    }

    jclass tmpCls = ::app::Android::Base::JNI__LoadClass_3(NULL, __this->_javaClassName, false);
    jmethodID mtd = ::app::Android::Base::JNI__GetMethodID(NULL, tmpCls, ::uGetConstString("<init>"), ::uGetConstString("(J)V"));
    jobject tmp = ::app::Android::Base::JNI__NewObject_1(NULL, tmpCls, mtd, ::app::Android::Base::Primitives::ujvalue__op_Implicit_16(NULL, (jlong)__this->__obj_weak));
    ::app::Android::Base::JNI__CheckException(NULL);
    __this->_javaObject = ::app::Android::Base::JNI__LocalToGlobalRef_1(NULL, tmp);
    ::app::Android::Base::JNI__DeleteLocalRef(NULL, tmpCls);
    __this->_seekBar = seekBar;
    __this->_handler = handler;
    ::uPtr< ::app::Android::android::widget::SeekBar*>(__this->_seekBar)->setOnSeekBarChangeListener((::uObject*)__this);
}

::uObject* ProgressChangedListener__AddHandler(::uStatic* __this, ::app::Android::android::widget::SeekBar* seekBar, ::uDelegate* handler)
{
    return (::uObject*)ProgressChangedListener__New_5(NULL, seekBar, handler);
}

void ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onProgressChanged(ProgressChangedListener* __this, ::app::Android::android::widget::SeekBar* seekBar, int value, bool fromUser)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_handler, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_handler)->InvokeVoid< ::uObject*, int, bool>((::uObject*)seekBar, value, fromUser);
    }
}

void ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onStartTrackingTouch(ProgressChangedListener* __this, ::app::Android::android::widget::SeekBar* sb)
{
}

void ProgressChangedListener__Android_android_widget_SeekBarDLROnSeekBarChangeListener_onStopTrackingTouch(ProgressChangedListener* __this, ::app::Android::android::widget::SeekBar* sb)
{
}

ProgressChangedListener* ProgressChangedListener__New_5(::uStatic* __this, ::app::Android::android::widget::SeekBar* seekBar, ::uDelegate* handler)
{
    ProgressChangedListener* inst = (ProgressChangedListener*)::uAllocObject(sizeof(ProgressChangedListener), ProgressChangedListener__typeof());
    inst->_ObjInit_4(seekBar, handler);
    return inst;
}

void ProgressChangedListener__Uno_IDisposable_Dispose_1(ProgressChangedListener* __this)
{
    ::uPtr< ::app::Android::android::widget::SeekBar*>(__this->_seekBar)->setOnSeekBarChangeListener(NULL);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RadioButton__uType* RadioButton__typeof()
{
    static ::uStaticStrong<RadioButton__uType*> type;
    if (type != NULL) return type;

    type = (RadioButton__uType*)::uAllocClassType(sizeof(RadioButton__uType), "Fuse.Android.RadioButton", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Android::CompoundButton__typeof());
    type->__fp_CreateCompoundButton = (::app::Android::android::widget::CompoundButton*(*)(::app::Fuse::Android::CompoundButton*))RadioButton__CreateCompoundButton;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(RadioButton__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", RadioButton__New_1, 0, true, RadioButton__typeof()));

    ::uRegisterType(type);
    return type;
}

void RadioButton___ObjInit_4(RadioButton* __this)
{
    ::app::Fuse::Android::CompoundButton___ObjInit_3(__this);
}

::app::Android::android::widget::CompoundButton* RadioButton__CreateCompoundButton(RadioButton* __this)
{
    return (::app::Android::android::widget::CompoundButton*)::app::Android::android::widget::Switch__New_17(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));
}

RadioButton* RadioButton__New_1(::uStatic* __this)
{
    RadioButton* inst = (RadioButton*)::uAllocObject(sizeof(RadioButton), RadioButton__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Rectangle__uType* Rectangle__typeof()
{
    static ::uStaticStrong<Rectangle__uType*> type;
    if (type != NULL) return type;

    type = (Rectangle__uType*)::uAllocClassType(sizeof(Rectangle__uType), "Fuse.Android.Rectangle", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Android::Shape__Fuse_Controls_Rectangle__typeof());
    type->__fp_Detach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_Rectangle*))Rectangle__Detach;
    type->__fp_UpdateShapeDrawable = (void(*)(::app::Fuse::Android::Shape__Fuse_Controls_Rectangle*, ::app::Android::android::graphics::drawable::ShapeDrawable*))Rectangle__UpdateShapeDrawable;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Rectangle__uType, __interface_0));

    type->SetStrongRefs(
        "_cornerArray", offsetof(Rectangle, _cornerArray));

    type->SetFields(1,
        ::uNewField("_cornerArray", NULL, offsetof(Rectangle, _cornerArray), ::app::Android::Runtime::FloatArray__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Rectangle__New_1, 0, true, Rectangle__typeof()));

    ::uRegisterType(type);
    return type;
}

void Rectangle___ObjInit_4(Rectangle* __this)
{
    ::app::Fuse::Android::Shape__Fuse_Controls_Rectangle___ObjInit_3(__this);
}

void Rectangle__Detach(Rectangle* __this)
{
    __this->_cornerArray = NULL;
    ::app::Fuse::Android::Shape__Fuse_Controls_Rectangle__Detach(__this);
}

Rectangle* Rectangle__New_1(::uStatic* __this)
{
    Rectangle* inst = (Rectangle*)::uAllocObject(sizeof(Rectangle), Rectangle__typeof());
    inst->_ObjInit_4();
    return inst;
}

void Rectangle__UpdateShapeDrawable(Rectangle* __this, ::app::Android::android::graphics::drawable::ShapeDrawable* shape)
{
    float ind_123 = float();
    float ind_124 = float();
    float ind_125 = float();
    float ind_126 = float();
    float density = ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->Control())->PointDensity();
    ::app::Uno::Float4 cr = ::app::Uno::Float4__op_Multiply_1(NULL, ::uPtr< ::app::Fuse::Controls::Rectangle*>(__this->Control())->CornerRadius(), density);

    if (::app::Android::java::lang::Object__op_Equality_1(NULL, (::app::Android::java::lang::Object*)__this->_cornerArray, NULL))
    {
        __this->_cornerArray = ::app::Android::Runtime::FloatArray__New_5(NULL, 8);
    }

    ::app::Android::Runtime::FloatArray* r = __this->_cornerArray;
    ::uPtr< ::app::Android::Runtime::FloatArray*>(r)->Item(0, (ind_123 = cr.X, ::uPtr< ::app::Android::Runtime::FloatArray*>(r)->Item(1, ind_123), ind_123));
    r->Item(2, (ind_124 = cr.Y, r->Item(3, ind_124), ind_124));
    r->Item(4, (ind_125 = cr.Z, r->Item(5, ind_125), ind_125));
    r->Item(6, (ind_126 = cr.W, r->Item(7, ind_126), ind_126));
    ::app::Android::android::graphics::drawable::shapes::RoundRectShape* rrs = ::app::Android::android::graphics::drawable::shapes::RoundRectShape__New_7(NULL, r, NULL, NULL);
    ::uPtr< ::app::Android::android::graphics::drawable::ShapeDrawable*>(shape)->setShape((::app::Android::android::graphics::drawable::shapes::Shape*)rrs);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RelativeLayout__uType* RelativeLayout__typeof()
{
    static ::uStaticStrong<RelativeLayout__uType*> type;
    if (type != NULL) return type;

    type = (RelativeLayout__uType*)::uAllocClassType(sizeof(RelativeLayout__uType), "Fuse.Android.RelativeLayout", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Android::ParentView__Fuse_Controls_Panel__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Android::ParentView__Fuse_Controls_Panel*))RelativeLayout__Attach;
    type->__fp_ChildRooted = (void(*)(::app::Fuse::Android::NativeView*, ::app::Fuse::Android::NativeView*))RelativeLayout__ChildRooted;
    type->__fp_ChildUnrooted = (void(*)(::app::Fuse::Android::NativeView*, ::app::Fuse::Android::NativeView*))RelativeLayout__ChildUnrooted;
    type->__fp_CreateInternal = (::app::Android::android::view::View*(*)(::app::Fuse::Android::NativeView*))RelativeLayout__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::Android::ParentView__Fuse_Controls_Panel*))RelativeLayout__Detach;
    type->__fp_NotifyNewSize = (void(*)(::app::Fuse::Android::NativeView*, ::app::Fuse::Android::NativeView*))RelativeLayout__NotifyNewSize;

    type->SetStrongRefs(
        "_relativeLayout", offsetof(RelativeLayout, _relativeLayout));

    type->SetFields(1,
        ::uNewField("_relativeLayout", NULL, offsetof(RelativeLayout, _relativeLayout), ::app::Android::android::widget::RelativeLayout__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("ApplyZOrder", RelativeLayout__ApplyZOrder, 0, false),
        ::uNewFunction(".ctor", RelativeLayout__New_1, 0, true, RelativeLayout__typeof()),
        ::uNewFunctionVoid("OnZOrderChanged", RelativeLayout__OnZOrderChanged, 0, false, ::uObject__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void RelativeLayout___ObjInit_3(RelativeLayout* __this)
{
    ::app::Fuse::Android::ParentView__Fuse_Controls_Panel___ObjInit_2(__this);
}

void RelativeLayout__ApplyZOrder(RelativeLayout* __this)
{
    if (__this->Control() == NULL)
    {
        return;
    }

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(__this->Control())->Children())); ++i)
    {
        ::app::Fuse::Android::NativeView* child = ::app::Fuse::Android::NativeView__GetFrom(NULL, ::uPtr< ::app::Fuse::Controls::Panel*>(__this->Control())->GetZOrderChild(i));

        if (child != NULL)
        {
            ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->bringChildToFront(::uPtr< ::app::Fuse::Android::NativeView*>(child)->Handle());
        }
    }
}

void RelativeLayout__Attach(RelativeLayout* __this)
{
    ::app::Fuse::Android::ParentView__Fuse_Controls_Panel__Attach(__this);
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->Control())->add_ZOrderChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)RelativeLayout__OnZOrderChanged, __this));
}

void RelativeLayout__ChildRooted(RelativeLayout* __this, ::app::Fuse::Android::NativeView* child)
{
    __this->NotifyNewSize(child);
    ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->addView_1(::uPtr< ::app::Fuse::Android::NativeView*>(child)->Handle(), 0);
    __this->ApplyZOrder();
}

void RelativeLayout__ChildUnrooted(RelativeLayout* __this, ::app::Fuse::Android::NativeView* child)
{
    ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->removeView(::uPtr< ::app::Fuse::Android::NativeView*>(child)->Handle());
}

::app::Android::android::view::View* RelativeLayout__CreateInternal(RelativeLayout* __this)
{
    __this->_relativeLayout = ::app::Android::android::widget::RelativeLayout__New_9(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));
    ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->setLayoutParams((::app::Android::android::view::ViewGroupDLRLayoutParams*)::app::Android::android::widget::RelativeLayoutDLRLayoutParams__New_15(NULL, -1, -1));
    return (::app::Android::android::view::View*)__this->_relativeLayout;
}

void RelativeLayout__Detach(RelativeLayout* __this)
{
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->Control())->remove_ZOrderChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)RelativeLayout__OnZOrderChanged, __this));
    ::app::Fuse::Android::ParentView__Fuse_Controls_Panel__Detach(__this);
}

RelativeLayout* RelativeLayout__New_1(::uStatic* __this)
{
    RelativeLayout* inst = (RelativeLayout*)::uAllocObject(sizeof(RelativeLayout), RelativeLayout__typeof());
    inst->_ObjInit_3();
    return inst;
}

void RelativeLayout__NotifyNewSize(RelativeLayout* __this, ::app::Fuse::Android::NativeView* child)
{
    if ((__this->Node() == NULL) || !::uPtr< ::app::Fuse::Node*>(__this->Node())->IsLocalRooted())
    {
        return;
    }

    float density = ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Node())->Viewport()));
    int w = (int)(::uPtr< ::app::Fuse::Android::NativeView*>(child)->Size().X * density);
    int h = (int)(child->Size().Y * density);
    ::app::Android::android::widget::RelativeLayoutDLRLayoutParams* layoutParams = ::app::Android::android::widget::RelativeLayoutDLRLayoutParams__New_15(NULL, w, h);
    ::uPtr< ::app::Android::android::view::View*>(child->Handle())->setLayoutParams((::app::Android::android::view::ViewGroupDLRLayoutParams*)layoutParams);
    ::uPtr< ::app::Android::android::view::View*>(child->Handle())->invalidate();
}

void RelativeLayout__OnZOrderChanged(RelativeLayout* __this, ::uObject* s, ::uObject* a)
{
    __this->ApplyZOrder();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< RootView*> RootView___singleton;

RootView__uType* RootView__typeof()
{
    static ::uStaticStrong<RootView__uType*> type;
    if (type != NULL) return type;

    type = (RootView__uType*)::uAllocClassType(sizeof(RootView__uType), "Fuse.Android.RootView", false, 0, 2, 0);

    type->SetStrongRefs(
        "_relativeLayout", offsetof(RootView, _relativeLayout),
        "_root", offsetof(RootView, _root));

    type->SetFields(3,
        ::uNewField("_relativeLayout", NULL, offsetof(RootView, _relativeLayout), ::app::Android::android::widget::RelativeLayout__typeof()),
        ::uNewField("_root", NULL, offsetof(RootView, _root), ::app::Fuse::Android::NativeView__typeof()),
        ::uNewField("_singleton", &RootView___singleton, 0, RootView__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("ClearRoot", RootView__ClearRoot, 0, true),
        ::uNewFunction("get_Root", RootView__get_Root, 0, false, ::app::Fuse::Android::NativeView__typeof()),
        ::uNewFunction("get_Singleton", RootView__get_Singleton, 0, true, RootView__typeof()),
        ::uNewFunctionVoid("Invalidate", RootView__Invalidate, 0, false),
        ::uNewFunction("IsRoot", RootView__IsRoot, 0, true, ::app::Uno::Bool__typeof(), ::app::Fuse::Android::NativeView__typeof()),
        ::uNewFunctionVoid("set_Root", RootView__set_Root, 0, false, ::app::Fuse::Android::NativeView__typeof()),
        ::uNewFunctionVoid("SetRoot", RootView__SetRoot, 0, true, ::app::Fuse::Android::NativeView__typeof()),
        ::uNewFunctionVoid("UpdateRootSize", RootView__UpdateRootSize, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("UpdateSize", RootView__UpdateSize, 0, true, ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void RootView___ObjInit(RootView* __this)
{
    __this->_relativeLayout = (::app::Android::android::widget::RelativeLayout*)::app::Fuse::Android::RootViewContainer__New_13(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));
    ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->setLayoutParams((::app::Android::android::view::ViewGroupDLRLayoutParams*)::app::Android::android::widget::RelativeLayoutDLRLayoutParams__New_15(NULL, ::app::Android::android::view::ViewGroupDLRLayoutParams__get_FILL_PARENT(NULL), ::app::Android::android::view::ViewGroupDLRLayoutParams__get_FILL_PARENT(NULL)));
    ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->setFocusable(true);
    ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->setFocusableInTouchMode(true);
    ::app::Uno::Platform2::Application__set_RootView(NULL, ::app::Fuse::Android::BindingView__GetNativeViewHandle(NULL, (::app::Android::android::view::View*)__this->_relativeLayout));
}

void RootView__ClearRoot(::uStatic* __this)
{
    ::uPtr< RootView*>(RootView__get_Singleton(NULL))->Root(NULL);
}

::app::Fuse::Android::NativeView* RootView__get_Root(RootView* __this)
{
    return __this->_root;
}

RootView* RootView__get_Singleton(::uStatic* __this)
{
    RootView* ind_123 = RootView___singleton;
    return (ind_123 != NULL) ? ind_123 : (RootView___singleton = RootView__New_1(NULL));
}

void RootView__Invalidate(RootView* __this)
{
    if (__this->Root() != NULL)
    {
        ::uPtr< ::app::Android::android::view::View*>(::uPtr< ::app::Fuse::Android::NativeView*>(__this->Root())->Handle())->invalidate();
    }

    ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->invalidate();
}

bool RootView__IsRoot(::uStatic* __this, ::app::Fuse::Android::NativeView* view)
{
    return ::uPtr< RootView*>(RootView__get_Singleton(NULL))->Root() == view;
}

RootView* RootView__New_1(::uStatic* __this)
{
    RootView* inst = (RootView*)::uAllocObject(sizeof(RootView), RootView__typeof());
    inst->_ObjInit();
    return inst;
}

void RootView__set_Root(RootView* __this, ::app::Fuse::Android::NativeView* value)
{
    if (__this->_root != NULL)
    {
        ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->removeView(::uPtr< ::app::Fuse::Android::NativeView*>(__this->_root)->Handle());
    }

    __this->_root = value;

    if (__this->_root != NULL)
    {
        ::uPtr< ::app::Android::android::widget::RelativeLayout*>(__this->_relativeLayout)->addView(::uPtr< ::app::Fuse::Android::NativeView*>(__this->_root)->Handle());
        __this->Invalidate();
    }
}

void RootView__SetRoot(::uStatic* __this, ::app::Fuse::Android::NativeView* view)
{
    if (::uPtr< RootView*>(RootView__get_Singleton(NULL))->Root() != NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("A rootview is already set")));
    }

    ::uPtr< RootView*>(RootView__get_Singleton(NULL))->Root(view);
}

void RootView__UpdateRootSize(RootView* __this, ::app::Uno::Float2 size)
{
    if (__this->Root() != NULL)
    {
        float density = ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::Android::NativeView*>(__this->Root())->Node())->Viewport()));
        ::app::Uno::Float2 pixelSize = ::app::Uno::Float2__op_Multiply_1(NULL, size, density);
        ::uPtr< ::app::Android::android::view::View*>(::uPtr< ::app::Fuse::Android::NativeView*>(__this->Root())->Handle())->setLayoutParams((::app::Android::android::view::ViewGroupDLRLayoutParams*)::app::Android::android::widget::RelativeLayoutDLRLayoutParams__New_15(NULL, (int)pixelSize.X, (int)pixelSize.Y));
    }
}

void RootView__UpdateSize(::uStatic* __this, ::app::Uno::Float2 size)
{
    ::uPtr< RootView*>(RootView__get_Singleton(NULL))->UpdateRootSize(size);
    ::uPtr< RootView*>(RootView__get_Singleton(NULL))->Invalidate();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass RootViewContainer___javaClass_5;

RootViewContainer__uType* RootViewContainer__typeof()
{
    static ::uStaticStrong<RootViewContainer__uType*> type;
    if (type != NULL) return type;

    type = (RootViewContainer__uType*)::uAllocClassType(sizeof(RootViewContainer__uType), "Fuse.Android.RootViewContainer", false, 3, 1, 0);

    type->SetBaseType(::app::Android::android::widget::RelativeLayout__typeof());
    type->__fp_onInterceptTouchEvent = (bool(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::MotionEvent*))RootViewContainer__onInterceptTouchEvent;
    type->__fp_onTouchEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))RootViewContainer__onTouchEvent;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(RootViewContainer__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(RootViewContainer__uType, __interface_1),
        ::app::Android::android::view::ViewParent__typeof(), offsetof(RootViewContainer__uType, __interface_2));

    type->SetStrongRefs(
        "_currentEvent", offsetof(RootViewContainer, _currentEvent));

    type->SetFields(2,
        ::uNewField("_currentEvent", NULL, offsetof(RootViewContainer, _currentEvent), ::app::Android::android::view::MotionEvent__typeof()),
        ::uNewField("_javaClass", &RootViewContainer___javaClass_5, 0, ::app::Android::Base::Primitives::ujclass__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_RootNode", RootViewContainer__get_RootNode, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("LostCallback", RootViewContainer__LostCallback, 0, false),
        ::uNewFunction(".ctor", RootViewContainer__New_13, 0, true, RootViewContainer__typeof(), ::app::Android::android::content::Context__typeof()));

    ::uRegisterType(type);
    return type;
}

void RootViewContainer___ObjInit_16(RootViewContainer* __this, ::app::Android::android::content::Context* context)
{
    if (!__this->_subclassed)
    {
        __this->_subclassed = true;
        __this->_javaClassName = ::uGetConstString("com.Bindings.Binding_Fuse_Android_RootViewContainer");
    }

    ::app::Android::android::widget::RelativeLayout___ObjInit_15(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);

    if (::app::Android::Base::Primitives::ujclass__op_Equality(NULL, RootViewContainer___javaClass_5, ::app::Android::Base::Primitives::ujclass__get_Null(NULL)))
    {
        RootViewContainer___javaClass_5 = ::app::Android::Base::JNI__LocalToGlobalRef(NULL, ::app::Android::Base::JNI__LoadClass_3(NULL, ::uGetConstString("com.Bindings.Binding_Fuse_Android_RootViewContainer"), false));
        JniHelper jni;
        BEGIN_REG_MTD(2);
        REG_MTD(0,"__n_onInterceptTouchEvent","(JLandroid/view/MotionEvent;J)Z",Binding_Fuse_Android_RootViewContainer__onInterceptTouchEvent23409);
        REG_MTD(1,"__n_onTouchEvent","(JLandroid/view/MotionEvent;J)Z",Binding_Fuse_Android_RootViewContainer__onTouchEvent22991);
        COMMIT_REG_MTD(RootViewContainer___javaClass_5);
    }

    jclass tmpCls = ::app::Android::Base::JNI__LoadClass_3(NULL, __this->_javaClassName, false);
    jmethodID mtd = ::app::Android::Base::JNI__GetMethodID(NULL, tmpCls, ::uGetConstString("<init>"), ::uGetConstString("(JLandroid/content/Context;)V"));
    jobject tmp = ::app::Android::Base::JNI__NewObject_2(NULL, tmpCls, mtd, ::app::Android::Base::Primitives::ujvalue__op_Implicit_16(NULL, (jlong)__this->__obj_weak), ::app::Android::Base::Primitives::ujvalue__op_Implicit_17(NULL, ::uPtr< ::app::Android::android::content::Context*>(context)->_GetJavaObject()));
    ::app::Android::Base::JNI__CheckException(NULL);
    __this->_javaObject = ::app::Android::Base::JNI__LocalToGlobalRef_1(NULL, tmp);
    ::app::Android::Base::JNI__DeleteLocalRef(NULL, tmpCls);
}

::app::Fuse::Node* RootViewContainer__get_RootNode(RootViewContainer* __this)
{
    ::app::Fuse::AppBase* app = ::uAs< ::app::Fuse::AppBase*>(::app::Uno::Application__get_Current(NULL), ::app::Fuse::AppBase__typeof());

    if (app == NULL)
    {
        return NULL;
    }

    return ::uPtr< ::app::Fuse::AppBase*>(app)->RootNode();
}

void RootViewContainer__LostCallback(RootViewContainer* __this)
{
}

RootViewContainer* RootViewContainer__New_13(::uStatic* __this, ::app::Android::android::content::Context* context)
{
    RootViewContainer* inst = (RootViewContainer*)::uAllocObject(sizeof(RootViewContainer), RootViewContainer__typeof());
    inst->_ObjInit_16(context);
    return inst;
}

bool RootViewContainer__onInterceptTouchEvent(RootViewContainer* __this, ::app::Android::android::view::MotionEvent* motionEvent)
{
    __this->_currentEvent = motionEvent;
    return ::app::Android::android::view::ViewGroup__onInterceptTouchEvent(__this, motionEvent);
}

bool RootViewContainer__onTouchEvent(RootViewContainer* __this, ::app::Android::android::view::MotionEvent* motionEvent)
{
    if (::app::Android::java::lang::Object__op_Inequality_1(NULL, (::app::Android::java::lang::Object*)__this->_currentEvent, (::app::Android::java::lang::Object*)motionEvent))
    {
        return false;
    }

    bool result = ::app::Android::android::view::View__onTouchEvent(__this, motionEvent);
    ::app::Fuse::Node* node = __this->RootNode();

    if (node == NULL)
    {
        return false;
    }

    ::app::Fuse::Android::InputDispatch__RaiseEvent(NULL, node, (::app::Android::android::view::View*)__this, motionEvent);
    return ::app::Android::java::lang::Object__op_Equality_1(NULL, (::app::Android::java::lang::Object*)__this->_currentEvent, (::app::Android::java::lang::Object*)motionEvent);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ScrollView__uType* ScrollView__typeof()
{
    static ::uStaticStrong<ScrollView__uType*> type;
    if (type != NULL) return type;

    type = (ScrollView__uType*)::uAllocClassType(sizeof(ScrollView__uType), "Fuse.Android.ScrollView", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Android::ParentView__Fuse_Controls_ScrollView__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Android::ParentView__Fuse_Controls_ScrollView*))ScrollView__Attach;
    type->__fp_ChildRooted = (void(*)(::app::Fuse::Android::NativeView*, ::app::Fuse::Android::NativeView*))ScrollView__ChildRooted;
    type->__fp_ChildUnrooted = (void(*)(::app::Fuse::Android::NativeView*, ::app::Fuse::Android::NativeView*))ScrollView__ChildUnrooted;
    type->__fp_CreateInternal = (::app::Android::android::view::View*(*)(::app::Fuse::Android::NativeView*))ScrollView__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::Android::ParentView__Fuse_Controls_ScrollView*))ScrollView__Detach;
    type->__fp_NotifyNewSize = (void(*)(::app::Fuse::Android::NativeView*, ::app::Fuse::Android::NativeView*))ScrollView__NotifyNewSize;

    type->SetStrongRefs(
        "_scrollView", offsetof(ScrollView, _scrollView));

    type->SetFields(1,
        ::uNewField("_scrollView", NULL, offsetof(ScrollView, _scrollView), ::app::Android::android::widget::FrameLayout__typeof()));

    type->SetFunctions(4,
        ::uNewFunction(".ctor", ScrollView__New_1, 0, true, ScrollView__typeof()),
        ::uNewFunctionVoid("OnScrollChanged", ScrollView__OnScrollChanged, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("OnScrollPropertyChanged", ScrollView__OnScrollPropertyChanged, 0, false),
        ::uNewFunctionVoid("OnScrollPropertyChanged", ScrollView__OnScrollPropertyChanged_1, 0, false, ::uObject__typeof(), ::app::Fuse::Controls::ScrollPropertyChangedArgs__typeof()));

    ::uRegisterType(type);
    return type;
}

void ScrollView___ObjInit_3(ScrollView* __this)
{
    ::app::Fuse::Android::ParentView__Fuse_Controls_ScrollView___ObjInit_2(__this);
}

void ScrollView__Attach(ScrollView* __this)
{
    ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Control())->add_ScrollPropertyChanged(::uNewDelegateNonVirt(::app::Fuse::Controls::ScrollPropertyChangedHandler__typeof(), (const void*)ScrollView__OnScrollPropertyChanged_1, __this));
    __this->OnScrollPropertyChanged();
}

void ScrollView__ChildRooted(ScrollView* __this, ::app::Fuse::Android::NativeView* child)
{
    __this->NotifyNewSize(child);
    ::uPtr< ::app::Android::android::widget::FrameLayout*>(__this->_scrollView)->addView(::uPtr< ::app::Fuse::Android::NativeView*>(child)->Handle());
}

void ScrollView__ChildUnrooted(ScrollView* __this, ::app::Fuse::Android::NativeView* child)
{
    ::uPtr< ::app::Android::android::widget::FrameLayout*>(__this->_scrollView)->removeView(::uPtr< ::app::Fuse::Android::NativeView*>(child)->Handle());
}

::app::Android::android::view::View* ScrollView__CreateInternal(ScrollView* __this)
{
    if (::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Control())->AllowedScrollDirections() == 12)
    {
        __this->_scrollView = (::app::Android::android::widget::FrameLayout*)::app::Fuse::Android::VerticalScrollView__New_17(NULL, __this);
    }
    else if (::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Control())->AllowedScrollDirections() == 3)
    {
        __this->_scrollView = (::app::Android::android::widget::FrameLayout*)::app::Fuse::Android::HorizontalScrollView__New_17(NULL, __this);
    }
    else
    {
        __this->_scrollView = ::app::Android::android::widget::FrameLayout__New_9(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));
    }

    return (::app::Android::android::view::View*)__this->_scrollView;
}

void ScrollView__Detach(ScrollView* __this)
{
    ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Control())->remove_ScrollPropertyChanged(::uNewDelegateNonVirt(::app::Fuse::Controls::ScrollPropertyChangedHandler__typeof(), (const void*)ScrollView__OnScrollPropertyChanged_1, __this));
}

ScrollView* ScrollView__New_1(::uStatic* __this)
{
    ScrollView* inst = (ScrollView*)::uAllocObject(sizeof(ScrollView), ScrollView__typeof());
    inst->_ObjInit_3();
    return inst;
}

void ScrollView__NotifyNewSize(ScrollView* __this, ::app::Fuse::Android::NativeView* child)
{
    float density = ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Node())->Viewport()));
    int w = (int)(::uPtr< ::app::Fuse::Android::NativeView*>(child)->Size().X * density);
    int h = (int)(child->Size().Y * density);
    ::app::Android::android::widget::FrameLayoutDLRLayoutParams* layoutParams = ::app::Android::android::widget::FrameLayoutDLRLayoutParams__New_16(NULL, w, h);
    ::uPtr< ::app::Android::android::view::View*>(child->Handle())->setLayoutParams((::app::Android::android::view::ViewGroupDLRLayoutParams*)layoutParams);
    ::uPtr< ::app::Android::android::view::View*>(child->Handle())->invalidate();
}

void ScrollView__OnScrollChanged(ScrollView* __this, int x, int y)
{
    ::app::Uno::Float2 p = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)x, (float)y), ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Control())->Viewport())));
    ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Control())->SetScrollPosition(p, (::uObject*)__this);
}

void ScrollView__OnScrollPropertyChanged(ScrollView* __this)
{
    ::app::Uno::Int2 p = ::app::Uno::Int2__op_Explicit(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Control())->ScrollPosition(), ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Control())->Viewport()))));
    ::uPtr< ::app::Android::android::widget::FrameLayout*>(__this->_scrollView)->setScrollX(p.X);
    ::uPtr< ::app::Android::android::widget::FrameLayout*>(__this->_scrollView)->setScrollY(p.Y);
}

void ScrollView__OnScrollPropertyChanged_1(ScrollView* __this, ::uObject* sender, ::app::Fuse::Controls::ScrollPropertyChangedArgs* args)
{
    if (::uPtr< ::app::Fuse::Controls::ScrollPropertyChangedArgs*>(args)->Origin() == __this)
    {
        return;
    }

    __this->OnScrollPropertyChanged();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SeekBar__uType* SeekBar__typeof()
{
    static ::uStaticStrong<SeekBar__uType*> type;
    if (type != NULL) return type;

    type = (SeekBar__uType*)::uAllocClassType(sizeof(SeekBar__uType), "Fuse.Android.SeekBar", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Android::ControlView__Fuse_Controls_Slider__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_Slider*))SeekBar__Attach;
    type->__fp_CreateInternal = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))SeekBar__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_Slider*))SeekBar__Detach;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(SeekBar__uType, __interface_0));

    type->SetStrongRefs(
        "_progressChangedEvent", offsetof(SeekBar, _progressChangedEvent),
        "_seekBar", offsetof(SeekBar, _seekBar));

    type->SetFields(3,
        ::uNewField("_index", NULL, offsetof(SeekBar, _index), ::app::Uno::Int__typeof()),
        ::uNewField("_progressChangedEvent", NULL, offsetof(SeekBar, _progressChangedEvent), ::app::Uno::IDisposable__typeof()),
        ::uNewField("_seekBar", NULL, offsetof(SeekBar, _seekBar), ::app::Android::android::widget::SeekBar__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("LostCallback", SeekBar__LostCallback, 0, false),
        ::uNewFunction(".ctor", SeekBar__New_1, 0, true, SeekBar__typeof()),
        ::uNewFunctionVoid("OnProgressChanged", SeekBar__OnProgressChanged, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnSeekBarProgressChanged", SeekBar__OnSeekBarProgressChanged, 0, false, ::uObject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("OnTouchEvent", SeekBar__OnTouchEvent, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::MotionEvent__typeof()));

    ::uRegisterType(type);
    return type;
}

void SeekBar___ObjInit_3(SeekBar* __this)
{
    __this->_index = -1;
    ::app::Fuse::Android::ControlView__Fuse_Controls_Slider___ObjInit_2(__this);
}

void SeekBar__Attach(SeekBar* __this)
{
    __this->Create();
    ::uPtr< ::app::Fuse::Controls::Slider*>(__this->Control())->add_ProgressChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)SeekBar__OnProgressChanged, __this));
    __this->_progressChangedEvent = ::app::Fuse::Android::ProgressChangedListener__AddHandler(NULL, __this->_seekBar, ::uNewDelegateNonVirt(::app::Fuse::Android::ProgressChangedHandler__typeof(), (const void*)SeekBar__OnSeekBarProgressChanged, __this));
    __this->OnProgressChanged(NULL, NULL);
}

::app::Android::android::view::View* SeekBar__CreateInternal(SeekBar* __this)
{
    if (::app::Android::java::lang::Object__op_Equality_1(NULL, (::app::Android::java::lang::Object*)__this->_seekBar, NULL))
    {
        __this->_seekBar = (::app::Android::android::widget::SeekBar*)::app::Fuse::Android::AndroidSeekBar__New_17(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL), ::uNewDelegateNonVirt(::app::Uno::Func__Android_android_view_MotionEvent__bool__typeof(), (const void*)SeekBar__OnTouchEvent, __this));
        ::uPtr< ::app::Android::android::widget::SeekBar*>(__this->_seekBar)->setMax(1000);
    }

    return (::app::Android::android::view::View*)__this->_seekBar;
}

void SeekBar__Detach(SeekBar* __this)
{
    ::uPtr< ::app::Fuse::Controls::Slider*>(__this->Control())->remove_ProgressChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)SeekBar__OnProgressChanged, __this));
    ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_progressChangedEvent));
}

void SeekBar__LostCallback(SeekBar* __this)
{
    __this->_index = -1;
}

SeekBar* SeekBar__New_1(::uStatic* __this)
{
    SeekBar* inst = (SeekBar*)::uAllocObject(sizeof(SeekBar), SeekBar__typeof());
    inst->_ObjInit_3();
    return inst;
}

void SeekBar__OnProgressChanged(SeekBar* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::uPtr< ::app::Android::android::widget::SeekBar*>(__this->_seekBar)->setProgress((int)(::uPtr< ::app::Fuse::Controls::Slider*>(__this->Control())->Progress() * 1000.0));
}

void SeekBar__OnSeekBarProgressChanged(SeekBar* __this, ::uObject* sender, int value, bool fromUser)
{
    if (fromUser)
    {
        ::uPtr< ::app::Fuse::Controls::Slider*>(__this->Control())->Progress((double)value / 1000.0);
    }
}

bool SeekBar__OnTouchEvent(SeekBar* __this, ::app::Android::android::view::MotionEvent* motionEvent)
{
    int action = ::uPtr< ::app::Android::android::view::MotionEvent*>(motionEvent)->getActionMasked();

    switch (action)
    {
        case 0:
        case 5:
        {
            if (__this->_index == -1)
            {
                __this->_index = ::uPtr< ::app::Android::android::view::MotionEvent*>(motionEvent)->getPointerId(::uPtr< ::app::Android::android::view::MotionEvent*>(motionEvent)->getPointerCount() - 1);
                ::app::Fuse::Input::Pointer__HardCapture(NULL, __this->_index, (::app::Fuse::Node*)__this, (::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)SeekBar__LostCallback, __this));
            }

            break;
        }
        case 1:
        case 3:
        case 6:
        {
            if (::app::Fuse::Input::Pointer__IsHardCaptured_1(NULL, ::uPtr< ::app::Android::android::view::MotionEvent*>(motionEvent)->getPointerId(::uPtr< ::app::Android::android::view::MotionEvent*>(motionEvent)->getPointerCount() - 1), (::uObject*)__this))
            {
                ::app::Fuse::Input::Pointer__ReleaseHardCapture(NULL, __this->_index);
                __this->_index = -1;
            }

            break;
        }
    }

    return __this->_index != -1;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ShaderFactory___javaClass_3;

ShaderFactory__uType* ShaderFactory__typeof()
{
    static ::uStaticStrong<ShaderFactory__uType*> type;
    if (type != NULL) return type;

    type = (ShaderFactory__uType*)::uAllocClassType(sizeof(ShaderFactory__uType), "Fuse.Android.ShaderFactory", false, 2, 1, 0);

    type->SetBaseType(::app::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory__typeof());
    type->__fp_resize = (::app::Android::android::graphics::Shader*(*)(::app::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory*, int, int))ShaderFactory__resize;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ShaderFactory__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ShaderFactory__uType, __interface_1));

    type->SetStrongRefs(
        "_brush", offsetof(ShaderFactory, _brush));

    type->SetFields(2,
        ::uNewField("_brush", NULL, offsetof(ShaderFactory, _brush), ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewField("_javaClass", &ShaderFactory___javaClass_3, 0, ::app::Android::Base::Primitives::ujclass__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("LinearGradientShader", ShaderFactory__LinearGradientShader, 0, false, ::app::Android::android::graphics::Shader__typeof(), ::app::Fuse::Drawing::LinearGradient__typeof()),
        ::uNewFunction(".ctor", ShaderFactory__New_5, 0, true, ShaderFactory__typeof(), ::app::Fuse::Drawing::Brush__typeof()));

    ::uRegisterType(type);
    return type;
}

void ShaderFactory___ObjInit_6(ShaderFactory* __this, ::app::Fuse::Drawing::Brush* brush)
{
    if (!__this->_subclassed)
    {
        __this->_subclassed = true;
        __this->_javaClassName = ::uGetConstString("com.Bindings.Binding_Fuse_Android_ShaderFactory");
    }

    ::app::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory___ObjInit_5(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);

    if (::app::Android::Base::Primitives::ujclass__op_Equality(NULL, ShaderFactory___javaClass_3, ::app::Android::Base::Primitives::ujclass__get_Null(NULL)))
    {
        ShaderFactory___javaClass_3 = ::app::Android::Base::JNI__LocalToGlobalRef(NULL, ::app::Android::Base::JNI__LoadClass_3(NULL, ::uGetConstString("com.Bindings.Binding_Fuse_Android_ShaderFactory"), false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_resize","(JIIJJ)Landroid/graphics/Shader;",Binding_Fuse_Android_ShaderFactory__resize6361);
        COMMIT_REG_MTD(ShaderFactory___javaClass_3);
    }

    jclass tmpCls = ::app::Android::Base::JNI__LoadClass_3(NULL, __this->_javaClassName, false);
    jmethodID mtd = ::app::Android::Base::JNI__GetMethodID(NULL, tmpCls, ::uGetConstString("<init>"), ::uGetConstString("(J)V"));
    jobject tmp = ::app::Android::Base::JNI__NewObject_1(NULL, tmpCls, mtd, ::app::Android::Base::Primitives::ujvalue__op_Implicit_16(NULL, (jlong)__this->__obj_weak));
    ::app::Android::Base::JNI__CheckException(NULL);
    __this->_javaObject = ::app::Android::Base::JNI__LocalToGlobalRef_1(NULL, tmp);
    ::app::Android::Base::JNI__DeleteLocalRef(NULL, tmpCls);
    __this->_brush = brush;
}

::app::Android::android::graphics::Shader* ShaderFactory__LinearGradientShader(ShaderFactory* __this, ::app::Fuse::Drawing::LinearGradient* linearGradient)
{
    ::app::Android::Runtime::IntArray* colors = ::app::Android::Runtime::IntArray__New_5(NULL, ::uPtr< ::uArray*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(linearGradient)->SortedStops())->Length());
    ::app::Android::Runtime::FloatArray* positions = ::app::Android::Runtime::FloatArray__New_5(NULL, ::uPtr< ::uArray*>(linearGradient->SortedStops())->Length());

    for (int i = 0; i < ::uPtr< ::uArray*>(linearGradient->SortedStops())->Length(); i++)
    {
        ::app::Fuse::Drawing::GradientStop* gradientStop = ::uPtr< ::uArray*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(linearGradient)->SortedStops())->Item< ::app::Fuse::Drawing::GradientStop*>(i);
        ::uPtr< ::app::Android::Runtime::IntArray*>(colors)->Item(i, ::app::Fuse::Android::Helpers__EncodeColor(NULL, ::uPtr< ::app::Fuse::Drawing::GradientStop*>(gradientStop)->Color()));
        ::uPtr< ::app::Android::Runtime::FloatArray*>(positions)->Item(i, gradientStop->Offset());
    }

    return (::app::Android::android::graphics::Shader*)::app::Android::android::graphics::LinearGradient__New_8(NULL, linearGradient->StartPoint().X, linearGradient->StartPoint().Y, linearGradient->EndPoint().X, linearGradient->EndPoint().Y, colors, positions, ::app::Android::android::graphics::ShaderDLRTileMode__get_CLAMP(NULL));
}

ShaderFactory* ShaderFactory__New_5(::uStatic* __this, ::app::Fuse::Drawing::Brush* brush)
{
    ShaderFactory* inst = (ShaderFactory*)::uAllocObject(sizeof(ShaderFactory), ShaderFactory__typeof());
    inst->_ObjInit_6(brush);
    return inst;
}

::app::Android::android::graphics::Shader* ShaderFactory__resize(ShaderFactory* __this, int width, int height)
{
    if (::uIs(__this->_brush, ::app::Fuse::Drawing::LinearGradient__typeof()))
    {
        return __this->LinearGradientShader(::uCast< ::app::Fuse::Drawing::LinearGradient*>(__this->_brush, ::app::Fuse::Drawing::LinearGradient__typeof()));
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported brush type: "), (::uObject*)__this->_brush)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass SurfaceCallback___javaClass_2;

SurfaceCallback__uType* SurfaceCallback__typeof()
{
    static ::uStaticStrong<SurfaceCallback__uType*> type;
    if (type != NULL) return type;

    type = (SurfaceCallback__uType*)::uAllocClassType(sizeof(SurfaceCallback__uType), "Fuse.Android.SurfaceCallback", false, 4, 1, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_surfaceRedrawNeeded = (void(*)(void*, ::uObject*))SurfaceCallback__surfaceRedrawNeeded;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;
    type->__interface_3.__fp_surfaceCreated = (void(*)(void*, ::uObject*))SurfaceCallback__surfaceCreated;
    type->__interface_3.__fp_surfaceChanged = (void(*)(void*, ::uObject*, int, int, int))SurfaceCallback__surfaceChanged;
    type->__interface_3.__fp_surfaceDestroyed = (void(*)(void*, ::uObject*))SurfaceCallback__surfaceDestroyed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(SurfaceCallback__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SurfaceCallback__uType, __interface_1),
        ::app::Android::android::view::SurfaceHolderDLRCallback2__typeof(), offsetof(SurfaceCallback__uType, __interface_2),
        ::app::Android::android::view::SurfaceHolderDLRCallback__typeof(), offsetof(SurfaceCallback__uType, __interface_3));

    type->SetStrongRefs(
        "_sv", offsetof(SurfaceCallback, _sv));

    type->SetFields(2,
        ::uNewField("_javaClass", &SurfaceCallback___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("_sv", NULL, offsetof(SurfaceCallback, _sv), ::app::Fuse::Android::SurfaceView__typeof()));

    type->SetFunctions(5,
        ::uNewFunction(".ctor", SurfaceCallback__New_5, 0, true, SurfaceCallback__typeof(), ::app::Fuse::Android::SurfaceView__typeof()),
        ::uNewFunctionVoid("surfaceChanged", SurfaceCallback__surfaceChanged, 0, false, ::app::Android::android::view::SurfaceHolder__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("surfaceCreated", SurfaceCallback__surfaceCreated, 0, false, ::app::Android::android::view::SurfaceHolder__typeof()),
        ::uNewFunctionVoid("surfaceDestroyed", SurfaceCallback__surfaceDestroyed, 0, false, ::app::Android::android::view::SurfaceHolder__typeof()),
        ::uNewFunctionVoid("surfaceRedrawNeeded", SurfaceCallback__surfaceRedrawNeeded, 0, false, ::app::Android::android::view::SurfaceHolder__typeof()));

    ::uRegisterType(type);
    return type;
}

void SurfaceCallback___ObjInit_4(SurfaceCallback* __this, ::app::Fuse::Android::SurfaceView* sv)
{
    if (!__this->_subclassed)
    {
        __this->_subclassed = true;
        __this->_javaClassName = ::uGetConstString("com.Bindings.Binding_Fuse_Android_SurfaceCallback");
    }

    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);

    if (::app::Android::Base::Primitives::ujclass__op_Equality(NULL, SurfaceCallback___javaClass_2, ::app::Android::Base::Primitives::ujclass__get_Null(NULL)))
    {
        SurfaceCallback___javaClass_2 = ::app::Android::Base::JNI__LocalToGlobalRef(NULL, ::app::Android::Base::JNI__LoadClass_3(NULL, ::uGetConstString("com.Bindings.Binding_Fuse_Android_SurfaceCallback"), false));
        JniHelper jni;
        BEGIN_REG_MTD(4);
        REG_MTD(0,"__n_surfaceRedrawNeeded","(JLandroid/view/SurfaceHolder;J)V",Binding_Fuse_Android_SurfaceCallback__surfaceRedrawNeeded22609);
        REG_MTD(1,"__n_surfaceCreated","(JLandroid/view/SurfaceHolder;J)V",Binding_Fuse_Android_SurfaceCallback__surfaceCreated22606);
        REG_MTD(2,"__n_surfaceChanged","(JLandroid/view/SurfaceHolder;IIIJJJJ)V",Binding_Fuse_Android_SurfaceCallback__surfaceChanged22607);
        REG_MTD(3,"__n_surfaceDestroyed","(JLandroid/view/SurfaceHolder;J)V",Binding_Fuse_Android_SurfaceCallback__surfaceDestroyed22608);
        COMMIT_REG_MTD(SurfaceCallback___javaClass_2);
    }

    jclass tmpCls = ::app::Android::Base::JNI__LoadClass_3(NULL, __this->_javaClassName, false);
    jmethodID mtd = ::app::Android::Base::JNI__GetMethodID(NULL, tmpCls, ::uGetConstString("<init>"), ::uGetConstString("(J)V"));
    jobject tmp = ::app::Android::Base::JNI__NewObject_1(NULL, tmpCls, mtd, ::app::Android::Base::Primitives::ujvalue__op_Implicit_16(NULL, (jlong)__this->__obj_weak));
    ::app::Android::Base::JNI__CheckException(NULL);
    __this->_javaObject = ::app::Android::Base::JNI__LocalToGlobalRef_1(NULL, tmp);
    ::app::Android::Base::JNI__DeleteLocalRef(NULL, tmpCls);
    __this->_sv = sv;
}

SurfaceCallback* SurfaceCallback__New_5(::uStatic* __this, ::app::Fuse::Android::SurfaceView* sv)
{
    SurfaceCallback* inst = (SurfaceCallback*)::uAllocObject(sizeof(SurfaceCallback), SurfaceCallback__typeof());
    inst->_ObjInit_4(sv);
    return inst;
}

void SurfaceCallback__surfaceChanged(SurfaceCallback* __this, ::uObject* holder, int format, int width, int height)
{
    ::uPtr< ::app::Fuse::Controls::GraphicsView*>(::uPtr< ::app::Fuse::Android::SurfaceView*>(__this->_sv)->Control())->InvalidateVisual();
}

void SurfaceCallback__surfaceCreated(SurfaceCallback* __this, ::uObject* holder)
{
    ::uPtr< ::app::Fuse::Android::SurfaceView*>(__this->_sv)->OnSurfaceCreated(::app::Android::android::view::SurfaceHolder::getSurface(::uPtr< ::uObject*>(holder)));
    ::uPtr< ::app::Fuse::Controls::GraphicsView*>(::uPtr< ::app::Fuse::Android::SurfaceView*>(__this->_sv)->Control())->InvalidateVisual();
}

void SurfaceCallback__surfaceDestroyed(SurfaceCallback* __this, ::uObject* holder)
{
    ::uPtr< ::app::Fuse::Android::SurfaceView*>(__this->_sv)->OnSurfaceDestroyed();
}

void SurfaceCallback__surfaceRedrawNeeded(SurfaceCallback* __this, ::uObject* holder)
{
    ::uPtr< ::app::Fuse::Controls::GraphicsView*>(::uPtr< ::app::Fuse::Android::SurfaceView*>(__this->_sv)->Control())->InvalidateVisual();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SurfaceView__uType* SurfaceView__typeof()
{
    static ::uStaticStrong<SurfaceView__uType*> type;
    if (type != NULL) return type;

    type = (SurfaceView__uType*)::uAllocClassType(sizeof(SurfaceView__uType), "Fuse.Android.SurfaceView", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Android::GraphicsView__typeof());
    type->__fp_CreateGraphicsView = (::app::Android::android::view::View*(*)(::app::Fuse::Android::GraphicsView*))SurfaceView__CreateGraphicsView;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", SurfaceView__New_1, 0, true, SurfaceView__typeof()));

    ::uRegisterType(type);
    return type;
}

void SurfaceView___ObjInit_4(SurfaceView* __this)
{
    ::app::Fuse::Android::GraphicsView___ObjInit_3(__this);
}

::app::Android::android::view::View* SurfaceView__CreateGraphicsView(SurfaceView* __this)
{
    ::app::Android::android::view::SurfaceView* surfaceView = ::app::Android::android::view::SurfaceView__New_9(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));
    ::app::Android::android::view::SurfaceHolder::addCallback(::uPtr< ::uObject*>(::uPtr< ::app::Android::android::view::SurfaceView*>(surfaceView)->getHolder()), (::uObject*)::app::Fuse::Android::SurfaceCallback__New_5(NULL, __this));
    return (::app::Android::android::view::View*)surfaceView;
}

SurfaceView* SurfaceView__New_1(::uStatic* __this)
{
    SurfaceView* inst = (SurfaceView*)::uAllocObject(sizeof(SurfaceView), SurfaceView__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Switch__uType* Switch__typeof()
{
    static ::uStaticStrong<Switch__uType*> type;
    if (type != NULL) return type;

    type = (Switch__uType*)::uAllocClassType(sizeof(Switch__uType), "Fuse.Android.Switch", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Android::CompoundButton__typeof());
    type->__fp_CreateCompoundButton = (::app::Android::android::widget::CompoundButton*(*)(::app::Fuse::Android::CompoundButton*))Switch__CreateCompoundButton;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Switch__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Switch__New_1, 0, true, Switch__typeof()));

    ::uRegisterType(type);
    return type;
}

void Switch___ObjInit_4(Switch* __this)
{
    ::app::Fuse::Android::CompoundButton___ObjInit_3(__this);
}

::app::Android::android::widget::CompoundButton* Switch__CreateCompoundButton(Switch* __this)
{
    return (::app::Android::android::widget::CompoundButton*)::app::Android::android::widget::Switch__New_17(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));
}

Switch* Switch__New_1(::uStatic* __this)
{
    Switch* inst = (Switch*)::uAllocObject(sizeof(Switch), Switch__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* TextChangedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Android.TextChangedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::String__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass TextChangedListener___javaClass_2;

TextChangedListener__uType* TextChangedListener__typeof()
{
    static ::uStaticStrong<TextChangedListener__uType*> type;
    if (type != NULL) return type;

    type = (TextChangedListener__uType*)::uAllocClassType(sizeof(TextChangedListener__uType), "Fuse.Android.TextChangedListener", false, 3, 2, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onTextChanged = (void(*)(void*, ::uObject*, int, int, int))TextChangedListener__Android_android_text_TextWatcher_onTextChanged;
    type->__interface_2.__fp_beforeTextChanged = (void(*)(void*, ::uObject*, int, int, int))TextChangedListener__Android_android_text_TextWatcher_beforeTextChanged;
    type->__interface_2.__fp_afterTextChanged = (void(*)(void*, ::uObject*))TextChangedListener__Android_android_text_TextWatcher_afterTextChanged;
    type->__interface_1.__fp_Dispose = (void(*)(void*))TextChangedListener__Uno_IDisposable_Dispose_1;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(TextChangedListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(TextChangedListener__uType, __interface_1),
        ::app::Android::android::text::TextWatcher__typeof(), offsetof(TextChangedListener__uType, __interface_2));

    type->SetStrongRefs(
        "_handler", offsetof(TextChangedListener, _handler),
        "_textView", offsetof(TextChangedListener, _textView));

    type->SetFields(4,
        ::uNewField("_handler", NULL, offsetof(TextChangedListener, _handler), ::app::Fuse::Android::TextChangedHandler__typeof()),
        ::uNewField("_isDisposed", NULL, offsetof(TextChangedListener, _isDisposed), ::app::Uno::Bool__typeof()),
        ::uNewField("_javaClass", &TextChangedListener___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("_textView", NULL, offsetof(TextChangedListener, _textView), ::app::Android::android::widget::TextView__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("AddHandler", TextChangedListener__AddHandler, 0, true, ::app::Uno::IDisposable__typeof(), ::app::Android::android::widget::TextView__typeof(), ::app::Fuse::Android::TextChangedHandler__typeof()),
        ::uNewFunctionVoid("Android.android.text.TextWatcher.afterTextChanged", TextChangedListener__Android_android_text_TextWatcher_afterTextChanged, 0, false, ::app::Android::android::text::Editable__typeof()),
        ::uNewFunctionVoid("Android.android.text.TextWatcher.beforeTextChanged", TextChangedListener__Android_android_text_TextWatcher_beforeTextChanged, 0, false, ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Android.android.text.TextWatcher.onTextChanged", TextChangedListener__Android_android_text_TextWatcher_onTextChanged, 0, false, ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Uno.IDisposable.Dispose", TextChangedListener__Uno_IDisposable_Dispose_1, 0, false));

    ::uRegisterType(type);
    return type;
}

void TextChangedListener___ObjInit_4(TextChangedListener* __this, ::app::Android::android::widget::TextView* textView, ::uDelegate* handler)
{
    if (!__this->_subclassed)
    {
        __this->_subclassed = true;
        __this->_javaClassName = ::uGetConstString("com.Bindings.Binding_Fuse_Android_TextChangedListener");
    }

    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);

    if (::app::Android::Base::Primitives::ujclass__op_Equality(NULL, TextChangedListener___javaClass_2, ::app::Android::Base::Primitives::ujclass__get_Null(NULL)))
    {
        TextChangedListener___javaClass_2 = ::app::Android::Base::JNI__LocalToGlobalRef(NULL, ::app::Android::Base::JNI__LoadClass_3(NULL, ::uGetConstString("com.Bindings.Binding_Fuse_Android_TextChangedListener"), false));
        JniHelper jni;
        BEGIN_REG_MTD(3);
        REG_MTD(0,"__n_onTextChanged","(JLjava/lang/CharSequence;IIIJJJJ)V",Binding_Fuse_Android_TextChangedListener__onTextChanged20152);
        REG_MTD(1,"__n_beforeTextChanged","(JLjava/lang/CharSequence;IIIJJJJ)V",Binding_Fuse_Android_TextChangedListener__beforeTextChanged20151);
        REG_MTD(2,"__n_afterTextChanged","(JLandroid/text/Editable;J)V",Binding_Fuse_Android_TextChangedListener__afterTextChanged20153);
        COMMIT_REG_MTD(TextChangedListener___javaClass_2);
    }

    jclass tmpCls = ::app::Android::Base::JNI__LoadClass_3(NULL, __this->_javaClassName, false);
    jmethodID mtd = ::app::Android::Base::JNI__GetMethodID(NULL, tmpCls, ::uGetConstString("<init>"), ::uGetConstString("(J)V"));
    jobject tmp = ::app::Android::Base::JNI__NewObject_1(NULL, tmpCls, mtd, ::app::Android::Base::Primitives::ujvalue__op_Implicit_16(NULL, (jlong)__this->__obj_weak));
    ::app::Android::Base::JNI__CheckException(NULL);
    __this->_javaObject = ::app::Android::Base::JNI__LocalToGlobalRef_1(NULL, tmp);
    ::app::Android::Base::JNI__DeleteLocalRef(NULL, tmpCls);
    __this->_textView = textView;
    __this->_handler = handler;
    ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->addTextChangedListener((::uObject*)__this);
}

::uObject* TextChangedListener__AddHandler(::uStatic* __this, ::app::Android::android::widget::TextView* textView, ::uDelegate* handler)
{
    return (::uObject*)TextChangedListener__New_5(NULL, textView, handler);
}

void TextChangedListener__Android_android_text_TextWatcher_afterTextChanged(TextChangedListener* __this, ::uObject* arg0)
{
}

void TextChangedListener__Android_android_text_TextWatcher_beforeTextChanged(TextChangedListener* __this, ::uObject* cs, int start, int count, int after)
{
}

void TextChangedListener__Android_android_text_TextWatcher_onTextChanged(TextChangedListener* __this, ::uObject* cs, int start, int before, int arg3)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_handler, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_handler)->InvokeVoid< ::uObject*, ::uString*>((::uObject*)__this->_textView, (cs != NULL) ? ::app::Android::java::lang::String__op_Implicit_1(NULL, ::app::Android::java::lang::CharSequence::toString(::uPtr< ::uObject*>(cs))) : ::uGetConstString(""));
    }
}

TextChangedListener* TextChangedListener__New_5(::uStatic* __this, ::app::Android::android::widget::TextView* textView, ::uDelegate* handler)
{
    TextChangedListener* inst = (TextChangedListener*)::uAllocObject(sizeof(TextChangedListener), TextChangedListener__typeof());
    inst->_ObjInit_4(textView, handler);
    return inst;
}

void TextChangedListener__Uno_IDisposable_Dispose_1(TextChangedListener* __this)
{
    if (!__this->_isDisposed)
    {
        ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->removeTextChangedListener((::uObject*)__this);
        __this->_isDisposed = true;
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextEdit__uType* TextEdit__typeof()
{
    static ::uStaticStrong<TextEdit__uType*> type;
    if (type != NULL) return type;

    type = (TextEdit__uType*)::uAllocClassType(sizeof(TextEdit__uType), "Fuse.Android.TextEdit", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Android::TextViewBase__Fuse_Controls_TextInput__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_TextInput*))TextEdit__Attach;
    type->__fp_CreateTextView = (::app::Android::android::widget::TextView*(*)(::app::Fuse::Android::TextViewBase__Fuse_Controls_TextInput*))TextEdit__CreateTextView;
    type->__fp_get_Plain = TextEdit__get_Plain;
    type->__fp_get_ShowKeyboard = (bool(*)(::app::Fuse::Android::ControlView__Fuse_Controls_TextInput*))TextEdit__get_ShowKeyboard;
    type->__fp_OnTextChanged = (void(*)(::app::Fuse::Android::TextViewBase__Fuse_Controls_TextInput*, ::uObject*, ::uString*))TextEdit__OnTextChanged;
    type->__fp_OnTextLayoutPropertyChanged = (void(*)(::app::Fuse::Android::TextViewBase__Fuse_Controls_TextInput*, ::uObject*, ::app::Uno::EventArgs*))TextEdit__OnTextLayoutPropertyChanged;
    type->__fp_OnTextRenderPropertyChanged = (void(*)(::app::Fuse::Android::TextViewBase__Fuse_Controls_TextInput*, ::uObject*, ::app::Uno::EventArgs*))TextEdit__OnTextRenderPropertyChanged;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextEdit__uType, __interface_0));

    type->SetStrongRefs(
        "_textView", offsetof(TextEdit, _textView_1));

    type->SetFields(2,
        ::uNewField("_prevLineCount", NULL, offsetof(TextEdit, _prevLineCount), ::app::Uno::Int__typeof()),
        ::uNewField("_textView", NULL, offsetof(TextEdit, _textView_1), ::app::Android::android::widget::TextView__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Plain", type->__fp_get_Plain, offsetof(TextEdit__uType, __fp_get_Plain), false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", TextEdit__New_1, 0, true, TextEdit__typeof()),
        ::uNewFunctionVoid("SetCursorDrawableColor", TextEdit__SetCursorDrawableColor, 0, false, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextEdit___ObjInit_4(TextEdit* __this)
{
    __this->_prevLineCount = -1;
    ::app::Fuse::Android::TextViewBase__Fuse_Controls_TextInput___ObjInit_3(__this);
    ::app::Fuse::Input::Focus__SetIsFocusable(NULL, (::app::Fuse::Node*)__this, true);
}

void TextEdit__Attach(TextEdit* __this)
{
    ::app::Fuse::Android::TextViewBase__Fuse_Controls_TextInput__Attach(__this);
    __this->_prevLineCount = ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView_1)->getLineCount();
}

::app::Android::android::widget::TextView* TextEdit__CreateTextView(TextEdit* __this)
{
    if (::app::Android::java::lang::Object__op_Equality_1(NULL, (::app::Android::java::lang::Object*)__this->_textView_1, NULL))
    {
        __this->_textView_1 = (::app::Android::android::widget::TextView*)::app::Android::android::widget::EditText__New_13(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));

        if (__this->Plain())
        {
            ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView_1)->setIncludeFontPadding(false);
            ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView_1)->setBackgroundResource(0);
            ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView_1)->setPadding(0, 0, 0, 0);

            if (::app::Android::Base::Versions__get_ApiLevel(NULL) >= 16)
            {
                ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView_1)->setPaddingRelative(0, 0, 0, 0);
            }
        }
    }

    return __this->_textView_1;
}

bool TextEdit__get_Plain(TextEdit* __this)
{
    return false;
}

bool TextEdit__get_ShowKeyboard(TextEdit* __this)
{
    return true;
}

TextEdit* TextEdit__New_1(::uStatic* __this)
{
    TextEdit* inst = (TextEdit*)::uAllocObject(sizeof(TextEdit), TextEdit__typeof());
    inst->_ObjInit_4();
    return inst;
}

void TextEdit__OnTextChanged(TextEdit* __this, ::uObject* sender, ::uString* text)
{
    ::app::Fuse::Android::TextViewBase__Fuse_Controls_TextInput__OnTextChanged(__this, sender, text);
    int c = ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView_1)->getLineCount();

    if (c != __this->_prevLineCount)
    {
        __this->_prevLineCount = c;
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Linecount changed: InvalidateLayout + linecount="), ::uBox< int>(::app::Uno::Int__typeof(), c)), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Android.Views\\0.11.3\\$.uno"), 3007);
        __this->InvalidateLayout(2);
    }
}

void TextEdit__OnTextLayoutPropertyChanged(TextEdit* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    int flags = 0;

    switch (::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->InputHint())
    {
        case 1:
        {
            flags = flags | 33;
            break;
        }
        case 2:
        {
            flags = flags | 17;
            break;
        }
        case 3:
        {
            flags = flags | 3;
            break;
        }
        case 4:
        {
            flags = flags | 2;
            break;
        }
        default:
        {
            flags = flags | 1;
            break;
        }
    }

    if (::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->IsMultiline())
    {
        flags = flags | 131072;
    }

    if (::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->IsPassword())
    {
        flags = flags | 128;
    }

    ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView_1)->setInputType(flags);
    ::app::Fuse::Android::TextViewBase__Fuse_Controls_TextInput__OnTextLayoutPropertyChanged(__this, sender, args);

    if (::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->IsMultiline())
    {
        ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView_1)->setMaxLines(2147483647);
    }
    else
    {
        switch (::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->TextWrapping())
        {
            case 1:
            {
                ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView_1)->setMaxLines(2147483647);
                break;
            }
            case 0:
            {
                ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView_1)->setMaxLines(1);
                break;
            }
        }
    }
}

void TextEdit__OnTextRenderPropertyChanged(TextEdit* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::app::Uno::Float4 c = ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->CaretColor();
    __this->SetCursorDrawableColor(::app::Android::android::graphics::Color__argb(NULL, (int)(c.W * 255.0f), (int)(c.X * 255.0f), (int)(c.Y * 255.0f), (int)(c.Z * 255.0f)));
    ::app::Fuse::Android::TextViewBase__Fuse_Controls_TextInput__OnTextRenderPropertyChanged(__this, sender, args);
}

void TextEdit__SetCursorDrawableColor(TextEdit* __this, int color)
{
    try
    {
        ::app::Android::java::lang::Class* textViewClass = ::app::Android::java::lang::Class__forName(NULL, ::app::Android::java::lang::String__op_Implicit(NULL, ::uGetConstString("android.widget.TextView")));
        ::app::Android::java::lang::reflect::Field* fCursorDrawableRes = ::uPtr< ::app::Android::java::lang::Class*>(textViewClass)->getDeclaredField(::app::Android::java::lang::String__op_Implicit(NULL, ::uGetConstString("mCursorDrawableRes")));
        ::uPtr< ::app::Android::java::lang::reflect::Field*>(fCursorDrawableRes)->setAccessible(true);
        int mCursorDrawableRes = fCursorDrawableRes->getInt((::app::Android::java::lang::Object*)__this->_textView_1);
        ::app::Android::java::lang::reflect::Field* fEditor = textViewClass->getDeclaredField(::app::Android::java::lang::String__op_Implicit(NULL, ::uGetConstString("mEditor")));
        ::uPtr< ::app::Android::java::lang::reflect::Field*>(fEditor)->setAccessible(true);
        ::app::Android::java::lang::Object* editor = fEditor->get((::app::Android::java::lang::Object*)__this->_textView_1);
        ::app::Android::java::lang::reflect::Field* fCursorDrawable = ::uPtr< ::app::Android::java::lang::Class*>(::uPtr< ::app::Android::java::lang::Object*>(editor)->getClass())->getDeclaredField(::app::Android::java::lang::String__op_Implicit(NULL, ::uGetConstString("mCursorDrawable")));
        ::uPtr< ::app::Android::java::lang::reflect::Field*>(fCursorDrawable)->setAccessible(true);
        ::app::Android::Runtime::ObjectArray__Android_android_graphics_drawable_Drawable* r = ::app::Android::Runtime::ObjectArray__Android_android_graphics_drawable_Drawable__New_5(NULL, 2);
        ::uPtr< ::app::Android::Runtime::ObjectArray__Android_android_graphics_drawable_Drawable*>(r)->Item(0, ::uPtr< ::app::Android::android::content::res::Resources*>(::uPtr< ::app::Android::android::content::Context*>(::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView_1)->getContext())->getResources())->getDrawable(mCursorDrawableRes));
        r->Item(1, ::uPtr< ::app::Android::android::content::res::Resources*>(::uPtr< ::app::Android::android::content::Context*>(::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView_1)->getContext())->getResources())->getDrawable(mCursorDrawableRes));
        ::uPtr< ::app::Android::android::graphics::drawable::Drawable*>(r->Item(0))->setColorFilter_1(color, ::app::Android::android::graphics::PorterDuffDLRMode__get_SRC_IN(NULL));
        ::uPtr< ::app::Android::android::graphics::drawable::Drawable*>(r->Item(1))->setColorFilter_1(color, ::app::Android::android::graphics::PorterDuffDLRMode__get_SRC_IN(NULL));
        fCursorDrawable->set(editor, (::app::Android::java::lang::Object*)r);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Uno::Diagnostics::Debug__Log_2(NULL, (::uObject*)e, 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Android.Views\\0.11.3\\$.uno"), 2922);
        }
        else
        {
            throw __t;
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Android::android::view::Surface*> TextRenderer___surface;
::uStaticStrong< ::app::Android::android::graphics::SurfaceTexture*> TextRenderer___surfaceTexture;
::uUInt TextRenderer___texture;
bool TextRenderer___textureInit;
::uStaticStrong< ::app::Uno::Graphics::VideoTexture*> TextRenderer___videoTexture;

TextRenderer__uType* TextRenderer__typeof()
{
    static ::uStaticStrong<TextRenderer__uType*> type;
    if (type != NULL) return type;

    type = (TextRenderer__uType*)::uAllocClassType(sizeof(TextRenderer__uType), "Fuse.Android.TextRenderer", false, 2, 2, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::TextVisual__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_TextControl*))TextRenderer__Attach;
    type->__fp_Detach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_TextControl*))TextRenderer__Detach;
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))TextRenderer__GetMarginSize;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Controls::Graphics::Visual*, ::app::Fuse::DrawContext*))TextRenderer__OnDraw;
    type->__interface_1.__fp_SoftDispose = (void(*)(void*))TextRenderer__Fuse_Resources_ISoftDisposable_SoftDispose;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextRenderer__uType, __interface_0),
        ::app::Fuse::Resources::ISoftDisposable__typeof(), offsetof(TextRenderer__uType, __interface_1));

    type->SetStrongRefs(
        "_layout", offsetof(TextRenderer, _layout),
        "_paint", offsetof(TextRenderer, _paint));

    type->SetFields(12,
        ::uNewField("_bitmapTexture", NULL, offsetof(TextRenderer, _bitmapTexture), ::app::OpenGL::GLTextureHandle__typeof()),
        ::uNewField("_layout", NULL, offsetof(TextRenderer, _layout), ::app::Android::android::text::StaticLayout__typeof()),
        ::uNewField("_layoutValid", NULL, offsetof(TextRenderer, _layoutValid), ::app::Uno::Bool__typeof()),
        ::uNewField("_paint", NULL, offsetof(TextRenderer, _paint), ::app::Android::android::text::TextPaint__typeof()),
        ::uNewField("_pixelBounds", NULL, offsetof(TextRenderer, _pixelBounds), ::app::Uno::Rect__typeof()),
        ::uNewField("_surface", &TextRenderer___surface, 0, ::app::Android::android::view::Surface__typeof()),
        ::uNewField("_surfaceTexture", &TextRenderer___surfaceTexture, 0, ::app::Android::android::graphics::SurfaceTexture__typeof()),
        ::uNewField("_texture", &TextRenderer___texture, 0, ::app::OpenGL::GLTextureHandle__typeof()),
        ::uNewField("_textureInit", &TextRenderer___textureInit, 0, ::app::Uno::Bool__typeof()),
        ::uNewField("_textureValid", NULL, offsetof(TextRenderer, _textureValid), ::app::Uno::Bool__typeof()),
        ::uNewField("_videoTexture", &TextRenderer___videoTexture, 0, ::app::Uno::Graphics::VideoTexture__typeof()),
        ::uNewField("_wrapWidth", NULL, offsetof(TextRenderer, _wrapWidth), ::app::Uno::Float__typeof()));

    type->SetFunctions(13,
        ::uNewFunction("AndroidRectToUnoRect", TextRenderer__AndroidRectToUnoRect, 0, true, ::app::Uno::Rect__typeof(), ::app::Android::android::graphics::Rect__typeof()),
        ::uNewFunctionVoid("DisposeTexture", TextRenderer__DisposeTexture, 0, false),
        ::uNewFunctionVoid("Fuse.Resources.ISoftDisposable.SoftDispose", TextRenderer__Fuse_Resources_ISoftDisposable_SoftDispose, 0, false),
        ::uNewFunction(".ctor", TextRenderer__New_1, 0, true, TextRenderer__typeof()),
        ::uNewFunctionVoid("OnBitmapDraw", TextRenderer__OnBitmapDraw, 0, false, ::app::Fuse::DrawContext__typeof()),
        ::uNewFunctionVoid("OnTextLayoutPropertyChanged", TextRenderer__OnTextLayoutPropertyChanged_1, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnTextRenderPropertyChanged", TextRenderer__OnTextRenderPropertyChanged_1, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnValueChanged", TextRenderer__OnValueChanged_1, 0, false, ::uObject__typeof(), ::app::Uno::UX::ValueChangedArgs__string__typeof()),
        ::uNewFunctionVoid("PrepareDraw", TextRenderer__PrepareDraw, 0, false, ::app::Fuse::DrawContext__typeof()),
        ::uNewFunction("TextAlignmentToAndroidLayoutAlignment", TextRenderer__TextAlignmentToAndroidLayoutAlignment, 0, false, ::app::Android::android::text::LayoutDLRAlignment__typeof(), ::app::Fuse::Elements::TextAlignment__typeof()),
        ::uNewFunctionVoid("TextureDispose", TextRenderer__TextureDispose, 0, true),
        ::uNewFunctionVoid("TextureInit", TextRenderer__TextureInit, 0, true),
        ::uNewFunctionVoid("UpdateLayout", TextRenderer__UpdateLayout_1, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextRenderer___ObjInit_4(TextRenderer* __this)
{
    __this->_paint = ::app::Android::android::text::TextPaint__New_9(NULL);
    __this->_bitmapTexture = ::app::OpenGL::GLTextureHandle__Zero;
    ::app::Fuse::Controls::Graphics::TextVisual___ObjInit_3(__this);
    ::app::Fuse::Resources::DisposalManager__Add_1(NULL, (::uObject*)__this);
    ::uPtr< ::app::Android::android::text::TextPaint*>(__this->_paint)->setAntiAlias(true);
}

::app::Uno::Rect TextRenderer__AndroidRectToUnoRect(::uStatic* __this, ::app::Android::android::graphics::Rect* r)
{
    return ::app::Uno::Rect__New_1(NULL, (float)::uPtr< ::app::Android::android::graphics::Rect*>(r)->left(), (float)::uPtr< ::app::Android::android::graphics::Rect*>(r)->top(), (float)::uPtr< ::app::Android::android::graphics::Rect*>(r)->right(), (float)::uPtr< ::app::Android::android::graphics::Rect*>(r)->bottom());
}

void TextRenderer__Attach(TextRenderer* __this)
{
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->add_TextLayoutPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextRenderer__OnTextLayoutPropertyChanged_1, __this));
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->add_TextRenderPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextRenderer__OnTextRenderPropertyChanged_1, __this));
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)TextRenderer__OnValueChanged_1, __this));
    ::app::Fuse::Controls::Graphics::TextVisual__Attach(__this);
}

void TextRenderer__Detach(TextRenderer* __this)
{
    ::app::Fuse::Controls::Graphics::TextVisual__Detach(__this);
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->remove_TextLayoutPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextRenderer__OnTextLayoutPropertyChanged_1, __this));
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->remove_TextRenderPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextRenderer__OnTextRenderPropertyChanged_1, __this));
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)TextRenderer__OnValueChanged_1, __this));
    __this->DisposeTexture();
}

void TextRenderer__DisposeTexture(TextRenderer* __this)
{
    ::app::OpenGL::GL__DeleteTexture(NULL, __this->_bitmapTexture);
    __this->_bitmapTexture = ::app::OpenGL::GLTextureHandle__Zero;
    __this->_textureValid = false;
}

void TextRenderer__Fuse_Resources_ISoftDisposable_SoftDispose(TextRenderer* __this)
{
    __this->DisposeTexture();
}

::app::Uno::Float2 TextRenderer__GetMarginSize(TextRenderer* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    float wrapWidth = ((fillSet & 1) == 1) ? ::app::Uno::Math__Max_1(NULL, fillSize.X * ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport())), 0.0f) : FLT_INF;
    __this->UpdateLayout_1(wrapWidth);
    return ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)::uPtr< ::app::Android::android::text::StaticLayout*>(__this->_layout)->getWidth(), (float)::uPtr< ::app::Android::android::text::StaticLayout*>(__this->_layout)->getHeight()), ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport())));
}

TextRenderer* TextRenderer__New_1(::uStatic* __this)
{
    TextRenderer* inst = (TextRenderer*)::uAllocObject(sizeof(TextRenderer), TextRenderer__typeof());
    inst->_ObjInit_4();
    return inst;
}

void TextRenderer__OnBitmapDraw(TextRenderer* __this, ::app::Fuse::DrawContext* dc)
{
    if (!__this->_textureValid)
    {
        return;
    }

    ::app::Uno::Int2 pixelSize = ::app::Uno::Int2__op_Explicit(NULL, ::app::Uno::Math__Ceil_2(NULL, __this->_pixelBounds.Size()));
    ::app::Uno::Float2 pointSize = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Implicit_1(NULL, pixelSize), ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport())));
    ::app::Uno::Float4x4 m = ::uPtr< ::app::Fuse::DrawContext*>(dc)->GetLocalToClipTransform((::app::Fuse::Node*)__this->Control());
    ::uPtr< ::app::Fuse::Android::Blitter*>(::app::Fuse::Android::Blitter__Singleton)->Blit(::app::Uno::Graphics::Texture2D__New_1(NULL, __this->_bitmapTexture, pixelSize, 1, 3), ::app::Uno::Float2__op_Division_1(NULL, __this->_pixelBounds.Position(), ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport()))), pointSize, m, ::app::Uno::Float2__op_Division_2(NULL, __this->_pixelBounds.Size(), ::app::Uno::Float2__op_Implicit_1(NULL, pixelSize)));
    ::app::OpenGL::GL__BindTexture(NULL, 3553, ::app::OpenGL::GLTextureHandle__Zero);
}

void TextRenderer__OnDraw(TextRenderer* __this, ::app::Fuse::DrawContext* dc)
{
    {
        __this->PrepareDraw(dc);
        __this->OnBitmapDraw(dc);
    }
}

void TextRenderer__OnTextLayoutPropertyChanged_1(TextRenderer* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->_layoutValid = false;
    __this->_textureValid = false;
}

void TextRenderer__OnTextRenderPropertyChanged_1(TextRenderer* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->_textureValid = false;
}

void TextRenderer__OnValueChanged_1(TextRenderer* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args)
{
    __this->_layoutValid = false;
    __this->_textureValid = false;
}

void TextRenderer__PrepareDraw(TextRenderer* __this, ::app::Fuse::DrawContext* dc)
{
    __this->UpdateLayout_1(__this->ActualSize().X * ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport())));

    if (__this->_textureValid)
    {
        return;
    }

    ::app::Uno::Int2 pixelSize = ::app::Uno::Int2__op_Explicit(NULL, ::app::Uno::Math__Ceil_2(NULL, __this->_pixelBounds.Size()));
    ::app::Uno::Float2 pointSize = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Implicit_1(NULL, pixelSize), ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport())));

    if ((pixelSize.X <= 0) || (pixelSize.Y <= 0))
    {
        __this->_textureValid = false;
        return;
    }

    ::app::Android::android::graphics::Bitmap* bitmap = ::app::Android::android::graphics::Bitmap__createBitmap_6(NULL, pixelSize.X, pixelSize.Y, ::app::Android::android::graphics::BitmapDLRConfig__get_ARGB_8888(NULL));
    ::app::Android::android::graphics::Canvas* canvas = ::app::Android::android::graphics::Canvas__New_6(NULL, bitmap);
    ::uPtr< ::app::Android::android::graphics::Canvas*>(canvas)->translate(-__this->_pixelBounds.Position().X, -__this->_pixelBounds.Position().Y);
    ::uPtr< ::app::Android::android::graphics::Bitmap*>(bitmap)->eraseColor(::app::Fuse::Android::Helpers__EncodeColor(NULL, ::app::Uno::Float4__New_1(NULL, 0.0f)));
    ::uPtr< ::app::Android::android::text::TextPaint*>(__this->_paint)->setColor(::app::Fuse::Android::Helpers__EncodeColor(NULL, ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->TextColor()));
    ::uPtr< ::app::Android::android::text::StaticLayout*>(__this->_layout)->j_draw(canvas);

    if (::app::OpenGL::GLTextureHandle__op_Equality(NULL, __this->_bitmapTexture, ::app::OpenGL::GLTextureHandle__Zero))
    {
        __this->_bitmapTexture = ::app::OpenGL::GL__CreateTexture(NULL);
    }

    ::app::OpenGL::GL__BindTexture(NULL, 3553, __this->_bitmapTexture);
    ::app::Android::android::opengl::GLUtils__texImage2D(NULL, 3553, 0, bitmap, 0);
    bitmap->recycle();
    __this->_textureValid = true;
}

::app::Android::android::text::LayoutDLRAlignment* TextRenderer__TextAlignmentToAndroidLayoutAlignment(TextRenderer* __this, int textAlignment)
{
    switch (textAlignment)
    {
        case 0:
        {
            return ::app::Android::android::text::LayoutDLRAlignment__get_ALIGN_NORMAL(NULL);
        }
        case 1:
        {
            return ::app::Android::android::text::LayoutDLRAlignment__get_ALIGN_CENTER(NULL);
        }
        case 2:
        {
            return ::app::Android::android::text::LayoutDLRAlignment__get_ALIGN_OPPOSITE(NULL);
        }
    }

    return ::app::Android::android::text::LayoutDLRAlignment__get_ALIGN_NORMAL(NULL);
}

void TextRenderer__TextureDispose(::uStatic* __this)
{
    ::app::OpenGL::GL__DeleteTexture(NULL, TextRenderer___texture);
    ::uPtr< ::app::Android::android::view::Surface*>(TextRenderer___surface)->release();
    TextRenderer___surface = NULL;
    ::uPtr< ::app::Android::android::graphics::SurfaceTexture*>(TextRenderer___surfaceTexture)->release();
    TextRenderer___surfaceTexture = NULL;
    ::uPtr< ::app::Uno::Graphics::VideoTexture*>(TextRenderer___videoTexture)->Dispose();
    TextRenderer___videoTexture = NULL;
    TextRenderer___textureInit = false;
}

void TextRenderer__TextureInit(::uStatic* __this)
{
    if (TextRenderer___textureInit)
    {
        return;
    }

    TextRenderer___texture = ::app::OpenGL::GL__CreateTexture(NULL);
    TextRenderer___videoTexture = ::app::Uno::Graphics::VideoTexture__New_1(NULL, TextRenderer___texture);
    TextRenderer___surfaceTexture = ::app::Android::android::graphics::SurfaceTexture__New_5(NULL, ::app::OpenGL::GLTextureHandle__op_Explicit(NULL, TextRenderer___texture));
    TextRenderer___surface = ::app::Android::android::view::Surface__New_5(NULL, TextRenderer___surfaceTexture);
    TextRenderer___textureInit = true;
}

void TextRenderer__UpdateLayout_1(TextRenderer* __this, float wrapWidth)
{
    if (__this->_layoutValid && (__this->_wrapWidth == wrapWidth))
    {
        return;
    }

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font*>(::app::Fuse::Controls::TextControl__FontProperty)->HasValue(__this->Control()))
    {
        ::uPtr< ::app::Android::android::text::TextPaint*>(__this->_paint)->setTypeface(::app::Fuse::Android::TypefaceCache__GetTypeface(NULL, ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->Font()));
    }
    else
    {
        ::uPtr< ::app::Android::android::text::TextPaint*>(__this->_paint)->setTypeface(::app::Android::android::graphics::Typeface__get_DEFAULT(NULL));
    }

    ::uPtr< ::app::Android::android::text::TextPaint*>(__this->_paint)->setTextSize(::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->FontSize() * ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport())));
    ::app::Android::android::text::LayoutDLRAlignment* align = __this->TextAlignmentToAndroidLayoutAlignment(::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->TextAlignment());
    ::app::Android::java::lang::String* text = ::app::Android::java::lang::String__op_Implicit(NULL, ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->RenderValue());
    float desiredWidth = ::app::Android::android::text::Layout__getDesiredWidth_1(NULL, (::uObject*)text, __this->_paint);

    if (wrapWidth == FLT_INF)
    {
        wrapWidth = desiredWidth;
    }

    int width = (int)::app::Uno::Math__Min_1(NULL, ::app::Uno::Math__Ceil_1(NULL, wrapWidth), 2.14748365e+09f);

    if ((::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->TextWrapping() == 0) && (desiredWidth > wrapWidth))
    {
        int layoutWidth = (int)::app::Uno::Math__Ceil_1(NULL, desiredWidth);
        __this->_layout = ::app::Android::android::text::StaticLayout__New_6(NULL, (::uObject*)text, 0, ::uPtr< ::uString*>(::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->RenderValue())->Length(), __this->_paint, layoutWidth, align, 1.0f, 0.0f, false, ::app::Android::android::text::TextUtilsDLRTruncateAt__get_END(NULL), width);
    }
    else
    {
        __this->_layout = ::app::Android::android::text::StaticLayout__New_7(NULL, (::uObject*)text, __this->_paint, width, align, 1.0f, 0.0f, false);
    }

    ::app::Uno::Rect bounds = ::app::Uno::Rect__New_1(NULL, 0.0f, 0.0f, 0.0f, 0.0f);

    for (int i = 0; i < ::uPtr< ::app::Android::android::text::StaticLayout*>(__this->_layout)->getLineCount(); ++i)
    {
        ::app::Android::android::graphics::Rect* temp = ::app::Android::android::graphics::Rect__New_5(NULL);
        ::uPtr< ::app::Android::android::text::StaticLayout*>(__this->_layout)->getLineBounds(i, temp);
        ::app::Uno::Rect lineBounds = TextRenderer__AndroidRectToUnoRect(NULL, temp);
        lineBounds.Left = ::uPtr< ::app::Android::android::text::StaticLayout*>(__this->_layout)->getLineLeft(i);
        lineBounds.Right = ::uPtr< ::app::Android::android::text::StaticLayout*>(__this->_layout)->getLineRight(i);

        if (i == 0)
        {
            bounds = lineBounds;
        }
        else
        {
            bounds = ::app::Uno::Rect__Union(NULL, bounds, lineBounds);
        }
    }

    __this->_pixelBounds = bounds;
    __this->_wrapWidth = wrapWidth;
    __this->_layoutValid = true;
    __this->_textureValid = false;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextureView__uType* TextureView__typeof()
{
    static ::uStaticStrong<TextureView__uType*> type;
    if (type != NULL) return type;

    type = (TextureView__uType*)::uAllocClassType(sizeof(TextureView__uType), "Fuse.Android.TextureView", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Android::GraphicsView__typeof());
    type->__fp_CreateGraphicsView = (::app::Android::android::view::View*(*)(::app::Fuse::Android::GraphicsView*))TextureView__CreateGraphicsView;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", TextureView__New_1, 0, true, TextureView__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextureView___ObjInit_4(TextureView* __this)
{
    ::app::Fuse::Android::GraphicsView___ObjInit_3(__this);
}

::app::Android::android::view::View* TextureView__CreateGraphicsView(TextureView* __this)
{
    ::app::Android::android::view::TextureView* textureView = ::app::Android::android::view::TextureView__New_9(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));
    ::uPtr< ::app::Android::android::view::TextureView*>(textureView)->setSurfaceTextureListener((::uObject*)::app::Fuse::Android::GLSurfaceTextureListener__New_5(NULL, __this));
    textureView->setOpaque(false);
    return (::app::Android::android::view::View*)textureView;
}

TextureView* TextureView__New_1(::uStatic* __this)
{
    TextureView* inst = (TextureView*)::uAllocObject(sizeof(TextureView), TextureView__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextView__uType* TextView__typeof()
{
    static ::uStaticStrong<TextView__uType*> type;
    if (type != NULL) return type;

    type = (TextView__uType*)::uAllocClassType(sizeof(TextView__uType), "Fuse.Android.TextView", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Android::TextViewBase__Fuse_Controls_TextControl__typeof());
    type->__fp_CreateTextView = (::app::Android::android::widget::TextView*(*)(::app::Fuse::Android::TextViewBase__Fuse_Controls_TextControl*))TextView__CreateTextView;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextView__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", TextView__New_1, 0, true, TextView__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextView___ObjInit_4(TextView* __this)
{
    ::app::Fuse::Android::TextViewBase__Fuse_Controls_TextControl___ObjInit_3(__this);
}

::app::Android::android::widget::TextView* TextView__CreateTextView(TextView* __this)
{
    return ::app::Android::android::widget::TextView__New_9(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));
}

TextView* TextView__New_1(::uStatic* __this)
{
    TextView* inst = (TextView*)::uAllocObject(sizeof(TextView), TextView__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ToggleButton__uType* ToggleButton__typeof()
{
    static ::uStaticStrong<ToggleButton__uType*> type;
    if (type != NULL) return type;

    type = (ToggleButton__uType*)::uAllocClassType(sizeof(ToggleButton__uType), "Fuse.Android.ToggleButton", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Android::CompoundButton__typeof());
    type->__fp_CreateCompoundButton = (::app::Android::android::widget::CompoundButton*(*)(::app::Fuse::Android::CompoundButton*))ToggleButton__CreateCompoundButton;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ToggleButton__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ToggleButton__New_1, 0, true, ToggleButton__typeof()));

    ::uRegisterType(type);
    return type;
}

void ToggleButton___ObjInit_4(ToggleButton* __this)
{
    ::app::Fuse::Android::CompoundButton___ObjInit_3(__this);
}

::app::Android::android::widget::CompoundButton* ToggleButton__CreateCompoundButton(ToggleButton* __this)
{
    return (::app::Android::android::widget::CompoundButton*)::app::Android::android::widget::Switch__New_17(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));
}

ToggleButton* ToggleButton__New_1(::uStatic* __this)
{
    ToggleButton* inst = (ToggleButton*)::uAllocObject(sizeof(ToggleButton), ToggleButton__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface*> TypefaceCache___typefaces;

TypefaceCache__uType* TypefaceCache__typeof()
{
    static ::uStaticStrong<TypefaceCache__uType*> type;
    if (type != NULL) return type;

    type = (TypefaceCache__uType*)::uAllocClassType(sizeof(TypefaceCache__uType), "Fuse.Android.TypefaceCache");

    type->SetFields(1,
        ::uNewField("_typefaces", &TypefaceCache___typefaces, 0, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("GetTypeface", TypefaceCache__GetTypeface, 0, true, ::app::Android::android::graphics::Typeface__typeof(), ::app::Fuse::Font__typeof()),
        ::uNewFunction("GetTypefaceFromBundleFile", TypefaceCache__GetTypefaceFromBundleFile, 0, true, ::app::Android::android::graphics::Typeface__typeof(), ::app::Uno::BundleFile__typeof()),
        ::uNewFunction("GetTypefaceFromFileSource", TypefaceCache__GetTypefaceFromFileSource, 0, true, ::app::Android::android::graphics::Typeface__typeof(), ::app::Uno::UX::FileSource__typeof()));

    ::uRegisterType(type);
    return type;
}

void TypefaceCache___TypeInit(::uStatic* __this)
{
    TypefaceCache___typefaces = ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface__New_1(NULL);
}

::app::Android::android::graphics::Typeface* TypefaceCache__GetTypeface(::uStatic* __this, ::app::Fuse::Font* font)
{
    if (::uIs(::uPtr< ::app::Fuse::Font*>(font)->File(), ::app::Uno::UX::BundleFileSource__typeof()))
    {
        return TypefaceCache__GetTypefaceFromBundleFile(NULL, ::uPtr< ::app::Uno::UX::BundleFileSource*>(::uCast< ::app::Uno::UX::BundleFileSource*>(::uPtr< ::app::Fuse::Font*>(font)->File(), ::app::Uno::UX::BundleFileSource__typeof()))->BundleFile);
    }

    return TypefaceCache__GetTypefaceFromFileSource(NULL, ::uPtr< ::app::Fuse::Font*>(font)->File());
}

::app::Android::android::graphics::Typeface* TypefaceCache__GetTypefaceFromBundleFile(::uStatic* __this, ::app::Uno::BundleFile* file)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface*>(TypefaceCache___typefaces)->ContainsKey(::uPtr< ::app::Uno::BundleFile*>(file)->Name()))
    {
        return ::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface*>(TypefaceCache___typefaces)->Item(::uPtr< ::app::Uno::BundleFile*>(file)->Name());
    }

    ::app::Android::android::content::res::AssetManager* assetManager = ::uPtr< ::app::Android::android::app::Activity*>(::app::Android::android::app::Activity__GetAppActivity(NULL))->getAssets();
    ::app::Android::android::graphics::Typeface* typeface = ::app::Android::android::graphics::Typeface__createFromAsset(NULL, assetManager, ::app::Android::java::lang::String__op_Implicit(NULL, ::uPtr< ::app::Uno::BundleFile*>(file)->Name()));
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface*>(TypefaceCache___typefaces)->Add(file->Name(), typeface);
    return typeface;
}

::app::Android::android::graphics::Typeface* TypefaceCache__GetTypefaceFromFileSource(::uStatic* __this, ::app::Uno::UX::FileSource* fileSource)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface*>(TypefaceCache___typefaces)->ContainsKey(::uPtr< ::app::Uno::UX::FileSource*>(fileSource)->Name))
    {
        return ::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface*>(TypefaceCache___typefaces)->Item(::uPtr< ::app::Uno::UX::FileSource*>(fileSource)->Name);
    }

    ::uArray* data = ::uPtr< ::app::Uno::UX::FileSource*>(fileSource)->ReadAllBytes();
    ::uString* path = ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::IO::Directory__GetUserDirectory(NULL, 1), ::uGetConstString("/tempFont"));
    ::app::Uno::IO::File__WriteAllBytes(NULL, path, data);
    ::app::Android::android::graphics::Typeface* typeface = ::app::Android::android::graphics::Typeface__createFromFile_1(NULL, ::app::Android::java::lang::String__op_Implicit(NULL, path));
    ::app::Uno::IO::File__Delete(NULL, path);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface*>(TypefaceCache___typefaces)->Add(fileSource->Name, typeface);
    return typeface;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass VerticalScrollView___javaClass_6;

VerticalScrollView__uType* VerticalScrollView__typeof()
{
    static ::uStaticStrong<VerticalScrollView__uType*> type;
    if (type != NULL) return type;

    type = (VerticalScrollView__uType*)::uAllocClassType(sizeof(VerticalScrollView__uType), "Fuse.Android.VerticalScrollView", false, 3, 1, 0);

    type->SetBaseType(::app::Android::android::widget::ScrollView__typeof());
    type->__fp_onScrollChanged = (void(*)(::app::Android::android::view::View*, int, int, int, int))VerticalScrollView__onScrollChanged;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(VerticalScrollView__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(VerticalScrollView__uType, __interface_1),
        ::app::Android::android::view::ViewParent__typeof(), offsetof(VerticalScrollView__uType, __interface_2));

    type->SetStrongRefs(
        "_sv", offsetof(VerticalScrollView, _sv));

    type->SetFields(2,
        ::uNewField("_javaClass", &VerticalScrollView___javaClass_6, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("_sv", NULL, offsetof(VerticalScrollView, _sv), ::app::Fuse::Android::ScrollView__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", VerticalScrollView__New_17, 0, true, VerticalScrollView__typeof(), ::app::Fuse::Android::ScrollView__typeof()));

    ::uRegisterType(type);
    return type;
}

void VerticalScrollView___ObjInit_20(VerticalScrollView* __this, ::app::Fuse::Android::ScrollView* sv)
{
    if (!__this->_subclassed)
    {
        __this->_subclassed = true;
        __this->_javaClassName = ::uGetConstString("com.Bindings.Binding_Fuse_Android_VerticalScrollView");
    }

    ::app::Android::android::widget::ScrollView___ObjInit_19(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);

    if (::app::Android::Base::Primitives::ujclass__op_Equality(NULL, VerticalScrollView___javaClass_6, ::app::Android::Base::Primitives::ujclass__get_Null(NULL)))
    {
        VerticalScrollView___javaClass_6 = ::app::Android::Base::JNI__LocalToGlobalRef(NULL, ::app::Android::Base::JNI__LoadClass_3(NULL, ::uGetConstString("com.Bindings.Binding_Fuse_Android_VerticalScrollView"), false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onScrollChanged","(JIIIIJJJJ)V",Binding_Fuse_Android_VerticalScrollView__onScrollChanged22996);
        COMMIT_REG_MTD(VerticalScrollView___javaClass_6);
    }

    jclass tmpCls = ::app::Android::Base::JNI__LoadClass_3(NULL, __this->_javaClassName, false);
    jmethodID mtd = ::app::Android::Base::JNI__GetMethodID(NULL, tmpCls, ::uGetConstString("<init>"), ::uGetConstString("(JLandroid/content/Context;)V"));
    jobject tmp = ::app::Android::Base::JNI__NewObject_2(NULL, tmpCls, mtd, ::app::Android::Base::Primitives::ujvalue__op_Implicit_16(NULL, (jlong)__this->__obj_weak), ::app::Android::Base::Primitives::ujvalue__op_Implicit_17(NULL, ::uPtr< ::app::Android::android::content::Context*>((::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL))->_GetJavaObject()));
    ::app::Android::Base::JNI__CheckException(NULL);
    __this->_javaObject = ::app::Android::Base::JNI__LocalToGlobalRef_1(NULL, tmp);
    ::app::Android::Base::JNI__DeleteLocalRef(NULL, tmpCls);
    __this->_sv = sv;
}

VerticalScrollView* VerticalScrollView__New_17(::uStatic* __this, ::app::Fuse::Android::ScrollView* sv)
{
    VerticalScrollView* inst = (VerticalScrollView*)::uAllocObject(sizeof(VerticalScrollView), VerticalScrollView__typeof());
    inst->_ObjInit_20(sv);
    return inst;
}

void VerticalScrollView__onScrollChanged(VerticalScrollView* __this, int x, int y, int oldx, int oldy)
{
    ::uPtr< ::app::Fuse::Android::ScrollView*>(__this->_sv)->OnScrollChanged(x, y);
    ::app::Android::android::view::View__onScrollChanged(__this, x, y, oldx, oldy);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

View__uType* View__typeof()
{
    static ::uStaticStrong<View__uType*> type;
    if (type != NULL) return type;

    type = (View__uType*)::uAllocClassType(sizeof(View__uType), "Fuse.Android.View", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Node__typeof());
    type->__fp_AdjustLayout = View__AdjustLayout;
    type->__fp_Create = View__Create;
    type->__fp_get_HitTestLocalBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Node*))View__get_HitTestLocalBounds;
    type->__fp_get_LocalRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Node*))View__get_LocalRenderBounds;
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))View__GetMarginSize;
    type->__fp_OnArrangeMarginBox = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, ::app::Uno::Float2, int))View__OnArrangeMarginBox;
    type->__fp_OnHitTest = (void(*)(::app::Fuse::Node*, ::app::Fuse::HitTestContext*))View__OnHitTest;
    type->__fp_PrependImplicitTransform = (void(*)(::app::Fuse::Node*, ::app::Fuse::FastMatrix*))View__PrependImplicitTransform;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(View__uType, __interface_0));

    type->SetFunctions(9,
        ::uNewFunction("AdjustLayout", type->__fp_AdjustLayout, offsetof(View__uType, __fp_AdjustLayout), false, ::app::Uno::Float4__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("Create", type->__fp_Create, offsetof(View__uType, __fp_Create), false, ::app::Android::android::view::View__typeof()),
        ::uNewFunction("CreateInternal", type->__fp_CreateInternal, offsetof(View__uType, __fp_CreateInternal), false, ::app::Android::android::view::View__typeof()),
        ::uNewFunction("get_ActualSize", View__get_ActualSize, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_NativeView", View__get_NativeView, 0, false, ::app::Fuse::Android::NativeView__typeof()),
        ::uNewFunction("get_Position", View__get_Position, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("IsPointInside", View__IsPointInside, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_ActualSize", View__set_ActualSize, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Position", View__set_Position, 0, false, ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void View___ObjInit_1(View* __this)
{
    ::app::Fuse::Node___ObjInit(__this);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(__this->Behaviors()), (::app::Fuse::Behavior*)::app::Fuse::Android::LeafView__New_1(NULL));
}

::app::Uno::Float4 View__AdjustLayout(View* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 size)
{
    return ::app::Uno::Float4__New_7(NULL, position, size);
}

::app::Android::android::view::View* View__Create(View* __this)
{
    return __this->CreateInternal();
}

::app::Uno::Float2 View__get_ActualSize(View* __this)
{
    return __this->_ActualSize;
}

::app::Fuse::NodeBounds* View__get_HitTestLocalBounds(View* __this)
{
    return ::app::Fuse::NodeBounds__Rect(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
}

::app::Uno::Rect View__get_LocalRenderBounds(View* __this)
{
    return ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
}

::app::Fuse::Android::NativeView* View__get_NativeView(View* __this)
{
    return ::app::Fuse::Android::NativeView__GetFrom(NULL, (::app::Fuse::Node*)__this);
}

::app::Uno::Float2 View__get_Position(View* __this)
{
    return __this->_Position;
}

::app::Uno::Float2 View__GetMarginSize(View* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    float density = ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport()));
    int w = (int)(fillSize.X * density);
    int h = (int)(fillSize.Y * density);

    if ((fillSet & 1) == 1)
    {
        w = ::app::Android::android::view::ViewDLRMeasureSpec__makeMeasureSpec(NULL, w, ::app::Android::android::view::ViewDLRMeasureSpec__get_EXACTLY(NULL));
    }
    else
    {
        w = 0;
    }

    if ((fillSet & 2) == 2)
    {
        h = ::app::Android::android::view::ViewDLRMeasureSpec__makeMeasureSpec(NULL, h, ::app::Android::android::view::ViewDLRMeasureSpec__get_EXACTLY(NULL));
    }
    else
    {
        h = 0;
    }

    ::uPtr< ::app::Android::android::view::View*>(::uPtr< ::app::Fuse::Android::NativeView*>(__this->NativeView())->Handle())->measure(w, h);
    w = ::uPtr< ::app::Android::android::view::View*>(::uPtr< ::app::Fuse::Android::NativeView*>(__this->NativeView())->Handle())->getMeasuredWidth();
    h = ::uPtr< ::app::Android::android::view::View*>(::uPtr< ::app::Fuse::Android::NativeView*>(__this->NativeView())->Handle())->getMeasuredHeight();
    return ::app::Uno::Float2__New_2(NULL, (float)w / density, (float)h / density);
}

bool View__IsPointInside(View* __this, ::app::Uno::Float2 localPoint)
{
    return !((((localPoint.X < 0.0f) || (localPoint.Y < 0.0f)) || (localPoint.X > __this->ActualSize().X)) || (localPoint.Y > __this->ActualSize().Y));
}

::app::Uno::Float2 View__OnArrangeMarginBox(View* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet)
{
    ::app::Uno::Float2 sz = availableSize;

    if (!((availSet & 3) == 3))
    {
        ::app::Uno::Float2 rsz = __this->GetMarginSize(availableSize, availSet);

        if (!((availSet & 1) == 1))
        {
            sz.X = rsz.X;
        }

        if (!((availSet & 2) == 2))
        {
            sz.Y = rsz.Y;
        }
    }

    ::app::Uno::Float4 layout = __this->AdjustLayout(position, sz);

    if (::app::Uno::Float2__op_Inequality(NULL, __this->Position(), ::app::Uno::Float2__New_2(NULL, layout.X, layout.Y)) || ::app::Uno::Float2__op_Inequality(NULL, __this->ActualSize(), ::app::Uno::Float2__New_2(NULL, layout.Z, layout.W)))
    {
        __this->Position(::app::Uno::Float2__New_2(NULL, layout.X, layout.Y));
        __this->ActualSize(::app::Uno::Float2__New_2(NULL, layout.Z, layout.W));
        __this->InvalidateLocalTransform();
    }

    ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Android::NativeView__NotifyNewTransform, __this->NativeView()));
    return __this->ActualSize();
}

void View__OnHitTest(View* __this, ::app::Fuse::HitTestContext* htc)
{
    if (__this->IsPointInside(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint()))
    {
        ::uPtr< ::app::Fuse::HitTestContext*>(htc)->Hit((::app::Fuse::Node*)__this);
    }
}

void View__PrependImplicitTransform(View* __this, ::app::Fuse::FastMatrix* m)
{
    ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependTranslation_1(::app::Uno::Float3__New_4(NULL, __this->Position(), 0.0f));
}

void View__set_ActualSize(View* __this, ::app::Uno::Float2 value)
{
    __this->_ActualSize = value;
}

void View__set_Position(View* __this, ::app::Uno::Float2 value)
{
    __this->_Position = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass WebChromeClient___javaClass_3;

WebChromeClient__uType* WebChromeClient__typeof()
{
    static ::uStaticStrong<WebChromeClient__uType*> type;
    if (type != NULL) return type;

    type = (WebChromeClient__uType*)::uAllocClassType(sizeof(WebChromeClient__uType), "Fuse.Android.WebChromeClient", false, 2, 1, 0);

    type->SetBaseType(::app::Android::android::webkit::WebChromeClient__typeof());
    type->__fp_onProgressChanged = (void(*)(::app::Android::android::webkit::WebChromeClient*, ::app::Android::android::webkit::WebView*, int))WebChromeClient__onProgressChanged;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(WebChromeClient__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(WebChromeClient__uType, __interface_1));

    type->SetStrongRefs(
        "ProgressChanged", offsetof(WebChromeClient, ProgressChanged));

    type->SetFields(1,
        ::uNewField("_javaClass", &WebChromeClient___javaClass_3, 0, ::app::Android::Base::Primitives::ujclass__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("add_ProgressChanged", WebChromeClient__add_ProgressChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunction(".ctor", WebChromeClient__New_7, 0, true, WebChromeClient__typeof()),
        ::uNewFunctionVoid("remove_ProgressChanged", WebChromeClient__remove_ProgressChanged, 0, false, ::app::Uno::EventHandler__typeof()));

    ::uRegisterType(type);
    return type;
}

void WebChromeClient___ObjInit_6(WebChromeClient* __this)
{
    if (!__this->_subclassed)
    {
        __this->_subclassed = true;
        __this->_javaClassName = ::uGetConstString("com.Bindings.Binding_Fuse_Android_WebChromeClient");
    }

    ::app::Android::android::webkit::WebChromeClient___ObjInit_5(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);

    if (::app::Android::Base::Primitives::ujclass__op_Equality(NULL, WebChromeClient___javaClass_3, ::app::Android::Base::Primitives::ujclass__get_Null(NULL)))
    {
        WebChromeClient___javaClass_3 = ::app::Android::Base::JNI__LocalToGlobalRef(NULL, ::app::Android::Base::JNI__LoadClass_3(NULL, ::uGetConstString("com.Bindings.Binding_Fuse_Android_WebChromeClient"), false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onProgressChanged","(JLandroid/webkit/WebView;IJJ)V",Binding_Fuse_Android_WebChromeClient__onProgressChanged24000);
        COMMIT_REG_MTD(WebChromeClient___javaClass_3);
    }

    jclass tmpCls = ::app::Android::Base::JNI__LoadClass_3(NULL, __this->_javaClassName, false);
    jmethodID mtd = ::app::Android::Base::JNI__GetMethodID(NULL, tmpCls, ::uGetConstString("<init>"), ::uGetConstString("(J)V"));
    jobject tmp = ::app::Android::Base::JNI__NewObject_1(NULL, tmpCls, mtd, ::app::Android::Base::Primitives::ujvalue__op_Implicit_16(NULL, (jlong)__this->__obj_weak));
    ::app::Android::Base::JNI__CheckException(NULL);
    __this->_javaObject = ::app::Android::Base::JNI__LocalToGlobalRef_1(NULL, tmp);
    ::app::Android::Base::JNI__DeleteLocalRef(NULL, tmpCls);
}

void WebChromeClient__add_ProgressChanged(WebChromeClient* __this, ::uDelegate* value)
{
    __this->ProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ProgressChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

WebChromeClient* WebChromeClient__New_7(::uStatic* __this)
{
    WebChromeClient* inst = (WebChromeClient*)::uAllocObject(sizeof(WebChromeClient), WebChromeClient__typeof());
    inst->_ObjInit_6();
    return inst;
}

void WebChromeClient__onProgressChanged(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, int arg1)
{
    ::app::Android::android::webkit::WebChromeClient__onProgressChanged(__this, arg0, arg1);

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ProgressChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ProgressChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void WebChromeClient__remove_ProgressChanged(WebChromeClient* __this, ::uDelegate* value)
{
    __this->ProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ProgressChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WebView__uType* WebView__typeof()
{
    static ::uStaticStrong<WebView__uType*> type;
    if (type != NULL) return type;

    type = (WebView__uType*)::uAllocClassType(sizeof(WebView__uType), "Fuse.Android.WebView", false, 4, 3, 0);

    type->SetBaseType(::app::Fuse::Android::ControlView__Fuse_Controls_WebView__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_WebView*))WebView__Attach;
    type->__fp_CreateInternal = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))WebView__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_WebView*))WebView__Detach;
    type->__interface_1.__fp_get_Url = (::uString*(*)(void*))WebView__get_Url;
    type->__interface_1.__fp_set_Url = (void(*)(void*, ::uString*))WebView__set_Url;
    type->__interface_1.__fp_get_DocumentTitle = (::uString*(*)(void*))WebView__get_DocumentTitle;
    type->__interface_1.__fp_get_File = (::app::Uno::UX::FileSource*(*)(void*))WebView__get_File;
    type->__interface_1.__fp_set_File = (void(*)(void*, ::app::Uno::UX::FileSource*))WebView__set_File;
    type->__interface_2.__fp_get_Progress = (double(*)(void*))WebView__get_Progress;
    type->__interface_2.__fp_add_ProgressChanged = (void(*)(void*, ::uDelegate*))WebView__add_ProgressChanged;
    type->__interface_2.__fp_remove_ProgressChanged = (void(*)(void*, ::uDelegate*))WebView__remove_ProgressChanged;
    type->__interface_3.__fp_GoBack = (void(*)(void*))WebView__GoBack;
    type->__interface_3.__fp_GoForward = (void(*)(void*))WebView__GoForward;
    type->__interface_3.__fp_Reload = (void(*)(void*))WebView__Reload;
    type->__interface_3.__fp_Stop = (void(*)(void*))WebView__Stop;
    type->__interface_3.__fp_LoadUrl = (void(*)(void*, ::uString*))WebView__LoadUrl;
    type->__interface_3.__fp_get_CanGoBack = (bool(*)(void*))WebView__get_CanGoBack;
    type->__interface_3.__fp_get_CanGoForward = (bool(*)(void*))WebView__get_CanGoForward;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(WebView__uType, __interface_0),
        ::app::Fuse::Controls::IWebView__typeof(), offsetof(WebView__uType, __interface_1),
        ::app::Fuse::Triggers::IProgress__typeof(), offsetof(WebView__uType, __interface_2),
        ::app::Fuse::Navigation::IWebViewNavgation__typeof(), offsetof(WebView__uType, __interface_3));

    type->SetStrongRefs(
        "_file", offsetof(WebView, _file),
        "_webChromeClient", offsetof(WebView, _webChromeClient),
        "_webView", offsetof(WebView, _webView));

    type->SetFields(3,
        ::uNewField("_file", NULL, offsetof(WebView, _file), ::app::Uno::UX::FileSource__typeof()),
        ::uNewField("_webChromeClient", NULL, offsetof(WebView, _webChromeClient), ::app::Fuse::Android::WebChromeClient__typeof()),
        ::uNewField("_webView", NULL, offsetof(WebView, _webView), ::app::Android::android::webkit::WebView__typeof()));

    type->SetFunctions(17,
        ::uNewFunctionVoid("add_ProgressChanged", WebView__add_ProgressChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunction("get_CanGoBack", WebView__get_CanGoBack, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_CanGoForward", WebView__get_CanGoForward, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_DocumentTitle", WebView__get_DocumentTitle, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_File", WebView__get_File, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction("get_Progress", WebView__get_Progress, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Url", WebView__get_Url, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("GoBack", WebView__GoBack, 0, false),
        ::uNewFunctionVoid("GoForward", WebView__GoForward, 0, false),
        ::uNewFunctionVoid("LoadFile", WebView__LoadFile, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunctionVoid("LoadUrl", WebView__LoadUrl, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", WebView__New_1, 0, true, WebView__typeof()),
        ::uNewFunctionVoid("Reload", WebView__Reload, 0, false),
        ::uNewFunctionVoid("remove_ProgressChanged", WebView__remove_ProgressChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("set_File", WebView__set_File, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunctionVoid("set_Url", WebView__set_Url, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Stop", WebView__Stop, 0, false));

    ::uRegisterType(type);
    return type;
}

void WebView___ObjInit_3(WebView* __this)
{
    ::app::Fuse::Android::ControlView__Fuse_Controls_WebView___ObjInit_2(__this);
}

void WebView__add_ProgressChanged(WebView* __this, ::uDelegate* value)
{
    ::uPtr< ::app::Fuse::Android::WebChromeClient*>(__this->_webChromeClient)->add_ProgressChanged(value);
}

void WebView__Attach(WebView* __this)
{
    __this->Create();
    ::uPtr< ::app::Fuse::Controls::WebView*>(__this->Control())->WebViewClient((::uObject*)__this);
}

::app::Android::android::view::View* WebView__CreateInternal(WebView* __this)
{
    if (::app::Android::java::lang::Object__op_Equality_1(NULL, (::app::Android::java::lang::Object*)__this->_webView, NULL))
    {
        __this->_webChromeClient = ::app::Fuse::Android::WebChromeClient__New_7(NULL);
        __this->_webView = ::app::Android::android::webkit::WebView__New_13(NULL, (::app::Android::android::content::Context*)::app::Android::android::app::Activity__GetAppActivity(NULL));
        ::uPtr< ::app::Android::android::webkit::WebView*>(__this->_webView)->setWebViewClient(::app::Android::android::webkit::WebViewClient__New_5(NULL));
        ::uPtr< ::app::Android::android::webkit::WebView*>(__this->_webView)->setWebChromeClient((::app::Android::android::webkit::WebChromeClient*)__this->_webChromeClient);
    }

    return (::app::Android::android::view::View*)__this->_webView;
}

void WebView__Detach(WebView* __this)
{
    ::uPtr< ::app::Fuse::Controls::WebView*>(__this->Control())->WebViewClient(NULL);
}

bool WebView__get_CanGoBack(WebView* __this)
{
    return ::uPtr< ::app::Android::android::webkit::WebView*>(__this->_webView)->canGoBack();
}

bool WebView__get_CanGoForward(WebView* __this)
{
    return ::uPtr< ::app::Android::android::webkit::WebView*>(__this->_webView)->canGoForward();
}

::uString* WebView__get_DocumentTitle(WebView* __this)
{
    return ::app::Android::java::lang::String__op_Implicit_1(NULL, ::uPtr< ::app::Android::android::webkit::WebView*>(__this->_webView)->getTitle());
}

::app::Uno::UX::FileSource* WebView__get_File(WebView* __this)
{
    return __this->_file;
}

double WebView__get_Progress(WebView* __this)
{
    return (double)::uPtr< ::app::Android::android::webkit::WebView*>(__this->_webView)->getProgress() / 100.0;
}

::uString* WebView__get_Url(WebView* __this)
{
    return ::app::Android::java::lang::String__op_Implicit_1(NULL, ::uPtr< ::app::Android::android::webkit::WebView*>(__this->_webView)->getUrl());
}

void WebView__GoBack(WebView* __this)
{
    ::uPtr< ::app::Android::android::webkit::WebView*>(__this->_webView)->goBack();
}

void WebView__GoForward(WebView* __this)
{
    ::uPtr< ::app::Android::android::webkit::WebView*>(__this->_webView)->goForward();
}

void WebView__LoadFile(WebView* __this, ::app::Uno::UX::FileSource* file)
{
    ::uString* data = ::uPtr< ::app::Uno::UX::FileSource*>(file)->ReadAllText();
    ::uPtr< ::app::Android::android::webkit::WebView*>(__this->_webView)->loadDataWithBaseURL(NULL, ::app::Android::java::lang::String__op_Implicit(NULL, data), ::app::Android::java::lang::String__op_Implicit(NULL, ::uGetConstString("text/html")), ::app::Android::java::lang::String__op_Implicit(NULL, ::uGetConstString("utf-8")), NULL);
}

void WebView__LoadUrl(WebView* __this, ::uString* url)
{
    if (::app::Uno::String__op_Equality(NULL, url, NULL))
    {
        return;
    }

    ::uPtr< ::app::Android::android::webkit::WebView*>(__this->_webView)->loadUrl(::app::Android::java::lang::String__op_Implicit(NULL, url));
}

WebView* WebView__New_1(::uStatic* __this)
{
    WebView* inst = (WebView*)::uAllocObject(sizeof(WebView), WebView__typeof());
    inst->_ObjInit_3();
    return inst;
}

void WebView__Reload(WebView* __this)
{
    ::uPtr< ::app::Android::android::webkit::WebView*>(__this->_webView)->reload();
}

void WebView__remove_ProgressChanged(WebView* __this, ::uDelegate* value)
{
    ::uPtr< ::app::Fuse::Android::WebChromeClient*>(__this->_webChromeClient)->remove_ProgressChanged(value);
}

void WebView__set_File(WebView* __this, ::app::Uno::UX::FileSource* value)
{
    __this->_file = value;

    if (__this->_file != NULL)
    {
        __this->LoadFile(__this->_file);
    }
}

void WebView__set_Url(WebView* __this, ::uString* value)
{
    __this->LoadUrl(value);
}

void WebView__Stop(WebView* __this)
{
    ::uPtr< ::app::Android::android::webkit::WebView*>(__this->_webView)->stopLoading();
}

}}}
