SONAME = libTestApp.so
ABI = armeabi-v7a

NDK_DIR = C:/Users/Kuro/AppData/Local/VirtualStore/Windows/SysWOW64/android-ndk-r10e
STLPORT_DIR = $(NDK_DIR)/sources/cxx-stl/stlport
SYSROOT_DIR = $(NDK_DIR)/platforms/android-9/arch-arm

CFLAGS = -O3 -g -DNDEBUG -DDUK_F_32BIT_PTRS -DDUK_F_USE_REPL_ALL
INCLUDE_DIRS = -Iinclude -IC:/ProgramData/Uno/Packages/Fuse.Scripting.V8/0.18.8 -IC:/ProgramData/Uno/Packages/UnoCore/0.19.6/Targets/CPlusPlus/Prebuilt/Android/include
LD_DIRS = -LC:/ProgramData/Uno/Packages/Fuse.Scripting.V8/0.18.8/lib/V8-Android -LC:/ProgramData/Uno/Packages/UnoCore/0.19.6/Targets/CPlusPlus/Prebuilt/Android/lib/$(ABI)
LD_LIBS = -landroid -lEGL -lGLESv2 -llog -lv8_base -lv8_libbase -lv8_libplatform -lv8_nosnapshot -lXli -lXliFont -lXliGL -lXliImage -lXliMain -lXliPlatform -lz
STRIP_FLAGS = 

COMMON_FLAGS = \
	$(CFLAGS) \
	$(INCLUDE_DIRS) \
	--sysroot=$(SYSROOT_DIR) \
	-DANDROID \
	-fdata-sections \
	-ffunction-sections \
	-finline-limit=64 \
	-fno-strict-aliasing \
	-fomit-frame-pointer \
	-fpic \
	-fsigned-char \
	-funwind-tables \
	-isystem $(STLPORT_DIR)/stlport \
	-isystem $(SYSROOT_DIR)/usr/include \
	-march=armv7-a \
	-mfloat-abi=softfp \
	-mfpu=vfpv3-d16 \
	-mthumb \
	-no-canonical-prefixes \
	-Wa,--noexecstack \
	-Wno-psabi

CXX_FLAGS = \
	$(COMMON_FLAGS) \
	-fexceptions \
	-frtti \
	-isystem $(STLPORT_DIR)/stlport \
	-Wno-invalid-offsetof \
	-std=c++11

CC_FLAGS = \
	$(COMMON_FLAGS) \
	-std=c99

LD_FLAGS = \
	$(CXX_FLAGS) \
	$(LD_DIRS) \
	$(LD_LIBS) \
	-Wl,--fix-cortex-a8 \
	-Wl,--gc-sections \
	-Wl,--no-undefined \
	-Wl,-z,noexecstack \
	-Wl,-z,now \
	-Wl,-z,relro

STATIC_LIBS = \
	C:/ProgramData/Uno/Packages/Fuse.Scripting.V8/0.18.8/lib/V8-Android/libv8_base.a \
	C:/ProgramData/Uno/Packages/Fuse.Scripting.V8/0.18.8/lib/V8-Android/libv8_libbase.a \
	C:/ProgramData/Uno/Packages/Fuse.Scripting.V8/0.18.8/lib/V8-Android/libv8_libplatform.a \
	C:/ProgramData/Uno/Packages/Fuse.Scripting.V8/0.18.8/lib/V8-Android/libv8_nosnapshot.a \
	C:/ProgramData/Uno/Packages/UnoCore/0.19.6/Targets/CPlusPlus/Prebuilt/Android/lib/$(ABI)/libXli.a \
	C:/ProgramData/Uno/Packages/UnoCore/0.19.6/Targets/CPlusPlus/Prebuilt/Android/lib/$(ABI)/libXliFont.a \
	C:/ProgramData/Uno/Packages/UnoCore/0.19.6/Targets/CPlusPlus/Prebuilt/Android/lib/$(ABI)/libXliGL.a \
	C:/ProgramData/Uno/Packages/UnoCore/0.19.6/Targets/CPlusPlus/Prebuilt/Android/lib/$(ABI)/libXliImage.a \
	C:/ProgramData/Uno/Packages/UnoCore/0.19.6/Targets/CPlusPlus/Prebuilt/Android/lib/$(ABI)/libXliMain.a \
	C:/ProgramData/Uno/Packages/UnoCore/0.19.6/Targets/CPlusPlus/Prebuilt/Android/lib/$(ABI)/libXliPlatform.a \
	$(STLPORT_DIR)/libs/$(ABI)/libstlport_static.a

##if #(HOST_WIN32:Defined)
CP = xcopy /y
##else
#CP = cp -f
##endif

all: libs/$(ABI)/$(SONAME)
all: libs/$(ABI)/gdbserver
all: libs/$(ABI)/gdb.setup

libs/$(ABI)/gdbserver: | libs/$(ABI)
	$(CP) C:\Users\Kuro\AppData\Local\VirtualStore\Windows\SysWOW64\android-ndk-r10e\prebuilt\android-arm\gdbserver\gdbserver libs\$(ABI)

libs/$(ABI)/gdb.setup: gdb.setup | libs/$(ABI)
	$(CP) gdb.setup libs\$(ABI)

libs/$(ABI)/$(SONAME): obj/_root.g.cpp.o
libs/$(ABI)/$(SONAME): obj/_root.MainView.cpp.o
libs/$(ABI)/$(SONAME): obj/_root.MainView.Factory.cpp.o
libs/$(ABI)/$(SONAME): obj/_root.MainView.Fuse_Drawing_SolidColor_float4_Color_Property.cpp.o
libs/$(ABI)/$(SONAME): obj/_root.MainView.Fuse_Effects_Blur_float_Radius_Property.cpp.o
libs/$(ABI)/$(SONAME): obj/_root.MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_Status-5e09bf19.cpp.o
libs/$(ABI)/$(SONAME): obj/_root.MainView.Fuse_Triggers_WhileBool_bool_Value_Property.cpp.o
libs/$(ABI)/$(SONAME): obj/_root.MainView.Template.cpp.o
libs/$(ABI)/$(SONAME): obj/_root.MainView.Template1.cpp.o
libs/$(ABI)/$(SONAME): obj/_root.MainView.Template2.cpp.o
libs/$(ABI)/$(SONAME): obj/_root.TestApp_bundle.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.animation.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.app.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.content.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.content.res.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.graphics.drawable.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.graphics.drawable.shapes.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.graphics.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.location.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.media.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.net.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.net.http.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.opengl.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.os.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.test.mock.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.text.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.util.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.view.accessibility.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.view.animation.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.view.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.view.inputmethod.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.webkit.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.android.widget.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.Base.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.Base.Primitives.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.Base.Types.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.Base.Wrappers.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.com.fuse.ExperimentalHttp.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.com.fuse.Native.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.Fallbacks.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.java.io.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.java.lang.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.java.lang.reflect.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.java.net.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.java.util.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Android.Runtime.g.cpp.o
libs/$(ABI)/$(SONAME): obj/BootstrapperImpl_Android.cpp.o
libs/$(ABI)/$(SONAME): obj/duktape.c.o
libs/$(ABI)/$(SONAME): obj/Experimental.Cache.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Experimental.Http.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Experimental.Http.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Experimental.Physics.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Experimental.TextureLoader.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Android.Controls.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Android.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Android.NativeViews.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Animations.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.BasicTheme.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Camera.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Controls.FallbackTextEdit.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Controls.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Controls.Graphics.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Controls.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Designer.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Desktop.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Drawing.Batching.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Drawing.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Drawing.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Drawing.Meshes.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Drawing.Primitives.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Drawing.Tesselation.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Effects.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Elements.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Elements.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Entities.Designer.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Entities.Filters.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Entities.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Entities.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Entities.Primitives.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Entities.Processing.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.GeoLocation.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Gestures.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Gestures.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Input.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Input.UX.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Internal.Drawing.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.iOS.Controls.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.iOS.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.iOS.NativeViews.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Layouts.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Navigation.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Physics.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Preview.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Reactive.FuseJS.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Reactive.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Resources.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Scripting.Duktape.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Scripting.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Scripting.V8.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Scripting.V8.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Shapes.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Storage.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Themes.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Triggers.Actions.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Triggers.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Vibration.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Video.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Fuse.Video.Graphics.Android.g.cpp.o
libs/$(ABI)/$(SONAME): obj/JNIHelper.cpp.o
libs/$(ABI)/$(SONAME): obj/OpenGL.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Outracks.Simulator.Bytecode.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Outracks.Simulator.ByteFileSource.cpp.o
libs/$(ABI)/$(SONAME): obj/Outracks.Simulator.FileCache.cpp.o
libs/$(ABI)/$(SONAME): obj/Outracks.Simulator.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Outracks.Simulator.GeneratedApplication.cpp.o
libs/$(ABI)/$(SONAME): obj/Outracks.Simulator.Protocol.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Outracks.Simulator.Reflection.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Outracks.Simulator.Reflection.Native.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Outracks.Simulator.Runtime.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp.o
libs/$(ABI)/$(SONAME): obj/Outracks.Simulator.Runtime.UxFactory.cpp.o
libs/$(ABI)/$(SONAME): obj/Outracks.Simulator.Runtime.UxProperty-1.cpp.o
libs/$(ABI)/$(SONAME): obj/Outracks.Simulator.Runtime.UxTemplate.cpp.o
libs/$(ABI)/$(SONAME): obj/Outracks.UnoCore.Utilities.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Source/ActivityAndLifecycle/AApplication.cpp.o
libs/$(ABI)/$(SONAME): obj/Source/ActivityAndLifecycle/EntryPoints.cpp.o
libs/$(ABI)/$(SONAME): obj/Source/ActivityAndLifecycle/Platform2.cpp.o
libs/$(ABI)/$(SONAME): obj/Source/Graphics/GLHelper.cpp.o
libs/$(ABI)/$(SONAME): obj/Source/pugixml.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Collections.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Compiler.ExportTargetInterop.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Compiler.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Compiler.ImportServices.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Compiler.ShaderGenerator.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Content.Fonts.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Content.Images.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Content.Models.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Content.Splines.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Data.Xml.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Diagnostics.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Geometry.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Graphics.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.IO.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Net.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Net.Http.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Net.Http.Implementation.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Net.Sockets.Berkeley.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Net.Sockets.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Platform.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Platform.iOS.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Platform2.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Platform2.Implementation.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Reflection.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Runtime.Implementation.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Runtime.Implementation.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Text.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Threading.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Threading.Tasks.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Time.Calendars.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Time.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.Time.Text.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno.UX.g.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno/_invoke.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno/_main.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno/Base64.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno/Memory.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno/ObjectModel.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno/Reflection.cpp.o
libs/$(ABI)/$(SONAME): obj/Uno/Support.cpp.o
libs/$(ABI)/$(SONAME): $(STATIC_LIBS) Makefile link.x | libs/$(ABI)
	$(CXX) $(LD_FLAGS) -shared -Wl,-soname,$(SONAME) -o obj/$(SONAME) link.x $(STATIC_LIBS)
	$(STRIP) $(STRIP_FLAGS) -o libs/$(ABI)/$(SONAME) obj/$(SONAME)

obj/_root.g.cpp.o: include/_root.Fuse_Android_bundle.h
obj/_root.g.cpp.o: include/_root.Fuse_BasicTheme_bundle.h
obj/_root.g.cpp.o: include/_root.Fuse_Controls_bundle.h
obj/_root.g.cpp.o: include/_root.Fuse_Drawing_bundle.h
obj/_root.g.cpp.o: include/_root.Fuse_Drawing_Polygons_bundle.h
obj/_root.g.cpp.o: include/_root.Fuse_Drawing_Primitives_bundle.h
obj/_root.g.cpp.o: include/_root.Fuse_Effects_bundle.h
obj/_root.g.cpp.o: include/_root.Fuse_Elements_bundle.h
obj/_root.g.cpp.o: include/_root.Fuse_Entities_bundle.h
obj/_root.g.cpp.o: include/_root.Fuse_iOS_bundle.h
obj/_root.g.cpp.o: include/_root.Fuse_Reactive_bundle.h
obj/_root.g.cpp.o: include/_root.Fuse_Themes_bundle.h
obj/_root.g.cpp.o: include/_root.Fuse_Video_bundle.h
obj/_root.g.cpp.o: include/_root.FuseCore_bundle.h
obj/_root.g.cpp.o: include/_root.HashableWeakReference.h
obj/_root.g.cpp.o: include/_root.Outracks_Simulator_Client_Uno_bundle.h
obj/_root.g.cpp.o: include/_root.UnoCore_bundle.h
obj/_root.g.cpp.o: include/_root.WeakDictionary-2.h
obj/_root.g.cpp.o: include/Uno.Bool.h
obj/_root.g.cpp.o: include/Uno.BundleFile.h
obj/_root.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/_root.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/_root.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
obj/_root.g.cpp.o: include/Uno.Int.h
obj/_root.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
obj/_root.g.cpp.o: include/Uno.String.h
obj/_root.g.cpp.o: include/Uno.WeakReference-1.h
obj/_root.g.cpp.o: jni/_root.g.cpp | obj
	echo _root.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/_root.g.cpp.o -c jni/_root.g.cpp

obj/_root.MainView.cpp.o: include/_root.MainView.Factory.h
obj/_root.MainView.cpp.o: include/_root.MainView.Fuse_Effects_Blur_float_Radius_Property.h
obj/_root.MainView.cpp.o: include/_root.MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_Status-5e09bf19.h
obj/_root.MainView.cpp.o: include/_root.MainView.Fuse_Triggers_WhileBool_bool_Value_Property.h
obj/_root.MainView.cpp.o: include/_root.MainView.h
obj/_root.MainView.cpp.o: include/_root.MainView.Template.h
obj/_root.MainView.cpp.o: include/_root.MainView.Template1.h
obj/_root.MainView.cpp.o: include/_root.MainView.Template2.h
obj/_root.MainView.cpp.o: include/_root.TestApp_bundle.h
obj/_root.MainView.cpp.o: include/Fuse.Animations.Animator.h
obj/_root.MainView.cpp.o: include/Fuse.Animations.Change-1.h
obj/_root.MainView.cpp.o: include/Fuse.Animations.Easing.h
obj/_root.MainView.cpp.o: include/Fuse.AppBase.h
obj/_root.MainView.cpp.o: include/Fuse.BasicTheme.BasicTheme.h
obj/_root.MainView.cpp.o: include/Fuse.Behavior.h
obj/_root.MainView.cpp.o: include/Fuse.Controls.BottomBarBackground.h
obj/_root.MainView.cpp.o: include/Fuse.Controls.Button.h
obj/_root.MainView.cpp.o: include/Fuse.Controls.ContentControl.h
obj/_root.MainView.cpp.o: include/Fuse.Controls.DockPanel.h
obj/_root.MainView.cpp.o: include/Fuse.Controls.GraphicsView.h
obj/_root.MainView.cpp.o: include/Fuse.Controls.Image.h
obj/_root.MainView.cpp.o: include/Fuse.Controls.Page.h
obj/_root.MainView.cpp.o: include/Fuse.Controls.PageIndicator.h
obj/_root.MainView.cpp.o: include/Fuse.Controls.Panel.h
obj/_root.MainView.cpp.o: include/Fuse.Controls.Slider.h
obj/_root.MainView.cpp.o: include/Fuse.Controls.Switch.h
obj/_root.MainView.cpp.o: include/Fuse.Controls.Text.h
obj/_root.MainView.cpp.o: include/Fuse.Controls.TextControl.h
obj/_root.MainView.cpp.o: include/Fuse.Effects.Blur.h
obj/_root.MainView.cpp.o: include/Fuse.Effects.Effect.h
obj/_root.MainView.cpp.o: include/Fuse.Elements.Alignment.h
obj/_root.MainView.cpp.o: include/Fuse.Elements.Element.h
obj/_root.MainView.cpp.o: include/Fuse.Elements.SizeUnit.h
obj/_root.MainView.cpp.o: include/Fuse.Gestures.Clicked.h
obj/_root.MainView.cpp.o: include/Fuse.iOS.StatusBarConfig.h
obj/_root.MainView.cpp.o: include/Fuse.Layouts.Dock.h
obj/_root.MainView.cpp.o: include/Fuse.Navigation.INavigation.h
obj/_root.MainView.cpp.o: include/Fuse.Navigation.LinearNavigation.h
obj/_root.MainView.cpp.o: include/Fuse.Navigation.StructuredNavigation.h
obj/_root.MainView.cpp.o: include/Fuse.Navigation.SwipeDirection.h
obj/_root.MainView.cpp.o: include/Fuse.Navigation.SwipeEnds.h
obj/_root.MainView.cpp.o: include/Fuse.Navigation.SwipeNavigate.h
obj/_root.MainView.cpp.o: include/Fuse.Navigation.WhileActive.h
obj/_root.MainView.cpp.o: include/Fuse.Navigation.WhileNavigationTrigger.h
obj/_root.MainView.cpp.o: include/Fuse.Node.h
obj/_root.MainView.cpp.o: include/Fuse.Style.h
obj/_root.MainView.cpp.o: include/Fuse.StylePropertyWithUnit-3.h
obj/_root.MainView.cpp.o: include/Fuse.Theme.h
obj/_root.MainView.cpp.o: include/Fuse.Triggers.Actions.TriggerAction.h
obj/_root.MainView.cpp.o: include/Fuse.Triggers.ProgressAnimation.h
obj/_root.MainView.cpp.o: include/Fuse.Triggers.Trigger.h
obj/_root.MainView.cpp.o: include/Fuse.Triggers.WhileBool.h
obj/_root.MainView.cpp.o: include/Fuse.Triggers.WhileTrue.h
obj/_root.MainView.cpp.o: include/Fuse.Vibration.Vibrate.h
obj/_root.MainView.cpp.o: include/Uno.Bool.h
obj/_root.MainView.cpp.o: include/Uno.BundleFile.h
obj/_root.MainView.cpp.o: include/Uno.Collections.ICollection-1.h
obj/_root.MainView.cpp.o: include/Uno.Collections.IList-1.h
obj/_root.MainView.cpp.o: include/Uno.Double.h
obj/_root.MainView.cpp.o: include/Uno.Float.h
obj/_root.MainView.cpp.o: include/Uno.Float4.h
obj/_root.MainView.cpp.o: include/Uno.Platform.iOS.StatusBarStyle.h
obj/_root.MainView.cpp.o: include/Uno.String.h
obj/_root.MainView.cpp.o: include/Uno.UX.BundleFileSource.h
obj/_root.MainView.cpp.o: include/Uno.UX.FileSource.h
obj/_root.MainView.cpp.o: include/Uno.UX.IFactory.h
obj/_root.MainView.cpp.o: include/Uno.UX.ITemplate.h
obj/_root.MainView.cpp.o: include/Uno.UX.Property-1.h
obj/_root.MainView.cpp.o: include/Uno.UX.Template-1.h
obj/_root.MainView.cpp.o: jni/_root.MainView.cpp | obj
	echo _root.MainView.cpp
	$(CXX) $(CXX_FLAGS) -o obj/_root.MainView.cpp.o -c jni/_root.MainView.cpp

obj/_root.MainView.Factory.cpp.o: include/_root.MainView.Factory.h
obj/_root.MainView.Factory.cpp.o: include/_root.MainView.Fuse_Drawing_SolidColor_float4_Color_Property.h
obj/_root.MainView.Factory.cpp.o: include/_root.MainView.h
obj/_root.MainView.Factory.cpp.o: include/Fuse.Animations.Animator.h
obj/_root.MainView.Factory.cpp.o: include/Fuse.Animations.Change-1.h
obj/_root.MainView.Factory.cpp.o: include/Fuse.Behavior.h
obj/_root.MainView.Factory.cpp.o: include/Fuse.Controls.Circle.h
obj/_root.MainView.Factory.cpp.o: include/Fuse.Controls.Shape.h
obj/_root.MainView.Factory.cpp.o: include/Fuse.Drawing.Brush.h
obj/_root.MainView.Factory.cpp.o: include/Fuse.Drawing.SolidColor.h
obj/_root.MainView.Factory.cpp.o: include/Fuse.Elements.Element.h
obj/_root.MainView.Factory.cpp.o: include/Fuse.Navigation.ActivatingAnimation.h
obj/_root.MainView.Factory.cpp.o: include/Fuse.Node.h
obj/_root.MainView.Factory.cpp.o: include/Fuse.Triggers.Trigger.h
obj/_root.MainView.Factory.cpp.o: include/Uno.Collections.ICollection-1.h
obj/_root.MainView.Factory.cpp.o: include/Uno.Collections.IList-1.h
obj/_root.MainView.Factory.cpp.o: include/Uno.Float.h
obj/_root.MainView.Factory.cpp.o: include/Uno.Float4.h
obj/_root.MainView.Factory.cpp.o: include/Uno.UX.Property-1.h
obj/_root.MainView.Factory.cpp.o: jni/_root.MainView.Factory.cpp | obj
	echo _root.MainView.Factory.cpp
	$(CXX) $(CXX_FLAGS) -o obj/_root.MainView.Factory.cpp.o -c jni/_root.MainView.Factory.cpp

obj/_root.MainView.Fuse_Drawing_SolidColor_float4_Color_Property.cpp.o: include/_root.MainView.Fuse_Drawing_SolidColor_float4_Color_Property.h
obj/_root.MainView.Fuse_Drawing_SolidColor_float4_Color_Property.cpp.o: include/Fuse.Drawing.SolidColor.h
obj/_root.MainView.Fuse_Drawing_SolidColor_float4_Color_Property.cpp.o: include/Uno.Object.h
obj/_root.MainView.Fuse_Drawing_SolidColor_float4_Color_Property.cpp.o: jni/_root.MainView.Fuse_Drawing_SolidColor_float4_Color_Property.cpp | obj
	echo _root.MainView.Fuse_Drawing_SolidColor_float4_Color_Property.cpp
	$(CXX) $(CXX_FLAGS) -o obj/_root.MainView.Fuse_Drawing_SolidColor_float4_Color_Property.cpp.o -c jni/_root.MainView.Fuse_Drawing_SolidColor_float4_Color_Property.cpp

obj/_root.MainView.Fuse_Effects_Blur_float_Radius_Property.cpp.o: include/_root.MainView.Fuse_Effects_Blur_float_Radius_Property.h
obj/_root.MainView.Fuse_Effects_Blur_float_Radius_Property.cpp.o: include/Fuse.Effects.Blur.h
obj/_root.MainView.Fuse_Effects_Blur_float_Radius_Property.cpp.o: include/Uno.Object.h
obj/_root.MainView.Fuse_Effects_Blur_float_Radius_Property.cpp.o: jni/_root.MainView.Fuse_Effects_Blur_float_Radius_Property.cpp | obj
	echo _root.MainView.Fuse_Effects_Blur_float_Radius_Property.cpp
	$(CXX) $(CXX_FLAGS) -o obj/_root.MainView.Fuse_Effects_Blur_float_Radius_Property.cpp.o -c jni/_root.MainView.Fuse_Effects_Blur_float_Radius_Property.cpp

obj/_root.MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_Status-5e09bf19.cpp.o: include/_root.MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_Status-5e09bf19.h
obj/_root.MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_Status-5e09bf19.cpp.o: include/Fuse.iOS.StatusBarConfig.h
obj/_root.MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_Status-5e09bf19.cpp.o: include/Uno.Object.h
obj/_root.MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_Status-5e09bf19.cpp.o: jni/_root.MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_Status-5e09bf19.cpp | obj
	echo _root.MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_Status-5e09bf19.cpp
	$(CXX) $(CXX_FLAGS) -o obj/_root.MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_Status-5e09bf19.cpp.o -c jni/_root.MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_Status-5e09bf19.cpp

obj/_root.MainView.Fuse_Triggers_WhileBool_bool_Value_Property.cpp.o: include/_root.MainView.Fuse_Triggers_WhileBool_bool_Value_Property.h
obj/_root.MainView.Fuse_Triggers_WhileBool_bool_Value_Property.cpp.o: include/Fuse.Triggers.WhileBool.h
obj/_root.MainView.Fuse_Triggers_WhileBool_bool_Value_Property.cpp.o: include/Uno.Object.h
obj/_root.MainView.Fuse_Triggers_WhileBool_bool_Value_Property.cpp.o: jni/_root.MainView.Fuse_Triggers_WhileBool_bool_Value_Property.cpp | obj
	echo _root.MainView.Fuse_Triggers_WhileBool_bool_Value_Property.cpp
	$(CXX) $(CXX_FLAGS) -o obj/_root.MainView.Fuse_Triggers_WhileBool_bool_Value_Property.cpp.o -c jni/_root.MainView.Fuse_Triggers_WhileBool_bool_Value_Property.cpp

obj/_root.MainView.Template.cpp.o: include/_root.MainView.h
obj/_root.MainView.Template.cpp.o: include/_root.MainView.Template.h
obj/_root.MainView.Template.cpp.o: include/Fuse.Controls.TextControl.h
obj/_root.MainView.Template.cpp.o: include/Fuse.Elements.Element.h
obj/_root.MainView.Template.cpp.o: include/Fuse.Elements.SizeUnit.h
obj/_root.MainView.Template.cpp.o: include/Fuse.Elements.TextAlignment.h
obj/_root.MainView.Template.cpp.o: include/Fuse.Elements.TextWrapping.h
obj/_root.MainView.Template.cpp.o: include/Fuse.StyleProperty-2.h
obj/_root.MainView.Template.cpp.o: include/Fuse.StylePropertyWithUnit-3.h
obj/_root.MainView.Template.cpp.o: include/Uno.Bool.h
obj/_root.MainView.Template.cpp.o: include/Uno.Float.h
obj/_root.MainView.Template.cpp.o: include/Uno.Float4.h
obj/_root.MainView.Template.cpp.o: jni/_root.MainView.Template.cpp | obj
	echo _root.MainView.Template.cpp
	$(CXX) $(CXX_FLAGS) -o obj/_root.MainView.Template.cpp.o -c jni/_root.MainView.Template.cpp

obj/_root.MainView.Template1.cpp.o: include/_root.MainView.h
obj/_root.MainView.Template1.cpp.o: include/_root.MainView.Template1.h
obj/_root.MainView.Template1.cpp.o: include/Fuse.Elements.StretchMode.h
obj/_root.MainView.Template1.cpp.o: include/Fuse.StyleProperty-2.h
obj/_root.MainView.Template1.cpp.o: include/Uno.Bool.h
obj/_root.MainView.Template1.cpp.o: jni/_root.MainView.Template1.cpp | obj
	echo _root.MainView.Template1.cpp
	$(CXX) $(CXX_FLAGS) -o obj/_root.MainView.Template1.cpp.o -c jni/_root.MainView.Template1.cpp

obj/_root.MainView.Template2.cpp.o: include/_root.MainView.h
obj/_root.MainView.Template2.cpp.o: include/_root.MainView.Template2.h
obj/_root.MainView.Template2.cpp.o: include/Fuse.Animations.Animator.h
obj/_root.MainView.Template2.cpp.o: include/Fuse.Animations.Move.h
obj/_root.MainView.Template2.cpp.o: include/Fuse.Animations.TransformAnimator-1.h
obj/_root.MainView.Template2.cpp.o: include/Fuse.Behavior.h
obj/_root.MainView.Template2.cpp.o: include/Fuse.ITranslationMode.h
obj/_root.MainView.Template2.cpp.o: include/Fuse.Navigation.EnteringAnimation.h
obj/_root.MainView.Template2.cpp.o: include/Fuse.Navigation.ExitingAnimation.h
obj/_root.MainView.Template2.cpp.o: include/Fuse.Node.h
obj/_root.MainView.Template2.cpp.o: include/Fuse.Translation.h
obj/_root.MainView.Template2.cpp.o: include/Fuse.TranslationModes.h
obj/_root.MainView.Template2.cpp.o: include/Fuse.Triggers.Trigger.h
obj/_root.MainView.Template2.cpp.o: include/Uno.Collections.ICollection-1.h
obj/_root.MainView.Template2.cpp.o: include/Uno.Collections.IList-1.h
obj/_root.MainView.Template2.cpp.o: include/Uno.Float.h
obj/_root.MainView.Template2.cpp.o: jni/_root.MainView.Template2.cpp | obj
	echo _root.MainView.Template2.cpp
	$(CXX) $(CXX_FLAGS) -o obj/_root.MainView.Template2.cpp.o -c jni/_root.MainView.Template2.cpp

obj/_root.TestApp_bundle.cpp.o: include/_root.TestApp_bundle.h
obj/_root.TestApp_bundle.cpp.o: include/Uno.BundleFile.h
obj/_root.TestApp_bundle.cpp.o: include/Uno.String.h
obj/_root.TestApp_bundle.cpp.o: jni/_root.TestApp_bundle.cpp | obj
	echo _root.TestApp_bundle.cpp
	$(CXX) $(CXX_FLAGS) -o obj/_root.TestApp_bundle.cpp.o -c jni/_root.TestApp_bundle.cpp

obj/Android.android.animation.g.cpp.o: include/Android.android.animation.Animator.h
obj/Android.android.animation.g.cpp.o: include/Android.android.animation.LayoutTransition.h
obj/Android.android.animation.g.cpp.o: include/Android.android.animation.TimeAnimator.h
obj/Android.android.animation.g.cpp.o: include/Android.android.animation.TimeAnimatorDLRTimeListener.h
obj/Android.android.animation.g.cpp.o: include/Android.android.animation.TimeInterpolator.h
obj/Android.android.animation.g.cpp.o: include/Android.android.animation.ValueAnimator.h
obj/Android.android.animation.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.animation.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.animation.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.animation.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.animation.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.animation.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.animation.g.cpp.o: include/Android.Fallbacks.Android_android_animation_Animator.h
obj/Android.android.animation.g.cpp.o: include/Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h
obj/Android.android.animation.g.cpp.o: include/Android.Fallbacks.Android_android_animation_TimeInterpolator.h
obj/Android.android.animation.g.cpp.o: include/Android.java.lang.String.h
obj/Android.android.animation.g.cpp.o: include/Uno.Bool.h
obj/Android.android.animation.g.cpp.o: include/Uno.Exception.h
obj/Android.android.animation.g.cpp.o: include/Uno.Float.h
obj/Android.android.animation.g.cpp.o: include/Uno.Long.h
obj/Android.android.animation.g.cpp.o: include/Uno.Type.h
obj/Android.android.animation.g.cpp.o: jni/Android.android.animation.g.cpp | obj
	echo Android.android.animation.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.animation.g.cpp.o -c jni/Android.android.animation.g.cpp

obj/Android.android.app.g.cpp.o: include/Android.android.app.Activity.h
obj/Android.android.app.g.cpp.o: include/Android.android.app.Fragment.h
obj/Android.android.app.g.cpp.o: include/Android.android.app.TaskStackBuilder.h
obj/Android.android.app.g.cpp.o: include/Android.android.content.Intent.h
obj/Android.android.app.g.cpp.o: include/Android.android.view.ContextMenu.h
obj/Android.android.app.g.cpp.o: include/Android.android.view.ContextMenuDLRContextMenuInfo.h
obj/Android.android.app.g.cpp.o: include/Android.android.view.View.h
obj/Android.android.app.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.app.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.app.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.app.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.app.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.app.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.app.g.cpp.o: include/Android.java.lang.Object.h
obj/Android.android.app.g.cpp.o: include/Android.java.lang.Runnable.h
obj/Android.android.app.g.cpp.o: include/Android.java.lang.String.h
obj/Android.android.app.g.cpp.o: include/Uno.Bool.h
obj/Android.android.app.g.cpp.o: include/Uno.Exception.h
obj/Android.android.app.g.cpp.o: include/Uno.Int.h
obj/Android.android.app.g.cpp.o: include/Uno.Type.h
obj/Android.android.app.g.cpp.o: jni/Android.android.app.g.cpp | obj
	echo Android.android.app.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.app.g.cpp.o -c jni/Android.android.app.g.cpp

obj/Android.android.content.g.cpp.o: include/Android.android.content.ClipData.h
obj/Android.android.content.g.cpp.o: include/Android.android.content.ComponentName.h
obj/Android.android.content.g.cpp.o: include/Android.android.content.Context.h
obj/Android.android.content.g.cpp.o: include/Android.android.content.ContextWrapper.h
obj/Android.android.content.g.cpp.o: include/Android.android.content.Intent.h
obj/Android.android.content.g.cpp.o: include/Android.android.content.res.AssetManager.h
obj/Android.android.content.g.cpp.o: include/Android.android.content.res.Resources.h
obj/Android.android.content.g.cpp.o: include/Android.android.net.Uri.h
obj/Android.android.content.g.cpp.o: include/Android.android.os.Parcel.h
obj/Android.android.content.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.content.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.content.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
obj/Android.android.content.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.content.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.content.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.content.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.content.g.cpp.o: include/Android.Fallbacks.Android_android_content_Context.h
obj/Android.android.content.g.cpp.o: include/Android.java.lang.Object.h
obj/Android.android.content.g.cpp.o: include/Android.java.lang.String.h
obj/Android.android.content.g.cpp.o: include/Uno.Bool.h
obj/Android.android.content.g.cpp.o: include/Uno.Exception.h
obj/Android.android.content.g.cpp.o: include/Uno.Int.h
obj/Android.android.content.g.cpp.o: include/Uno.Type.h
obj/Android.android.content.g.cpp.o: jni/Android.android.content.g.cpp | obj
	echo Android.android.content.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.content.g.cpp.o -c jni/Android.android.content.g.cpp

obj/Android.android.content.res.g.cpp.o: include/Android.android.content.res.AssetFileDescriptor.h
obj/Android.android.content.res.g.cpp.o: include/Android.android.content.res.AssetManager.h
obj/Android.android.content.res.g.cpp.o: include/Android.android.content.res.ColorStateList.h
obj/Android.android.content.res.g.cpp.o: include/Android.android.content.res.Configuration.h
obj/Android.android.content.res.g.cpp.o: include/Android.android.content.res.Resources.h
obj/Android.android.content.res.g.cpp.o: include/Android.android.content.res.TypedArray.h
obj/Android.android.content.res.g.cpp.o: include/Android.android.graphics.drawable.Drawable.h
obj/Android.android.content.res.g.cpp.o: include/Android.android.os.Parcel.h
obj/Android.android.content.res.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.content.res.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.content.res.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.content.res.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.content.res.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.content.res.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.content.res.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h
obj/Android.android.content.res.g.cpp.o: include/Android.Fallbacks.Android_java_io_InputStream.h
obj/Android.android.content.res.g.cpp.o: include/Android.java.io.FileDescriptor.h
obj/Android.android.content.res.g.cpp.o: include/Android.java.io.InputStream.h
obj/Android.android.content.res.g.cpp.o: include/Android.java.lang.Object.h
obj/Android.android.content.res.g.cpp.o: include/Android.java.lang.String.h
obj/Android.android.content.res.g.cpp.o: include/Uno.Bool.h
obj/Android.android.content.res.g.cpp.o: include/Uno.Exception.h
obj/Android.android.content.res.g.cpp.o: include/Uno.Int.h
obj/Android.android.content.res.g.cpp.o: include/Uno.Long.h
obj/Android.android.content.res.g.cpp.o: jni/Android.android.content.res.g.cpp | obj
	echo Android.android.content.res.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.content.res.g.cpp.o -c jni/Android.android.content.res.g.cpp

obj/Android.android.graphics.drawable.g.cpp.o: include/Android.android.graphics.drawable.Drawable.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Android.android.graphics.drawable.LayerDrawable.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Android.android.graphics.drawable.ShapeDrawable.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Android.android.graphics.drawable.shapes.Shape.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Android.android.graphics.Paint.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Android.android.graphics.PorterDuffDLRMode.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Android.android.graphics.Shader.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_ShapeDrawab-1918c93c.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Android.Runtime.ObjectArray-1.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Uno.Bool.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Uno.Exception.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Uno.Int.h
obj/Android.android.graphics.drawable.g.cpp.o: include/Uno.Type.h
obj/Android.android.graphics.drawable.g.cpp.o: jni/Android.android.graphics.drawable.g.cpp | obj
	echo Android.android.graphics.drawable.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.graphics.drawable.g.cpp.o -c jni/Android.android.graphics.drawable.g.cpp

obj/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.android.graphics.drawable.shapes.ArcShape.h
obj/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.android.graphics.drawable.shapes.RectShape.h
obj/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.android.graphics.drawable.shapes.RoundRectShape.h
obj/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.android.graphics.drawable.shapes.Shape.h
obj/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.android.graphics.RectF.h
obj/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape.h
obj/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.Runtime.FloatArray.h
obj/Android.android.graphics.drawable.shapes.g.cpp.o: include/Uno.Bool.h
obj/Android.android.graphics.drawable.shapes.g.cpp.o: include/Uno.Exception.h
obj/Android.android.graphics.drawable.shapes.g.cpp.o: include/Uno.Float.h
obj/Android.android.graphics.drawable.shapes.g.cpp.o: include/Uno.Type.h
obj/Android.android.graphics.drawable.shapes.g.cpp.o: jni/Android.android.graphics.drawable.shapes.g.cpp | obj
	echo Android.android.graphics.drawable.shapes.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.graphics.drawable.shapes.g.cpp.o -c jni/Android.android.graphics.drawable.shapes.g.cpp

obj/Android.android.graphics.g.cpp.o: include/Android.android.content.res.AssetManager.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Bitmap.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.graphics.BitmapDLRConfig.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.graphics.BitmapFactory.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Canvas.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Color.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.graphics.LinearGradient.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Matrix.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Paint.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.graphics.PaintDLRStyle.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Point.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.graphics.PorterDuffDLRMode.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Rect.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.graphics.RectF.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Region.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Shader.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.graphics.ShaderDLRTileMode.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.graphics.SurfaceTexture.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.graphics.SurfaceTextureDLROnFrameAvailableListener.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Typeface.h
obj/Android.android.graphics.g.cpp.o: include/Android.android.os.Parcel.h
obj/Android.android.graphics.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.graphics.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.graphics.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
obj/Android.android.graphics.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.graphics.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.graphics.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.graphics.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.graphics.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_SurfaceTextureDLROnF-45d51137.h
obj/Android.android.graphics.g.cpp.o: include/Android.java.io.InputStream.h
obj/Android.android.graphics.g.cpp.o: include/Android.java.lang.Object.h
obj/Android.android.graphics.g.cpp.o: include/Android.java.lang.String.h
obj/Android.android.graphics.g.cpp.o: include/Android.Runtime.FloatArray.h
obj/Android.android.graphics.g.cpp.o: include/Android.Runtime.IntArray.h
obj/Android.android.graphics.g.cpp.o: include/Uno.Bool.h
obj/Android.android.graphics.g.cpp.o: include/Uno.Exception.h
obj/Android.android.graphics.g.cpp.o: include/Uno.Float.h
obj/Android.android.graphics.g.cpp.o: include/Uno.Int.h
obj/Android.android.graphics.g.cpp.o: include/Uno.Type.h
obj/Android.android.graphics.g.cpp.o: jni/Android.android.graphics.g.cpp | obj
	echo Android.android.graphics.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.graphics.g.cpp.o -c jni/Android.android.graphics.g.cpp

obj/Android.android.location.g.cpp.o: include/Android.android.location.Location.h
obj/Android.android.location.g.cpp.o: include/Android.android.location.LocationListener.h
obj/Android.android.location.g.cpp.o: include/Android.android.location.LocationManager.h
obj/Android.android.location.g.cpp.o: include/Android.android.os.Bundle.h
obj/Android.android.location.g.cpp.o: include/Android.android.os.Looper.h
obj/Android.android.location.g.cpp.o: include/Android.android.os.Parcel.h
obj/Android.android.location.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.location.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.location.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
obj/Android.android.location.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.location.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.location.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.location.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.location.g.cpp.o: include/Android.Fallbacks.Android_android_location_LocationListener.h
obj/Android.android.location.g.cpp.o: include/Android.Fallbacks.Android_java_util_List.h
obj/Android.android.location.g.cpp.o: include/Android.java.lang.String.h
obj/Android.android.location.g.cpp.o: include/Android.java.util.List.h
obj/Android.android.location.g.cpp.o: include/Uno.Bool.h
obj/Android.android.location.g.cpp.o: include/Uno.Double.h
obj/Android.android.location.g.cpp.o: include/Uno.Exception.h
obj/Android.android.location.g.cpp.o: include/Uno.Float.h
obj/Android.android.location.g.cpp.o: include/Uno.Int.h
obj/Android.android.location.g.cpp.o: include/Uno.Long.h
obj/Android.android.location.g.cpp.o: jni/Android.android.location.g.cpp | obj
	echo Android.android.location.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.location.g.cpp.o -c jni/Android.android.location.g.cpp

obj/Android.android.media.g.cpp.o: include/Android.android.media.AudioManager.h
obj/Android.android.media.g.cpp.o: include/Android.android.media.AudioManagerDLROnAudioFocusChangeListener.h
obj/Android.android.media.g.cpp.o: include/Android.android.media.MediaPlayer.h
obj/Android.android.media.g.cpp.o: include/Android.android.media.MediaPlayerDLROnBufferingUpdateListener.h
obj/Android.android.media.g.cpp.o: include/Android.android.media.MediaPlayerDLROnCompletionListener.h
obj/Android.android.media.g.cpp.o: include/Android.android.media.MediaPlayerDLROnErrorListener.h
obj/Android.android.media.g.cpp.o: include/Android.android.media.MediaPlayerDLROnPreparedListener.h
obj/Android.android.media.g.cpp.o: include/Android.android.media.MediaPlayerDLROnSeekCompleteListener.h
obj/Android.android.media.g.cpp.o: include/Android.android.media.MediaPlayerDLROnVideoSizeChangedListener.h
obj/Android.android.media.g.cpp.o: include/Android.android.view.Surface.h
obj/Android.android.media.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.media.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.media.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
obj/Android.android.media.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.media.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.media.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.media.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.media.g.cpp.o: include/Android.Fallbacks.Android_android_media_AudioManagerDLROnAudioF-b4dcb473.h
obj/Android.android.media.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnBufferi-a11a3e5b.h
obj/Android.android.media.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnComplet-64af01f3.h
obj/Android.android.media.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnErrorListener.h
obj/Android.android.media.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnPreparedListener.h
obj/Android.android.media.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnSeekCom-79a19ba7.h
obj/Android.android.media.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnVideoSi-169f5c77.h
obj/Android.android.media.g.cpp.o: include/Android.java.io.FileDescriptor.h
obj/Android.android.media.g.cpp.o: include/Android.java.lang.String.h
obj/Android.android.media.g.cpp.o: include/Uno.Bool.h
obj/Android.android.media.g.cpp.o: include/Uno.Exception.h
obj/Android.android.media.g.cpp.o: include/Uno.Float.h
obj/Android.android.media.g.cpp.o: include/Uno.Int.h
obj/Android.android.media.g.cpp.o: include/Uno.Long.h
obj/Android.android.media.g.cpp.o: include/Uno.Type.h
obj/Android.android.media.g.cpp.o: jni/Android.android.media.g.cpp | obj
	echo Android.android.media.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.media.g.cpp.o -c jni/Android.android.media.g.cpp

obj/Android.android.net.g.cpp.o: include/Android.android.net.Uri.h
obj/Android.android.net.g.cpp.o: include/Android.android.os.Parcel.h
obj/Android.android.net.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.net.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.net.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.net.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.net.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.net.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.net.g.cpp.o: include/Android.Fallbacks.Android_android_net_Uri.h
obj/Android.android.net.g.cpp.o: include/Android.java.lang.Object.h
obj/Android.android.net.g.cpp.o: include/Android.java.lang.String.h
obj/Android.android.net.g.cpp.o: include/Uno.Bool.h
obj/Android.android.net.g.cpp.o: include/Uno.Exception.h
obj/Android.android.net.g.cpp.o: include/Uno.Int.h
obj/Android.android.net.g.cpp.o: jni/Android.android.net.g.cpp | obj
	echo Android.android.net.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.net.g.cpp.o -c jni/Android.android.net.g.cpp

obj/Android.android.net.http.g.cpp.o: include/Android.android.net.http.SslError.h
obj/Android.android.net.http.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.net.http.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.net.http.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.net.http.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.net.http.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.net.http.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.net.http.g.cpp.o: include/Android.java.lang.String.h
obj/Android.android.net.http.g.cpp.o: include/Uno.Bool.h
obj/Android.android.net.http.g.cpp.o: include/Uno.Exception.h
obj/Android.android.net.http.g.cpp.o: jni/Android.android.net.http.g.cpp | obj
	echo Android.android.net.http.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.net.http.g.cpp.o -c jni/Android.android.net.http.g.cpp

obj/Android.android.opengl.g.cpp.o: include/Android.android.graphics.Bitmap.h
obj/Android.android.opengl.g.cpp.o: include/Android.android.opengl.GLUtils.h
obj/Android.android.opengl.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.opengl.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.opengl.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.opengl.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.opengl.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.opengl.g.cpp.o: include/Uno.Exception.h
obj/Android.android.opengl.g.cpp.o: include/Uno.Int.h
obj/Android.android.opengl.g.cpp.o: jni/Android.android.opengl.g.cpp | obj
	echo Android.android.opengl.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.opengl.g.cpp.o -c jni/Android.android.opengl.g.cpp

obj/Android.android.os.g.cpp.o: include/Android.android.os.Build.h
obj/Android.android.os.g.cpp.o: include/Android.android.os.BuildDLRVERSION.h
obj/Android.android.os.g.cpp.o: include/Android.android.os.Bundle.h
obj/Android.android.os.g.cpp.o: include/Android.android.os.Handler.h
obj/Android.android.os.g.cpp.o: include/Android.android.os.IBinder.h
obj/Android.android.os.g.cpp.o: include/Android.android.os.IBinderDLRDeathRecipient.h
obj/Android.android.os.g.cpp.o: include/Android.android.os.IInterface.h
obj/Android.android.os.g.cpp.o: include/Android.android.os.Looper.h
obj/Android.android.os.g.cpp.o: include/Android.android.os.Message.h
obj/Android.android.os.g.cpp.o: include/Android.android.os.Parcel.h
obj/Android.android.os.g.cpp.o: include/Android.android.os.Parcelable.h
obj/Android.android.os.g.cpp.o: include/Android.android.os.Vibrator.h
obj/Android.android.os.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.os.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.os.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
obj/Android.android.os.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.os.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.os.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.os.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.os.g.cpp.o: include/Android.Fallbacks.Android_android_os_IBinder.h
obj/Android.android.os.g.cpp.o: include/Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h
obj/Android.android.os.g.cpp.o: include/Android.Fallbacks.Android_android_os_IInterface.h
obj/Android.android.os.g.cpp.o: include/Android.Fallbacks.Android_android_os_Parcelable.h
obj/Android.android.os.g.cpp.o: include/Android.Fallbacks.Android_android_os_Vibrator.h
obj/Android.android.os.g.cpp.o: include/Android.java.io.FileDescriptor.h
obj/Android.android.os.g.cpp.o: include/Android.java.lang.Runnable.h
obj/Android.android.os.g.cpp.o: include/Android.java.lang.String.h
obj/Android.android.os.g.cpp.o: include/Android.Runtime.ObjectArray-1.h
obj/Android.android.os.g.cpp.o: include/Uno.Bool.h
obj/Android.android.os.g.cpp.o: include/Uno.Exception.h
obj/Android.android.os.g.cpp.o: include/Uno.Int.h
obj/Android.android.os.g.cpp.o: include/Uno.Long.h
obj/Android.android.os.g.cpp.o: include/Uno.Type.h
obj/Android.android.os.g.cpp.o: jni/Android.android.os.g.cpp | obj
	echo Android.android.os.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.os.g.cpp.o -c jni/Android.android.os.g.cpp

obj/Android.android.test.mock.g.cpp.o: include/Android.android.content.res.Resources.h
obj/Android.android.test.mock.g.cpp.o: include/Android.android.test.mock.MockContext.h
obj/Android.android.test.mock.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.test.mock.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.test.mock.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.test.mock.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.test.mock.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.test.mock.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.test.mock.g.cpp.o: include/Android.java.lang.Object.h
obj/Android.android.test.mock.g.cpp.o: include/Android.java.lang.String.h
obj/Android.android.test.mock.g.cpp.o: include/Uno.Bool.h
obj/Android.android.test.mock.g.cpp.o: include/Uno.Exception.h
obj/Android.android.test.mock.g.cpp.o: jni/Android.android.test.mock.g.cpp | obj
	echo Android.android.test.mock.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.test.mock.g.cpp.o -c jni/Android.android.test.mock.g.cpp

obj/Android.android.text.g.cpp.o: include/Android.android.graphics.Canvas.h
obj/Android.android.text.g.cpp.o: include/Android.android.text.Editable.h
obj/Android.android.text.g.cpp.o: include/Android.android.text.GetChars.h
obj/Android.android.text.g.cpp.o: include/Android.android.text.InputFilter.h
obj/Android.android.text.g.cpp.o: include/Android.android.text.Layout.h
obj/Android.android.text.g.cpp.o: include/Android.android.text.LayoutDLRAlignment.h
obj/Android.android.text.g.cpp.o: include/Android.android.text.Spannable.h
obj/Android.android.text.g.cpp.o: include/Android.android.text.Spanned.h
obj/Android.android.text.g.cpp.o: include/Android.android.text.StaticLayout.h
obj/Android.android.text.g.cpp.o: include/Android.android.text.TextPaint.h
obj/Android.android.text.g.cpp.o: include/Android.android.text.TextUtilsDLRTruncateAt.h
obj/Android.android.text.g.cpp.o: include/Android.android.text.TextWatcher.h
obj/Android.android.text.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.text.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.text.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
obj/Android.android.text.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.text.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.text.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.text.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.text.g.cpp.o: include/Android.Fallbacks.Android_android_text_Editable.h
obj/Android.android.text.g.cpp.o: include/Android.Fallbacks.Android_android_text_GetChars.h
obj/Android.android.text.g.cpp.o: include/Android.Fallbacks.Android_android_text_InputFilter.h
obj/Android.android.text.g.cpp.o: include/Android.Fallbacks.Android_android_text_Layout.h
obj/Android.android.text.g.cpp.o: include/Android.Fallbacks.Android_android_text_Spannable.h
obj/Android.android.text.g.cpp.o: include/Android.Fallbacks.Android_android_text_Spanned.h
obj/Android.android.text.g.cpp.o: include/Android.Fallbacks.Android_android_text_TextWatcher.h
obj/Android.android.text.g.cpp.o: include/Android.java.lang.CharSequence.h
obj/Android.android.text.g.cpp.o: include/Android.java.lang.Class.h
obj/Android.android.text.g.cpp.o: include/Android.java.lang.Object.h
obj/Android.android.text.g.cpp.o: include/Android.Runtime.CharArray.h
obj/Android.android.text.g.cpp.o: include/Android.Runtime.ObjectArray-1.h
obj/Android.android.text.g.cpp.o: include/Uno.Bool.h
obj/Android.android.text.g.cpp.o: include/Uno.Char.h
obj/Android.android.text.g.cpp.o: include/Uno.Exception.h
obj/Android.android.text.g.cpp.o: include/Uno.Float.h
obj/Android.android.text.g.cpp.o: include/Uno.Int.h
obj/Android.android.text.g.cpp.o: include/Uno.Type.h
obj/Android.android.text.g.cpp.o: jni/Android.android.text.g.cpp | obj
	echo Android.android.text.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.text.g.cpp.o -c jni/Android.android.text.g.cpp

obj/Android.android.util.g.cpp.o: include/Android.android.util.AttributeSet.h
obj/Android.android.util.g.cpp.o: include/Android.android.util.Property.h
obj/Android.android.util.g.cpp.o: include/Android.android.util.SparseArray.h
obj/Android.android.util.g.cpp.o: include/Android.android.util.TypedValue.h
obj/Android.android.util.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.util.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.util.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
obj/Android.android.util.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.util.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.util.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.util.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.util.g.cpp.o: include/Android.Fallbacks.Android_android_util_AttributeSet.h
obj/Android.android.util.g.cpp.o: include/Android.Fallbacks.Android_android_util_Property.h
obj/Android.android.util.g.cpp.o: include/Android.java.lang.String.h
obj/Android.android.util.g.cpp.o: include/Android.Runtime.ObjectArray-1.h
obj/Android.android.util.g.cpp.o: include/Uno.Bool.h
obj/Android.android.util.g.cpp.o: include/Uno.Exception.h
obj/Android.android.util.g.cpp.o: include/Uno.Float.h
obj/Android.android.util.g.cpp.o: include/Uno.Int.h
obj/Android.android.util.g.cpp.o: jni/Android.android.util.g.cpp | obj
	echo Android.android.util.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.util.g.cpp.o -c jni/Android.android.util.g.cpp

obj/Android.android.view.accessibility.g.cpp.o: include/Android.android.os.Parcel.h
obj/Android.android.view.accessibility.g.cpp.o: include/Android.android.view.accessibility.AccessibilityEvent.h
obj/Android.android.view.accessibility.g.cpp.o: include/Android.android.view.accessibility.AccessibilityNodeInfo.h
obj/Android.android.view.accessibility.g.cpp.o: include/Android.android.view.accessibility.AccessibilityNodeProvider.h
obj/Android.android.view.accessibility.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.view.accessibility.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.view.accessibility.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.view.accessibility.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.view.accessibility.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.view.accessibility.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.view.accessibility.g.cpp.o: include/Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h
obj/Android.android.view.accessibility.g.cpp.o: include/Android.java.lang.Object.h
obj/Android.android.view.accessibility.g.cpp.o: include/Android.java.lang.String.h
obj/Android.android.view.accessibility.g.cpp.o: include/Uno.Bool.h
obj/Android.android.view.accessibility.g.cpp.o: include/Uno.Exception.h
obj/Android.android.view.accessibility.g.cpp.o: include/Uno.Int.h
obj/Android.android.view.accessibility.g.cpp.o: jni/Android.android.view.accessibility.g.cpp | obj
	echo Android.android.view.accessibility.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.view.accessibility.g.cpp.o -c jni/Android.android.view.accessibility.g.cpp

obj/Android.android.view.animation.g.cpp.o: include/Android.android.view.animation.Animation.h
obj/Android.android.view.animation.g.cpp.o: include/Android.android.view.animation.AnimationDLRAnimationListener.h
obj/Android.android.view.animation.g.cpp.o: include/Android.android.view.animation.Interpolator.h
obj/Android.android.view.animation.g.cpp.o: include/Android.android.view.animation.LayoutAnimationController.h
obj/Android.android.view.animation.g.cpp.o: include/Android.android.view.animation.Transformation.h
obj/Android.android.view.animation.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.view.animation.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.view.animation.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.view.animation.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.view.animation.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.view.animation.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.view.animation.g.cpp.o: include/Android.Fallbacks.Android_android_view_animation_Animation.h
obj/Android.android.view.animation.g.cpp.o: include/Android.Fallbacks.Android_android_view_animation_AnimationDLRAn-50875199.h
obj/Android.android.view.animation.g.cpp.o: include/Android.Fallbacks.Android_android_view_animation_Interpolator.h
obj/Android.android.view.animation.g.cpp.o: include/Android.java.lang.String.h
obj/Android.android.view.animation.g.cpp.o: include/Uno.Bool.h
obj/Android.android.view.animation.g.cpp.o: include/Uno.Exception.h
obj/Android.android.view.animation.g.cpp.o: jni/Android.android.view.animation.g.cpp | obj
	echo Android.android.view.animation.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.view.animation.g.cpp.o -c jni/Android.android.view.animation.g.cpp

obj/Android.android.view.g.cpp.o: include/Android.android.animation.LayoutTransition.h
obj/Android.android.view.g.cpp.o: include/Android.android.content.ClipData.h
obj/Android.android.view.g.cpp.o: include/Android.android.content.ComponentName.h
obj/Android.android.view.g.cpp.o: include/Android.android.content.Context.h
obj/Android.android.view.g.cpp.o: include/Android.android.content.Intent.h
obj/Android.android.view.g.cpp.o: include/Android.android.content.res.Configuration.h
obj/Android.android.view.g.cpp.o: include/Android.android.content.res.Resources.h
obj/Android.android.view.g.cpp.o: include/Android.android.content.res.TypedArray.h
obj/Android.android.view.g.cpp.o: include/Android.android.graphics.Bitmap.h
obj/Android.android.view.g.cpp.o: include/Android.android.graphics.Canvas.h
obj/Android.android.view.g.cpp.o: include/Android.android.graphics.drawable.Drawable.h
obj/Android.android.view.g.cpp.o: include/Android.android.graphics.Matrix.h
obj/Android.android.view.g.cpp.o: include/Android.android.graphics.Paint.h
obj/Android.android.view.g.cpp.o: include/Android.android.graphics.Point.h
obj/Android.android.view.g.cpp.o: include/Android.android.graphics.Rect.h
obj/Android.android.view.g.cpp.o: include/Android.android.graphics.Region.h
obj/Android.android.view.g.cpp.o: include/Android.android.graphics.SurfaceTexture.h
obj/Android.android.view.g.cpp.o: include/Android.android.os.Bundle.h
obj/Android.android.view.g.cpp.o: include/Android.android.os.Handler.h
obj/Android.android.view.g.cpp.o: include/Android.android.os.IBinder.h
obj/Android.android.view.g.cpp.o: include/Android.android.os.Parcel.h
obj/Android.android.view.g.cpp.o: include/Android.android.os.Parcelable.h
obj/Android.android.view.g.cpp.o: include/Android.android.util.AttributeSet.h
obj/Android.android.view.g.cpp.o: include/Android.android.util.Property.h
obj/Android.android.view.g.cpp.o: include/Android.android.util.SparseArray.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.accessibility.AccessibilityEvent.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.accessibility.AccessibilityNodeInfo.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.accessibility.AccessibilityNodeProvider.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ActionMode.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ActionModeDLRCallback.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ActionProvider.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.animation.Animation.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.animation.AnimationDLRAnimationListener.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.animation.LayoutAnimationController.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.animation.Transformation.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.Choreographer.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ChoreographerDLRFrameCallback.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ContextMenu.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ContextMenuDLRContextMenuInfo.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ContextThemeWrapper.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.Display.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.DragEvent.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.Gravity.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.InputEvent.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.inputmethod.EditorInfo.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.inputmethod.InputConnection.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.KeyEvent.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.KeyEventDLRDispatcherState.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.Menu.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.MenuItem.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.MenuItemDLROnActionExpandListener.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.MenuItemDLROnMenuItemClickListener.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.MotionEvent.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.SubMenu.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.Surface.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.SurfaceHolder.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.SurfaceHolderDLRCallback.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.SurfaceHolderDLRCallback2.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.SurfaceView.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.TextureView.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.TextureViewDLRSurfaceTextureListener.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.TouchDelegate.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.View.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLRAccessibilityDelegate.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLRDragShadowBuilder.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLRMeasureSpec.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnAttachStateChangeListener.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnClickListener.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnCreateContextMenuListener.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnDragListener.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnFocusChangeListener.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnGenericMotionListener.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnHoverListener.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnKeyListener.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnLayoutChangeListener.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnLongClickListener.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnSystemUiVisibilityChangeListener.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnTouchListener.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewGroup.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewGroupDLRLayoutParams.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewGroupDLRMarginLayoutParams.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewGroupDLROnHierarchyChangeListener.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewGroupOverlay.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewOverlay.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewParent.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewPropertyAnimator.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.ViewTreeObserver.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.WindowId.h
obj/Android.android.view.g.cpp.o: include/Android.android.view.WindowManagerDLRLayoutParams.h
obj/Android.android.view.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.view.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.view.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
obj/Android.android.view.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.view.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.view.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.view.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_content_Context.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_os_IBinder.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_os_Parcelable.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_util_Property.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ActionMode.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ActionModeDLRCallback.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ActionProvider.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_animation_Animation.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_animation_AnimationDLRAn-50875199.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ContextMenu.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_InputEvent.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_Menu.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_MenuItem.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-b952820b.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_SubMenu.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolder.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTex-57881719.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnAttachStateChan-cad4f1be.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnClickListener.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnCreateContextMe-448f6a4b.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnDragListener.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnGenericMotionListener.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnHoverListener.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnKeyListener.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnLayoutChangeListener.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnLongClickListener.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnSystemUiVisibil-1e6ae627.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnTouchListener.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewGroup.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewGroupDLROnHierarchyC-cdf1f397.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewParent.h
obj/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_java_lang_CharSequence.h
obj/Android.android.view.g.cpp.o: include/Android.java.lang.CharSequence.h
obj/Android.android.view.g.cpp.o: include/Android.java.lang.Object.h
obj/Android.android.view.g.cpp.o: include/Android.java.lang.Runnable.h
obj/Android.android.view.g.cpp.o: include/Android.java.lang.String.h
obj/Android.android.view.g.cpp.o: include/Android.java.util.ArrayList.h
obj/Android.android.view.g.cpp.o: include/Android.Runtime.IntArray.h
obj/Android.android.view.g.cpp.o: include/Android.Runtime.ObjectArray-1.h
obj/Android.android.view.g.cpp.o: include/Uno.Bool.h
obj/Android.android.view.g.cpp.o: include/Uno.Char.h
obj/Android.android.view.g.cpp.o: include/Uno.Exception.h
obj/Android.android.view.g.cpp.o: include/Uno.Float.h
obj/Android.android.view.g.cpp.o: include/Uno.Int.h
obj/Android.android.view.g.cpp.o: include/Uno.Long.h
obj/Android.android.view.g.cpp.o: include/Uno.Type.h
obj/Android.android.view.g.cpp.o: jni/Android.android.view.g.cpp | obj
	echo Android.android.view.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.view.g.cpp.o -c jni/Android.android.view.g.cpp

obj/Android.android.view.inputmethod.g.cpp.o: include/Android.android.os.Bundle.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.android.os.IBinder.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.android.os.Parcel.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.android.view.inputmethod.CompletionInfo.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.android.view.inputmethod.CorrectionInfo.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.android.view.inputmethod.EditorInfo.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.android.view.inputmethod.ExtractedText.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.android.view.inputmethod.ExtractedTextRequest.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.android.view.inputmethod.InputConnection.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.android.view.inputmethod.InputMethodManager.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.android.view.KeyEvent.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.android.view.View.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.java.lang.CharSequence.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Android.java.lang.String.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Uno.Bool.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Uno.Exception.h
obj/Android.android.view.inputmethod.g.cpp.o: include/Uno.Int.h
obj/Android.android.view.inputmethod.g.cpp.o: jni/Android.android.view.inputmethod.g.cpp | obj
	echo Android.android.view.inputmethod.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.view.inputmethod.g.cpp.o -c jni/Android.android.view.inputmethod.g.cpp

obj/Android.android.webkit.g.cpp.o: include/Android.android.content.Context.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.graphics.Bitmap.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.graphics.Paint.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.graphics.Rect.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.net.http.SslError.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.os.Bundle.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.os.Message.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.view.accessibility.AccessibilityEvent.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.view.accessibility.AccessibilityNodeInfo.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.view.accessibility.AccessibilityNodeProvider.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.view.inputmethod.EditorInfo.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.view.inputmethod.InputConnection.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.view.KeyEvent.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.view.MotionEvent.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.view.View.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.view.ViewGroupDLRLayoutParams.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.webkit.ConsoleMessage.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.webkit.GeolocationPermissionsDLRCallback.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.webkit.HttpAuthHandler.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.webkit.JsPromptResult.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.webkit.JsResult.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.webkit.SslErrorHandler.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.webkit.ValueCallback.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.webkit.WebChromeClient.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.webkit.WebChromeClientDLRCustomViewCallback.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.webkit.WebResourceResponse.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.webkit.WebSettings.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.webkit.WebStorageDLRQuotaUpdater.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.webkit.WebView.h
obj/Android.android.webkit.g.cpp.o: include/Android.android.webkit.WebViewClient.h
obj/Android.android.webkit.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.webkit.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.webkit.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
obj/Android.android.webkit.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.webkit.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.webkit.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.webkit.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.webkit.g.cpp.o: include/Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h
obj/Android.android.webkit.g.cpp.o: include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h
obj/Android.android.webkit.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_GeolocationPermissions-b666dc8a.h
obj/Android.android.webkit.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_ValueCallback.h
obj/Android.android.webkit.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_WebChromeClientDLRCust-ce52e805.h
obj/Android.android.webkit.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_WebSettings.h
obj/Android.android.webkit.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_WebStorageDLRQuotaUpdater.h
obj/Android.android.webkit.g.cpp.o: include/Android.java.lang.Object.h
obj/Android.android.webkit.g.cpp.o: include/Android.java.lang.String.h
obj/Android.android.webkit.g.cpp.o: include/Uno.Bool.h
obj/Android.android.webkit.g.cpp.o: include/Uno.Exception.h
obj/Android.android.webkit.g.cpp.o: include/Uno.Float.h
obj/Android.android.webkit.g.cpp.o: include/Uno.Int.h
obj/Android.android.webkit.g.cpp.o: include/Uno.Long.h
obj/Android.android.webkit.g.cpp.o: include/Uno.Type.h
obj/Android.android.webkit.g.cpp.o: jni/Android.android.webkit.g.cpp | obj
	echo Android.android.webkit.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.webkit.g.cpp.o -c jni/Android.android.webkit.g.cpp

obj/Android.android.widget.g.cpp.o: include/Android.android.content.Context.h
obj/Android.android.widget.g.cpp.o: include/Android.android.content.res.ColorStateList.h
obj/Android.android.widget.g.cpp.o: include/Android.android.graphics.Bitmap.h
obj/Android.android.widget.g.cpp.o: include/Android.android.graphics.Canvas.h
obj/Android.android.widget.g.cpp.o: include/Android.android.graphics.drawable.Drawable.h
obj/Android.android.widget.g.cpp.o: include/Android.android.graphics.Matrix.h
obj/Android.android.widget.g.cpp.o: include/Android.android.graphics.Rect.h
obj/Android.android.widget.g.cpp.o: include/Android.android.graphics.Region.h
obj/Android.android.widget.g.cpp.o: include/Android.android.graphics.Typeface.h
obj/Android.android.widget.g.cpp.o: include/Android.android.os.Bundle.h
obj/Android.android.widget.g.cpp.o: include/Android.android.os.Parcelable.h
obj/Android.android.widget.g.cpp.o: include/Android.android.text.TextUtilsDLRTruncateAt.h
obj/Android.android.widget.g.cpp.o: include/Android.android.text.TextWatcher.h
obj/Android.android.widget.g.cpp.o: include/Android.android.util.AttributeSet.h
obj/Android.android.widget.g.cpp.o: include/Android.android.view.accessibility.AccessibilityEvent.h
obj/Android.android.widget.g.cpp.o: include/Android.android.view.accessibility.AccessibilityNodeInfo.h
obj/Android.android.widget.g.cpp.o: include/Android.android.view.animation.Interpolator.h
obj/Android.android.widget.g.cpp.o: include/Android.android.view.DragEvent.h
obj/Android.android.widget.g.cpp.o: include/Android.android.view.inputmethod.EditorInfo.h
obj/Android.android.widget.g.cpp.o: include/Android.android.view.inputmethod.InputConnection.h
obj/Android.android.widget.g.cpp.o: include/Android.android.view.KeyEvent.h
obj/Android.android.widget.g.cpp.o: include/Android.android.view.MotionEvent.h
obj/Android.android.widget.g.cpp.o: include/Android.android.view.View.h
obj/Android.android.widget.g.cpp.o: include/Android.android.view.ViewGroupDLRLayoutParams.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.AbsoluteLayout.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.AbsSeekBar.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.Button.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.CompoundButton.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.CompoundButtonDLROnCheckedChangeListener.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.EditText.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.FrameLayout.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.FrameLayoutDLRLayoutParams.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.HorizontalScrollView.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.ImageView.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.ImageViewDLRScaleType.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.ProgressBar.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.RelativeLayout.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.RelativeLayoutDLRLayoutParams.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.ScrollView.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.SeekBar.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.SeekBarDLROnSeekBarChangeListener.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.Switch.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.TextView.h
obj/Android.android.widget.g.cpp.o: include/Android.android.widget.TextViewDLROnEditorActionListener.h
obj/Android.android.widget.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.android.widget.g.cpp.o: include/Android.Base.JNI.h
obj/Android.android.widget.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
obj/Android.android.widget.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.android.widget.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.android.widget.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.android.widget.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.android.widget.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h
obj/Android.android.widget.g.cpp.o: include/Android.Fallbacks.Android_android_os_Parcelable.h
obj/Android.android.widget.g.cpp.o: include/Android.Fallbacks.Android_android_view_animation_Interpolator.h
obj/Android.android.widget.g.cpp.o: include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h
obj/Android.android.widget.g.cpp.o: include/Android.Fallbacks.Android_android_widget_AbsSeekBar.h
obj/Android.android.widget.g.cpp.o: include/Android.Fallbacks.Android_android_widget_CompoundButton.h
obj/Android.android.widget.g.cpp.o: include/Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-91091c48.h
obj/Android.android.widget.g.cpp.o: include/Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-e452c5ca.h
obj/Android.android.widget.g.cpp.o: include/Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-1b5558e6.h
obj/Android.android.widget.g.cpp.o: include/Android.java.lang.CharSequence.h
obj/Android.android.widget.g.cpp.o: include/Android.java.util.ArrayList.h
obj/Android.android.widget.g.cpp.o: include/Uno.Bool.h
obj/Android.android.widget.g.cpp.o: include/Uno.Exception.h
obj/Android.android.widget.g.cpp.o: include/Uno.Float.h
obj/Android.android.widget.g.cpp.o: include/Uno.Int.h
obj/Android.android.widget.g.cpp.o: include/Uno.Type.h
obj/Android.android.widget.g.cpp.o: jni/Android.android.widget.g.cpp | obj
	echo Android.android.widget.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.android.widget.g.cpp.o -c jni/Android.android.widget.g.cpp

obj/Android.Base.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.Base.g.cpp.o: include/Android.Base.JNI.h
obj/Android.Base.g.cpp.o: include/Android.Base.JNI.RefType.h
obj/Android.Base.g.cpp.o: include/Android.Base.Permissions.h
obj/Android.Base.g.cpp.o: include/Android.Base.PlatPermission.h
obj/Android.Base.g.cpp.o: include/Android.Base.Primitives.ConstCharPtr.h
obj/Android.Base.g.cpp.o: include/Android.Base.Primitives.JavaVMPtr.h
obj/Android.Base.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
obj/Android.Base.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.Base.g.cpp.o: include/Android.Base.Primitives.JNIEnvPtr.h
obj/Android.Base.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.Base.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.Base.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
obj/Android.Base.g.cpp.o: include/Android.Base.Types.String.h
obj/Android.Base.g.cpp.o: include/Android.Base.Versions.h
obj/Android.Base.g.cpp.o: include/Android.Base.Wrappers.IJWrapper.h
obj/Android.Base.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.Base.g.cpp.o: include/Uno.Bool.h
obj/Android.Base.g.cpp.o: include/Uno.Char.h
obj/Android.Base.g.cpp.o: include/Uno.Double.h
obj/Android.Base.g.cpp.o: include/Uno.Exception.h
obj/Android.Base.g.cpp.o: include/Uno.Float.h
obj/Android.Base.g.cpp.o: include/Uno.Int.h
obj/Android.Base.g.cpp.o: include/Uno.Long.h
obj/Android.Base.g.cpp.o: include/Uno.SByte.h
obj/Android.Base.g.cpp.o: include/Uno.Short.h
obj/Android.Base.g.cpp.o: include/Uno.String.h
obj/Android.Base.g.cpp.o: include/Uno.Type.h
obj/Android.Base.g.cpp.o: jni/Android.Base.g.cpp | obj
	echo Android.Base.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.Base.g.cpp.o -c jni/Android.Base.g.cpp

obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.JNI.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ConstCharPtr.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.JavaVMPtr.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.JNIEnvPtr.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.JNINativeMethod.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.jweak.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujboolean.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujbyte.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujchar.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujdouble.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujfloat.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujint.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujlong.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujshort.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujstring.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
obj/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.uweakptr.h
obj/Android.Base.Primitives.g.cpp.o: include/Uno.Bool.h
obj/Android.Base.Primitives.g.cpp.o: jni/Android.Base.Primitives.g.cpp | obj
	echo Android.Base.Primitives.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.Base.Primitives.g.cpp.o -c jni/Android.Base.Primitives.g.cpp

obj/Android.Base.Types.g.cpp.o: include/Android.Base.JNI.h
obj/Android.Base.Types.g.cpp.o: include/Android.Base.Primitives.ConstCharPtr.h
obj/Android.Base.Types.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.Base.Types.g.cpp.o: include/Android.Base.Primitives.JNIEnvPtr.h
obj/Android.Base.Types.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.Base.Types.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.Base.Types.g.cpp.o: include/Android.Base.Types.Arrays.h
obj/Android.Base.Types.g.cpp.o: include/Android.Base.Types.Bridge.h
obj/Android.Base.Types.g.cpp.o: include/Android.Base.Types.ByteBuffer.h
obj/Android.Base.Types.g.cpp.o: include/Android.Base.Types.String.h
obj/Android.Base.Types.g.cpp.o: include/Android.Base.Wrappers.IJWrapper.h
obj/Android.Base.Types.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.Base.Types.g.cpp.o: include/Uno.Bool.h
obj/Android.Base.Types.g.cpp.o: include/Uno.Byte.h
obj/Android.Base.Types.g.cpp.o: include/Uno.Exception.h
obj/Android.Base.Types.g.cpp.o: include/Uno.Float.h
obj/Android.Base.Types.g.cpp.o: include/Uno.Int.h
obj/Android.Base.Types.g.cpp.o: include/Uno.Long.h
obj/Android.Base.Types.g.cpp.o: include/Uno.String.h
obj/Android.Base.Types.g.cpp.o: include/Uno.Type.h
obj/Android.Base.Types.g.cpp.o: jni/Android.Base.Types.g.cpp | obj
	echo Android.Base.Types.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.Base.Types.g.cpp.o -c jni/Android.Base.Types.g.cpp

obj/Android.Base.Wrappers.g.cpp.o: include/Android.Base.JNI.h
obj/Android.Base.Wrappers.g.cpp.o: include/Android.Base.JNI.RefType.h
obj/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Primitives.uweakptr.h
obj/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Types.Bridge.h
obj/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Wrappers.BindingSubclassAttribute.h
obj/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Wrappers.IJWrapper.h
obj/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.Base.Wrappers.g.cpp.o: include/Uno.Bool.h
obj/Android.Base.Wrappers.g.cpp.o: include/Uno.Int.h
obj/Android.Base.Wrappers.g.cpp.o: include/Uno.String.h
obj/Android.Base.Wrappers.g.cpp.o: include/Uno.Type.h
obj/Android.Base.Wrappers.g.cpp.o: jni/Android.Base.Wrappers.g.cpp | obj
	echo Android.Base.Wrappers.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.Base.Wrappers.g.cpp.o -c jni/Android.Base.Wrappers.g.cpp

obj/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.JNI.h
obj/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.com.fuse.ExperimentalHttp.HttpRequest.h
obj/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Bool.h
obj/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Exception.h
obj/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Int.h
obj/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Long.h
obj/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Type.h
obj/Android.com.fuse.ExperimentalHttp.g.cpp.o: jni/Android.com.fuse.ExperimentalHttp.g.cpp | obj
	echo Android.com.fuse.ExperimentalHttp.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.com.fuse.ExperimentalHttp.g.cpp.o -c jni/Android.com.fuse.ExperimentalHttp.g.cpp

obj/Android.com.fuse.Native.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.com.fuse.Native.g.cpp.o: include/Android.Base.JNI.h
obj/Android.com.fuse.Native.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.com.fuse.Native.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.com.fuse.Native.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.com.fuse.Native.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.com.fuse.Native.g.cpp.o: include/Android.com.fuse.Native.Camera.h
obj/Android.com.fuse.Native.g.cpp.o: include/Android.com.fuse.Native.CameraTask.h
obj/Android.com.fuse.Native.g.cpp.o: include/Uno.Bool.h
obj/Android.com.fuse.Native.g.cpp.o: include/Uno.Exception.h
obj/Android.com.fuse.Native.g.cpp.o: include/Uno.Int.h
obj/Android.com.fuse.Native.g.cpp.o: include/Uno.Type.h
obj/Android.com.fuse.Native.g.cpp.o: jni/Android.com.fuse.Native.g.cpp | obj
	echo Android.com.fuse.Native.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.com.fuse.Native.g.cpp.o -c jni/Android.com.fuse.Native.g.cpp

obj/Android.Fallbacks.g.cpp.o: include/Android.android.animation.TimeAnimator.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.content.ComponentName.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.content.Intent.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.content.res.Resources.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.graphics.Canvas.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.graphics.drawable.Drawable.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.graphics.Point.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.graphics.Rect.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.graphics.Shader.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.graphics.SurfaceTexture.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.location.Location.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.media.MediaPlayer.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.os.Bundle.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.os.IBinder.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.os.IBinderDLRDeathRecipient.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.os.IInterface.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.os.Parcel.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.text.Editable.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.text.InputFilter.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.text.Spanned.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.accessibility.AccessibilityEvent.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.ActionMode.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.ActionModeDLRCallback.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.ActionProvider.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.animation.Animation.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.ContextMenu.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.ContextMenuDLRContextMenuInfo.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.DragEvent.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.inputmethod.CompletionInfo.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.inputmethod.CorrectionInfo.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.inputmethod.ExtractedText.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.inputmethod.ExtractedTextRequest.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.KeyEvent.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.Menu.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.MenuItem.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.MenuItemDLROnActionExpandListener.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.MenuItemDLROnMenuItemClickListener.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.MotionEvent.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.SubMenu.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.Surface.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.SurfaceHolder.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.SurfaceHolderDLRCallback.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.View.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.view.ViewParent.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.widget.CompoundButton.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.widget.SeekBar.h
obj/Android.Fallbacks.g.cpp.o: include/Android.android.widget.TextView.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Base.JNI.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_animation_Animator.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_animation_TimeInterpolator.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_content_Context.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_ShapeDrawab-1918c93c.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_SurfaceTextureDLROnF-45d51137.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_location_LocationListener.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_media_AudioManagerDLROnAudioF-b4dcb473.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnBufferi-a11a3e5b.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnComplet-64af01f3.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnErrorListener.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnPreparedListener.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnSeekCom-79a19ba7.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnVideoSi-169f5c77.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_net_Uri.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_os_IBinder.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_os_IInterface.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_os_Parcelable.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_os_Vibrator.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_text_Editable.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_text_GetChars.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_text_InputFilter.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_text_Layout.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_text_Spannable.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_text_Spanned.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_text_TextWatcher.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_util_AttributeSet.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_util_Property.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ActionMode.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ActionModeDLRCallback.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ActionProvider.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_animation_Animation.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_animation_AnimationDLRAn-50875199.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_animation_Interpolator.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ContextMenu.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_InputEvent.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_Menu.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_MenuItem.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-b952820b.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_SubMenu.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolder.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTex-57881719.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnAttachStateChan-cad4f1be.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnClickListener.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnCreateContextMe-448f6a4b.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnDragListener.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnGenericMotionListener.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnHoverListener.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnKeyListener.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnLayoutChangeListener.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnLongClickListener.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnSystemUiVisibil-1e6ae627.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnTouchListener.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewGroup.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewGroupDLROnHierarchyC-cdf1f397.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewParent.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_GeolocationPermissions-b666dc8a.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_ValueCallback.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_WebChromeClientDLRCust-ce52e805.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_WebSettings.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_WebStorageDLRQuotaUpdater.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_widget_AbsSeekBar.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_widget_CompoundButton.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-91091c48.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-e452c5ca.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-1b5558e6.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_io_InputStream.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_lang_CharSequence.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_lang_Iterable.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_lang_Runnable.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_util_AbstractCollection.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_util_AbstractList.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_util_Collection.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_util_Iterator.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_util_List.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_util_ListIterator.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_util_Observer.h
obj/Android.Fallbacks.g.cpp.o: include/Android.java.io.FileDescriptor.h
obj/Android.Fallbacks.g.cpp.o: include/Android.java.lang.CharSequence.h
obj/Android.Fallbacks.g.cpp.o: include/Android.java.lang.Class.h
obj/Android.Fallbacks.g.cpp.o: include/Android.java.lang.Object.h
obj/Android.Fallbacks.g.cpp.o: include/Android.java.lang.String.h
obj/Android.Fallbacks.g.cpp.o: include/Android.java.util.Collection.h
obj/Android.Fallbacks.g.cpp.o: include/Android.java.util.Iterator.h
obj/Android.Fallbacks.g.cpp.o: include/Android.java.util.List.h
obj/Android.Fallbacks.g.cpp.o: include/Android.java.util.ListIterator.h
obj/Android.Fallbacks.g.cpp.o: include/Android.java.util.Observable.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Runtime.CharArray.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Runtime.IntArray.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Runtime.JEnumerator.h
obj/Android.Fallbacks.g.cpp.o: include/Android.Runtime.ObjectArray-1.h
obj/Android.Fallbacks.g.cpp.o: include/Uno.Bool.h
obj/Android.Fallbacks.g.cpp.o: include/Uno.Char.h
obj/Android.Fallbacks.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Android.Fallbacks.g.cpp.o: include/Uno.Exception.h
obj/Android.Fallbacks.g.cpp.o: include/Uno.Float.h
obj/Android.Fallbacks.g.cpp.o: include/Uno.Int.h
obj/Android.Fallbacks.g.cpp.o: include/Uno.Long.h
obj/Android.Fallbacks.g.cpp.o: jni/Android.Fallbacks.g.cpp | obj
	echo Android.Fallbacks.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.Fallbacks.g.cpp.o -c jni/Android.Fallbacks.g.cpp

obj/Android.g.cpp.o: include/Android.Bootstrapper.h
obj/Android.g.cpp.o: include/BootstrapperImpl_Android.h
obj/Android.g.cpp.o: jni/Android.g.cpp | obj
	echo Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.g.cpp.o -c jni/Android.g.cpp

obj/Android.java.io.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.java.io.g.cpp.o: include/Android.Base.JNI.h
obj/Android.java.io.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.java.io.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.java.io.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.java.io.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.java.io.g.cpp.o: include/Android.Fallbacks.Android_java_io_InputStream.h
obj/Android.java.io.g.cpp.o: include/Android.java.io.FileDescriptor.h
obj/Android.java.io.g.cpp.o: include/Android.java.io.InputStream.h
obj/Android.java.io.g.cpp.o: include/Android.java.lang.String.h
obj/Android.java.io.g.cpp.o: include/Uno.Bool.h
obj/Android.java.io.g.cpp.o: include/Uno.Exception.h
obj/Android.java.io.g.cpp.o: jni/Android.java.io.g.cpp | obj
	echo Android.java.io.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.java.io.g.cpp.o -c jni/Android.java.io.g.cpp

obj/Android.java.lang.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.java.lang.g.cpp.o: include/Android.Base.JNI.h
obj/Android.java.lang.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.java.lang.g.cpp.o: include/Android.Base.Primitives.JNIEnvPtr.h
obj/Android.java.lang.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.java.lang.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.java.lang.g.cpp.o: include/Android.Base.Types.String.h
obj/Android.java.lang.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.java.lang.g.cpp.o: include/Android.Fallbacks.Android_java_lang_CharSequence.h
obj/Android.java.lang.g.cpp.o: include/Android.Fallbacks.Android_java_lang_Iterable.h
obj/Android.java.lang.g.cpp.o: include/Android.Fallbacks.Android_java_lang_Runnable.h
obj/Android.java.lang.g.cpp.o: include/Android.java.lang.CharSequence.h
obj/Android.java.lang.g.cpp.o: include/Android.java.lang.Class.h
obj/Android.java.lang.g.cpp.o: include/Android.java.lang.Iterable.h
obj/Android.java.lang.g.cpp.o: include/Android.java.lang.Object.h
obj/Android.java.lang.g.cpp.o: include/Android.java.lang.reflect.Field.h
obj/Android.java.lang.g.cpp.o: include/Android.java.lang.Runnable.h
obj/Android.java.lang.g.cpp.o: include/Android.java.lang.String.h
obj/Android.java.lang.g.cpp.o: include/Android.java.lang.System.h
obj/Android.java.lang.g.cpp.o: include/Android.java.lang.Thread.h
obj/Android.java.lang.g.cpp.o: include/Android.java.util.Iterator.h
obj/Android.java.lang.g.cpp.o: include/Uno.Bool.h
obj/Android.java.lang.g.cpp.o: include/Uno.Char.h
obj/Android.java.lang.g.cpp.o: include/Uno.Exception.h
obj/Android.java.lang.g.cpp.o: include/Uno.Int.h
obj/Android.java.lang.g.cpp.o: include/Uno.Long.h
obj/Android.java.lang.g.cpp.o: include/Uno.Object.h
obj/Android.java.lang.g.cpp.o: include/Uno.String.h
obj/Android.java.lang.g.cpp.o: include/Uno.Type.h
obj/Android.java.lang.g.cpp.o: jni/Android.java.lang.g.cpp | obj
	echo Android.java.lang.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.java.lang.g.cpp.o -c jni/Android.java.lang.g.cpp

obj/Android.java.lang.reflect.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.java.lang.reflect.g.cpp.o: include/Android.Base.JNI.h
obj/Android.java.lang.reflect.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.java.lang.reflect.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.java.lang.reflect.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.java.lang.reflect.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.java.lang.reflect.g.cpp.o: include/Android.java.lang.Object.h
obj/Android.java.lang.reflect.g.cpp.o: include/Android.java.lang.reflect.AccessibleObject.h
obj/Android.java.lang.reflect.g.cpp.o: include/Android.java.lang.reflect.Field.h
obj/Android.java.lang.reflect.g.cpp.o: include/Android.java.lang.String.h
obj/Android.java.lang.reflect.g.cpp.o: include/Uno.Bool.h
obj/Android.java.lang.reflect.g.cpp.o: include/Uno.Exception.h
obj/Android.java.lang.reflect.g.cpp.o: include/Uno.Int.h
obj/Android.java.lang.reflect.g.cpp.o: jni/Android.java.lang.reflect.g.cpp | obj
	echo Android.java.lang.reflect.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.java.lang.reflect.g.cpp.o -c jni/Android.java.lang.reflect.g.cpp

obj/Android.java.net.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.java.net.g.cpp.o: include/Android.Base.JNI.h
obj/Android.java.net.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.java.net.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.java.net.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.java.net.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.java.net.g.cpp.o: include/Android.java.lang.Object.h
obj/Android.java.net.g.cpp.o: include/Android.java.lang.String.h
obj/Android.java.net.g.cpp.o: include/Android.java.net.URL.h
obj/Android.java.net.g.cpp.o: include/Uno.Bool.h
obj/Android.java.net.g.cpp.o: include/Uno.Exception.h
obj/Android.java.net.g.cpp.o: include/Uno.Int.h
obj/Android.java.net.g.cpp.o: include/Uno.Type.h
obj/Android.java.net.g.cpp.o: jni/Android.java.net.g.cpp | obj
	echo Android.java.net.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.java.net.g.cpp.o -c jni/Android.java.net.g.cpp

obj/Android.java.util.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.java.util.g.cpp.o: include/Android.Base.JNI.h
obj/Android.java.util.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.java.util.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.java.util.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.java.util.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.java.util.g.cpp.o: include/Android.Fallbacks.Android_java_util_AbstractCollection.h
obj/Android.java.util.g.cpp.o: include/Android.Fallbacks.Android_java_util_AbstractList.h
obj/Android.java.util.g.cpp.o: include/Android.Fallbacks.Android_java_util_Collection.h
obj/Android.java.util.g.cpp.o: include/Android.Fallbacks.Android_java_util_Iterator.h
obj/Android.java.util.g.cpp.o: include/Android.Fallbacks.Android_java_util_List.h
obj/Android.java.util.g.cpp.o: include/Android.Fallbacks.Android_java_util_ListIterator.h
obj/Android.java.util.g.cpp.o: include/Android.Fallbacks.Android_java_util_Observer.h
obj/Android.java.util.g.cpp.o: include/Android.java.lang.Object.h
obj/Android.java.util.g.cpp.o: include/Android.java.lang.String.h
obj/Android.java.util.g.cpp.o: include/Android.java.util.AbstractCollection.h
obj/Android.java.util.g.cpp.o: include/Android.java.util.AbstractList.h
obj/Android.java.util.g.cpp.o: include/Android.java.util.ArrayList.h
obj/Android.java.util.g.cpp.o: include/Android.java.util.Collection.h
obj/Android.java.util.g.cpp.o: include/Android.java.util.Iterator.h
obj/Android.java.util.g.cpp.o: include/Android.java.util.List.h
obj/Android.java.util.g.cpp.o: include/Android.java.util.ListIterator.h
obj/Android.java.util.g.cpp.o: include/Android.java.util.Observable.h
obj/Android.java.util.g.cpp.o: include/Android.java.util.Observer.h
obj/Android.java.util.g.cpp.o: include/Android.Runtime.JEnumerator.h
obj/Android.java.util.g.cpp.o: include/Android.Runtime.ObjectArray-1.h
obj/Android.java.util.g.cpp.o: include/Uno.Bool.h
obj/Android.java.util.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Android.java.util.g.cpp.o: include/Uno.Exception.h
obj/Android.java.util.g.cpp.o: include/Uno.Int.h
obj/Android.java.util.g.cpp.o: jni/Android.java.util.g.cpp | obj
	echo Android.java.util.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.java.util.g.cpp.o -c jni/Android.java.util.g.cpp

obj/Android.Runtime.g.cpp.o: include/Android.android.app.Activity.h
obj/Android.Runtime.g.cpp.o: include/Android.android.app.Fragment.h
obj/Android.Runtime.g.cpp.o: include/Android.android.app.TaskStackBuilder.h
obj/Android.Runtime.g.cpp.o: include/Android.android.content.Context.h
obj/Android.Runtime.g.cpp.o: include/Android.android.content.Intent.h
obj/Android.Runtime.g.cpp.o: include/Android.android.content.res.Configuration.h
obj/Android.Runtime.g.cpp.o: include/Android.android.graphics.Bitmap.h
obj/Android.Runtime.g.cpp.o: include/Android.android.graphics.Canvas.h
obj/Android.Runtime.g.cpp.o: include/Android.android.os.Bundle.h
obj/Android.Runtime.g.cpp.o: include/Android.android.util.AttributeSet.h
obj/Android.Runtime.g.cpp.o: include/Android.android.view.ActionMode.h
obj/Android.Runtime.g.cpp.o: include/Android.android.view.KeyEvent.h
obj/Android.Runtime.g.cpp.o: include/Android.android.view.Menu.h
obj/Android.Runtime.g.cpp.o: include/Android.android.view.MenuItem.h
obj/Android.Runtime.g.cpp.o: include/Android.android.view.MotionEvent.h
obj/Android.Runtime.g.cpp.o: include/Android.android.view.View.h
obj/Android.Runtime.g.cpp.o: include/Android.android.view.WindowManagerDLRLayoutParams.h
obj/Android.Runtime.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
obj/Android.Runtime.g.cpp.o: include/Android.Base.JNI.h
obj/Android.Runtime.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Android.Runtime.g.cpp.o: include/Android.Base.Primitives.JNINativeMethod.h
obj/Android.Runtime.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Android.Runtime.g.cpp.o: include/Android.Base.Primitives.ujlong.h
obj/Android.Runtime.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Android.Runtime.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
obj/Android.Runtime.g.cpp.o: include/Android.Base.Types.Arrays.h
obj/Android.Runtime.g.cpp.o: include/Android.Base.Types.Bridge.h
obj/Android.Runtime.g.cpp.o: include/Android.Base.Wrappers.IJWrapper.h
obj/Android.Runtime.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Android.Runtime.g.cpp.o: include/Android.Bootstrapper.h
obj/Android.Runtime.g.cpp.o: include/Android.java.lang.CharSequence.h
obj/Android.Runtime.g.cpp.o: include/Android.java.lang.Iterable.h
obj/Android.Runtime.g.cpp.o: include/Android.java.lang.Object.h
obj/Android.Runtime.g.cpp.o: include/Android.java.lang.Runnable.h
obj/Android.Runtime.g.cpp.o: include/Android.java.lang.String.h
obj/Android.Runtime.g.cpp.o: include/Android.java.util.Iterator.h
obj/Android.Runtime.g.cpp.o: include/Android.java.util.Observable.h
obj/Android.Runtime.g.cpp.o: include/Android.java.util.Observer.h
obj/Android.Runtime.g.cpp.o: include/Android.Runtime.BooleanArray.h
obj/Android.Runtime.g.cpp.o: include/Android.Runtime.ByteArray.h
obj/Android.Runtime.g.cpp.o: include/Android.Runtime.CharArray.h
obj/Android.Runtime.g.cpp.o: include/Android.Runtime.DoubleArray.h
obj/Android.Runtime.g.cpp.o: include/Android.Runtime.FloatArray.h
obj/Android.Runtime.g.cpp.o: include/Android.Runtime.IntArray.h
obj/Android.Runtime.g.cpp.o: include/Android.Runtime.JAEnumerator-1.h
obj/Android.Runtime.g.cpp.o: include/Android.Runtime.JavaGetter-1.h
obj/Android.Runtime.g.cpp.o: include/Android.Runtime.JEnumerator.h
obj/Android.Runtime.g.cpp.o: include/Android.Runtime.JOAEnumerator-1.h
obj/Android.Runtime.g.cpp.o: include/Android.Runtime.LongArray.h
obj/Android.Runtime.g.cpp.o: include/Android.Runtime.NativeActivityHelper.h
obj/Android.Runtime.g.cpp.o: include/Android.Runtime.ObjectArray-1.h
obj/Android.Runtime.g.cpp.o: include/Android.Runtime.ObjectArrayAUX.h
obj/Android.Runtime.g.cpp.o: include/Android.Runtime.RunnableAction.h
obj/Android.Runtime.g.cpp.o: include/Android.Runtime.ShortArray.h
obj/Android.Runtime.g.cpp.o: include/Android.Runtime.UnoHelper.h
obj/Android.Runtime.g.cpp.o: include/Uno.Action.h
obj/Android.Runtime.g.cpp.o: include/Uno.Bool.h
obj/Android.Runtime.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Android.Runtime.g.cpp.o: include/Uno.Exception.h
obj/Android.Runtime.g.cpp.o: include/Uno.Int.h
obj/Android.Runtime.g.cpp.o: include/Uno.Object.h
obj/Android.Runtime.g.cpp.o: include/Uno.String.h
obj/Android.Runtime.g.cpp.o: include/Uno.Type.h
obj/Android.Runtime.g.cpp.o: jni/Android.Runtime.g.cpp | obj
	echo Android.Runtime.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Android.Runtime.g.cpp.o -c jni/Android.Runtime.g.cpp

obj/BootstrapperImpl_Android.cpp.o: include/BootstrapperImpl_Android.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Base.JNI.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Base.Types.Bridge.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.animation.Animator.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.animation.LayoutTransition.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.animation.TimeAnimator.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.animation.ValueAnimator.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.app.Activity.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.app.Fragment.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.app.TaskStackBuilder.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.content.ClipData.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.content.ComponentName.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.content.Context.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.content.ContextWrapper.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.content.Intent.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.content.res.AssetFileDescriptor.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.content.res.AssetManager.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.content.res.ColorStateList.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.content.res.Configuration.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.content.res.Resources.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.content.res.TypedArray.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Bitmap.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.BitmapDLRConfig.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.BitmapFactory.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Canvas.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Color.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.drawable.Drawable.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.drawable.LayerDrawable.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.drawable.ShapeDrawable.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.drawable.shapes.ArcShape.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.drawable.shapes.RectShape.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.drawable.shapes.RoundRectShape.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.drawable.shapes.Shape.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.LinearGradient.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Matrix.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Paint.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.PaintDLRStyle.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Point.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.PorterDuffDLRMode.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Rect.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.RectF.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Region.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Shader.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.ShaderDLRTileMode.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.SurfaceTexture.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Typeface.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.location.Location.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.location.LocationManager.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.media.AudioManager.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.media.MediaPlayer.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.net.http.SslError.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.net.Uri.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.opengl.GLUtils.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.os.Build.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.os.BuildDLRVERSION.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.os.Bundle.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.os.Handler.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.os.Looper.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.os.Message.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.os.Parcel.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.os.Vibrator.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.test.mock.MockContext.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.text.Layout.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.text.LayoutDLRAlignment.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.text.StaticLayout.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.text.TextPaint.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.text.TextUtilsDLRTruncateAt.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.util.Property.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.util.SparseArray.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.util.TypedValue.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.accessibility.AccessibilityEvent.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.accessibility.AccessibilityNodeInfo.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.accessibility.AccessibilityNodeProvider.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ActionMode.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ActionProvider.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.animation.Animation.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.animation.LayoutAnimationController.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.animation.Transformation.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.Choreographer.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ContextThemeWrapper.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.Display.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.DragEvent.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.Gravity.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.InputEvent.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.inputmethod.CompletionInfo.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.inputmethod.CorrectionInfo.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.inputmethod.EditorInfo.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.inputmethod.ExtractedText.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.inputmethod.ExtractedTextRequest.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.inputmethod.InputMethodManager.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.KeyEvent.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.KeyEventDLRDispatcherState.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.MotionEvent.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.Surface.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.SurfaceView.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.TextureView.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.TouchDelegate.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.View.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewDLRAccessibilityDelegate.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewDLRDragShadowBuilder.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewDLRMeasureSpec.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewGroup.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewGroupDLRLayoutParams.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewGroupDLRMarginLayoutParams.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewGroupOverlay.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewOverlay.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewPropertyAnimator.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewTreeObserver.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.WindowId.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.view.WindowManagerDLRLayoutParams.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.ConsoleMessage.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.HttpAuthHandler.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.JsPromptResult.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.JsResult.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.SslErrorHandler.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.WebChromeClient.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.WebResourceResponse.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.WebSettings.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.WebView.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.WebViewClient.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.AbsoluteLayout.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.AbsSeekBar.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.Button.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.CompoundButton.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.EditText.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.FrameLayout.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.FrameLayoutDLRLayoutParams.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.HorizontalScrollView.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.ImageView.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.ImageViewDLRScaleType.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.ProgressBar.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.RelativeLayout.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.RelativeLayoutDLRLayoutParams.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.ScrollView.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.SeekBar.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.Switch.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.TextView.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.com.fuse.ExperimentalHttp.HttpRequest.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.com.fuse.Native.Camera.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.com.fuse.Native.CameraTask.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_animation_Animator.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_animation_TimeInterpolator.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_content_Context.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_ShapeDrawab-1918c93c.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_graphics_SurfaceTextureDLROnF-45d51137.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_location_LocationListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_media_AudioManagerDLROnAudioF-b4dcb473.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnBufferi-a11a3e5b.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnComplet-64af01f3.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnErrorListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnPreparedListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnSeekCom-79a19ba7.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnVideoSi-169f5c77.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_net_Uri.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_os_IBinder.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_os_IInterface.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_os_Parcelable.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_os_Vibrator.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_text_Editable.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_text_GetChars.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_text_InputFilter.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_text_Layout.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_text_Spannable.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_text_Spanned.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_text_TextWatcher.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_util_AttributeSet.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_util_Property.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ActionMode.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ActionModeDLRCallback.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ActionProvider.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_animation_Animation.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_animation_AnimationDLRAn-50875199.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_animation_Interpolator.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ContextMenu.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_InputEvent.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_Menu.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_MenuItem.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-b952820b.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_SubMenu.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolder.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTex-57881719.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnAttachStateChan-cad4f1be.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnClickListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnCreateContextMe-448f6a4b.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnDragListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnGenericMotionListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnHoverListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnKeyListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnLayoutChangeListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnLongClickListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnSystemUiVisibil-1e6ae627.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnTouchListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewGroup.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewGroupDLROnHierarchyC-cdf1f397.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewParent.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_webkit_GeolocationPermissions-b666dc8a.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_webkit_ValueCallback.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_webkit_WebChromeClientDLRCust-ce52e805.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_webkit_WebSettings.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_webkit_WebStorageDLRQuotaUpdater.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_widget_AbsSeekBar.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_widget_CompoundButton.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-91091c48.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-e452c5ca.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-1b5558e6.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_io_InputStream.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_lang_CharSequence.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_lang_Iterable.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_lang_Runnable.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_util_AbstractCollection.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_util_AbstractList.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_util_Collection.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_util_Iterator.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_util_List.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_util_ListIterator.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_util_Observer.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.java.io.FileDescriptor.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.java.io.InputStream.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.java.lang.Class.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.java.lang.Object.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.java.lang.reflect.AccessibleObject.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.java.lang.reflect.Field.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.java.lang.String.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.java.lang.System.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.java.lang.Thread.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.java.net.URL.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.java.util.AbstractCollection.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.java.util.AbstractList.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.java.util.ArrayList.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.java.util.Observable.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Runtime.BooleanArray.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Runtime.ByteArray.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Runtime.CharArray.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Runtime.DoubleArray.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Runtime.FloatArray.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Runtime.IntArray.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Runtime.LongArray.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Runtime.RunnableAction.h
obj/BootstrapperImpl_Android.cpp.o: include/Android.Runtime.ShortArray.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.AndroidSeekBar.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.CompoundButton.Listener.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.EditorActionListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.Image.ImageLoader.BitmapLoader.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.JsResultHandler.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.ProgressChangedListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.ShaderFactory.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.TextChangedListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.WebChromeClient.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.WebViewClient.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.FocusChangedListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.InputDispatch.TouchListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.NativeViews.GLSurfaceTextureListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.NativeViews.HorizontalScrollView.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.NativeViews.SurfaceCallback.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.NativeViews.VerticalScrollView.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.RootViewContainer.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.App.FrameCallback.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.App.TimeListener.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.GeoLocation.LocationListenerBase.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Video.Graphics.Android.BufferingEvent.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Video.Graphics.Android.CompletionEvent.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Video.Graphics.Android.ErrorEvent.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Video.Graphics.Android.FrameAvailableEvent.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Video.Graphics.Android.PreparedEvent.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Video.Graphics.Android.SeekCompleteEvent.h
obj/BootstrapperImpl_Android.cpp.o: include/Fuse.Video.Graphics.Android.VideoSizeChanged.h
obj/BootstrapperImpl_Android.cpp.o: jni/BootstrapperImpl_Android.cpp | obj
	echo BootstrapperImpl_Android.cpp
	$(CXX) $(CXX_FLAGS) -o obj/BootstrapperImpl_Android.cpp.o -c jni/BootstrapperImpl_Android.cpp

obj/duktape.c.o: jni/duktape.c | obj
	echo duktape.c
	$(CC) $(CC_FLAGS) -o obj/duktape.c.o -c jni/duktape.c

obj/Experimental.Cache.g.cpp.o: include/Experimental.Cache.CacheLoaded.h
obj/Experimental.Cache.g.cpp.o: include/Experimental.Cache.ICache.h
obj/Experimental.Cache.g.cpp.o: include/Experimental.Cache.ICacheReader.h
obj/Experimental.Cache.g.cpp.o: include/Experimental.Cache.ICacheWriter.h
obj/Experimental.Cache.g.cpp.o: include/Experimental.Cache.ProxyStream.h
obj/Experimental.Cache.g.cpp.o: include/Uno.Bool.h
obj/Experimental.Cache.g.cpp.o: include/Uno.Byte.h
obj/Experimental.Cache.g.cpp.o: include/Uno.Int.h
obj/Experimental.Cache.g.cpp.o: include/Uno.IO.SeekOrigin.h
obj/Experimental.Cache.g.cpp.o: include/Uno.IO.Stream.h
obj/Experimental.Cache.g.cpp.o: include/Uno.Long.h
obj/Experimental.Cache.g.cpp.o: include/Uno.NotSupportedException.h
obj/Experimental.Cache.g.cpp.o: include/Uno.String.h
obj/Experimental.Cache.g.cpp.o: jni/Experimental.Cache.g.cpp | obj
	echo Experimental.Cache.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Experimental.Cache.g.cpp.o -c jni/Experimental.Cache.g.cpp

obj/Experimental.Http.g.cpp.o: include/Experimental.Cache.CacheLoaded.h
obj/Experimental.Http.g.cpp.o: include/Experimental.Cache.ICache.h
obj/Experimental.Http.g.cpp.o: include/Experimental.Cache.ICacheReader.h
obj/Experimental.Http.g.cpp.o: include/Experimental.Cache.ICacheWriter.h
obj/Experimental.Http.g.cpp.o: include/Experimental.Http.BinaryLoader.h
obj/Experimental.Http.g.cpp.o: include/Experimental.Http.HttpLoader.h
obj/Experimental.Http.g.cpp.o: include/Experimental.Http.HttpResponseHeader.h
obj/Experimental.Http.g.cpp.o: include/Experimental.Http.Internal.DateUtil.h
obj/Experimental.Http.g.cpp.o: include/Experimental.Http.Loader.h
obj/Experimental.Http.g.cpp.o: include/Experimental.Http.LoaderConst.h
obj/Experimental.Http.g.cpp.o: include/Experimental.Http.TextLoader.h
obj/Experimental.Http.g.cpp.o: include/Fuse.UpdateManager.h
obj/Experimental.Http.g.cpp.o: include/Uno.Action-1.h
obj/Experimental.Http.g.cpp.o: include/Uno.Action-2.h
obj/Experimental.Http.g.cpp.o: include/Uno.Bool.h
obj/Experimental.Http.g.cpp.o: include/Uno.Buffer.h
obj/Experimental.Http.g.cpp.o: include/Uno.Byte.h
obj/Experimental.Http.g.cpp.o: include/Uno.Char.h
obj/Experimental.Http.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
obj/Experimental.Http.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Experimental.Http.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
obj/Experimental.Http.g.cpp.o: include/Uno.Delegate.h
obj/Experimental.Http.g.cpp.o: include/Uno.Diagnostics.Debug.h
obj/Experimental.Http.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
obj/Experimental.Http.g.cpp.o: include/Uno.Exception.h
obj/Experimental.Http.g.cpp.o: include/Uno.Int.h
obj/Experimental.Http.g.cpp.o: include/Uno.IO.BinaryReader.h
obj/Experimental.Http.g.cpp.o: include/Uno.IO.BinaryWriter.h
obj/Experimental.Http.g.cpp.o: include/Uno.IO.Stream.h
obj/Experimental.Http.g.cpp.o: include/Uno.IO.StreamReader.h
obj/Experimental.Http.g.cpp.o: include/Uno.IO.StreamWriter.h
obj/Experimental.Http.g.cpp.o: include/Uno.Long.h
obj/Experimental.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandler.h
obj/Experimental.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.h
obj/Experimental.Http.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
obj/Experimental.Http.g.cpp.o: include/Uno.String.h
obj/Experimental.Http.g.cpp.o: include/Uno.Threading.IDispatcher.h
obj/Experimental.Http.g.cpp.o: jni/Experimental.Http.g.cpp | obj
	echo Experimental.Http.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Experimental.Http.g.cpp.o -c jni/Experimental.Http.g.cpp

obj/Experimental.Http.Internal.g.cpp.o: include/Experimental.Http.Internal.DateUtil.h
obj/Experimental.Http.Internal.g.cpp.o: include/Uno.DateTime.h
obj/Experimental.Http.Internal.g.cpp.o: include/Uno.Int.h
obj/Experimental.Http.Internal.g.cpp.o: include/Uno.Time.ZonedDateTime.h
obj/Experimental.Http.Internal.g.cpp.o: jni/Experimental.Http.Internal.g.cpp | obj
	echo Experimental.Http.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Experimental.Http.Internal.g.cpp.o -c jni/Experimental.Http.Internal.g.cpp

obj/Experimental.Physics.g.cpp.o: include/Experimental.Physics.BasicBoundedRegion2D.h
obj/Experimental.Physics.g.cpp.o: include/Experimental.Physics.BasicBoundedRegion2D.MoveMode.h
obj/Experimental.Physics.g.cpp.o: include/Experimental.Physics.BoundedRegion2D.h
obj/Experimental.Physics.g.cpp.o: include/Experimental.Physics.DestinationSimulation-1.h
obj/Experimental.Physics.g.cpp.o: include/Experimental.Physics.DestinationSimulationFactory-1.h
obj/Experimental.Physics.g.cpp.o: include/Experimental.Physics.DestinationSimulationType.h
obj/Experimental.Physics.g.cpp.o: include/Experimental.Physics.ElasticForce-1.h
obj/Experimental.Physics.g.cpp.o: include/Experimental.Physics.Friction-1.h
obj/Experimental.Physics.g.cpp.o: include/Experimental.Physics.MotionSimulation-1.h
obj/Experimental.Physics.g.cpp.o: include/Experimental.Physics.PointerVelocity-1.h
obj/Experimental.Physics.g.cpp.o: include/Experimental.Physics.Simulation.h
obj/Experimental.Physics.g.cpp.o: include/Experimental.Physics.SmoothSnap-1.h
obj/Experimental.Physics.g.cpp.o: include/Fuse.Internal.Blender-1.h
obj/Experimental.Physics.g.cpp.o: include/Fuse.Internal.BlenderMap.h
obj/Experimental.Physics.g.cpp.o: include/Fuse.Internal.Statistics.h
obj/Experimental.Physics.g.cpp.o: include/Uno.Bool.h
obj/Experimental.Physics.g.cpp.o: include/Uno.Double.h
obj/Experimental.Physics.g.cpp.o: include/Uno.Exception.h
obj/Experimental.Physics.g.cpp.o: include/Uno.Float.h
obj/Experimental.Physics.g.cpp.o: include/Uno.Int.h
obj/Experimental.Physics.g.cpp.o: include/Uno.Math.h
obj/Experimental.Physics.g.cpp.o: include/Uno.Object.h
obj/Experimental.Physics.g.cpp.o: include/Uno.String.h
obj/Experimental.Physics.g.cpp.o: include/Uno.Vector.h
obj/Experimental.Physics.g.cpp.o: jni/Experimental.Physics.g.cpp | obj
	echo Experimental.Physics.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Experimental.Physics.g.cpp.o -c jni/Experimental.Physics.g.cpp

obj/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureLoader.Callback.h
obj/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureLoader.InvalidContentTypeException.h
obj/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureLoader.TextureLoader.h
obj/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureLoader.TextureLoaderImpl.h
obj/Experimental.TextureLoader.g.cpp.o: include/Uno.Action-1.h
obj/Experimental.TextureLoader.g.cpp.o: include/Uno.Bool.h
obj/Experimental.TextureLoader.g.cpp.o: include/Uno.Buffer.h
obj/Experimental.TextureLoader.g.cpp.o: include/Uno.Char.h
obj/Experimental.TextureLoader.g.cpp.o: include/Uno.Exception.h
obj/Experimental.TextureLoader.g.cpp.o: include/Uno.Graphics.Texture2D.h
obj/Experimental.TextureLoader.g.cpp.o: include/Uno.Int.h
obj/Experimental.TextureLoader.g.cpp.o: include/Uno.String.h
obj/Experimental.TextureLoader.g.cpp.o: include/Uno/XliInterop.h
obj/Experimental.TextureLoader.g.cpp.o: jni/Experimental.TextureLoader.g.cpp | obj
	echo Experimental.TextureLoader.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Experimental.TextureLoader.g.cpp.o -c jni/Experimental.TextureLoader.g.cpp

obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.app.Activity.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.content.Context.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.content.ContextWrapper.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.content.res.AssetManager.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.content.res.ColorStateList.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.content.res.Resources.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.Bitmap.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.BitmapFactory.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.drawable.Drawable.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.drawable.LayerDrawable.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.drawable.ShapeDrawable.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.drawable.shapes.ArcShape.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.drawable.shapes.RectShape.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.drawable.shapes.RoundRectShape.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.drawable.shapes.Shape.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.LinearGradient.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.Matrix.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.Paint.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.PaintDLRStyle.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.PorterDuffDLRMode.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.RectF.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.Shader.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.ShaderDLRTileMode.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.Typeface.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.os.BuildDLRVERSION.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.os.IBinder.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.text.Editable.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.text.Layout.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.text.StaticLayout.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.text.TextUtilsDLRTruncateAt.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.util.TypedValue.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.view.Gravity.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.view.inputmethod.InputMethodManager.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.view.KeyEvent.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.view.MotionEvent.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.view.View.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.view.ViewDLRMeasureSpec.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.view.ViewGroup.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.view.ViewGroupDLRLayoutParams.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.webkit.WebChromeClient.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.webkit.WebSettings.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.webkit.WebView.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.webkit.WebViewClient.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.AbsSeekBar.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.Button.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.CompoundButton.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.EditText.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.FrameLayoutDLRLayoutParams.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.ImageView.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.ImageViewDLRScaleType.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.ProgressBar.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.RelativeLayout.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.RelativeLayoutDLRLayoutParams.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.SeekBar.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.Switch.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.TextView.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.Base.JNI.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.Base.Primitives.ujlong.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.Base.Versions.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.Fallbacks.Android_android_text_Editable.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.Fallbacks.Android_android_widget_CompoundButton.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.Fallbacks.Android_java_lang_CharSequence.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.java.io.InputStream.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.java.lang.CharSequence.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.java.lang.Class.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.java.lang.Object.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.java.lang.reflect.AccessibleObject.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.java.lang.reflect.Field.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.java.lang.Runnable.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.java.lang.String.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.java.lang.Thread.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.java.net.URL.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.java.util.Observable.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.java.util.Observer.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.Runtime.FloatArray.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.Runtime.IntArray.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.Runtime.ObjectArray-1.h
obj/Fuse.Android.Controls.g.cpp.o: include/Android.Runtime.UnoHelper.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.AndroidExtensions.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.AndroidSeekBar.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.BitmapFactory.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Button.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.CheckBox.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Circle.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.CompoundButton.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.CompoundButton.Listener.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Control-1.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.EditorActionArgs.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.EditorActionHandler.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.EditorActionListener.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Element.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.FocusManager.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Image.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Image.ImageLoader.BitmapLoader.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Image.ImageLoader.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.JsResultHandler.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.MapView.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.PlainTextEdit.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.ProgressChangedHandler.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.ProgressChangedListener.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.RadioButton.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Rectangle.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.SeekBar.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.ShaderFactory.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Shape-1.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Switch.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.TextChangedHandler.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.TextChangedListener.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.TextEdit.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.TextView.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.TextViewBase-1.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.ToggleButton.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.WebChromeClient.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.WebView.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.WebViewClient.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.FocusChangedHandler.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.FocusChangedListener.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Helpers.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.NativeViews.LeafNativeView.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.NativeViews.NativeView.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.TextControlLayout.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.TypefaceCache.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Behavior.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Controls.Control.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Controls.RangeControl.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Controls.TextControl.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Controls.TextInputActionStyle.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Controls.ToggleControl.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Diagnostics.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Drawing.Brush.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Drawing.GradientStop.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Drawing.ResampleMode.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Drawing.SolidColor.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Drawing.Stroke.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Elements.Alignment.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Elements.StretchDirection.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Elements.StretchMode.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Elements.StretchSizing.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Elements.TextAlignment.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Elements.TextWrapping.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.FastMatrix.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Font.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.HitTestContext.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Input.Focus.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Input.Pointer.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Internal.SizingContainer.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.IViewport.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.NodeBounds.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.NodeEvent-2.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Resources.FileImageSource.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Resources.HttpImageSource.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.Resources.ImageSource.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.SizeFlags.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.StyleProperty-2.h
obj/Fuse.Android.Controls.g.cpp.o: include/Fuse.UpdateManager.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Action.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Byte.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Diagnostics.Debug.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Double.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.EventArgs.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Float.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Func-2.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.IDisposable.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Int.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.IO.Directory.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.IO.File.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.IO.UserDirectory.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Math.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Object.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Platform.TextInputHint.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.String.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.Type.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.UX.BundleFileSource.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.UX.FileSource.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
obj/Fuse.Android.Controls.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
obj/Fuse.Android.Controls.g.cpp.o: jni/Fuse.Android.Controls.g.cpp | obj
	echo Fuse.Android.Controls.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Android.Controls.g.cpp.o -c jni/Fuse.Android.Controls.g.cpp

obj/Fuse.Android.g.cpp.o: include/_root.Fuse_Android_bundle.h
obj/Fuse.Android.g.cpp.o: include/Android.android.app.Activity.h
obj/Fuse.Android.g.cpp.o: include/Android.android.content.Context.h
obj/Fuse.Android.g.cpp.o: include/Android.android.content.ContextWrapper.h
obj/Fuse.Android.g.cpp.o: include/Android.android.content.res.AssetManager.h
obj/Fuse.Android.g.cpp.o: include/Android.android.graphics.Bitmap.h
obj/Fuse.Android.g.cpp.o: include/Android.android.graphics.BitmapDLRConfig.h
obj/Fuse.Android.g.cpp.o: include/Android.android.graphics.Canvas.h
obj/Fuse.Android.g.cpp.o: include/Android.android.graphics.Paint.h
obj/Fuse.Android.g.cpp.o: include/Android.android.graphics.Rect.h
obj/Fuse.Android.g.cpp.o: include/Android.android.graphics.Typeface.h
obj/Fuse.Android.g.cpp.o: include/Android.android.opengl.GLUtils.h
obj/Fuse.Android.g.cpp.o: include/Android.android.os.BuildDLRVERSION.h
obj/Fuse.Android.g.cpp.o: include/Android.android.text.Layout.h
obj/Fuse.Android.g.cpp.o: include/Android.android.text.LayoutDLRAlignment.h
obj/Fuse.Android.g.cpp.o: include/Android.android.text.StaticLayout.h
obj/Fuse.Android.g.cpp.o: include/Android.android.text.TextPaint.h
obj/Fuse.Android.g.cpp.o: include/Android.android.text.TextUtilsDLRTruncateAt.h
obj/Fuse.Android.g.cpp.o: include/Android.android.view.MotionEvent.h
obj/Fuse.Android.g.cpp.o: include/Android.android.view.View.h
obj/Fuse.Android.g.cpp.o: include/Android.android.view.ViewDLROnTouchListener.h
obj/Fuse.Android.g.cpp.o: include/Android.android.view.ViewGroup.h
obj/Fuse.Android.g.cpp.o: include/Android.android.view.ViewGroupDLRLayoutParams.h
obj/Fuse.Android.g.cpp.o: include/Android.android.widget.RelativeLayout.h
obj/Fuse.Android.g.cpp.o: include/Android.android.widget.RelativeLayoutDLRLayoutParams.h
obj/Fuse.Android.g.cpp.o: include/Android.Base.JNI.h
obj/Fuse.Android.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Fuse.Android.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Fuse.Android.g.cpp.o: include/Android.Base.Primitives.ujlong.h
obj/Fuse.Android.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Fuse.Android.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
obj/Fuse.Android.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Fuse.Android.g.cpp.o: include/Android.java.lang.CharSequence.h
obj/Fuse.Android.g.cpp.o: include/Android.java.lang.Object.h
obj/Fuse.Android.g.cpp.o: include/Android.java.lang.String.h
obj/Fuse.Android.g.cpp.o: include/Android.Runtime.IntArray.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.AndroidExtensions.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.BindingView.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.Blitter.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.Button.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.Circle.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.Image.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.MapView.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.PlainTextEdit.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.Rectangle.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.SeekBar.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.Switch.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.TextEdit.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.TextView.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.WebView.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.FocusChangedHandler.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.FocusChangedListener.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.Helpers.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.InputDispatch.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.InputDispatch.TouchListener.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeStyle.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeStyle.Template.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeStyle.Template.Template1.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeStyle.Template.Template2.Factory.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeStyle.Template.Template2.Factory1.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeStyle.Template.Template2.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeTemplate.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeViews.ContentControl.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeViews.NativeView.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeViews.NativeViewHost.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeViews.Panel.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeViews.ScrollView.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeViews.SurfaceView.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeViews.TextureView.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.RootView.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.RootViewContainer.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.TextControlLayout.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.TextRenderer.BackgroundRender.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.TextRenderer.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Android.TypefaceCache.h
obj/Fuse.Android.g.cpp.o: include/Fuse.AppBase.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Behavior.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Controls.Button.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Controls.Circle.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Controls.ContentControl.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Controls.Graphics.ControlVisual-1.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Controls.Graphics.Visual.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Controls.GraphicsView.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Controls.Image.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Controls.MapView.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Controls.NativeViewHost.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Controls.Panel.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Controls.PlainTextEdit.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Controls.Rectangle.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Controls.ScrollView.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Controls.Slider.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Controls.Switch.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Controls.TextBlock.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Controls.TextControl.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Controls.TextEdit.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Controls.WebView.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Diagnostics.h
obj/Fuse.Android.g.cpp.o: include/Fuse.DrawContext.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Elements.TextAlignment.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Elements.TextWrapping.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Font.h
obj/Fuse.Android.g.cpp.o: include/Fuse.GraphicsWorker.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Input.Pointer.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Input.PointerEventData.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
obj/Fuse.Android.g.cpp.o: include/Fuse.IViewport.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Resources.DisposalManager.h
obj/Fuse.Android.g.cpp.o: include/Fuse.SizeFlags.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Style.h
obj/Fuse.Android.g.cpp.o: include/Fuse.StyleProperty-2.h
obj/Fuse.Android.g.cpp.o: include/Fuse.Themes.GraphicsStyle.h
obj/Fuse.Android.g.cpp.o: include/Fuse.UpdateManager.h
obj/Fuse.Android.g.cpp.o: include/Fuse.UpdateStage.h
obj/Fuse.Android.g.cpp.o: include/OpenGL.GL.h
obj/Fuse.Android.g.cpp.o: include/OpenGL.GLTextureHandle.h
obj/Fuse.Android.g.cpp.o: include/OpenGL.GLTextureTarget.h
obj/Fuse.Android.g.cpp.o: include/Uno.Action.h
obj/Fuse.Android.g.cpp.o: include/Uno.Application.h
obj/Fuse.Android.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Android.g.cpp.o: include/Uno.Buffer.h
obj/Fuse.Android.g.cpp.o: include/Uno.BundleFile.h
obj/Fuse.Android.g.cpp.o: include/Uno.Byte.h
obj/Fuse.Android.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Android.g.cpp.o: include/Uno.Collections.HashSet-1.h
obj/Fuse.Android.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Android.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Android.g.cpp.o: include/Uno.Double.h
obj/Fuse.Android.g.cpp.o: include/Uno.EventArgs.h
obj/Fuse.Android.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Android.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Android.g.cpp.o: include/Uno.Float.h
obj/Fuse.Android.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Android.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Android.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.Android.g.cpp.o: include/Uno.Graphics.BlendOperand.h
obj/Fuse.Android.g.cpp.o: include/Uno.Graphics.BufferUsage.h
obj/Fuse.Android.g.cpp.o: include/Uno.Graphics.Format.h
obj/Fuse.Android.g.cpp.o: include/Uno.Graphics.PolygonFace.h
obj/Fuse.Android.g.cpp.o: include/Uno.Graphics.Texture2D.h
obj/Fuse.Android.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
obj/Fuse.Android.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
obj/Fuse.Android.g.cpp.o: include/Uno.Int.h
obj/Fuse.Android.g.cpp.o: include/Uno.Int2.h
obj/Fuse.Android.g.cpp.o: include/Uno.IO.Directory.h
obj/Fuse.Android.g.cpp.o: include/Uno.IO.File.h
obj/Fuse.Android.g.cpp.o: include/Uno.IO.UserDirectory.h
obj/Fuse.Android.g.cpp.o: include/Uno.Long.h
obj/Fuse.Android.g.cpp.o: include/Uno.Math.h
obj/Fuse.Android.g.cpp.o: include/Uno.Object.h
obj/Fuse.Android.g.cpp.o: include/Uno.Platform.PointerType.h
obj/Fuse.Android.g.cpp.o: include/Uno.Platform.ViewNativeHandle.h
obj/Fuse.Android.g.cpp.o: include/Uno.Platform2.Application.h
obj/Fuse.Android.g.cpp.o: include/Uno.Rect.h
obj/Fuse.Android.g.cpp.o: include/Uno.Recti.h
obj/Fuse.Android.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
obj/Fuse.Android.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
obj/Fuse.Android.g.cpp.o: include/Uno.String.h
obj/Fuse.Android.g.cpp.o: include/Uno.Type.h
obj/Fuse.Android.g.cpp.o: include/Uno.ULong.h
obj/Fuse.Android.g.cpp.o: include/Uno.UX.BundleFileSource.h
obj/Fuse.Android.g.cpp.o: include/Uno.UX.FileSource.h
obj/Fuse.Android.g.cpp.o: include/Uno.UX.IFactory.h
obj/Fuse.Android.g.cpp.o: include/Uno.UX.Template-1.h
obj/Fuse.Android.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
obj/Fuse.Android.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
obj/Fuse.Android.g.cpp.o: jni/Fuse.Android.g.cpp | obj
	echo Fuse.Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Android.g.cpp.o -c jni/Fuse.Android.g.cpp

obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.app.Activity.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.content.Context.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.graphics.Color.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.graphics.SurfaceTexture.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.view.Surface.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.view.SurfaceHolder.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.view.SurfaceHolderDLRCallback.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.view.SurfaceView.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.view.TextureView.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.view.TextureViewDLRSurfaceTextureListener.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.view.View.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.view.ViewGroup.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.view.ViewGroupDLRLayoutParams.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.widget.FrameLayout.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.widget.FrameLayoutDLRLayoutParams.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.widget.RelativeLayout.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.widget.RelativeLayoutDLRLayoutParams.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.Base.JNI.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.Base.Primitives.ujlong.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolder.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Android.java.lang.Object.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.Controls.Element.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.InputDispatch.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.ContentControl.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.GLSurfaceTextureListener.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.GraphicsView.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.HorizontalScrollView.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.LeafNativeView.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.NativeView.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.NativeViewHost.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.Panel.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.ParentNativeView-1.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.ScrollView.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.SurfaceCallback.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.SurfaceView.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.TextureView.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.VerticalScrollView.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.RootView.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Controls.Control.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Controls.GraphicsView.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Controls.ScrollPropertyChangedArgs.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Controls.ScrollPropertyChangedHandler.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Controls.ScrollView.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.DrawContext.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Drawing.Brush.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Drawing.SolidColor.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Elements.Element.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Gestures.ScrollDirections.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.IViewport.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.PlacedHandler.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Properties.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.PropertyHandle.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.RootViewport.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.StyleProperty-2.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.UpdateManager.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.UpdateStage.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/OpenGL.GL.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Action.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Double.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.EventArgs.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Float.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Int.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Int2.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.IntPtr.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Matrix.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Object.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Platform2.Display.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Quaternion.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Recti.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.String.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Type.h
obj/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Vector.h
obj/Fuse.Android.NativeViews.g.cpp.o: jni/Fuse.Android.NativeViews.g.cpp | obj
	echo Fuse.Android.NativeViews.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Android.NativeViews.g.cpp.o -c jni/Fuse.Android.NativeViews.g.cpp

obj/Fuse.Animations.g.cpp.o: include/Experimental.Physics.DestinationSimulation-1.h
obj/Fuse.Animations.g.cpp.o: include/Experimental.Physics.DestinationSimulationFactory-1.h
obj/Fuse.Animations.g.cpp.o: include/Experimental.Physics.DestinationSimulationType.h
obj/Fuse.Animations.g.cpp.o: include/Experimental.Physics.ElasticForce-1.h
obj/Fuse.Animations.g.cpp.o: include/Experimental.Physics.MotionSimulation-1.h
obj/Fuse.Animations.g.cpp.o: include/Experimental.Physics.Simulation.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AnimationVariant.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Animator.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AnimatorState.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AnimatorVariant.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Attractor-1.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AverageMasterProperty-1.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AverageMasterTransform.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AverageMixer.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Change-1.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ContinuousTrackChangeState-1.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ContinuousTrackProvider.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Converter-1.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterDouble.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterFloat.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterFloat2.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterFloat3.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterFloat4.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.CreateStateParams.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Cycle-1.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.CycleState-1.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.CycleWaveform.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteKeyframeTrack.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteMasterProperty-1.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteMasterTransform.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteMixer.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteSingleTrack.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteTrackChangeState-1.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteTrackProvider.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easing.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.EasingFunction.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.EasingFunctions.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.EasingTrack.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.FastMatrixTransform.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IMixer.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IMixerHandle-1.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IMixerMaster.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IResize.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IResizeMode.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ITrackProvider.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Keyframe.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.KeyframeInterpolation.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.KeyframeTrack.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MasterBase-1.GFWResult.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MasterBase-1.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MasterProperty-1.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MasterPropertyGet.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MasterTransform.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Mixer.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MixerBase.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MixerHandle-1.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MixOp.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Move.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Nothing.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.NothingAnimatorState.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.OpenAnimator.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.OpenAnimatorState.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Player.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.PlayerPart.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Resize.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ResizeAnimatorState.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Rotate.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Scale.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.SeekDirection.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Skew.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Spin.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.SpinState.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.SplineTrack.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.SplineTrack.PointInterpolater.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TrackAnimatorState.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TrackProvider.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TransformAnimator-1.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TransformAnimatorState-1.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TransformPriority.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TriggerAnimation.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TriggerAnimationState.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TriggerAnimationState.SeekFlags.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.FastMatrix.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Internal.Blender-1.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Internal.BlenderMap.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.IScalingMode.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.ITranslationMode.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Properties.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.PropertyHandle.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Rotation.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.ScalingModes.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Time.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Transform.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.Translation.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.TranslationModes.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.UpdateManager.h
obj/Fuse.Animations.g.cpp.o: include/Fuse.UpdateStage.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Action.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Animations.g.cpp.o: include/Uno.ArgumentNullException.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Collections.ConcurrentCollection-1.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Diagnostics.Debug.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Double.h
obj/Fuse.Animations.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Float.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.Animations.g.cpp.o: include/Uno.IDisposable.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Int.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Math.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Object.h
obj/Fuse.Animations.g.cpp.o: include/Uno.String.h
obj/Fuse.Animations.g.cpp.o: include/Uno.Type.h
obj/Fuse.Animations.g.cpp.o: include/Uno.UX.Property-1.h
obj/Fuse.Animations.g.cpp.o: jni/Fuse.Animations.g.cpp | obj
	echo Fuse.Animations.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Animations.g.cpp.o -c jni/Fuse.Animations.g.cpp

obj/Fuse.BasicTheme.g.cpp.o: include/_root.Fuse_BasicTheme_bundle.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Animations.Animator.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Animations.Change-1.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Animations.Easing.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Animations.Move.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Animations.Nothing.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Animations.Scale.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Animations.TransformAnimator-1.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Animations_Change_1_float4_Valu-70b34bf0.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_Button_string_Text_Property.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_float_Font-aa57b285.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_float_Line-2d4b7b59.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_float4_Tex-5f66848e.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_Fuse_Eleme-9ac4faf5.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_Fuse_Eleme-efd976ea.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_Fuse_Font_-223a37b.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_string_Val-4d7336be.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextEdit_float4_Placeh-5ae6cac5.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextEdit_string_Placeh-e815f0cf.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Drawing_SolidColor_float4_Color_Property.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Drawing_Stroke_float_Width_Property.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Effects_DropShadow_float4_Color_Property.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Elements_Element_float_Height_Property.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Elements_Element_float_Opacity_Property.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Elements_Element_float_Width_Property.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Input_Focus_bool_Focus_IsFocusa-24c33a81.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Translation_float_X_Property.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Triggers_Actions_TriggerAction_-5b248813.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Fuse_Triggers_WhileBool_bool_Value_Property.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Template.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Template.Template1.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Template1.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Template2.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Template3.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Template4.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Template5.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Template6.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicTheme.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.ButtonText.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.ColorScheme.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.DefaultBasicTheme.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Behavior.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.BackButton.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.Button.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.Circle.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.DefaultSwitchBehavior.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.DockPanel.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.FillRule.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.Graphics.LinearSliderBehavior.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.NavigationBar.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.Panel.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.Path.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.PlainTextEdit.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.PropertyBinding-1.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.Rectangle.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.Shape.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.Slider.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.Switch.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.Text.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.TextControl.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.TextEdit.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.TextInput.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Drawing.Brush.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Drawing.SolidColor.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Drawing.Stroke.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Effects.DropShadow.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Effects.Effect.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Elements.Alignment.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Elements.Element.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Elements.HitTestMode.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Elements.SizeUnit.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Elements.TextAlignment.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Elements.TextWrapping.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Font.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Gestures.Tapped.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Gestures.WhilePressed.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Input.Focus.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.ITranslationMode.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Layer.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.LayoutRole.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Layouts.Dock.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Node.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Resources.ResourceBinding-1.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Scaling.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Style.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.StyleProperty-2.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.StylePropertyWithUnit-3.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Theme.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Transform.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Translation.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.TranslationModes.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.Actions.GiveFocus.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.Actions.TriggerAction.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.ProgressAnimation.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.Trigger.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.WhileBool.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.WhileContainsText.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.WhileDisabled.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.WhileFalse.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.WhileFocused.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.WhileFocusWithin.h
obj/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.WhileInteracting.h
obj/Fuse.BasicTheme.g.cpp.o: include/Uno.Bool.h
obj/Fuse.BasicTheme.g.cpp.o: include/Uno.BundleFile.h
obj/Fuse.BasicTheme.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.BasicTheme.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.BasicTheme.g.cpp.o: include/Uno.Color.h
obj/Fuse.BasicTheme.g.cpp.o: include/Uno.Double.h
obj/Fuse.BasicTheme.g.cpp.o: include/Uno.Float.h
obj/Fuse.BasicTheme.g.cpp.o: include/Uno.Float2.h
obj/Fuse.BasicTheme.g.cpp.o: include/Uno.Float4.h
obj/Fuse.BasicTheme.g.cpp.o: include/Uno.Int.h
obj/Fuse.BasicTheme.g.cpp.o: include/Uno.Object.h
obj/Fuse.BasicTheme.g.cpp.o: include/Uno.String.h
obj/Fuse.BasicTheme.g.cpp.o: include/Uno.UX.BundleFileSource.h
obj/Fuse.BasicTheme.g.cpp.o: include/Uno.UX.FileSource.h
obj/Fuse.BasicTheme.g.cpp.o: include/Uno.UX.Property-1.h
obj/Fuse.BasicTheme.g.cpp.o: include/Uno.UX.Resource.h
obj/Fuse.BasicTheme.g.cpp.o: include/Uno.UX.Template-1.h
obj/Fuse.BasicTheme.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
obj/Fuse.BasicTheme.g.cpp.o: jni/Fuse.BasicTheme.g.cpp | obj
	echo Fuse.BasicTheme.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.BasicTheme.g.cpp.o -c jni/Fuse.BasicTheme.g.cpp

obj/Fuse.Camera.g.cpp.o: include/Android.Base.Types.String.h
obj/Fuse.Camera.g.cpp.o: include/Android.Base.Wrappers.IJWrapper.h
obj/Fuse.Camera.g.cpp.o: include/Android.com.fuse.Native.Camera.h
obj/Fuse.Camera.g.cpp.o: include/Android.com.fuse.Native.CameraTask.h
obj/Fuse.Camera.g.cpp.o: include/Fuse.Camera.AndroidCameraImpl.DispatchTakePicture.h
obj/Fuse.Camera.g.cpp.o: include/Fuse.Camera.AndroidCameraImpl.h
obj/Fuse.Camera.g.cpp.o: include/Fuse.Camera.AndroidCameraImpl.TakePictureTask.h
obj/Fuse.Camera.g.cpp.o: include/Fuse.Camera.Camera.h
obj/Fuse.Camera.g.cpp.o: include/Fuse.Camera.PictureResult.h
obj/Fuse.Camera.g.cpp.o: include/Fuse.Camera.TakePictureHelpers.h
obj/Fuse.Camera.g.cpp.o: include/Fuse.Camera.TakePictureOptions.h
obj/Fuse.Camera.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Camera.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Camera.g.cpp.o: include/Uno.Float.h
obj/Fuse.Camera.g.cpp.o: include/Uno.Int.h
obj/Fuse.Camera.g.cpp.o: include/Uno.Int2.h
obj/Fuse.Camera.g.cpp.o: include/Uno.Math.h
obj/Fuse.Camera.g.cpp.o: include/Uno.String.h
obj/Fuse.Camera.g.cpp.o: include/Uno.Threading.Future-1.h
obj/Fuse.Camera.g.cpp.o: include/Uno.Threading.Promise-1.h
obj/Fuse.Camera.g.cpp.o: jni/Fuse.Camera.g.cpp | obj
	echo Fuse.Camera.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Camera.g.cpp.o -c jni/Fuse.Camera.g.cpp

obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.LineCache.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.LineCacheLine.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.LineCachePasswordTransform.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.LineCacheTransform.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.TextEditVisual.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.TextEditVisual.SwipeGestureHelper.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.TextPosition.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.TextSpan.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.TextWindow.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.VisualTextTransform.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Graphics.DefaultTextVisual.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Graphics.Visual.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Internal.DefaultTextRenderer.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Internal.WordWrapInfo.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Internal.WordWrapper.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Internal.WrappedLine.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.TextControl.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.DrawContext.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Drawing.Brush.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Drawing.Primitives.Rectangle.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Drawing.SolidColor.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Elements.Element.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Elements.Internal.ElementDraw.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Elements.TextAlignment.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Elements.TextWrapping.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Font.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.HitTestContext.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.Focus.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.Keyboard.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.KeyEventArgs.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.KeyPressedArgs.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.KeyPressedHandler.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.Pointer.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.TextEnteredArgs.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.TextEnteredHandler.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.TextService.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Internal.RectExtensions.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.NodeEvent-2.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.NodeEventArgs.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.SizeFlags.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Time.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Action.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Application.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Char.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Double.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.EventArgs.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Float.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Int.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Math.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Object.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Platform.Key.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Platform.Window.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Rect.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.String.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Vector.h
obj/Fuse.Controls.FallbackTextEdit.g.cpp.o: jni/Fuse.Controls.FallbackTextEdit.g.cpp | obj
	echo Fuse.Controls.FallbackTextEdit.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Controls.FallbackTextEdit.g.cpp.o -c jni/Fuse.Controls.FallbackTextEdit.g.cpp

obj/Fuse.Controls.g.cpp.o: include/Fuse.Animations.AnimationVariant.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Animator.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Change-1.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Easing.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Keyframe.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Move.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Scale.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Animations.TransformAnimator-1.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.AppBase.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.BeginRemoveArgs.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Behavior.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.BackButton.Fuse_Node_bool_IsEnabled_Property.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.BackButton.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.BeginRemoveArgsImpl.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.BottomBarBackground.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.BottomFrameBackground.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.BufferedWebViewCall.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Button.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Circle.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ClientPanel.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ContentControl.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Control.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.DefaultSwitchBehavior.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.DockPanel.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.EdgeNavigator.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Ellipse.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.FallbackWebViewClient.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.FillRule.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.FitMode.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.GraphicsView.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Grid.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.HTML.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Image.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.IWebView.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.JavaScriptCall.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.KeyframeAccessors.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.LoadHtmlCall.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.MapView.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.MultiLayout.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.MultiLayoutPanel.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NativeViewHost.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NavigationBar.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Number.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Page.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageControl.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageControl.Template.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageIndicator.Fuse_Drawing_SolidColor_float4_Colo-39176aba.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageIndicator.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageIndicator.Template.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageIndicatorDot.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageIndicatorDotFactory.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Panel.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Path.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PathScaleMode.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Placeholder.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PlainTextEdit.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PropertyBinding-1.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.RangeControl.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Rectangle.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.RegularPolygon.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollPropertyChangedArgs.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollPropertyChangedHandler.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollView.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollViewer.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Shape.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Slider.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.StackPanel.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Star.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.StatusBarBackground.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Switch.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Text.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextBlock.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextControl.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextEdit.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextInput.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextInputActionArgs.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextInputActionHandler.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextInputActionStyle.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextInputActionType.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Toggle.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ToggleControl.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TopFrameBackground.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Video.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Viewbox.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.WebView.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Controls.WrapPanel.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Diagnostics.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.DrawContext.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Brush.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.PathGeometry.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.ResampleMode.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.SolidColor.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Stroke.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Alignment.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Elements.BoxSizing.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Element.BoxSizingMode.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Element.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Elements.ElementBatchEntry.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Elements.ElementBatcher.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Elements.HitTestMode.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Elements.LayoutMasterBoxSizing.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Elements.SizeUnit.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Elements.StretchDirection.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Elements.StretchMode.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Elements.StretchSizing.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Elements.TextAlignment.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Elements.TextWrapping.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Visibility.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.FastMatrix.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Font.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Fonts.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.FrustumViewport.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.Clicked.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.Clicker.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.ClickerEventHandler.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.ScrollDirections.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.Scroller.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.Tapped.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.TappedArgs.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.TappedHandler.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.HitTestContext.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.IFrustum.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Input.Focus.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Input.FocusDelegator.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Input.FocusNavigationDirection.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Input.Pointer.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Internal.Drawing.SolidRectangle.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Internal.IImageContainerOwner.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Internal.ImageContainer.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Internal.SizingContainer.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.ITranslationMode.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Layer.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.LayoutDependent.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.LayoutRole.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Column.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Dock.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.DockLayout.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.FlowDirection.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.GridLayout.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Layout.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Layouts.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Orientation.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Row.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.StackLayout.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.WrapLayout.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.ActivatingAnimation.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.EdgeNavigation.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.EnteringAnimation.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.ExitingAnimation.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.GoBack.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.HistoryChangedHandler.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.INavigation.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.LinearNavigation.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigatedHandler.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Navigation.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationArgs.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationEdge.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationGotoMode.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationMode.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationPageCountHandler.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationPageProgressHandler.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationPageProperty.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.StructuredNavigation.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.SwipeDirection.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.SwipeEnds.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.SwipeNavigate.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.WhileCanGoBack.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.NodeBounds.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.NodeEvent-2.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.OrthographicFrustum.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.PlacedArgs.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.PlacedHandler.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Resources.ImageSource.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Resources.ImageSourceErrorArgs.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Resources.ImageSourceErrorHandler.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Resources.ImageSourceState.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Resources.MemoryPolicy.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.RootViewport.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.BoolChangedArgs.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.DoubleChangedArgs.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.StringChangedArgs.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.SizeFlags.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Style.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.StyleProperty-2.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.StylePropertyWithUnit-3.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Transform.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Translation.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.TranslationModes.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.Actions.TriggerAction.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.IValue-1.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.Trigger.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.WhileFailed.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.WhileLoading.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.WhileTrigger.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.UpdateManager.h
obj/Fuse.Controls.g.cpp.o: include/Fuse.UpdateStage.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Action.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Action-2.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Char.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Collections.ObservableList-1.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Comparison-1.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Double.h
obj/Fuse.Controls.g.cpp.o: include/Uno.EventArgs.h
obj/Fuse.Controls.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Controls.g.cpp.o: include/Uno.EventHandler-1.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Float.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Func-2.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Geometry.Ray.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Int.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Math.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Object.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Platform.SystemUI.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Platform.SystemUIWillResizeEventArgs.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Platform.TextInputHint.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Platform2.Display.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Predicate-1.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Rect.h
obj/Fuse.Controls.g.cpp.o: include/Uno.String.h
obj/Fuse.Controls.g.cpp.o: include/Uno.UX.FileSource.h
obj/Fuse.Controls.g.cpp.o: include/Uno.UX.IFactory.h
obj/Fuse.Controls.g.cpp.o: include/Uno.UX.ITemplate.h
obj/Fuse.Controls.g.cpp.o: include/Uno.UX.Property-1.h
obj/Fuse.Controls.g.cpp.o: include/Uno.UX.Template-1.h
obj/Fuse.Controls.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
obj/Fuse.Controls.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
obj/Fuse.Controls.g.cpp.o: include/Uno.Vector.h
obj/Fuse.Controls.g.cpp.o: jni/Fuse.Controls.g.cpp | obj
	echo Fuse.Controls.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Controls.g.cpp.o -c jni/Fuse.Controls.g.cpp

obj/Fuse.Controls.Graphics.g.cpp.o: include/_root.Fuse_Controls_bundle.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Control.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.FillRule.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.FitMode.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.CircleVisual.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.ControlVisual-1.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.DefaultTextVisual.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.EllipseVisual.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.ImageElementDraw.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.ImageVisual.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.LinearSliderBehavior.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.PathShapeVisual-1.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.PathVisual.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.RectangleVisual.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.RegularPolygonVisual.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.ShapeVisual-1.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.StarVisual.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.TextVisual.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.Visual.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Internal.DefaultTextRenderer.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Internal.WordWrapInfo.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Internal.WordWrapper.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Internal.WrappedLine.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.PathScaleMode.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.RangeControl.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Shape.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.TextControl.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.DrawContext.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.Antialiasing.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.Brush.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.PathGeometry.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.PathGeometryExtensions.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.PathGeometryRenderer.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.Primitives.Circle.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.Primitives.Rectangle.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.Primitives.Wedge.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.RendererContext.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.Stroke.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.WindingRules.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Elements.Element.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Elements.Internal.Scale9Rectangle.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Elements.StretchMode.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Elements.TextAlignment.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Elements.TextWrapping.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.FastMatrix.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Font.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Gestures.DegreeSpan.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Gestures.SwipeGestureHelper.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.HitTestContext.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Input.Focus.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Input.Pointer.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Input.PointerEnteredHandler.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Input.PointerLeftHandler.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Input.PointerWheelMovedHandler.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Internal.ImageContainer.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Internal.SizingContainer.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.IViewport.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.NodeBounds.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Resources.ImageSource.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.SizeFlags.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Action.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Buffer.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Char.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Content.Fonts.FontFace.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Double.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.EventArgs.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Float.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Graphics.BlendOperand.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Graphics.BufferUsage.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Graphics.PolygonFace.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Graphics.Texture2D.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Int.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Int2.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Math.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Matrix.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Object.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Predicate-1.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Rect.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.String.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Type.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
obj/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Vector.h
obj/Fuse.Controls.Graphics.g.cpp.o: jni/Fuse.Controls.Graphics.g.cpp | obj
	echo Fuse.Controls.Graphics.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Controls.Graphics.g.cpp.o -c jni/Fuse.Controls.Graphics.g.cpp

obj/Fuse.Controls.Internal.g.cpp.o: include/Fuse.Controls.Internal.DefaultTextRenderer.FontKey.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Fuse.Controls.Internal.DefaultTextRenderer.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Fuse.Controls.Internal.ProperTextTransform.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Fuse.Controls.Internal.WordWrapInfo.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Fuse.Controls.Internal.WordWrapper.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Fuse.Controls.Internal.WordWrapperWord.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Fuse.Controls.Internal.WrappedLine.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Fuse.DrawContext.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Fuse.Elements.TextAlignment.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Fuse.IViewport.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.ArgumentException.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.Char.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.Content.Fonts.BitmapFont.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.Content.Fonts.FontFace.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.Content.Fonts.FontFaceHelpers.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.Content.Fonts.SpriteFontShader.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.Content.Fonts.TextRenderer.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.Content.Fonts.TextShader.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.Content.Fonts.TextTransform.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.Float.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.Graphics.PolygonFace.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.Int.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.Math.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.Matrix.h
obj/Fuse.Controls.Internal.g.cpp.o: include/Uno.String.h
obj/Fuse.Controls.Internal.g.cpp.o: jni/Fuse.Controls.Internal.g.cpp | obj
	echo Fuse.Controls.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Controls.Internal.g.cpp.o -c jni/Fuse.Controls.Internal.g.cpp

obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.AdvancedAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.ChildExtensionAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.ColorAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.ComponentOfAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.DefaultComponentAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.DefaultInstanceAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.DesignerNameAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.DragDropPriorityAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.ExtensionAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.GroupAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.HideAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.HidesAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.IconAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.InlineAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.IntervalAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.OptionalHideAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.PriorityAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.RangeAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.RecursionSafeAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.RequiredComponentAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.SpawnableAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.SpawnsAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.ThicknessAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Fuse.Designer.TransitionAttribute.h
obj/Fuse.Designer.g.cpp.o: include/Uno.Float.h
obj/Fuse.Designer.g.cpp.o: include/Uno.Int.h
obj/Fuse.Designer.g.cpp.o: include/Uno.String.h
obj/Fuse.Designer.g.cpp.o: jni/Fuse.Designer.g.cpp | obj
	echo Fuse.Designer.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Designer.g.cpp.o -c jni/Fuse.Designer.g.cpp

obj/Fuse.Desktop.g.cpp.o: include/Fuse.AppBase.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.TextEditVisual.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.Controls.Graphics.DefaultTextVisual.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.Controls.Panel.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.Controls.PlainTextEdit.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.Controls.TextBlock.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.Desktop.DesktopRootViewport.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.Desktop.NativeStyle.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.Desktop.NativeStyle.Template.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.Desktop.NativeStyle.Template1.Factory.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.Desktop.NativeStyle.Template1.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.DrawContext.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.Input.Pointer.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.Input.PointerEventData.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.Input.PointerWheelMovedArgs.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.KeyboardBootstrapper.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.NodeEventArgs.h
obj/Fuse.Desktop.g.cpp.o: include/Fuse.StyleProperty-2.h
obj/Fuse.Desktop.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Desktop.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Desktop.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Desktop.g.cpp.o: include/Uno.EventHandler-1.h
obj/Fuse.Desktop.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Desktop.g.cpp.o: include/Uno.Float.h
obj/Fuse.Desktop.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Desktop.g.cpp.o: include/Uno.Int.h
obj/Fuse.Desktop.g.cpp.o: include/Uno.Object.h
obj/Fuse.Desktop.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
obj/Fuse.Desktop.g.cpp.o: include/Uno.Platform.PointerEventArgs.h
obj/Fuse.Desktop.g.cpp.o: include/Uno.Platform.PointerType.h
obj/Fuse.Desktop.g.cpp.o: include/Uno.Platform.TextInputEventArgs.h
obj/Fuse.Desktop.g.cpp.o: include/Uno.Platform.WheelDeltaMode.h
obj/Fuse.Desktop.g.cpp.o: include/Uno.Platform.Window.h
obj/Fuse.Desktop.g.cpp.o: include/Uno.UX.IFactory.h
obj/Fuse.Desktop.g.cpp.o: include/Uno.UX.Template-1.h
obj/Fuse.Desktop.g.cpp.o: jni/Fuse.Desktop.g.cpp | obj
	echo Fuse.Desktop.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Desktop.g.cpp.o -c jni/Fuse.Desktop.g.cpp

obj/Fuse.Drawing.Batching.g.cpp.o: include/Fuse.Drawing.Batching.Batch.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Fuse.Drawing.Batching.BatchHelpers.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Fuse.Drawing.Batching.BatchIndexBuffer.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Fuse.Drawing.Batching.BatchVertexBuffer.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Fuse.Drawing.Batching.Entry.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Fuse.Drawing.Batching.MeshBatcher.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Buffer.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Byte.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Byte2.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Byte4.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Content.Models.IndexArray.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Content.Models.ModelMesh.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Content.Models.VertexAttributeArray.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Float.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Func-2.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.BufferUsage.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.IndexType.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.IndexTypeHelpers.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.VertexAttributeTypeHelpers.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Int.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Int2.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Int3.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Int4.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.SByte.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.SByte2.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.SByte4.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Short.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Short2.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Short4.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.String.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.UInt.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.UShort.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.UShort2.h
obj/Fuse.Drawing.Batching.g.cpp.o: include/Uno.UShort4.h
obj/Fuse.Drawing.Batching.g.cpp.o: jni/Fuse.Drawing.Batching.g.cpp | obj
	echo Fuse.Drawing.Batching.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Drawing.Batching.g.cpp.o -c jni/Fuse.Drawing.Batching.g.cpp

obj/Fuse.Drawing.g.cpp.o: include/_root.Fuse_Drawing_bundle.h
obj/Fuse.Drawing.g.cpp.o: include/_root.Fuse_Drawing_Polygons_bundle.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Diagnostics.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.DrawContext.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Antialiasing.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.BezierOp.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.BlendMode.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.BlendModeHelpers.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Border.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Brush.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Brushes.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ButtCap.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Cache-1.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ClosePath.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Colors.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Contour.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ContourEnumerable.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ContourEnumerator.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ContourTerminator.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.CurveTo.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.EllipseFactory.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.GradientStop.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.HorizontalLineTo.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFill.DrawParams.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFill.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LinearGradientDrawable.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineCap.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineCapImpl.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineJoin.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineJoinImpl.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineTo.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.MiterJoin.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.MoveTo.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.NonConsecutiveEnumerable.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.NonConsecutiveEnumerator.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.NonConsecutiveExtension.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.PathGeometry.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.PathGeometryExtensions.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.PathGeometryParser.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.PathGeometryRenderer.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Polygon.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.PolygonDrawable.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.PolygonFiller.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.RectangleFactory.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.RegularPolygonFactory.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.RendererContext.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ResampleMode.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.RoundCap.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.SmoothCurveTo.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.SolidColor.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StarFactory.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StaticBrush.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Stroke.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StrokeAdjustment.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StrokeAlignment.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Tesselation.Face.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Tesselation.HalfEdge.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Tesselation.Mesh.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Tesselation.MeshBuilder.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Tesselation.Vertex.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Token.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Util.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.VerticalLineTo.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.WindingRules.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Elements.Alignment.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Elements.StretchDirection.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Elements.StretchMode.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.FramebufferPool.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Internal.ImageContainer.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Internal.SizingContainer.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Resources.ImageSource.h
obj/Fuse.Drawing.g.cpp.o: include/Fuse.Resources.MemoryPolicy.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Action.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.ArgumentNullException.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Buffer.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Char.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Collections.EmptyEnumerable-1.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Collections.ObservableList-1.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Color.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Content.Models.IndexArray.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Content.Models.ModelMesh.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Content.Models.VertexAttributeArray.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Double.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Float.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Float2x2.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Func-2.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Func-3.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Geometry.Collision2D.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Geometry.CubicBezier.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Geometry.Triangle2D.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.BlendOperand.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.BufferUsage.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.Format.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.Framebuffer.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.PolygonFace.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.PolygonWinding.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.Texture2D.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Int.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Int2.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.InvalidOperationException.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Math.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.NotImplementedException.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Object.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Predicate-1.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Rect.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.String.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.UInt.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.UX.FileSource.h
obj/Fuse.Drawing.g.cpp.o: include/Uno.Vector.h
obj/Fuse.Drawing.g.cpp.o: jni/Fuse.Drawing.g.cpp | obj
	echo Fuse.Drawing.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Drawing.g.cpp.o -c jni/Fuse.Drawing.g.cpp

obj/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.Float2Buffer.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.Float3Buffer.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.FloatBuffer.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.MultiBuffer.Field.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.MultiBuffer.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.MultiBuffer.Setter.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.TypedBuffer.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.UShortBuffer.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Buffer.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Byte.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Double.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Float.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.BufferUsage.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Int.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Math.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Short.h
obj/Fuse.Drawing.Internal.g.cpp.o: include/Uno.UShort.h
obj/Fuse.Drawing.Internal.g.cpp.o: jni/Fuse.Drawing.Internal.g.cpp | obj
	echo Fuse.Drawing.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Drawing.Internal.g.cpp.o -c jni/Fuse.Drawing.Internal.g.cpp

obj/Fuse.Drawing.Meshes.g.cpp.o: include/Fuse.Drawing.Meshes.MeshGenerator.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Fuse.Drawing.Meshes.MeshTools.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Content.Models.IndexArray.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Content.Models.ModelMesh.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Content.Models.VertexAttributeArray.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Float.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Int.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Math.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Quaternion.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.String.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.UShort.h
obj/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Vector.h
obj/Fuse.Drawing.Meshes.g.cpp.o: jni/Fuse.Drawing.Meshes.g.cpp | obj
	echo Fuse.Drawing.Meshes.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Drawing.Meshes.g.cpp.o -c jni/Fuse.Drawing.Meshes.g.cpp

obj/Fuse.Drawing.Primitives.g.cpp.o: include/_root.Fuse_Drawing_Primitives_bundle.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.DrawContext.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.BlendMode.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.BlendModeHelpers.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Brush.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.ImageFill.DrawParams.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.ImageFill.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal.Float2Buffer.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal.FloatBuffer.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal.TypedBuffer.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal.UShortBuffer.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.Circle.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.ConcaveWedgeCoverage.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.ConvexWedgeCoverage.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.Coverage.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.FillCoverage.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.LimitCoverage.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.OneLimitCoverage.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.Rectangle.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.StrokeCoverage.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.Wedge.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.WedgeCoverage.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.SolidColor.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Stroke.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Elements.Element.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Buffer.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Double.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.BlendOperand.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.BufferUsage.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.Framebuffer.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.IndexType.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.PolygonFace.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.Texture2D.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Int.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Int2.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Math.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.String.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.UShort.h
obj/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Vector.h
obj/Fuse.Drawing.Primitives.g.cpp.o: jni/Fuse.Drawing.Primitives.g.cpp | obj
	echo Fuse.Drawing.Primitives.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Drawing.Primitives.g.cpp.o -c jni/Fuse.Drawing.Primitives.g.cpp

obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.ActiveRegionDict.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.Dict-1.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.DictNode-1.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable-1.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator-1.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.PriorityQueue-1.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.VertexQueue.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Geom.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.HalfEdge.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Mesh.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Sweep.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Vertex.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.ArgumentException.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Double.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Float.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Func-2.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Int.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.String.h
obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o: jni/Fuse.Drawing.Tesselation.Collections.g.cpp | obj
	echo Fuse.Drawing.Tesselation.Collections.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Drawing.Tesselation.Collections.g.cpp.o -c jni/Fuse.Drawing.Tesselation.Collections.g.cpp

obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Contour.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.ActiveRegion.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.ActiveRegionDict.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.Dict-1.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.DictNode-1.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.PriorityQueue-1.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.VertexQueue.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.EdgeLoopEnumerable.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.EdgesEnumerable.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Face.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.FacesEnumerable.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Geom.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.HalfEdge.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Mesh.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.MeshBuilder.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.OriginEnumerable.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Sweep.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Vertex.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.VerticesEnumerable.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Double.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Float.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Func-2.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Geometry.Triangle2D.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Int.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Math.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Predicate-1.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.String.h
obj/Fuse.Drawing.Tesselation.g.cpp.o: jni/Fuse.Drawing.Tesselation.g.cpp | obj
	echo Fuse.Drawing.Tesselation.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Drawing.Tesselation.g.cpp.o -c jni/Fuse.Drawing.Tesselation.g.cpp

obj/Fuse.Effects.g.cpp.o: include/_root.Fuse_Effects_bundle.h
obj/Fuse.Effects.g.cpp.o: include/_root.Fuse_Entities_bundle.h
obj/Fuse.Effects.g.cpp.o: include/Fuse.DrawContext.h
obj/Fuse.Effects.g.cpp.o: include/Fuse.Effects.BasicEffect.h
obj/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Blur.h
obj/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Desaturate.h
obj/Fuse.Effects.g.cpp.o: include/Fuse.Effects.DropShadow.Blitter.h
obj/Fuse.Effects.g.cpp.o: include/Fuse.Effects.DropShadow.h
obj/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Effect.h
obj/Fuse.Effects.g.cpp.o: include/Fuse.Effects.EffectHelpers.h
obj/Fuse.Effects.g.cpp.o: include/Fuse.Effects.EffectType.h
obj/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Halftone.h
obj/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Mask.h
obj/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Mask.MaskMode.h
obj/Fuse.Effects.g.cpp.o: include/Fuse.Elements.Element.h
obj/Fuse.Effects.g.cpp.o: include/Fuse.Elements.StretchMode.h
obj/Fuse.Effects.g.cpp.o: include/Fuse.FramebufferPool.h
obj/Fuse.Effects.g.cpp.o: include/Fuse.Internal.ImageContainer.h
obj/Fuse.Effects.g.cpp.o: include/Fuse.IViewport.h
obj/Fuse.Effects.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Effects.g.cpp.o: include/Fuse.Resources.ImageSource.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Buffer.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Double.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Float.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Float2x2.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Graphics.BlendOperand.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Graphics.BufferUsage.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Graphics.Format.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Graphics.Framebuffer.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Graphics.IndexType.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Graphics.PolygonFace.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Graphics.SamplerState.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Graphics.Texture2D.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Int.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Int2.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Math.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Matrix.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Rect.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
obj/Fuse.Effects.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
obj/Fuse.Effects.g.cpp.o: include/Uno.UShort.h
obj/Fuse.Effects.g.cpp.o: include/Uno.UX.FileSource.h
obj/Fuse.Effects.g.cpp.o: jni/Fuse.Effects.g.cpp | obj
	echo Fuse.Effects.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Effects.g.cpp.o -c jni/Fuse.Effects.g.cpp

obj/Fuse.Elements.g.cpp.o: include/_root.Fuse_Controls_bundle.h
obj/Fuse.Elements.g.cpp.o: include/_root.Fuse_Elements_bundle.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.CacheFramebuffer.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Diagnostics.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.DrawContext.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Effects.Effect.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Effects.EffectType.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Alignment.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.BoxPlacement.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.BoxSizing.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Cache.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.CacheHelper.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.CacheTile.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.CachingMode.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.DisplayHelpers.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element.BoxSizingMode.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element.GMSCacheItem.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementAtlas.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementAtlasFramebuffer.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementAtlasFramebufferPool.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementAtlasFramebufferPoolEntry.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementAtlasFramebufferPoolImpl.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementBatch.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementBatchEntry.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementBatcher.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.HitTestMode.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.IElementBatchDrawable.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ITransformOrigin.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LayoutMasterBoxSizing.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LayoutMasterMode.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LimitBoxSizing.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.NoImplicitMaxBoxSizing.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.PreplacementArgs.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.PreplacementHandler.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.SimpleAlignment.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.SingleNodeDrawable.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.SizeUnit.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.StandardBoxSizing.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.StretchDirection.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.StretchMode.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.StretchSizing.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TextAlignment.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TextureAtlas.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TextWrapping.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TransformOrigins.AnchorOrigin.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TransformOrigins.BoxCenter.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TransformOrigins.CenterOrigin.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TransformOrigins.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TransformOrigins.TopLeftOrigin.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TranslationModes.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TranslationModes.OffsetMode.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TranslationModes.PositionOffsetMode.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TranslationModes.SizeFactorMode.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TranslationModes.TransformOriginOffsetMode.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Viewport.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Visibility.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.FastMatrix.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.FixedViewport.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.FramebufferPool.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.FrustumViewport.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.HitTestContext.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.IFrustum.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.IScalingMode.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.ITranslationMode.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.IViewport.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.LayoutDependent.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.NodeBounds.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.OrthographicFrustum.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.PerspectiveFrustum.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.PlacedArgs.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.PlacedHandler.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Properties.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.PropertyHandle.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Resources.DisposalManager.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.RootViewport.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Scaling.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.SizeFlags.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.StyleProperty-2.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.StylePropertyWithUnit-3.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Transform.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.TransformModeFlags.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.Translation.h
obj/Fuse.Elements.g.cpp.o: include/Fuse.UpdateManager.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Action.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Action-2.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Buffer.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Collections.LinkedList-1.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Collections.LinkedListNode-1.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Collections.ObservableList-1.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Diagnostics.Debug.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Double.h
obj/Fuse.Elements.g.cpp.o: include/Uno.EventArgs.h
obj/Fuse.Elements.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Float.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Func-2.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Geometry.Ray.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Graphics.BlendOperand.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Graphics.BufferUsage.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Graphics.Format.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Graphics.Framebuffer.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Graphics.FramebufferFlags.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Graphics.IndexType.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Graphics.PolygonFace.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Graphics.RenderTarget.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Graphics.Texture2D.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Int.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Int2.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Math.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Matrix.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Object.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Platform2.Display.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Rect.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Recti.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
obj/Fuse.Elements.g.cpp.o: include/Uno.String.h
obj/Fuse.Elements.g.cpp.o: include/Uno.UShort.h
obj/Fuse.Elements.g.cpp.o: include/Uno.Vector.h
obj/Fuse.Elements.g.cpp.o: jni/Fuse.Elements.g.cpp | obj
	echo Fuse.Elements.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Elements.g.cpp.o -c jni/Fuse.Elements.g.cpp

obj/Fuse.Elements.Internal.g.cpp.o: include/_root.Fuse_Elements_bundle.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Fuse.DrawContext.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Fuse.Elements.Element.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Fuse.Elements.Internal.ElementDraw.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Fuse.Elements.Internal.Scale9Rectangle.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Fuse.IViewport.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.Buffer.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.BlendOperand.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.BufferUsage.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.IndexType.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.PolygonFace.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.Texture2D.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.Int.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.Matrix.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
obj/Fuse.Elements.Internal.g.cpp.o: include/Uno.UShort.h
obj/Fuse.Elements.Internal.g.cpp.o: jni/Fuse.Elements.Internal.g.cpp | obj
	echo Fuse.Elements.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Elements.Internal.g.cpp.o -c jni/Fuse.Elements.Internal.g.cpp

obj/Fuse.Entities.Designer.g.cpp.o: include/Fuse.Entities.Designer.AnimationHelpers.h
obj/Fuse.Entities.Designer.g.cpp.o: include/Fuse.Entities.Designer.PreloadedResources.h
obj/Fuse.Entities.Designer.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Entities.Designer.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Entities.Designer.g.cpp.o: include/Uno.Double.h
obj/Fuse.Entities.Designer.g.cpp.o: include/Uno.Float.h
obj/Fuse.Entities.Designer.g.cpp.o: include/Uno.Int.h
obj/Fuse.Entities.Designer.g.cpp.o: include/Uno.Math.h
obj/Fuse.Entities.Designer.g.cpp.o: include/Uno.Object.h
obj/Fuse.Entities.Designer.g.cpp.o: include/Uno.String.h
obj/Fuse.Entities.Designer.g.cpp.o: jni/Fuse.Entities.Designer.g.cpp | obj
	echo Fuse.Entities.Designer.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Entities.Designer.g.cpp.o -c jni/Fuse.Entities.Designer.g.cpp

obj/Fuse.Entities.Filters.g.cpp.o: include/_root.Fuse_Entities_bundle.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Fuse.DrawContext.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Fuse.Entities.Filters.Blitter.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Fuse.Entities.Filters.Blur.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Fuse.Entities.Filters.FindEdges.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Fuse.FramebufferPool.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.Buffer.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.Float.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.BlendOperand.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.BufferUsage.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.Format.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.Framebuffer.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.IndexType.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.PolygonFace.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.RenderTarget.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.Texture2D.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.Int.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.Int2.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
obj/Fuse.Entities.Filters.g.cpp.o: include/Uno.UShort.h
obj/Fuse.Entities.Filters.g.cpp.o: jni/Fuse.Entities.Filters.g.cpp | obj
	echo Fuse.Entities.Filters.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Entities.Filters.g.cpp.o -c jni/Fuse.Entities.Filters.g.cpp

obj/Fuse.Entities.g.cpp.o: include/_root.Fuse_Entities_bundle.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.DrawArgs.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.DrawContext.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.DrawHandler.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Drawing.Batching.Batch.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Drawing.Batching.BatchHelpers.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Drawing.Batching.BatchVertexBuffer.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Drawing.Batching.MeshBatcher.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Component.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.DefaultMaterial.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.DirectArrayMeshIntersecter.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.DirectionalLight.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Entity.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Entry.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.EnvironmentLight.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Frustum.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.ILightVisitor.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.IndexedArrayMeshIntersecter.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Internal.SceneGraphBuilder.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Internal.SceneGraphBuilderVisitor.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Light.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Material.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Mesh.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.MeshBatchingEngine.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.MeshHitTestMode.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.MeshRenderer.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.ModelMeshCollision.Direct.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.ModelMeshCollision.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.ModelMeshCollision.Indexed.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.ModelMeshHelpers.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.NodeExtensions.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.PointLight.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Raycasting.EntityVisitor.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Raycasting.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.RenderNode.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.RenderToTexture.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Scene.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.SkinnedMeshRenderer.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Skinner.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.SpotLight.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Transform3D.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.TriangleMeshIntersecter.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.VisitAction-1.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.VisitPredicate-1.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Entities.VisitType-1.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.FastMatrix.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.FramebufferPool.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.FrustumViewport.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.HitTestContext.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.HitTestHandler.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.IFrustum.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.IViewport.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.NodeBounds.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.SizeFlags.h
obj/Fuse.Entities.g.cpp.o: include/Fuse.Transform.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Application.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Buffer.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Collections.ObservableList-1.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Content.Models.IndexArray.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Content.Models.Model.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Content.Models.ModelDrawable.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Content.Models.ModelMaterial.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Content.Models.ModelMesh.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Content.Models.VertexAttributeArray.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Entities.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Entities.g.cpp.o: include/Uno.EventHandler-1.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Float.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Geometry.Box.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Geometry.Collision.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Geometry.Frustum.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Geometry.Plane.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Geometry.Ray.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Geometry.Sphere.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Geometry.Triangle.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Graphics.BlendOperand.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Graphics.BufferUsage.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Graphics.Format.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Graphics.Framebuffer.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Graphics.FramebufferFlags.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Graphics.IndexType.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Graphics.PolygonFace.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Graphics.Texture2D.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Int.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Math.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Matrix.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Object.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Platform.ClosingEventArgs.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Platform.Window.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Platform2.Display.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Predicate-1.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Quaternion.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Rect.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
obj/Fuse.Entities.g.cpp.o: include/Uno.String.h
obj/Fuse.Entities.g.cpp.o: include/Uno.UShort.h
obj/Fuse.Entities.g.cpp.o: include/Uno.Vector.h
obj/Fuse.Entities.g.cpp.o: jni/Fuse.Entities.g.cpp | obj
	echo Fuse.Entities.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Entities.g.cpp.o -c jni/Fuse.Entities.g.cpp

obj/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Entities.Component.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Entities.DefaultMaterial.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Entities.Entity.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Entities.Internal.SceneGraphBuilder.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Entities.Internal.SceneGraphBuilderVisitor.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Entities.Material.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Entities.Mesh.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Entities.MeshRenderer.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Entities.Transform3D.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Transform.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Collections.IListExtensions.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Content.Models.Model.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Content.Models.ModelDrawable.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Content.Models.ModelNode.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Content.Models.ModelParameter-1.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Float.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Int.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Math.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Matrix.h
obj/Fuse.Entities.Internal.g.cpp.o: include/Uno.Quaternion.h
obj/Fuse.Entities.Internal.g.cpp.o: jni/Fuse.Entities.Internal.g.cpp | obj
	echo Fuse.Entities.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Entities.Internal.g.cpp.o -c jni/Fuse.Entities.Internal.g.cpp

obj/Fuse.Entities.Primitives.g.cpp.o: include/Fuse.Drawing.Meshes.MeshGenerator.h
obj/Fuse.Entities.Primitives.g.cpp.o: include/Fuse.Entities.Mesh.h
obj/Fuse.Entities.Primitives.g.cpp.o: include/Fuse.Entities.MeshHitTestMode.h
obj/Fuse.Entities.Primitives.g.cpp.o: include/Fuse.Entities.Primitives.ConeRenderer.h
obj/Fuse.Entities.Primitives.g.cpp.o: include/Fuse.Entities.Primitives.CubeRenderer.h
obj/Fuse.Entities.Primitives.g.cpp.o: include/Fuse.Entities.Primitives.CylinderRenderer.h
obj/Fuse.Entities.Primitives.g.cpp.o: include/Fuse.Entities.Primitives.SphereRenderer.h
obj/Fuse.Entities.Primitives.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Entities.Primitives.g.cpp.o: include/Uno.Content.Models.ModelMesh.h
obj/Fuse.Entities.Primitives.g.cpp.o: include/Uno.Float.h
obj/Fuse.Entities.Primitives.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Entities.Primitives.g.cpp.o: include/Uno.Int.h
obj/Fuse.Entities.Primitives.g.cpp.o: jni/Fuse.Entities.Primitives.g.cpp | obj
	echo Fuse.Entities.Primitives.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Entities.Primitives.g.cpp.o -c jni/Fuse.Entities.Primitives.g.cpp

obj/Fuse.Entities.Processing.g.cpp.o: include/Fuse.Drawing.LineCap.h
obj/Fuse.Entities.Processing.g.cpp.o: include/Fuse.Drawing.Polygon.h
obj/Fuse.Entities.Processing.g.cpp.o: include/Fuse.Entities.Processing.Extrude.h
obj/Fuse.Entities.Processing.g.cpp.o: include/Fuse.Entities.Processing.Stroke.h
obj/Fuse.Entities.Processing.g.cpp.o: include/Uno.Action.h
obj/Fuse.Entities.Processing.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Entities.Processing.g.cpp.o: include/Uno.Content.Models.ModelMesh.h
obj/Fuse.Entities.Processing.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Entities.Processing.g.cpp.o: include/Uno.Float.h
obj/Fuse.Entities.Processing.g.cpp.o: include/Uno.Int.h
obj/Fuse.Entities.Processing.g.cpp.o: include/Uno.Math.h
obj/Fuse.Entities.Processing.g.cpp.o: jni/Fuse.Entities.Processing.g.cpp | obj
	echo Fuse.Entities.Processing.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Entities.Processing.g.cpp.o -c jni/Fuse.Entities.Processing.g.cpp

obj/Fuse.g.cpp.o: include/_root.FuseCore_bundle.h
obj/Fuse.g.cpp.o: include/Android.android.animation.Animator.h
obj/Fuse.g.cpp.o: include/Android.android.animation.TimeAnimator.h
obj/Fuse.g.cpp.o: include/Android.android.animation.TimeAnimatorDLRTimeListener.h
obj/Fuse.g.cpp.o: include/Android.android.animation.ValueAnimator.h
obj/Fuse.g.cpp.o: include/Android.android.app.Activity.h
obj/Fuse.g.cpp.o: include/Android.android.content.Intent.h
obj/Fuse.g.cpp.o: include/Android.android.net.Uri.h
obj/Fuse.g.cpp.o: include/Android.android.os.BuildDLRVERSION.h
obj/Fuse.g.cpp.o: include/Android.android.view.Choreographer.h
obj/Fuse.g.cpp.o: include/Android.android.view.ChoreographerDLRFrameCallback.h
obj/Fuse.g.cpp.o: include/Android.Base.JNI.h
obj/Fuse.g.cpp.o: include/Android.Base.Permissions.h
obj/Fuse.g.cpp.o: include/Android.Base.PlatPermission.h
obj/Fuse.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Fuse.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Fuse.g.cpp.o: include/Android.Base.Primitives.ujlong.h
obj/Fuse.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Fuse.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
obj/Fuse.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Fuse.g.cpp.o: include/Android.java.lang.String.h
obj/Fuse.g.cpp.o: include/Android.java.lang.System.h
obj/Fuse.g.cpp.o: include/Fuse.Android.NativeStyle.h
obj/Fuse.g.cpp.o: include/Fuse.App.FrameCallback.h
obj/Fuse.g.cpp.o: include/Fuse.App.h
obj/Fuse.g.cpp.o: include/Fuse.App.TimeListener.h
obj/Fuse.g.cpp.o: include/Fuse.AppBase.h
obj/Fuse.g.cpp.o: include/Fuse.BeginRemoveArgs.h
obj/Fuse.g.cpp.o: include/Fuse.BeginRemoveHandler.h
obj/Fuse.g.cpp.o: include/Fuse.Behavior.h
obj/Fuse.g.cpp.o: include/Fuse.Behavior.RootStatus.h
obj/Fuse.g.cpp.o: include/Fuse.CacheFramebuffer.h
obj/Fuse.g.cpp.o: include/Fuse.Controls.ContentControl.h
obj/Fuse.g.cpp.o: include/Fuse.Controls.GraphicsView.h
obj/Fuse.g.cpp.o: include/Fuse.DataContextChangedArgs.h
obj/Fuse.g.cpp.o: include/Fuse.DataContextChangedHandler.h
obj/Fuse.g.cpp.o: include/Fuse.Diagnostics.h
obj/Fuse.g.cpp.o: include/Fuse.DrawArgs.h
obj/Fuse.g.cpp.o: include/Fuse.DrawContext.h
obj/Fuse.g.cpp.o: include/Fuse.DrawHandler.h
obj/Fuse.g.cpp.o: include/Fuse.DrawHelpers.h
obj/Fuse.g.cpp.o: include/Fuse.FastMatrix.h
obj/Fuse.g.cpp.o: include/Fuse.FixedViewport.h
obj/Fuse.g.cpp.o: include/Fuse.Font.h
obj/Fuse.g.cpp.o: include/Fuse.Fonts.h
obj/Fuse.g.cpp.o: include/Fuse.FramebufferPool.h
obj/Fuse.g.cpp.o: include/Fuse.FramebufferPoolImpl.h
obj/Fuse.g.cpp.o: include/Fuse.FrustumViewport.h
obj/Fuse.g.cpp.o: include/Fuse.GraphicsTheme.h
obj/Fuse.g.cpp.o: include/Fuse.GraphicsWorker.h
obj/Fuse.g.cpp.o: include/Fuse.HitTestCallback.h
obj/Fuse.g.cpp.o: include/Fuse.HitTestContext.h
obj/Fuse.g.cpp.o: include/Fuse.HitTestHandler.h
obj/Fuse.g.cpp.o: include/Fuse.HitTestResult.h
obj/Fuse.g.cpp.o: include/Fuse.IActualPlacement.h
obj/Fuse.g.cpp.o: include/Fuse.IFlush.h
obj/Fuse.g.cpp.o: include/Fuse.IFrustum.h
obj/Fuse.g.cpp.o: include/Fuse.Input.Focus.h
obj/Fuse.g.cpp.o: include/Fuse.Input.FocusNavigationDirection.h
obj/Fuse.g.cpp.o: include/Fuse.Input.Keyboard.h
obj/Fuse.g.cpp.o: include/Fuse.Input.TextService.h
obj/Fuse.g.cpp.o: include/Fuse.Internal.FrustumMatrix.h
obj/Fuse.g.cpp.o: include/Fuse.Internal.SimpleLock.h
obj/Fuse.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
obj/Fuse.g.cpp.o: include/Fuse.IOutput-1.h
obj/Fuse.g.cpp.o: include/Fuse.IScalingMode.h
obj/Fuse.g.cpp.o: include/Fuse.ITransformMode.h
obj/Fuse.g.cpp.o: include/Fuse.ITranslationMode.h
obj/Fuse.g.cpp.o: include/Fuse.IViewport.h
obj/Fuse.g.cpp.o: include/Fuse.KeyboardBootstrapper.h
obj/Fuse.g.cpp.o: include/Fuse.Launcher.h
obj/Fuse.g.cpp.o: include/Fuse.Layer.h
obj/Fuse.g.cpp.o: include/Fuse.LayoutDependent.h
obj/Fuse.g.cpp.o: include/Fuse.LayoutRole.h
obj/Fuse.g.cpp.o: include/Fuse.MarginBoxDependent.h
obj/Fuse.g.cpp.o: include/Fuse.MobileBootstrapping.h
obj/Fuse.g.cpp.o: include/Fuse.NativeTheme.h
obj/Fuse.g.cpp.o: include/Fuse.NativeWithFallbackTheme.CreateTheme.h
obj/Fuse.g.cpp.o: include/Fuse.NativeWithFallbackTheme.h
obj/Fuse.g.cpp.o: include/Fuse.Node.h
obj/Fuse.g.cpp.o: include/Fuse.Node.HitTestRecord.h
obj/Fuse.g.cpp.o: include/Fuse.Node.NodeBits.h
obj/Fuse.g.cpp.o: include/Fuse.Node.RootStage.h
obj/Fuse.g.cpp.o: include/Fuse.NodeBounds.h
obj/Fuse.g.cpp.o: include/Fuse.NodeEvent-2.h
obj/Fuse.g.cpp.o: include/Fuse.NodeEventArgs.h
obj/Fuse.g.cpp.o: include/Fuse.NodeEventHandler.h
obj/Fuse.g.cpp.o: include/Fuse.NodeEventMode.h
obj/Fuse.g.cpp.o: include/Fuse.NodeListCache.h
obj/Fuse.g.cpp.o: include/Fuse.OrthographicFrustum.h
obj/Fuse.g.cpp.o: include/Fuse.PerspectiveFrustum.h
obj/Fuse.g.cpp.o: include/Fuse.PlacedArgs.h
obj/Fuse.g.cpp.o: include/Fuse.PlacedHandler.h
obj/Fuse.g.cpp.o: include/Fuse.Preview.SelectionManager.h
obj/Fuse.g.cpp.o: include/Fuse.Properties.h
obj/Fuse.g.cpp.o: include/Fuse.PropertyHandle.h
obj/Fuse.g.cpp.o: include/Fuse.PropertyState.h
obj/Fuse.g.cpp.o: include/Fuse.RenderTargetEntry.h
obj/Fuse.g.cpp.o: include/Fuse.RequestBringIntoViewArgs.h
obj/Fuse.g.cpp.o: include/Fuse.RequestBringIntoViewHandler.h
obj/Fuse.g.cpp.o: include/Fuse.RequiresRootedException.h
obj/Fuse.g.cpp.o: include/Fuse.Resources.DisposalManager.h
obj/Fuse.g.cpp.o: include/Fuse.Resources.DisposalRequest.h
obj/Fuse.g.cpp.o: include/Fuse.Resources.ResourceRegistry.h
obj/Fuse.g.cpp.o: include/Fuse.RootViewport.h
obj/Fuse.g.cpp.o: include/Fuse.Rotation.h
obj/Fuse.g.cpp.o: include/Fuse.Scaling.h
obj/Fuse.g.cpp.o: include/Fuse.ScalingModes.h
obj/Fuse.g.cpp.o: include/Fuse.ScalingModes.IdentityMode.h
obj/Fuse.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
obj/Fuse.g.cpp.o: include/Fuse.Scripting.NameRegistry.h
obj/Fuse.g.cpp.o: include/Fuse.Shear.h
obj/Fuse.g.cpp.o: include/Fuse.SizeFlags.h
obj/Fuse.g.cpp.o: include/Fuse.Stage.h
obj/Fuse.g.cpp.o: include/Fuse.Style.h
obj/Fuse.g.cpp.o: include/Fuse.StyleProperty.h
obj/Fuse.g.cpp.o: include/Fuse.StyleProperty-2.h
obj/Fuse.g.cpp.o: include/Fuse.StylePropertyWithUnit-3.h
obj/Fuse.g.cpp.o: include/Fuse.Theme.h
obj/Fuse.g.cpp.o: include/Fuse.Time.h
obj/Fuse.g.cpp.o: include/Fuse.Timer.h
obj/Fuse.g.cpp.o: include/Fuse.Transform.h
obj/Fuse.g.cpp.o: include/Fuse.TransformModeFlags.h
obj/Fuse.g.cpp.o: include/Fuse.Translation.h
obj/Fuse.g.cpp.o: include/Fuse.TranslationModes.h
obj/Fuse.g.cpp.o: include/Fuse.TranslationModes.LocalMode.h
obj/Fuse.g.cpp.o: include/Fuse.TranslationModes.ParentSizeMode.h
obj/Fuse.g.cpp.o: include/Fuse.TranslationModes.SizeMode.h
obj/Fuse.g.cpp.o: include/Fuse.UnhandledExceptionArgs.h
obj/Fuse.g.cpp.o: include/Fuse.UnhandledExceptionHandler.h
obj/Fuse.g.cpp.o: include/Fuse.UpdateDispatcher.h
obj/Fuse.g.cpp.o: include/Fuse.UpdateListener.h
obj/Fuse.g.cpp.o: include/Fuse.UpdateManager.h
obj/Fuse.g.cpp.o: include/Fuse.UpdateStage.h
obj/Fuse.g.cpp.o: include/Fuse.UserEvent.h
obj/Fuse.g.cpp.o: include/Fuse.UserEventArgs.h
obj/Fuse.g.cpp.o: include/Fuse.UserEventDispatch.h
obj/Fuse.g.cpp.o: include/Fuse.UserEventHandler.h
obj/Fuse.g.cpp.o: include/OpenGL.GL.h
obj/Fuse.g.cpp.o: include/OpenGL.GLClearBufferMask.h
obj/Fuse.g.cpp.o: include/OpenGL.GLEnableCap.h
obj/Fuse.g.cpp.o: include/OpenGL.GLError.h
obj/Fuse.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
obj/Fuse.g.cpp.o: include/OpenGL.GLFramebufferTarget.h
obj/Fuse.g.cpp.o: include/OpenGL.GLInteger4Name.h
obj/Fuse.g.cpp.o: include/Uno.Action.h
obj/Fuse.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.g.cpp.o: include/Uno.Action-2.h
obj/Fuse.g.cpp.o: include/Uno.AggregateException.h
obj/Fuse.g.cpp.o: include/Uno.Application.h
obj/Fuse.g.cpp.o: include/Uno.Bool.h
obj/Fuse.g.cpp.o: include/Uno.Buffer.h
obj/Fuse.g.cpp.o: include/Uno.BundleFile.h
obj/Fuse.g.cpp.o: include/Uno.Byte.h
obj/Fuse.g.cpp.o: include/Uno.Collections.ConcurrentCollection-1.h
obj/Fuse.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
obj/Fuse.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.g.cpp.o: include/Uno.Collections.HashSet-1.Enumerator.h
obj/Fuse.g.cpp.o: include/Uno.Collections.HashSet-1.h
obj/Fuse.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.g.cpp.o: include/Uno.Collections.IListExtensions.h
obj/Fuse.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
obj/Fuse.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Fuse.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.g.cpp.o: include/Uno.Collections.ObservableList-1.h
obj/Fuse.g.cpp.o: include/Uno.Collections.ReadOnlyCollection-1.h
obj/Fuse.g.cpp.o: include/Uno.Content.Fonts.FontFace.h
obj/Fuse.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.g.cpp.o: include/Uno.Diagnostics.Clock.h
obj/Fuse.g.cpp.o: include/Uno.Diagnostics.Debug.h
obj/Fuse.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
obj/Fuse.g.cpp.o: include/Uno.Double.h
obj/Fuse.g.cpp.o: include/Uno.EventArgs.h
obj/Fuse.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.g.cpp.o: include/Uno.EventHandler-1.h
obj/Fuse.g.cpp.o: include/Uno.Exception.h
obj/Fuse.g.cpp.o: include/Uno.Float.h
obj/Fuse.g.cpp.o: include/Uno.Float2.h
obj/Fuse.g.cpp.o: include/Uno.Float3.h
obj/Fuse.g.cpp.o: include/Uno.Float4.h
obj/Fuse.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.g.cpp.o: include/Uno.Func-2.h
obj/Fuse.g.cpp.o: include/Uno.Geometry.Collision.h
obj/Fuse.g.cpp.o: include/Uno.Geometry.Ray.h
obj/Fuse.g.cpp.o: include/Uno.Graphics.BlendOperand.h
obj/Fuse.g.cpp.o: include/Uno.Graphics.BufferUsage.h
obj/Fuse.g.cpp.o: include/Uno.Graphics.Format.h
obj/Fuse.g.cpp.o: include/Uno.Graphics.Framebuffer.h
obj/Fuse.g.cpp.o: include/Uno.Graphics.FramebufferFlags.h
obj/Fuse.g.cpp.o: include/Uno.Graphics.PolygonFace.h
obj/Fuse.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
obj/Fuse.g.cpp.o: include/Uno.Graphics.RenderTarget.h
obj/Fuse.g.cpp.o: include/Uno.Graphics.Texture2D.h
obj/Fuse.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
obj/Fuse.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
obj/Fuse.g.cpp.o: include/Uno.IDisposable.h
obj/Fuse.g.cpp.o: include/Uno.Int.h
obj/Fuse.g.cpp.o: include/Uno.Int2.h
obj/Fuse.g.cpp.o: include/Uno.Long.h
obj/Fuse.g.cpp.o: include/Uno.Math.h
obj/Fuse.g.cpp.o: include/Uno.Matrix.h
obj/Fuse.g.cpp.o: include/Uno.Net.Http.Uri.h
obj/Fuse.g.cpp.o: include/Uno.Object.h
obj/Fuse.g.cpp.o: include/Uno.Platform.Key.h
obj/Fuse.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
obj/Fuse.g.cpp.o: include/Uno.Platform.TextInputEventArgs.h
obj/Fuse.g.cpp.o: include/Uno.Platform.Window.h
obj/Fuse.g.cpp.o: include/Uno.Platform2.Application.h
obj/Fuse.g.cpp.o: include/Uno.Platform2.ApplicationState.h
obj/Fuse.g.cpp.o: include/Uno.Platform2.ApplicationStateTransitionHandler.h
obj/Fuse.g.cpp.o: include/Uno.Platform2.Display.h
obj/Fuse.g.cpp.o: include/Uno.Predicate-1.h
obj/Fuse.g.cpp.o: include/Uno.Quaternion.h
obj/Fuse.g.cpp.o: include/Uno.Rect.h
obj/Fuse.g.cpp.o: include/Uno.Recti.h
obj/Fuse.g.cpp.o: include/Uno.Runtime.Implementation.GraphicsContextHandle.h
obj/Fuse.g.cpp.o: include/Uno.Runtime.Implementation.GraphicsContextImpl.h
obj/Fuse.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
obj/Fuse.g.cpp.o: include/Uno.Runtime.Implementation.Internal.WindowHelpers.h
obj/Fuse.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowHandle.h
obj/Fuse.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowImpl.h
obj/Fuse.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
obj/Fuse.g.cpp.o: include/Uno.String.h
obj/Fuse.g.cpp.o: include/Uno.Text.StringBuilder.h
obj/Fuse.g.cpp.o: include/Uno.Threading.ConcurrentQueue-1.h
obj/Fuse.g.cpp.o: include/Uno.Threading.IDispatcher.h
obj/Fuse.g.cpp.o: include/Uno.Threading.Thread.h
obj/Fuse.g.cpp.o: include/Uno.Type.h
obj/Fuse.g.cpp.o: include/Uno.UInt.h
obj/Fuse.g.cpp.o: include/Uno.UX.BundleFileSource.h
obj/Fuse.g.cpp.o: include/Uno.UX.FileSource.h
obj/Fuse.g.cpp.o: include/Uno.UX.Resource.h
obj/Fuse.g.cpp.o: include/Uno.Vector.h
obj/Fuse.g.cpp.o: jni/Fuse.g.cpp | obj
	echo Fuse.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.g.cpp.o -c jni/Fuse.g.cpp

obj/Fuse.GeoLocation.g.cpp.o: include/Android.android.app.Activity.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.android.content.Context.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.android.location.Location.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.android.location.LocationManager.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.android.os.Bundle.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.android.os.Handler.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.android.os.Looper.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.Base.JNI.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.Base.Permissions.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.Base.PlatPermission.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.Base.Primitives.ujlong.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.java.lang.Object.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.java.lang.Runnable.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.java.lang.String.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.java.util.List.h
obj/Fuse.GeoLocation.g.cpp.o: include/Android.Runtime.UnoHelper.h
obj/Fuse.GeoLocation.g.cpp.o: include/Fuse.GeoLocation.AndroidLocationProvider.h
obj/Fuse.GeoLocation.g.cpp.o: include/Fuse.GeoLocation.GeoCoordinates.h
obj/Fuse.GeoLocation.g.cpp.o: include/Fuse.GeoLocation.GeoLocationAuthorizationType.h
obj/Fuse.GeoLocation.g.cpp.o: include/Fuse.GeoLocation.ILocationTracker.h
obj/Fuse.GeoLocation.g.cpp.o: include/Fuse.GeoLocation.Location.h
obj/Fuse.GeoLocation.g.cpp.o: include/Fuse.GeoLocation.LocationListenerBase.h
obj/Fuse.GeoLocation.g.cpp.o: include/Fuse.GeoLocation.LocationTracker.h
obj/Fuse.GeoLocation.g.cpp.o: include/Fuse.GeoLocation.PromiseListener.h
obj/Fuse.GeoLocation.g.cpp.o: include/Fuse.GeoLocation.TimeoutListener.h
obj/Fuse.GeoLocation.g.cpp.o: include/Fuse.UpdateManager.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Action.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Bool.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.DateTime.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Double.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Exception.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Float.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Int.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Long.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.String.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Threading.Future.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Threading.Future-1.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Threading.FutureState.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Threading.IDispatcher.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Threading.Promise-1.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Time.CalendarSystem.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Time.Duration.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Time.Instant.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Time.LocalDateTime.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Time.ZonedDateTime.h
obj/Fuse.GeoLocation.g.cpp.o: include/Uno.Type.h
obj/Fuse.GeoLocation.g.cpp.o: jni/Fuse.GeoLocation.g.cpp | obj
	echo Fuse.GeoLocation.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.GeoLocation.g.cpp.o -c jni/Fuse.GeoLocation.g.cpp

obj/Fuse.Gestures.g.cpp.o: include/Experimental.Physics.BasicBoundedRegion2D.h
obj/Fuse.Gestures.g.cpp.o: include/Experimental.Physics.BoundedRegion2D.h
obj/Fuse.Gestures.g.cpp.o: include/Experimental.Physics.DestinationSimulation-1.h
obj/Fuse.Gestures.g.cpp.o: include/Experimental.Physics.ElasticForce-1.h
obj/Fuse.Gestures.g.cpp.o: include/Experimental.Physics.Friction-1.h
obj/Fuse.Gestures.g.cpp.o: include/Experimental.Physics.MotionSimulation-1.h
obj/Fuse.Gestures.g.cpp.o: include/Experimental.Physics.PointerVelocity-1.h
obj/Fuse.Gestures.g.cpp.o: include/Experimental.Physics.Simulation.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Behavior.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.ScrollView.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Diagnostics.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Elements.Element.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Entities.Transform3D.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Clicked.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ClickedArgs.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ClickedHandler.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Clicker.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ClickerEventHandler.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ClickerTrigger.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.DegreeSpan.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.DoubleClicked.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.DoubleTapped.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.DoubleTappedArgs.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.DoubleTappedHandler.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Edge.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.EdgeSwipeAnimation.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Internal.EdgeSwiper.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Internal.Swiper.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Internal.SwipeRegion.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Internal.SwipeRegionArea.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.KeepFocusInView.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.KeepInView.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.KeepInViewCommon.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.LongPressed.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.LongPressedArgs.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.LongPressedHandler.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Pressed.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Released.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ScrollableGoto.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ScrollDirections.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Scroller.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Scroller.MoveUserFlags.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SetSwipeActive.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Swiped.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipedHow.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeDirection.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeGesture.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeGestureHelper.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeType.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipingAnimation.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Tapped.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.TappedArgs.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.TappedHandler.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ToggleSwipeActive.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Trackball.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Trackball.MoveMode.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.WhileClickerTrigger.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.WhileHovering.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.WhilePressed.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.WhileSwipeActive.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Input.Focus.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Input.Pointer.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerEnteredArgs.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerEnteredHandler.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerLeftArgs.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerLeftHandler.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.IViewport.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.NodeEvent-2.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.PlacedHandler.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Properties.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.PropertyHandle.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.RequestBringIntoViewArgs.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.RequestBringIntoViewHandler.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Time.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Transform.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.Triggers.Trigger.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.UpdateManager.h
obj/Fuse.Gestures.g.cpp.o: include/Fuse.UpdateStage.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Action.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Action-2.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Diagnostics.Clock.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Double.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Float.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Int.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Math.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Matrix.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Object.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Platform.PointerType.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Quaternion.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.String.h
obj/Fuse.Gestures.g.cpp.o: include/Uno.Vector.h
obj/Fuse.Gestures.g.cpp.o: jni/Fuse.Gestures.g.cpp | obj
	echo Fuse.Gestures.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Gestures.g.cpp.o -c jni/Fuse.Gestures.g.cpp

obj/Fuse.Gestures.Internal.g.cpp.o: include/Experimental.Physics.DestinationSimulation-1.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Experimental.Physics.MotionSimulation-1.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Experimental.Physics.PointerVelocity-1.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Experimental.Physics.Simulation.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Experimental.Physics.SmoothSnap-1.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Elements.Element.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.DegreeSpan.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Edge.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.EdgeSwiper.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.Swiper.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.SwipeRegion.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.SwipeRegionArea.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.SwipeGestureHelper.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.Pointer.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.NodeEvent-2.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Properties.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.PropertyHandle.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Time.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.UpdateManager.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.UpdateStage.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Action.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Action-2.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Diagnostics.Clock.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Double.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Float.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Int.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Math.h
obj/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Vector.h
obj/Fuse.Gestures.Internal.g.cpp.o: jni/Fuse.Gestures.Internal.g.cpp | obj
	echo Fuse.Gestures.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Gestures.Internal.g.cpp.o -c jni/Fuse.Gestures.Internal.g.cpp

obj/Fuse.Input.g.cpp.o: include/Fuse.AppBase.h
obj/Fuse.Input.g.cpp.o: include/Fuse.HitTestCallback.h
obj/Fuse.Input.g.cpp.o: include/Fuse.HitTestContext.h
obj/Fuse.Input.g.cpp.o: include/Fuse.HitTestResult.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.Capturer.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.CustomPointerEventArgs.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.Focus.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusDelegator.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusGained.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusLost.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusNavigationDirection.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusPredictStrategy.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.HitTestHelpers.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.IPointerEventResponder.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.IsFocusableChangedArgs.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.IsFocusableChangedEvent.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.IsFocusableChangedHandler.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.Keyboard.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyEventArgs.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyPressed.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyPressedArgs.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyPressedHandler.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyReleased.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyReleasedArgs.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyReleasedHandler.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.DefaultPointerEventResponder.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.PELHolder.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.PELStatus.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.PointerRecord.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEntered.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEnteredArgs.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEnteredHandler.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEventData.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerLeft.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerLeftArgs.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerLeftHandler.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerMoved.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerPressed.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerReleased.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerWheelMoved.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerWheelMovedArgs.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerWheelMovedHandler.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.SelectionQuery.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.TextEntered.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.TextEnteredArgs.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.TextEnteredHandler.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.TextService.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Input.TraverseNodeExtensions.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Input.g.cpp.o: include/Fuse.NodeEvent-2.h
obj/Fuse.Input.g.cpp.o: include/Fuse.NodeEventArgs.h
obj/Fuse.Input.g.cpp.o: include/Fuse.NodeEventMode.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Properties.h
obj/Fuse.Input.g.cpp.o: include/Fuse.PropertyHandle.h
obj/Fuse.Input.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
obj/Fuse.Input.g.cpp.o: include/Fuse.StyleProperty-2.h
obj/Fuse.Input.g.cpp.o: include/Uno.Action.h
obj/Fuse.Input.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Input.g.cpp.o: include/Uno.Action-2.h
obj/Fuse.Input.g.cpp.o: include/Uno.Application.h
obj/Fuse.Input.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Input.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
obj/Fuse.Input.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Input.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
obj/Fuse.Input.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Input.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Input.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.Input.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Input.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Input.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
obj/Fuse.Input.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Fuse.Input.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Input.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Input.g.cpp.o: include/Uno.Diagnostics.Clock.h
obj/Fuse.Input.g.cpp.o: include/Uno.Diagnostics.Debug.h
obj/Fuse.Input.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
obj/Fuse.Input.g.cpp.o: include/Uno.Double.h
obj/Fuse.Input.g.cpp.o: include/Uno.EventArgs.h
obj/Fuse.Input.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Input.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Input.g.cpp.o: include/Uno.Float.h
obj/Fuse.Input.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Input.g.cpp.o: include/Uno.Int.h
obj/Fuse.Input.g.cpp.o: include/Uno.Object.h
obj/Fuse.Input.g.cpp.o: include/Uno.Platform.Key.h
obj/Fuse.Input.g.cpp.o: include/Uno.Platform.PointerType.h
obj/Fuse.Input.g.cpp.o: include/Uno.Platform.WheelDeltaMode.h
obj/Fuse.Input.g.cpp.o: include/Uno.Predicate-1.h
obj/Fuse.Input.g.cpp.o: include/Uno.String.h
obj/Fuse.Input.g.cpp.o: include/Uno.Vector.h
obj/Fuse.Input.g.cpp.o: jni/Fuse.Input.g.cpp | obj
	echo Fuse.Input.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Input.g.cpp.o -c jni/Fuse.Input.g.cpp

obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.Focus.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.Keyboard.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.KeyPressedArgs.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.KeyPressedHandler.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.KeyReleasedArgs.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.KeyReleasedHandler.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.Pointer.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerEnteredArgs.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerEnteredHandler.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerLeftArgs.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerLeftHandler.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerWheelMovedArgs.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerWheelMovedHandler.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.UX.AttachedFocusMembers.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.UX.AttachedKeyboardMembers.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.UX.AttachedPointerMembers.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Input.UX.g.cpp.o: include/Fuse.NodeEvent-2.h
obj/Fuse.Input.UX.g.cpp.o: jni/Fuse.Input.UX.g.cpp | obj
	echo Fuse.Input.UX.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Input.UX.g.cpp.o -c jni/Fuse.Input.UX.g.cpp

obj/Fuse.Internal.Drawing.g.cpp.o: include/_root.Fuse_Controls_bundle.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/_root.Fuse_Elements_bundle.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.DrawContext.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.BlendMode.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.BlendModeHelpers.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.Brush.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFill.DrawParams.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFill.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.SolidColor.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Elements.Element.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Internal.Drawing.SolidRectangle.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.IViewport.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Buffer.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.BlendOperand.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.BufferUsage.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.Framebuffer.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.PolygonFace.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.Texture2D.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Int.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Math.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Matrix.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
obj/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Vector.h
obj/Fuse.Internal.Drawing.g.cpp.o: jni/Fuse.Internal.Drawing.g.cpp | obj
	echo Fuse.Internal.Drawing.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Internal.Drawing.g.cpp.o -c jni/Fuse.Internal.Drawing.g.cpp

obj/Fuse.Internal.g.cpp.o: include/Fuse.Drawing.ResampleMode.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Elements.Alignment.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Elements.StretchDirection.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Elements.StretchMode.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Elements.StretchSizing.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Blender-1.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Internal.BlenderMap.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Internal.DoubleBlender.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Float2Blender.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Float3Blender.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Float4Blender.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Internal.FloatBlender.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Internal.FrustumMatrix.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Internal.FuseConfig.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Internal.IImageContainerOwner.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Internal.ImageContainer.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Internal.RectExtensions.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Internal.SimpleLock.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Internal.SizingContainer.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Statistics.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Resources.FileImageSource.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Resources.HttpImageSource.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Resources.ImageSource.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Resources.ImageSourceErrorArgs.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Resources.ImageSourceErrorHandler.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Resources.MemoryPolicy.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.Resources.MultiDensityImageSource.h
obj/Fuse.Internal.g.cpp.o: include/Fuse.SizeFlags.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Collections.ObservableList-1.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Double.h
obj/Fuse.Internal.g.cpp.o: include/Uno.EventArgs.h
obj/Fuse.Internal.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Float.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Graphics.Texture2D.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Int.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Int2.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Math.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Matrix.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Rect.h
obj/Fuse.Internal.g.cpp.o: include/Uno.String.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Threading.Mutex.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Type.h
obj/Fuse.Internal.g.cpp.o: include/Uno.UX.FileSource.h
obj/Fuse.Internal.g.cpp.o: include/Uno.Vector.h
obj/Fuse.Internal.g.cpp.o: jni/Fuse.Internal.g.cpp | obj
	echo Fuse.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Internal.g.cpp.o -c jni/Fuse.Internal.g.cpp

obj/Fuse.iOS.Controls.g.cpp.o: include/Fuse.Controls.Control.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.Button.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.Circle.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.Control-1.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.ControlProperties.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.Element.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.Image.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.MapView.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.Rectangle.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.Shape-1.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.Slider.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.Switch.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.TextBlock.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.TextInput.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.WebView.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.NativeViews.NativeView.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Fuse.Node.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Fuse.StyleProperty-2.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Uno.Bool.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Uno.Float.h
obj/Fuse.iOS.Controls.g.cpp.o: include/Uno.Float4.h
obj/Fuse.iOS.Controls.g.cpp.o: jni/Fuse.iOS.Controls.g.cpp | obj
	echo Fuse.iOS.Controls.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.iOS.Controls.g.cpp.o -c jni/Fuse.iOS.Controls.g.cpp

obj/Fuse.iOS.g.cpp.o: include/_root.Fuse_iOS_bundle.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Behavior.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Controls.Button.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Controls.Circle.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Controls.ContentControl.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Controls.Control.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Controls.GraphicsView.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Controls.Image.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Controls.NativeViewHost.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Controls.Panel.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Controls.PlainTextEdit.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Controls.Rectangle.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Controls.ScrollView.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Controls.Slider.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Controls.Switch.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Controls.TextBlock.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Controls.TextEdit.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Controls.WebView.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.DrawContext.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Blitter.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Controls.Button.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Controls.Circle.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Controls.Image.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Controls.Rectangle.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Controls.Slider.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Controls.Switch.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Controls.TextBlock.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Controls.TextInput.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Controls.WebView.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeStyle.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeStyle.Template.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeStyle.Template.Template1.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeStyle.Template.Template2.Factory.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeStyle.Template.Template2.Factory1.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeStyle.Template.Template2.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeTemplate.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeViews.ContentControl.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeViews.GenericNativeView.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeViews.GraphicsView.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeViews.NativeViewHost.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeViews.Panel.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeViews.ScrollView.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.StatusBarConfig.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.iOS.TextRenderer.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Node.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.SizeFlags.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Style.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.StyleProperty-2.h
obj/Fuse.iOS.g.cpp.o: include/Fuse.Themes.GraphicsStyle.h
obj/Fuse.iOS.g.cpp.o: include/Uno.Bool.h
obj/Fuse.iOS.g.cpp.o: include/Uno.Buffer.h
obj/Fuse.iOS.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.iOS.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.iOS.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.iOS.g.cpp.o: include/Uno.Float.h
obj/Fuse.iOS.g.cpp.o: include/Uno.Float2.h
obj/Fuse.iOS.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.iOS.g.cpp.o: include/Uno.Graphics.BlendOperand.h
obj/Fuse.iOS.g.cpp.o: include/Uno.Graphics.BufferUsage.h
obj/Fuse.iOS.g.cpp.o: include/Uno.Graphics.PolygonFace.h
obj/Fuse.iOS.g.cpp.o: include/Uno.Graphics.Texture2D.h
obj/Fuse.iOS.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
obj/Fuse.iOS.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
obj/Fuse.iOS.g.cpp.o: include/Uno.Int.h
obj/Fuse.iOS.g.cpp.o: include/Uno.Platform.iOS.StatusBarAnimation.h
obj/Fuse.iOS.g.cpp.o: include/Uno.Platform.iOS.StatusBarStyle.h
obj/Fuse.iOS.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
obj/Fuse.iOS.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
obj/Fuse.iOS.g.cpp.o: include/Uno.UX.IFactory.h
obj/Fuse.iOS.g.cpp.o: include/Uno.UX.Template-1.h
obj/Fuse.iOS.g.cpp.o: jni/Fuse.iOS.g.cpp | obj
	echo Fuse.iOS.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.iOS.g.cpp.o -c jni/Fuse.iOS.g.cpp

obj/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.iOS.NativeViews.ContentControl.h
obj/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.iOS.NativeViews.GenericNativeView.h
obj/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.iOS.NativeViews.GraphicsView.h
obj/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.iOS.NativeViews.LeafNativeView.h
obj/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.iOS.NativeViews.NativeView.h
obj/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.iOS.NativeViews.NativeViewHost.h
obj/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.iOS.NativeViews.Panel.h
obj/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.iOS.NativeViews.ParentNativeView-1.h
obj/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.iOS.NativeViews.ScrollView.h
obj/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.Node.h
obj/Fuse.iOS.NativeViews.g.cpp.o: jni/Fuse.iOS.NativeViews.g.cpp | obj
	echo Fuse.iOS.NativeViews.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.iOS.NativeViews.g.cpp.o -c jni/Fuse.iOS.NativeViews.g.cpp

obj/Fuse.Layouts.g.cpp.o: include/Fuse.Controls.Panel.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.Alignment.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.Element.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.SimpleAlignment.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Layer.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.LayoutDependent.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.LayoutRole.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Column.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.ColumnLayout.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.DefaultLayout.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.DefinitionBase.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.DefinitionBase.ParseDataItem.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Dock.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.DockLayout.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.FlowDirection.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.GridLayout.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Layout.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Layouts.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Metric.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Orientation.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Row.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.StackLayout.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.WrapLayout.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.Properties.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.PropertyHandle.h
obj/Fuse.Layouts.g.cpp.o: include/Fuse.SizeFlags.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Action.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Char.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IListExtensions.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Collections.ObservableList-1.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Diagnostics.Debug.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Float.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Int.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Math.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Object.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.String.h
obj/Fuse.Layouts.g.cpp.o: include/Uno.Vector.h
obj/Fuse.Layouts.g.cpp.o: jni/Fuse.Layouts.g.cpp | obj
	echo Fuse.Layouts.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Layouts.g.cpp.o -c jni/Fuse.Layouts.g.cpp

obj/Fuse.Navigation.g.cpp.o: include/Fuse.Animations.AnimationVariant.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Animations.Easing.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Animations.EasingFunction.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Animations.EasingFunctions.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Behavior.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Diagnostics.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Elements.Element.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Gestures.DegreeSpan.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Gestures.Edge.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Gestures.Internal.EdgeSwiper.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Gestures.SwipeGestureHelper.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Input.Pointer.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.LayoutRole.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.ActivatingAnimation.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.BackForwardNavigationTriggerAction.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.DeactivatingAnimation.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.DefaultNavigationAnimator.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.DefaultNavigationAnimatorPlayer.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.DirectNavigation.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.EdgeNavigation.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.EndSeekArgs.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.EnterExitAnimation.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.EnteringAnimation.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.ExitingAnimation.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.GoBack.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.GoForward.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.HierarchicalNavigation.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.HistoryChangedHandler.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.IBaseNavigation.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.INavigation.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.INavigationAnimator.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.INavigationAnimatorPlayer.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.INavigationPanel.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.IPageResourceBinding.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.ISeekable.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.LinearNavigation.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigatedArgs.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigatedHandler.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigateTo.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigateToggle.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navigation.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationAnimation.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationArgs.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationDirection.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationEdge.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationGotoMode.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationHandler.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationMode.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationPageCountHandler.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationPageProgressHandler.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationPageProperty.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationState.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationStateArgs.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationStateHandler.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationTriggerAction.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationTween.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavTriggerUtil.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.PageResourceBinding-1.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.PlayerFactory.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.ProgressSpan.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.ProgressTimer.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.SeekNavigationAnimatorPlayer.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.SnapTo.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.StructuredNavigation.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.StructuredNavigation.NavigationStructure.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.SwipeDirection.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.SwipeEnds.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.SwipeNavigate.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.UpdateSeekArgs.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileActive.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileCanGoBack.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileCanGoForward.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileHistoryTrigger.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileInactive.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileInEnterState.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileInExitState.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileNavigating.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileNavigationTrigger.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.NodeEvent-2.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.PlacedHandler.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Properties.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.PropertyHandle.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Resources.ResourceRegistry.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Time.h
obj/Fuse.Navigation.g.cpp.o: include/Fuse.Triggers.Trigger.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Action.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Action-2.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.ArgumentNullException.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Diagnostics.Debug.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Double.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.EventArgs.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.EventHandler-1.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Float.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Func-1.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Int.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Math.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.NotImplementedException.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Object.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.Predicate-1.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.String.h
obj/Fuse.Navigation.g.cpp.o: include/Uno.UX.Property-1.h
obj/Fuse.Navigation.g.cpp.o: jni/Fuse.Navigation.g.cpp | obj
	echo Fuse.Navigation.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Navigation.g.cpp.o -c jni/Fuse.Navigation.g.cpp

obj/Fuse.Physics.g.cpp.o: include/Fuse.Animations.AnimationVariant.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Behavior.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Elements.Element.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Input.Pointer.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerEnteredHandler.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerLeftHandler.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerWheelMovedHandler.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.NodeEventArgs.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Physics.Body.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Physics.Draggable.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Physics.EnteredForceField.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Physics.ExitedForceField.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Physics.ForceField.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Physics.ForceFieldEventArgs.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Physics.ForceFieldEventHandler.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Physics.ForceFieldEventTrigger.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Physics.ForceFieldTrigger.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Physics.InForceFieldAnimation.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Physics.IRule.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Physics.PointAttractor.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Physics.Spring.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Physics.WhileDragging.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Physics.World.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Properties.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.PropertyHandle.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Time.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Transform.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Translation.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.Triggers.Trigger.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.UpdateManager.h
obj/Fuse.Physics.g.cpp.o: include/Fuse.UpdateStage.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Action.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Double.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Float.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Geometry.Box.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Int.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Math.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Object.h
obj/Fuse.Physics.g.cpp.o: include/Uno.String.h
obj/Fuse.Physics.g.cpp.o: include/Uno.Vector.h
obj/Fuse.Physics.g.cpp.o: jni/Fuse.Physics.g.cpp | obj
	echo Fuse.Physics.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Physics.g.cpp.o -c jni/Fuse.Physics.g.cpp

obj/Fuse.Preview.g.cpp.o: include/Fuse.Preview.ISelection.h
obj/Fuse.Preview.g.cpp.o: include/Fuse.Preview.SelectionManager.h
obj/Fuse.Preview.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Preview.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Preview.g.cpp.o: include/Uno.EventArgs.h
obj/Fuse.Preview.g.cpp.o: include/Uno.EventHandler-1.h
obj/Fuse.Preview.g.cpp.o: include/Uno.Object.h
obj/Fuse.Preview.g.cpp.o: include/Uno.String.h
obj/Fuse.Preview.g.cpp.o: jni/Fuse.Preview.g.cpp | obj
	echo Fuse.Preview.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Preview.g.cpp.o -c jni/Fuse.Preview.g.cpp

obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Camera.Camera.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Camera.PictureResult.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Camera.TakePictureOptions.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Diagnostics.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.GeoLocation.GeoCoordinates.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.GeoLocation.GeoLocationAuthorizationType.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.GeoLocation.Location.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.GeoLocation.LocationTracker.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Launcher.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Base64.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Camera.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Email.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Environment.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.FileReaderImpl.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.FunctionClosure.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.GeoLocation.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Globals.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Http.FuseJSHttpClient.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Http.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.InterApp.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Lifecycle.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Maps.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Phone.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.RaiseEvent.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Storage.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Timer.Closure.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Timer.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Timer.Time.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.UserEvents.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Vibration.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.Marshal.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Callback.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Context.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Error.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Function.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.FutureFactory-1.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.IDispatcher.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.IModule.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.JSCallback.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeEvent.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeMember.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeModule.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativePromise-2.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeProperty-2.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Object.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.ResultConverter-2.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.ResultFactory-1.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Value.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.ValueConverter-2.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Storage.ApplicationDir.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.UpdateManager.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.UserEventDispatch.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Vibration.Vibration.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Action.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Action-2.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Action-4.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Byte.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Diagnostics.Clock.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Double.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.EventArgs.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.EventHandler-1.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Func-1.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Func-2.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Func-3.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Int.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.IO.File.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.IO.Path.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Long.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpMessageHandler.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpRequestState.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpStatusReasonPhrase.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.Uri.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Object.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Platform2.Application.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Platform2.ApplicationState.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Platform2.ApplicationStateTransitionHandler.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Predicate-1.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.String.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Text.Ascii.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Text.Base64.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Text.Utf8.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Threading.Future-1.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Threading.IDispatcher.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.UX.BundleFileSource.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.UX.Resource.h
obj/Fuse.Reactive.FuseJS.g.cpp.o: jni/Fuse.Reactive.FuseJS.g.cpp | obj
	echo Fuse.Reactive.FuseJS.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Reactive.FuseJS.g.cpp.o -c jni/Fuse.Reactive.FuseJS.g.cpp

obj/Fuse.Reactive.g.cpp.o: include/_root.Fuse_Reactive_bundle.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Behavior.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Controls.Panel.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.DataContextChangedHandler.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Drawing.Brush.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Drawing.SolidColor.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Elements.Alignment.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Elements.Element.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Elements.Visibility.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.AsyncArray.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.AsyncFunction.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.AsyncObject.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Binding.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.CallEventHandler.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.CallFunction.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.CallObjectEventHandler.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.CascadingPathSubscription.BindAttempt.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.CascadingPathSubscription.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Case.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Console.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.CrossThreadExceptionHandler.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.DataBinding-1.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.DataToResourceBinding-1.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.DebugLog.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Dispatcher.Arg2Dispatch-2.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Dispatcher.ArgDispatch-1.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Dispatcher.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Dispatcher.UIThreadDispatcher.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Each.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.EnumArray.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.EnumObservable.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.EventBinding.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FileSourceTell.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FuseJS.Base64.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FuseJS.Camera.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FuseJS.Email.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FuseJS.Environment.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FuseJS.FileReaderImpl.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FuseJS.GeoLocation.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FuseJS.Globals.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FuseJS.Http.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FuseJS.InterApp.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FuseJS.Lifecycle.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FuseJS.Maps.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FuseJS.Phone.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FuseJS.Storage.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FuseJS.Timer.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FuseJS.UserEvents.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FuseJS.Vibration.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IAsyncArray.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IAsyncFunction.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IAsyncObject.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.InternalPathSubscription.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IObservable.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IObserver.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ISubscription.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.JavaScript.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.JSFileSource.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Marshal.Float2Enum.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Marshal.Float3Enum.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Marshal.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Marshal.VectorEnum.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Match.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Observable.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ObservableSubscription.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ScriptEventArgs.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Select.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.SubscriptionSetExclusive.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.TellObject.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ThreadWorker.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.WhileCount.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.WhileEmpty.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Resources.ResourceRegistry.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Array.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Callback.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Context.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.FileModule.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Function.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.IModule.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.IScriptEvent.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.NameRegistry.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Object.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.TaskPriority.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.V8.Context.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.Triggers.WhileFailed.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.UpdateManager.h
obj/Fuse.Reactive.g.cpp.o: include/Fuse.UpdateStage.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Action.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Action-2.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Application.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.ArgumentException.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.BundleFile.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Char.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Collections.ObservableList-1.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Collections.Queue-1.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Color.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Diagnostics.Debug.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Double.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.EventArgs.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.EventHandler-1.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Float.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.IDisposable.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Int.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.IO.File.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.IO.Stream.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Object.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Platform.Window.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Predicate-1.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.String.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Text.StringBuilder.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Threading.Mutex.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Threading.Thread.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.Type.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.UInt.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.UX.FileSource.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.UX.IFactory.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.UX.Property-1.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.UX.Resource.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
obj/Fuse.Reactive.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
obj/Fuse.Reactive.g.cpp.o: jni/Fuse.Reactive.g.cpp | obj
	echo Fuse.Reactive.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Reactive.g.cpp.o -c jni/Fuse.Reactive.g.cpp

obj/Fuse.Resources.g.cpp.o: include/Experimental.Http.HttpLoader.h
obj/Fuse.Resources.g.cpp.o: include/Experimental.Http.HttpResponseHeader.h
obj/Fuse.Resources.g.cpp.o: include/Experimental.TextureLoader.TextureLoader.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.DisposalManager.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.DisposalPolicy.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.DisposalRequest.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.DoubleResourceConverter.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ExpirationDisposalPolicy.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileImageSource.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileImageSourceCache.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileImageSourceImpl.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileResource.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FloatResourceConverter.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.GenericResourceConverter-1.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.HttpImageSource.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.HttpImageSourceCache.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.HttpImageSourceImpl.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.IDeferredDisposable.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageSource.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageSourceErrorArgs.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageSourceErrorHandler.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageSourceState.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.IMemoryResource.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.IntResourceConverter.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.IResourceConverter-1.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ISoftDisposable.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.LoadingImageSource.CleanupReason.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.LoadingImageSource.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.MemoryPolicy.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.MultiDensityImageSource.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.NumericResourceConverter-1.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.PolicyDeferredDisposable.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ProxyImageSource.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceBinding-1.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceBool.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceConverters.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceFloat.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceFloat2.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceFloat3.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceFloat4.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceObject.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceRegistry.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceSetter-1.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceString.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.RetainDisposalPolicy.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Resources.TextureImageSource.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.RootViewport.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.Time.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.UpdateManager.h
obj/Fuse.Resources.g.cpp.o: include/Fuse.UpdateStage.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Action.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Action-2.h
obj/Fuse.Resources.g.cpp.o: include/Uno.ArgumentNullException.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Buffer.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Byte.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Collections.ObservableList-1.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Double.h
obj/Fuse.Resources.g.cpp.o: include/Uno.EventArgs.h
obj/Fuse.Resources.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Resources.g.cpp.o: include/Uno.EventHandler-1.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Float.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Graphics.Texture2D.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Int.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Int2.h
obj/Fuse.Resources.g.cpp.o: include/Uno.IO.Stream.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Math.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Object.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Predicate-1.h
obj/Fuse.Resources.g.cpp.o: include/Uno.String.h
obj/Fuse.Resources.g.cpp.o: include/Uno.Type.h
obj/Fuse.Resources.g.cpp.o: include/Uno.UX.FileSource.h
obj/Fuse.Resources.g.cpp.o: include/Uno.UX.Property-1.h
obj/Fuse.Resources.g.cpp.o: include/Uno.WeakReference-1.h
obj/Fuse.Resources.g.cpp.o: jni/Fuse.Resources.g.cpp | obj
	echo Fuse.Resources.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Resources.g.cpp.o -c jni/Fuse.Resources.g.cpp

obj/Fuse.Scripting.Duktape.g.cpp.o: include/duktape_helpers.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Callback.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.callback.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.CallbackClosure.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.CompileFlag.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.Context.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.duktape.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.EnumFlags.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.JSArray.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.JSFunction.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.JSObject.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.JSONObject.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Function.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.IDispatcher.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Object.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.ScriptException.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Double.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Int.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.IntPtr.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Long.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Object.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.String.h
obj/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.UInt.h
obj/Fuse.Scripting.Duktape.g.cpp.o: jni/Fuse.Scripting.Duktape.g.cpp | obj
	echo Fuse.Scripting.Duktape.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Scripting.Duktape.g.cpp.o -c jni/Fuse.Scripting.Duktape.g.cpp

obj/Fuse.Scripting.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Array.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.BoolChangedArgs.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Callback.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Context.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.DoubleChangedArgs.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Error.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.FactoryClosure-1.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.FileModule.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Function.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.FutureFactory-1.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IDispatcher.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IModule.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.INameListener.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.INameScope.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IScriptEvent.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.ActionClosure.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.ActionClosure-1.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.ActionClosure-2.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.FuncClosure-1.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.FuncClosure-2.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.FuncClosure-3.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.NumberConverter.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NameRegistry.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeEvent.EventClosure.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeEvent.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeFunction.NativeFunctionClosure.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeMember.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeModule.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativePromise-2.ContextClosure.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativePromise-2.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativePromise-2.PromiseClosure.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeProperty-2.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NodeCallback.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Object.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ResultConverter-2.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ResultFactory-1.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptException.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.StringChangedArgs.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.TaskPriority.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Value.h
obj/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ValueConverter-2.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Action.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Action-2.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.ArgumentException.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Char.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Collections.Queue-1.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Double.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.EventArgs.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Float.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Func-1.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Func-2.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Func-3.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Int.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Long.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Object.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Predicate-1.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Short.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.String.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Text.StringBuilder.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Threading.Future-1.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Threading.Promise-1.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Threading.Thread.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.Type.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.UInt.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.UX.FileSource.h
obj/Fuse.Scripting.g.cpp.o: include/Uno.UX.Resource.h
obj/Fuse.Scripting.g.cpp.o: jni/Fuse.Scripting.g.cpp | obj
	echo Fuse.Scripting.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Scripting.g.cpp.o -c jni/Fuse.Scripting.g.cpp

obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.Callback.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.Function.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.IDispatcher.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.Object.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.ScriptException.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Array.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Context.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Debugger.Connected.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Debugger.ConnectedMessageHandler.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Debugger.Disconnected.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Debugger.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Debugger.State.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Function.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.Array.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.Context.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.Debug.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.Debug.Message.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.Function.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.Isolate.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.MaybeArray.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.MaybeBool.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.MaybeDouble.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.MaybeInt.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.MaybeObject.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.MaybeString.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.MaybeValue.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.Message.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.MessageHandler.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.Object.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.PersistentArray.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.PersistentContext.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.PersistentFunction.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.PersistentObject.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.Platform.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.Script.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.String.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.TryCatch.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.V8.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Internal.Value.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Marshaller.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Object.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Action.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Byte.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Char.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Diagnostics.Debug.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Double.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Int.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.IO.Stream.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.IO.StreamReader.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.IO.StreamWriter.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.IO.TextReader.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.IO.TextWriter.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.EndPoint.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.IPAddress.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.IPEndPoint.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.Sockets.AddressFamily.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.Sockets.NetworkStream.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.Sockets.ProtocolType.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.Sockets.Socket.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.Sockets.SocketType.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Object.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.String.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Text.Utf8.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Threading.IDispatcher.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.Threading.Thread.h
obj/Fuse.Scripting.V8.g.cpp.o: include/Uno.UInt.h
obj/Fuse.Scripting.V8.g.cpp.o: jni/Fuse.Scripting.V8.g.cpp | obj
	echo Fuse.Scripting.V8.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Scripting.V8.g.cpp.o -c jni/Fuse.Scripting.V8.g.cpp

obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.Callback.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.Array.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.Context.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.Debug.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.Debug.Message.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.Function.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.Isolate.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.MaybeArray.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.MaybeBool.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.MaybeDouble.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.MaybeInt.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.MaybeLong.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.MaybeObject.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.MaybeString.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.MaybeUint.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.MaybeValue.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.Message.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.MessageHandler.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.Object.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.PersistentArray.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.PersistentContext.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.PersistentFunction.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.PersistentObject.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.Platform.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.Script.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.String.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.TryCatch.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.V8.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Internal.Value.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Fuse.Scripting.V8.Marshaller.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Uno.Double.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Uno.Int.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Uno.Long.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Uno.String.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: include/Uno.UInt.h
obj/Fuse.Scripting.V8.Internal.g.cpp.o: jni/Fuse.Scripting.V8.Internal.g.cpp | obj
	echo Fuse.Scripting.V8.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Scripting.V8.Internal.g.cpp.o -c jni/Fuse.Scripting.V8.Internal.g.cpp

obj/Fuse.Shapes.g.cpp.o: include/Fuse.DrawContext.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.Antialiasing.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.Brush.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.PathGeometry.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.PathGeometryExtensions.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.PathGeometryRenderer.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.Primitives.Circle.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.Primitives.Rectangle.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.Primitives.Wedge.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.Stroke.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.WindingRules.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Elements.Alignment.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Elements.Element.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Elements.StretchDirection.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Elements.StretchMode.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.HitTestContext.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Internal.SizingContainer.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.IViewport.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.NodeBounds.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.Circle.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.Ellipse.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.FillRule.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.FitMode.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.GeometryCache.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.GeometryCacheEntry.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.Path.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.PathScaleMode.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.PathShape.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.Rectangle.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.RegularPolygon.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.Shape.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.Star.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.SizeFlags.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.StyleProperty-2.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.UpdateManager.h
obj/Fuse.Shapes.g.cpp.o: include/Fuse.UpdateStage.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Action.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Action-2.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Collections.ObservableList-1.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Float.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Func-2.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Int.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Math.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Matrix.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Object.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Predicate-1.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Rect.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.String.h
obj/Fuse.Shapes.g.cpp.o: include/Uno.Vector.h
obj/Fuse.Shapes.g.cpp.o: jni/Fuse.Shapes.g.cpp | obj
	echo Fuse.Shapes.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Shapes.g.cpp.o -c jni/Fuse.Shapes.g.cpp

obj/Fuse.Storage.g.cpp.o: include/Fuse.Storage.ApplicationDir.h
obj/Fuse.Storage.g.cpp.o: include/Uno.ArgumentNullException.h
obj/Fuse.Storage.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Storage.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Storage.g.cpp.o: include/Uno.IDisposable.h
obj/Fuse.Storage.g.cpp.o: include/Uno.IO.Directory.h
obj/Fuse.Storage.g.cpp.o: include/Uno.IO.File.h
obj/Fuse.Storage.g.cpp.o: include/Uno.IO.FileMode.h
obj/Fuse.Storage.g.cpp.o: include/Uno.IO.Path.h
obj/Fuse.Storage.g.cpp.o: include/Uno.IO.Stream.h
obj/Fuse.Storage.g.cpp.o: include/Uno.IO.UserDirectory.h
obj/Fuse.Storage.g.cpp.o: include/Uno.String.h
obj/Fuse.Storage.g.cpp.o: include/Uno.Threading.Future-1.h
obj/Fuse.Storage.g.cpp.o: include/Uno.Threading.Promise-1.h
obj/Fuse.Storage.g.cpp.o: jni/Fuse.Storage.g.cpp | obj
	echo Fuse.Storage.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Storage.g.cpp.o -c jni/Fuse.Storage.g.cpp

obj/Fuse.Themes.g.cpp.o: include/_root.Fuse_Themes_bundle.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Behavior.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Circle.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Ellipse.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Graphics.CircleVisual.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Graphics.EllipseVisual.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Graphics.ImageVisual.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Graphics.PathVisual.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Graphics.RectangleVisual.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Graphics.RegularPolygonVisual.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Graphics.StarVisual.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Image.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Panel.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Path.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Controls.PropertyBinding-1.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Rectangle.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Controls.RegularPolygon.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Controls.ScrollView.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Star.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Controls.TextControl.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Video.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Font.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Gestures.KeepFocusInView.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Gestures.Scroller.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.StyleProperty-2.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Fuse_Controls_ScrollView_bool_KeepFoc-4668682a.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Fuse_Controls_ScrollView_bool_UserScr-9131549d.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Fuse_Gestures_Scroller_bool_UserScrol-28e29c0f.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Fuse_Triggers_WhileBool_bool_Value_Property.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template1.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template2.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template3.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template4.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template5.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template6.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template7.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template8.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template9.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Triggers.Trigger.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Triggers.WhileBool.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Triggers.WhileTrue.h
obj/Fuse.Themes.g.cpp.o: include/Fuse.Video.VideoVisual.h
obj/Fuse.Themes.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Themes.g.cpp.o: include/Uno.BundleFile.h
obj/Fuse.Themes.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Themes.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Themes.g.cpp.o: include/Uno.Object.h
obj/Fuse.Themes.g.cpp.o: include/Uno.String.h
obj/Fuse.Themes.g.cpp.o: include/Uno.UX.BundleFileSource.h
obj/Fuse.Themes.g.cpp.o: include/Uno.UX.FileSource.h
obj/Fuse.Themes.g.cpp.o: include/Uno.UX.Property-1.h
obj/Fuse.Themes.g.cpp.o: include/Uno.UX.Resource.h
obj/Fuse.Themes.g.cpp.o: include/Uno.UX.Template-1.h
obj/Fuse.Themes.g.cpp.o: jni/Fuse.Themes.g.cpp | obj
	echo Fuse.Themes.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Themes.g.cpp.o -c jni/Fuse.Themes.g.cpp

obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Controls.IWebView.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Controls.Panel.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Diagnostics.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Elements.Element.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Input.Focus.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Internal.Blender-1.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Internal.BlenderMap.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Launcher.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.NodeEvent-2.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.NodeEventArgs.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.NodeEventHandler.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.NodeEventMode.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Time.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.BringIntoView.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.BringToFront.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Call.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Callback.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Collapse.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.DebugAction.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.DebugFrame.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.DebugProperty-1.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.DebugTime.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.EvaluateJS.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.GiveFocus.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Hide.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.ICollapse.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.IHide.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.IShow.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.ITaggedDebugProperty.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.JSEventArgs.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.JSEventHandler.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.LaunchEmail.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.LaunchMaps.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.LaunchUri.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.LoadHtml.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.LoadUrl.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Pause.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.PlaybackAction.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.PlayTo.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Pulse.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.RaiseUserEvent.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.ReleaseFocus.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Reload.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Resume.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.SendToBack.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Set-1.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Show.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Stop.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.StopLoading.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.TransitionLayout.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.TransitionState.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.TransitionStateType.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.TriggerAction.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.TriggerDirection.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.UserEventArg.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.WebViewNavAction.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.IPlayback.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.LayoutTransition.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.LayoutTransitionedArgs.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.LayoutTransitionedHandler.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.StateGroup.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.WhileBool.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.WhileValue-1.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.UpdateManager.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.UserEvent.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Action.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.ArgumentNullException.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Diagnostics.Debug.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Double.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Int.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Matrix.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Net.Http.Uri.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Object.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.String.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.UX.Expression-1.h
obj/Fuse.Triggers.Actions.g.cpp.o: include/Uno.UX.Property-1.h
obj/Fuse.Triggers.Actions.g.cpp.o: jni/Fuse.Triggers.Actions.g.cpp | obj
	echo Fuse.Triggers.Actions.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Triggers.Actions.g.cpp.o -c jni/Fuse.Triggers.Actions.g.cpp

obj/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.AnimationVariant.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Animator.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.IResizeMode.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Nothing.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.TriggerAnimation.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.TriggerAnimationState.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.TriggerAnimationState.SeekFlags.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.BeginRemoveArgs.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.BeginRemoveHandler.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Behavior.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.Control.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.IWebView.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.ScrollView.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.TextEdit.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.TextInputActionArgs.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.TextInputActionHandler.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.TextInputActionType.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.WebView.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Diagnostics.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Elements.Element.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Elements.PreplacementArgs.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Elements.PreplacementHandler.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Gestures.ScrollDirections.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Input.Focus.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.IScalingMode.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.ITranslationMode.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.IViewport.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.NodeEvent-2.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.NodeEventArgs.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.NodeEventHandler.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.PlacedArgs.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.PlacedHandler.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Properties.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.PropertyHandle.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.RootViewport.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Scaling.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Transform.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.TransformModeFlags.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Translation.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Actions.Callback.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Actions.TriggerAction.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Actions.TriggerDirection.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.AddingAnimation.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Android.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.ContainingText.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IAddRemove-1.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IMediaPlayback.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.iOS.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IPlayback.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IProgress.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IValue-1.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IVisibility.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutAnimation.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransition.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransition.PositionChangeMode.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransition.ResizeChangeMode.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransition.ScaleChangeMode.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransition.WorldPositionChangeMode.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransitioned.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransitionedArgs.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransitionedHandler.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.OnBackButton.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.OnKeyPress.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.OnUserEvent.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.OnUserEventFilter.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.PageBeginLoading.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.PageLoaded.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.ProgressAnimation.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.PullToReload.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.RemovingAnimation.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.ScrollingAnimation.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.ScrollingAnimationRange.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.State.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.StateGroup.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.StateTransition.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.TextInputActionTriggered.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Timeline.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Timeline.State.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Trigger.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.TriggerBypassMode.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileBool.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileCompleted.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileContainsText.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileDisabled.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileEnabled.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileEnabledDisabledTrigger.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFailed.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFalse.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFloat.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFloat.Range.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFocused.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFocusWithin.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileInteracting.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileKeyboardVisible.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileLoading.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileNotFocused.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhilePageLoading.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhilePaused.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhilePlaying.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileScrollable.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileTrigger.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileTrue.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileValue-1.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileVisible.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileWindowAspect.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileWindowLandscape.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileWindowPortrait.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileWindowSize.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WindowSizeTrigger.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.UpdateManager.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.UserEvent.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.UserEventArgs.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.UserEventDispatch.h
obj/Fuse.Triggers.g.cpp.o: include/Fuse.UserEventHandler.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Action.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Action-1.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Application.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Collections.List-1.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Collections.ObservableList-1.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Double.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.EventArgs.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.EventHandler-1.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Float.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Int.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Math.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Matrix.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Object.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Platform.Key.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Platform.SystemUI.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Platform.SystemUIWillResizeEventArgs.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Platform.Window.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Platform2.Display.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Predicate-1.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.Rect.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.String.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
obj/Fuse.Triggers.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
obj/Fuse.Triggers.g.cpp.o: jni/Fuse.Triggers.g.cpp | obj
	echo Fuse.Triggers.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Triggers.g.cpp.o -c jni/Fuse.Triggers.g.cpp

obj/Fuse.Vibration.g.cpp.o: include/Android.android.app.Activity.h
obj/Fuse.Vibration.g.cpp.o: include/Android.android.content.Context.h
obj/Fuse.Vibration.g.cpp.o: include/Android.android.os.Vibrator.h
obj/Fuse.Vibration.g.cpp.o: include/Android.Base.Permissions.h
obj/Fuse.Vibration.g.cpp.o: include/Android.Base.PlatPermission.h
obj/Fuse.Vibration.g.cpp.o: include/Android.java.lang.Object.h
obj/Fuse.Vibration.g.cpp.o: include/Android.java.lang.String.h
obj/Fuse.Vibration.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Vibration.g.cpp.o: include/Fuse.Vibration.Vibrate.h
obj/Fuse.Vibration.g.cpp.o: include/Fuse.Vibration.Vibration.h
obj/Fuse.Vibration.g.cpp.o: include/Uno.Double.h
obj/Fuse.Vibration.g.cpp.o: include/Uno.Long.h
obj/Fuse.Vibration.g.cpp.o: jni/Fuse.Vibration.g.cpp | obj
	echo Fuse.Vibration.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Vibration.g.cpp.o -c jni/Fuse.Vibration.g.cpp

obj/Fuse.Video.g.cpp.o: include/_root.Fuse_Video_bundle.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Controls.Graphics.Visual.h
obj/Fuse.Video.g.cpp.o: include/Fuse.DrawContext.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Elements.Alignment.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Elements.StretchDirection.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Elements.StretchMode.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Elements.StretchSizing.h
obj/Fuse.Video.g.cpp.o: include/Fuse.HitTestContext.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Internal.SizingContainer.h
obj/Fuse.Video.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
obj/Fuse.Video.g.cpp.o: include/Fuse.IViewport.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Node.h
obj/Fuse.Video.g.cpp.o: include/Fuse.SizeFlags.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Triggers.IMediaPlayback.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Triggers.WhileCompleted.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Triggers.WhileFailed.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Triggers.WhileLoading.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Triggers.WhilePaused.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Triggers.WhilePlaying.h
obj/Fuse.Video.g.cpp.o: include/Fuse.UpdateManager.h
obj/Fuse.Video.g.cpp.o: include/Fuse.UpdateStage.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Video.CancellationTokenSource.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Video.Graphics.Android.AndroidVideoLoader.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Video.IVideoPlayer.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Video.LoadedHandler.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Video.LoadFailed.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Video.LoadResult.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Video.LoadSucceded.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Video.Scale9Rectangle.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Video.VideoContainer.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Video.VideoDiskCache.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Video.VideoDrawElement.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Video.VideoLoader.h
obj/Fuse.Video.g.cpp.o: include/Fuse.Video.VideoVisual.h
obj/Fuse.Video.g.cpp.o: include/Uno.Action.h
obj/Fuse.Video.g.cpp.o: include/Uno.ArgumentNullException.h
obj/Fuse.Video.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Video.g.cpp.o: include/Uno.Buffer.h
obj/Fuse.Video.g.cpp.o: include/Uno.Byte.h
obj/Fuse.Video.g.cpp.o: include/Uno.Char.h
obj/Fuse.Video.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Fuse.Video.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Video.g.cpp.o: include/Uno.Double.h
obj/Fuse.Video.g.cpp.o: include/Uno.EventArgs.h
obj/Fuse.Video.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Video.g.cpp.o: include/Uno.EventHandler-1.h
obj/Fuse.Video.g.cpp.o: include/Uno.Exception.h
obj/Fuse.Video.g.cpp.o: include/Uno.Float.h
obj/Fuse.Video.g.cpp.o: include/Uno.Float2.h
obj/Fuse.Video.g.cpp.o: include/Uno.Float3.h
obj/Fuse.Video.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Video.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.Video.g.cpp.o: include/Uno.Graphics.BlendOperand.h
obj/Fuse.Video.g.cpp.o: include/Uno.Graphics.BufferUsage.h
obj/Fuse.Video.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
obj/Fuse.Video.g.cpp.o: include/Uno.Graphics.IndexType.h
obj/Fuse.Video.g.cpp.o: include/Uno.Graphics.PolygonFace.h
obj/Fuse.Video.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
obj/Fuse.Video.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
obj/Fuse.Video.g.cpp.o: include/Uno.Graphics.VideoTexture.h
obj/Fuse.Video.g.cpp.o: include/Uno.IDisposable.h
obj/Fuse.Video.g.cpp.o: include/Uno.Int.h
obj/Fuse.Video.g.cpp.o: include/Uno.Int2.h
obj/Fuse.Video.g.cpp.o: include/Uno.IO.Directory.h
obj/Fuse.Video.g.cpp.o: include/Uno.IO.File.h
obj/Fuse.Video.g.cpp.o: include/Uno.IO.UserDirectory.h
obj/Fuse.Video.g.cpp.o: include/Uno.Math.h
obj/Fuse.Video.g.cpp.o: include/Uno.Matrix.h
obj/Fuse.Video.g.cpp.o: include/Uno.Object.h
obj/Fuse.Video.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
obj/Fuse.Video.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
obj/Fuse.Video.g.cpp.o: include/Uno.String.h
obj/Fuse.Video.g.cpp.o: include/Uno.UShort.h
obj/Fuse.Video.g.cpp.o: include/Uno.UX.FileSource.h
obj/Fuse.Video.g.cpp.o: jni/Fuse.Video.g.cpp | obj
	echo Fuse.Video.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Video.g.cpp.o -c jni/Fuse.Video.g.cpp

obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.app.Activity.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.content.Context.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.content.ContextWrapper.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.content.res.AssetFileDescriptor.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.content.res.AssetManager.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.graphics.SurfaceTexture.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.media.AudioManager.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.media.AudioManagerDLROnAudioFocusChangeListener.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.media.MediaPlayer.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.view.Surface.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.Base.JNI.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.Base.Primitives.ujclass.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.Base.Primitives.ujlong.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.java.io.FileDescriptor.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.java.lang.Object.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.java.lang.String.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.Runtime.FloatArray.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.AndroidAudioHelpers.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.AndroidVideoLoader.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.BufferingArgs.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.BufferingEvent.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.CompletionEvent.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.ErrorEvent.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.ErrorEventArgs.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.ErrorEventHandler.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.FrameAvailableEvent.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.PreparedEvent.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.SeekCompleteEvent.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.VideoPlayer.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.VideoSizeChanged.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.VideoSizeChangedArgs.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.VideoSurface.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.IVideoPlayer.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.LoadedHandler.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.LoadFailed.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.LoadResult.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.LoadSucceded.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.VideoDiskCache.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/OpenGL.GL.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/OpenGL.GLTextureHandle.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Bool.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.BundleFile.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Delegate.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Double.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.EventArgs.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.EventHandler.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.EventHandler-1.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Float.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Float4.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Float4x4.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Graphics.VideoTexture.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Int.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Int2.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Long.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Math.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Object.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Platform2.Application.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Platform2.ApplicationState.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Platform2.ApplicationStateTransitionHandler.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.String.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Text.StringBuilder.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Type.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.UX.BundleFileSource.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.UX.FileSource.h
obj/Fuse.Video.Graphics.Android.g.cpp.o: jni/Fuse.Video.Graphics.Android.g.cpp | obj
	echo Fuse.Video.Graphics.Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Fuse.Video.Graphics.Android.g.cpp.o -c jni/Fuse.Video.Graphics.Android.g.cpp

obj/JNIHelper.cpp.o: jni/JNIHelper.cpp | obj
	echo JNIHelper.cpp
	$(CXX) $(CXX_FLAGS) -o obj/JNIHelper.cpp.o -c jni/JNIHelper.cpp

obj/OpenGL.g.cpp.o: include/OpenGL.GL.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLBlendEquation.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLBlendingFactor.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLBufferHandle.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLBufferTarget.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLBufferUsage.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLClearBufferMask.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLCullFaceMode.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLDataType.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLDepthFunction.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLEnableCap.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLError.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferAttachment.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferStatus.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferTarget.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLFrontFaceDirection.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLIndexType.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLInteger4Name.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLIntegerName.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLPixelFormat.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLPixelType.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLPrimitiveType.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLProgramHandle.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLProgramParameter.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferHandle.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferStorage.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferTarget.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLShaderHandle.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLShaderParameter.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLShaderType.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLTextureHandle.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterName.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterValue.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLTextureTarget.h
obj/OpenGL.g.cpp.o: include/OpenGL.GLTextureUnit.h
obj/OpenGL.g.cpp.o: include/Uno.Bool.h
obj/OpenGL.g.cpp.o: include/Uno.Buffer.h
obj/OpenGL.g.cpp.o: include/Uno.Float.h
obj/OpenGL.g.cpp.o: include/Uno.Float2.h
obj/OpenGL.g.cpp.o: include/Uno.Float2x2.h
obj/OpenGL.g.cpp.o: include/Uno.Float3.h
obj/OpenGL.g.cpp.o: include/Uno.Float4.h
obj/OpenGL.g.cpp.o: include/Uno.Float4x4.h
obj/OpenGL.g.cpp.o: include/Uno.Int.h
obj/OpenGL.g.cpp.o: include/Uno.Int4.h
obj/OpenGL.g.cpp.o: include/Uno.String.h
obj/OpenGL.g.cpp.o: include/Uno/XliInterop.h
obj/OpenGL.g.cpp.o: jni/OpenGL.g.cpp | obj
	echo OpenGL.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/OpenGL.g.cpp.o -c jni/OpenGL.g.cpp

obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.AddEventHandler.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.BindVariable.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.BlobLiteral.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.BooleanLiteral.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.CallDynamicMethod.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.CallLambda.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.CallStaticMethod.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.EnumLiteral.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Expression.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Instantiate.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.IsType.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Lambda.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Literal.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.LogicalOr.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.MethodGroup.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.NamespaceName.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.NoOperation.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.NumberLiteral.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.NumberType.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Optional.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Optional-1.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.OptionalExtensions.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Parameter.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.ProjectBytecode.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.ReadProperty.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.ReadStaticField.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.ReadVariable.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.RemoveEventHandler.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Return.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Signature.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Statement.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.StaticMemberName.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.StringLiteral.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.TypeMemberName.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.TypeName.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Variable.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.WriteProperty.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Closure.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.ImmutableList-1.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.IndentString.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.InvalidDataException.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.List.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.NonExhaustiveMatch.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Serialization.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.StringSplitting.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Action-1.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Action-2.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.ArgumentNullException.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Bool.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Byte.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Char.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Collections.List-1.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Double.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Exception.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Func-1.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Func-2.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Int.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.InvalidOperationException.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.IO.BinaryReader.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.IO.BinaryWriter.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Object.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.String.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Text.StringBuilder.h
obj/Outracks.Simulator.Bytecode.g.cpp.o: jni/Outracks.Simulator.Bytecode.g.cpp | obj
	echo Outracks.Simulator.Bytecode.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Outracks.Simulator.Bytecode.g.cpp.o -c jni/Outracks.Simulator.Bytecode.g.cpp

obj/Outracks.Simulator.ByteFileSource.cpp.o: include/Outracks.Simulator.ArrayStream.h
obj/Outracks.Simulator.ByteFileSource.cpp.o: include/Outracks.Simulator.ByteFileSource.h
obj/Outracks.Simulator.ByteFileSource.cpp.o: include/Uno.Byte.h
obj/Outracks.Simulator.ByteFileSource.cpp.o: include/Uno.IO.Stream.h
obj/Outracks.Simulator.ByteFileSource.cpp.o: include/Uno.String.h
obj/Outracks.Simulator.ByteFileSource.cpp.o: jni/Outracks.Simulator.ByteFileSource.cpp | obj
	echo Outracks.Simulator.ByteFileSource.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Outracks.Simulator.ByteFileSource.cpp.o -c jni/Outracks.Simulator.ByteFileSource.cpp

obj/Outracks.Simulator.FileCache.cpp.o: include/Outracks.Simulator.ByteFileSource.h
obj/Outracks.Simulator.FileCache.cpp.o: include/Outracks.Simulator.FileCache.h
obj/Outracks.Simulator.FileCache.cpp.o: include/Uno.Bool.h
obj/Outracks.Simulator.FileCache.cpp.o: include/Uno.Byte.h
obj/Outracks.Simulator.FileCache.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Outracks.Simulator.FileCache.cpp.o: include/Uno.String.h
obj/Outracks.Simulator.FileCache.cpp.o: jni/Outracks.Simulator.FileCache.cpp | obj
	echo Outracks.Simulator.FileCache.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Outracks.Simulator.FileCache.cpp.o -c jni/Outracks.Simulator.FileCache.cpp

obj/Outracks.Simulator.g.cpp.o: include/_root.Outracks_Simulator_Client_Uno_bundle.h
obj/Outracks.Simulator.g.cpp.o: include/Android.android.os.Build.h
obj/Outracks.Simulator.g.cpp.o: include/Android.java.lang.String.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.App.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.AppBase.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.BasicTheme.BasicTheme.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Behavior.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.Button.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.Control.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.Image.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.Panel.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.ScrollView.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.StackPanel.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.Text.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.TextControl.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.TextInput.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.DrawContext.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Drawing.Brush.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Drawing.GradientStop.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Elements.Alignment.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Elements.Element.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Elements.TextAlignment.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Elements.TextWrapping.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Elements.Visibility.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Font.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Gestures.Clicked.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Gestures.ClickedArgs.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Gestures.ClickedHandler.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Gestures.ScrollDirections.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.HitTestCallback.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.HitTestContext.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.HitTestResult.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Input.Pointer.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Input.PointerWheelMovedArgs.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Layouts.Orientation.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Node.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.NodeEventArgs.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Preview.ISelection.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Preview.SelectionManager.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Theme.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.Time.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.UnhandledExceptionArgs.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.UnhandledExceptionHandler.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.UpdateManager.h
obj/Outracks.Simulator.g.cpp.o: include/Fuse.UpdateStage.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.AggregateConnectError.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Application.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Apply-1.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ApplyFirst-2.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ApplySecond-2.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ArrayStream.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Bytecode.Lambda.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Bytecode.Optional.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Bytecode.Optional-1.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.BytecodeCache.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ChangeIp.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Closure.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ConcurrentQueue-1.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Connected.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Connecting.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ConnectingToHost.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ConnectingToProxy.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ConnectionLost.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ConnectToSimulator.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Context.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.DeviceInfo.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.DialogButton.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.DummyApplication.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.EnumerableHitTestExtension.CollectHitNodesClosure.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.EnumerableHitTestExtension.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Exceptions.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.FailedToConnect.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.FailedToConnectToEndPoint.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.FailedToConnectToProxy.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.FailedToConnectToSimulator.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.FakeApp.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Faulted.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Flasher.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Forget-2.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Forget-3.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ForgetAction-2.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.GetSimulatorEndpoint.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.GoOffline.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Idle.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.IEquatable-1.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ImmutableList-1.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.IndentString.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.InputMode.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.InvalidDataException.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ISimulatorClient.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.List.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.LoadingScreen.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ModalDialog.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.NonExhaustiveMatch.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.OfflineSimulatorClient.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.DebugLog.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.Error.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.ExceptionInfo.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.Execute.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.MessageFromClient.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.MessageToClient.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.RegisterName.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.Reify.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.SetSelection.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.UnhandledException.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ProxyClient.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Reifying.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Running.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Runtime.IReflection.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Runtime.ObjectTagRegistry.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Runtime.Selection.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Runtime.VirtualMachine.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Serialization.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ShowingModalDialog.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ShowingPrompt.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.SimulatorClient.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.State.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.StringSplitting.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Task-1.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Tasks.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.TaskThread-1.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Uninitialized.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.UserAppState.h
obj/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.WaitForFirstResult-1.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Action.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Action-1.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Action-2.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.AggregateException.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Application.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Array.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Bool.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.BundleFile.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Byte.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Char.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Collections.IListExtensions.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Collections.List-1.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Collections.Queue-1.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Collections.ReadOnlyCollection-1.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Color.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Diagnostics.Debug.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Diagnostics.LogHandler.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Double.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Exception.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Float.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Float2.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Float3.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Float4.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Func-1.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Func-2.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.IDisposable.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Int.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.IO.BinaryReader.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.IO.BinaryWriter.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.IO.Directory.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.IO.EndOfStreamException.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.IO.File.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.IO.FileMode.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.IO.SeekOrigin.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.IO.Stream.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.IO.StreamReader.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.IO.StreamWriter.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.IO.TextReader.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.IO.TextWriter.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.IO.UserDirectory.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Long.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Math.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Net.EndPoint.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Net.IPAddress.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Net.IPEndPoint.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.AddressFamily.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.NetworkStream.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.ProtocolType.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.SelectMode.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.Socket.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.SocketShutdown.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.SocketType.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.NotImplementedException.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Object.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Platform.Window.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Runtime.Implementation.Internal.WindowHelpers.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowHandle.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowImpl.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.String.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Text.StringBuilder.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Threading.Mutex.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Threading.Thread.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.Type.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.UInt.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.UX.BundleFileSource.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.UX.FileSource.h
obj/Outracks.Simulator.g.cpp.o: include/Uno.UX.Resource.h
obj/Outracks.Simulator.g.cpp.o: jni/Outracks.Simulator.g.cpp | obj
	echo Outracks.Simulator.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Outracks.Simulator.g.cpp.o -c jni/Outracks.Simulator.g.cpp

obj/Outracks.Simulator.GeneratedApplication.cpp.o: include/Outracks.Simulator.GeneratedApplication.h
obj/Outracks.Simulator.GeneratedApplication.cpp.o: include/Outracks.Simulator.Reflection.Native.ITypeMap.h
obj/Outracks.Simulator.GeneratedApplication.cpp.o: include/Outracks.Simulator.Reflection.Native.NativeReflection.h
obj/Outracks.Simulator.GeneratedApplication.cpp.o: include/Outracks.Simulator.Reflection.Native.SimpleTypeMap.h
obj/Outracks.Simulator.GeneratedApplication.cpp.o: include/Outracks.Simulator.Runtime.IReflection.h
obj/Outracks.Simulator.GeneratedApplication.cpp.o: include/Uno.Int.h
obj/Outracks.Simulator.GeneratedApplication.cpp.o: include/Uno.Net.IPAddress.h
obj/Outracks.Simulator.GeneratedApplication.cpp.o: include/Uno.Net.IPEndPoint.h
obj/Outracks.Simulator.GeneratedApplication.cpp.o: include/Uno.String.h
obj/Outracks.Simulator.GeneratedApplication.cpp.o: jni/Outracks.Simulator.GeneratedApplication.cpp | obj
	echo Outracks.Simulator.GeneratedApplication.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Outracks.Simulator.GeneratedApplication.cpp.o -c jni/Outracks.Simulator.GeneratedApplication.cpp

obj/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Bytecode.Lambda.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Bytecode.TypeName.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Closure.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.ImmutableList-1.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.InvalidDataException.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.List.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.NonExhaustiveMatch.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.DebugLog.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.Error.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.ExceptionInfo.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.Execute.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.MessageFromClient.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.MessageToClient.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.RegisterName.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.Reify.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.SetSelection.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.UnhandledException.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Action-1.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Action-2.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Bool.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Char.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Exception.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Func-2.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.IO.BinaryReader.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.IO.BinaryWriter.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.String.h
obj/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Type.h
obj/Outracks.Simulator.Protocol.g.cpp.o: jni/Outracks.Simulator.Protocol.g.cpp | obj
	echo Outracks.Simulator.Protocol.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Outracks.Simulator.Protocol.g.cpp.o -c jni/Outracks.Simulator.Protocol.g.cpp

obj/Outracks.Simulator.Reflection.g.cpp.o: include/Outracks.Simulator.Bytecode.Parameter.h
obj/Outracks.Simulator.Reflection.g.cpp.o: include/Outracks.Simulator.Bytecode.Signature.h
obj/Outracks.Simulator.Reflection.g.cpp.o: include/Outracks.Simulator.Bytecode.TypeMemberName.h
obj/Outracks.Simulator.Reflection.g.cpp.o: include/Outracks.Simulator.Bytecode.TypeName.h
obj/Outracks.Simulator.Reflection.g.cpp.o: include/Outracks.Simulator.ImmutableList-1.h
obj/Outracks.Simulator.Reflection.g.cpp.o: include/Outracks.Simulator.Reflection.DelegateReflection.h
obj/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Action-3.h
obj/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Bool.h
obj/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
obj/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Func-2.h
obj/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Func-3.h
obj/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Func-4.h
obj/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Func-5.h
obj/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.String.h
obj/Outracks.Simulator.Reflection.g.cpp.o: jni/Outracks.Simulator.Reflection.g.cpp | obj
	echo Outracks.Simulator.Reflection.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Outracks.Simulator.Reflection.g.cpp.o -c jni/Outracks.Simulator.Reflection.g.cpp

obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Bytecode.Parameter.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Bytecode.Signature.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Bytecode.TypeMemberName.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Bytecode.TypeName.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.ImmutableList-1.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.CppEvent.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.CppProperty.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.IEvent.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.IProperty.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.ITypeMap.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.NativeReflection.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.Property-1.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.ReflectionCache.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.ReflectionExtensions.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.ReflectionHelpers.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.SimpleTypeMap.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.TryInvokeExtension.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Runtime.MemberNotFound.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Runtime.TypeNotFound.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Runtime.UnambiguousMethodNotFound.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.ArgumentNullException.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Bool.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Byte.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Byte2.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Byte4.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Char.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Collections.List-1.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Delegate.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Double.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Enum.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Exception.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float2.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float2x2.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float3.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float3x3.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float4.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float4x4.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Func-2.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Graphics.Texture2D.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Graphics.TextureCube.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Int.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Int2.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Int3.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Int4.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.InvalidOperationException.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Long.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Object.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Reflection.CppField.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Reflection.CppFunction.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Reflection.CppReflection.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Reflection.IField.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Reflection.IFunction.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.SByte.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.SByte2.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.SByte4.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Short.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Short2.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Short4.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.String.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Type.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.UInt.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.ULong.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.UShort.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.UShort2.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.UShort4.h
obj/Outracks.Simulator.Reflection.Native.g.cpp.o: jni/Outracks.Simulator.Reflection.Native.g.cpp | obj
	echo Outracks.Simulator.Reflection.Native.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Outracks.Simulator.Reflection.Native.g.cpp.o -c jni/Outracks.Simulator.Reflection.Native.g.cpp

obj/Outracks.Simulator.Runtime.g.cpp.o: include/_root.HashableWeakReference.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/_root.WeakDictionary-2.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.AddEventHandler.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.BindVariable.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.BlobLiteral.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.BooleanLiteral.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.CallDynamicMethod.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.CallLambda.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.CallStaticMethod.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.EnumLiteral.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Expression.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Instantiate.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.IsType.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Lambda.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Literal.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.LogicalOr.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.MethodGroup.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.NumberLiteral.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.NumberType.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Optional.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Optional-1.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Parameter.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.ReadProperty.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.ReadStaticField.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.ReadVariable.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.RemoveEventHandler.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Return.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Signature.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Statement.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.StaticMemberName.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.StringLiteral.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.TypeMemberName.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.TypeName.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Variable.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.WriteProperty.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Context.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.ImmutableList-1.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.Environment.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.IReflection.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.LambdaClosure.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.LazyProperty-1.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.LazyPropertyStorage-1.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.MemberNotFound.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.ObjectPropertyRegistry.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.ObjectTagRegistry.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.ScopeClosure.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.Selection.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.TypeNotFound.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.UnambiguousMethodNotFound.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.VariableNotBound.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.VirtualMachine.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-1.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-2.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-3.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.ArgumentException.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Bool.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Byte.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Collections.List-1.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Delegate.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Diagnostics.Debug.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Double.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Exception.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Float.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-1.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-2.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-3.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-4.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Int.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Object.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.SByte.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Short.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.String.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.UInt.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.UShort.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
obj/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.WeakReference-1.h
obj/Outracks.Simulator.Runtime.g.cpp.o: jni/Outracks.Simulator.Runtime.g.cpp | obj
	echo Outracks.Simulator.Runtime.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Outracks.Simulator.Runtime.g.cpp.o -c jni/Outracks.Simulator.Runtime.g.cpp

obj/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp.o: include/_root.WeakDictionary-2.h
obj/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp.o: include/Outracks.Simulator.Bytecode.TypeName.h
obj/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp.o: include/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.h
obj/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp.o: include/Uno.Bool.h
obj/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp.o: include/Uno.String.h
obj/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp.o: jni/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp | obj
	echo Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp.o -c jni/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp

obj/Outracks.Simulator.Runtime.UxFactory.cpp.o: include/Outracks.Simulator.Runtime.UxFactory.h
obj/Outracks.Simulator.Runtime.UxFactory.cpp.o: include/Uno.Func-1.h
obj/Outracks.Simulator.Runtime.UxFactory.cpp.o: jni/Outracks.Simulator.Runtime.UxFactory.cpp | obj
	echo Outracks.Simulator.Runtime.UxFactory.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Outracks.Simulator.Runtime.UxFactory.cpp.o -c jni/Outracks.Simulator.Runtime.UxFactory.cpp

obj/Outracks.Simulator.Runtime.UxProperty-1.cpp.o: include/Outracks.Simulator.Runtime.UxProperty-1.h
obj/Outracks.Simulator.Runtime.UxProperty-1.cpp.o: include/Uno.Action-1.h
obj/Outracks.Simulator.Runtime.UxProperty-1.cpp.o: include/Uno.Action-2.h
obj/Outracks.Simulator.Runtime.UxProperty-1.cpp.o: include/Uno.Bool.h
obj/Outracks.Simulator.Runtime.UxProperty-1.cpp.o: include/Uno.Delegate.h
obj/Outracks.Simulator.Runtime.UxProperty-1.cpp.o: include/Uno.Func-1.h
obj/Outracks.Simulator.Runtime.UxProperty-1.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
obj/Outracks.Simulator.Runtime.UxProperty-1.cpp.o: jni/Outracks.Simulator.Runtime.UxProperty-1.cpp | obj
	echo Outracks.Simulator.Runtime.UxProperty-1.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Outracks.Simulator.Runtime.UxProperty-1.cpp.o -c jni/Outracks.Simulator.Runtime.UxProperty-1.cpp

obj/Outracks.Simulator.Runtime.UxTemplate.cpp.o: include/Outracks.Simulator.Runtime.UxTemplate.h
obj/Outracks.Simulator.Runtime.UxTemplate.cpp.o: include/Uno.Bool.h
obj/Outracks.Simulator.Runtime.UxTemplate.cpp.o: include/Uno.Func-2.h
obj/Outracks.Simulator.Runtime.UxTemplate.cpp.o: jni/Outracks.Simulator.Runtime.UxTemplate.cpp | obj
	echo Outracks.Simulator.Runtime.UxTemplate.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Outracks.Simulator.Runtime.UxTemplate.cpp.o -c jni/Outracks.Simulator.Runtime.UxTemplate.cpp

obj/Outracks.UnoCore.Utilities.g.cpp.o: include/Outracks.UnoCore.Utilities.VerySimpleEventQueue.h
obj/Outracks.UnoCore.Utilities.g.cpp.o: include/Uno.Action.h
obj/Outracks.UnoCore.Utilities.g.cpp.o: include/Uno.Bool.h
obj/Outracks.UnoCore.Utilities.g.cpp.o: include/Uno.Delegate.h
obj/Outracks.UnoCore.Utilities.g.cpp.o: jni/Outracks.UnoCore.Utilities.g.cpp | obj
	echo Outracks.UnoCore.Utilities.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Outracks.UnoCore.Utilities.g.cpp.o -c jni/Outracks.UnoCore.Utilities.g.cpp

obj/Source/ActivityAndLifecycle/AApplication.cpp.o: jni/Source/ActivityAndLifecycle/AApplication.cpp | obj/Source/ActivityAndLifecycle
	echo Source/ActivityAndLifecycle/AApplication.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Source/ActivityAndLifecycle/AApplication.cpp.o -c jni/Source/ActivityAndLifecycle/AApplication.cpp

obj/Source/ActivityAndLifecycle/EntryPoints.cpp.o: jni/Source/ActivityAndLifecycle/EntryPoints.cpp | obj/Source/ActivityAndLifecycle
	echo Source/ActivityAndLifecycle/EntryPoints.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Source/ActivityAndLifecycle/EntryPoints.cpp.o -c jni/Source/ActivityAndLifecycle/EntryPoints.cpp

obj/Source/ActivityAndLifecycle/Platform2.cpp.o: include/Uno/Platform2.h
obj/Source/ActivityAndLifecycle/Platform2.cpp.o: jni/Source/ActivityAndLifecycle/Platform2.cpp | obj/Source/ActivityAndLifecycle
	echo Source/ActivityAndLifecycle/Platform2.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Source/ActivityAndLifecycle/Platform2.cpp.o -c jni/Source/ActivityAndLifecycle/Platform2.cpp

obj/Source/Graphics/GLHelper.cpp.o: jni/Source/Graphics/GLHelper.cpp | obj/Source/Graphics
	echo Source/Graphics/GLHelper.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Source/Graphics/GLHelper.cpp.o -c jni/Source/Graphics/GLHelper.cpp

obj/Source/pugixml.cpp.o: jni/Source/pugixml.cpp | obj/Source
	echo Source/pugixml.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Source/pugixml.cpp.o -c jni/Source/pugixml.cpp

obj/Uno.Collections.g.cpp.o: include/Uno.Action-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.ArgumentNullException.h
obj/Uno.Collections.g.cpp.o: include/Uno.Array.h
obj/Uno.Collections.g.cpp.o: include/Uno.Bool.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.ConcurrentCollection-1.DeferLockImpl.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.ConcurrentCollection-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.ConcurrentCollection-1.ModItem.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.Bucket.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.BucketState.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.KeyCollection.Enumerator.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.KeyCollection.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.EmptyEnumerable-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.EmptyEnumerator-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.EnumerableExtensions.LinkedList-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.HashSet-1.Enumerator.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.HashSet-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.IDictionary-2.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.IListExtensions.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.LinkedList-1.Enumerator.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.LinkedList-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.LinkedListNode-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.List-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.ObservableList-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.OrderByCompare-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.Queue-1.Enumerator.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.Queue-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.ReadOnlyCollection-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.SelectEnumerable-2.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.SelectEnumerator-2.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.Stack-1.Enumerator.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.Stack-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.UnionEnumerable-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.UnionEnumerator-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.WhereEnumerable-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Collections.WhereEnumerator-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Comparison-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Delegate.h
obj/Uno.Collections.g.cpp.o: include/Uno.Exception.h
obj/Uno.Collections.g.cpp.o: include/Uno.Func-2.h
obj/Uno.Collections.g.cpp.o: include/Uno.Func-3.h
obj/Uno.Collections.g.cpp.o: include/Uno.Generic.h
obj/Uno.Collections.g.cpp.o: include/Uno.IDisposable.h
obj/Uno.Collections.g.cpp.o: include/Uno.IndexOutOfRangeException.h
obj/Uno.Collections.g.cpp.o: include/Uno.Int.h
obj/Uno.Collections.g.cpp.o: include/Uno.InvalidOperationException.h
obj/Uno.Collections.g.cpp.o: include/Uno.Math.h
obj/Uno.Collections.g.cpp.o: include/Uno.Object.h
obj/Uno.Collections.g.cpp.o: include/Uno.Predicate-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
obj/Uno.Collections.g.cpp.o: include/Uno.String.h
obj/Uno.Collections.g.cpp.o: jni/Uno.Collections.g.cpp | obj
	echo Uno.Collections.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Collections.g.cpp.o -c jni/Uno.Collections.g.cpp

obj/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.DontCopyStructAttribute.h
obj/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.DontExportAttribute.h
obj/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.OptionalAttribute.h
obj/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.StaticAttribute.h
obj/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.TargetSpecificImplementationAttribute.h
obj/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.TargetSpecificTypeAttribute.h
obj/Uno.Compiler.ExportTargetInterop.g.cpp.o: jni/Uno.Compiler.ExportTargetInterop.g.cpp | obj
	echo Uno.Compiler.ExportTargetInterop.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Compiler.ExportTargetInterop.g.cpp.o -c jni/Uno.Compiler.ExportTargetInterop.g.cpp

obj/Uno.Compiler.g.cpp.o: include/Uno.Compiler.CallerFilePathAttribute.h
obj/Uno.Compiler.g.cpp.o: include/Uno.Compiler.CallerLineNumberAttribute.h
obj/Uno.Compiler.g.cpp.o: include/Uno.Compiler.CallerMemberNameAttribute.h
obj/Uno.Compiler.g.cpp.o: include/Uno.Compiler.HideFromCodeCompleterAttribute.h
obj/Uno.Compiler.g.cpp.o: include/Uno.Compiler.IgnoreMainClassAttribute.h
obj/Uno.Compiler.g.cpp.o: include/Uno.Compiler.MainClassAttribute.h
obj/Uno.Compiler.g.cpp.o: include/Uno.Compiler.UxGeneratedAttribute.h
obj/Uno.Compiler.g.cpp.o: jni/Uno.Compiler.g.cpp | obj
	echo Uno.Compiler.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Compiler.g.cpp.o -c jni/Uno.Compiler.g.cpp

obj/Uno.Compiler.ImportServices.g.cpp.o: include/Uno.Compiler.ImportServices.FilenameAttribute.h
obj/Uno.Compiler.ImportServices.g.cpp.o: jni/Uno.Compiler.ImportServices.g.cpp | obj
	echo Uno.Compiler.ImportServices.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Compiler.ImportServices.g.cpp.o -c jni/Uno.Compiler.ImportServices.g.cpp

obj/Uno.Compiler.ShaderGenerator.g.cpp.o: include/Uno.Compiler.ShaderGenerator.ShaderStageInlineAttribute.h
obj/Uno.Compiler.ShaderGenerator.g.cpp.o: jni/Uno.Compiler.ShaderGenerator.g.cpp | obj
	echo Uno.Compiler.ShaderGenerator.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Compiler.ShaderGenerator.g.cpp.o -c jni/Uno.Compiler.ShaderGenerator.g.cpp

obj/Uno.Content.Fonts.g.cpp.o: include/_root.UnoCore_bundle.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Application.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.ArgumentNullException.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Bool.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Buffer.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.BundleFile.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Byte.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Char.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.BitmapFont.CharPair.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.BitmapFont.GlyphInfo.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.BitmapFont.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.CppFontFace.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.CppFontFaceHandle.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.DefaultTextTransform.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.FontFace.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.FontFaceHelpers.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.RenderedGlyph.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.SdfFontShader.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.SpriteFontShader.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.TextRenderer.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.TextShader.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.TextShaderData.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.TextTransform.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Images.Bitmap.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Double.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Exception.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Float.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Float2.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Float3.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Float4.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Float4x4.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.BlendOperand.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.BufferUsage.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.Format.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.FormatHelpers.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.GraphicsContext.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.IndexType.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.PolygonFace.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.SamplerState.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.Texture2D.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.VertexAttributeInfo.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Int.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Int2.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Math.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Matrix.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Recti.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferReader.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.String.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.UInt.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.UShort.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno.UShort2.h
obj/Uno.Content.Fonts.g.cpp.o: include/Uno/XliInterop.h
obj/Uno.Content.Fonts.g.cpp.o: jni/Uno.Content.Fonts.g.cpp | obj
	echo Uno.Content.Fonts.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Content.Fonts.g.cpp.o -c jni/Uno.Content.Fonts.g.cpp

obj/Uno.Content.Images.g.cpp.o: include/Uno.Bool.h
obj/Uno.Content.Images.g.cpp.o: include/Uno.Buffer.h
obj/Uno.Content.Images.g.cpp.o: include/Uno.Content.Images.Bitmap.h
obj/Uno.Content.Images.g.cpp.o: include/Uno.Exception.h
obj/Uno.Content.Images.g.cpp.o: include/Uno.Graphics.Format.h
obj/Uno.Content.Images.g.cpp.o: include/Uno.Graphics.FormatHelpers.h
obj/Uno.Content.Images.g.cpp.o: include/Uno.Int.h
obj/Uno.Content.Images.g.cpp.o: include/Uno.String.h
obj/Uno.Content.Images.g.cpp.o: jni/Uno.Content.Images.g.cpp | obj
	echo Uno.Content.Images.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Content.Images.g.cpp.o -c jni/Uno.Content.Images.g.cpp

obj/Uno.Content.Models.g.cpp.o: include/Uno.Bool.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Buffer.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Byte.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Byte4.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Collections.List-1.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.IndexArray.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.Model.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.ModelDrawable.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.ModelMaterial.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.ModelMesh.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.ModelNode.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.ModelParameter-1.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.VertexAttributeArray.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Float.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Float2.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Float3.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Float4.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Graphics.IndexType.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Graphics.IndexTypeHelpers.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Graphics.VertexAttributeTypeHelpers.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Int.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.SByte.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.SByte4.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Short.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Short2.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.Short4.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.String.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.UInt.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.UShort.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.UShort2.h
obj/Uno.Content.Models.g.cpp.o: include/Uno.UShort4.h
obj/Uno.Content.Models.g.cpp.o: jni/Uno.Content.Models.g.cpp | obj
	echo Uno.Content.Models.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Content.Models.g.cpp.o -c jni/Uno.Content.Models.g.cpp

obj/Uno.Content.Splines.g.cpp.o: include/Uno.Bool.h
obj/Uno.Content.Splines.g.cpp.o: include/Uno.Collections.List-1.h
obj/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.KeyframedSpline-2.h
obj/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.KeyframedSpline-2.Key.h
obj/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.LinearSplineFloat.h
obj/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.LinearSplineFloat2.h
obj/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.LinearSplineFloat3.h
obj/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.LinearSplineFloat4.h
obj/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.LinearSplineFloat4x4.h
obj/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.Spline-1.h
obj/Uno.Content.Splines.g.cpp.o: include/Uno.Double.h
obj/Uno.Content.Splines.g.cpp.o: include/Uno.Float.h
obj/Uno.Content.Splines.g.cpp.o: include/Uno.Int.h
obj/Uno.Content.Splines.g.cpp.o: include/Uno.Math.h
obj/Uno.Content.Splines.g.cpp.o: jni/Uno.Content.Splines.g.cpp | obj
	echo Uno.Content.Splines.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Content.Splines.g.cpp.o -c jni/Uno.Content.Splines.g.cpp

obj/Uno.Data.Xml.g.cpp.o: include/Source/pugixml.hpp
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Action.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Bool.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Char.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Collections.ICollection-1.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Collections.IEnumerator.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Collections.IListExtensions.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Collections.List-1.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.AttributeHandleConverter.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.ParseOptions.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.TargetSpecificXmlNode.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.ValidationHelper.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlAttribute.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlAttributeCollection.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlAttributeHandle.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlCharacterData.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlComment.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlDeclaration.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlDocument.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlDocumentElement.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlElement.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlEncoding.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlEncodingHelper.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlException.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlLinkedNode.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlLinkedNodeCollection.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlNode.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlNodeCollectionBase-1.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlNodeHandle.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlNodeHandleConverter.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlNodeImpl.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlNodeType.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlProcessingInstruction.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlText.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlValue.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlValueType.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Double.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Exception.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Float.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Int.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Long.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Object.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.String.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.Text.StringBuilder.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno.UInt.h
obj/Uno.Data.Xml.g.cpp.o: include/Uno/XliInterop.h
obj/Uno.Data.Xml.g.cpp.o: jni/Uno.Data.Xml.g.cpp | obj
	echo Uno.Data.Xml.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Data.Xml.g.cpp.o -c jni/Uno.Data.Xml.g.cpp

obj/Uno.Diagnostics.g.cpp.o: include/Uno.Bool.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Collections.List-1.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Delegate.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.AllocateEvent.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.AlwaysProfileAttribute.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.AssertionHandler.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.Clock.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.Debug.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.EnterEvent.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.EventType.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.ExitEvent.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.FreeEvent.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.IdMap-1.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.LogHandler.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.NeverProfileAttribute.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.Profile.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.ProfileData.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.ProfileEvent.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Double.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Int.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Long.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Object.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Runtime.Implementation.ClockImpl.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.Runtime.Implementation.DebugImpl.h
obj/Uno.Diagnostics.g.cpp.o: include/Uno.String.h
obj/Uno.Diagnostics.g.cpp.o: jni/Uno.Diagnostics.g.cpp | obj
	echo Uno.Diagnostics.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Diagnostics.g.cpp.o -c jni/Uno.Diagnostics.g.cpp

obj/Uno.g.cpp.o: include/Android.Bootstrapper.h
obj/Uno.g.cpp.o: include/Uno.Action.h
obj/Uno.g.cpp.o: include/Uno.Action-1.h
obj/Uno.g.cpp.o: include/Uno.Action-2.h
obj/Uno.g.cpp.o: include/Uno.Action-3.h
obj/Uno.g.cpp.o: include/Uno.Action-4.h
obj/Uno.g.cpp.o: include/Uno.AggregateException.h
obj/Uno.g.cpp.o: include/Uno.Application.h
obj/Uno.g.cpp.o: include/Uno.ArgumentException.h
obj/Uno.g.cpp.o: include/Uno.ArgumentNullException.h
obj/Uno.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
obj/Uno.g.cpp.o: include/Uno.Array.h
obj/Uno.g.cpp.o: include/Uno.Attribute.h
obj/Uno.g.cpp.o: include/Uno.Bool.h
obj/Uno.g.cpp.o: include/Uno.Buffer.h
obj/Uno.g.cpp.o: include/Uno.BundleFile.h
obj/Uno.g.cpp.o: include/Uno.Byte.h
obj/Uno.g.cpp.o: include/Uno.Byte2.h
obj/Uno.g.cpp.o: include/Uno.Byte4.h
obj/Uno.g.cpp.o: include/Uno.Char.h
obj/Uno.g.cpp.o: include/Uno.Collections.IList-1.h
obj/Uno.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Uno.g.cpp.o: include/Uno.Collections.List-1.h
obj/Uno.g.cpp.o: include/Uno.Collections.ReadOnlyCollection-1.h
obj/Uno.g.cpp.o: include/Uno.Color.h
obj/Uno.g.cpp.o: include/Uno.ColorHelper.h
obj/Uno.g.cpp.o: include/Uno.Comparison-1.h
obj/Uno.g.cpp.o: include/Uno.DateTime.h
obj/Uno.g.cpp.o: include/Uno.Delegate.h
obj/Uno.g.cpp.o: include/Uno.Double.h
obj/Uno.g.cpp.o: include/Uno.Enum.h
obj/Uno.g.cpp.o: include/Uno.EventArgs.h
obj/Uno.g.cpp.o: include/Uno.EventHandler.h
obj/Uno.g.cpp.o: include/Uno.EventHandler-1.h
obj/Uno.g.cpp.o: include/Uno.Exception.h
obj/Uno.g.cpp.o: include/Uno.FakeTime.h
obj/Uno.g.cpp.o: include/Uno.FlagsAttribute.h
obj/Uno.g.cpp.o: include/Uno.Float.h
obj/Uno.g.cpp.o: include/Uno.Float2.h
obj/Uno.g.cpp.o: include/Uno.Float2x2.h
obj/Uno.g.cpp.o: include/Uno.Float3.h
obj/Uno.g.cpp.o: include/Uno.Float3x3.h
obj/Uno.g.cpp.o: include/Uno.Float4.h
obj/Uno.g.cpp.o: include/Uno.Float4x4.h
obj/Uno.g.cpp.o: include/Uno.FormatException.h
obj/Uno.g.cpp.o: include/Uno.Func-1.h
obj/Uno.g.cpp.o: include/Uno.Func-2.h
obj/Uno.g.cpp.o: include/Uno.Func-3.h
obj/Uno.g.cpp.o: include/Uno.Func-4.h
obj/Uno.g.cpp.o: include/Uno.Func-5.h
obj/Uno.g.cpp.o: include/Uno.GC.h
obj/Uno.g.cpp.o: include/Uno.Generic.h
obj/Uno.g.cpp.o: include/Uno.Graphics.GraphicsContext.h
obj/Uno.g.cpp.o: include/Uno.IDisposable.h
obj/Uno.g.cpp.o: include/Uno.IndexOutOfRangeException.h
obj/Uno.g.cpp.o: include/Uno.Int.h
obj/Uno.g.cpp.o: include/Uno.Int2.h
obj/Uno.g.cpp.o: include/Uno.Int3.h
obj/Uno.g.cpp.o: include/Uno.Int4.h
obj/Uno.g.cpp.o: include/Uno.IntPtr.h
obj/Uno.g.cpp.o: include/Uno.InvalidCastException.h
obj/Uno.g.cpp.o: include/Uno.InvalidOperationException.h
obj/Uno.g.cpp.o: include/Uno.IO.CppXliStream.h
obj/Uno.g.cpp.o: include/Uno.IO.CppXliStreamHandle.h
obj/Uno.g.cpp.o: include/Uno.IO.Stream.h
obj/Uno.g.cpp.o: include/Uno.Long.h
obj/Uno.g.cpp.o: include/Uno.Math.h
obj/Uno.g.cpp.o: include/Uno.Matrix.h
obj/Uno.g.cpp.o: include/Uno.NotImplementedException.h
obj/Uno.g.cpp.o: include/Uno.NotSupportedException.h
obj/Uno.g.cpp.o: include/Uno.NullReferenceException.h
obj/Uno.g.cpp.o: include/Uno.Object.h
obj/Uno.g.cpp.o: include/Uno.ObjectDisposedException.h
obj/Uno.g.cpp.o: include/Uno.OverflowException.h
obj/Uno.g.cpp.o: include/Uno.Platform.Window.h
obj/Uno.g.cpp.o: include/Uno.Predicate-1.h
obj/Uno.g.cpp.o: include/Uno.Quaternion.h
obj/Uno.g.cpp.o: include/Uno.Rect.h
obj/Uno.g.cpp.o: include/Uno.Recti.h
obj/Uno.g.cpp.o: include/Uno.Runtime.Implementation.ArrayCopyImpl.h
obj/Uno.g.cpp.o: include/Uno.Runtime.Implementation.ArraySortImpl.h
obj/Uno.g.cpp.o: include/Uno.Runtime.Implementation.BufferImpl.h
obj/Uno.g.cpp.o: include/Uno.Runtime.Implementation.GenericEqualsImpl.h
obj/Uno.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayList-1.h
obj/Uno.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringToken.h
obj/Uno.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h
obj/Uno.g.cpp.o: include/Uno.Runtime.Implementation.TextEncodingImpl.h
obj/Uno.g.cpp.o: include/Uno.SByte.h
obj/Uno.g.cpp.o: include/Uno.SByte2.h
obj/Uno.g.cpp.o: include/Uno.SByte4.h
obj/Uno.g.cpp.o: include/Uno.Short.h
obj/Uno.g.cpp.o: include/Uno.Short2.h
obj/Uno.g.cpp.o: include/Uno.Short4.h
obj/Uno.g.cpp.o: include/Uno.String.h
obj/Uno.g.cpp.o: include/Uno.Text.StringBuilder.h
obj/Uno.g.cpp.o: include/Uno.Time.DateTimeZone.h
obj/Uno.g.cpp.o: include/Uno.Time.ZonedDateTime.h
obj/Uno.g.cpp.o: include/Uno.Type.h
obj/Uno.g.cpp.o: include/Uno.UInt.h
obj/Uno.g.cpp.o: include/Uno.ULong.h
obj/Uno.g.cpp.o: include/Uno.UShort.h
obj/Uno.g.cpp.o: include/Uno.UShort2.h
obj/Uno.g.cpp.o: include/Uno.UShort4.h
obj/Uno.g.cpp.o: include/Uno.Vector.h
obj/Uno.g.cpp.o: include/Uno.WeakReference-1.h
obj/Uno.g.cpp.o: include/Uno.WeakReferenceAttribute.h
obj/Uno.g.cpp.o: include/Uno/XliInterop.h
obj/Uno.g.cpp.o: jni/Uno.g.cpp | obj
	echo Uno.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.g.cpp.o -c jni/Uno.g.cpp

obj/Uno.Geometry.g.cpp.o: include/Uno.Bool.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Float.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Float2.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Float3.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Float4.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Float4x4.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Box.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Collision.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Collision2D.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Geometry.CubicBezier.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Frustum.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Plane.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Ray.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Sphere.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Triangle.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Triangle2D.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Vertex.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Geometry.VertexEnumerable.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Geometry.VertexEnumerator.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Int.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Math.h
obj/Uno.Geometry.g.cpp.o: include/Uno.Vector.h
obj/Uno.Geometry.g.cpp.o: jni/Uno.Geometry.g.cpp | obj
	echo Uno.Geometry.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Geometry.g.cpp.o -c jni/Uno.Geometry.g.cpp

obj/Uno.Graphics.g.cpp.o: include/OpenGL.GL.h
obj/Uno.Graphics.g.cpp.o: include/OpenGL.GLBufferHandle.h
obj/Uno.Graphics.g.cpp.o: include/OpenGL.GLBufferTarget.h
obj/Uno.Graphics.g.cpp.o: include/OpenGL.GLBufferUsage.h
obj/Uno.Graphics.g.cpp.o: include/OpenGL.GLClearBufferMask.h
obj/Uno.Graphics.g.cpp.o: include/OpenGL.GLEnableCap.h
obj/Uno.Graphics.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
obj/Uno.Graphics.g.cpp.o: include/OpenGL.GLFramebufferTarget.h
obj/Uno.Graphics.g.cpp.o: include/OpenGL.GLIntegerName.h
obj/Uno.Graphics.g.cpp.o: include/OpenGL.GLRenderbufferHandle.h
obj/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureHandle.h
obj/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureParameterName.h
obj/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureParameterValue.h
obj/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureTarget.h
obj/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureUnit.h
obj/Uno.Graphics.g.cpp.o: include/Uno.ArgumentNullException.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Bool.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Buffer.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Float.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Float4.h
obj/Uno.Graphics.g.cpp.o: include/Uno.FormatException.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.BlendEquation.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.BlendOperand.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.BufferUsage.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.CompareFunc.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.CubeFace.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.Format.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.FormatHelpers.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.Framebuffer.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.FramebufferFlags.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.GraphicsContext.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.IndexType.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.IndexTypeHelpers.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.PolygonFace.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.PolygonWinding.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.RenderTarget.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.SamplerState.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.Texture2D.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.TextureAddressMode.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.TextureCube.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.TextureFilter.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.TextureHelpers.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VertexAttributeInfo.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VertexAttributeTypeHelpers.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VideoTexture.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Int.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Int2.h
obj/Uno.Graphics.g.cpp.o: include/Uno.InvalidOperationException.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Math.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Object.h
obj/Uno.Graphics.g.cpp.o: include/Uno.ObjectDisposedException.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Runtime.Implementation.GraphicsContextHandle.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Runtime.Implementation.GraphicsContextImpl.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers.h
obj/Uno.Graphics.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop.h
obj/Uno.Graphics.g.cpp.o: include/Uno.String.h
obj/Uno.Graphics.g.cpp.o: include/Uno/XliInterop.h
obj/Uno.Graphics.g.cpp.o: jni/Uno.Graphics.g.cpp | obj
	echo Uno.Graphics.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Graphics.g.cpp.o -c jni/Uno.Graphics.g.cpp

obj/Uno.IO.g.cpp.o: include/Uno.ArgumentException.h
obj/Uno.IO.g.cpp.o: include/Uno.ArgumentNullException.h
obj/Uno.IO.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
obj/Uno.IO.g.cpp.o: include/Uno.Array.h
obj/Uno.IO.g.cpp.o: include/Uno.Bool.h
obj/Uno.IO.g.cpp.o: include/Uno.Byte.h
obj/Uno.IO.g.cpp.o: include/Uno.Char.h
obj/Uno.IO.g.cpp.o: include/Uno.Collections.List-1.h
obj/Uno.IO.g.cpp.o: include/Uno.Double.h
obj/Uno.IO.g.cpp.o: include/Uno.Float.h
obj/Uno.IO.g.cpp.o: include/Uno.FormatException.h
obj/Uno.IO.g.cpp.o: include/Uno.GC.h
obj/Uno.IO.g.cpp.o: include/Uno.Int.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.BinaryReader.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.BinaryWriter.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.CppXliStream.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.CppXliStreamHandle.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.Directory.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.EndOfStreamException.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.File.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.FileMode.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemImpl.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.IOException.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.MemoryStream.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.Path.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.SeekOrigin.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.Stream.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.StreamReader.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.StreamWriter.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.StringWriter.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.TextReader.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.TextWriter.h
obj/Uno.IO.g.cpp.o: include/Uno.IO.UserDirectory.h
obj/Uno.IO.g.cpp.o: include/Uno.Long.h
obj/Uno.IO.g.cpp.o: include/Uno.Math.h
obj/Uno.IO.g.cpp.o: include/Uno.NotImplementedException.h
obj/Uno.IO.g.cpp.o: include/Uno.NotSupportedException.h
obj/Uno.IO.g.cpp.o: include/Uno.Object.h
obj/Uno.IO.g.cpp.o: include/Uno.ObjectDisposedException.h
obj/Uno.IO.g.cpp.o: include/Uno.Runtime.Implementation.BufferImpl.h
obj/Uno.IO.g.cpp.o: include/Uno.Runtime.Implementation.TextEncodingImpl.h
obj/Uno.IO.g.cpp.o: include/Uno.String.h
obj/Uno.IO.g.cpp.o: include/Uno.Text.Decoder.h
obj/Uno.IO.g.cpp.o: include/Uno.Text.Encoding.h
obj/Uno.IO.g.cpp.o: include/Uno.Text.StringBuilder.h
obj/Uno.IO.g.cpp.o: include/Uno.UInt.h
obj/Uno.IO.g.cpp.o: include/Uno.ULong.h
obj/Uno.IO.g.cpp.o: include/Uno/XliInterop.h
obj/Uno.IO.g.cpp.o: jni/Uno.IO.g.cpp | obj
	echo Uno.IO.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.IO.g.cpp.o -c jni/Uno.IO.g.cpp

obj/Uno.Net.g.cpp.o: include/Uno.Bool.h
obj/Uno.Net.g.cpp.o: include/Uno.Buffer.h
obj/Uno.Net.g.cpp.o: include/Uno.Byte.h
obj/Uno.Net.g.cpp.o: include/Uno.Char.h
obj/Uno.Net.g.cpp.o: include/Uno.Exception.h
obj/Uno.Net.g.cpp.o: include/Uno.FormatException.h
obj/Uno.Net.g.cpp.o: include/Uno.Int.h
obj/Uno.Net.g.cpp.o: include/Uno.Net.EndPoint.h
obj/Uno.Net.g.cpp.o: include/Uno.Net.IPAddress.h
obj/Uno.Net.g.cpp.o: include/Uno.Net.IPEndPoint.h
obj/Uno.Net.g.cpp.o: include/Uno.Net.Sockets.AddressFamily.h
obj/Uno.Net.g.cpp.o: include/Uno.Object.h
obj/Uno.Net.g.cpp.o: include/Uno.String.h
obj/Uno.Net.g.cpp.o: include/Uno.UInt.h
obj/Uno.Net.g.cpp.o: jni/Uno.Net.g.cpp | obj
	echo Uno.Net.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Net.g.cpp.o -c jni/Uno.Net.g.cpp

obj/Uno.Net.Http.g.cpp.o: include/Android.Base.JNI.h
obj/Uno.Net.Http.g.cpp.o: include/Android.Base.Wrappers.IJWrapper.h
obj/Uno.Net.Http.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Uno.Net.Http.g.cpp.o: include/Android.com.fuse.ExperimentalHttp.HttpRequest.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Action.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Action-1.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Action-2.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Action-4.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.ArgumentNullException.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Bool.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Byte.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Char.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Collections.IDictionary-2.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Collections.List-1.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Delegate.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Diagnostics.Debug.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Exception.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.GC.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Int.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Long.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.AbsolutePathParser.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HashParser.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HostInfo.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HostInfoParser.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpDefaultDispatcher.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageCache.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandler.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandler.StaticData.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure-1.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.ProgressClosure.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpRequestState.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpStatusReasonPhrase.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.Implementation.AndroidHttpRequest.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.Implementation.IHttpRequest.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.InvalidResponseTypeException.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.InvalidStateException.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.QueryParser.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.SchemeParser.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.SchemeParserResult.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.Uri.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.UriFormatException.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.UriScheme.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.UriSchemeType.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.UserInfoParser.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.NotSupportedException.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.ObjectDisposedException.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Platform2.Application.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Platform2.ApplicationState.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Platform2.ApplicationStateTransitionHandler.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.String.h
obj/Uno.Net.Http.g.cpp.o: include/Uno.Threading.IDispatcher.h
obj/Uno.Net.Http.g.cpp.o: jni/Uno.Net.Http.g.cpp | obj
	echo Uno.Net.Http.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Net.Http.g.cpp.o -c jni/Uno.Net.Http.g.cpp

obj/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.JNI.h
obj/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Types.Arrays.h
obj/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Types.String.h
obj/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
obj/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Array.h
obj/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Bool.h
obj/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Byte.h
obj/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
obj/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Collections.List-1.h
obj/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Int.h
obj/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Long.h
obj/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.h
obj/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
obj/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.Implementation.AndroidHttpRequest.h
obj/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.Implementation.IHttpRequest.h
obj/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.String.h
obj/Uno.Net.Http.Implementation.g.cpp.o: jni/Uno.Net.Http.Implementation.g.cpp | obj
	echo Uno.Net.Http.Implementation.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Net.Http.Implementation.g.cpp.o -c jni/Uno.Net.Http.Implementation.g.cpp

obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Socket.android.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.ArgumentException.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Bool.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Byte.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Exception.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Int.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.EndPoint.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.IPAddress.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.IPEndPoint.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.Sockets.AddressFamily.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.Sockets.Berkeley.bsd_socket.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.Sockets.Berkeley.Socket.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.Sockets.ProtocolType.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.Sockets.SelectMode.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.Sockets.SocketException.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.Sockets.SocketShutdown.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.Sockets.SocketType.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Object.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Short.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.String.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.UInt.h
obj/Uno.Net.Sockets.Berkeley.g.cpp.o: jni/Uno.Net.Sockets.Berkeley.g.cpp | obj
	echo Uno.Net.Sockets.Berkeley.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Net.Sockets.Berkeley.g.cpp.o -c jni/Uno.Net.Sockets.Berkeley.g.cpp

obj/Uno.Net.Sockets.g.cpp.o: include/Uno.Bool.h
obj/Uno.Net.Sockets.g.cpp.o: include/Uno.Byte.h
obj/Uno.Net.Sockets.g.cpp.o: include/Uno.Exception.h
obj/Uno.Net.Sockets.g.cpp.o: include/Uno.Int.h
obj/Uno.Net.Sockets.g.cpp.o: include/Uno.IO.SeekOrigin.h
obj/Uno.Net.Sockets.g.cpp.o: include/Uno.Long.h
obj/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.EndPoint.h
obj/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.AddressFamily.h
obj/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.Berkeley.Socket.h
obj/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.NetworkStream.h
obj/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.ProtocolType.h
obj/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.SelectMode.h
obj/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.Socket.h
obj/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.SocketException.h
obj/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.SocketShutdown.h
obj/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.SocketType.h
obj/Uno.Net.Sockets.g.cpp.o: include/Uno.String.h
obj/Uno.Net.Sockets.g.cpp.o: jni/Uno.Net.Sockets.g.cpp | obj
	echo Uno.Net.Sockets.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Net.Sockets.g.cpp.o -c jni/Uno.Net.Sockets.g.cpp

obj/Uno.Platform.g.cpp.o: include/Android.Base.JNI.h
obj/Uno.Platform.g.cpp.o: include/Android.Base.Primitives.ujobject.h
obj/Uno.Platform.g.cpp.o: include/Uno.Application.h
obj/Uno.Platform.g.cpp.o: include/Uno.Bool.h
obj/Uno.Platform.g.cpp.o: include/Uno.Delegate.h
obj/Uno.Platform.g.cpp.o: include/Uno.Double.h
obj/Uno.Platform.g.cpp.o: include/Uno.EventArgs.h
obj/Uno.Platform.g.cpp.o: include/Uno.EventHandler.h
obj/Uno.Platform.g.cpp.o: include/Uno.EventHandler-1.h
obj/Uno.Platform.g.cpp.o: include/Uno.Int.h
obj/Uno.Platform.g.cpp.o: include/Uno.Int2.h
obj/Uno.Platform.g.cpp.o: include/Uno.Object.h
obj/Uno.Platform.g.cpp.o: include/Uno.Platform.ClosingEventArgs.h
obj/Uno.Platform.g.cpp.o: include/Uno.Platform.EventModifiers.h
obj/Uno.Platform.g.cpp.o: include/Uno.Platform.FrameChangedEventArgs.h
obj/Uno.Platform.g.cpp.o: include/Uno.Platform.Key.h
obj/Uno.Platform.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
obj/Uno.Platform.g.cpp.o: include/Uno.Platform.MouseButton.h
obj/Uno.Platform.g.cpp.o: include/Uno.Platform.PointerCursor.h
obj/Uno.Platform.g.cpp.o: include/Uno.Platform.PointerEventArgs.h
obj/Uno.Platform.g.cpp.o: include/Uno.Platform.PointerType.h
obj/Uno.Platform.g.cpp.o: include/Uno.Platform.SystemUI.h
obj/Uno.Platform.g.cpp.o: include/Uno.Platform.SystemUIID.h
obj/Uno.Platform.g.cpp.o: include/Uno.Platform.SystemUIResizeReason.h
obj/Uno.Platform.g.cpp.o: include/Uno.Platform.SystemUIWillResizeEventArgs.h
obj/Uno.Platform.g.cpp.o: include/Uno.Platform.TextInputEventArgs.h
obj/Uno.Platform.g.cpp.o: include/Uno.Platform.TextInputHint.h
obj/Uno.Platform.g.cpp.o: include/Uno.Platform.TimerEventArgs.h
obj/Uno.Platform.g.cpp.o: include/Uno.Platform.ViewNativeHandle.h
obj/Uno.Platform.g.cpp.o: include/Uno.Platform.WheelDeltaMode.h
obj/Uno.Platform.g.cpp.o: include/Uno.Platform.Window.h
obj/Uno.Platform.g.cpp.o: include/Uno.Rect.h
obj/Uno.Platform.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowHandle.h
obj/Uno.Platform.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowImpl.h
obj/Uno.Platform.g.cpp.o: include/Uno.String.h
obj/Uno.Platform.g.cpp.o: jni/Uno.Platform.g.cpp | obj
	echo Uno.Platform.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Platform.g.cpp.o -c jni/Uno.Platform.g.cpp

obj/Uno.Platform.iOS.g.cpp.o: include/Uno.Platform.iOS.StatusBarAnimation.h
obj/Uno.Platform.iOS.g.cpp.o: include/Uno.Platform.iOS.StatusBarStyle.h
obj/Uno.Platform.iOS.g.cpp.o: jni/Uno.Platform.iOS.g.cpp | obj
	echo Uno.Platform.iOS.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Platform.iOS.g.cpp.o -c jni/Uno.Platform.iOS.g.cpp

obj/Uno.Platform2.g.cpp.o: include/Uno.Application.h
obj/Uno.Platform2.g.cpp.o: include/Uno.Bool.h
obj/Uno.Platform2.g.cpp.o: include/Uno.Delegate.h
obj/Uno.Platform2.g.cpp.o: include/Uno.Diagnostics.Debug.h
obj/Uno.Platform2.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
obj/Uno.Platform2.g.cpp.o: include/Uno.EventArgs.h
obj/Uno.Platform2.g.cpp.o: include/Uno.EventHandler.h
obj/Uno.Platform2.g.cpp.o: include/Uno.EventHandler-1.h
obj/Uno.Platform2.g.cpp.o: include/Uno.Float.h
obj/Uno.Platform2.g.cpp.o: include/Uno.Graphics.GraphicsContext.h
obj/Uno.Platform2.g.cpp.o: include/Uno.Int.h
obj/Uno.Platform2.g.cpp.o: include/Uno.Object.h
obj/Uno.Platform2.g.cpp.o: include/Uno.Platform.EventModifiers.h
obj/Uno.Platform2.g.cpp.o: include/Uno.Platform.Key.h
obj/Uno.Platform2.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
obj/Uno.Platform2.g.cpp.o: include/Uno.Platform.TimerEventArgs.h
obj/Uno.Platform2.g.cpp.o: include/Uno.Platform.ViewNativeHandle.h
obj/Uno.Platform2.g.cpp.o: include/Uno.Platform2.Application.h
obj/Uno.Platform2.g.cpp.o: include/Uno.Platform2.ApplicationState.h
obj/Uno.Platform2.g.cpp.o: include/Uno.Platform2.ApplicationStateTransitionHandler.h
obj/Uno.Platform2.g.cpp.o: include/Uno.Platform2.Display.h
obj/Uno.Platform2.g.cpp.o: include/Uno.Platform2.Display.PrivateState.h
obj/Uno.Platform2.g.cpp.o: include/Uno.String.h
obj/Uno.Platform2.g.cpp.o: include/Uno.UInt.h
obj/Uno.Platform2.g.cpp.o: jni/Uno.Platform2.g.cpp | obj
	echo Uno.Platform2.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Platform2.g.cpp.o -c jni/Uno.Platform2.g.cpp

obj/Uno.Platform2.Implementation.g.cpp.o: include/Uno.Platform2.Implementation.InvokedFromNativeCodeAttribute.h
obj/Uno.Platform2.Implementation.g.cpp.o: jni/Uno.Platform2.Implementation.g.cpp | obj
	echo Uno.Platform2.Implementation.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Platform2.Implementation.g.cpp.o -c jni/Uno.Platform2.Implementation.g.cpp

obj/Uno.Reflection.g.cpp.o: include/Uno.Bool.h
obj/Uno.Reflection.g.cpp.o: include/Uno.Delegate.h
obj/Uno.Reflection.g.cpp.o: include/Uno.Reflection.CppField.h
obj/Uno.Reflection.g.cpp.o: include/Uno.Reflection.CppFunction.h
obj/Uno.Reflection.g.cpp.o: include/Uno.Reflection.CppReflection.h
obj/Uno.Reflection.g.cpp.o: include/Uno.Reflection.IField.h
obj/Uno.Reflection.g.cpp.o: include/Uno.Reflection.IFunction.h
obj/Uno.Reflection.g.cpp.o: include/Uno.String.h
obj/Uno.Reflection.g.cpp.o: include/Uno.Type.h
obj/Uno.Reflection.g.cpp.o: jni/Uno.Reflection.g.cpp | obj
	echo Uno.Reflection.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Reflection.g.cpp.o -c jni/Uno.Reflection.g.cpp

obj/Uno.Runtime.Implementation.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.ArgumentException.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.ArgumentNullException.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Bool.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Byte.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Char.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Collections.List-1.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Comparison-1.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Delegate.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Double.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.EventHandler-1.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Float.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Float2.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Int.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Int2.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.InvalidOperationException.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Long.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Object.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform.Key.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform.MouseButton.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform.PointerCursor.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform.SystemUI.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform.SystemUIResizeReason.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform.SystemUIWillResizeEventArgs.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform2.Application.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform2.Display.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Rect.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Recti.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.ArrayCopyImpl.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.ArraySortImpl.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.BufferImpl.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.ClockImpl.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.DebugImpl.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.GenericEqualsImpl.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.GraphicsContextHandle.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.GraphicsContextImpl.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowHandle.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowImpl.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.TextEncodingImpl.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Short.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.String.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.UInt.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno.UShort.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno/Base64.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno/Support.h
obj/Uno.Runtime.Implementation.g.cpp.o: include/Uno/XliInterop.h
obj/Uno.Runtime.Implementation.g.cpp.o: jni/Uno.Runtime.Implementation.g.cpp | obj
	echo Uno.Runtime.Implementation.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Runtime.Implementation.g.cpp.o -c jni/Uno.Runtime.Implementation.g.cpp

obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Application.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Bool.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Buffer.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Byte.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Char.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Collections.List-1.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Double.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.EventArgs.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Exception.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Float.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Float2.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Float3.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Float4.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.FormatException.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Graphics.GraphicsContext.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Graphics.RenderTarget.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Int.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Long.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Math.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.NotSupportedException.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Object.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.EventModifiers.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.Key.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.MouseButton.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.PointerEventArgs.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.PointerType.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.TextInputEventArgs.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.WheelDeltaMode.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.Window.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.ClockImpl.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerator-1.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayList-1.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BootstrapHints.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.Bootstrapper.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferReader.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatSpecifier.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringItem.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringLiteral.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringToken.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.NumericFormatter.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.WindowHelpers.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowHandle.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowImpl.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.TextEncodingImpl.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.SByte.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Short.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.String.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Text.StringBuilder.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.UInt.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.ULong.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.UShort.h
obj/Uno.Runtime.Implementation.Internal.g.cpp.o: jni/Uno.Runtime.Implementation.Internal.g.cpp | obj
	echo Uno.Runtime.Implementation.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Runtime.Implementation.Internal.g.cpp.o -c jni/Uno.Runtime.Implementation.Internal.g.cpp

obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GL.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBlendEquation.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBlendingFactor.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBufferHandle.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBufferTarget.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBufferUsage.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLCullFaceMode.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLDataType.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLDepthFunction.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLEnableCap.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLError.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferAttachment.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferStatus.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferTarget.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFrontFaceDirection.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLIndexType.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLPixelFormat.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLPixelType.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLPrimitiveType.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLProgramHandle.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLProgramParameter.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferHandle.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferStorage.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferTarget.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLShaderHandle.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLShaderParameter.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLShaderType.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureHandle.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterName.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterValue.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureTarget.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureUnit.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Bool.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Buffer.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Collections.List-1.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Diagnostics.Debug.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Exception.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float2.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float2x2.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float3.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float4.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float4x4.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.BlendEquation.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.BlendOperand.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.BufferUsage.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.CompareFunc.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.Format.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.IndexType.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.PolygonFace.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.PolygonWinding.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.RenderTarget.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.SamplerState.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.Texture2D.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.TextureAddressMode.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.TextureFilter.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.VideoTexture.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Int.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Int2.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.InvalidOperationException.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Object.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLException.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.String.h
obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: jni/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp | obj
	echo Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o -c jni/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp

obj/Uno.Text.g.cpp.o: include/Uno.ArgumentException.h
obj/Uno.Text.g.cpp.o: include/Uno.ArgumentNullException.h
obj/Uno.Text.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
obj/Uno.Text.g.cpp.o: include/Uno.Bool.h
obj/Uno.Text.g.cpp.o: include/Uno.Byte.h
obj/Uno.Text.g.cpp.o: include/Uno.Char.h
obj/Uno.Text.g.cpp.o: include/Uno.Int.h
obj/Uno.Text.g.cpp.o: include/Uno.Runtime.Implementation.TextEncodingImpl.h
obj/Uno.Text.g.cpp.o: include/Uno.String.h
obj/Uno.Text.g.cpp.o: include/Uno.Text.Ascii.h
obj/Uno.Text.g.cpp.o: include/Uno.Text.Base64.h
obj/Uno.Text.g.cpp.o: include/Uno.Text.Decoder.h
obj/Uno.Text.g.cpp.o: include/Uno.Text.Encoding.h
obj/Uno.Text.g.cpp.o: include/Uno.Text.StringBuilder.h
obj/Uno.Text.g.cpp.o: include/Uno.Text.StringBuilderElement.h
obj/Uno.Text.g.cpp.o: include/Uno.Text.Utf8.h
obj/Uno.Text.g.cpp.o: include/Uno.Text.UTF8Decoder.h
obj/Uno.Text.g.cpp.o: include/Uno.Text.UTF8Encoding.h
obj/Uno.Text.g.cpp.o: jni/Uno.Text.g.cpp | obj
	echo Uno.Text.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Text.g.cpp.o -c jni/Uno.Text.g.cpp

obj/Uno.Threading.g.cpp.o: include/posix_mutex.h
obj/Uno.Threading.g.cpp.o: include/posix_thread.h
obj/Uno.Threading.g.cpp.o: include/Uno.Action.h
obj/Uno.Threading.g.cpp.o: include/Uno.Action-1.h
obj/Uno.Threading.g.cpp.o: include/Uno.ArgumentNullException.h
obj/Uno.Threading.g.cpp.o: include/Uno.Bool.h
obj/Uno.Threading.g.cpp.o: include/Uno.Collections.List-1.h
obj/Uno.Threading.g.cpp.o: include/Uno.Collections.Queue-1.h
obj/Uno.Threading.g.cpp.o: include/Uno.Delegate.h
obj/Uno.Threading.g.cpp.o: include/Uno.Exception.h
obj/Uno.Threading.g.cpp.o: include/Uno.Int.h
obj/Uno.Threading.g.cpp.o: include/Uno.IntPtr.h
obj/Uno.Threading.g.cpp.o: include/Uno.Object.h
obj/Uno.Threading.g.cpp.o: include/Uno.String.h
obj/Uno.Threading.g.cpp.o: include/Uno.Threading.ConcurrentQueue-1.h
obj/Uno.Threading.g.cpp.o: include/Uno.Threading.Future.h
obj/Uno.Threading.g.cpp.o: include/Uno.Threading.Future-1.Closure-1.h
obj/Uno.Threading.g.cpp.o: include/Uno.Threading.Future-1.h
obj/Uno.Threading.g.cpp.o: include/Uno.Threading.FutureState.h
obj/Uno.Threading.g.cpp.o: include/Uno.Threading.IDispatcher.h
obj/Uno.Threading.g.cpp.o: include/Uno.Threading.LockGuard.h
obj/Uno.Threading.g.cpp.o: include/Uno.Threading.Mutex.h
obj/Uno.Threading.g.cpp.o: include/Uno.Threading.POSIXMutex.h
obj/Uno.Threading.g.cpp.o: include/Uno.Threading.POSIXThread.h
obj/Uno.Threading.g.cpp.o: include/Uno.Threading.Promise-1.h
obj/Uno.Threading.g.cpp.o: include/Uno.Threading.SyncDispatcher.h
obj/Uno.Threading.g.cpp.o: include/Uno.Threading.Thread.h
obj/Uno.Threading.g.cpp.o: include/Uno.ULong.h
obj/Uno.Threading.g.cpp.o: jni/Uno.Threading.g.cpp | obj
	echo Uno.Threading.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Threading.g.cpp.o -c jni/Uno.Threading.g.cpp

obj/Uno.Threading.Tasks.g.cpp.o: include/Uno.Bool.h
obj/Uno.Threading.Tasks.g.cpp.o: include/Uno.Threading.Tasks.CancellationToken.h
obj/Uno.Threading.Tasks.g.cpp.o: include/Uno.Threading.Tasks.CancellationTokenSource.h
obj/Uno.Threading.Tasks.g.cpp.o: jni/Uno.Threading.Tasks.g.cpp | obj
	echo Uno.Threading.Tasks.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Threading.Tasks.g.cpp.o -c jni/Uno.Threading.Tasks.g.cpp

obj/Uno.Time.Calendars.g.cpp.o: include/Uno.Bool.h
obj/Uno.Time.Calendars.g.cpp.o: include/Uno.Int.h
obj/Uno.Time.Calendars.g.cpp.o: include/Uno.Long.h
obj/Uno.Time.Calendars.g.cpp.o: include/Uno.String.h
obj/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.Era.h
obj/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.GregorianYearMonthDayCalculator.h
obj/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.TimeOfDayCalculator.h
obj/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.WeekYearCalculator.h
obj/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.YearMonthDayCalculator.h
obj/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Converter.h
obj/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Instant.h
obj/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Preconditions.h
obj/Uno.Time.Calendars.g.cpp.o: jni/Uno.Time.Calendars.g.cpp | obj
	echo Uno.Time.Calendars.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Time.Calendars.g.cpp.o -c jni/Uno.Time.Calendars.g.cpp

obj/Uno.Time.g.cpp.o: include/Uno.ArgumentNullException.h
obj/Uno.Time.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
obj/Uno.Time.g.cpp.o: include/Uno.Bool.h
obj/Uno.Time.g.cpp.o: include/Uno.Diagnostics.Clock.h
obj/Uno.Time.g.cpp.o: include/Uno.Int.h
obj/Uno.Time.g.cpp.o: include/Uno.Long.h
obj/Uno.Time.g.cpp.o: include/Uno.Object.h
obj/Uno.Time.g.cpp.o: include/Uno.String.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.Era.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.GregorianYearMonthDayCalculator.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.TimeOfDayCalculator.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.WeekYearCalculator.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.YearMonthDayCalculator.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.CalendarSystem.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.Converter.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.DateTimeZone.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.DeviceTimeZone.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.Duration.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.FixedDateTimeZone.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.HashCodeHelper.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.Instant.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.LocalDate.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.LocalDateTime.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.LocalTime.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.Offset.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.OffsetDateTime.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.Preconditions.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.Text.LocalDatePattern.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.Text.LocalDateTimePattern.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.Text.LocalTimePattern.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.Text.OffsetDateTimePattern.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.Text.OffsetPattern.h
obj/Uno.Time.g.cpp.o: include/Uno.Time.ZonedDateTime.h
obj/Uno.Time.g.cpp.o: include/Uno.Type.h
obj/Uno.Time.g.cpp.o: jni/Uno.Time.g.cpp | obj
	echo Uno.Time.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Time.g.cpp.o -c jni/Uno.Time.g.cpp

obj/Uno.Time.Text.g.cpp.o: include/Uno.Action-2.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Bool.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Char.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Delegate.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Exception.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Float.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.FormatException.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Func-2.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Int.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Math.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.String.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Text.StringBuilder.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.LocalDate.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.LocalDateTime.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.LocalTime.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Offset.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.OffsetDateTime.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.FixedFormatPattern-1.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.IPatternPart-1.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalDatePattern.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalDatePattern.LocalDateBucket.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalDateTimePattern.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalTimePattern.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalTimePattern.LocalTimeBucket.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.NumberPart-1.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.OffsetDateTimePattern.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.OffsetPattern.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.OffsetPattern.OffsetBucket.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.OffsetPatternPart-1.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.ParseResult-1.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.PatternPart-2.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.RangeNumberPart-1.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.SeparatorPart-1.h
obj/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.SignPart-1.h
obj/Uno.Time.Text.g.cpp.o: jni/Uno.Time.Text.g.cpp | obj
	echo Uno.Time.Text.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.Time.Text.g.cpp.o -c jni/Uno.Time.Text.g.cpp

obj/Uno.UX.g.cpp.o: include/Uno.Action-1.h
obj/Uno.UX.g.cpp.o: include/Uno.Bool.h
obj/Uno.UX.g.cpp.o: include/Uno.BundleFile.h
obj/Uno.UX.g.cpp.o: include/Uno.Byte.h
obj/Uno.UX.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
obj/Uno.UX.g.cpp.o: include/Uno.Collections.Dictionary-2.h
obj/Uno.UX.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h
obj/Uno.UX.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.h
obj/Uno.UX.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
obj/Uno.UX.g.cpp.o: include/Uno.Collections.List-1.h
obj/Uno.UX.g.cpp.o: include/Uno.Delegate.h
obj/Uno.UX.g.cpp.o: include/Uno.EventArgs.h
obj/Uno.UX.g.cpp.o: include/Uno.EventHandler-1.h
obj/Uno.UX.g.cpp.o: include/Uno.Exception.h
obj/Uno.UX.g.cpp.o: include/Uno.IDisposable.h
obj/Uno.UX.g.cpp.o: include/Uno.Int.h
obj/Uno.UX.g.cpp.o: include/Uno.InvalidOperationException.h
obj/Uno.UX.g.cpp.o: include/Uno.IO.BinaryReader.h
obj/Uno.UX.g.cpp.o: include/Uno.IO.MemoryStream.h
obj/Uno.UX.g.cpp.o: include/Uno.IO.Stream.h
obj/Uno.UX.g.cpp.o: include/Uno.IO.StreamReader.h
obj/Uno.UX.g.cpp.o: include/Uno.Long.h
obj/Uno.UX.g.cpp.o: include/Uno.Object.h
obj/Uno.UX.g.cpp.o: include/Uno.Predicate-1.h
obj/Uno.UX.g.cpp.o: include/Uno.String.h
obj/Uno.UX.g.cpp.o: include/Uno.Type.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.BundleFileSource.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.Expression-1.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.FileSource.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.IFactory.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.ITemplate.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.Property-1.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.Resource.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.StreamExtensions.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.Template-1.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.UXComponentsAttribute.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.UXConstructorAttribute.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.UXContentAttribute.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.UXFileNameAttribute.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.UXGlobalResourceAttribute.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.UXLineNumberAttribute.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.UXNameAttribute.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.UXPrimaryAttribute.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.UXSourceFileNameAttribute.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.UXValueBindingArgumentAttribute.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.UXValueBindingTargetAttribute.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
obj/Uno.UX.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
obj/Uno.UX.g.cpp.o: jni/Uno.UX.g.cpp | obj
	echo Uno.UX.g.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno.UX.g.cpp.o -c jni/Uno.UX.g.cpp

obj/Uno/_invoke.cpp.o: include/Uno/ObjectModel.h
obj/Uno/_invoke.cpp.o: jni/Uno/_invoke.cpp | obj/Uno
	echo Uno/_invoke.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno/_invoke.cpp.o -c jni/Uno/_invoke.cpp

obj/Uno/_main.cpp.o: include/Uno/Support.h
obj/Uno/_main.cpp.o: include/Uno.Exception.h
obj/Uno/_main.cpp.o: include/Uno.Platform2.Application.h
obj/Uno/_main.cpp.o: include/Uno.Runtime.Implementation.Internal.Bootstrapper.h
obj/Uno/_main.cpp.o: include/Uno.Runtime.Implementation.Internal.BootstrapHints.h
obj/Uno/_main.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowImpl.h
obj/Uno/_main.cpp.o: include/Uno.Application.h
obj/Uno/_main.cpp.o: include/Outracks.Simulator.GeneratedApplication.h
obj/Uno/_main.cpp.o: jni/Uno/_main.cpp | obj/Uno
	echo Uno/_main.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno/_main.cpp.o -c jni/Uno/_main.cpp

obj/Uno/Base64.cpp.o: include/Uno.h
obj/Uno/Base64.cpp.o: jni/Uno/Base64.cpp | obj/Uno
	echo Uno/Base64.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno/Base64.cpp.o -c jni/Uno/Base64.cpp

obj/Uno/Memory.cpp.o: include/Uno/_internal.h
obj/Uno/Memory.cpp.o: include/Uno/Support.h
obj/Uno/Memory.cpp.o: include/Uno.Type.h
obj/Uno/Memory.cpp.o: include/Uno.String.h
obj/Uno/Memory.cpp.o: jni/Uno/Memory.cpp | obj/Uno
	echo Uno/Memory.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno/Memory.cpp.o -c jni/Uno/Memory.cpp

obj/Uno/ObjectModel.cpp.o: include/Uno/_internal.h
obj/Uno/ObjectModel.cpp.o: include/Uno.Bool.h
obj/Uno/ObjectModel.cpp.o: include/Uno.Byte.h
obj/Uno/ObjectModel.cpp.o: include/Uno.Char.h
obj/Uno/ObjectModel.cpp.o: include/Uno.Float.h
obj/Uno/ObjectModel.cpp.o: include/Uno.Int.h
obj/Uno/ObjectModel.cpp.o: include/Uno.Object.h
obj/Uno/ObjectModel.cpp.o: include/Uno.SByte.h
obj/Uno/ObjectModel.cpp.o: include/Uno.Short.h
obj/Uno/ObjectModel.cpp.o: include/Uno.String.h
obj/Uno/ObjectModel.cpp.o: include/Uno.UShort.h
obj/Uno/ObjectModel.cpp.o: include/Uno.Delegate.h
obj/Uno/ObjectModel.cpp.o: include/Uno.IndexOutOfRangeException.h
obj/Uno/ObjectModel.cpp.o: include/Uno.InvalidCastException.h
obj/Uno/ObjectModel.cpp.o: include/Uno.InvalidOperationException.h
obj/Uno/ObjectModel.cpp.o: include/Uno.NullReferenceException.h
obj/Uno/ObjectModel.cpp.o: include/Uno.Type.h
obj/Uno/ObjectModel.cpp.o: jni/Uno/ObjectModel.cpp | obj/Uno
	echo Uno/ObjectModel.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno/ObjectModel.cpp.o -c jni/Uno/ObjectModel.cpp

obj/Uno/Reflection.cpp.o: include/Uno/Reflection.h
obj/Uno/Reflection.cpp.o: include/Uno/XliInterop.h
obj/Uno/Reflection.cpp.o: include/Uno.Int.h
obj/Uno/Reflection.cpp.o: include/Uno.Bool.h
obj/Uno/Reflection.cpp.o: include/Uno.String.h
obj/Uno/Reflection.cpp.o: include/Uno.Exception.h
obj/Uno/Reflection.cpp.o: include/Uno.Type.h
obj/Uno/Reflection.cpp.o: jni/Uno/Reflection.cpp | obj/Uno
	echo Uno/Reflection.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno/Reflection.cpp.o -c jni/Uno/Reflection.cpp

obj/Uno/Support.cpp.o: include/Uno.Byte.h
obj/Uno/Support.cpp.o: include/Uno.Buffer.h
obj/Uno/Support.cpp.o: include/Uno/Support.h
obj/Uno/Support.cpp.o: jni/Uno/Support.cpp | obj/Uno
	echo Uno/Support.cpp
	$(CXX) $(CXX_FLAGS) -o obj/Uno/Support.cpp.o -c jni/Uno/Support.cpp

include/_root.Fuse_Android_bundle.h: include/Uno.h

include/_root.Fuse_BasicTheme_bundle.h: include/Uno.h

include/_root.Fuse_Controls_bundle.h: include/Uno.h

include/_root.Fuse_Drawing_bundle.h: include/Uno.h

include/_root.Fuse_Drawing_Polygons_bundle.h: include/Uno.h

include/_root.Fuse_Drawing_Primitives_bundle.h: include/Uno.h

include/_root.Fuse_Effects_bundle.h: include/Uno.h

include/_root.Fuse_Elements_bundle.h: include/Uno.h

include/_root.Fuse_Entities_bundle.h: include/Uno.h

include/_root.Fuse_iOS_bundle.h: include/Uno.h

include/_root.Fuse_Reactive_bundle.h: include/Uno.h

include/_root.Fuse_Themes_bundle.h: include/Uno.h

include/_root.Fuse_Video_bundle.h: include/Uno.h

include/_root.FuseCore_bundle.h: include/Uno.h

include/_root.HashableWeakReference.h: include/Uno.Object.h

include/_root.MainView.Factory.h: include/Uno.Object.h
include/_root.MainView.Factory.h: include/Uno.UX.IFactory.h

include/_root.MainView.Fuse_Drawing_SolidColor_float4_Color_Property.h: include/Uno.Float4.h
include/_root.MainView.Fuse_Drawing_SolidColor_float4_Color_Property.h: include/Uno.UX.Property-1.h

include/_root.MainView.Fuse_Effects_Blur_float_Radius_Property.h: include/Uno.Float.h
include/_root.MainView.Fuse_Effects_Blur_float_Radius_Property.h: include/Uno.UX.Property-1.h

include/_root.MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_Status-5e09bf19.h: include/Uno.Platform.iOS.StatusBarStyle.h
include/_root.MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_Status-5e09bf19.h: include/Uno.UX.Property-1.h

include/_root.MainView.Fuse_Triggers_WhileBool_bool_Value_Property.h: include/Uno.Bool.h
include/_root.MainView.Fuse_Triggers_WhileBool_bool_Value_Property.h: include/Uno.UX.Property-1.h

include/_root.MainView.h: include/Fuse.App.h

include/_root.MainView.Template.h: include/Fuse.Controls.Text.h
include/_root.MainView.Template.h: include/Uno.UX.ITemplate.h
include/_root.MainView.Template.h: include/Uno.UX.Template-1.h

include/_root.MainView.Template1.h: include/Fuse.Controls.Image.h
include/_root.MainView.Template1.h: include/Uno.UX.ITemplate.h
include/_root.MainView.Template1.h: include/Uno.UX.Template-1.h

include/_root.MainView.Template2.h: include/Fuse.Controls.Page.h
include/_root.MainView.Template2.h: include/Uno.UX.ITemplate.h
include/_root.MainView.Template2.h: include/Uno.UX.Template-1.h

include/_root.Outracks_Simulator_Client_Uno_bundle.h: include/Uno.h

include/_root.TestApp_bundle.h: include/Uno.h

include/_root.UnoCore_bundle.h: include/Uno.h

include/_root.WeakDictionary-2.h: include/Uno.Object.h

include/Android.android.animation.Animator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.animation.Animator.h: include/Android.java.lang.Object.h
include/Android.android.animation.Animator.h: include/Uno.IDisposable.h

include/Android.android.animation.LayoutTransition.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.animation.LayoutTransition.h: include/Android.java.lang.Object.h
include/Android.android.animation.LayoutTransition.h: include/Uno.IDisposable.h

include/Android.android.animation.TimeAnimator.h: include/Android.android.animation.ValueAnimator.h
include/Android.android.animation.TimeAnimator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.animation.TimeAnimator.h: include/Uno.IDisposable.h

include/Android.android.animation.TimeAnimatorDLRTimeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.animation.TimeAnimatorDLRTimeListener.h: include/Uno.Object.h

include/Android.android.animation.TimeInterpolator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.animation.TimeInterpolator.h: include/Uno.Object.h

include/Android.android.animation.ValueAnimator.h: include/Android.android.animation.Animator.h
include/Android.android.animation.ValueAnimator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.animation.ValueAnimator.h: include/Uno.IDisposable.h

include/Android.android.app.Activity.h: include/Android.android.view.ContextThemeWrapper.h
include/Android.android.app.Activity.h: include/Android.android.view.ViewDLROnCreateContextMenuListener.h
include/Android.android.app.Activity.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.app.Activity.h: include/Uno.IDisposable.h

include/Android.android.app.Fragment.h: include/Android.android.view.ViewDLROnCreateContextMenuListener.h
include/Android.android.app.Fragment.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.app.Fragment.h: include/Android.java.lang.Object.h
include/Android.android.app.Fragment.h: include/Uno.IDisposable.h

include/Android.android.app.TaskStackBuilder.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.app.TaskStackBuilder.h: include/Android.java.lang.Object.h
include/Android.android.app.TaskStackBuilder.h: include/Uno.IDisposable.h

include/Android.android.content.ClipData.h: include/Android.android.os.Parcelable.h
include/Android.android.content.ClipData.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.ClipData.h: include/Android.java.lang.Object.h
include/Android.android.content.ClipData.h: include/Uno.IDisposable.h

include/Android.android.content.ComponentName.h: include/Android.android.os.Parcelable.h
include/Android.android.content.ComponentName.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.ComponentName.h: include/Android.java.lang.Object.h
include/Android.android.content.ComponentName.h: include/Uno.IDisposable.h

include/Android.android.content.Context.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.Context.h: include/Android.java.lang.Object.h
include/Android.android.content.Context.h: include/Uno.IDisposable.h

include/Android.android.content.ContextWrapper.h: include/Android.android.content.Context.h
include/Android.android.content.ContextWrapper.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.ContextWrapper.h: include/Uno.IDisposable.h

include/Android.android.content.Intent.h: include/Android.android.os.Parcelable.h
include/Android.android.content.Intent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.Intent.h: include/Android.java.lang.Object.h
include/Android.android.content.Intent.h: include/Uno.IDisposable.h

include/Android.android.content.res.AssetFileDescriptor.h: include/Android.android.os.Parcelable.h
include/Android.android.content.res.AssetFileDescriptor.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.res.AssetFileDescriptor.h: include/Android.java.lang.Object.h
include/Android.android.content.res.AssetFileDescriptor.h: include/Uno.IDisposable.h

include/Android.android.content.res.AssetManager.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.res.AssetManager.h: include/Android.java.lang.Object.h
include/Android.android.content.res.AssetManager.h: include/Uno.IDisposable.h

include/Android.android.content.res.ColorStateList.h: include/Android.android.os.Parcelable.h
include/Android.android.content.res.ColorStateList.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.res.ColorStateList.h: include/Android.java.lang.Object.h
include/Android.android.content.res.ColorStateList.h: include/Uno.IDisposable.h

include/Android.android.content.res.Configuration.h: include/Android.android.os.Parcelable.h
include/Android.android.content.res.Configuration.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.res.Configuration.h: include/Android.java.lang.Object.h
include/Android.android.content.res.Configuration.h: include/Uno.IDisposable.h

include/Android.android.content.res.Resources.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.res.Resources.h: include/Android.java.lang.Object.h
include/Android.android.content.res.Resources.h: include/Uno.IDisposable.h

include/Android.android.content.res.TypedArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.res.TypedArray.h: include/Android.java.lang.Object.h
include/Android.android.content.res.TypedArray.h: include/Uno.IDisposable.h

include/Android.android.graphics.Bitmap.h: include/Android.android.os.Parcelable.h
include/Android.android.graphics.Bitmap.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Bitmap.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Bitmap.h: include/Uno.IDisposable.h

include/Android.android.graphics.BitmapDLRConfig.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.BitmapDLRConfig.h: include/Android.java.lang.Object.h
include/Android.android.graphics.BitmapDLRConfig.h: include/Uno.IDisposable.h

include/Android.android.graphics.BitmapFactory.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.BitmapFactory.h: include/Android.java.lang.Object.h
include/Android.android.graphics.BitmapFactory.h: include/Uno.IDisposable.h

include/Android.android.graphics.Canvas.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Canvas.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Canvas.h: include/Uno.IDisposable.h

include/Android.android.graphics.Color.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Color.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Color.h: include/Uno.IDisposable.h

include/Android.android.graphics.drawable.Drawable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.drawable.Drawable.h: include/Android.java.lang.Object.h
include/Android.android.graphics.drawable.Drawable.h: include/Uno.IDisposable.h

include/Android.android.graphics.drawable.LayerDrawable.h: include/Android.android.graphics.drawable.Drawable.h
include/Android.android.graphics.drawable.LayerDrawable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.drawable.LayerDrawable.h: include/Uno.IDisposable.h

include/Android.android.graphics.drawable.ShapeDrawable.h: include/Android.android.graphics.drawable.Drawable.h
include/Android.android.graphics.drawable.ShapeDrawable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.drawable.ShapeDrawable.h: include/Uno.IDisposable.h

include/Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h: include/Android.java.lang.Object.h
include/Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h: include/Uno.IDisposable.h

include/Android.android.graphics.drawable.shapes.ArcShape.h: include/Android.android.graphics.drawable.shapes.RectShape.h
include/Android.android.graphics.drawable.shapes.ArcShape.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.drawable.shapes.ArcShape.h: include/Uno.IDisposable.h

include/Android.android.graphics.drawable.shapes.RectShape.h: include/Android.android.graphics.drawable.shapes.Shape.h
include/Android.android.graphics.drawable.shapes.RectShape.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.drawable.shapes.RectShape.h: include/Uno.IDisposable.h

include/Android.android.graphics.drawable.shapes.RoundRectShape.h: include/Android.android.graphics.drawable.shapes.RectShape.h
include/Android.android.graphics.drawable.shapes.RoundRectShape.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.drawable.shapes.RoundRectShape.h: include/Uno.IDisposable.h

include/Android.android.graphics.drawable.shapes.Shape.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.drawable.shapes.Shape.h: include/Android.java.lang.Object.h
include/Android.android.graphics.drawable.shapes.Shape.h: include/Uno.IDisposable.h

include/Android.android.graphics.LinearGradient.h: include/Android.android.graphics.Shader.h
include/Android.android.graphics.LinearGradient.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.LinearGradient.h: include/Uno.IDisposable.h

include/Android.android.graphics.Matrix.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Matrix.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Matrix.h: include/Uno.IDisposable.h

include/Android.android.graphics.Paint.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Paint.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Paint.h: include/Uno.IDisposable.h

include/Android.android.graphics.PaintDLRStyle.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.PaintDLRStyle.h: include/Android.java.lang.Object.h
include/Android.android.graphics.PaintDLRStyle.h: include/Uno.IDisposable.h

include/Android.android.graphics.Point.h: include/Android.android.os.Parcelable.h
include/Android.android.graphics.Point.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Point.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Point.h: include/Uno.IDisposable.h

include/Android.android.graphics.PorterDuffDLRMode.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.PorterDuffDLRMode.h: include/Android.java.lang.Object.h
include/Android.android.graphics.PorterDuffDLRMode.h: include/Uno.IDisposable.h

include/Android.android.graphics.Rect.h: include/Android.android.os.Parcelable.h
include/Android.android.graphics.Rect.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Rect.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Rect.h: include/Uno.IDisposable.h

include/Android.android.graphics.RectF.h: include/Android.android.os.Parcelable.h
include/Android.android.graphics.RectF.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.RectF.h: include/Android.java.lang.Object.h
include/Android.android.graphics.RectF.h: include/Uno.IDisposable.h

include/Android.android.graphics.Region.h: include/Android.android.os.Parcelable.h
include/Android.android.graphics.Region.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Region.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Region.h: include/Uno.IDisposable.h

include/Android.android.graphics.Shader.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Shader.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Shader.h: include/Uno.IDisposable.h

include/Android.android.graphics.ShaderDLRTileMode.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.ShaderDLRTileMode.h: include/Android.java.lang.Object.h
include/Android.android.graphics.ShaderDLRTileMode.h: include/Uno.IDisposable.h

include/Android.android.graphics.SurfaceTexture.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.SurfaceTexture.h: include/Android.java.lang.Object.h
include/Android.android.graphics.SurfaceTexture.h: include/Uno.IDisposable.h

include/Android.android.graphics.SurfaceTextureDLROnFrameAvailableListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.SurfaceTextureDLROnFrameAvailableListener.h: include/Uno.Object.h

include/Android.android.graphics.Typeface.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Typeface.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Typeface.h: include/Uno.IDisposable.h

include/Android.android.location.Location.h: include/Android.android.os.Parcelable.h
include/Android.android.location.Location.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.location.Location.h: include/Android.java.lang.Object.h
include/Android.android.location.Location.h: include/Uno.IDisposable.h

include/Android.android.location.LocationListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.location.LocationListener.h: include/Uno.Object.h

include/Android.android.location.LocationManager.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.location.LocationManager.h: include/Android.java.lang.Object.h
include/Android.android.location.LocationManager.h: include/Uno.IDisposable.h

include/Android.android.media.AudioManager.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.media.AudioManager.h: include/Android.java.lang.Object.h
include/Android.android.media.AudioManager.h: include/Uno.IDisposable.h

include/Android.android.media.AudioManagerDLROnAudioFocusChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.media.AudioManagerDLROnAudioFocusChangeListener.h: include/Uno.Object.h

include/Android.android.media.MediaPlayer.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.media.MediaPlayer.h: include/Android.java.lang.Object.h
include/Android.android.media.MediaPlayer.h: include/Uno.IDisposable.h

include/Android.android.media.MediaPlayerDLROnBufferingUpdateListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.media.MediaPlayerDLROnBufferingUpdateListener.h: include/Uno.Object.h

include/Android.android.media.MediaPlayerDLROnCompletionListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.media.MediaPlayerDLROnCompletionListener.h: include/Uno.Object.h

include/Android.android.media.MediaPlayerDLROnErrorListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.media.MediaPlayerDLROnErrorListener.h: include/Uno.Object.h

include/Android.android.media.MediaPlayerDLROnPreparedListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.media.MediaPlayerDLROnPreparedListener.h: include/Uno.Object.h

include/Android.android.media.MediaPlayerDLROnSeekCompleteListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.media.MediaPlayerDLROnSeekCompleteListener.h: include/Uno.Object.h

include/Android.android.media.MediaPlayerDLROnVideoSizeChangedListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.media.MediaPlayerDLROnVideoSizeChangedListener.h: include/Uno.Object.h

include/Android.android.net.http.SslError.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.net.http.SslError.h: include/Android.java.lang.Object.h
include/Android.android.net.http.SslError.h: include/Uno.IDisposable.h

include/Android.android.net.Uri.h: include/Android.android.os.Parcelable.h
include/Android.android.net.Uri.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.net.Uri.h: include/Android.java.lang.Object.h
include/Android.android.net.Uri.h: include/Uno.IDisposable.h

include/Android.android.opengl.GLUtils.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.opengl.GLUtils.h: include/Android.java.lang.Object.h
include/Android.android.opengl.GLUtils.h: include/Uno.IDisposable.h

include/Android.android.os.Build.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.Build.h: include/Android.java.lang.Object.h
include/Android.android.os.Build.h: include/Uno.IDisposable.h

include/Android.android.os.BuildDLRVERSION.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.BuildDLRVERSION.h: include/Android.java.lang.Object.h
include/Android.android.os.BuildDLRVERSION.h: include/Uno.IDisposable.h

include/Android.android.os.Bundle.h: include/Android.android.os.Parcelable.h
include/Android.android.os.Bundle.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.Bundle.h: include/Android.java.lang.Object.h
include/Android.android.os.Bundle.h: include/Uno.IDisposable.h

include/Android.android.os.Handler.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.Handler.h: include/Android.java.lang.Object.h
include/Android.android.os.Handler.h: include/Uno.IDisposable.h

include/Android.android.os.IBinder.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.IBinder.h: include/Uno.Object.h

include/Android.android.os.IBinderDLRDeathRecipient.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.IBinderDLRDeathRecipient.h: include/Uno.Object.h

include/Android.android.os.IInterface.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.IInterface.h: include/Uno.Object.h

include/Android.android.os.Looper.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.Looper.h: include/Android.java.lang.Object.h
include/Android.android.os.Looper.h: include/Uno.IDisposable.h

include/Android.android.os.Message.h: include/Android.android.os.Parcelable.h
include/Android.android.os.Message.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.Message.h: include/Android.java.lang.Object.h
include/Android.android.os.Message.h: include/Uno.IDisposable.h

include/Android.android.os.Parcel.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.Parcel.h: include/Android.java.lang.Object.h
include/Android.android.os.Parcel.h: include/Uno.IDisposable.h

include/Android.android.os.Parcelable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.Parcelable.h: include/Uno.Object.h

include/Android.android.os.Vibrator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.Vibrator.h: include/Android.java.lang.Object.h
include/Android.android.os.Vibrator.h: include/Uno.IDisposable.h

include/Android.android.test.mock.MockContext.h: include/Android.android.content.Context.h
include/Android.android.test.mock.MockContext.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.test.mock.MockContext.h: include/Uno.IDisposable.h

include/Android.android.text.Editable.h: include/Android.android.text.GetChars.h
include/Android.android.text.Editable.h: include/Android.android.text.Spannable.h
include/Android.android.text.Editable.h: include/Android.android.text.Spanned.h
include/Android.android.text.Editable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.Editable.h: include/Android.java.lang.CharSequence.h
include/Android.android.text.Editable.h: include/Uno.Object.h

include/Android.android.text.GetChars.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.GetChars.h: include/Android.java.lang.CharSequence.h
include/Android.android.text.GetChars.h: include/Uno.Object.h

include/Android.android.text.InputFilter.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.InputFilter.h: include/Uno.Object.h

include/Android.android.text.Layout.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.Layout.h: include/Android.java.lang.Object.h
include/Android.android.text.Layout.h: include/Uno.IDisposable.h

include/Android.android.text.LayoutDLRAlignment.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.LayoutDLRAlignment.h: include/Android.java.lang.Object.h
include/Android.android.text.LayoutDLRAlignment.h: include/Uno.IDisposable.h

include/Android.android.text.Spannable.h: include/Android.android.text.Spanned.h
include/Android.android.text.Spannable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.Spannable.h: include/Android.java.lang.CharSequence.h
include/Android.android.text.Spannable.h: include/Uno.Object.h

include/Android.android.text.Spanned.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.Spanned.h: include/Android.java.lang.CharSequence.h
include/Android.android.text.Spanned.h: include/Uno.Object.h

include/Android.android.text.StaticLayout.h: include/Android.android.text.Layout.h
include/Android.android.text.StaticLayout.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.StaticLayout.h: include/Uno.IDisposable.h

include/Android.android.text.TextPaint.h: include/Android.android.graphics.Paint.h
include/Android.android.text.TextPaint.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.TextPaint.h: include/Uno.IDisposable.h

include/Android.android.text.TextUtilsDLRTruncateAt.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.TextUtilsDLRTruncateAt.h: include/Android.java.lang.Object.h
include/Android.android.text.TextUtilsDLRTruncateAt.h: include/Uno.IDisposable.h

include/Android.android.text.TextWatcher.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.TextWatcher.h: include/Uno.Object.h

include/Android.android.util.AttributeSet.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.util.AttributeSet.h: include/Uno.Object.h

include/Android.android.util.Property.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.util.Property.h: include/Android.java.lang.Object.h
include/Android.android.util.Property.h: include/Uno.IDisposable.h

include/Android.android.util.SparseArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.util.SparseArray.h: include/Android.java.lang.Object.h
include/Android.android.util.SparseArray.h: include/Uno.IDisposable.h

include/Android.android.util.TypedValue.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.util.TypedValue.h: include/Android.java.lang.Object.h
include/Android.android.util.TypedValue.h: include/Uno.IDisposable.h

include/Android.android.view.accessibility.AccessibilityEvent.h: include/Android.android.os.Parcelable.h
include/Android.android.view.accessibility.AccessibilityEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.accessibility.AccessibilityEvent.h: include/Android.java.lang.Object.h
include/Android.android.view.accessibility.AccessibilityEvent.h: include/Uno.IDisposable.h

include/Android.android.view.accessibility.AccessibilityNodeInfo.h: include/Android.android.os.Parcelable.h
include/Android.android.view.accessibility.AccessibilityNodeInfo.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.accessibility.AccessibilityNodeInfo.h: include/Android.java.lang.Object.h
include/Android.android.view.accessibility.AccessibilityNodeInfo.h: include/Uno.IDisposable.h

include/Android.android.view.accessibility.AccessibilityNodeProvider.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.accessibility.AccessibilityNodeProvider.h: include/Android.java.lang.Object.h
include/Android.android.view.accessibility.AccessibilityNodeProvider.h: include/Uno.IDisposable.h

include/Android.android.view.ActionMode.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ActionMode.h: include/Android.java.lang.Object.h
include/Android.android.view.ActionMode.h: include/Uno.IDisposable.h

include/Android.android.view.ActionModeDLRCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ActionModeDLRCallback.h: include/Uno.Object.h

include/Android.android.view.ActionProvider.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ActionProvider.h: include/Android.java.lang.Object.h
include/Android.android.view.ActionProvider.h: include/Uno.IDisposable.h

include/Android.android.view.animation.Animation.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.animation.Animation.h: include/Android.java.lang.Object.h
include/Android.android.view.animation.Animation.h: include/Uno.IDisposable.h

include/Android.android.view.animation.AnimationDLRAnimationListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.animation.AnimationDLRAnimationListener.h: include/Uno.Object.h

include/Android.android.view.animation.Interpolator.h: include/Android.android.animation.TimeInterpolator.h
include/Android.android.view.animation.Interpolator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.animation.Interpolator.h: include/Uno.Object.h

include/Android.android.view.animation.LayoutAnimationController.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.animation.LayoutAnimationController.h: include/Android.java.lang.Object.h
include/Android.android.view.animation.LayoutAnimationController.h: include/Uno.IDisposable.h

include/Android.android.view.animation.Transformation.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.animation.Transformation.h: include/Android.java.lang.Object.h
include/Android.android.view.animation.Transformation.h: include/Uno.IDisposable.h

include/Android.android.view.Choreographer.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.Choreographer.h: include/Android.java.lang.Object.h
include/Android.android.view.Choreographer.h: include/Uno.IDisposable.h

include/Android.android.view.ChoreographerDLRFrameCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ChoreographerDLRFrameCallback.h: include/Uno.Object.h

include/Android.android.view.ContextMenu.h: include/Android.android.view.Menu.h
include/Android.android.view.ContextMenu.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ContextMenu.h: include/Uno.Object.h

include/Android.android.view.ContextMenuDLRContextMenuInfo.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ContextMenuDLRContextMenuInfo.h: include/Uno.Object.h

include/Android.android.view.ContextThemeWrapper.h: include/Android.android.content.ContextWrapper.h
include/Android.android.view.ContextThemeWrapper.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ContextThemeWrapper.h: include/Uno.IDisposable.h

include/Android.android.view.Display.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.Display.h: include/Android.java.lang.Object.h
include/Android.android.view.Display.h: include/Uno.IDisposable.h

include/Android.android.view.DragEvent.h: include/Android.android.os.Parcelable.h
include/Android.android.view.DragEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.DragEvent.h: include/Android.java.lang.Object.h
include/Android.android.view.DragEvent.h: include/Uno.IDisposable.h

include/Android.android.view.Gravity.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.Gravity.h: include/Android.java.lang.Object.h
include/Android.android.view.Gravity.h: include/Uno.IDisposable.h

include/Android.android.view.InputEvent.h: include/Android.android.os.Parcelable.h
include/Android.android.view.InputEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.InputEvent.h: include/Android.java.lang.Object.h
include/Android.android.view.InputEvent.h: include/Uno.IDisposable.h

include/Android.android.view.inputmethod.CompletionInfo.h: include/Android.android.os.Parcelable.h
include/Android.android.view.inputmethod.CompletionInfo.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.inputmethod.CompletionInfo.h: include/Android.java.lang.Object.h
include/Android.android.view.inputmethod.CompletionInfo.h: include/Uno.IDisposable.h

include/Android.android.view.inputmethod.CorrectionInfo.h: include/Android.android.os.Parcelable.h
include/Android.android.view.inputmethod.CorrectionInfo.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.inputmethod.CorrectionInfo.h: include/Android.java.lang.Object.h
include/Android.android.view.inputmethod.CorrectionInfo.h: include/Uno.IDisposable.h

include/Android.android.view.inputmethod.EditorInfo.h: include/Android.android.os.Parcelable.h
include/Android.android.view.inputmethod.EditorInfo.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.inputmethod.EditorInfo.h: include/Android.java.lang.Object.h
include/Android.android.view.inputmethod.EditorInfo.h: include/Uno.IDisposable.h

include/Android.android.view.inputmethod.ExtractedText.h: include/Android.android.os.Parcelable.h
include/Android.android.view.inputmethod.ExtractedText.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.inputmethod.ExtractedText.h: include/Android.java.lang.Object.h
include/Android.android.view.inputmethod.ExtractedText.h: include/Uno.IDisposable.h

include/Android.android.view.inputmethod.ExtractedTextRequest.h: include/Android.android.os.Parcelable.h
include/Android.android.view.inputmethod.ExtractedTextRequest.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.inputmethod.ExtractedTextRequest.h: include/Android.java.lang.Object.h
include/Android.android.view.inputmethod.ExtractedTextRequest.h: include/Uno.IDisposable.h

include/Android.android.view.inputmethod.InputConnection.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.inputmethod.InputConnection.h: include/Uno.Object.h

include/Android.android.view.inputmethod.InputMethodManager.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.inputmethod.InputMethodManager.h: include/Android.java.lang.Object.h
include/Android.android.view.inputmethod.InputMethodManager.h: include/Uno.IDisposable.h

include/Android.android.view.KeyEvent.h: include/Android.android.os.Parcelable.h
include/Android.android.view.KeyEvent.h: include/Android.android.view.InputEvent.h
include/Android.android.view.KeyEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.KeyEvent.h: include/Uno.IDisposable.h

include/Android.android.view.KeyEventDLRDispatcherState.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.KeyEventDLRDispatcherState.h: include/Android.java.lang.Object.h
include/Android.android.view.KeyEventDLRDispatcherState.h: include/Uno.IDisposable.h

include/Android.android.view.Menu.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.Menu.h: include/Uno.Object.h

include/Android.android.view.MenuItem.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.MenuItem.h: include/Uno.Object.h

include/Android.android.view.MenuItemDLROnActionExpandListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.MenuItemDLROnActionExpandListener.h: include/Uno.Object.h

include/Android.android.view.MenuItemDLROnMenuItemClickListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.MenuItemDLROnMenuItemClickListener.h: include/Uno.Object.h

include/Android.android.view.MotionEvent.h: include/Android.android.os.Parcelable.h
include/Android.android.view.MotionEvent.h: include/Android.android.view.InputEvent.h
include/Android.android.view.MotionEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.MotionEvent.h: include/Uno.IDisposable.h

include/Android.android.view.SubMenu.h: include/Android.android.view.Menu.h
include/Android.android.view.SubMenu.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.SubMenu.h: include/Uno.Object.h

include/Android.android.view.Surface.h: include/Android.android.os.Parcelable.h
include/Android.android.view.Surface.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.Surface.h: include/Android.java.lang.Object.h
include/Android.android.view.Surface.h: include/Uno.IDisposable.h

include/Android.android.view.SurfaceHolder.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.SurfaceHolder.h: include/Uno.Object.h

include/Android.android.view.SurfaceHolderDLRCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.SurfaceHolderDLRCallback.h: include/Uno.Object.h

include/Android.android.view.SurfaceHolderDLRCallback2.h: include/Android.android.view.SurfaceHolderDLRCallback.h
include/Android.android.view.SurfaceHolderDLRCallback2.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.SurfaceHolderDLRCallback2.h: include/Uno.Object.h

include/Android.android.view.SurfaceView.h: include/Android.android.view.View.h
include/Android.android.view.SurfaceView.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.SurfaceView.h: include/Uno.IDisposable.h

include/Android.android.view.TextureView.h: include/Android.android.view.View.h
include/Android.android.view.TextureView.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.TextureView.h: include/Uno.IDisposable.h

include/Android.android.view.TextureViewDLRSurfaceTextureListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.TextureViewDLRSurfaceTextureListener.h: include/Uno.Object.h

include/Android.android.view.TouchDelegate.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.TouchDelegate.h: include/Android.java.lang.Object.h
include/Android.android.view.TouchDelegate.h: include/Uno.IDisposable.h

include/Android.android.view.View.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.View.h: include/Android.java.lang.Object.h
include/Android.android.view.View.h: include/Uno.IDisposable.h

include/Android.android.view.ViewDLRAccessibilityDelegate.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLRAccessibilityDelegate.h: include/Android.java.lang.Object.h
include/Android.android.view.ViewDLRAccessibilityDelegate.h: include/Uno.IDisposable.h

include/Android.android.view.ViewDLRDragShadowBuilder.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLRDragShadowBuilder.h: include/Android.java.lang.Object.h
include/Android.android.view.ViewDLRDragShadowBuilder.h: include/Uno.IDisposable.h

include/Android.android.view.ViewDLRMeasureSpec.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLRMeasureSpec.h: include/Android.java.lang.Object.h
include/Android.android.view.ViewDLRMeasureSpec.h: include/Uno.IDisposable.h

include/Android.android.view.ViewDLROnAttachStateChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnAttachStateChangeListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnClickListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnClickListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnCreateContextMenuListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnCreateContextMenuListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnDragListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnDragListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnFocusChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnFocusChangeListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnGenericMotionListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnGenericMotionListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnHoverListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnHoverListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnKeyListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnKeyListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnLayoutChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnLayoutChangeListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnLongClickListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnLongClickListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnSystemUiVisibilityChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnSystemUiVisibilityChangeListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnTouchListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnTouchListener.h: include/Uno.Object.h

include/Android.android.view.ViewGroup.h: include/Android.android.view.View.h
include/Android.android.view.ViewGroup.h: include/Android.android.view.ViewParent.h
include/Android.android.view.ViewGroup.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewGroup.h: include/Uno.IDisposable.h

include/Android.android.view.ViewGroupDLRLayoutParams.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewGroupDLRLayoutParams.h: include/Android.java.lang.Object.h
include/Android.android.view.ViewGroupDLRLayoutParams.h: include/Uno.IDisposable.h

include/Android.android.view.ViewGroupDLRMarginLayoutParams.h: include/Android.android.view.ViewGroupDLRLayoutParams.h
include/Android.android.view.ViewGroupDLRMarginLayoutParams.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewGroupDLRMarginLayoutParams.h: include/Uno.IDisposable.h

include/Android.android.view.ViewGroupDLROnHierarchyChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewGroupDLROnHierarchyChangeListener.h: include/Uno.Object.h

include/Android.android.view.ViewGroupOverlay.h: include/Android.android.view.ViewOverlay.h
include/Android.android.view.ViewGroupOverlay.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewGroupOverlay.h: include/Uno.IDisposable.h

include/Android.android.view.ViewOverlay.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewOverlay.h: include/Android.java.lang.Object.h
include/Android.android.view.ViewOverlay.h: include/Uno.IDisposable.h

include/Android.android.view.ViewParent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewParent.h: include/Uno.Object.h

include/Android.android.view.ViewPropertyAnimator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewPropertyAnimator.h: include/Android.java.lang.Object.h
include/Android.android.view.ViewPropertyAnimator.h: include/Uno.IDisposable.h

include/Android.android.view.ViewTreeObserver.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewTreeObserver.h: include/Android.java.lang.Object.h
include/Android.android.view.ViewTreeObserver.h: include/Uno.IDisposable.h

include/Android.android.view.WindowId.h: include/Android.android.os.Parcelable.h
include/Android.android.view.WindowId.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.WindowId.h: include/Android.java.lang.Object.h
include/Android.android.view.WindowId.h: include/Uno.IDisposable.h

include/Android.android.view.WindowManagerDLRLayoutParams.h: include/Android.android.os.Parcelable.h
include/Android.android.view.WindowManagerDLRLayoutParams.h: include/Android.android.view.ViewGroupDLRLayoutParams.h
include/Android.android.view.WindowManagerDLRLayoutParams.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.WindowManagerDLRLayoutParams.h: include/Uno.IDisposable.h

include/Android.android.webkit.ConsoleMessage.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.ConsoleMessage.h: include/Android.java.lang.Object.h
include/Android.android.webkit.ConsoleMessage.h: include/Uno.IDisposable.h

include/Android.android.webkit.GeolocationPermissionsDLRCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.GeolocationPermissionsDLRCallback.h: include/Uno.Object.h

include/Android.android.webkit.HttpAuthHandler.h: include/Android.android.os.Handler.h
include/Android.android.webkit.HttpAuthHandler.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.HttpAuthHandler.h: include/Uno.IDisposable.h

include/Android.android.webkit.JsPromptResult.h: include/Android.android.webkit.JsResult.h
include/Android.android.webkit.JsPromptResult.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.JsPromptResult.h: include/Uno.IDisposable.h

include/Android.android.webkit.JsResult.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.JsResult.h: include/Android.java.lang.Object.h
include/Android.android.webkit.JsResult.h: include/Uno.IDisposable.h

include/Android.android.webkit.SslErrorHandler.h: include/Android.android.os.Handler.h
include/Android.android.webkit.SslErrorHandler.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.SslErrorHandler.h: include/Uno.IDisposable.h

include/Android.android.webkit.ValueCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.ValueCallback.h: include/Uno.Object.h

include/Android.android.webkit.WebChromeClient.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.WebChromeClient.h: include/Android.java.lang.Object.h
include/Android.android.webkit.WebChromeClient.h: include/Uno.IDisposable.h

include/Android.android.webkit.WebChromeClientDLRCustomViewCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.WebChromeClientDLRCustomViewCallback.h: include/Uno.Object.h

include/Android.android.webkit.WebResourceResponse.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.WebResourceResponse.h: include/Android.java.lang.Object.h
include/Android.android.webkit.WebResourceResponse.h: include/Uno.IDisposable.h

include/Android.android.webkit.WebSettings.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.WebSettings.h: include/Android.java.lang.Object.h
include/Android.android.webkit.WebSettings.h: include/Uno.IDisposable.h

include/Android.android.webkit.WebStorageDLRQuotaUpdater.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.WebStorageDLRQuotaUpdater.h: include/Uno.Object.h

include/Android.android.webkit.WebView.h: include/Android.android.view.ViewGroupDLROnHierarchyChangeListener.h
include/Android.android.webkit.WebView.h: include/Android.android.view.ViewParent.h
include/Android.android.webkit.WebView.h: include/Android.android.widget.AbsoluteLayout.h
include/Android.android.webkit.WebView.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.WebView.h: include/Uno.IDisposable.h

include/Android.android.webkit.WebViewClient.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.WebViewClient.h: include/Android.java.lang.Object.h
include/Android.android.webkit.WebViewClient.h: include/Uno.IDisposable.h

include/Android.android.widget.AbsoluteLayout.h: include/Android.android.view.ViewGroup.h
include/Android.android.widget.AbsoluteLayout.h: include/Android.android.view.ViewParent.h
include/Android.android.widget.AbsoluteLayout.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.AbsoluteLayout.h: include/Uno.IDisposable.h

include/Android.android.widget.AbsSeekBar.h: include/Android.android.widget.ProgressBar.h
include/Android.android.widget.AbsSeekBar.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.AbsSeekBar.h: include/Uno.IDisposable.h

include/Android.android.widget.Button.h: include/Android.android.widget.TextView.h
include/Android.android.widget.Button.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.Button.h: include/Uno.IDisposable.h

include/Android.android.widget.CompoundButton.h: include/Android.android.widget.Button.h
include/Android.android.widget.CompoundButton.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.CompoundButton.h: include/Uno.IDisposable.h

include/Android.android.widget.CompoundButtonDLROnCheckedChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.CompoundButtonDLROnCheckedChangeListener.h: include/Uno.Object.h

include/Android.android.widget.EditText.h: include/Android.android.widget.TextView.h
include/Android.android.widget.EditText.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.EditText.h: include/Uno.IDisposable.h

include/Android.android.widget.FrameLayout.h: include/Android.android.view.ViewGroup.h
include/Android.android.widget.FrameLayout.h: include/Android.android.view.ViewParent.h
include/Android.android.widget.FrameLayout.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.FrameLayout.h: include/Uno.IDisposable.h

include/Android.android.widget.FrameLayoutDLRLayoutParams.h: include/Android.android.view.ViewGroupDLRMarginLayoutParams.h
include/Android.android.widget.FrameLayoutDLRLayoutParams.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.FrameLayoutDLRLayoutParams.h: include/Uno.IDisposable.h

include/Android.android.widget.HorizontalScrollView.h: include/Android.android.view.ViewParent.h
include/Android.android.widget.HorizontalScrollView.h: include/Android.android.widget.FrameLayout.h
include/Android.android.widget.HorizontalScrollView.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.HorizontalScrollView.h: include/Uno.IDisposable.h

include/Android.android.widget.ImageView.h: include/Android.android.view.View.h
include/Android.android.widget.ImageView.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.ImageView.h: include/Uno.IDisposable.h

include/Android.android.widget.ImageViewDLRScaleType.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.ImageViewDLRScaleType.h: include/Android.java.lang.Object.h
include/Android.android.widget.ImageViewDLRScaleType.h: include/Uno.IDisposable.h

include/Android.android.widget.ProgressBar.h: include/Android.android.view.View.h
include/Android.android.widget.ProgressBar.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.ProgressBar.h: include/Uno.IDisposable.h

include/Android.android.widget.RelativeLayout.h: include/Android.android.view.ViewGroup.h
include/Android.android.widget.RelativeLayout.h: include/Android.android.view.ViewParent.h
include/Android.android.widget.RelativeLayout.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.RelativeLayout.h: include/Uno.IDisposable.h

include/Android.android.widget.RelativeLayoutDLRLayoutParams.h: include/Android.android.view.ViewGroupDLRMarginLayoutParams.h
include/Android.android.widget.RelativeLayoutDLRLayoutParams.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.RelativeLayoutDLRLayoutParams.h: include/Uno.IDisposable.h

include/Android.android.widget.ScrollView.h: include/Android.android.view.ViewParent.h
include/Android.android.widget.ScrollView.h: include/Android.android.widget.FrameLayout.h
include/Android.android.widget.ScrollView.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.ScrollView.h: include/Uno.IDisposable.h

include/Android.android.widget.SeekBar.h: include/Android.android.widget.AbsSeekBar.h
include/Android.android.widget.SeekBar.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.SeekBar.h: include/Uno.IDisposable.h

include/Android.android.widget.SeekBarDLROnSeekBarChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.SeekBarDLROnSeekBarChangeListener.h: include/Uno.Object.h

include/Android.android.widget.Switch.h: include/Android.android.widget.CompoundButton.h
include/Android.android.widget.Switch.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.Switch.h: include/Uno.IDisposable.h

include/Android.android.widget.TextView.h: include/Android.android.view.View.h
include/Android.android.widget.TextView.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.TextView.h: include/Uno.IDisposable.h

include/Android.android.widget.TextViewDLROnEditorActionListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.TextViewDLROnEditorActionListener.h: include/Uno.Object.h

include/Android.Base.AndroidBindingMacros.h: include/Uno.Type.h
include/Android.Base.AndroidBindingMacros.h: include/Uno.Exception.h
include/Android.Base.AndroidBindingMacros.h: include/Uno.h

include/Android.Base.JNI.h: include/JNIHelper.h
include/Android.Base.JNI.h: include/Uno.Exception.h
include/Android.Base.JNI.h: include/Uno.h

include/Android.Base.JNI.RefType.h: include/Uno.Int.h

include/Android.Base.Permissions.h: include/Uno.Object.h

include/Android.Base.PlatPermission.h: include/Uno.Object.h

include/Android.Base.Primitives.ConstCharPtr.h: include/Uno.Object.h

include/Android.Base.Primitives.JavaVMPtr.h: include/Uno.Object.h

include/Android.Base.Primitives.jfieldID.h: include/Uno.Object.h

include/Android.Base.Primitives.jmethodID.h: include/Uno.Object.h

include/Android.Base.Primitives.JNIEnvPtr.h: include/Uno.Object.h

include/Android.Base.Primitives.JNINativeMethod.h: include/Uno.Object.h

include/Android.Base.Primitives.jweak.h: include/Uno.Object.h

include/Android.Base.Primitives.ujboolean.h: include/Uno.Object.h

include/Android.Base.Primitives.ujbyte.h: include/Uno.Object.h

include/Android.Base.Primitives.ujchar.h: include/Uno.Object.h

include/Android.Base.Primitives.ujclass.h: include/Uno.Object.h

include/Android.Base.Primitives.ujdouble.h: include/Uno.Object.h

include/Android.Base.Primitives.ujfloat.h: include/Uno.Object.h

include/Android.Base.Primitives.ujint.h: include/Uno.Object.h

include/Android.Base.Primitives.ujlong.h: include/Uno.Object.h

include/Android.Base.Primitives.ujobject.h: include/Uno.Object.h

include/Android.Base.Primitives.ujshort.h: include/Uno.Object.h

include/Android.Base.Primitives.ujstring.h: include/Uno.Object.h

include/Android.Base.Primitives.ujvalue.h: include/Uno.Object.h

include/Android.Base.Primitives.uweakptr.h: include/Uno.Object.h

include/Android.Base.Types.Arrays.h: include/Android.Base.JNI.h
include/Android.Base.Types.Arrays.h: include/Uno.h

include/Android.Base.Types.Bridge.h: include/Android.Base.JNI.h
include/Android.Base.Types.Bridge.h: include/Uno.Exception.h
include/Android.Base.Types.Bridge.h: include/Uno.h

include/Android.Base.Types.ByteBuffer.h: include/Android.Base.JNI.h
include/Android.Base.Types.ByteBuffer.h: include/Uno.h

include/Android.Base.Types.String.h: include/Android.Base.JNI.h
include/Android.Base.Types.String.h: include/Uno.h

include/Android.Base.Versions.h: include/Uno.h

include/Android.Base.Wrappers.BindingSubclassAttribute.h: include/Uno.Attribute.h

include/Android.Base.Wrappers.IJWrapper.h: include/Uno.Object.h

include/Android.Base.Wrappers.JWrapper.h: include/Android.Base.AndroidBindingMacros.h
include/Android.Base.Wrappers.JWrapper.h: include/Android.Base.JNI.h
include/Android.Base.Wrappers.JWrapper.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Base.Wrappers.JWrapper.h: include/Uno.Exception.h
include/Android.Base.Wrappers.JWrapper.h: include/Uno.IDisposable.h
include/Android.Base.Wrappers.JWrapper.h: include/Uno.Object.h

include/Android.Bootstrapper.h: include/Uno.h

include/Android.com.fuse.ExperimentalHttp.HttpRequest.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.com.fuse.ExperimentalHttp.HttpRequest.h: include/Android.Base.Wrappers.JWrapper.h
include/Android.com.fuse.ExperimentalHttp.HttpRequest.h: include/Uno.IDisposable.h

include/Android.com.fuse.Native.Camera.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.com.fuse.Native.Camera.h: include/Android.Base.Wrappers.JWrapper.h
include/Android.com.fuse.Native.Camera.h: include/Uno.IDisposable.h

include/Android.com.fuse.Native.CameraTask.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.com.fuse.Native.CameraTask.h: include/Android.Base.Wrappers.JWrapper.h
include/Android.com.fuse.Native.CameraTask.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_animation_Animator.h: include/Android.android.animation.Animator.h
include/Android.Fallbacks.Android_android_animation_Animator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_animation_Animator.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h: include/Android.android.animation.TimeAnimatorDLRTimeListener.h
include/Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_animation_TimeInterpolator.h: include/Android.android.animation.TimeInterpolator.h
include/Android.Fallbacks.Android_android_animation_TimeInterpolator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_animation_TimeInterpolator.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_animation_TimeInterpolator.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_content_Context.h: include/Android.android.content.Context.h
include/Android.Fallbacks.Android_android_content_Context.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_content_Context.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h: include/Android.android.graphics.drawable.Drawable.h
include/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_graphics_drawable_ShapeDrawab-1918c93c.h: include/Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h
include/Android.Fallbacks.Android_android_graphics_drawable_ShapeDrawab-1918c93c.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_graphics_drawable_ShapeDrawab-1918c93c.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape.h: include/Android.android.graphics.drawable.shapes.Shape.h
include/Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_graphics_SurfaceTextureDLROnF-45d51137.h: include/Android.android.graphics.SurfaceTextureDLROnFrameAvailableListener.h
include/Android.Fallbacks.Android_android_graphics_SurfaceTextureDLROnF-45d51137.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_graphics_SurfaceTextureDLROnF-45d51137.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_graphics_SurfaceTextureDLROnF-45d51137.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_location_LocationListener.h: include/Android.android.location.LocationListener.h
include/Android.Fallbacks.Android_android_location_LocationListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_location_LocationListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_location_LocationListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_media_AudioManagerDLROnAudioF-b4dcb473.h: include/Android.android.media.AudioManagerDLROnAudioFocusChangeListener.h
include/Android.Fallbacks.Android_android_media_AudioManagerDLROnAudioF-b4dcb473.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_media_AudioManagerDLROnAudioF-b4dcb473.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_media_AudioManagerDLROnAudioF-b4dcb473.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnBufferi-a11a3e5b.h: include/Android.android.media.MediaPlayerDLROnBufferingUpdateListener.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnBufferi-a11a3e5b.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnBufferi-a11a3e5b.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnBufferi-a11a3e5b.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnComplet-64af01f3.h: include/Android.android.media.MediaPlayerDLROnCompletionListener.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnComplet-64af01f3.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnComplet-64af01f3.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnComplet-64af01f3.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnErrorListener.h: include/Android.android.media.MediaPlayerDLROnErrorListener.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnErrorListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnErrorListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnErrorListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnPreparedListener.h: include/Android.android.media.MediaPlayerDLROnPreparedListener.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnPreparedListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnPreparedListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnPreparedListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnSeekCom-79a19ba7.h: include/Android.android.media.MediaPlayerDLROnSeekCompleteListener.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnSeekCom-79a19ba7.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnSeekCom-79a19ba7.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnSeekCom-79a19ba7.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnVideoSi-169f5c77.h: include/Android.android.media.MediaPlayerDLROnVideoSizeChangedListener.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnVideoSi-169f5c77.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnVideoSi-169f5c77.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnVideoSi-169f5c77.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_net_Uri.h: include/Android.android.net.Uri.h
include/Android.Fallbacks.Android_android_net_Uri.h: include/Android.android.os.Parcelable.h
include/Android.Fallbacks.Android_android_net_Uri.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_net_Uri.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_os_IBinder.h: include/Android.android.os.IBinder.h
include/Android.Fallbacks.Android_android_os_IBinder.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_os_IBinder.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_os_IBinder.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h: include/Android.android.os.IBinderDLRDeathRecipient.h
include/Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_os_IInterface.h: include/Android.android.os.IInterface.h
include/Android.Fallbacks.Android_android_os_IInterface.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_os_IInterface.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_os_IInterface.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_os_Parcelable.h: include/Android.android.os.Parcelable.h
include/Android.Fallbacks.Android_android_os_Parcelable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_os_Parcelable.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_os_Parcelable.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_os_Vibrator.h: include/Android.android.os.Vibrator.h
include/Android.Fallbacks.Android_android_os_Vibrator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_os_Vibrator.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_text_Editable.h: include/Android.android.text.Editable.h
include/Android.Fallbacks.Android_android_text_Editable.h: include/Android.android.text.GetChars.h
include/Android.Fallbacks.Android_android_text_Editable.h: include/Android.android.text.Spannable.h
include/Android.Fallbacks.Android_android_text_Editable.h: include/Android.android.text.Spanned.h
include/Android.Fallbacks.Android_android_text_Editable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_text_Editable.h: include/Android.java.lang.CharSequence.h
include/Android.Fallbacks.Android_android_text_Editable.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_text_Editable.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_text_GetChars.h: include/Android.android.text.GetChars.h
include/Android.Fallbacks.Android_android_text_GetChars.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_text_GetChars.h: include/Android.java.lang.CharSequence.h
include/Android.Fallbacks.Android_android_text_GetChars.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_text_GetChars.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_text_InputFilter.h: include/Android.android.text.InputFilter.h
include/Android.Fallbacks.Android_android_text_InputFilter.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_text_InputFilter.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_text_InputFilter.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_text_Layout.h: include/Android.android.text.Layout.h
include/Android.Fallbacks.Android_android_text_Layout.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_text_Layout.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_text_Spannable.h: include/Android.android.text.Spannable.h
include/Android.Fallbacks.Android_android_text_Spannable.h: include/Android.android.text.Spanned.h
include/Android.Fallbacks.Android_android_text_Spannable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_text_Spannable.h: include/Android.java.lang.CharSequence.h
include/Android.Fallbacks.Android_android_text_Spannable.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_text_Spannable.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_text_Spanned.h: include/Android.android.text.Spanned.h
include/Android.Fallbacks.Android_android_text_Spanned.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_text_Spanned.h: include/Android.java.lang.CharSequence.h
include/Android.Fallbacks.Android_android_text_Spanned.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_text_Spanned.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_text_TextWatcher.h: include/Android.android.text.TextWatcher.h
include/Android.Fallbacks.Android_android_text_TextWatcher.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_text_TextWatcher.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_text_TextWatcher.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_util_AttributeSet.h: include/Android.android.util.AttributeSet.h
include/Android.Fallbacks.Android_android_util_AttributeSet.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_util_AttributeSet.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_util_AttributeSet.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_util_Property.h: include/Android.android.util.Property.h
include/Android.Fallbacks.Android_android_util_Property.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_util_Property.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h: include/Android.android.view.accessibility.AccessibilityNodeProvider.h
include/Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ActionMode.h: include/Android.android.view.ActionMode.h
include/Android.Fallbacks.Android_android_view_ActionMode.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ActionMode.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ActionModeDLRCallback.h: include/Android.android.view.ActionModeDLRCallback.h
include/Android.Fallbacks.Android_android_view_ActionModeDLRCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ActionModeDLRCallback.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ActionModeDLRCallback.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ActionProvider.h: include/Android.android.view.ActionProvider.h
include/Android.Fallbacks.Android_android_view_ActionProvider.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ActionProvider.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_animation_Animation.h: include/Android.android.view.animation.Animation.h
include/Android.Fallbacks.Android_android_view_animation_Animation.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_animation_Animation.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_animation_AnimationDLRAn-50875199.h: include/Android.android.view.animation.AnimationDLRAnimationListener.h
include/Android.Fallbacks.Android_android_view_animation_AnimationDLRAn-50875199.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_animation_AnimationDLRAn-50875199.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_animation_AnimationDLRAn-50875199.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_animation_Interpolator.h: include/Android.android.animation.TimeInterpolator.h
include/Android.Fallbacks.Android_android_view_animation_Interpolator.h: include/Android.android.view.animation.Interpolator.h
include/Android.Fallbacks.Android_android_view_animation_Interpolator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_animation_Interpolator.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_animation_Interpolator.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback.h: include/Android.android.view.ChoreographerDLRFrameCallback.h
include/Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ContextMenu.h: include/Android.android.view.ContextMenu.h
include/Android.Fallbacks.Android_android_view_ContextMenu.h: include/Android.android.view.Menu.h
include/Android.Fallbacks.Android_android_view_ContextMenu.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ContextMenu.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ContextMenu.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h: include/Android.android.view.ContextMenuDLRContextMenuInfo.h
include/Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_InputEvent.h: include/Android.android.os.Parcelable.h
include/Android.Fallbacks.Android_android_view_InputEvent.h: include/Android.android.view.InputEvent.h
include/Android.Fallbacks.Android_android_view_InputEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_InputEvent.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h: include/Android.android.view.inputmethod.InputConnection.h
include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_Menu.h: include/Android.android.view.Menu.h
include/Android.Fallbacks.Android_android_view_Menu.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_Menu.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_Menu.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_MenuItem.h: include/Android.android.view.MenuItem.h
include/Android.Fallbacks.Android_android_view_MenuItem.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_MenuItem.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_MenuItem.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h: include/Android.android.view.MenuItemDLROnActionExpandListener.h
include/Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-b952820b.h: include/Android.android.view.MenuItemDLROnMenuItemClickListener.h
include/Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-b952820b.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-b952820b.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-b952820b.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_SubMenu.h: include/Android.android.view.Menu.h
include/Android.Fallbacks.Android_android_view_SubMenu.h: include/Android.android.view.SubMenu.h
include/Android.Fallbacks.Android_android_view_SubMenu.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_SubMenu.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_SubMenu.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_SurfaceHolder.h: include/Android.android.view.SurfaceHolder.h
include/Android.Fallbacks.Android_android_view_SurfaceHolder.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_SurfaceHolder.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_SurfaceHolder.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback.h: include/Android.android.view.SurfaceHolderDLRCallback.h
include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h: include/Android.android.view.SurfaceHolderDLRCallback.h
include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h: include/Android.android.view.SurfaceHolderDLRCallback2.h
include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTex-57881719.h: include/Android.android.view.TextureViewDLRSurfaceTextureListener.h
include/Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTex-57881719.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTex-57881719.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTex-57881719.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnAttachStateChan-cad4f1be.h: include/Android.android.view.ViewDLROnAttachStateChangeListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnAttachStateChan-cad4f1be.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnAttachStateChan-cad4f1be.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnAttachStateChan-cad4f1be.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnClickListener.h: include/Android.android.view.ViewDLROnClickListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnClickListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnClickListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnClickListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnCreateContextMe-448f6a4b.h: include/Android.android.view.ViewDLROnCreateContextMenuListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnCreateContextMe-448f6a4b.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnCreateContextMe-448f6a4b.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnCreateContextMe-448f6a4b.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnDragListener.h: include/Android.android.view.ViewDLROnDragListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnDragListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnDragListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnDragListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener.h: include/Android.android.view.ViewDLROnFocusChangeListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnGenericMotionListener.h: include/Android.android.view.ViewDLROnGenericMotionListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnGenericMotionListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnGenericMotionListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnGenericMotionListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnHoverListener.h: include/Android.android.view.ViewDLROnHoverListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnHoverListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnHoverListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnHoverListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnKeyListener.h: include/Android.android.view.ViewDLROnKeyListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnKeyListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnKeyListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnKeyListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnLayoutChangeListener.h: include/Android.android.view.ViewDLROnLayoutChangeListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnLayoutChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnLayoutChangeListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnLayoutChangeListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnLongClickListener.h: include/Android.android.view.ViewDLROnLongClickListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnLongClickListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnLongClickListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnLongClickListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnSystemUiVisibil-1e6ae627.h: include/Android.android.view.ViewDLROnSystemUiVisibilityChangeListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnSystemUiVisibil-1e6ae627.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnSystemUiVisibil-1e6ae627.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnSystemUiVisibil-1e6ae627.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnTouchListener.h: include/Android.android.view.ViewDLROnTouchListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnTouchListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnTouchListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnTouchListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewGroup.h: include/Android.android.view.ViewGroup.h
include/Android.Fallbacks.Android_android_view_ViewGroup.h: include/Android.android.view.ViewParent.h
include/Android.Fallbacks.Android_android_view_ViewGroup.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewGroup.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewGroupDLROnHierarchyC-cdf1f397.h: include/Android.android.view.ViewGroupDLROnHierarchyChangeListener.h
include/Android.Fallbacks.Android_android_view_ViewGroupDLROnHierarchyC-cdf1f397.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewGroupDLROnHierarchyC-cdf1f397.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewGroupDLROnHierarchyC-cdf1f397.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewParent.h: include/Android.android.view.ViewParent.h
include/Android.Fallbacks.Android_android_view_ViewParent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewParent.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewParent.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_webkit_GeolocationPermissions-b666dc8a.h: include/Android.android.webkit.GeolocationPermissionsDLRCallback.h
include/Android.Fallbacks.Android_android_webkit_GeolocationPermissions-b666dc8a.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_webkit_GeolocationPermissions-b666dc8a.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_webkit_GeolocationPermissions-b666dc8a.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_webkit_ValueCallback.h: include/Android.android.webkit.ValueCallback.h
include/Android.Fallbacks.Android_android_webkit_ValueCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_webkit_ValueCallback.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_webkit_ValueCallback.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_webkit_WebChromeClientDLRCust-ce52e805.h: include/Android.android.webkit.WebChromeClientDLRCustomViewCallback.h
include/Android.Fallbacks.Android_android_webkit_WebChromeClientDLRCust-ce52e805.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_webkit_WebChromeClientDLRCust-ce52e805.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_webkit_WebChromeClientDLRCust-ce52e805.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_webkit_WebSettings.h: include/Android.android.webkit.WebSettings.h
include/Android.Fallbacks.Android_android_webkit_WebSettings.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_webkit_WebSettings.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_webkit_WebStorageDLRQuotaUpdater.h: include/Android.android.webkit.WebStorageDLRQuotaUpdater.h
include/Android.Fallbacks.Android_android_webkit_WebStorageDLRQuotaUpdater.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_webkit_WebStorageDLRQuotaUpdater.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_webkit_WebStorageDLRQuotaUpdater.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_widget_AbsSeekBar.h: include/Android.android.widget.AbsSeekBar.h
include/Android.Fallbacks.Android_android_widget_AbsSeekBar.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_widget_AbsSeekBar.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_widget_CompoundButton.h: include/Android.android.widget.CompoundButton.h
include/Android.Fallbacks.Android_android_widget_CompoundButton.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_widget_CompoundButton.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-91091c48.h: include/Android.android.widget.CompoundButtonDLROnCheckedChangeListener.h
include/Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-91091c48.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-91091c48.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-91091c48.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-e452c5ca.h: include/Android.android.widget.SeekBarDLROnSeekBarChangeListener.h
include/Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-e452c5ca.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-e452c5ca.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-e452c5ca.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-1b5558e6.h: include/Android.android.widget.TextViewDLROnEditorActionListener.h
include/Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-1b5558e6.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-1b5558e6.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-1b5558e6.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_io_InputStream.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_io_InputStream.h: include/Android.java.io.InputStream.h
include/Android.Fallbacks.Android_java_io_InputStream.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_lang_CharSequence.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_lang_CharSequence.h: include/Android.java.lang.CharSequence.h
include/Android.Fallbacks.Android_java_lang_CharSequence.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_lang_CharSequence.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_lang_Iterable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_lang_Iterable.h: include/Android.java.lang.Iterable.h
include/Android.Fallbacks.Android_java_lang_Iterable.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_lang_Iterable.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Fallbacks.Android_java_lang_Iterable.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_lang_Runnable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_lang_Runnable.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_lang_Runnable.h: include/Android.java.lang.Runnable.h
include/Android.Fallbacks.Android_java_lang_Runnable.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_util_AbstractCollection.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_util_AbstractCollection.h: include/Android.java.lang.Iterable.h
include/Android.Fallbacks.Android_java_util_AbstractCollection.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_util_AbstractCollection.h: include/Android.java.util.AbstractCollection.h
include/Android.Fallbacks.Android_java_util_AbstractCollection.h: include/Android.java.util.Collection.h
include/Android.Fallbacks.Android_java_util_AbstractCollection.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Fallbacks.Android_java_util_AbstractCollection.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_util_AbstractList.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_util_AbstractList.h: include/Android.java.lang.Iterable.h
include/Android.Fallbacks.Android_java_util_AbstractList.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_util_AbstractList.h: include/Android.java.util.AbstractList.h
include/Android.Fallbacks.Android_java_util_AbstractList.h: include/Android.java.util.Collection.h
include/Android.Fallbacks.Android_java_util_AbstractList.h: include/Android.java.util.List.h
include/Android.Fallbacks.Android_java_util_AbstractList.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Fallbacks.Android_java_util_AbstractList.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_util_Collection.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_util_Collection.h: include/Android.java.lang.Iterable.h
include/Android.Fallbacks.Android_java_util_Collection.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_util_Collection.h: include/Android.java.util.Collection.h
include/Android.Fallbacks.Android_java_util_Collection.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Fallbacks.Android_java_util_Collection.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_util_Iterator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_util_Iterator.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_util_Iterator.h: include/Android.java.util.Iterator.h
include/Android.Fallbacks.Android_java_util_Iterator.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_util_List.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_util_List.h: include/Android.java.lang.Iterable.h
include/Android.Fallbacks.Android_java_util_List.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_util_List.h: include/Android.java.util.Collection.h
include/Android.Fallbacks.Android_java_util_List.h: include/Android.java.util.List.h
include/Android.Fallbacks.Android_java_util_List.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Fallbacks.Android_java_util_List.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_util_ListIterator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_util_ListIterator.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_util_ListIterator.h: include/Android.java.util.Iterator.h
include/Android.Fallbacks.Android_java_util_ListIterator.h: include/Android.java.util.ListIterator.h
include/Android.Fallbacks.Android_java_util_ListIterator.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_util_Observer.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_util_Observer.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_util_Observer.h: include/Android.java.util.Observer.h
include/Android.Fallbacks.Android_java_util_Observer.h: include/Uno.IDisposable.h

include/Android.java.io.FileDescriptor.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.io.FileDescriptor.h: include/Android.java.lang.Object.h
include/Android.java.io.FileDescriptor.h: include/Uno.IDisposable.h

include/Android.java.io.InputStream.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.io.InputStream.h: include/Android.java.lang.Object.h
include/Android.java.io.InputStream.h: include/Uno.IDisposable.h

include/Android.java.lang.CharSequence.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.CharSequence.h: include/Uno.Object.h

include/Android.java.lang.Class.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.Class.h: include/Android.java.lang.Object.h
include/Android.java.lang.Class.h: include/Uno.IDisposable.h

include/Android.java.lang.Iterable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.Iterable.h: include/Android.java.lang.Object.h
include/Android.java.lang.Iterable.h: include/Uno.Collections.IEnumerable-1.h
include/Android.java.lang.Iterable.h: include/Uno.Object.h

include/Android.java.lang.Object.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.Object.h: include/Android.Base.Wrappers.JWrapper.h
include/Android.java.lang.Object.h: include/Uno.IDisposable.h

include/Android.java.lang.reflect.AccessibleObject.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.reflect.AccessibleObject.h: include/Android.java.lang.Object.h
include/Android.java.lang.reflect.AccessibleObject.h: include/Uno.IDisposable.h

include/Android.java.lang.reflect.Field.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.reflect.Field.h: include/Android.java.lang.reflect.AccessibleObject.h
include/Android.java.lang.reflect.Field.h: include/Uno.IDisposable.h

include/Android.java.lang.Runnable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.Runnable.h: include/Uno.Object.h

include/Android.java.lang.String.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.String.h: include/Android.java.lang.CharSequence.h
include/Android.java.lang.String.h: include/Android.java.lang.Object.h
include/Android.java.lang.String.h: include/Uno.IDisposable.h

include/Android.java.lang.System.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.System.h: include/Android.java.lang.Object.h
include/Android.java.lang.System.h: include/Uno.IDisposable.h

include/Android.java.lang.Thread.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.Thread.h: include/Android.java.lang.Object.h
include/Android.java.lang.Thread.h: include/Android.java.lang.Runnable.h
include/Android.java.lang.Thread.h: include/Uno.IDisposable.h

include/Android.java.net.URL.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.net.URL.h: include/Android.java.lang.Object.h
include/Android.java.net.URL.h: include/Uno.IDisposable.h

include/Android.java.util.AbstractCollection.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.util.AbstractCollection.h: include/Android.java.lang.Iterable.h
include/Android.java.util.AbstractCollection.h: include/Android.java.lang.Object.h
include/Android.java.util.AbstractCollection.h: include/Android.java.util.Collection.h
include/Android.java.util.AbstractCollection.h: include/Uno.Collections.IEnumerable-1.h
include/Android.java.util.AbstractCollection.h: include/Uno.IDisposable.h

include/Android.java.util.AbstractList.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.util.AbstractList.h: include/Android.java.lang.Iterable.h
include/Android.java.util.AbstractList.h: include/Android.java.lang.Object.h
include/Android.java.util.AbstractList.h: include/Android.java.util.AbstractCollection.h
include/Android.java.util.AbstractList.h: include/Android.java.util.Collection.h
include/Android.java.util.AbstractList.h: include/Android.java.util.List.h
include/Android.java.util.AbstractList.h: include/Uno.Collections.IEnumerable-1.h
include/Android.java.util.AbstractList.h: include/Uno.IDisposable.h

include/Android.java.util.ArrayList.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.util.ArrayList.h: include/Android.java.lang.Iterable.h
include/Android.java.util.ArrayList.h: include/Android.java.lang.Object.h
include/Android.java.util.ArrayList.h: include/Android.java.util.AbstractList.h
include/Android.java.util.ArrayList.h: include/Android.java.util.Collection.h
include/Android.java.util.ArrayList.h: include/Android.java.util.List.h
include/Android.java.util.ArrayList.h: include/Uno.Collections.IEnumerable-1.h
include/Android.java.util.ArrayList.h: include/Uno.IDisposable.h

include/Android.java.util.Collection.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.util.Collection.h: include/Android.java.lang.Iterable.h
include/Android.java.util.Collection.h: include/Android.java.lang.Object.h
include/Android.java.util.Collection.h: include/Uno.Collections.IEnumerable-1.h
include/Android.java.util.Collection.h: include/Uno.Object.h

include/Android.java.util.Iterator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.util.Iterator.h: include/Uno.Object.h

include/Android.java.util.List.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.util.List.h: include/Android.java.lang.Iterable.h
include/Android.java.util.List.h: include/Android.java.lang.Object.h
include/Android.java.util.List.h: include/Android.java.util.Collection.h
include/Android.java.util.List.h: include/Uno.Collections.IEnumerable-1.h
include/Android.java.util.List.h: include/Uno.Object.h

include/Android.java.util.ListIterator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.util.ListIterator.h: include/Android.java.util.Iterator.h
include/Android.java.util.ListIterator.h: include/Uno.Object.h

include/Android.java.util.Observable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.util.Observable.h: include/Android.java.lang.Object.h
include/Android.java.util.Observable.h: include/Uno.IDisposable.h

include/Android.java.util.Observer.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.util.Observer.h: include/Uno.Object.h

include/Android.Runtime.BooleanArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.BooleanArray.h: include/Android.java.lang.Object.h
include/Android.Runtime.BooleanArray.h: include/Uno.Bool.h
include/Android.Runtime.BooleanArray.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Runtime.BooleanArray.h: include/Uno.IDisposable.h

include/Android.Runtime.ByteArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.ByteArray.h: include/Android.java.lang.Object.h
include/Android.Runtime.ByteArray.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Runtime.ByteArray.h: include/Uno.IDisposable.h
include/Android.Runtime.ByteArray.h: include/Uno.SByte.h

include/Android.Runtime.CharArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.CharArray.h: include/Android.java.lang.Object.h
include/Android.Runtime.CharArray.h: include/Uno.Char.h
include/Android.Runtime.CharArray.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Runtime.CharArray.h: include/Uno.IDisposable.h

include/Android.Runtime.DoubleArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.DoubleArray.h: include/Android.java.lang.Object.h
include/Android.Runtime.DoubleArray.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Runtime.DoubleArray.h: include/Uno.Double.h
include/Android.Runtime.DoubleArray.h: include/Uno.IDisposable.h

include/Android.Runtime.FloatArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.FloatArray.h: include/Android.java.lang.Object.h
include/Android.Runtime.FloatArray.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Runtime.FloatArray.h: include/Uno.Float.h
include/Android.Runtime.FloatArray.h: include/Uno.IDisposable.h

include/Android.Runtime.IntArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.IntArray.h: include/Android.java.lang.Object.h
include/Android.Runtime.IntArray.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Runtime.IntArray.h: include/Uno.IDisposable.h
include/Android.Runtime.IntArray.h: include/Uno.Int.h

include/Android.Runtime.JAEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Android.Runtime.JAEnumerator-1.h: include/Uno.Collections.IEnumerator-1.h
include/Android.Runtime.JAEnumerator-1.h: include/Uno.IDisposable.h
include/Android.Runtime.JAEnumerator-1.h: include/Uno.Object.h

include/Android.Runtime.JavaGetter-1.h: include/Uno.Delegate.h

include/Android.Runtime.JEnumerator.h: include/Android.java.lang.Object.h
include/Android.Runtime.JEnumerator.h: include/Uno.Collections.IEnumerator.h
include/Android.Runtime.JEnumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Android.Runtime.JEnumerator.h: include/Uno.IDisposable.h
include/Android.Runtime.JEnumerator.h: include/Uno.Object.h

include/Android.Runtime.JOAEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Android.Runtime.JOAEnumerator-1.h: include/Uno.Collections.IEnumerator-1.h
include/Android.Runtime.JOAEnumerator-1.h: include/Uno.IDisposable.h
include/Android.Runtime.JOAEnumerator-1.h: include/Uno.Object.h

include/Android.Runtime.LongArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.LongArray.h: include/Android.java.lang.Object.h
include/Android.Runtime.LongArray.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Runtime.LongArray.h: include/Uno.IDisposable.h
include/Android.Runtime.LongArray.h: include/Uno.Long.h

include/Android.Runtime.NativeActivityHelper.h: include/Uno.h

include/Android.Runtime.ObjectArray-1.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.ObjectArray-1.h: include/Android.java.lang.Object.h
include/Android.Runtime.ObjectArray-1.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Runtime.ObjectArray-1.h: include/Uno.IDisposable.h
include/Android.Runtime.ObjectArray-1.h: include/Uno.Object.h

include/Android.Runtime.ObjectArrayAUX.h: include/Uno.h

include/Android.Runtime.RunnableAction.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.RunnableAction.h: include/Android.java.lang.Object.h
include/Android.Runtime.RunnableAction.h: include/Android.java.lang.Runnable.h
include/Android.Runtime.RunnableAction.h: include/Uno.IDisposable.h

include/Android.Runtime.ShortArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.ShortArray.h: include/Android.java.lang.Object.h
include/Android.Runtime.ShortArray.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Runtime.ShortArray.h: include/Uno.IDisposable.h
include/Android.Runtime.ShortArray.h: include/Uno.Short.h

include/Android.Runtime.UnoHelper.h: include/Uno.h

include/android_semaphore.h: include/Uno/Uno.h



include/duktape_helpers.h: include/Uno/Uno.h

include/Experimental.Cache.CacheLoaded.h: include/Uno.Delegate.h

include/Experimental.Cache.ICache.h: include/Uno.Object.h

include/Experimental.Cache.ICacheReader.h: include/Uno.Object.h

include/Experimental.Cache.ICacheWriter.h: include/Uno.Object.h

include/Experimental.Cache.ProxyStream.h: include/Uno.IDisposable.h
include/Experimental.Cache.ProxyStream.h: include/Uno.IO.Stream.h

include/Experimental.Http.BinaryLoader.h: include/Experimental.Http.Loader.h

include/Experimental.Http.HttpLoader.h: include/Uno.h

include/Experimental.Http.HttpResponseHeader.h: include/Uno.Object.h

include/Experimental.Http.Internal.DateUtil.h: include/Uno.h

include/Experimental.Http.Loader.h: include/Uno.Object.h

include/Experimental.Http.LoaderConst.h: include/Uno.h

include/Experimental.Http.TextLoader.h: include/Experimental.Http.Loader.h

include/Experimental.Physics.BasicBoundedRegion2D.h: include/Experimental.Physics.BoundedRegion2D.h
include/Experimental.Physics.BasicBoundedRegion2D.h: include/Experimental.Physics.MotionSimulation-1.h
include/Experimental.Physics.BasicBoundedRegion2D.h: include/Experimental.Physics.Simulation.h
include/Experimental.Physics.BasicBoundedRegion2D.h: include/Uno.Float2.h
include/Experimental.Physics.BasicBoundedRegion2D.h: include/Uno.Object.h

include/Experimental.Physics.BasicBoundedRegion2D.MoveMode.h: include/Uno.Int.h

include/Experimental.Physics.BoundedRegion2D.h: include/Experimental.Physics.MotionSimulation-1.h
include/Experimental.Physics.BoundedRegion2D.h: include/Experimental.Physics.Simulation.h
include/Experimental.Physics.BoundedRegion2D.h: include/Uno.Float2.h
include/Experimental.Physics.BoundedRegion2D.h: include/Uno.Object.h

include/Experimental.Physics.DestinationSimulation-1.h: include/Experimental.Physics.MotionSimulation-1.h
include/Experimental.Physics.DestinationSimulation-1.h: include/Experimental.Physics.Simulation.h
include/Experimental.Physics.DestinationSimulation-1.h: include/Uno.Object.h

include/Experimental.Physics.DestinationSimulationFactory-1.h: include/Uno.h

include/Experimental.Physics.DestinationSimulationType.h: include/Uno.Int.h

include/Experimental.Physics.ElasticForce-1.h: include/Experimental.Physics.DestinationSimulation-1.h
include/Experimental.Physics.ElasticForce-1.h: include/Experimental.Physics.MotionSimulation-1.h
include/Experimental.Physics.ElasticForce-1.h: include/Experimental.Physics.Simulation.h
include/Experimental.Physics.ElasticForce-1.h: include/Uno.Object.h

include/Experimental.Physics.Friction-1.h: include/Experimental.Physics.MotionSimulation-1.h
include/Experimental.Physics.Friction-1.h: include/Experimental.Physics.Simulation.h
include/Experimental.Physics.Friction-1.h: include/Uno.Object.h

include/Experimental.Physics.MotionSimulation-1.h: include/Experimental.Physics.Simulation.h
include/Experimental.Physics.MotionSimulation-1.h: include/Uno.Object.h

include/Experimental.Physics.PointerVelocity-1.h: include/Uno.Object.h

include/Experimental.Physics.Simulation.h: include/Uno.Object.h

include/Experimental.Physics.SmoothSnap-1.h: include/Experimental.Physics.DestinationSimulation-1.h
include/Experimental.Physics.SmoothSnap-1.h: include/Experimental.Physics.MotionSimulation-1.h
include/Experimental.Physics.SmoothSnap-1.h: include/Experimental.Physics.Simulation.h
include/Experimental.Physics.SmoothSnap-1.h: include/Uno.Object.h

include/Experimental.TextureLoader.Callback.h: include/Uno.Object.h

include/Experimental.TextureLoader.InvalidContentTypeException.h: include/Uno.Exception.h

include/Experimental.TextureLoader.TextureLoader.h: include/Uno.h

include/Experimental.TextureLoader.TextureLoaderImpl.h: include/Uno.h

include/Fuse.Android.AndroidExtensions.h: include/Uno.h

include/Fuse.Android.BindingView.h: include/Uno.h
include/Fuse.Android.BindingView.h: include/Uno/Platform2.h

include/Fuse.Android.Blitter.h: include/Uno.Float2.h
include/Fuse.Android.Blitter.h: include/Uno.Object.h
include/Fuse.Android.Blitter.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Android.Controls.AndroidExtensions.h: include/Uno.h

include/Fuse.Android.Controls.AndroidSeekBar.h: include/Android.android.widget.SeekBar.h
include/Fuse.Android.Controls.AndroidSeekBar.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.AndroidSeekBar.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls.BitmapFactory.h: include/Uno.h

include/Fuse.Android.Controls.Button.h: include/Fuse.Android.Controls.Control-1.h
include/Fuse.Android.Controls.Button.h: include/Fuse.Controls.Button.h
include/Fuse.Android.Controls.Button.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.CheckBox.h: include/Fuse.Android.Controls.CompoundButton.h
include/Fuse.Android.Controls.CheckBox.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.Circle.h: include/Fuse.Android.Controls.Shape-1.h
include/Fuse.Android.Controls.Circle.h: include/Fuse.Controls.Circle.h
include/Fuse.Android.Controls.Circle.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.CompoundButton.h: include/Fuse.Android.Controls.Control-1.h
include/Fuse.Android.Controls.CompoundButton.h: include/Fuse.Controls.ToggleControl.h
include/Fuse.Android.Controls.CompoundButton.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.CompoundButton.Listener.h: include/Android.android.widget.CompoundButtonDLROnCheckedChangeListener.h
include/Fuse.Android.Controls.CompoundButton.Listener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.CompoundButton.Listener.h: include/Android.java.lang.Object.h
include/Fuse.Android.Controls.CompoundButton.Listener.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls.Control-1.h: include/Fuse.Android.Controls.Element.h
include/Fuse.Android.Controls.Control-1.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.EditorActionArgs.h: include/Uno.EventArgs.h

include/Fuse.Android.Controls.EditorActionHandler.h: include/Uno.Delegate.h

include/Fuse.Android.Controls.EditorActionListener.h: include/Android.android.widget.TextViewDLROnEditorActionListener.h
include/Fuse.Android.Controls.EditorActionListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.EditorActionListener.h: include/Android.java.lang.Object.h
include/Fuse.Android.Controls.EditorActionListener.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls.Element.h: include/Fuse.Node.h
include/Fuse.Android.Controls.Element.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Android.Controls.Element.h: include/Uno.Float2.h
include/Fuse.Android.Controls.Element.h: include/Uno.Float4.h
include/Fuse.Android.Controls.Element.h: include/Uno.Rect.h

include/Fuse.Android.Controls.FocusManager.h: include/Uno.Object.h

include/Fuse.Android.Controls.Image.h: include/Fuse.Android.Controls.Control-1.h
include/Fuse.Android.Controls.Image.h: include/Fuse.Controls.Image.h
include/Fuse.Android.Controls.Image.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.Image.ImageLoader.BitmapLoader.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.Image.ImageLoader.BitmapLoader.h: include/Android.java.lang.Object.h
include/Fuse.Android.Controls.Image.ImageLoader.BitmapLoader.h: include/Android.java.lang.Runnable.h
include/Fuse.Android.Controls.Image.ImageLoader.BitmapLoader.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls.Image.ImageLoader.h: include/Uno.Object.h

include/Fuse.Android.Controls.JsResultHandler.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.JsResultHandler.h: include/Android.java.lang.Object.h
include/Fuse.Android.Controls.JsResultHandler.h: include/Android.java.util.Observer.h
include/Fuse.Android.Controls.JsResultHandler.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls.MapView.h: include/Fuse.Android.Controls.Control-1.h
include/Fuse.Android.Controls.MapView.h: include/Fuse.Controls.MapView.h
include/Fuse.Android.Controls.MapView.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.PlainTextEdit.h: include/Fuse.Android.Controls.TextEdit.h
include/Fuse.Android.Controls.PlainTextEdit.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.ProgressChangedHandler.h: include/Uno.Delegate.h

include/Fuse.Android.Controls.ProgressChangedListener.h: include/Android.android.widget.SeekBarDLROnSeekBarChangeListener.h
include/Fuse.Android.Controls.ProgressChangedListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.ProgressChangedListener.h: include/Android.java.lang.Object.h
include/Fuse.Android.Controls.ProgressChangedListener.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls.RadioButton.h: include/Fuse.Android.Controls.CompoundButton.h
include/Fuse.Android.Controls.RadioButton.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.Rectangle.h: include/Fuse.Android.Controls.Shape-1.h
include/Fuse.Android.Controls.Rectangle.h: include/Fuse.Controls.Rectangle.h
include/Fuse.Android.Controls.Rectangle.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.SeekBar.h: include/Fuse.Android.Controls.Control-1.h
include/Fuse.Android.Controls.SeekBar.h: include/Fuse.Controls.Slider.h
include/Fuse.Android.Controls.SeekBar.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.ShaderFactory.h: include/Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h
include/Fuse.Android.Controls.ShaderFactory.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.ShaderFactory.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls.Shape-1.h: include/Fuse.Android.Controls.Control-1.h
include/Fuse.Android.Controls.Shape-1.h: include/Fuse.Controls.Shape.h
include/Fuse.Android.Controls.Shape-1.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.Switch.h: include/Fuse.Android.Controls.CompoundButton.h
include/Fuse.Android.Controls.Switch.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.TextChangedHandler.h: include/Uno.Delegate.h

include/Fuse.Android.Controls.TextChangedListener.h: include/Android.android.text.TextWatcher.h
include/Fuse.Android.Controls.TextChangedListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.TextChangedListener.h: include/Android.java.lang.Object.h
include/Fuse.Android.Controls.TextChangedListener.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls.TextEdit.h: include/Fuse.Android.Controls.TextViewBase-1.h
include/Fuse.Android.Controls.TextEdit.h: include/Fuse.Controls.TextEdit.h
include/Fuse.Android.Controls.TextEdit.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.TextView.h: include/Fuse.Android.Controls.TextViewBase-1.h
include/Fuse.Android.Controls.TextView.h: include/Fuse.Controls.TextControl.h
include/Fuse.Android.Controls.TextView.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.TextViewBase-1.h: include/Fuse.Android.Controls.Control-1.h
include/Fuse.Android.Controls.TextViewBase-1.h: include/Fuse.Controls.TextControl.h
include/Fuse.Android.Controls.TextViewBase-1.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.ToggleButton.h: include/Fuse.Android.Controls.CompoundButton.h
include/Fuse.Android.Controls.ToggleButton.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.WebChromeClient.h: include/Android.android.webkit.WebChromeClient.h
include/Fuse.Android.Controls.WebChromeClient.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.WebChromeClient.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls.WebView.h: include/Fuse.Android.Controls.Control-1.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Controls.IWebView.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Controls.WebView.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Triggers.IProgress.h

include/Fuse.Android.Controls.WebViewClient.h: include/Android.android.webkit.WebViewClient.h
include/Fuse.Android.Controls.WebViewClient.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.WebViewClient.h: include/Uno.IDisposable.h

include/Fuse.Android.FocusChangedHandler.h: include/Uno.Delegate.h

include/Fuse.Android.FocusChangedListener.h: include/Android.android.view.ViewDLROnFocusChangeListener.h
include/Fuse.Android.FocusChangedListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.FocusChangedListener.h: include/Android.java.lang.Object.h
include/Fuse.Android.FocusChangedListener.h: include/Uno.IDisposable.h

include/Fuse.Android.Helpers.h: include/Uno.h

include/Fuse.Android.InputDispatch.h: include/Uno.h

include/Fuse.Android.InputDispatch.TouchListener.h: include/Android.android.view.ViewDLROnTouchListener.h
include/Fuse.Android.InputDispatch.TouchListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.InputDispatch.TouchListener.h: include/Android.java.lang.Object.h
include/Fuse.Android.InputDispatch.TouchListener.h: include/Uno.IDisposable.h

include/Fuse.Android.NativeStyle.h: include/Fuse.Style.h
include/Fuse.Android.NativeStyle.h: include/Uno.UX.ITemplate.h

include/Fuse.Android.NativeStyle.Template.h: include/Fuse.Controls.GraphicsView.h
include/Fuse.Android.NativeStyle.Template.h: include/Uno.UX.ITemplate.h
include/Fuse.Android.NativeStyle.Template.h: include/Uno.UX.Template-1.h

include/Fuse.Android.NativeStyle.Template.Template1.h: include/Fuse.Controls.TextBlock.h
include/Fuse.Android.NativeStyle.Template.Template1.h: include/Uno.UX.ITemplate.h
include/Fuse.Android.NativeStyle.Template.Template1.h: include/Uno.UX.Template-1.h

include/Fuse.Android.NativeStyle.Template.Template2.Factory.h: include/Uno.Object.h
include/Fuse.Android.NativeStyle.Template.Template2.Factory.h: include/Uno.UX.IFactory.h

include/Fuse.Android.NativeStyle.Template.Template2.Factory1.h: include/Uno.Object.h
include/Fuse.Android.NativeStyle.Template.Template2.Factory1.h: include/Uno.UX.IFactory.h

include/Fuse.Android.NativeStyle.Template.Template2.h: include/Fuse.Controls.PlainTextEdit.h
include/Fuse.Android.NativeStyle.Template.Template2.h: include/Uno.UX.ITemplate.h
include/Fuse.Android.NativeStyle.Template.Template2.h: include/Uno.UX.Template-1.h

include/Fuse.Android.NativeTemplate.h: include/Uno.Object.h
include/Fuse.Android.NativeTemplate.h: include/Uno.UX.ITemplate.h

include/Fuse.Android.NativeViews.ContentControl.h: include/Fuse.Android.NativeViews.ParentNativeView-1.h
include/Fuse.Android.NativeViews.ContentControl.h: include/Fuse.Controls.ContentControl.h

include/Fuse.Android.NativeViews.GLSurfaceTextureListener.h: include/Android.android.view.TextureViewDLRSurfaceTextureListener.h
include/Fuse.Android.NativeViews.GLSurfaceTextureListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.NativeViews.GLSurfaceTextureListener.h: include/Android.java.lang.Object.h
include/Fuse.Android.NativeViews.GLSurfaceTextureListener.h: include/Source/Graphics/GLHelper.h
include/Fuse.Android.NativeViews.GLSurfaceTextureListener.h: include/Uno.IDisposable.h

include/Fuse.Android.NativeViews.GraphicsView.h: include/Fuse.Android.NativeViews.ParentNativeView-1.h
include/Fuse.Android.NativeViews.GraphicsView.h: include/Fuse.Controls.GraphicsView.h
include/Fuse.Android.NativeViews.GraphicsView.h: include/Source/Graphics/GLHelper.h

include/Fuse.Android.NativeViews.HorizontalScrollView.h: include/Android.android.view.ViewParent.h
include/Fuse.Android.NativeViews.HorizontalScrollView.h: include/Android.android.widget.HorizontalScrollView.h
include/Fuse.Android.NativeViews.HorizontalScrollView.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.NativeViews.HorizontalScrollView.h: include/Uno.IDisposable.h

include/Fuse.Android.NativeViews.LeafNativeView.h: include/Fuse.Android.NativeViews.NativeView.h

include/Fuse.Android.NativeViews.NativeView.h: include/Fuse.Behavior.h
include/Fuse.Android.NativeViews.NativeView.h: include/Uno.Float2.h
include/Fuse.Android.NativeViews.NativeView.h: include/Uno.Float4x4.h

include/Fuse.Android.NativeViews.NativeViewHost.h: include/Fuse.Android.NativeViews.ParentNativeView-1.h
include/Fuse.Android.NativeViews.NativeViewHost.h: include/Fuse.Controls.NativeViewHost.h

include/Fuse.Android.NativeViews.Panel.h: include/Fuse.Android.NativeViews.ParentNativeView-1.h
include/Fuse.Android.NativeViews.Panel.h: include/Fuse.Controls.Panel.h

include/Fuse.Android.NativeViews.ParentNativeView-1.h: include/Fuse.Android.NativeViews.NativeView.h

include/Fuse.Android.NativeViews.ScrollView.h: include/Fuse.Android.NativeViews.ParentNativeView-1.h
include/Fuse.Android.NativeViews.ScrollView.h: include/Fuse.Controls.ScrollView.h

include/Fuse.Android.NativeViews.SurfaceCallback.h: include/Android.android.view.SurfaceHolderDLRCallback.h
include/Fuse.Android.NativeViews.SurfaceCallback.h: include/Android.android.view.SurfaceHolderDLRCallback2.h
include/Fuse.Android.NativeViews.SurfaceCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.NativeViews.SurfaceCallback.h: include/Android.java.lang.Object.h
include/Fuse.Android.NativeViews.SurfaceCallback.h: include/Source/Graphics/GLHelper.h
include/Fuse.Android.NativeViews.SurfaceCallback.h: include/Uno.IDisposable.h

include/Fuse.Android.NativeViews.SurfaceView.h: include/Fuse.Android.NativeViews.GraphicsView.h

include/Fuse.Android.NativeViews.TextureView.h: include/Fuse.Android.NativeViews.GraphicsView.h

include/Fuse.Android.NativeViews.VerticalScrollView.h: include/Android.android.view.ViewParent.h
include/Fuse.Android.NativeViews.VerticalScrollView.h: include/Android.android.widget.ScrollView.h
include/Fuse.Android.NativeViews.VerticalScrollView.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.NativeViews.VerticalScrollView.h: include/Uno.IDisposable.h

include/Fuse.Android.RootView.h: include/Uno.Object.h

include/Fuse.Android.RootViewContainer.h: include/Android.android.view.ViewParent.h
include/Fuse.Android.RootViewContainer.h: include/Android.android.widget.RelativeLayout.h
include/Fuse.Android.RootViewContainer.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.RootViewContainer.h: include/Uno.IDisposable.h

include/Fuse.Android.TextControlLayout.h: include/Uno.Object.h
include/Fuse.Android.TextControlLayout.h: include/Uno.Recti.h

include/Fuse.Android.TextRenderer.BackgroundRender.h: include/Uno.Float4.h
include/Fuse.Android.TextRenderer.BackgroundRender.h: include/Uno.Object.h
include/Fuse.Android.TextRenderer.BackgroundRender.h: include/Uno.Recti.h

include/Fuse.Android.TextRenderer.h: include/Fuse.Controls.Graphics.TextVisual.h
include/Fuse.Android.TextRenderer.h: include/Fuse.Resources.ISoftDisposable.h
include/Fuse.Android.TextRenderer.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.TypefaceCache.h: include/Uno.h

include/Fuse.Animations.AnimationVariant.h: include/Uno.Int.h

include/Fuse.Animations.Animator.h: include/Uno.Object.h

include/Fuse.Animations.AnimatorState.h: include/Uno.Object.h

include/Fuse.Animations.AnimatorVariant.h: include/Uno.Int.h

include/Fuse.Animations.Attractor-1.h: include/Fuse.Behavior.h

include/Fuse.Animations.AverageMasterProperty-1.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.AverageMasterProperty-1.h: include/Fuse.Animations.MasterProperty-1.h
include/Fuse.Animations.AverageMasterProperty-1.h: include/Fuse.Animations.MasterPropertyGet.h
include/Fuse.Animations.AverageMasterProperty-1.h: include/Uno.Object.h

include/Fuse.Animations.AverageMasterTransform.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.AverageMasterTransform.h: include/Fuse.Animations.MasterTransform.h

include/Fuse.Animations.AverageMixer.h: include/Fuse.Animations.IMixer.h
include/Fuse.Animations.AverageMixer.h: include/Fuse.Animations.MixerBase.h

include/Fuse.Animations.Change-1.h: include/Fuse.Animations.TrackAnimator.h

include/Fuse.Animations.ContinuousTrackChangeState-1.h: include/Fuse.Animations.TrackAnimatorState.h

include/Fuse.Animations.ContinuousTrackProvider.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.ContinuousTrackProvider.h: include/Uno.Object.h

include/Fuse.Animations.Converter-1.h: include/Uno.Object.h
include/Fuse.Animations.Converter-1.h: include/Uno.Float4.h

include/Fuse.Animations.ConverterDouble.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterDouble.h: include/Uno.Double.h

include/Fuse.Animations.ConverterFloat.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterFloat.h: include/Uno.Float.h

include/Fuse.Animations.ConverterFloat2.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterFloat2.h: include/Uno.Float2.h

include/Fuse.Animations.ConverterFloat3.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterFloat3.h: include/Uno.Float3.h

include/Fuse.Animations.ConverterFloat4.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterFloat4.h: include/Uno.Float4.h

include/Fuse.Animations.CreateStateParams.h: include/Uno.Object.h

include/Fuse.Animations.Cycle-1.h: include/Fuse.Animations.OpenAnimator.h

include/Fuse.Animations.CycleState-1.h: include/Fuse.Animations.OpenAnimatorState.h

include/Fuse.Animations.CycleWaveform.h: include/Uno.Int.h

include/Fuse.Animations.DiscreteKeyframeTrack.h: include/Fuse.Animations.DiscreteTrackProvider.h
include/Fuse.Animations.DiscreteKeyframeTrack.h: include/Fuse.Animations.ITrackProvider.h
include/Fuse.Animations.DiscreteKeyframeTrack.h: include/Fuse.Animations.KeyframeTrack.h
include/Fuse.Animations.DiscreteKeyframeTrack.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.DiscreteKeyframeTrack.h: include/Uno.Object.h

include/Fuse.Animations.DiscreteMasterProperty-1.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.DiscreteMasterProperty-1.h: include/Fuse.Animations.MasterProperty-1.h
include/Fuse.Animations.DiscreteMasterProperty-1.h: include/Fuse.Animations.MasterPropertyGet.h
include/Fuse.Animations.DiscreteMasterProperty-1.h: include/Uno.Object.h

include/Fuse.Animations.DiscreteMasterTransform.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.DiscreteMasterTransform.h: include/Fuse.Animations.MasterTransform.h

include/Fuse.Animations.DiscreteMixer.h: include/Fuse.Animations.IMixer.h
include/Fuse.Animations.DiscreteMixer.h: include/Fuse.Animations.MixerBase.h

include/Fuse.Animations.DiscreteSingleTrack.h: include/Fuse.Animations.DiscreteTrackProvider.h
include/Fuse.Animations.DiscreteSingleTrack.h: include/Fuse.Animations.ITrackProvider.h
include/Fuse.Animations.DiscreteSingleTrack.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.DiscreteSingleTrack.h: include/Uno.Object.h

include/Fuse.Animations.DiscreteTrackChangeState-1.h: include/Fuse.Animations.TrackAnimatorState.h

include/Fuse.Animations.DiscreteTrackProvider.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.DiscreteTrackProvider.h: include/Uno.Object.h

include/Fuse.Animations.Easing.h: include/Uno.Int.h

include/Fuse.Animations.EasingFunction.h: include/Uno.Delegate.h

include/Fuse.Animations.EasingFunctions.h: include/Uno.h

include/Fuse.Animations.EasingTrack.h: include/Fuse.Animations.ContinuousTrackProvider.h
include/Fuse.Animations.EasingTrack.h: include/Fuse.Animations.ITrackProvider.h
include/Fuse.Animations.EasingTrack.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.EasingTrack.h: include/Uno.Object.h

include/Fuse.Animations.FastMatrixTransform.h: include/Fuse.Transform.h

include/Fuse.Animations.IMixer.h: include/Uno.Object.h

include/Fuse.Animations.IMixerHandle-1.h: include/Uno.Object.h

include/Fuse.Animations.IMixerMaster.h: include/Uno.Object.h

include/Fuse.Animations.IResize.h: include/Uno.Object.h
include/Fuse.Animations.IResize.h: include/Uno.Float2.h

include/Fuse.Animations.IResizeMode.h: include/Fuse.ITransformMode.h
include/Fuse.Animations.IResizeMode.h: include/Uno.Object.h

include/Fuse.Animations.ITrackProvider.h: include/Uno.Object.h

include/Fuse.Animations.Keyframe.h: include/Uno.Float4.h
include/Fuse.Animations.Keyframe.h: include/Uno.Object.h

include/Fuse.Animations.KeyframeInterpolation.h: include/Uno.Int.h

include/Fuse.Animations.KeyframeTrack.h: include/Uno.Object.h

include/Fuse.Animations.MasterBase-1.GFWResult.h: include/Uno.Object.h

include/Fuse.Animations.MasterBase-1.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.MasterBase-1.h: include/Uno.Object.h

include/Fuse.Animations.MasterProperty-1.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.MasterProperty-1.h: include/Fuse.Animations.MasterBase-1.h
include/Fuse.Animations.MasterProperty-1.h: include/Fuse.Animations.MasterPropertyGet.h
include/Fuse.Animations.MasterProperty-1.h: include/Uno.Object.h

include/Fuse.Animations.MasterPropertyGet.h: include/Uno.Object.h

include/Fuse.Animations.MasterTransform.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.MasterTransform.h: include/Fuse.Animations.MasterBase-1.h
include/Fuse.Animations.MasterTransform.h: include/Fuse.Transform.h

include/Fuse.Animations.Mixer.h: include/Uno.Object.h

include/Fuse.Animations.MixerBase.h: include/Fuse.Animations.IMixer.h
include/Fuse.Animations.MixerBase.h: include/Uno.Object.h

include/Fuse.Animations.MixerHandle-1.h: include/Fuse.Animations.IMixerHandle-1.h
include/Fuse.Animations.MixerHandle-1.h: include/Uno.Object.h

include/Fuse.Animations.MixOp.h: include/Uno.Int.h

include/Fuse.Animations.Move.h: include/Fuse.Animations.TransformAnimator-1.h
include/Fuse.Animations.Move.h: include/Fuse.Translation.h

include/Fuse.Animations.Nothing.h: include/Fuse.Animations.TrackAnimator.h

include/Fuse.Animations.NothingAnimatorState.h: include/Fuse.Animations.TrackAnimatorState.h

include/Fuse.Animations.OpenAnimator.h: include/Fuse.Animations.Animator.h

include/Fuse.Animations.OpenAnimatorState.h: include/Fuse.Animations.AnimatorState.h

include/Fuse.Animations.Player.h: include/Uno.Object.h

include/Fuse.Animations.PlayerPart.h: include/Uno.Object.h

include/Fuse.Animations.Resize.h: include/Fuse.Animations.TrackAnimator.h

include/Fuse.Animations.ResizeAnimatorState.h: include/Fuse.Animations.TrackAnimatorState.h

include/Fuse.Animations.Rotate.h: include/Fuse.Animations.TransformAnimator-1.h
include/Fuse.Animations.Rotate.h: include/Fuse.Rotation.h

include/Fuse.Animations.Scale.h: include/Fuse.Animations.TransformAnimator-1.h
include/Fuse.Animations.Scale.h: include/Fuse.Scaling.h

include/Fuse.Animations.SeekDirection.h: include/Uno.Int.h

include/Fuse.Animations.Skew.h: include/Fuse.Animations.TransformAnimator-1.h
include/Fuse.Animations.Skew.h: include/Fuse.Shear.h

include/Fuse.Animations.Spin.h: include/Fuse.Animations.OpenAnimator.h

include/Fuse.Animations.SpinState.h: include/Fuse.Animations.OpenAnimatorState.h

include/Fuse.Animations.SplineTrack.h: include/Fuse.Animations.ContinuousTrackProvider.h
include/Fuse.Animations.SplineTrack.h: include/Fuse.Animations.ITrackProvider.h
include/Fuse.Animations.SplineTrack.h: include/Fuse.Animations.KeyframeTrack.h
include/Fuse.Animations.SplineTrack.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.SplineTrack.h: include/Uno.Object.h

include/Fuse.Animations.SplineTrack.PointInterpolater.h: include/Uno.Delegate.h

include/Fuse.Animations.TrackAnimator.h: include/Fuse.Animations.Animator.h
include/Fuse.Animations.TrackAnimator.h: include/Uno.Float4.h

include/Fuse.Animations.TrackAnimatorState.h: include/Fuse.Animations.AnimatorState.h
include/Fuse.Animations.TrackAnimatorState.h: include/Uno.Float4.h

include/Fuse.Animations.TrackProvider.h: include/Uno.Object.h

include/Fuse.Animations.TransformAnimator-1.h: include/Fuse.Animations.TrackAnimator.h
include/Fuse.Animations.TransformAnimator-1.h: include/Uno.Float3.h
include/Fuse.Animations.TransformAnimator-1.h: include/Uno.Float4.h

include/Fuse.Animations.TransformAnimatorState-1.h: include/Fuse.Animations.TrackAnimatorState.h

include/Fuse.Animations.TransformPriority.h: include/Uno.Int.h

include/Fuse.Animations.TriggerAnimation.h: include/Uno.Object.h

include/Fuse.Animations.TriggerAnimationState.h: include/Uno.Object.h

include/Fuse.Animations.TriggerAnimationState.SeekFlags.h: include/Uno.Int.h

include/Fuse.App.FrameCallback.h: include/Android.android.view.ChoreographerDLRFrameCallback.h
include/Fuse.App.FrameCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.App.FrameCallback.h: include/Android.java.lang.Object.h
include/Fuse.App.FrameCallback.h: include/Uno.IDisposable.h

include/Fuse.App.h: include/Fuse.AppBase.h

include/Fuse.App.TimeListener.h: include/Android.android.animation.TimeAnimatorDLRTimeListener.h
include/Fuse.App.TimeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.App.TimeListener.h: include/Android.java.lang.Object.h
include/Fuse.App.TimeListener.h: include/Uno.IDisposable.h

include/Fuse.AppBase.h: include/Uno.Application.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Animations_Change_1_float4_Valu-70b34bf0.h: include/Uno.Float4.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Animations_Change_1_float4_Valu-70b34bf0.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_Button_string_Text_Property.h: include/Uno.String.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_Button_string_Text_Property.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_float_Font-aa57b285.h: include/Uno.Float.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_float_Font-aa57b285.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_float_Line-2d4b7b59.h: include/Uno.Float.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_float_Line-2d4b7b59.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_float4_Tex-5f66848e.h: include/Uno.Float4.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_float4_Tex-5f66848e.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_Fuse_Eleme-9ac4faf5.h: include/Fuse.Elements.TextWrapping.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_Fuse_Eleme-9ac4faf5.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_Fuse_Eleme-efd976ea.h: include/Fuse.Elements.TextAlignment.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_Fuse_Eleme-efd976ea.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_Fuse_Font_-223a37b.h: include/Fuse.Font.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_Fuse_Font_-223a37b.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_string_Val-4d7336be.h: include/Uno.String.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextControl_string_Val-4d7336be.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextEdit_float4_Placeh-5ae6cac5.h: include/Uno.Float4.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextEdit_float4_Placeh-5ae6cac5.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextEdit_string_Placeh-e815f0cf.h: include/Uno.String.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Controls_TextEdit_string_Placeh-e815f0cf.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Drawing_SolidColor_float4_Color_Property.h: include/Uno.Float4.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Drawing_SolidColor_float4_Color_Property.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Drawing_Stroke_float_Width_Property.h: include/Uno.Float.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Drawing_Stroke_float_Width_Property.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Effects_DropShadow_float4_Color_Property.h: include/Uno.Float4.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Effects_DropShadow_float4_Color_Property.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Elements_Element_float_Height_Property.h: include/Uno.Float.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Elements_Element_float_Height_Property.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Elements_Element_float_Opacity_Property.h: include/Uno.Float.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Elements_Element_float_Opacity_Property.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Elements_Element_float_Width_Property.h: include/Uno.Float.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Elements_Element_float_Width_Property.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Input_Focus_bool_Focus_IsFocusa-24c33a81.h: include/Uno.Bool.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Input_Focus_bool_Focus_IsFocusa-24c33a81.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Translation_float_X_Property.h: include/Uno.Float.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Translation_float_X_Property.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Triggers_Actions_TriggerAction_-5b248813.h: include/Uno.Bool.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Triggers_Actions_TriggerAction_-5b248813.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.Fuse_Triggers_WhileBool_bool_Value_Property.h: include/Uno.Bool.h
include/Fuse.BasicTheme.BasicStyle.Fuse_Triggers_WhileBool_bool_Value_Property.h: include/Uno.UX.Property-1.h

include/Fuse.BasicTheme.BasicStyle.h: include/Fuse.Style.h
include/Fuse.BasicTheme.BasicStyle.h: include/Uno.UX.ITemplate.h

include/Fuse.BasicTheme.BasicStyle.Template.h: include/Fuse.Controls.BackButton.h
include/Fuse.BasicTheme.BasicStyle.Template.h: include/Uno.UX.ITemplate.h
include/Fuse.BasicTheme.BasicStyle.Template.h: include/Uno.UX.Template-1.h

include/Fuse.BasicTheme.BasicStyle.Template.Template1.h: include/Fuse.Controls.Text.h
include/Fuse.BasicTheme.BasicStyle.Template.Template1.h: include/Uno.UX.ITemplate.h
include/Fuse.BasicTheme.BasicStyle.Template.Template1.h: include/Uno.UX.Template-1.h

include/Fuse.BasicTheme.BasicStyle.Template1.h: include/Fuse.Controls.NavigationBar.h
include/Fuse.BasicTheme.BasicStyle.Template1.h: include/Uno.UX.ITemplate.h
include/Fuse.BasicTheme.BasicStyle.Template1.h: include/Uno.UX.Template-1.h

include/Fuse.BasicTheme.BasicStyle.Template2.h: include/Fuse.Controls.Switch.h
include/Fuse.BasicTheme.BasicStyle.Template2.h: include/Uno.UX.ITemplate.h
include/Fuse.BasicTheme.BasicStyle.Template2.h: include/Uno.UX.Template-1.h

include/Fuse.BasicTheme.BasicStyle.Template3.h: include/Fuse.Controls.Slider.h
include/Fuse.BasicTheme.BasicStyle.Template3.h: include/Uno.UX.ITemplate.h
include/Fuse.BasicTheme.BasicStyle.Template3.h: include/Uno.UX.Template-1.h

include/Fuse.BasicTheme.BasicStyle.Template4.h: include/Fuse.Controls.Button.h
include/Fuse.BasicTheme.BasicStyle.Template4.h: include/Uno.UX.ITemplate.h
include/Fuse.BasicTheme.BasicStyle.Template4.h: include/Uno.UX.Template-1.h

include/Fuse.BasicTheme.BasicStyle.Template5.h: include/Fuse.Controls.TextEdit.h
include/Fuse.BasicTheme.BasicStyle.Template5.h: include/Uno.UX.ITemplate.h
include/Fuse.BasicTheme.BasicStyle.Template5.h: include/Uno.UX.Template-1.h

include/Fuse.BasicTheme.BasicStyle.Template6.h: include/Fuse.Controls.TextInput.h
include/Fuse.BasicTheme.BasicStyle.Template6.h: include/Uno.UX.ITemplate.h
include/Fuse.BasicTheme.BasicStyle.Template6.h: include/Uno.UX.Template-1.h

include/Fuse.BasicTheme.BasicTheme.h: include/Fuse.GraphicsTheme.h
include/Fuse.BasicTheme.BasicTheme.h: include/Uno.UX.ITemplate.h

include/Fuse.BasicTheme.ButtonText.h: include/Fuse.Animations.IResize.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.Controls.TextBlock.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.IActualPlacement.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.Node.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.Scripting.INameScope.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.Triggers.IAddRemove-1.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.BasicTheme.ButtonText.h: include/Uno.String.h

include/Fuse.BasicTheme.ColorScheme.h: include/Uno.Int.h

include/Fuse.BasicTheme.DefaultBasicTheme.h: include/Uno.h

include/Fuse.BeginRemoveArgs.h: include/Uno.EventArgs.h

include/Fuse.BeginRemoveHandler.h: include/Uno.Delegate.h

include/Fuse.Behavior.h: include/Uno.Object.h

include/Fuse.Behavior.RootStatus.h: include/Uno.Int.h

include/Fuse.CacheFramebuffer.h: include/Uno.Object.h

include/Fuse.Camera.AndroidCameraImpl.DispatchTakePicture.h: include/Uno.Object.h

include/Fuse.Camera.AndroidCameraImpl.h: include/Uno.h

include/Fuse.Camera.AndroidCameraImpl.TakePictureTask.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Camera.AndroidCameraImpl.TakePictureTask.h: include/Android.com.fuse.Native.CameraTask.h
include/Fuse.Camera.AndroidCameraImpl.TakePictureTask.h: include/Uno.IDisposable.h

include/Fuse.Camera.Camera.h: include/Uno.h

include/Fuse.Camera.PictureResult.h: include/Uno.Object.h

include/Fuse.Camera.TakePictureHelpers.h: include/Uno.h

include/Fuse.Camera.TakePictureOptions.h: include/Uno.Object.h

include/Fuse.Controls.BackButton.Fuse_Node_bool_IsEnabled_Property.h: include/Uno.Bool.h
include/Fuse.Controls.BackButton.Fuse_Node_bool_IsEnabled_Property.h: include/Uno.UX.Property-1.h

include/Fuse.Controls.BackButton.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.BackButton.h: include/Fuse.Controls.Button.h
include/Fuse.Controls.BackButton.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.BackButton.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.BackButton.h: include/Fuse.Node.h
include/Fuse.Controls.BackButton.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.BackButton.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.BackButton.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.BackButton.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.BackButton.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.BeginRemoveArgsImpl.h: include/Fuse.BeginRemoveArgs.h

include/Fuse.Controls.BottomBarBackground.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.BottomBarBackground.h: include/Fuse.Controls.BottomFrameBackground.h
include/Fuse.Controls.BottomBarBackground.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.BottomBarBackground.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.BottomBarBackground.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.BottomBarBackground.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.BottomBarBackground.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.BottomFrameBackground.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.BottomFrameBackground.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.BottomFrameBackground.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.BottomFrameBackground.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.BottomFrameBackground.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.BottomFrameBackground.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.BottomFrameBackground.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.BufferedWebViewCall.h: include/Uno.Object.h

include/Fuse.Controls.Button.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Button.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Button.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Button.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Button.h: include/Fuse.Node.h
include/Fuse.Controls.Button.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Button.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Button.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Button.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Button.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.Circle.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Circle.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.Circle.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Circle.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Circle.h: include/Fuse.Node.h
include/Fuse.Controls.Circle.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Circle.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Circle.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Circle.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Circle.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.ClientPanel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Controls.DockPanel.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Node.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.ContentControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.ContentControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.Control.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Control.h: include/Fuse.Elements.Element.h
include/Fuse.Controls.Control.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Control.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Control.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Control.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Control.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.DefaultSwitchBehavior.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Controls.DefaultSwitchBehavior.h: include/Uno.Float2.h

include/Fuse.Controls.DockPanel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.DockPanel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Node.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Node.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.Ellipse.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.Ellipse.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Node.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.FallbackTextEdit.LineCache.h: include/Uno.Object.h

include/Fuse.Controls.FallbackTextEdit.LineCacheLine.h: include/Uno.Object.h

include/Fuse.Controls.FallbackTextEdit.LineCachePasswordTransform.h: include/Fuse.Controls.FallbackTextEdit.LineCacheTransform.h
include/Fuse.Controls.FallbackTextEdit.LineCachePasswordTransform.h: include/Uno.Object.h

include/Fuse.Controls.FallbackTextEdit.LineCacheTransform.h: include/Uno.Object.h

include/Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan.h: include/Uno.Object.h

include/Fuse.Controls.FallbackTextEdit.TextEditVisual.h: include/Fuse.Controls.Graphics.ControlVisual-1.h
include/Fuse.Controls.FallbackTextEdit.TextEditVisual.h: include/Fuse.Controls.TextEdit.h
include/Fuse.Controls.FallbackTextEdit.TextEditVisual.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.FallbackTextEdit.TextEditVisual.h: include/Uno.Float2.h

include/Fuse.Controls.FallbackTextEdit.TextEditVisual.SwipeGestureHelper.h: include/Uno.Object.h

include/Fuse.Controls.FallbackTextEdit.TextPosition.h: include/Uno.Object.h

include/Fuse.Controls.FallbackTextEdit.TextSpan.h: include/Uno.Object.h

include/Fuse.Controls.FallbackTextEdit.TextWindow.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.FallbackTextEdit.TextWindow.h: include/Fuse.Elements.Element.h
include/Fuse.Controls.FallbackTextEdit.TextWindow.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.FallbackTextEdit.TextWindow.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.FallbackTextEdit.TextWindow.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.FallbackTextEdit.TextWindow.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.FallbackTextEdit.TextWindow.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.FallbackTextEdit.TextWindow.h: include/Uno.Float2.h
include/Fuse.Controls.FallbackTextEdit.TextWindow.h: include/Uno.Float4.h

include/Fuse.Controls.FallbackTextEdit.VisualTextTransform.h: include/Uno.Int.h

include/Fuse.Controls.FallbackWebViewClient.h: include/Fuse.Controls.IWebView.h
include/Fuse.Controls.FallbackWebViewClient.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Controls.FallbackWebViewClient.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.FallbackWebViewClient.h: include/Uno.Object.h

include/Fuse.Controls.FillRule.h: include/Uno.Int.h

include/Fuse.Controls.FitMode.h: include/Uno.Int.h

include/Fuse.Controls.Graphics.CircleVisual.h: include/Fuse.Controls.Circle.h
include/Fuse.Controls.Graphics.CircleVisual.h: include/Fuse.Controls.Graphics.ShapeVisual-1.h
include/Fuse.Controls.Graphics.CircleVisual.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Controls.Graphics.ControlVisual-1.h: include/Fuse.Controls.Graphics.Visual.h
include/Fuse.Controls.Graphics.ControlVisual-1.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Controls.Graphics.DefaultTextVisual.h: include/Fuse.Controls.Graphics.TextVisual.h
include/Fuse.Controls.Graphics.DefaultTextVisual.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Graphics.DefaultTextVisual.h: include/Uno.Float2.h

include/Fuse.Controls.Graphics.EllipseVisual.h: include/Fuse.Controls.Ellipse.h
include/Fuse.Controls.Graphics.EllipseVisual.h: include/Fuse.Controls.Graphics.PathShapeVisual-1.h
include/Fuse.Controls.Graphics.EllipseVisual.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Graphics.EllipseVisual.h: include/Uno.Float2.h

include/Fuse.Controls.Graphics.ImageElementDraw.h: include/Uno.Float4x4.h
include/Fuse.Controls.Graphics.ImageElementDraw.h: include/Uno.Object.h
include/Fuse.Controls.Graphics.ImageElementDraw.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Controls.Graphics.ImageVisual.h: include/Fuse.Controls.Graphics.ControlVisual-1.h
include/Fuse.Controls.Graphics.ImageVisual.h: include/Fuse.Controls.Image.h
include/Fuse.Controls.Graphics.ImageVisual.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Graphics.ImageVisual.h: include/Uno.Float2.h
include/Fuse.Controls.Graphics.ImageVisual.h: include/Uno.Float4.h

include/Fuse.Controls.Graphics.LinearSliderBehavior.h: include/Fuse.Behavior.h
include/Fuse.Controls.Graphics.LinearSliderBehavior.h: include/Uno.Float2.h

include/Fuse.Controls.Graphics.PathShapeVisual-1.h: include/Fuse.Controls.Graphics.ShapeVisual-1.h
include/Fuse.Controls.Graphics.PathShapeVisual-1.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Graphics.PathShapeVisual-1.h: include/Uno.Object.h
include/Fuse.Controls.Graphics.PathShapeVisual-1.h: include/Uno.Float2.h
include/Fuse.Controls.Graphics.PathShapeVisual-1.h: include/Uno.Float4x4.h
include/Fuse.Controls.Graphics.PathShapeVisual-1.h: include/Uno.Rect.h

include/Fuse.Controls.Graphics.PathVisual.h: include/Fuse.Controls.Graphics.PathShapeVisual-1.h
include/Fuse.Controls.Graphics.PathVisual.h: include/Fuse.Controls.Path.h
include/Fuse.Controls.Graphics.PathVisual.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Graphics.PathVisual.h: include/Uno.Float2.h

include/Fuse.Controls.Graphics.RectangleVisual.h: include/Fuse.Controls.Graphics.ShapeVisual-1.h
include/Fuse.Controls.Graphics.RectangleVisual.h: include/Fuse.Controls.Rectangle.h
include/Fuse.Controls.Graphics.RectangleVisual.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Controls.Graphics.RegularPolygonVisual.h: include/Fuse.Controls.Graphics.PathShapeVisual-1.h
include/Fuse.Controls.Graphics.RegularPolygonVisual.h: include/Fuse.Controls.RegularPolygon.h
include/Fuse.Controls.Graphics.RegularPolygonVisual.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Controls.Graphics.ShapeVisual-1.h: include/Fuse.Controls.Graphics.ControlVisual-1.h
include/Fuse.Controls.Graphics.ShapeVisual-1.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Graphics.ShapeVisual-1.h: include/Uno.Object.h

include/Fuse.Controls.Graphics.StarVisual.h: include/Fuse.Controls.Graphics.PathShapeVisual-1.h
include/Fuse.Controls.Graphics.StarVisual.h: include/Fuse.Controls.Star.h
include/Fuse.Controls.Graphics.StarVisual.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Controls.Graphics.TextVisual.h: include/Fuse.Controls.Graphics.ControlVisual-1.h
include/Fuse.Controls.Graphics.TextVisual.h: include/Fuse.Controls.TextControl.h
include/Fuse.Controls.Graphics.TextVisual.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Controls.Graphics.Visual.h: include/Fuse.Node.h
include/Fuse.Controls.Graphics.Visual.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Graphics.Visual.h: include/Uno.Float2.h

include/Fuse.Controls.GraphicsView.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Controls.ContentControl.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.IViewport.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.Grid.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Grid.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Grid.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Grid.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Grid.h: include/Fuse.Node.h
include/Fuse.Controls.Grid.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Grid.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Grid.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Grid.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Grid.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.HTML.h: include/Uno.Object.h

include/Fuse.Controls.Image.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Image.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Image.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Image.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Image.h: include/Fuse.Node.h
include/Fuse.Controls.Image.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Image.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Image.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Image.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Image.h: include/Fuse.Triggers.IAddRemove-1.h
include/Fuse.Controls.Image.h: include/Uno.Float4.h

include/Fuse.Controls.Internal.DefaultTextRenderer.FontKey.h: include/Uno.Object.h

include/Fuse.Controls.Internal.DefaultTextRenderer.h: include/Uno.Float4x4.h
include/Fuse.Controls.Internal.DefaultTextRenderer.h: include/Uno.Object.h

include/Fuse.Controls.Internal.ProperTextTransform.h: include/Uno.Content.Fonts.TextTransform.h
include/Fuse.Controls.Internal.ProperTextTransform.h: include/Uno.Float4x4.h

include/Fuse.Controls.Internal.WordWrapInfo.h: include/Uno.Object.h

include/Fuse.Controls.Internal.WordWrapper.h: include/Uno.h

include/Fuse.Controls.Internal.WordWrapperWord.h: include/Uno.Object.h

include/Fuse.Controls.Internal.WrappedLine.h: include/Uno.Object.h

include/Fuse.Controls.IWebView.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Controls.IWebView.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.IWebView.h: include/Uno.Object.h

include/Fuse.Controls.JavaScriptCall.h: include/Fuse.Controls.BufferedWebViewCall.h
include/Fuse.Controls.JavaScriptCall.h: include/Uno.Object.h

include/Fuse.Controls.KeyframeAccessors.h: include/Uno.h

include/Fuse.Controls.LoadHtmlCall.h: include/Fuse.Controls.BufferedWebViewCall.h
include/Fuse.Controls.LoadHtmlCall.h: include/Uno.Object.h

include/Fuse.Controls.MapView.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.MapView.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.MapView.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.MapView.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.MapView.h: include/Fuse.Node.h
include/Fuse.Controls.MapView.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.MapView.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.MapView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.MapView.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.MapView.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.MultiLayout.h: include/Fuse.Behavior.h

include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Node.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.NativeViewHost.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Node.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.NavigationBar.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Node.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.Number.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Number.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Number.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Number.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Number.h: include/Fuse.Node.h
include/Fuse.Controls.Number.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Number.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Number.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Number.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Number.h: include/Fuse.Triggers.IAddRemove-1.h
include/Fuse.Controls.Number.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.Number.h: include/Uno.Float.h

include/Fuse.Controls.Page.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Page.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Page.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Page.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Page.h: include/Fuse.Node.h
include/Fuse.Controls.Page.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Page.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Page.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Page.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Page.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.PageControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.PageControl.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.PageControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.PageControl.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Controls.PageControl.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Controls.PageControl.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.PageControl.h: include/Fuse.Node.h
include/Fuse.Controls.PageControl.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.PageControl.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.PageControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.PageControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.PageControl.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.PageControl.Template.h: include/Fuse.Controls.Page.h
include/Fuse.Controls.PageControl.Template.h: include/Uno.UX.ITemplate.h
include/Fuse.Controls.PageControl.Template.h: include/Uno.UX.Template-1.h

include/Fuse.Controls.PageIndicator.Fuse_Drawing_SolidColor_float4_Colo-39176aba.h: include/Uno.Float4.h
include/Fuse.Controls.PageIndicator.Fuse_Drawing_SolidColor_float4_Colo-39176aba.h: include/Uno.UX.Property-1.h

include/Fuse.Controls.PageIndicator.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Controls.StackPanel.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Node.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.PageIndicator.Template.h: include/Fuse.Controls.PageIndicatorDot.h
include/Fuse.Controls.PageIndicator.Template.h: include/Uno.UX.ITemplate.h
include/Fuse.Controls.PageIndicator.Template.h: include/Uno.UX.Template-1.h

include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Node.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.PageIndicatorDotFactory.h: include/Uno.Object.h
include/Fuse.Controls.PageIndicatorDotFactory.h: include/Uno.UX.IFactory.h

include/Fuse.Controls.Panel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Panel.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.Panel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Panel.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Panel.h: include/Fuse.Node.h
include/Fuse.Controls.Panel.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Panel.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Panel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Panel.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Panel.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.Path.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Path.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.Path.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Path.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Path.h: include/Fuse.Node.h
include/Fuse.Controls.Path.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Path.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Path.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Path.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Path.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.PathScaleMode.h: include/Uno.Int.h

include/Fuse.Controls.Placeholder.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Placeholder.h: include/Fuse.Controls.ContentControl.h
include/Fuse.Controls.Placeholder.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Placeholder.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Placeholder.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Placeholder.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Placeholder.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.PlainTextEdit.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.PlainTextEdit.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.PlainTextEdit.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.PlainTextEdit.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.PlainTextEdit.h: include/Fuse.Node.h
include/Fuse.Controls.PlainTextEdit.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.PlainTextEdit.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.PlainTextEdit.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.PlainTextEdit.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.PlainTextEdit.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.PropertyBinding-1.h: include/Fuse.Behavior.h

include/Fuse.Controls.RangeControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.RangeControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Node.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.IAddRemove-1.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.RangeControl.h: include/Uno.Double.h

include/Fuse.Controls.Rectangle.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.Rectangle.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Node.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.RegularPolygon.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Node.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.ScrollPropertyChangedArgs.h: include/Uno.EventArgs.h

include/Fuse.Controls.ScrollPropertyChangedHandler.h: include/Uno.Delegate.h

include/Fuse.Controls.ScrollView.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Controls.ContentControl.h
include/Fuse.Controls.ScrollView.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ScrollView.h: include/Uno.Float2.h

include/Fuse.Controls.ScrollViewer.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ScrollViewer.h: include/Fuse.Controls.ScrollView.h
include/Fuse.Controls.ScrollViewer.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ScrollViewer.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.ScrollViewer.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.ScrollViewer.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ScrollViewer.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.Shape.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Shape.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Shape.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Shape.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Shape.h: include/Fuse.Node.h
include/Fuse.Controls.Shape.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Shape.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Shape.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Shape.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Shape.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.Slider.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Slider.h: include/Fuse.Controls.RangeControl.h
include/Fuse.Controls.Slider.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Slider.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Slider.h: include/Fuse.Node.h
include/Fuse.Controls.Slider.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.IAddRemove-1.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.Slider.h: include/Uno.Double.h

include/Fuse.Controls.StackPanel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.StackPanel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Node.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.Star.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Star.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.Star.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Star.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Star.h: include/Fuse.Node.h
include/Fuse.Controls.Star.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Star.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Star.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Star.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Star.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Controls.TopFrameBackground.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.Switch.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Switch.h: include/Fuse.Controls.ToggleControl.h
include/Fuse.Controls.Switch.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Switch.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Switch.h: include/Fuse.Node.h
include/Fuse.Controls.Switch.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Switch.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Switch.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Switch.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Switch.h: include/Fuse.Triggers.IAddRemove-1.h
include/Fuse.Controls.Switch.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.Switch.h: include/Uno.Bool.h

include/Fuse.Controls.Text.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Text.h: include/Fuse.Controls.TextBlock.h
include/Fuse.Controls.Text.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Text.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Text.h: include/Fuse.Node.h
include/Fuse.Controls.Text.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.IAddRemove-1.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.Text.h: include/Uno.String.h

include/Fuse.Controls.TextBlock.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Controls.TextControl.h
include/Fuse.Controls.TextBlock.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Node.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Triggers.IAddRemove-1.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.TextBlock.h: include/Uno.String.h

include/Fuse.Controls.TextControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TextControl.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.TextControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TextControl.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.TextControl.h: include/Fuse.Node.h
include/Fuse.Controls.TextControl.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.IAddRemove-1.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.TextControl.h: include/Uno.String.h
include/Fuse.Controls.TextControl.h: include/Uno.Float4.h

include/Fuse.Controls.TextEdit.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Controls.TextControl.h
include/Fuse.Controls.TextEdit.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Node.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Triggers.IAddRemove-1.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.TextEdit.h: include/Uno.String.h

include/Fuse.Controls.TextInput.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TextInput.h: include/Fuse.Controls.TextEdit.h
include/Fuse.Controls.TextInput.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TextInput.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.TextInput.h: include/Fuse.Node.h
include/Fuse.Controls.TextInput.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.TextInput.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.TextInput.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TextInput.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TextInput.h: include/Fuse.Triggers.IAddRemove-1.h
include/Fuse.Controls.TextInput.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.TextInput.h: include/Uno.String.h

include/Fuse.Controls.TextInputActionArgs.h: include/Fuse.NodeEventArgs.h
include/Fuse.Controls.TextInputActionArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Controls.TextInputActionHandler.h: include/Uno.Delegate.h

include/Fuse.Controls.TextInputActionStyle.h: include/Uno.Int.h

include/Fuse.Controls.TextInputActionType.h: include/Uno.Int.h

include/Fuse.Controls.Toggle.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Controls.ToggleControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Node.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.IAddRemove-1.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.ToggleControl.h: include/Uno.Bool.h

include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.Video.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Video.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Video.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Video.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Video.h: include/Fuse.Node.h
include/Fuse.Controls.Video.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.IAddRemove-1.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.IMediaPlayback.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.Video.h: include/Uno.Float4.h

include/Fuse.Controls.Viewbox.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Viewbox.h: include/Fuse.Controls.ContentControl.h
include/Fuse.Controls.Viewbox.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Viewbox.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Viewbox.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Viewbox.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Viewbox.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Viewbox.h: include/Uno.Float2.h

include/Fuse.Controls.WebView.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.WebView.h: include/Fuse.Controls.IWebView.h
include/Fuse.Controls.WebView.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.WebView.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.WebView.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Controls.WebView.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.WebView.h: include/Fuse.Node.h
include/Fuse.Controls.WebView.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.IAddRemove-1.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.IProgress.h

include/Fuse.Controls.WrapPanel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Node.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Triggers.IAddRemove-1.h

include/Fuse.DataContextChangedArgs.h: include/Uno.EventArgs.h

include/Fuse.DataContextChangedHandler.h: include/Uno.Delegate.h

include/Fuse.Designer.AdvancedAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.ChildExtensionAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.ColorAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.ComponentOfAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.DefaultComponentAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.DefaultInstanceAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.DesignerNameAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.DragDropPriorityAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.ExtensionAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.GroupAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.HideAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.HidesAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.IconAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.InlineAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.IntervalAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.OptionalHideAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.PriorityAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.RangeAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.RecursionSafeAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.RequiredComponentAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.SpawnableAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.SpawnsAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.ThicknessAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.TransitionAttribute.h: include/Uno.Attribute.h

include/Fuse.Desktop.DesktopRootViewport.h: include/Fuse.IViewport.h
include/Fuse.Desktop.DesktopRootViewport.h: include/Fuse.RootViewport.h
include/Fuse.Desktop.DesktopRootViewport.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Desktop.NativeStyle.h: include/Fuse.Style.h
include/Fuse.Desktop.NativeStyle.h: include/Uno.UX.ITemplate.h

include/Fuse.Desktop.NativeStyle.Template.h: include/Fuse.Controls.TextBlock.h
include/Fuse.Desktop.NativeStyle.Template.h: include/Uno.UX.ITemplate.h
include/Fuse.Desktop.NativeStyle.Template.h: include/Uno.UX.Template-1.h

include/Fuse.Desktop.NativeStyle.Template1.Factory.h: include/Uno.Object.h
include/Fuse.Desktop.NativeStyle.Template1.Factory.h: include/Uno.UX.IFactory.h

include/Fuse.Desktop.NativeStyle.Template1.h: include/Fuse.Controls.PlainTextEdit.h
include/Fuse.Desktop.NativeStyle.Template1.h: include/Uno.UX.ITemplate.h
include/Fuse.Desktop.NativeStyle.Template1.h: include/Uno.UX.Template-1.h

include/Fuse.Diagnostics.h: include/Uno.h

include/Fuse.DrawArgs.h: include/Uno.EventArgs.h

include/Fuse.DrawContext.h: include/Uno.Int4.h
include/Fuse.DrawContext.h: include/Uno.Object.h
include/Fuse.DrawContext.h: include/Uno/GraphicsContext.h

include/Fuse.DrawHandler.h: include/Uno.Delegate.h

include/Fuse.DrawHelpers.h: include/Uno.Float2.h
include/Fuse.DrawHelpers.h: include/Uno.Object.h
include/Fuse.DrawHelpers.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Drawing.Antialiasing.h: include/Uno.Int.h

include/Fuse.Drawing.Batching.Batch.h: include/Uno.Object.h

include/Fuse.Drawing.Batching.BatchHelpers.h: include/Uno.h

include/Fuse.Drawing.Batching.BatchIndexBuffer.h: include/Uno.Object.h

include/Fuse.Drawing.Batching.BatchVertexBuffer.h: include/Uno.Object.h

include/Fuse.Drawing.Batching.Entry.h: include/Uno.Object.h

include/Fuse.Drawing.Batching.MeshBatcher.h: include/Uno.Object.h

include/Fuse.Drawing.BezierOp.h: include/Uno.h

include/Fuse.Drawing.BlendMode.h: include/Uno.Int.h

include/Fuse.Drawing.BlendModeHelpers.h: include/Uno.h

include/Fuse.Drawing.Border.h: include/Uno.Float2.h
include/Fuse.Drawing.Border.h: include/Uno.Float4.h
include/Fuse.Drawing.Border.h: include/Uno.Object.h
include/Fuse.Drawing.Border.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Drawing.Brush.h: include/Uno.Object.h
include/Fuse.Drawing.Brush.h: include/Uno.Float2.h

include/Fuse.Drawing.Brushes.h: include/Uno.h

include/Fuse.Drawing.ButtCap.h: include/Fuse.Drawing.LineCapImpl.h

include/Fuse.Drawing.Cache-1.h: include/Uno.Object.h

include/Fuse.Drawing.ClosePath.h: include/Fuse.Drawing.ContourTerminator.h
include/Fuse.Drawing.ClosePath.h: include/Uno.Float2.h

include/Fuse.Drawing.Colors.h: include/Uno.h

include/Fuse.Drawing.Contour.h: include/Uno.Float2.h
include/Fuse.Drawing.Contour.h: include/Uno.Object.h

include/Fuse.Drawing.ContourEnumerable.h: include/Fuse.Drawing.Contour.h
include/Fuse.Drawing.ContourEnumerable.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Drawing.ContourEnumerable.h: include/Uno.Float2.h
include/Fuse.Drawing.ContourEnumerable.h: include/Uno.Object.h

include/Fuse.Drawing.ContourEnumerator.h: include/Fuse.Drawing.Contour.h
include/Fuse.Drawing.ContourEnumerator.h: include/Uno.Collections.IEnumerator.h
include/Fuse.Drawing.ContourEnumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Fuse.Drawing.ContourEnumerator.h: include/Uno.Float2.h
include/Fuse.Drawing.ContourEnumerator.h: include/Uno.IDisposable.h
include/Fuse.Drawing.ContourEnumerator.h: include/Uno.Object.h

include/Fuse.Drawing.ContourTerminator.h: include/Fuse.Drawing.PathGeometry.h

include/Fuse.Drawing.CurveTo.h: include/Fuse.Drawing.PathGeometry.h
include/Fuse.Drawing.CurveTo.h: include/Uno.Float2.h

include/Fuse.Drawing.DynamicBrush.h: include/Fuse.Drawing.Brush.h

include/Fuse.Drawing.EllipseFactory.h: include/Uno.h

include/Fuse.Drawing.GradientStop.h: include/Uno.Float4.h
include/Fuse.Drawing.GradientStop.h: include/Uno.Object.h

include/Fuse.Drawing.HorizontalLineTo.h: include/Fuse.Drawing.LineTo.h

include/Fuse.Drawing.ImageFill.DrawParams.h: include/Uno.Float2.h
include/Fuse.Drawing.ImageFill.DrawParams.h: include/Uno.Float4.h
include/Fuse.Drawing.ImageFill.DrawParams.h: include/Uno.Object.h

include/Fuse.Drawing.ImageFill.h: include/Fuse.Drawing.DynamicBrush.h
include/Fuse.Drawing.ImageFill.h: include/Fuse.Internal.IImageContainerOwner.h
include/Fuse.Drawing.ImageFill.h: include/Uno.Float4.h

include/Fuse.Drawing.Internal.Float2Buffer.h: include/Fuse.Drawing.Internal.TypedBuffer.h

include/Fuse.Drawing.Internal.Float3Buffer.h: include/Fuse.Drawing.Internal.TypedBuffer.h

include/Fuse.Drawing.Internal.FloatBuffer.h: include/Fuse.Drawing.Internal.TypedBuffer.h

include/Fuse.Drawing.Internal.MultiBuffer.Field.h: include/Uno.Object.h

include/Fuse.Drawing.Internal.MultiBuffer.h: include/Fuse.Drawing.Internal.TypedBuffer.h

include/Fuse.Drawing.Internal.MultiBuffer.Setter.h: include/Uno.Object.h

include/Fuse.Drawing.Internal.TypedBuffer.h: include/Uno.Object.h

include/Fuse.Drawing.Internal.UShortBuffer.h: include/Fuse.Drawing.Internal.TypedBuffer.h

include/Fuse.Drawing.LinearGradient.h: include/Fuse.Drawing.DynamicBrush.h
include/Fuse.Drawing.LinearGradient.h: include/Uno.Float2.h

include/Fuse.Drawing.LinearGradientDrawable.h: include/Uno.Float2.h
include/Fuse.Drawing.LinearGradientDrawable.h: include/Uno.Object.h
include/Fuse.Drawing.LinearGradientDrawable.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Drawing.LineCap.h: include/Uno.Int.h

include/Fuse.Drawing.LineCapImpl.h: include/Uno.Object.h
include/Fuse.Drawing.LineCapImpl.h: include/Uno.Float2.h

include/Fuse.Drawing.LineJoin.h: include/Uno.Int.h

include/Fuse.Drawing.LineJoinImpl.h: include/Uno.Object.h
include/Fuse.Drawing.LineJoinImpl.h: include/Uno.Float2.h

include/Fuse.Drawing.LineTo.h: include/Fuse.Drawing.PathGeometry.h
include/Fuse.Drawing.LineTo.h: include/Uno.Float2.h

include/Fuse.Drawing.Meshes.MeshGenerator.h: include/Uno.h

include/Fuse.Drawing.Meshes.MeshTools.h: include/Uno.h

include/Fuse.Drawing.MiterJoin.h: include/Fuse.Drawing.LineJoinImpl.h

include/Fuse.Drawing.MoveTo.h: include/Fuse.Drawing.ContourTerminator.h

include/Fuse.Drawing.NonConsecutiveEnumerable.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Drawing.NonConsecutiveEnumerable.h: include/Uno.Float2.h
include/Fuse.Drawing.NonConsecutiveEnumerable.h: include/Uno.Object.h

include/Fuse.Drawing.NonConsecutiveEnumerator.h: include/Uno.Collections.IEnumerator.h
include/Fuse.Drawing.NonConsecutiveEnumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Fuse.Drawing.NonConsecutiveEnumerator.h: include/Uno.Float2.h
include/Fuse.Drawing.NonConsecutiveEnumerator.h: include/Uno.IDisposable.h
include/Fuse.Drawing.NonConsecutiveEnumerator.h: include/Uno.Object.h

include/Fuse.Drawing.NonConsecutiveExtension.h: include/Uno.h

include/Fuse.Drawing.PathGeometry.h: include/Uno.Float2.h
include/Fuse.Drawing.PathGeometry.h: include/Uno.Object.h
include/Fuse.Drawing.PathGeometry.h: include/Uno.Rect.h

include/Fuse.Drawing.PathGeometryExtensions.h: include/Uno.h

include/Fuse.Drawing.PathGeometryParser.h: include/Uno.Object.h

include/Fuse.Drawing.PathGeometryRenderer.h: include/Uno.Float2.h
include/Fuse.Drawing.PathGeometryRenderer.h: include/Uno.Float4.h
include/Fuse.Drawing.PathGeometryRenderer.h: include/Uno.Object.h
include/Fuse.Drawing.PathGeometryRenderer.h: include/Uno.Rect.h

include/Fuse.Drawing.Polygon.h: include/Uno.Object.h

include/Fuse.Drawing.PolygonDrawable.h: include/Uno.Float2.h
include/Fuse.Drawing.PolygonDrawable.h: include/Uno.Object.h
include/Fuse.Drawing.PolygonDrawable.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Drawing.PolygonFiller.h: include/Uno.IDisposable.h
include/Fuse.Drawing.PolygonFiller.h: include/Uno.Object.h
include/Fuse.Drawing.PolygonFiller.h: include/Uno.Rect.h

include/Fuse.Drawing.Primitives.Circle.h: include/Uno.Object.h
include/Fuse.Drawing.Primitives.Circle.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Drawing.Primitives.ConcaveWedgeCoverage.h: include/Fuse.Drawing.Primitives.WedgeCoverage.h

include/Fuse.Drawing.Primitives.ConvexWedgeCoverage.h: include/Fuse.Drawing.Primitives.WedgeCoverage.h

include/Fuse.Drawing.Primitives.Coverage.h: include/Uno.Object.h

include/Fuse.Drawing.Primitives.FillCoverage.h: include/Fuse.Drawing.Primitives.Coverage.h

include/Fuse.Drawing.Primitives.LimitCoverage.h: include/Uno.Object.h

include/Fuse.Drawing.Primitives.OneLimitCoverage.h: include/Fuse.Drawing.Primitives.LimitCoverage.h

include/Fuse.Drawing.Primitives.Rectangle.h: include/Uno.Graphics.VertexAttributeInfo.h
include/Fuse.Drawing.Primitives.Rectangle.h: include/Uno.Object.h
include/Fuse.Drawing.Primitives.Rectangle.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Drawing.Primitives.StrokeCoverage.h: include/Fuse.Drawing.Primitives.Coverage.h

include/Fuse.Drawing.Primitives.Wedge.h: include/Uno.Object.h

include/Fuse.Drawing.Primitives.WedgeCoverage.h: include/Fuse.Drawing.Primitives.LimitCoverage.h

include/Fuse.Drawing.RectangleFactory.h: include/Uno.h

include/Fuse.Drawing.RegularPolygonFactory.h: include/Uno.h

include/Fuse.Drawing.RendererContext.h: include/Uno.Float2.h
include/Fuse.Drawing.RendererContext.h: include/Uno.Float4x4.h
include/Fuse.Drawing.RendererContext.h: include/Uno.Object.h

include/Fuse.Drawing.ResampleMode.h: include/Uno.Int.h

include/Fuse.Drawing.RoundCap.h: include/Fuse.Drawing.LineCapImpl.h

include/Fuse.Drawing.SmoothCurveTo.h: include/Fuse.Drawing.CurveTo.h

include/Fuse.Drawing.SolidColor.h: include/Fuse.Drawing.DynamicBrush.h
include/Fuse.Drawing.SolidColor.h: include/Uno.Float4.h

include/Fuse.Drawing.StarFactory.h: include/Uno.h

include/Fuse.Drawing.StaticBrush.h: include/Fuse.Drawing.Brush.h

include/Fuse.Drawing.StaticSolidColor.h: include/Fuse.Drawing.StaticBrush.h
include/Fuse.Drawing.StaticSolidColor.h: include/Uno.Float4.h

include/Fuse.Drawing.Stroke.h: include/Uno.Object.h

include/Fuse.Drawing.StrokeAdjustment.h: include/Uno.Int.h

include/Fuse.Drawing.StrokeAlignment.h: include/Uno.Int.h

include/Fuse.Drawing.Tesselation.ActiveRegion.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.Collections.ActiveRegionDict.h: include/Fuse.Drawing.Tesselation.ActiveRegion.h
include/Fuse.Drawing.Tesselation.Collections.ActiveRegionDict.h: include/Fuse.Drawing.Tesselation.Collections.Dict-1.h

include/Fuse.Drawing.Tesselation.Collections.Dict-1.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.Collections.DictNode-1.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable-1.h: include/Fuse.Drawing.Tesselation.Collections.DictNode-1.h
include/Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable-1.h: include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h
include/Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable-1.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator-1.h: include/Uno.Collections.IEnumerator-1.h
include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator-1.h: include/Uno.IDisposable.h
include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator-1.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.Collections.PriorityQueue-1.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.Collections.VertexQueue.h: include/Fuse.Drawing.Tesselation.Collections.PriorityQueue-1.h
include/Fuse.Drawing.Tesselation.Collections.VertexQueue.h: include/Fuse.Drawing.Tesselation.Vertex.h

include/Fuse.Drawing.Tesselation.EdgeLoopEnumerable.h: include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h
include/Fuse.Drawing.Tesselation.EdgeLoopEnumerable.h: include/Fuse.Drawing.Tesselation.HalfEdge.h
include/Fuse.Drawing.Tesselation.EdgeLoopEnumerable.h: include/Uno.Collections.IEnumerable-1.h

include/Fuse.Drawing.Tesselation.EdgesEnumerable.h: include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h
include/Fuse.Drawing.Tesselation.EdgesEnumerable.h: include/Fuse.Drawing.Tesselation.HalfEdge.h
include/Fuse.Drawing.Tesselation.EdgesEnumerable.h: include/Uno.Collections.IEnumerable-1.h

include/Fuse.Drawing.Tesselation.Face.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.FacesEnumerable.h: include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h
include/Fuse.Drawing.Tesselation.FacesEnumerable.h: include/Fuse.Drawing.Tesselation.Face.h
include/Fuse.Drawing.Tesselation.FacesEnumerable.h: include/Uno.Collections.IEnumerable-1.h

include/Fuse.Drawing.Tesselation.Geom.h: include/Uno.h

include/Fuse.Drawing.Tesselation.HalfEdge.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.Mesh.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.MeshBuilder.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.OriginEnumerable.h: include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h
include/Fuse.Drawing.Tesselation.OriginEnumerable.h: include/Fuse.Drawing.Tesselation.HalfEdge.h
include/Fuse.Drawing.Tesselation.OriginEnumerable.h: include/Uno.Collections.IEnumerable-1.h

include/Fuse.Drawing.Tesselation.Sweep.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.Vertex.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.VerticesEnumerable.h: include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h
include/Fuse.Drawing.Tesselation.VerticesEnumerable.h: include/Fuse.Drawing.Tesselation.Vertex.h
include/Fuse.Drawing.Tesselation.VerticesEnumerable.h: include/Uno.Collections.IEnumerable-1.h

include/Fuse.Drawing.Token.h: include/Uno.Object.h

include/Fuse.Drawing.Util.h: include/Uno.Object.h

include/Fuse.Drawing.VerticalLineTo.h: include/Fuse.Drawing.LineTo.h

include/Fuse.Drawing.WindingRules.h: include/Uno.h

include/Fuse.Effects.BasicEffect.h: include/Fuse.Effects.Effect.h
include/Fuse.Effects.BasicEffect.h: include/Uno.Rect.h
include/Fuse.Effects.BasicEffect.h: include/Uno.Recti.h

include/Fuse.Effects.Blur.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Blur.h: include/Uno.Float4x4.h
include/Fuse.Effects.Blur.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Effects.Desaturate.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Desaturate.h: include/Uno.Float4x4.h
include/Fuse.Effects.Desaturate.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Effects.DropShadow.Blitter.h: include/Uno.Float4x4.h
include/Fuse.Effects.DropShadow.Blitter.h: include/Uno.Object.h
include/Fuse.Effects.DropShadow.Blitter.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Effects.DropShadow.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.DropShadow.h: include/Uno.Float4.h

include/Fuse.Effects.Effect.h: include/Uno.Object.h
include/Fuse.Effects.Effect.h: include/Uno.Rect.h

include/Fuse.Effects.EffectHelpers.h: include/Uno.Object.h
include/Fuse.Effects.EffectHelpers.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Effects.EffectType.h: include/Uno.Int.h

include/Fuse.Effects.Halftone.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Halftone.h: include/Uno.Float4x4.h
include/Fuse.Effects.Halftone.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Effects.Mask.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Mask.h: include/Fuse.Internal.IImageContainerOwner.h
include/Fuse.Effects.Mask.h: include/Uno.Float4x4.h
include/Fuse.Effects.Mask.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Effects.Mask.MaskMode.h: include/Uno.Int.h

include/Fuse.Elements.Alignment.h: include/Uno.Int.h

include/Fuse.Elements.AlignmentHelpers.h: include/Uno.h

include/Fuse.Elements.BoxPlacement.h: include/Uno.Float2.h
include/Fuse.Elements.BoxPlacement.h: include/Uno.Object.h

include/Fuse.Elements.BoxSizing.h: include/Uno.Object.h
include/Fuse.Elements.BoxSizing.h: include/Fuse.Elements.BoxPlacement.h
include/Fuse.Elements.BoxSizing.h: include/Uno.Float2.h

include/Fuse.Elements.Cache.h: include/Fuse.Elements.CacheTile.h
include/Fuse.Elements.Cache.h: include/Uno.Object.h
include/Fuse.Elements.Cache.h: include/Uno.Recti.h

include/Fuse.Elements.CacheHelper.h: include/Uno.Float2.h
include/Fuse.Elements.CacheHelper.h: include/Uno.Object.h
include/Fuse.Elements.CacheHelper.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Elements.CacheTile.h: include/Uno.Float4x4.h
include/Fuse.Elements.CacheTile.h: include/Uno.Object.h
include/Fuse.Elements.CacheTile.h: include/Uno.Recti.h

include/Fuse.Elements.CachingMode.h: include/Uno.Int.h

include/Fuse.Elements.DisplayHelpers.h: include/Uno.h

include/Fuse.Elements.Element.BoxSizingMode.h: include/Uno.Int.h

include/Fuse.Elements.Element.GMSCacheItem.h: include/Uno.Float2.h
include/Fuse.Elements.Element.GMSCacheItem.h: include/Uno.Object.h

include/Fuse.Elements.Element.h: include/Fuse.Animations.IResize.h
include/Fuse.Elements.Element.h: include/Fuse.Elements.Element.GMSCacheItem.h
include/Fuse.Elements.Element.h: include/Fuse.IActualPlacement.h
include/Fuse.Elements.Element.h: include/Fuse.Node.h
include/Fuse.Elements.Element.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Elements.Element.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Elements.Element.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Elements.Element.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Elements.Element.h: include/Uno.Float2.h
include/Fuse.Elements.Element.h: include/Uno.Rect.h
include/Fuse.Elements.Element.h: include/Uno.Float3.h
include/Fuse.Elements.Element.h: include/Uno.Float4.h
include/Fuse.Elements.Element.h: include/Uno.Geometry.Box.h
include/Fuse.Elements.Element.h: include/Uno.Recti.h

include/Fuse.Elements.ElementAtlas.h: include/Uno.Object.h

include/Fuse.Elements.ElementAtlasFramebuffer.h: include/Uno.Object.h

include/Fuse.Elements.ElementAtlasFramebufferPool.h: include/Uno.h

include/Fuse.Elements.ElementAtlasFramebufferPoolEntry.h: include/Uno.Object.h

include/Fuse.Elements.ElementAtlasFramebufferPoolImpl.h: include/Fuse.Resources.ISoftDisposable.h
include/Fuse.Elements.ElementAtlasFramebufferPoolImpl.h: include/Uno.Object.h

include/Fuse.Elements.ElementBatch.h: include/Fuse.Elements.IElementBatchDrawable.h
include/Fuse.Elements.ElementBatch.h: include/Uno.Graphics.VertexAttributeInfo.h
include/Fuse.Elements.ElementBatch.h: include/Uno.Object.h
include/Fuse.Elements.ElementBatch.h: include/Uno.Rect.h
include/Fuse.Elements.ElementBatch.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Elements.ElementBatchEntry.h: include/Uno.Object.h
include/Fuse.Elements.ElementBatchEntry.h: include/Uno.Recti.h

include/Fuse.Elements.ElementBatcher.h: include/Fuse.Resources.ISoftDisposable.h
include/Fuse.Elements.ElementBatcher.h: include/Uno.Object.h

include/Fuse.Elements.HitTestMode.h: include/Uno.Int.h

include/Fuse.Elements.IElementBatchDrawable.h: include/Uno.Object.h
include/Fuse.Elements.IElementBatchDrawable.h: include/Uno.Float4x4.h
include/Fuse.Elements.IElementBatchDrawable.h: include/Uno.Rect.h

include/Fuse.Elements.Internal.ElementDraw.h: include/Uno.Float4x4.h
include/Fuse.Elements.Internal.ElementDraw.h: include/Uno.Object.h
include/Fuse.Elements.Internal.ElementDraw.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Elements.Internal.Scale9Rectangle.h: include/Uno.Object.h
include/Fuse.Elements.Internal.Scale9Rectangle.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Elements.ITransformOrigin.h: include/Uno.Object.h
include/Fuse.Elements.ITransformOrigin.h: include/Uno.Float3.h

include/Fuse.Elements.LayoutMasterBoxSizing.h: include/Fuse.Elements.BoxSizing.h

include/Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData.h: include/Uno.Object.h

include/Fuse.Elements.LayoutMasterMode.h: include/Uno.Int.h

include/Fuse.Elements.LimitBoxSizing.h: include/Fuse.Elements.BoxSizing.h

include/Fuse.Elements.NoImplicitMaxBoxSizing.h: include/Fuse.Elements.StandardBoxSizing.h

include/Fuse.Elements.PreplacementArgs.h: include/Uno.EventArgs.h

include/Fuse.Elements.PreplacementHandler.h: include/Uno.Delegate.h

include/Fuse.Elements.SimpleAlignment.h: include/Uno.Int.h

include/Fuse.Elements.SingleNodeDrawable.h: include/Fuse.Elements.IElementBatchDrawable.h
include/Fuse.Elements.SingleNodeDrawable.h: include/Uno.Object.h

include/Fuse.Elements.SizeUnit.h: include/Uno.Int.h

include/Fuse.Elements.StandardBoxSizing.h: include/Fuse.Elements.BoxSizing.h

include/Fuse.Elements.StretchDirection.h: include/Uno.Int.h

include/Fuse.Elements.StretchMode.h: include/Uno.Int.h

include/Fuse.Elements.StretchSizing.h: include/Uno.Int.h

include/Fuse.Elements.TextAlignment.h: include/Uno.Int.h

include/Fuse.Elements.TextureAtlas.h: include/Uno.Int2.h
include/Fuse.Elements.TextureAtlas.h: include/Uno.Object.h
include/Fuse.Elements.TextureAtlas.h: include/Uno.Recti.h

include/Fuse.Elements.TextWrapping.h: include/Uno.Int.h

include/Fuse.Elements.TransformOrigins.AnchorOrigin.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.TransformOrigins.AnchorOrigin.h: include/Uno.Object.h

include/Fuse.Elements.TransformOrigins.BoxCenter.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.TransformOrigins.BoxCenter.h: include/Uno.Float2.h
include/Fuse.Elements.TransformOrigins.BoxCenter.h: include/Uno.Object.h

include/Fuse.Elements.TransformOrigins.CenterOrigin.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.TransformOrigins.CenterOrigin.h: include/Uno.Object.h

include/Fuse.Elements.TransformOrigins.h: include/Uno.h

include/Fuse.Elements.TransformOrigins.TopLeftOrigin.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.TransformOrigins.TopLeftOrigin.h: include/Uno.Object.h

include/Fuse.Elements.TranslationModes.h: include/Uno.h

include/Fuse.Elements.TranslationModes.OffsetMode.h: include/Fuse.ITransformMode.h
include/Fuse.Elements.TranslationModes.OffsetMode.h: include/Fuse.ITranslationMode.h
include/Fuse.Elements.TranslationModes.OffsetMode.h: include/Uno.Object.h
include/Fuse.Elements.TranslationModes.OffsetMode.h: include/Uno.Float3.h

include/Fuse.Elements.TranslationModes.PositionOffsetMode.h: include/Fuse.Elements.TranslationModes.OffsetMode.h
include/Fuse.Elements.TranslationModes.PositionOffsetMode.h: include/Fuse.ITransformMode.h
include/Fuse.Elements.TranslationModes.PositionOffsetMode.h: include/Fuse.ITranslationMode.h

include/Fuse.Elements.TranslationModes.SizeFactorMode.h: include/Fuse.IScalingMode.h
include/Fuse.Elements.TranslationModes.SizeFactorMode.h: include/Fuse.ITransformMode.h
include/Fuse.Elements.TranslationModes.SizeFactorMode.h: include/Uno.Object.h

include/Fuse.Elements.TranslationModes.TransformOriginOffsetMode.h: include/Fuse.Elements.TranslationModes.OffsetMode.h
include/Fuse.Elements.TranslationModes.TransformOriginOffsetMode.h: include/Fuse.ITransformMode.h
include/Fuse.Elements.TranslationModes.TransformOriginOffsetMode.h: include/Fuse.ITranslationMode.h

include/Fuse.Elements.Viewport.h: include/Fuse.Animations.IResize.h
include/Fuse.Elements.Viewport.h: include/Fuse.Elements.Element.h
include/Fuse.Elements.Viewport.h: include/Fuse.IActualPlacement.h
include/Fuse.Elements.Viewport.h: include/Fuse.IViewport.h
include/Fuse.Elements.Viewport.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Elements.Viewport.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Elements.Viewport.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Elements.Viewport.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Elements.Viewport.h: include/Uno.Float4x4.h
include/Fuse.Elements.Viewport.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Elements.Visibility.h: include/Uno.Int.h

include/Fuse.Entities.Component.h: include/Uno.Object.h

include/Fuse.Entities.DefaultMaterial.h: include/Fuse.Entities.Material.h
include/Fuse.Entities.DefaultMaterial.h: include/Uno.Float2.h
include/Fuse.Entities.DefaultMaterial.h: include/Uno.Float3.h

include/Fuse.Entities.Designer.AnimationHelpers.h: include/Uno.h

include/Fuse.Entities.Designer.PreloadedResources.h: include/Uno.h

include/Fuse.Entities.DirectArrayMeshIntersecter.h: include/Fuse.Entities.TriangleMeshIntersecter.h
include/Fuse.Entities.DirectArrayMeshIntersecter.h: include/Uno.Float3.h

include/Fuse.Entities.DirectionalLight.h: include/Fuse.Entities.Light.h
include/Fuse.Entities.DirectionalLight.h: include/Uno.Geometry.Box.h

include/Fuse.Entities.Entity.h: include/Fuse.Node.h
include/Fuse.Entities.Entity.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Entities.Entry.h: include/Uno.Float4x4.h
include/Fuse.Entities.Entry.h: include/Uno.Object.h

include/Fuse.Entities.EnvironmentLight.h: include/Fuse.Entities.Light.h

include/Fuse.Entities.Filters.Blitter.h: include/Uno.Object.h
include/Fuse.Entities.Filters.Blitter.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Entities.Filters.Blur.h: include/Fuse.Entities.RenderNode.h
include/Fuse.Entities.Filters.Blur.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Entities.Filters.Blur.h: include/Uno.Float4.h
include/Fuse.Entities.Filters.Blur.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Entities.Filters.FindEdges.h: include/Fuse.Entities.RenderNode.h
include/Fuse.Entities.Filters.FindEdges.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Entities.Filters.FindEdges.h: include/Uno.Float4.h
include/Fuse.Entities.Filters.FindEdges.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Entities.Frustum.h: include/Fuse.Entities.Component.h
include/Fuse.Entities.Frustum.h: include/Fuse.IFrustum.h

include/Fuse.Entities.ILightVisitor.h: include/Uno.Object.h

include/Fuse.Entities.IndexedArrayMeshIntersecter.h: include/Fuse.Entities.TriangleMeshIntersecter.h
include/Fuse.Entities.IndexedArrayMeshIntersecter.h: include/Uno.Float3.h

include/Fuse.Entities.Internal.SceneGraphBuilder.h: include/Uno.Object.h

include/Fuse.Entities.Internal.SceneGraphBuilderVisitor.h: include/Uno.Object.h

include/Fuse.Entities.Light.h: include/Fuse.Entities.Component.h
include/Fuse.Entities.Light.h: include/Uno.Float3.h

include/Fuse.Entities.Material.h: include/Uno.Object.h

include/Fuse.Entities.Mesh.h: include/Uno.Geometry.Box.h
include/Fuse.Entities.Mesh.h: include/Uno.Geometry.Sphere.h
include/Fuse.Entities.Mesh.h: include/Uno.IDisposable.h
include/Fuse.Entities.Mesh.h: include/Uno.Object.h

include/Fuse.Entities.MeshBatchingEngine.h: include/Fuse.Entities.Entry.h
include/Fuse.Entities.MeshBatchingEngine.h: include/Fuse.IFlush.h
include/Fuse.Entities.MeshBatchingEngine.h: include/Uno.Float4x4.h
include/Fuse.Entities.MeshBatchingEngine.h: include/Uno.Object.h
include/Fuse.Entities.MeshBatchingEngine.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Entities.MeshHitTestMode.h: include/Uno.Int.h

include/Fuse.Entities.MeshRenderer.h: include/Fuse.Entities.Component.h
include/Fuse.Entities.MeshRenderer.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Entities.ModelMeshCollision.Direct.h: include/Fuse.Entities.TriangleMeshIntersecter.h

include/Fuse.Entities.ModelMeshCollision.h: include/Uno.Object.h

include/Fuse.Entities.ModelMeshCollision.Indexed.h: include/Fuse.Entities.TriangleMeshIntersecter.h

include/Fuse.Entities.ModelMeshHelpers.h: include/Uno.h

include/Fuse.Entities.NodeExtensions.h: include/Uno.h

include/Fuse.Entities.PointLight.h: include/Fuse.Entities.Light.h

include/Fuse.Entities.Primitives.ConeRenderer.h: include/Fuse.Entities.MeshRenderer.h

include/Fuse.Entities.Primitives.CubeRenderer.h: include/Fuse.Entities.MeshRenderer.h

include/Fuse.Entities.Primitives.CylinderRenderer.h: include/Fuse.Entities.MeshRenderer.h

include/Fuse.Entities.Primitives.SphereRenderer.h: include/Fuse.Entities.MeshRenderer.h

include/Fuse.Entities.Processing.Extrude.h: include/Fuse.Entities.Mesh.h
include/Fuse.Entities.Processing.Extrude.h: include/Fuse.IOutput-1.h
include/Fuse.Entities.Processing.Extrude.h: include/Uno.Object.h

include/Fuse.Entities.Processing.Stroke.h: include/Fuse.Drawing.Polygon.h
include/Fuse.Entities.Processing.Stroke.h: include/Fuse.IOutput-1.h
include/Fuse.Entities.Processing.Stroke.h: include/Uno.Object.h

include/Fuse.Entities.Raycasting.EntityVisitor.h: include/Uno.Float2.h
include/Fuse.Entities.Raycasting.EntityVisitor.h: include/Uno.Object.h

include/Fuse.Entities.Raycasting.h: include/Uno.h

include/Fuse.Entities.RenderNode.h: include/Fuse.Node.h
include/Fuse.Entities.RenderNode.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Entities.RenderToTexture.h: include/Fuse.Entities.RenderNode.h
include/Fuse.Entities.RenderToTexture.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Entities.RenderToTexture.h: include/Uno.Float4.h
include/Fuse.Entities.RenderToTexture.h: include/Uno.Int2.h
include/Fuse.Entities.RenderToTexture.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Entities.Scene.h: include/Fuse.Entities.RenderNode.h
include/Fuse.Entities.Scene.h: include/Fuse.IViewport.h
include/Fuse.Entities.Scene.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Entities.Scene.h: include/Uno.Float4.h

include/Fuse.Entities.SkinnedMeshRenderer.h: include/Fuse.Entities.MeshRenderer.h

include/Fuse.Entities.Skinner.h: include/Uno.Float4x4.h
include/Fuse.Entities.Skinner.h: include/Uno.Object.h

include/Fuse.Entities.SpotLight.h: include/Fuse.Entities.Light.h

include/Fuse.Entities.Transform3D.h: include/Fuse.Transform.h
include/Fuse.Entities.Transform3D.h: include/Uno.Float3.h
include/Fuse.Entities.Transform3D.h: include/Uno.Float4.h

include/Fuse.Entities.TriangleMeshIntersecter.h: include/Uno.Object.h
include/Fuse.Entities.TriangleMeshIntersecter.h: include/Uno.Geometry.Ray.h
include/Fuse.Entities.TriangleMeshIntersecter.h: include/Uno.Geometry.Triangle.h

include/Fuse.Entities.VisitAction-1.h: include/Fuse.Entities.VisitType-1.h
include/Fuse.Entities.VisitAction-1.h: include/Uno.Object.h

include/Fuse.Entities.VisitPredicate-1.h: include/Fuse.Entities.VisitType-1.h
include/Fuse.Entities.VisitPredicate-1.h: include/Uno.Object.h

include/Fuse.Entities.VisitType-1.h: include/Uno.Object.h

include/Fuse.FastMatrix.h: include/Uno.Float4x4.h
include/Fuse.FastMatrix.h: include/Uno.Object.h

include/Fuse.FixedViewport.h: include/Fuse.IViewport.h
include/Fuse.FixedViewport.h: include/Uno.Float2.h
include/Fuse.FixedViewport.h: include/Uno.Object.h

include/Fuse.Font.h: include/Uno.Object.h

include/Fuse.Fonts.h: include/Uno.h

include/Fuse.FramebufferPool.h: include/Uno.h

include/Fuse.FramebufferPoolImpl.h: include/Fuse.Resources.ISoftDisposable.h
include/Fuse.FramebufferPoolImpl.h: include/Uno.Object.h

include/Fuse.FrustumViewport.h: include/Uno.Float4x4.h
include/Fuse.FrustumViewport.h: include/Uno.Object.h

include/Fuse.GeoLocation.AndroidLocationProvider.h: include/Android.android.location.LocationListener.h
include/Fuse.GeoLocation.AndroidLocationProvider.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.GeoLocation.AndroidLocationProvider.h: include/Fuse.GeoLocation.ILocationTracker.h
include/Fuse.GeoLocation.AndroidLocationProvider.h: include/Fuse.GeoLocation.LocationListenerBase.h
include/Fuse.GeoLocation.AndroidLocationProvider.h: include/Uno.IDisposable.h

include/Fuse.GeoLocation.GeoCoordinates.h: include/Uno.Object.h

include/Fuse.GeoLocation.GeoLocationAuthorizationType.h: include/Uno.Int.h

include/Fuse.GeoLocation.ILocationTracker.h: include/Uno.Object.h

include/Fuse.GeoLocation.Location.h: include/Uno.Object.h

include/Fuse.GeoLocation.LocationListenerBase.h: include/Android.android.location.LocationListener.h
include/Fuse.GeoLocation.LocationListenerBase.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.GeoLocation.LocationListenerBase.h: include/Android.java.lang.Object.h
include/Fuse.GeoLocation.LocationListenerBase.h: include/Uno.IDisposable.h

include/Fuse.GeoLocation.LocationTracker.h: include/Uno.Object.h

include/Fuse.GeoLocation.PromiseListener.h: include/Android.android.location.LocationListener.h
include/Fuse.GeoLocation.PromiseListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.GeoLocation.PromiseListener.h: include/Fuse.GeoLocation.TimeoutListener.h
include/Fuse.GeoLocation.PromiseListener.h: include/Uno.IDisposable.h

include/Fuse.GeoLocation.TimeoutListener.h: include/Android.android.location.LocationListener.h
include/Fuse.GeoLocation.TimeoutListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.GeoLocation.TimeoutListener.h: include/Fuse.GeoLocation.LocationListenerBase.h
include/Fuse.GeoLocation.TimeoutListener.h: include/Uno.IDisposable.h

include/Fuse.Gestures.Clicked.h: include/Fuse.Gestures.ClickerTrigger.h

include/Fuse.Gestures.ClickedArgs.h: include/Fuse.Input.CustomPointerEventArgs.h
include/Fuse.Gestures.ClickedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Gestures.ClickedHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.Clicker.h: include/Uno.Float2.h
include/Fuse.Gestures.Clicker.h: include/Uno.Object.h

include/Fuse.Gestures.ClickerEventHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.ClickerTrigger.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Gestures.DegreeSpan.h: include/Uno.Object.h

include/Fuse.Gestures.DoubleClicked.h: include/Fuse.Gestures.ClickerTrigger.h

include/Fuse.Gestures.DoubleTapped.h: include/Fuse.Gestures.ClickerTrigger.h

include/Fuse.Gestures.DoubleTappedArgs.h: include/Fuse.Input.CustomPointerEventArgs.h
include/Fuse.Gestures.DoubleTappedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Gestures.DoubleTappedHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.Edge.h: include/Uno.Int.h

include/Fuse.Gestures.EdgeSwipeAnimation.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Gestures.Internal.EdgeSwiper.h: include/Uno.Float2.h
include/Fuse.Gestures.Internal.EdgeSwiper.h: include/Uno.Object.h

include/Fuse.Gestures.Internal.Swiper.h: include/Uno.Float2.h
include/Fuse.Gestures.Internal.Swiper.h: include/Uno.Object.h

include/Fuse.Gestures.Internal.SwipeRegion.h: include/Uno.Float2.h
include/Fuse.Gestures.Internal.SwipeRegion.h: include/Uno.Float4.h
include/Fuse.Gestures.Internal.SwipeRegion.h: include/Uno.Object.h

include/Fuse.Gestures.Internal.SwipeRegionArea.h: include/Uno.Int.h

include/Fuse.Gestures.KeepFocusInView.h: include/Fuse.Gestures.KeepInViewCommon.h

include/Fuse.Gestures.KeepInView.h: include/Fuse.Gestures.KeepInViewCommon.h

include/Fuse.Gestures.KeepInViewCommon.h: include/Fuse.Behavior.h

include/Fuse.Gestures.LongPressed.h: include/Fuse.Gestures.ClickerTrigger.h

include/Fuse.Gestures.LongPressedArgs.h: include/Fuse.Input.CustomPointerEventArgs.h
include/Fuse.Gestures.LongPressedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Gestures.LongPressedHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.Pressed.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Gestures.Released.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Gestures.ScrollableGoto.h: include/Fuse.Triggers.Actions.TriggerAction.h
include/Fuse.Gestures.ScrollableGoto.h: include/Uno.Float2.h

include/Fuse.Gestures.ScrollDirections.h: include/Uno.Int.h

include/Fuse.Gestures.Scroller.h: include/Fuse.Behavior.h
include/Fuse.Gestures.Scroller.h: include/Uno.Float2.h

include/Fuse.Gestures.Scroller.MoveUserFlags.h: include/Uno.Int.h

include/Fuse.Gestures.SetSwipeActive.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Gestures.Swiped.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Gestures.SwipedHow.h: include/Uno.Int.h

include/Fuse.Gestures.SwipeDirection.h: include/Uno.Int.h

include/Fuse.Gestures.SwipeGesture.h: include/Fuse.Behavior.h

include/Fuse.Gestures.SwipeGestureHelper.h: include/Uno.Object.h

include/Fuse.Gestures.SwipeType.h: include/Uno.Int.h

include/Fuse.Gestures.SwipingAnimation.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Gestures.Tapped.h: include/Fuse.Gestures.ClickerTrigger.h

include/Fuse.Gestures.TappedArgs.h: include/Fuse.Input.CustomPointerEventArgs.h
include/Fuse.Gestures.TappedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Gestures.TappedHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.ToggleSwipeActive.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Gestures.Trackball.h: include/Fuse.Behavior.h
include/Fuse.Gestures.Trackball.h: include/Uno.Float2.h
include/Fuse.Gestures.Trackball.h: include/Uno.Float3.h
include/Fuse.Gestures.Trackball.h: include/Uno.Float4.h
include/Fuse.Gestures.Trackball.h: include/Uno.Float4x4.h

include/Fuse.Gestures.Trackball.MoveMode.h: include/Uno.Int.h

include/Fuse.Gestures.WhileClickerTrigger.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Gestures.WhileHovering.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Gestures.WhilePressed.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Gestures.WhileSwipeActive.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.GraphicsTheme.h: include/Fuse.Theme.h
include/Fuse.GraphicsTheme.h: include/Uno.UX.ITemplate.h

include/Fuse.GraphicsWorker.h: include/Uno.h

include/Fuse.HitTestCallback.h: include/Uno.Delegate.h

include/Fuse.HitTestContext.h: include/Uno.Float2.h
include/Fuse.HitTestContext.h: include/Uno.Geometry.Ray.h
include/Fuse.HitTestContext.h: include/Uno.Object.h

include/Fuse.HitTestHandler.h: include/Uno.Delegate.h

include/Fuse.HitTestResult.h: include/Uno.Object.h

include/Fuse.IActualPlacement.h: include/Uno.Object.h
include/Fuse.IActualPlacement.h: include/Uno.Float3.h

include/Fuse.IFlush.h: include/Uno.Object.h

include/Fuse.IFrustum.h: include/Uno.Object.h
include/Fuse.IFrustum.h: include/Uno.Float2.h
include/Fuse.IFrustum.h: include/Uno.Float3.h
include/Fuse.IFrustum.h: include/Uno.Float4x4.h

include/Fuse.Input.Capturer.h: include/Uno.Object.h

include/Fuse.Input.CustomPointerEventArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.CustomPointerEventArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.Focus.h: include/Uno.h

include/Fuse.Input.FocusDelegator.h: include/Uno.Delegate.h

include/Fuse.Input.FocusGained.h: include/Fuse.Input.FocusGainedArgs.h
include/Fuse.Input.FocusGained.h: include/Fuse.Input.FocusGainedHandler.h
include/Fuse.Input.FocusGained.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.FocusGainedArgs.h: include/Fuse.NodeEventArgs.h
include/Fuse.Input.FocusGainedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.FocusGainedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.FocusLost.h: include/Fuse.Input.FocusLostArgs.h
include/Fuse.Input.FocusLost.h: include/Fuse.Input.FocusLostHandler.h
include/Fuse.Input.FocusLost.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.FocusLostArgs.h: include/Fuse.NodeEventArgs.h
include/Fuse.Input.FocusLostArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.FocusLostHandler.h: include/Uno.Delegate.h

include/Fuse.Input.FocusNavigationDirection.h: include/Uno.Int.h

include/Fuse.Input.FocusPredictStrategy.h: include/Uno.h

include/Fuse.Input.HitTestHelpers.h: include/Uno.h

include/Fuse.Input.IPointerEventResponder.h: include/Uno.Object.h

include/Fuse.Input.IsFocusableChangedArgs.h: include/Fuse.NodeEventArgs.h
include/Fuse.Input.IsFocusableChangedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.IsFocusableChangedEvent.h: include/Fuse.Input.IsFocusableChangedArgs.h
include/Fuse.Input.IsFocusableChangedEvent.h: include/Fuse.Input.IsFocusableChangedHandler.h
include/Fuse.Input.IsFocusableChangedEvent.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.IsFocusableChangedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.Keyboard.h: include/Uno.h

include/Fuse.Input.KeyEventArgs.h: include/Fuse.NodeEventArgs.h
include/Fuse.Input.KeyEventArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.KeyPressed.h: include/Fuse.Input.KeyPressedArgs.h
include/Fuse.Input.KeyPressed.h: include/Fuse.Input.KeyPressedHandler.h
include/Fuse.Input.KeyPressed.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.KeyPressedArgs.h: include/Fuse.Input.KeyEventArgs.h
include/Fuse.Input.KeyPressedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.KeyPressedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.KeyReleased.h: include/Fuse.Input.KeyReleasedArgs.h
include/Fuse.Input.KeyReleased.h: include/Fuse.Input.KeyReleasedHandler.h
include/Fuse.Input.KeyReleased.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.KeyReleasedArgs.h: include/Fuse.Input.KeyEventArgs.h
include/Fuse.Input.KeyReleasedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.KeyReleasedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.Pointer.DefaultPointerEventResponder.h: include/Fuse.Input.IPointerEventResponder.h
include/Fuse.Input.Pointer.DefaultPointerEventResponder.h: include/Uno.Object.h

include/Fuse.Input.Pointer.h: include/Uno.h

include/Fuse.Input.Pointer.PELHolder.h: include/Uno.Object.h

include/Fuse.Input.Pointer.PELStatus.h: include/Uno.Int.h

include/Fuse.Input.Pointer.PointerRecord.h: include/Uno.Float2.h
include/Fuse.Input.Pointer.PointerRecord.h: include/Uno.Object.h

include/Fuse.Input.PointerEntered.h: include/Fuse.Input.PointerEnteredArgs.h
include/Fuse.Input.PointerEntered.h: include/Fuse.Input.PointerEnteredHandler.h
include/Fuse.Input.PointerEntered.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.PointerEnteredArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerEnteredArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerEnteredHandler.h: include/Uno.Delegate.h

include/Fuse.Input.PointerEventArgs.h: include/Fuse.NodeEventArgs.h
include/Fuse.Input.PointerEventArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerEventData.h: include/Uno.Float2.h
include/Fuse.Input.PointerEventData.h: include/Uno.Object.h

include/Fuse.Input.PointerLeft.h: include/Fuse.Input.PointerLeftArgs.h
include/Fuse.Input.PointerLeft.h: include/Fuse.Input.PointerLeftHandler.h
include/Fuse.Input.PointerLeft.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.PointerLeftArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerLeftArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerLeftHandler.h: include/Uno.Delegate.h

include/Fuse.Input.PointerMoved.h: include/Fuse.Input.PointerMovedArgs.h
include/Fuse.Input.PointerMoved.h: include/Fuse.Input.PointerMovedHandler.h
include/Fuse.Input.PointerMoved.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.PointerMovedArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerMovedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerMovedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.PointerPressed.h: include/Fuse.Input.PointerPressedArgs.h
include/Fuse.Input.PointerPressed.h: include/Fuse.Input.PointerPressedHandler.h
include/Fuse.Input.PointerPressed.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.PointerPressedArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerPressedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerPressedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.PointerReleased.h: include/Fuse.Input.PointerReleasedArgs.h
include/Fuse.Input.PointerReleased.h: include/Fuse.Input.PointerReleasedHandler.h
include/Fuse.Input.PointerReleased.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.PointerReleasedArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerReleasedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerReleasedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.PointerWheelMoved.h: include/Fuse.Input.PointerWheelMovedArgs.h
include/Fuse.Input.PointerWheelMoved.h: include/Fuse.Input.PointerWheelMovedHandler.h
include/Fuse.Input.PointerWheelMoved.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.PointerWheelMovedArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerWheelMovedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerWheelMovedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.SelectionQuery.h: include/Uno.Object.h

include/Fuse.Input.TextEntered.h: include/Fuse.Input.TextEnteredArgs.h
include/Fuse.Input.TextEntered.h: include/Fuse.Input.TextEnteredHandler.h
include/Fuse.Input.TextEntered.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.TextEnteredArgs.h: include/Fuse.NodeEventArgs.h
include/Fuse.Input.TextEnteredArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.TextEnteredHandler.h: include/Uno.Delegate.h

include/Fuse.Input.TextService.h: include/Uno.h

include/Fuse.Input.TraverseNodeExtensions.h: include/Uno.h

include/Fuse.Input.UX.AttachedFocusMembers.h: include/Uno.h

include/Fuse.Input.UX.AttachedKeyboardMembers.h: include/Uno.h

include/Fuse.Input.UX.AttachedPointerMembers.h: include/Uno.h

include/Fuse.Internal.Blender-1.h: include/Uno.Object.h

include/Fuse.Internal.BlenderMap.h: include/Uno.Object.h

include/Fuse.Internal.DoubleBlender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.DoubleBlender.h: include/Uno.Double.h

include/Fuse.Internal.Drawing.SolidRectangle.h: include/Uno.Float4x4.h
include/Fuse.Internal.Drawing.SolidRectangle.h: include/Uno.Object.h
include/Fuse.Internal.Drawing.SolidRectangle.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Internal.Float2Blender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.Float2Blender.h: include/Uno.Float2.h

include/Fuse.Internal.Float3Blender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.Float3Blender.h: include/Uno.Float3.h

include/Fuse.Internal.Float4Blender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.Float4Blender.h: include/Uno.Float4.h

include/Fuse.Internal.FloatBlender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.FloatBlender.h: include/Uno.Float.h

include/Fuse.Internal.FrustumMatrix.h: include/Uno.h

include/Fuse.Internal.FuseConfig.h: include/Uno.h

include/Fuse.Internal.IImageContainerOwner.h: include/Uno.Object.h

include/Fuse.Internal.ImageContainer.h: include/Uno.Object.h

include/Fuse.Internal.RectExtensions.h: include/Uno.h

include/Fuse.Internal.SimpleLock.h: include/Uno.Object.h

include/Fuse.Internal.SizingContainer.h: include/Uno.Float4.h
include/Fuse.Internal.SizingContainer.h: include/Uno.Object.h

include/Fuse.Internal.Statistics.h: include/Uno.h

include/Fuse.InvalidateLayoutReason.h: include/Uno.Int.h

include/Fuse.iOS.Blitter.h: include/Uno.Float2.h
include/Fuse.iOS.Blitter.h: include/Uno.Object.h
include/Fuse.iOS.Blitter.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.iOS.Controls.Button.h: include/Fuse.Controls.Button.h
include/Fuse.iOS.Controls.Button.h: include/Fuse.iOS.Controls.Control-1.h
include/Fuse.iOS.Controls.Button.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.Circle.h: include/Fuse.Controls.Circle.h
include/Fuse.iOS.Controls.Circle.h: include/Fuse.iOS.Controls.Shape-1.h
include/Fuse.iOS.Controls.Circle.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.Control-1.h: include/Fuse.iOS.Controls.Element.h
include/Fuse.iOS.Controls.Control-1.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.ControlProperties.h: include/Uno.h

include/Fuse.iOS.Controls.Element.h: include/Fuse.Node.h
include/Fuse.iOS.Controls.Element.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.Image.h: include/Fuse.Controls.Image.h
include/Fuse.iOS.Controls.Image.h: include/Fuse.iOS.Controls.Control-1.h
include/Fuse.iOS.Controls.Image.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.MapView.h: include/Fuse.Controls.MapView.h
include/Fuse.iOS.Controls.MapView.h: include/Fuse.iOS.Controls.Control-1.h
include/Fuse.iOS.Controls.MapView.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.Rectangle.h: include/Fuse.Controls.Rectangle.h
include/Fuse.iOS.Controls.Rectangle.h: include/Fuse.iOS.Controls.Shape-1.h
include/Fuse.iOS.Controls.Rectangle.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.Shape-1.h: include/Fuse.iOS.Controls.Control-1.h
include/Fuse.iOS.Controls.Shape-1.h: include/Fuse.Scripting.INameScope.h
include/Fuse.iOS.Controls.Shape-1.h: include/Uno.Object.h

include/Fuse.iOS.Controls.Slider.h: include/Fuse.Controls.Slider.h
include/Fuse.iOS.Controls.Slider.h: include/Fuse.iOS.Controls.Control-1.h
include/Fuse.iOS.Controls.Slider.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.Switch.h: include/Fuse.Controls.Switch.h
include/Fuse.iOS.Controls.Switch.h: include/Fuse.iOS.Controls.Control-1.h
include/Fuse.iOS.Controls.Switch.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.TextBlock.h: include/Fuse.Controls.TextBlock.h
include/Fuse.iOS.Controls.TextBlock.h: include/Fuse.iOS.Controls.Control-1.h
include/Fuse.iOS.Controls.TextBlock.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.TextInput.h: include/Fuse.Controls.TextEdit.h
include/Fuse.iOS.Controls.TextInput.h: include/Fuse.iOS.Controls.Control-1.h
include/Fuse.iOS.Controls.TextInput.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.WebView.h: include/Fuse.Controls.WebView.h
include/Fuse.iOS.Controls.WebView.h: include/Fuse.iOS.Controls.Control-1.h
include/Fuse.iOS.Controls.WebView.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.NativeStyle.h: include/Fuse.Style.h
include/Fuse.iOS.NativeStyle.h: include/Uno.UX.ITemplate.h

include/Fuse.iOS.NativeStyle.Template.h: include/Fuse.Controls.GraphicsView.h
include/Fuse.iOS.NativeStyle.Template.h: include/Uno.UX.ITemplate.h
include/Fuse.iOS.NativeStyle.Template.h: include/Uno.UX.Template-1.h

include/Fuse.iOS.NativeStyle.Template.Template1.h: include/Fuse.Controls.TextBlock.h
include/Fuse.iOS.NativeStyle.Template.Template1.h: include/Uno.UX.ITemplate.h
include/Fuse.iOS.NativeStyle.Template.Template1.h: include/Uno.UX.Template-1.h

include/Fuse.iOS.NativeStyle.Template.Template2.Factory.h: include/Uno.Object.h
include/Fuse.iOS.NativeStyle.Template.Template2.Factory.h: include/Uno.UX.IFactory.h

include/Fuse.iOS.NativeStyle.Template.Template2.Factory1.h: include/Uno.Object.h
include/Fuse.iOS.NativeStyle.Template.Template2.Factory1.h: include/Uno.UX.IFactory.h

include/Fuse.iOS.NativeStyle.Template.Template2.h: include/Fuse.Controls.PlainTextEdit.h
include/Fuse.iOS.NativeStyle.Template.Template2.h: include/Uno.UX.ITemplate.h
include/Fuse.iOS.NativeStyle.Template.Template2.h: include/Uno.UX.Template-1.h

include/Fuse.iOS.NativeTemplate.h: include/Uno.Object.h
include/Fuse.iOS.NativeTemplate.h: include/Uno.UX.ITemplate.h

include/Fuse.iOS.NativeViews.ContentControl.h: include/Fuse.Controls.ContentControl.h
include/Fuse.iOS.NativeViews.ContentControl.h: include/Fuse.iOS.NativeViews.ParentNativeView-1.h

include/Fuse.iOS.NativeViews.GenericNativeView.h: include/Fuse.iOS.NativeViews.NativeView.h

include/Fuse.iOS.NativeViews.GraphicsView.h: include/Fuse.Controls.GraphicsView.h
include/Fuse.iOS.NativeViews.GraphicsView.h: include/Fuse.iOS.NativeViews.ParentNativeView-1.h

include/Fuse.iOS.NativeViews.LeafNativeView.h: include/Fuse.iOS.NativeViews.NativeView.h

include/Fuse.iOS.NativeViews.NativeView.h: include/Fuse.Behavior.h

include/Fuse.iOS.NativeViews.NativeViewHost.h: include/Fuse.Controls.NativeViewHost.h
include/Fuse.iOS.NativeViews.NativeViewHost.h: include/Fuse.iOS.NativeViews.ParentNativeView-1.h

include/Fuse.iOS.NativeViews.Panel.h: include/Fuse.Controls.Panel.h
include/Fuse.iOS.NativeViews.Panel.h: include/Fuse.iOS.NativeViews.ParentNativeView-1.h

include/Fuse.iOS.NativeViews.ParentNativeView-1.h: include/Fuse.iOS.NativeViews.NativeView.h

include/Fuse.iOS.NativeViews.ScrollView.h: include/Fuse.Controls.ScrollView.h
include/Fuse.iOS.NativeViews.ScrollView.h: include/Fuse.iOS.NativeViews.ParentNativeView-1.h

include/Fuse.iOS.StatusBarConfig.h: include/Fuse.Behavior.h

include/Fuse.iOS.TextRenderer.h: include/Fuse.Controls.Graphics.TextVisual.h
include/Fuse.iOS.TextRenderer.h: include/Fuse.Scripting.INameScope.h

include/Fuse.IOutput-1.h: include/Uno.Object.h

include/Fuse.IScalingMode.h: include/Fuse.ITransformMode.h
include/Fuse.IScalingMode.h: include/Uno.Object.h
include/Fuse.IScalingMode.h: include/Uno.Float3.h

include/Fuse.ITransformMode.h: include/Uno.Object.h

include/Fuse.ITranslationMode.h: include/Fuse.ITransformMode.h
include/Fuse.ITranslationMode.h: include/Uno.Object.h
include/Fuse.ITranslationMode.h: include/Uno.Float3.h

include/Fuse.IViewport.h: include/Uno.Object.h
include/Fuse.IViewport.h: include/Uno.Float2.h
include/Fuse.IViewport.h: include/Uno.Float3.h
include/Fuse.IViewport.h: include/Uno.Float4x4.h
include/Fuse.IViewport.h: include/Uno.Geometry.Ray.h

include/Fuse.KeyboardBootstrapper.h: include/Uno.Object.h

include/Fuse.Launcher.h: include/Uno.h

include/Fuse.Layer.h: include/Uno.Int.h

include/Fuse.LayoutDependent.h: include/Uno.Int.h

include/Fuse.LayoutRole.h: include/Uno.Int.h

include/Fuse.Layouts.Column.h: include/Fuse.Layouts.DefinitionBase.h

include/Fuse.Layouts.ColumnLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.DefaultLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.DefinitionBase.h: include/Uno.Object.h

include/Fuse.Layouts.DefinitionBase.ParseDataItem.h: include/Uno.Object.h

include/Fuse.Layouts.Dock.h: include/Uno.Int.h

include/Fuse.Layouts.DockLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.FlowDirection.h: include/Uno.Int.h

include/Fuse.Layouts.GridLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.Layout.h: include/Uno.Object.h
include/Fuse.Layouts.Layout.h: include/Uno.Float2.h
include/Fuse.Layouts.Layout.h: include/Uno.Float4.h

include/Fuse.Layouts.Layouts.h: include/Uno.h

include/Fuse.Layouts.Metric.h: include/Uno.Int.h

include/Fuse.Layouts.Orientation.h: include/Uno.Int.h

include/Fuse.Layouts.Row.h: include/Fuse.Layouts.DefinitionBase.h

include/Fuse.Layouts.StackLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.WrapLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.MarginBoxDependent.h: include/Uno.Int.h

include/Fuse.MobileBootstrapping.h: include/Uno.Object.h

include/Fuse.NativeTheme.h: include/Fuse.Theme.h
include/Fuse.NativeTheme.h: include/Uno.UX.ITemplate.h

include/Fuse.NativeWithFallbackTheme.CreateTheme.h: include/Uno.Delegate.h

include/Fuse.NativeWithFallbackTheme.h: include/Uno.Object.h

include/Fuse.Navigation.ActivatingAnimation.h: include/Fuse.Navigation.NavigationAnimation.h

include/Fuse.Navigation.BackForwardNavigationTriggerAction.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Navigation.DeactivatingAnimation.h: include/Fuse.Navigation.NavigationAnimation.h

include/Fuse.Navigation.DefaultNavigationAnimator.h: include/Fuse.Navigation.INavigationAnimator.h
include/Fuse.Navigation.DefaultNavigationAnimator.h: include/Uno.Object.h

include/Fuse.Navigation.DefaultNavigationAnimatorPlayer.h: include/Fuse.Navigation.INavigationAnimatorPlayer.h
include/Fuse.Navigation.DefaultNavigationAnimatorPlayer.h: include/Uno.Object.h

include/Fuse.Navigation.DirectNavigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.DirectNavigation.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.DirectNavigation.h: include/Fuse.Navigation.Navigation.h

include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Navigation.Navigation.h

include/Fuse.Navigation.EndSeekArgs.h: include/Uno.Object.h

include/Fuse.Navigation.EnterExitAnimation.h: include/Fuse.Navigation.NavigationAnimation.h

include/Fuse.Navigation.EnteringAnimation.h: include/Fuse.Navigation.EnterExitAnimation.h

include/Fuse.Navigation.ExitingAnimation.h: include/Fuse.Navigation.EnterExitAnimation.h

include/Fuse.Navigation.GoBack.h: include/Fuse.Navigation.BackForwardNavigationTriggerAction.h

include/Fuse.Navigation.GoForward.h: include/Fuse.Navigation.BackForwardNavigationTriggerAction.h

include/Fuse.Navigation.HierarchicalNavigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.HierarchicalNavigation.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.HierarchicalNavigation.h: include/Fuse.Navigation.StructuredNavigation.h

include/Fuse.Navigation.HistoryChangedHandler.h: include/Uno.Delegate.h

include/Fuse.Navigation.IBaseNavigation.h: include/Uno.Object.h

include/Fuse.Navigation.INavigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.INavigation.h: include/Uno.Object.h

include/Fuse.Navigation.INavigationAnimator.h: include/Uno.Object.h

include/Fuse.Navigation.INavigationAnimatorPlayer.h: include/Uno.Object.h

include/Fuse.Navigation.INavigationPanel.h: include/Uno.Object.h
include/Fuse.Navigation.INavigationPanel.h: include/Uno.Float2.h

include/Fuse.Navigation.IPageResourceBinding.h: include/Uno.Object.h

include/Fuse.Navigation.ISeekable.h: include/Uno.Object.h

include/Fuse.Navigation.LinearNavigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.LinearNavigation.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.LinearNavigation.h: include/Fuse.Navigation.StructuredNavigation.h

include/Fuse.Navigation.NavigatedArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Navigation.NavigatedArgs.h: include/Uno.EventArgs.h

include/Fuse.Navigation.NavigatedHandler.h: include/Uno.Delegate.h

include/Fuse.Navigation.NavigateTo.h: include/Fuse.Navigation.NavigationTriggerAction.h

include/Fuse.Navigation.NavigateToggle.h: include/Fuse.Navigation.NavigationTriggerAction.h

include/Fuse.Navigation.Navigation.h: include/Fuse.Behavior.h
include/Fuse.Navigation.Navigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.Navigation.h: include/Fuse.Navigation.INavigation.h

include/Fuse.Navigation.NavigationAnimation.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Navigation.NavigationArgs.h: include/Uno.EventArgs.h

include/Fuse.Navigation.NavigationDirection.h: include/Uno.Int.h

include/Fuse.Navigation.NavigationEdge.h: include/Uno.Int.h

include/Fuse.Navigation.NavigationGotoMode.h: include/Uno.Int.h

include/Fuse.Navigation.NavigationHandler.h: include/Uno.Delegate.h

include/Fuse.Navigation.NavigationMode.h: include/Uno.Int.h

include/Fuse.Navigation.NavigationPageCountHandler.h: include/Uno.Delegate.h

include/Fuse.Navigation.NavigationPageProgressHandler.h: include/Uno.Delegate.h

include/Fuse.Navigation.NavigationPageProperty.h: include/Uno.h

include/Fuse.Navigation.NavigationState.h: include/Uno.Int.h

include/Fuse.Navigation.NavigationStateArgs.h: include/Uno.EventArgs.h

include/Fuse.Navigation.NavigationStateHandler.h: include/Uno.Delegate.h

include/Fuse.Navigation.NavigationTriggerAction.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Navigation.NavigationTween.h: include/Uno.Object.h

include/Fuse.Navigation.NavTriggerUtil.h: include/Uno.h

include/Fuse.Navigation.PageResourceBinding-1.h: include/Fuse.Behavior.h
include/Fuse.Navigation.PageResourceBinding-1.h: include/Fuse.Navigation.IPageResourceBinding.h

include/Fuse.Navigation.PlayerFactory.h: include/Uno.h

include/Fuse.Navigation.ProgressSpan.h: include/Uno.Object.h

include/Fuse.Navigation.ProgressTimer.h: include/Uno.Object.h

include/Fuse.Navigation.SeekNavigationAnimatorPlayer.h: include/Fuse.Navigation.INavigationAnimatorPlayer.h
include/Fuse.Navigation.SeekNavigationAnimatorPlayer.h: include/Uno.Object.h

include/Fuse.Navigation.SnapTo.h: include/Uno.Int.h

include/Fuse.Navigation.StructuredNavigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.StructuredNavigation.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.StructuredNavigation.h: include/Fuse.Navigation.Navigation.h

include/Fuse.Navigation.StructuredNavigation.NavigationStructure.h: include/Uno.Int.h

include/Fuse.Navigation.SwipeDirection.h: include/Uno.Int.h

include/Fuse.Navigation.SwipeEnds.h: include/Uno.Int.h

include/Fuse.Navigation.SwipeNavigate.h: include/Fuse.Behavior.h
include/Fuse.Navigation.SwipeNavigate.h: include/Uno.Float2.h

include/Fuse.Navigation.UpdateSeekArgs.h: include/Uno.Object.h

include/Fuse.Navigation.WhileActive.h: include/Fuse.Navigation.WhileNavigationTrigger.h

include/Fuse.Navigation.WhileCanGoBack.h: include/Fuse.Navigation.WhileHistoryTrigger.h

include/Fuse.Navigation.WhileCanGoForward.h: include/Fuse.Navigation.WhileHistoryTrigger.h

include/Fuse.Navigation.WhileHistoryTrigger.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Navigation.WhileInactive.h: include/Fuse.Navigation.WhileNavigationTrigger.h

include/Fuse.Navigation.WhileInEnterState.h: include/Fuse.Navigation.WhileNavigationTrigger.h

include/Fuse.Navigation.WhileInExitState.h: include/Fuse.Navigation.WhileNavigationTrigger.h

include/Fuse.Navigation.WhileNavigating.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Navigation.WhileNavigationTrigger.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Node.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Node.h: include/Uno.Float2.h
include/Fuse.Node.h: include/Uno.Object.h
include/Fuse.Node.h: include/Uno.Float3.h
include/Fuse.Node.h: include/Uno.Float4.h
include/Fuse.Node.h: include/Uno.Float4x4.h
include/Fuse.Node.h: include/Uno.Geometry.Box.h
include/Fuse.Node.h: include/Uno.Geometry.Ray.h
include/Fuse.Node.h: include/Uno.Rect.h

include/Fuse.Node.HitTestRecord.h: include/Uno.Object.h

include/Fuse.Node.NodeBits.h: include/Uno.Int.h

include/Fuse.Node.RootStage.h: include/Uno.Int.h

include/Fuse.NodeBounds.h: include/Uno.Geometry.Box.h
include/Fuse.NodeBounds.h: include/Uno.Object.h

include/Fuse.NodeEvent-2.h: include/Uno.Object.h

include/Fuse.NodeEventArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.NodeEventArgs.h: include/Uno.EventArgs.h

include/Fuse.NodeEventHandler.h: include/Uno.Delegate.h

include/Fuse.NodeEventMode.h: include/Uno.Int.h

include/Fuse.NodeListCache.h: include/Uno.h

include/Fuse.OrthographicFrustum.h: include/Fuse.IFrustum.h
include/Fuse.OrthographicFrustum.h: include/Uno.Float2.h
include/Fuse.OrthographicFrustum.h: include/Uno.Float4x4.h
include/Fuse.OrthographicFrustum.h: include/Uno.Object.h

include/Fuse.PerspectiveFrustum.h: include/Fuse.IFrustum.h
include/Fuse.PerspectiveFrustum.h: include/Uno.Object.h

include/Fuse.Physics.Body.h: include/Uno.Float3.h
include/Fuse.Physics.Body.h: include/Uno.Object.h

include/Fuse.Physics.Draggable.h: include/Fuse.Behavior.h
include/Fuse.Physics.Draggable.h: include/Fuse.Physics.IRule.h
include/Fuse.Physics.Draggable.h: include/Uno.Float3.h

include/Fuse.Physics.EnteredForceField.h: include/Fuse.Physics.ForceFieldEventTrigger.h

include/Fuse.Physics.ExitedForceField.h: include/Fuse.Physics.ForceFieldEventTrigger.h

include/Fuse.Physics.ForceField.h: include/Fuse.Behavior.h
include/Fuse.Physics.ForceField.h: include/Fuse.Physics.IRule.h

include/Fuse.Physics.ForceFieldEventArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Physics.ForceFieldEventArgs.h: include/Uno.EventArgs.h

include/Fuse.Physics.ForceFieldEventHandler.h: include/Uno.Delegate.h

include/Fuse.Physics.ForceFieldEventTrigger.h: include/Fuse.Physics.ForceFieldTrigger.h

include/Fuse.Physics.ForceFieldTrigger.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Physics.InForceFieldAnimation.h: include/Fuse.Physics.ForceFieldTrigger.h

include/Fuse.Physics.IRule.h: include/Uno.Object.h

include/Fuse.Physics.PointAttractor.h: include/Fuse.Physics.ForceField.h
include/Fuse.Physics.PointAttractor.h: include/Fuse.Physics.IRule.h
include/Fuse.Physics.PointAttractor.h: include/Uno.Float3.h

include/Fuse.Physics.Spring.h: include/Fuse.Behavior.h
include/Fuse.Physics.Spring.h: include/Fuse.Physics.IRule.h

include/Fuse.Physics.WhileDragging.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Physics.World.h: include/Uno.Object.h

include/Fuse.PlacedArgs.h: include/Uno.EventArgs.h
include/Fuse.PlacedArgs.h: include/Uno.Float2.h

include/Fuse.PlacedHandler.h: include/Uno.Delegate.h

include/Fuse.Preview.ISelection.h: include/Uno.Object.h

include/Fuse.Preview.SelectionManager.h: include/Uno.h

include/Fuse.Properties.h: include/Uno.Object.h

include/Fuse.PropertyHandle.h: include/Uno.Object.h

include/Fuse.PropertyState.h: include/Uno.Int.h

include/Fuse.Reactive.AsyncArray.h: include/Fuse.Reactive.IAsyncArray.h
include/Fuse.Reactive.AsyncArray.h: include/Uno.IDisposable.h
include/Fuse.Reactive.AsyncArray.h: include/Uno.Object.h

include/Fuse.Reactive.AsyncFunction.h: include/Fuse.Reactive.IAsyncFunction.h
include/Fuse.Reactive.AsyncFunction.h: include/Uno.IDisposable.h
include/Fuse.Reactive.AsyncFunction.h: include/Uno.Object.h

include/Fuse.Reactive.AsyncObject.h: include/Fuse.Reactive.IAsyncObject.h
include/Fuse.Reactive.AsyncObject.h: include/Uno.IDisposable.h
include/Fuse.Reactive.AsyncObject.h: include/Uno.Object.h

include/Fuse.Reactive.Binding.h: include/Fuse.Behavior.h

include/Fuse.Reactive.CallEventHandler.h: include/Fuse.Scripting.IEventSerializer.h
include/Fuse.Reactive.CallEventHandler.h: include/Uno.Object.h

include/Fuse.Reactive.CallFunction.h: include/Uno.Object.h

include/Fuse.Reactive.CallObjectEventHandler.h: include/Fuse.Scripting.IEventSerializer.h
include/Fuse.Reactive.CallObjectEventHandler.h: include/Uno.Object.h

include/Fuse.Reactive.CascadingPathSubscription.BindAttempt.h: include/Uno.Object.h

include/Fuse.Reactive.CascadingPathSubscription.h: include/Uno.IDisposable.h
include/Fuse.Reactive.CascadingPathSubscription.h: include/Uno.Object.h

include/Fuse.Reactive.Case.h: include/Uno.Object.h

include/Fuse.Reactive.Console.h: include/Uno.h

include/Fuse.Reactive.CrossThreadExceptionHandler.h: include/Uno.Object.h

include/Fuse.Reactive.DataBinding-1.h: include/Fuse.Reactive.Binding.h
include/Fuse.Reactive.DataBinding-1.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.DataBinding-1.h: include/Fuse.Scripting.INameListener.h

include/Fuse.Reactive.DataToResourceBinding-1.h: include/Fuse.Reactive.DataBinding-1.h
include/Fuse.Reactive.DataToResourceBinding-1.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.DataToResourceBinding-1.h: include/Fuse.Scripting.INameListener.h
include/Fuse.Reactive.DataToResourceBinding-1.h: include/Uno.Object.h

include/Fuse.Reactive.DebugLog.h: include/Uno.h

include/Fuse.Reactive.Dispatcher.Arg2Dispatch-2.h: include/Uno.Object.h

include/Fuse.Reactive.Dispatcher.ArgDispatch-1.h: include/Uno.Object.h

include/Fuse.Reactive.Dispatcher.h: include/Uno.Object.h

include/Fuse.Reactive.Dispatcher.UIThreadDispatcher.h: include/Fuse.Reactive.Dispatcher.h

include/Fuse.Reactive.Each.h: include/Fuse.Behavior.h
include/Fuse.Reactive.Each.h: include/Fuse.Reactive.IObserver.h

include/Fuse.Reactive.EnumArray.h: include/Uno.Object.h

include/Fuse.Reactive.EnumObservable.h: include/Uno.Object.h

include/Fuse.Reactive.EventBinding.h: include/Fuse.Reactive.Binding.h

include/Fuse.Reactive.FileSourceTell.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Base64.h: include/Fuse.Scripting.IModule.h
include/Fuse.Reactive.FuseJS.Base64.h: include/Fuse.Scripting.NativeModule.h

include/Fuse.Reactive.FuseJS.Camera.h: include/Uno.h

include/Fuse.Reactive.FuseJS.Email.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Environment.h: include/Fuse.Scripting.IModule.h
include/Fuse.Reactive.FuseJS.Environment.h: include/Fuse.Scripting.NativeModule.h

include/Fuse.Reactive.FuseJS.FileReaderImpl.h: include/Uno.h

include/Fuse.Reactive.FuseJS.FunctionClosure.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.GeoLocation.h: include/Fuse.Scripting.IModule.h
include/Fuse.Reactive.FuseJS.GeoLocation.h: include/Fuse.Scripting.NativeModule.h

include/Fuse.Reactive.FuseJS.Globals.h: include/Uno.h

include/Fuse.Reactive.FuseJS.Http.FuseJSHttpClient.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Http.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.InterApp.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Lifecycle.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Maps.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Phone.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.RaiseEvent.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Storage.h: include/Uno.h

include/Fuse.Reactive.FuseJS.Timer.Closure.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Timer.h: include/Fuse.Scripting.IModule.h
include/Fuse.Reactive.FuseJS.Timer.h: include/Fuse.Scripting.NativeModule.h

include/Fuse.Reactive.FuseJS.Timer.Time.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.UserEvents.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Vibration.h: include/Uno.h

include/Fuse.Reactive.IAsyncArray.h: include/Uno.IDisposable.h
include/Fuse.Reactive.IAsyncArray.h: include/Uno.Object.h

include/Fuse.Reactive.IAsyncFunction.h: include/Uno.IDisposable.h
include/Fuse.Reactive.IAsyncFunction.h: include/Uno.Object.h

include/Fuse.Reactive.IAsyncObject.h: include/Uno.IDisposable.h
include/Fuse.Reactive.IAsyncObject.h: include/Uno.Object.h

include/Fuse.Reactive.InternalPathSubscription.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.InternalPathSubscription.h: include/Uno.IDisposable.h
include/Fuse.Reactive.InternalPathSubscription.h: include/Uno.Object.h

include/Fuse.Reactive.IObservable.h: include/Uno.IDisposable.h
include/Fuse.Reactive.IObservable.h: include/Uno.Object.h

include/Fuse.Reactive.IObserver.h: include/Uno.Object.h

include/Fuse.Reactive.ISubscription.h: include/Uno.IDisposable.h
include/Fuse.Reactive.ISubscription.h: include/Uno.Object.h

include/Fuse.Reactive.JavaScript.h: include/Fuse.Behavior.h
include/Fuse.Reactive.JavaScript.h: include/Fuse.Scripting.IModule.h

include/Fuse.Reactive.JSFileSource.h: include/Uno.UX.FileSource.h

include/Fuse.Reactive.Marshal.Float2Enum.h: include/Uno.Float2.h
include/Fuse.Reactive.Marshal.Float2Enum.h: include/Uno.Object.h

include/Fuse.Reactive.Marshal.Float3Enum.h: include/Uno.Float3.h
include/Fuse.Reactive.Marshal.Float3Enum.h: include/Uno.Object.h

include/Fuse.Reactive.Marshal.h: include/Uno.h

include/Fuse.Reactive.Marshal.VectorEnum.h: include/Uno.Float4.h
include/Fuse.Reactive.Marshal.VectorEnum.h: include/Uno.Object.h

include/Fuse.Reactive.Match.h: include/Fuse.Behavior.h
include/Fuse.Reactive.Match.h: include/Fuse.Reactive.IObserver.h

include/Fuse.Reactive.Observable.h: include/Fuse.Reactive.IAsyncArray.h
include/Fuse.Reactive.Observable.h: include/Fuse.Reactive.IObservable.h
include/Fuse.Reactive.Observable.h: include/Uno.IDisposable.h
include/Fuse.Reactive.Observable.h: include/Uno.Object.h

include/Fuse.Reactive.ObservableSubscription.h: include/Fuse.Reactive.ISubscription.h
include/Fuse.Reactive.ObservableSubscription.h: include/Uno.IDisposable.h
include/Fuse.Reactive.ObservableSubscription.h: include/Uno.Object.h

include/Fuse.Reactive.ScriptEventArgs.h: include/Uno.EventArgs.h

include/Fuse.Reactive.Select.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Reactive.SubscriptionSetExclusive.h: include/Uno.Object.h

include/Fuse.Reactive.TellObject.h: include/Uno.Object.h

include/Fuse.Reactive.ThreadWorker.h: include/Fuse.Scripting.IDispatcher.h
include/Fuse.Reactive.ThreadWorker.h: include/Uno.IDisposable.h
include/Fuse.Reactive.ThreadWorker.h: include/Uno.Object.h
include/Fuse.Reactive.ThreadWorker.h: include/Uno.Threading.IDispatcher.h

include/Fuse.Reactive.WhileCount.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.WhileCount.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Reactive.WhileEmpty.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.WhileEmpty.h: include/Fuse.Reactive.WhileCount.h

include/Fuse.RenderTargetEntry.h: include/Uno.Int2.h
include/Fuse.RenderTargetEntry.h: include/Uno.Int4.h
include/Fuse.RenderTargetEntry.h: include/Uno.Object.h

include/Fuse.RequestBringIntoViewArgs.h: include/Uno.EventArgs.h

include/Fuse.RequestBringIntoViewHandler.h: include/Uno.Delegate.h

include/Fuse.RequiresRootedException.h: include/Uno.Exception.h

include/Fuse.Resources.DisposalManager.h: include/Uno.h

include/Fuse.Resources.DisposalPolicy.h: include/Uno.Object.h

include/Fuse.Resources.DisposalRequest.h: include/Uno.Int.h

include/Fuse.Resources.DoubleResourceConverter.h: include/Fuse.Resources.IResourceConverter-1.h
include/Fuse.Resources.DoubleResourceConverter.h: include/Fuse.Resources.NumericResourceConverter-1.h
include/Fuse.Resources.DoubleResourceConverter.h: include/Uno.Double.h

include/Fuse.Resources.ExpirationDisposalPolicy.h: include/Fuse.Resources.DisposalPolicy.h

include/Fuse.Resources.FileImageSource.h: include/Fuse.Resources.ImageSource.h

include/Fuse.Resources.FileImageSourceCache.h: include/Uno.h

include/Fuse.Resources.FileImageSourceImpl.h: include/Fuse.Resources.IMemoryResource.h
include/Fuse.Resources.FileImageSourceImpl.h: include/Fuse.Resources.LoadingImageSource.h

include/Fuse.Resources.FileResource.h: include/Uno.UX.FileSource.h

include/Fuse.Resources.FloatResourceConverter.h: include/Fuse.Resources.IResourceConverter-1.h
include/Fuse.Resources.FloatResourceConverter.h: include/Fuse.Resources.NumericResourceConverter-1.h
include/Fuse.Resources.FloatResourceConverter.h: include/Uno.Float.h

include/Fuse.Resources.GenericResourceConverter-1.h: include/Fuse.Resources.IResourceConverter-1.h
include/Fuse.Resources.GenericResourceConverter-1.h: include/Uno.Object.h

include/Fuse.Resources.HttpImageSource.h: include/Fuse.Resources.ImageSource.h

include/Fuse.Resources.HttpImageSourceCache.h: include/Uno.h

include/Fuse.Resources.HttpImageSourceImpl.h: include/Fuse.Resources.IMemoryResource.h
include/Fuse.Resources.HttpImageSourceImpl.h: include/Fuse.Resources.LoadingImageSource.h

include/Fuse.Resources.IDeferredDisposable.h: include/Uno.IDisposable.h
include/Fuse.Resources.IDeferredDisposable.h: include/Uno.Object.h

include/Fuse.Resources.ImageSource.h: include/Uno.Object.h
include/Fuse.Resources.ImageSource.h: include/Uno.Float2.h
include/Fuse.Resources.ImageSource.h: include/Uno.Int2.h

include/Fuse.Resources.ImageSourceErrorArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Resources.ImageSourceErrorArgs.h: include/Uno.EventArgs.h

include/Fuse.Resources.ImageSourceErrorHandler.h: include/Uno.Delegate.h

include/Fuse.Resources.ImageSourceState.h: include/Uno.Int.h

include/Fuse.Resources.IMemoryResource.h: include/Uno.Object.h

include/Fuse.Resources.IntResourceConverter.h: include/Fuse.Resources.IResourceConverter-1.h
include/Fuse.Resources.IntResourceConverter.h: include/Fuse.Resources.NumericResourceConverter-1.h
include/Fuse.Resources.IntResourceConverter.h: include/Uno.Int.h

include/Fuse.Resources.IResourceConverter-1.h: include/Uno.Object.h

include/Fuse.Resources.ISoftDisposable.h: include/Uno.Object.h

include/Fuse.Resources.LoadingImageSource.CleanupReason.h: include/Uno.Int.h

include/Fuse.Resources.LoadingImageSource.h: include/Fuse.Resources.ImageSource.h
include/Fuse.Resources.LoadingImageSource.h: include/Fuse.Resources.IMemoryResource.h
include/Fuse.Resources.LoadingImageSource.h: include/Uno.Int2.h

include/Fuse.Resources.MemoryPolicy.h: include/Uno.Object.h

include/Fuse.Resources.MultiDensityImageSource.h: include/Fuse.Resources.ImageSource.h

include/Fuse.Resources.NumericResourceConverter-1.h: include/Fuse.Resources.IResourceConverter-1.h
include/Fuse.Resources.NumericResourceConverter-1.h: include/Uno.Object.h

include/Fuse.Resources.PolicyDeferredDisposable.h: include/Fuse.Resources.IDeferredDisposable.h
include/Fuse.Resources.PolicyDeferredDisposable.h: include/Uno.IDisposable.h
include/Fuse.Resources.PolicyDeferredDisposable.h: include/Uno.Object.h

include/Fuse.Resources.ProxyImageSource.h: include/Uno.Object.h

include/Fuse.Resources.ResourceBinding-1.h: include/Fuse.Behavior.h

include/Fuse.Resources.ResourceBool.h: include/Fuse.Resources.ResourceSetter-1.h
include/Fuse.Resources.ResourceBool.h: include/Uno.Bool.h

include/Fuse.Resources.ResourceConverters.h: include/Uno.h

include/Fuse.Resources.ResourceFloat.h: include/Fuse.Resources.ResourceSetter-1.h
include/Fuse.Resources.ResourceFloat.h: include/Uno.Float.h

include/Fuse.Resources.ResourceFloat2.h: include/Fuse.Resources.ResourceSetter-1.h
include/Fuse.Resources.ResourceFloat2.h: include/Uno.Float2.h

include/Fuse.Resources.ResourceFloat3.h: include/Fuse.Resources.ResourceSetter-1.h
include/Fuse.Resources.ResourceFloat3.h: include/Uno.Float3.h

include/Fuse.Resources.ResourceFloat4.h: include/Fuse.Resources.ResourceSetter-1.h
include/Fuse.Resources.ResourceFloat4.h: include/Uno.Float4.h

include/Fuse.Resources.ResourceObject.h: include/Fuse.Resources.ResourceSetter-1.h
include/Fuse.Resources.ResourceObject.h: include/Uno.Object.h

include/Fuse.Resources.ResourceRegistry.h: include/Uno.h

include/Fuse.Resources.ResourceSetter-1.h: include/Fuse.Behavior.h

include/Fuse.Resources.ResourceString.h: include/Fuse.Resources.ResourceSetter-1.h
include/Fuse.Resources.ResourceString.h: include/Uno.String.h

include/Fuse.Resources.RetainDisposalPolicy.h: include/Fuse.Resources.DisposalPolicy.h

include/Fuse.Resources.TextureImageSource.h: include/Fuse.Resources.ImageSource.h

include/Fuse.RootViewport.h: include/Fuse.IViewport.h
include/Fuse.RootViewport.h: include/Fuse.Node.h
include/Fuse.RootViewport.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Rotation.h: include/Fuse.Transform.h
include/Fuse.Rotation.h: include/Uno.Float3.h

include/Fuse.Scaling.h: include/Fuse.Transform.h
include/Fuse.Scaling.h: include/Uno.Float3.h

include/Fuse.ScalingModes.h: include/Uno.h

include/Fuse.ScalingModes.IdentityMode.h: include/Fuse.IScalingMode.h
include/Fuse.ScalingModes.IdentityMode.h: include/Fuse.ITransformMode.h
include/Fuse.ScalingModes.IdentityMode.h: include/Uno.Object.h

include/Fuse.Scripting.Array.h: include/Uno.Object.h

include/Fuse.Scripting.BoolChangedArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Scripting.BoolChangedArgs.h: include/Uno.Bool.h
include/Fuse.Scripting.BoolChangedArgs.h: include/Uno.UX.ValueChangedArgs-1.h

include/Fuse.Scripting.Callback.h: include/Uno.Delegate.h

include/Fuse.Scripting.Context.h: include/Uno.IDisposable.h
include/Fuse.Scripting.Context.h: include/Uno.Object.h

include/Fuse.Scripting.DoubleChangedArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Scripting.DoubleChangedArgs.h: include/Uno.Double.h
include/Fuse.Scripting.DoubleChangedArgs.h: include/Uno.UX.ValueChangedArgs-1.h

include/Fuse.Scripting.Duktape.callback.h: include/Uno.Delegate.h

include/Fuse.Scripting.Duktape.CallbackClosure.h: include/Uno.Object.h

include/Fuse.Scripting.Duktape.CompileFlag.h: include/Uno.UInt.h

include/Fuse.Scripting.Duktape.Context.h: include/Fuse.Scripting.Context.h
include/Fuse.Scripting.Duktape.Context.h: include/Uno.IDisposable.h

include/Fuse.Scripting.Duktape.duktape.h: include/Uno.h

include/Fuse.Scripting.Duktape.EnumFlags.h: include/Uno.Int.h

include/Fuse.Scripting.Duktape.JSArray.h: include/Fuse.Scripting.Array.h

include/Fuse.Scripting.Duktape.JSFunction.h: include/Fuse.Scripting.Function.h

include/Fuse.Scripting.Duktape.JSObject.h: include/Fuse.Scripting.Object.h

include/Fuse.Scripting.Duktape.JSONObject.h: include/Uno.h

include/Fuse.Scripting.Error.h: include/Uno.Exception.h

include/Fuse.Scripting.FactoryClosure-1.h: include/Uno.Object.h

include/Fuse.Scripting.FileModule.h: include/Fuse.Scripting.IModule.h
include/Fuse.Scripting.FileModule.h: include/Uno.Object.h

include/Fuse.Scripting.Function.h: include/Uno.Object.h

include/Fuse.Scripting.FutureFactory-1.h: include/Uno.Delegate.h

include/Fuse.Scripting.IDispatcher.h: include/Uno.Object.h
include/Fuse.Scripting.IDispatcher.h: include/Uno.Threading.IDispatcher.h

include/Fuse.Scripting.IEventSerializer.h: include/Uno.Object.h

include/Fuse.Scripting.IModule.h: include/Uno.Object.h

include/Fuse.Scripting.INameListener.h: include/Uno.Object.h

include/Fuse.Scripting.INameScope.h: include/Uno.Object.h

include/Fuse.Scripting.IScriptEvent.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.ActionClosure.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.ActionClosure-1.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.ActionClosure-2.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.FuncClosure-1.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.FuncClosure-2.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.FuncClosure-3.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.h: include/Uno.h

include/Fuse.Scripting.JSCallback.NumberConverter.h: include/Uno.h

include/Fuse.Scripting.NameRegistry.h: include/Uno.h

include/Fuse.Scripting.NativeCallback.h: include/Uno.Delegate.h

include/Fuse.Scripting.NativeEvent.EventClosure.h: include/Uno.Object.h

include/Fuse.Scripting.NativeEvent.h: include/Fuse.Scripting.Function.h
include/Fuse.Scripting.NativeEvent.h: include/Fuse.Scripting.NativeProperty-2.h

include/Fuse.Scripting.NativeFunction.h: include/Fuse.Scripting.NativeMember.h

include/Fuse.Scripting.NativeFunction.NativeFunctionClosure.h: include/Uno.Object.h

include/Fuse.Scripting.NativeMember.h: include/Uno.Object.h

include/Fuse.Scripting.NativeModule.h: include/Fuse.Scripting.IModule.h
include/Fuse.Scripting.NativeModule.h: include/Uno.Object.h

include/Fuse.Scripting.NativePromise-2.ContextClosure.h: include/Uno.Object.h

include/Fuse.Scripting.NativePromise-2.h: include/Fuse.Scripting.NativeMember.h

include/Fuse.Scripting.NativePromise-2.PromiseClosure.h: include/Uno.Object.h

include/Fuse.Scripting.NativeProperty-2.h: include/Fuse.Scripting.NativeMember.h

include/Fuse.Scripting.NodeCallback.h: include/Uno.Delegate.h

include/Fuse.Scripting.Object.h: include/Uno.Object.h

include/Fuse.Scripting.ResultConverter-2.h: include/Uno.Delegate.h

include/Fuse.Scripting.ResultFactory-1.h: include/Uno.Delegate.h

include/Fuse.Scripting.ScriptException.h: include/Uno.Exception.h

include/Fuse.Scripting.StringChangedArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Scripting.StringChangedArgs.h: include/Uno.String.h
include/Fuse.Scripting.StringChangedArgs.h: include/Uno.UX.ValueChangedArgs-1.h

include/Fuse.Scripting.TaskPriority.h: include/Uno.Int.h

include/Fuse.Scripting.V8.Array.h: include/Fuse.Scripting.Array.h
include/Fuse.Scripting.V8.Array.h: include/Fuse.Scripting.V8.Internal.Value.h

include/Fuse.Scripting.V8.Context.h: include/Fuse.Scripting.Context.h
include/Fuse.Scripting.V8.Context.h: include/Fuse.Scripting.V8.Internal.Value.h
include/Fuse.Scripting.V8.Context.h: include/Uno.IDisposable.h

include/Fuse.Scripting.V8.Debugger.Connected.h: include/Fuse.Scripting.V8.Debugger.State.h
include/Fuse.Scripting.V8.Debugger.Connected.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Debugger.ConnectedMessageHandler.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Debugger.Disconnected.h: include/Fuse.Scripting.V8.Debugger.State.h
include/Fuse.Scripting.V8.Debugger.Disconnected.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Debugger.h: include/Fuse.Scripting.V8.Internal.Debug.h
include/Fuse.Scripting.V8.Debugger.h: include/Uno.IDisposable.h
include/Fuse.Scripting.V8.Debugger.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Debugger.State.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Function.h: include/Fuse.Scripting.Function.h
include/Fuse.Scripting.V8.Function.h: include/Fuse.Scripting.V8.Internal.Value.h

include/Fuse.Scripting.V8.Internal.Array.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.Context.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.Debug.h: include/Uno.h

include/Fuse.Scripting.V8.Internal.Debug.Message.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.Function.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.Isolate.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.MaybeArray.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.MaybeBool.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.MaybeDouble.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.MaybeInt.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.MaybeLong.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.MaybeObject.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.MaybeString.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.MaybeUint.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.MaybeValue.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.Message.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.MessageHandler.h: include/Uno.Delegate.h

include/Fuse.Scripting.V8.Internal.Object.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.PersistentArray.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.PersistentContext.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.PersistentFunction.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.PersistentObject.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.Platform.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.Script.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.String.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.TryCatch.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Internal.V8.h: include/Uno.h

include/Fuse.Scripting.V8.Internal.Value.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Marshaller.h: include/Uno.h

include/Fuse.Scripting.V8.Object.h: include/Fuse.Scripting.Object.h
include/Fuse.Scripting.V8.Object.h: include/Fuse.Scripting.V8.Internal.Value.h

include/Fuse.Scripting.Value.h: include/Uno.h

include/Fuse.Scripting.ValueConverter-2.h: include/Uno.Delegate.h

include/Fuse.Shapes.Circle.h: include/Fuse.Animations.IResize.h
include/Fuse.Shapes.Circle.h: include/Fuse.IActualPlacement.h
include/Fuse.Shapes.Circle.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Shapes.Circle.h: include/Fuse.Shapes.Shape.h
include/Fuse.Shapes.Circle.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Shapes.Circle.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Shapes.Circle.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Shapes.Ellipse.h: include/Fuse.Animations.IResize.h
include/Fuse.Shapes.Ellipse.h: include/Fuse.IActualPlacement.h
include/Fuse.Shapes.Ellipse.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Shapes.Ellipse.h: include/Fuse.Shapes.PathShape.h
include/Fuse.Shapes.Ellipse.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Shapes.Ellipse.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Shapes.Ellipse.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Shapes.Ellipse.h: include/Uno.Float2.h

include/Fuse.Shapes.FillRule.h: include/Uno.Int.h

include/Fuse.Shapes.FitMode.h: include/Uno.Int.h

include/Fuse.Shapes.GeometryCache.h: include/Uno.Object.h

include/Fuse.Shapes.GeometryCacheEntry.h: include/Uno.Object.h

include/Fuse.Shapes.Path.h: include/Fuse.Animations.IResize.h
include/Fuse.Shapes.Path.h: include/Fuse.IActualPlacement.h
include/Fuse.Shapes.Path.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Shapes.Path.h: include/Fuse.Shapes.PathShape.h
include/Fuse.Shapes.Path.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Shapes.Path.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Shapes.Path.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Shapes.Path.h: include/Uno.Float2.h

include/Fuse.Shapes.PathScaleMode.h: include/Uno.Int.h

include/Fuse.Shapes.PathShape.h: include/Fuse.Animations.IResize.h
include/Fuse.Shapes.PathShape.h: include/Fuse.Elements.Element.h
include/Fuse.Shapes.PathShape.h: include/Fuse.IActualPlacement.h
include/Fuse.Shapes.PathShape.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Shapes.PathShape.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Shapes.PathShape.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Shapes.PathShape.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Shapes.Rectangle.h: include/Fuse.Animations.IResize.h
include/Fuse.Shapes.Rectangle.h: include/Fuse.IActualPlacement.h
include/Fuse.Shapes.Rectangle.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Shapes.Rectangle.h: include/Fuse.Shapes.Shape.h
include/Fuse.Shapes.Rectangle.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Shapes.Rectangle.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Shapes.Rectangle.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Shapes.RegularPolygon.h: include/Fuse.Animations.IResize.h
include/Fuse.Shapes.RegularPolygon.h: include/Fuse.IActualPlacement.h
include/Fuse.Shapes.RegularPolygon.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Shapes.RegularPolygon.h: include/Fuse.Shapes.PathShape.h
include/Fuse.Shapes.RegularPolygon.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Shapes.RegularPolygon.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Shapes.RegularPolygon.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Shapes.Shape.h: include/Fuse.Animations.IResize.h
include/Fuse.Shapes.Shape.h: include/Fuse.Elements.Element.h
include/Fuse.Shapes.Shape.h: include/Fuse.IActualPlacement.h
include/Fuse.Shapes.Shape.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Shapes.Shape.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Shapes.Shape.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Shapes.Shape.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Shapes.Star.h: include/Fuse.Animations.IResize.h
include/Fuse.Shapes.Star.h: include/Fuse.IActualPlacement.h
include/Fuse.Shapes.Star.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Shapes.Star.h: include/Fuse.Shapes.PathShape.h
include/Fuse.Shapes.Star.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Shapes.Star.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Shapes.Star.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Shear.h: include/Fuse.Transform.h
include/Fuse.Shear.h: include/Uno.Float2.h

include/Fuse.SizeFlags.h: include/Uno.Int.h

include/Fuse.Stage.h: include/Uno.Object.h

include/Fuse.Storage.ApplicationDir.h: include/Uno.h

include/Fuse.Style.h: include/Uno.Object.h
include/Fuse.Style.h: include/Uno.UX.ITemplate.h

include/Fuse.StyleProperty.h: include/Uno.Object.h

include/Fuse.StyleProperty-2.h: include/Fuse.StyleProperty.h

include/Fuse.StylePropertyWithUnit-3.h: include/Fuse.Node.h
include/Fuse.StylePropertyWithUnit-3.h: include/Fuse.StyleProperty-2.h
include/Fuse.StylePropertyWithUnit-3.h: include/Uno.Object.h

include/Fuse.Theme.h: include/Fuse.Style.h
include/Fuse.Theme.h: include/Uno.UX.ITemplate.h

include/Fuse.Themes.GraphicsStyle.Fuse_Controls_ScrollView_bool_KeepFoc-4668682a.h: include/Uno.Bool.h
include/Fuse.Themes.GraphicsStyle.Fuse_Controls_ScrollView_bool_KeepFoc-4668682a.h: include/Uno.UX.Property-1.h

include/Fuse.Themes.GraphicsStyle.Fuse_Controls_ScrollView_bool_UserScr-9131549d.h: include/Uno.Bool.h
include/Fuse.Themes.GraphicsStyle.Fuse_Controls_ScrollView_bool_UserScr-9131549d.h: include/Uno.UX.Property-1.h

include/Fuse.Themes.GraphicsStyle.Fuse_Gestures_Scroller_bool_UserScrol-28e29c0f.h: include/Uno.Bool.h
include/Fuse.Themes.GraphicsStyle.Fuse_Gestures_Scroller_bool_UserScrol-28e29c0f.h: include/Uno.UX.Property-1.h

include/Fuse.Themes.GraphicsStyle.Fuse_Triggers_WhileBool_bool_Value_Property.h: include/Uno.Bool.h
include/Fuse.Themes.GraphicsStyle.Fuse_Triggers_WhileBool_bool_Value_Property.h: include/Uno.UX.Property-1.h

include/Fuse.Themes.GraphicsStyle.h: include/Fuse.Style.h
include/Fuse.Themes.GraphicsStyle.h: include/Uno.UX.ITemplate.h

include/Fuse.Themes.GraphicsStyle.Template.h: include/Fuse.Controls.TextControl.h
include/Fuse.Themes.GraphicsStyle.Template.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template.h: include/Uno.UX.Template-1.h

include/Fuse.Themes.GraphicsStyle.Template1.h: include/Fuse.Controls.Rectangle.h
include/Fuse.Themes.GraphicsStyle.Template1.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template1.h: include/Uno.UX.Template-1.h

include/Fuse.Themes.GraphicsStyle.Template2.h: include/Fuse.Controls.Circle.h
include/Fuse.Themes.GraphicsStyle.Template2.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template2.h: include/Uno.UX.Template-1.h

include/Fuse.Themes.GraphicsStyle.Template3.h: include/Fuse.Controls.Star.h
include/Fuse.Themes.GraphicsStyle.Template3.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template3.h: include/Uno.UX.Template-1.h

include/Fuse.Themes.GraphicsStyle.Template4.h: include/Fuse.Controls.Ellipse.h
include/Fuse.Themes.GraphicsStyle.Template4.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template4.h: include/Uno.UX.Template-1.h

include/Fuse.Themes.GraphicsStyle.Template5.h: include/Fuse.Controls.RegularPolygon.h
include/Fuse.Themes.GraphicsStyle.Template5.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template5.h: include/Uno.UX.Template-1.h

include/Fuse.Themes.GraphicsStyle.Template6.h: include/Fuse.Controls.Path.h
include/Fuse.Themes.GraphicsStyle.Template6.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template6.h: include/Uno.UX.Template-1.h

include/Fuse.Themes.GraphicsStyle.Template7.h: include/Fuse.Controls.Image.h
include/Fuse.Themes.GraphicsStyle.Template7.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template7.h: include/Uno.UX.Template-1.h

include/Fuse.Themes.GraphicsStyle.Template8.h: include/Fuse.Controls.Video.h
include/Fuse.Themes.GraphicsStyle.Template8.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template8.h: include/Uno.UX.Template-1.h

include/Fuse.Themes.GraphicsStyle.Template9.h: include/Fuse.Controls.ScrollView.h
include/Fuse.Themes.GraphicsStyle.Template9.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template9.h: include/Uno.UX.Template-1.h

include/Fuse.Time.h: include/Uno.h

include/Fuse.Timer.h: include/Uno.Object.h

include/Fuse.Transform.h: include/Uno.Object.h

include/Fuse.TransformModeFlags.h: include/Uno.Int.h

include/Fuse.Translation.h: include/Fuse.Transform.h

include/Fuse.TranslationModes.h: include/Uno.h

include/Fuse.TranslationModes.LocalMode.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes.LocalMode.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes.LocalMode.h: include/Uno.Object.h

include/Fuse.TranslationModes.ParentSizeMode.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes.ParentSizeMode.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes.ParentSizeMode.h: include/Uno.Object.h

include/Fuse.TranslationModes.SizeMode.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes.SizeMode.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes.SizeMode.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.BringIntoView.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.BringToFront.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Call.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Callback.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Collapse.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.DebugAction.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.DebugFrame.h: include/Fuse.Triggers.Actions.ITaggedDebugProperty.h
include/Fuse.Triggers.Actions.DebugFrame.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.DebugProperty-1.h: include/Fuse.Triggers.Actions.ITaggedDebugProperty.h
include/Fuse.Triggers.Actions.DebugProperty-1.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.DebugTime.h: include/Fuse.Triggers.Actions.ITaggedDebugProperty.h
include/Fuse.Triggers.Actions.DebugTime.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.EvaluateJS.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.GiveFocus.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Hide.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.ICollapse.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.IHide.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.IShow.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.ITaggedDebugProperty.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.JSEventArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Triggers.Actions.JSEventArgs.h: include/Uno.EventArgs.h

include/Fuse.Triggers.Actions.JSEventHandler.h: include/Uno.Delegate.h

include/Fuse.Triggers.Actions.LaunchEmail.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.LaunchMaps.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.LaunchUri.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.LoadHtml.h: include/Fuse.Triggers.Actions.WebViewNavAction.h

include/Fuse.Triggers.Actions.LoadUrl.h: include/Fuse.Triggers.Actions.WebViewNavAction.h

include/Fuse.Triggers.Actions.Pause.h: include/Fuse.Triggers.Actions.PlaybackAction.h

include/Fuse.Triggers.Actions.PlaybackAction.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.PlayTo.h: include/Fuse.Triggers.Actions.PlaybackAction.h

include/Fuse.Triggers.Actions.Pulse.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.RaiseUserEvent.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.ReleaseFocus.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Reload.h: include/Fuse.Triggers.Actions.WebViewNavAction.h

include/Fuse.Triggers.Actions.Resume.h: include/Fuse.Triggers.Actions.PlaybackAction.h

include/Fuse.Triggers.Actions.SendToBack.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Set-1.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Show.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Stop.h: include/Fuse.Triggers.Actions.PlaybackAction.h

include/Fuse.Triggers.Actions.StopLoading.h: include/Fuse.Triggers.Actions.WebViewNavAction.h

include/Fuse.Triggers.Actions.TransitionLayout.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.TransitionState.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.TransitionStateType.h: include/Uno.Int.h

include/Fuse.Triggers.Actions.TriggerAction.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.TriggerDirection.h: include/Uno.Int.h

include/Fuse.Triggers.Actions.UserEventArg.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.WebViewNavAction.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.AddingAnimation.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.Android.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.ContainingText.h: include/Fuse.Triggers.WhileContainsText.h

include/Fuse.Triggers.IAddRemove-1.h: include/Uno.Object.h

include/Fuse.Triggers.IMediaPlayback.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Triggers.IMediaPlayback.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Triggers.IMediaPlayback.h: include/Uno.Object.h

include/Fuse.Triggers.iOS.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.IPlayback.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Triggers.IPlayback.h: include/Uno.Object.h

include/Fuse.Triggers.IProgress.h: include/Uno.Object.h

include/Fuse.Triggers.IValue-1.h: include/Uno.Object.h

include/Fuse.Triggers.IVisibility.h: include/Uno.Object.h

include/Fuse.Triggers.LayoutAnimation.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.LayoutAnimation.h: include/Uno.Float2.h
include/Fuse.Triggers.LayoutAnimation.h: include/Uno.Float4x4.h

include/Fuse.Triggers.LayoutTransition.h: include/Uno.h

include/Fuse.Triggers.LayoutTransition.PositionChangeMode.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.LayoutTransition.PositionChangeMode.h: include/Fuse.ITranslationMode.h
include/Fuse.Triggers.LayoutTransition.PositionChangeMode.h: include/Uno.Object.h

include/Fuse.Triggers.LayoutTransition.ResizeChangeMode.h: include/Fuse.Animations.IResizeMode.h
include/Fuse.Triggers.LayoutTransition.ResizeChangeMode.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.LayoutTransition.ResizeChangeMode.h: include/Uno.Object.h

include/Fuse.Triggers.LayoutTransition.ScaleChangeMode.h: include/Fuse.IScalingMode.h
include/Fuse.Triggers.LayoutTransition.ScaleChangeMode.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.LayoutTransition.ScaleChangeMode.h: include/Uno.Object.h

include/Fuse.Triggers.LayoutTransition.WorldPositionChangeMode.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.LayoutTransition.WorldPositionChangeMode.h: include/Fuse.ITranslationMode.h
include/Fuse.Triggers.LayoutTransition.WorldPositionChangeMode.h: include/Uno.Object.h

include/Fuse.Triggers.LayoutTransitioned.h: include/Fuse.NodeEvent-2.h
include/Fuse.Triggers.LayoutTransitioned.h: include/Fuse.Triggers.LayoutTransitionedArgs.h
include/Fuse.Triggers.LayoutTransitioned.h: include/Fuse.Triggers.LayoutTransitionedHandler.h

include/Fuse.Triggers.LayoutTransitionedArgs.h: include/Fuse.NodeEventArgs.h
include/Fuse.Triggers.LayoutTransitionedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Triggers.LayoutTransitionedHandler.h: include/Uno.Delegate.h

include/Fuse.Triggers.OnBackButton.h: include/Fuse.Triggers.OnKeyPress.h

include/Fuse.Triggers.OnKeyPress.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.OnUserEvent.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.OnUserEventFilter.h: include/Uno.Int.h

include/Fuse.Triggers.PageBeginLoading.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.PageLoaded.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.ProgressAnimation.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.PullToReload.h: include/Fuse.Triggers.ScrollingAnimation.h

include/Fuse.Triggers.RemovingAnimation.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.ScrollingAnimation.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.ScrollingAnimationRange.h: include/Uno.Int.h

include/Fuse.Triggers.State.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.StateGroup.h: include/Fuse.Behavior.h
include/Fuse.Triggers.StateGroup.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Triggers.StateTransition.h: include/Uno.Int.h

include/Fuse.Triggers.TextInputActionTriggered.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.Timeline.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.Timeline.State.h: include/Uno.Int.h

include/Fuse.Triggers.Trigger.h: include/Fuse.Behavior.h

include/Fuse.Triggers.TriggerBypassMode.h: include/Uno.Int.h

include/Fuse.Triggers.WhileBool.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Triggers.WhileValue-1.h
include/Fuse.Triggers.WhileBool.h: include/Uno.Bool.h

include/Fuse.Triggers.WhileCompleted.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileContainsText.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileDisabled.h: include/Fuse.Triggers.WhileEnabledDisabledTrigger.h

include/Fuse.Triggers.WhileEnabled.h: include/Fuse.Triggers.WhileEnabledDisabledTrigger.h

include/Fuse.Triggers.WhileEnabledDisabledTrigger.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileFailed.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileFalse.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Triggers.WhileBool.h
include/Fuse.Triggers.WhileFalse.h: include/Uno.Bool.h

include/Fuse.Triggers.WhileFloat.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Triggers.WhileFloat.h: include/Fuse.Triggers.WhileValue-1.h
include/Fuse.Triggers.WhileFloat.h: include/Uno.Float.h
include/Fuse.Triggers.WhileFloat.h: include/Uno.Float2.h

include/Fuse.Triggers.WhileFloat.Range.h: include/Uno.Int.h

include/Fuse.Triggers.WhileFocused.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileFocusWithin.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileInteracting.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileKeyboardVisible.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode.h: include/Fuse.ITranslationMode.h
include/Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode.h: include/Uno.Object.h

include/Fuse.Triggers.WhileLoading.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileNotFocused.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhilePageLoading.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhilePaused.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhilePlaying.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileScrollable.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileTrigger.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.WhileTrue.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Triggers.WhileBool.h
include/Fuse.Triggers.WhileTrue.h: include/Uno.Bool.h

include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileValue-1.h: include/Uno.Object.h

include/Fuse.Triggers.WhileVisible.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileWindowAspect.h: include/Fuse.Triggers.WindowSizeTrigger.h

include/Fuse.Triggers.WhileWindowLandscape.h: include/Fuse.Triggers.WhileWindowAspect.h

include/Fuse.Triggers.WhileWindowPortrait.h: include/Fuse.Triggers.WhileWindowAspect.h

include/Fuse.Triggers.WhileWindowSize.h: include/Fuse.Triggers.WindowSizeTrigger.h
include/Fuse.Triggers.WhileWindowSize.h: include/Uno.Float2.h

include/Fuse.Triggers.WindowSizeTrigger.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.UnhandledExceptionArgs.h: include/Uno.EventArgs.h

include/Fuse.UnhandledExceptionHandler.h: include/Uno.Delegate.h

include/Fuse.UpdateDispatcher.h: include/Uno.Object.h
include/Fuse.UpdateDispatcher.h: include/Uno.Threading.IDispatcher.h

include/Fuse.UpdateListener.h: include/Uno.Object.h

include/Fuse.UpdateManager.h: include/Uno.h

include/Fuse.UpdateStage.h: include/Uno.Int.h

include/Fuse.UserEvent.h: include/Fuse.Behavior.h

include/Fuse.UserEventArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.UserEventArgs.h: include/Uno.EventArgs.h

include/Fuse.UserEventDispatch.h: include/Uno.Object.h

include/Fuse.UserEventHandler.h: include/Uno.Delegate.h

include/Fuse.Vibration.Vibrate.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Vibration.Vibration.h: include/Uno.h

include/Fuse.Video.CancellationTokenSource.h: include/Uno.Object.h

include/Fuse.Video.Graphics.Android.AndroidAudioHelpers.h: include/Uno.h

include/Fuse.Video.Graphics.Android.AndroidVideoLoader.h: include/Fuse.Video.VideoLoader.h

include/Fuse.Video.Graphics.Android.BufferingArgs.h: include/Uno.EventArgs.h

include/Fuse.Video.Graphics.Android.BufferingEvent.h: include/Android.android.media.MediaPlayerDLROnBufferingUpdateListener.h
include/Fuse.Video.Graphics.Android.BufferingEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Video.Graphics.Android.BufferingEvent.h: include/Android.java.lang.Object.h
include/Fuse.Video.Graphics.Android.BufferingEvent.h: include/Uno.IDisposable.h

include/Fuse.Video.Graphics.Android.CompletionEvent.h: include/Android.android.media.MediaPlayerDLROnCompletionListener.h
include/Fuse.Video.Graphics.Android.CompletionEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Video.Graphics.Android.CompletionEvent.h: include/Android.java.lang.Object.h
include/Fuse.Video.Graphics.Android.CompletionEvent.h: include/Uno.IDisposable.h

include/Fuse.Video.Graphics.Android.ErrorEvent.h: include/Android.android.media.MediaPlayerDLROnErrorListener.h
include/Fuse.Video.Graphics.Android.ErrorEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Video.Graphics.Android.ErrorEvent.h: include/Android.java.lang.Object.h
include/Fuse.Video.Graphics.Android.ErrorEvent.h: include/Uno.IDisposable.h

include/Fuse.Video.Graphics.Android.ErrorEventArgs.h: include/Uno.EventArgs.h

include/Fuse.Video.Graphics.Android.ErrorEventHandler.h: include/Uno.Delegate.h

include/Fuse.Video.Graphics.Android.FrameAvailableEvent.h: include/Android.android.graphics.SurfaceTextureDLROnFrameAvailableListener.h
include/Fuse.Video.Graphics.Android.FrameAvailableEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Video.Graphics.Android.FrameAvailableEvent.h: include/Android.java.lang.Object.h
include/Fuse.Video.Graphics.Android.FrameAvailableEvent.h: include/Uno.IDisposable.h

include/Fuse.Video.Graphics.Android.PreparedEvent.h: include/Android.android.media.MediaPlayerDLROnPreparedListener.h
include/Fuse.Video.Graphics.Android.PreparedEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Video.Graphics.Android.PreparedEvent.h: include/Android.java.lang.Object.h
include/Fuse.Video.Graphics.Android.PreparedEvent.h: include/Uno.IDisposable.h

include/Fuse.Video.Graphics.Android.SeekCompleteEvent.h: include/Android.android.media.MediaPlayerDLROnSeekCompleteListener.h
include/Fuse.Video.Graphics.Android.SeekCompleteEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Video.Graphics.Android.SeekCompleteEvent.h: include/Android.java.lang.Object.h
include/Fuse.Video.Graphics.Android.SeekCompleteEvent.h: include/Uno.IDisposable.h

include/Fuse.Video.Graphics.Android.VideoPlayer.h: include/Fuse.Video.IVideoPlayer.h
include/Fuse.Video.Graphics.Android.VideoPlayer.h: include/Uno.IDisposable.h
include/Fuse.Video.Graphics.Android.VideoPlayer.h: include/Uno.Object.h

include/Fuse.Video.Graphics.Android.VideoSizeChanged.h: include/Android.android.media.MediaPlayerDLROnVideoSizeChangedListener.h
include/Fuse.Video.Graphics.Android.VideoSizeChanged.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Video.Graphics.Android.VideoSizeChanged.h: include/Android.java.lang.Object.h
include/Fuse.Video.Graphics.Android.VideoSizeChanged.h: include/Uno.IDisposable.h

include/Fuse.Video.Graphics.Android.VideoSizeChangedArgs.h: include/Uno.EventArgs.h
include/Fuse.Video.Graphics.Android.VideoSizeChangedArgs.h: include/Uno.Int2.h

include/Fuse.Video.Graphics.Android.VideoSurface.h: include/Uno.IDisposable.h
include/Fuse.Video.Graphics.Android.VideoSurface.h: include/Uno.Object.h

include/Fuse.Video.IVideoPlayer.h: include/Uno.IDisposable.h
include/Fuse.Video.IVideoPlayer.h: include/Uno.Object.h
include/Fuse.Video.IVideoPlayer.h: include/Uno.Int2.h

include/Fuse.Video.LoadedHandler.h: include/Uno.Delegate.h

include/Fuse.Video.LoadFailed.h: include/Fuse.Video.LoadResult.h

include/Fuse.Video.LoadResult.h: include/Uno.Object.h

include/Fuse.Video.LoadSucceded.h: include/Fuse.Video.LoadResult.h

include/Fuse.Video.Scale9Rectangle.h: include/Uno.Object.h
include/Fuse.Video.Scale9Rectangle.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Video.VideoContainer.h: include/Fuse.Triggers.IMediaPlayback.h
include/Fuse.Video.VideoContainer.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Video.VideoContainer.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Video.VideoContainer.h: include/Uno.Object.h

include/Fuse.Video.VideoDiskCache.h: include/Uno.h

include/Fuse.Video.VideoDrawElement.h: include/Uno.Float4x4.h
include/Fuse.Video.VideoDrawElement.h: include/Uno.Object.h
include/Fuse.Video.VideoDrawElement.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Video.VideoLoader.h: include/Uno.Object.h

include/Fuse.Video.VideoVisual.h: include/Fuse.Controls.Graphics.ControlVisual-1.h
include/Fuse.Video.VideoVisual.h: include/Fuse.Controls.Video.h
include/Fuse.Video.VideoVisual.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Video.VideoVisual.h: include/Uno.Float2.h
include/Fuse.Video.VideoVisual.h: include/Uno.Float4.h
include/Fuse.Video.VideoVisual.h: include/Uno.Int2.h

include/JNIHelper.h: include/Uno/Uno.h

include/OpenGL.GL.h: include/Uno.h

include/OpenGL.GLBlendEquation.h: include/Uno.Int.h

include/OpenGL.GLBlendingFactor.h: include/Uno.Int.h

include/OpenGL.GLBufferHandle.h: include/Uno.Object.h

include/OpenGL.GLBufferTarget.h: include/Uno.Int.h

include/OpenGL.GLBufferUsage.h: include/Uno.Int.h

include/OpenGL.GLClearBufferMask.h: include/Uno.Int.h

include/OpenGL.GLCullFaceMode.h: include/Uno.Int.h

include/OpenGL.GLDataType.h: include/Uno.Int.h

include/OpenGL.GLDepthFunction.h: include/Uno.Int.h

include/OpenGL.GLEnableCap.h: include/Uno.Int.h

include/OpenGL.GLError.h: include/Uno.Int.h

include/OpenGL.GLFramebufferAttachment.h: include/Uno.Int.h

include/OpenGL.GLFramebufferHandle.h: include/Uno.Object.h

include/OpenGL.GLFramebufferStatus.h: include/Uno.Int.h

include/OpenGL.GLFramebufferTarget.h: include/Uno.Int.h

include/OpenGL.GLFrontFaceDirection.h: include/Uno.Int.h

include/OpenGL.GLIndexType.h: include/Uno.Int.h

include/OpenGL.GLInteger4Name.h: include/Uno.Int.h

include/OpenGL.GLIntegerName.h: include/Uno.Int.h

include/OpenGL.GLPixelFormat.h: include/Uno.Int.h

include/OpenGL.GLPixelType.h: include/Uno.Int.h

include/OpenGL.GLPrimitiveType.h: include/Uno.Int.h

include/OpenGL.GLProgramHandle.h: include/Uno.Object.h

include/OpenGL.GLProgramParameter.h: include/Uno.Int.h

include/OpenGL.GLRenderbufferHandle.h: include/Uno.Object.h

include/OpenGL.GLRenderbufferStorage.h: include/Uno.Int.h

include/OpenGL.GLRenderbufferTarget.h: include/Uno.Int.h

include/OpenGL.GLShaderHandle.h: include/Uno.Object.h

include/OpenGL.GLShaderParameter.h: include/Uno.Int.h

include/OpenGL.GLShaderType.h: include/Uno.Int.h

include/OpenGL.GLTextureHandle.h: include/Uno.Object.h

include/OpenGL.GLTextureParameterName.h: include/Uno.Int.h

include/OpenGL.GLTextureParameterValue.h: include/Uno.Int.h

include/OpenGL.GLTextureTarget.h: include/Uno.Int.h

include/OpenGL.GLTextureUnit.h: include/Uno.Int.h

include/Outracks.Simulator.AggregateConnectError.h: include/Uno.h

include/Outracks.Simulator.Application.h: include/Fuse.App.h
include/Outracks.Simulator.Application.h: include/Fuse.Input.IPointerEventResponder.h

include/Outracks.Simulator.Apply-1.h: include/Uno.Object.h

include/Outracks.Simulator.ApplyFirst-2.h: include/Uno.Object.h

include/Outracks.Simulator.ApplySecond-2.h: include/Uno.Object.h

include/Outracks.Simulator.ArrayStream.h: include/Uno.IDisposable.h
include/Outracks.Simulator.ArrayStream.h: include/Uno.IO.Stream.h

include/Outracks.Simulator.Bytecode.AddEventHandler.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.BindVariable.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.BlobLiteral.h: include/Outracks.Simulator.Bytecode.Literal.h

include/Outracks.Simulator.Bytecode.BooleanLiteral.h: include/Outracks.Simulator.Bytecode.Literal.h

include/Outracks.Simulator.Bytecode.CallDynamicMethod.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.CallLambda.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.CallStaticMethod.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.EnumLiteral.h: include/Outracks.Simulator.Bytecode.Literal.h

include/Outracks.Simulator.Bytecode.Expression.h: include/Outracks.Simulator.Bytecode.Statement.h

include/Outracks.Simulator.Bytecode.Instantiate.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.IsType.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.Lambda.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.Literal.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.LogicalOr.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.MethodGroup.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.NamespaceName.h: include/Outracks.Simulator.IEquatable-1.h
include/Outracks.Simulator.Bytecode.NamespaceName.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.NoOperation.h: include/Outracks.Simulator.Bytecode.Optional-1.h
include/Outracks.Simulator.Bytecode.NoOperation.h: include/Outracks.Simulator.Bytecode.Statement.h

include/Outracks.Simulator.Bytecode.NumberLiteral.h: include/Outracks.Simulator.Bytecode.Literal.h

include/Outracks.Simulator.Bytecode.NumberType.h: include/Uno.Int.h

include/Outracks.Simulator.Bytecode.Optional.h: include/Uno.Object.h
include/Outracks.Simulator.Bytecode.Optional.h: include/Outracks.Simulator.Bytecode.Optional-1.h

include/Outracks.Simulator.Bytecode.Optional-1.h: include/Outracks.Simulator.IEquatable-1.h
include/Outracks.Simulator.Bytecode.Optional-1.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.OptionalExtensions.h: include/Uno.h
include/Outracks.Simulator.Bytecode.OptionalExtensions.h: include/Outracks.Simulator.Bytecode.Optional-1.h
include/Outracks.Simulator.Bytecode.OptionalExtensions.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.Parameter.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.ProjectBytecode.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.ReadProperty.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.ReadStaticField.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.ReadVariable.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.RemoveEventHandler.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.Return.h: include/Outracks.Simulator.Bytecode.Statement.h

include/Outracks.Simulator.Bytecode.Signature.h: include/Outracks.Simulator.Bytecode.Optional-1.h
include/Outracks.Simulator.Bytecode.Signature.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.Statement.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.StaticMemberName.h: include/Outracks.Simulator.IEquatable-1.h
include/Outracks.Simulator.Bytecode.StaticMemberName.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.StringLiteral.h: include/Outracks.Simulator.Bytecode.Literal.h

include/Outracks.Simulator.Bytecode.TypeMemberName.h: include/Outracks.Simulator.IEquatable-1.h
include/Outracks.Simulator.Bytecode.TypeMemberName.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.TypeName.h: include/Outracks.Simulator.Bytecode.Optional-1.h
include/Outracks.Simulator.Bytecode.TypeName.h: include/Outracks.Simulator.IEquatable-1.h
include/Outracks.Simulator.Bytecode.TypeName.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.Variable.h: include/Outracks.Simulator.IEquatable-1.h
include/Outracks.Simulator.Bytecode.Variable.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.WriteProperty.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.BytecodeCache.h: include/Uno.h

include/Outracks.Simulator.ByteFileSource.h: include/Uno.UX.FileSource.h

include/Outracks.Simulator.ChangeIp.h: include/Outracks.Simulator.ShowingPrompt.h

include/Outracks.Simulator.Closure.h: include/Uno.h

include/Outracks.Simulator.ConcurrentQueue-1.h: include/Uno.Object.h

include/Outracks.Simulator.Connected.h: include/Outracks.Simulator.State.h

include/Outracks.Simulator.Connecting.h: include/Outracks.Simulator.State.h

include/Outracks.Simulator.ConnectingToHost.h: include/Outracks.Simulator.Connecting.h

include/Outracks.Simulator.ConnectingToProxy.h: include/Outracks.Simulator.Connecting.h

include/Outracks.Simulator.ConnectionLost.h: include/Outracks.Simulator.ShowingModalDialog.h

include/Outracks.Simulator.ConnectToSimulator.h: include/Uno.Object.h

include/Outracks.Simulator.Context.h: include/Uno.h

include/Outracks.Simulator.DeviceInfo.h: include/Uno.h

include/Outracks.Simulator.DialogButton.h: include/Uno.Object.h

include/Outracks.Simulator.DummyApplication.h: include/Uno.Application.h

include/Outracks.Simulator.EnumerableHitTestExtension.CollectHitNodesClosure.h: include/Uno.Object.h

include/Outracks.Simulator.EnumerableHitTestExtension.h: include/Uno.h

include/Outracks.Simulator.Exceptions.h: include/Uno.h

include/Outracks.Simulator.FailedToConnect.h: include/Outracks.Simulator.ShowingModalDialog.h

include/Outracks.Simulator.FailedToConnectToEndPoint.h: include/Uno.Exception.h

include/Outracks.Simulator.FailedToConnectToProxy.h: include/Uno.Exception.h

include/Outracks.Simulator.FailedToConnectToSimulator.h: include/Uno.Exception.h

include/Outracks.Simulator.FakeApp.h: include/Fuse.Animations.IResize.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Controls.Panel.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.IActualPlacement.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Navigation.INavigationPanel.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Node.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Scripting.INameScope.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Triggers.Actions.IHide.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Triggers.Actions.IShow.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Triggers.IAddRemove-1.h

include/Outracks.Simulator.Faulted.h: include/Outracks.Simulator.ShowingModalDialog.h

include/Outracks.Simulator.FileCache.h: include/Uno.Object.h

include/Outracks.Simulator.Flasher.h: include/Fuse.Animations.IResize.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Controls.Panel.h
include/Outracks.Simulator.Flasher.h: include/Fuse.IActualPlacement.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Navigation.INavigationPanel.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Node.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Scripting.INameScope.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Triggers.Actions.IHide.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Triggers.Actions.IShow.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Triggers.IAddRemove-1.h

include/Outracks.Simulator.Forget-2.h: include/Uno.Object.h

include/Outracks.Simulator.Forget-3.h: include/Uno.Object.h

include/Outracks.Simulator.ForgetAction-2.h: include/Uno.Object.h

include/Outracks.Simulator.GeneratedApplication.h: include/Fuse.Input.IPointerEventResponder.h
include/Outracks.Simulator.GeneratedApplication.h: include/Outracks.Simulator.Application.h

include/Outracks.Simulator.GetSimulatorEndpoint.h: include/Uno.Object.h

include/Outracks.Simulator.GoOffline.h: include/Uno.h

include/Outracks.Simulator.Idle.h: include/Outracks.Simulator.Connected.h

include/Outracks.Simulator.IEquatable-1.h: include/Uno.Object.h

include/Outracks.Simulator.ImmutableList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Outracks.Simulator.ImmutableList-1.h: include/Uno.Object.h

include/Outracks.Simulator.IndentString.h: include/Uno.h

include/Outracks.Simulator.InputMode.h: include/Uno.Int.h

include/Outracks.Simulator.InvalidDataException.h: include/Uno.Exception.h

include/Outracks.Simulator.ISimulatorClient.h: include/Uno.IDisposable.h
include/Outracks.Simulator.ISimulatorClient.h: include/Uno.Object.h

include/Outracks.Simulator.List.h: include/Uno.h

include/Outracks.Simulator.LoadingScreen.h: include/Uno.Object.h

include/Outracks.Simulator.ModalDialog.h: include/Uno.Object.h

include/Outracks.Simulator.NonExhaustiveMatch.h: include/Uno.Exception.h

include/Outracks.Simulator.OfflineSimulatorClient.h: include/Outracks.Simulator.ISimulatorClient.h
include/Outracks.Simulator.OfflineSimulatorClient.h: include/Uno.IDisposable.h
include/Outracks.Simulator.OfflineSimulatorClient.h: include/Uno.Object.h

include/Outracks.Simulator.Protocol.DebugLog.h: include/Outracks.Simulator.Protocol.MessageFromClient.h

include/Outracks.Simulator.Protocol.Error.h: include/Outracks.Simulator.Protocol.MessageToClient.h

include/Outracks.Simulator.Protocol.ExceptionInfo.h: include/Uno.Object.h

include/Outracks.Simulator.Protocol.Execute.h: include/Outracks.Simulator.Protocol.MessageToClient.h

include/Outracks.Simulator.Protocol.MessageFromClient.h: include/Uno.Object.h

include/Outracks.Simulator.Protocol.MessageToClient.h: include/Uno.Object.h

include/Outracks.Simulator.Protocol.RegisterName.h: include/Outracks.Simulator.Protocol.MessageFromClient.h

include/Outracks.Simulator.Protocol.Reify.h: include/Outracks.Simulator.Protocol.MessageToClient.h

include/Outracks.Simulator.Protocol.SetSelection.h: include/Outracks.Simulator.Protocol.MessageFromClient.h

include/Outracks.Simulator.Protocol.UnhandledException.h: include/Outracks.Simulator.Protocol.MessageFromClient.h

include/Outracks.Simulator.ProxyClient.h: include/Uno.Object.h

include/Outracks.Simulator.Reflection.DelegateReflection.h: include/Outracks.Simulator.Runtime.IReflection.h
include/Outracks.Simulator.Reflection.DelegateReflection.h: include/Uno.Object.h

include/Outracks.Simulator.Reflection.Native.CppEvent.h: include/Outracks.Simulator.Reflection.Native.IEvent.h
include/Outracks.Simulator.Reflection.Native.CppEvent.h: include/Uno.Object.h

include/Outracks.Simulator.Reflection.Native.CppProperty.h: include/Outracks.Simulator.Reflection.Native.IProperty.h
include/Outracks.Simulator.Reflection.Native.CppProperty.h: include/Uno.Object.h

include/Outracks.Simulator.Reflection.Native.IEvent.h: include/Uno.Object.h

include/Outracks.Simulator.Reflection.Native.IProperty.h: include/Uno.Object.h

include/Outracks.Simulator.Reflection.Native.ITypeMap.h: include/Uno.Object.h

include/Outracks.Simulator.Reflection.Native.NativeReflection.h: include/Outracks.Simulator.Runtime.IReflection.h
include/Outracks.Simulator.Reflection.Native.NativeReflection.h: include/Uno.Object.h

include/Outracks.Simulator.Reflection.Native.Property-1.h: include/Uno.Object.h
include/Outracks.Simulator.Reflection.Native.Property-1.h: include/Uno.UX.Property-1.h

include/Outracks.Simulator.Reflection.Native.ReflectionCache.h: include/Uno.h

include/Outracks.Simulator.Reflection.Native.ReflectionExtensions.h: include/Uno.h

include/Outracks.Simulator.Reflection.Native.ReflectionHelpers.h: include/Uno.h

include/Outracks.Simulator.Reflection.Native.SimpleTypeMap.h: include/Outracks.Simulator.Reflection.Native.ITypeMap.h
include/Outracks.Simulator.Reflection.Native.SimpleTypeMap.h: include/Uno.Object.h

include/Outracks.Simulator.Reflection.Native.TryInvokeExtension.h: include/Uno.h

include/Outracks.Simulator.Reifying.h: include/Outracks.Simulator.Connected.h

include/Outracks.Simulator.Running.h: include/Outracks.Simulator.Connected.h

include/Outracks.Simulator.Runtime.Environment.h: include/Outracks.Simulator.Bytecode.Optional-1.h
include/Outracks.Simulator.Runtime.Environment.h: include/Uno.Object.h

include/Outracks.Simulator.Runtime.IReflection.h: include/Uno.Object.h

include/Outracks.Simulator.Runtime.LambdaClosure.h: include/Uno.Object.h

include/Outracks.Simulator.Runtime.LazyProperty-1.h: include/Uno.Object.h
include/Outracks.Simulator.Runtime.LazyProperty-1.h: include/Uno.UX.Property-1.h

include/Outracks.Simulator.Runtime.LazyPropertyStorage-1.h: include/Uno.Object.h

include/Outracks.Simulator.Runtime.MemberNotFound.h: include/Uno.Exception.h

include/Outracks.Simulator.Runtime.ObjectPropertyRegistry.h: include/Uno.h

include/Outracks.Simulator.Runtime.ObjectTagRegistry.h: include/Uno.h

include/Outracks.Simulator.Runtime.ScopeClosure.h: include/Uno.Object.h

include/Outracks.Simulator.Runtime.Selection.h: include/Fuse.Preview.ISelection.h
include/Outracks.Simulator.Runtime.Selection.h: include/Uno.Object.h

include/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.h: include/Uno.Object.h

include/Outracks.Simulator.Runtime.TypeNotFound.h: include/Uno.Exception.h

include/Outracks.Simulator.Runtime.UnambiguousMethodNotFound.h: include/Uno.Exception.h

include/Outracks.Simulator.Runtime.UxFactory.h: include/Uno.Object.h
include/Outracks.Simulator.Runtime.UxFactory.h: include/Uno.UX.IFactory.h

include/Outracks.Simulator.Runtime.UxProperty-1.h: include/Uno.Object.h
include/Outracks.Simulator.Runtime.UxProperty-1.h: include/Uno.UX.Property-1.h

include/Outracks.Simulator.Runtime.UxTemplate.h: include/Uno.Object.h
include/Outracks.Simulator.Runtime.UxTemplate.h: include/Uno.UX.ITemplate.h

include/Outracks.Simulator.Runtime.VariableNotBound.h: include/Uno.Exception.h

include/Outracks.Simulator.Runtime.VirtualMachine.h: include/Uno.h

include/Outracks.Simulator.Serialization.h: include/Uno.h

include/Outracks.Simulator.ShowingModalDialog.h: include/Outracks.Simulator.Bytecode.Optional-1.h
include/Outracks.Simulator.ShowingModalDialog.h: include/Outracks.Simulator.State.h

include/Outracks.Simulator.ShowingPrompt.h: include/Outracks.Simulator.State.h

include/Outracks.Simulator.SimulatorClient.h: include/Outracks.Simulator.ISimulatorClient.h
include/Outracks.Simulator.SimulatorClient.h: include/Uno.IDisposable.h
include/Outracks.Simulator.SimulatorClient.h: include/Uno.Object.h

include/Outracks.Simulator.State.h: include/Uno.Object.h

include/Outracks.Simulator.StringSplitting.h: include/Uno.h

include/Outracks.Simulator.Task-1.h: include/Uno.Object.h

include/Outracks.Simulator.Tasks.h: include/Uno.h

include/Outracks.Simulator.TaskThread-1.h: include/Uno.Object.h

include/Outracks.Simulator.Uninitialized.h: include/Outracks.Simulator.State.h

include/Outracks.Simulator.UserAppState.h: include/Uno.Float4.h
include/Outracks.Simulator.UserAppState.h: include/Uno.Object.h

include/Outracks.Simulator.WaitForFirstResult-1.h: include/Uno.Object.h

include/Outracks.UnoCore.Utilities.VerySimpleEventQueue.h: include/Uno.Object.h

include/posix_mutex.h: include/Uno/Uno.h

include/posix_thread.h: include/Uno/Uno.h









include/Uno.Action.h: include/Uno.Delegate.h

include/Uno.Action-1.h: include/Uno.Delegate.h

include/Uno.Action-2.h: include/Uno.Delegate.h

include/Uno.Action-3.h: include/Uno.Delegate.h

include/Uno.Action-4.h: include/Uno.Delegate.h

include/Uno.AggregateException.h: include/Uno.Exception.h

include/Uno.Application.h: include/Uno.Float4.h
include/Uno.Application.h: include/Uno.Object.h

include/Uno.ArgumentException.h: include/Uno.Exception.h

include/Uno.ArgumentNullException.h: include/Uno.ArgumentException.h

include/Uno.ArgumentOutOfRangeException.h: include/Uno.ArgumentException.h

include/Uno.Array.h: include/Uno.h

include/Uno.Attribute.h: include/Uno.Object.h

include/Uno.Bool.h: include/Uno.Object.h

include/Uno.Buffer.h: include/Uno.Object.h

include/Uno.BundleFile.h: include/Uno.Object.h

include/Uno.Byte.h: include/Uno.Object.h

include/Uno.Byte2.h: include/Uno.Object.h

include/Uno.Byte4.h: include/Uno.Object.h

include/Uno.Char.h: include/Uno.Object.h

include/Uno.Collections.ConcurrentCollection-1.DeferLockImpl.h: include/Uno.IDisposable.h
include/Uno.Collections.ConcurrentCollection-1.DeferLockImpl.h: include/Uno.Object.h

include/Uno.Collections.ConcurrentCollection-1.h: include/Uno.Collections.ConcurrentCollection-1.ModItem.h
include/Uno.Collections.ConcurrentCollection-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.ConcurrentCollection-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.ConcurrentCollection-1.h: include/Uno.Object.h

include/Uno.Collections.ConcurrentCollection-1.ModItem.h: include/Uno.Object.h

include/Uno.Collections.Dictionary-2.Bucket.h: include/Uno.Object.h

include/Uno.Collections.Dictionary-2.BucketState.h: include/Uno.Int.h

include/Uno.Collections.Dictionary-2.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Dictionary-2.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Dictionary-2.Enumerator.h: include/Uno.Collections.KeyValuePair-2.h
include/Uno.Collections.Dictionary-2.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.Dictionary-2.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.Dictionary-2.Bucket.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.IDictionary-2.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.KeyValuePair-2.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Object.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.Dictionary-2.Enumerator.h

include/Uno.Collections.Dictionary-2.KeyCollection.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Dictionary-2.KeyCollection.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Dictionary-2.KeyCollection.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.Dictionary-2.KeyCollection.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.Dictionary-2.KeyCollection.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.Dictionary-2.KeyCollection.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Dictionary-2.KeyCollection.h: include/Uno.Object.h
include/Uno.Collections.Dictionary-2.KeyCollection.h: include/Uno.Collections.Dictionary-2.KeyCollection.Enumerator.h

include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.Dictionary-2.ValueCollection.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.Dictionary-2.ValueCollection.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Dictionary-2.ValueCollection.h: include/Uno.Object.h
include/Uno.Collections.Dictionary-2.ValueCollection.h: include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h

include/Uno.Collections.EmptyEnumerable-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.EmptyEnumerable-1.h: include/Uno.Object.h

include/Uno.Collections.EmptyEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.EmptyEnumerator-1.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.EmptyEnumerator-1.h: include/Uno.IDisposable.h
include/Uno.Collections.EmptyEnumerator-1.h: include/Uno.Object.h

include/Uno.Collections.EnumerableExtensions.h: include/Uno.h

include/Uno.Collections.EnumerableExtensions.LinkedList-1.h: include/Uno.Object.h

include/Uno.Collections.HashSet-1.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.HashSet-1.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.HashSet-1.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.HashSet-1.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.HashSet-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.HashSet-1.h: include/Uno.Object.h
include/Uno.Collections.HashSet-1.h: include/Uno.Collections.HashSet-1.Enumerator.h

include/Uno.Collections.ICollection-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.ICollection-1.h: include/Uno.Object.h

include/Uno.Collections.IDictionary-2.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.IDictionary-2.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.IDictionary-2.h: include/Uno.Collections.KeyValuePair-2.h
include/Uno.Collections.IDictionary-2.h: include/Uno.Object.h

include/Uno.Collections.IEnumerable-1.h: include/Uno.Object.h

include/Uno.Collections.IEnumerator.h: include/Uno.Object.h

include/Uno.Collections.IEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.IEnumerator-1.h: include/Uno.IDisposable.h
include/Uno.Collections.IEnumerator-1.h: include/Uno.Object.h

include/Uno.Collections.IList-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.IList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.IList-1.h: include/Uno.Object.h

include/Uno.Collections.IListExtensions.h: include/Uno.h

include/Uno.Collections.KeyValuePair-2.h: include/Uno.Object.h

include/Uno.Collections.LinkedList-1.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.LinkedList-1.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.LinkedList-1.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.LinkedList-1.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.LinkedList-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.LinkedList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.LinkedList-1.h: include/Uno.Object.h

include/Uno.Collections.LinkedListNode-1.h: include/Uno.Object.h

include/Uno.Collections.List-1.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.List-1.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.List-1.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.List-1.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.List-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.List-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.List-1.h: include/Uno.Collections.IList-1.h
include/Uno.Collections.List-1.h: include/Uno.Object.h
include/Uno.Collections.List-1.h: include/Uno.Collections.List-1.Enumerator.h

include/Uno.Collections.ObservableList-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.ObservableList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.ObservableList-1.h: include/Uno.Collections.IList-1.h
include/Uno.Collections.ObservableList-1.h: include/Uno.Object.h

include/Uno.Collections.OrderByCompare-1.h: include/Uno.Object.h

include/Uno.Collections.Queue-1.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Queue-1.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Queue-1.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.Queue-1.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.Queue-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Queue-1.h: include/Uno.Object.h
include/Uno.Collections.Queue-1.h: include/Uno.Collections.Queue-1.Enumerator.h

include/Uno.Collections.ReadOnlyCollection-1.h: include/Uno.Object.h

include/Uno.Collections.SelectEnumerable-2.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.SelectEnumerable-2.h: include/Uno.Object.h

include/Uno.Collections.SelectEnumerator-2.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.SelectEnumerator-2.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.SelectEnumerator-2.h: include/Uno.IDisposable.h
include/Uno.Collections.SelectEnumerator-2.h: include/Uno.Object.h

include/Uno.Collections.Stack-1.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Stack-1.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Stack-1.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.Stack-1.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.Stack-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Stack-1.h: include/Uno.Object.h

include/Uno.Collections.UnionEnumerable-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.UnionEnumerable-1.h: include/Uno.Object.h

include/Uno.Collections.UnionEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.UnionEnumerator-1.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.UnionEnumerator-1.h: include/Uno.IDisposable.h
include/Uno.Collections.UnionEnumerator-1.h: include/Uno.Object.h

include/Uno.Collections.WhereEnumerable-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.WhereEnumerable-1.h: include/Uno.Object.h

include/Uno.Collections.WhereEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.WhereEnumerator-1.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.WhereEnumerator-1.h: include/Uno.IDisposable.h
include/Uno.Collections.WhereEnumerator-1.h: include/Uno.Object.h

include/Uno.Color.h: include/Uno.h

include/Uno.ColorHelper.h: include/Uno.h

include/Uno.Comparison-1.h: include/Uno.Delegate.h

include/Uno.Compiler.CallerFilePathAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.CallerLineNumberAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.CallerMemberNameAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.ExportTargetInterop.DontCopyStructAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.ExportTargetInterop.DontExportAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.ExportTargetInterop.OptionalAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.ExportTargetInterop.StaticAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.ExportTargetInterop.TargetSpecificImplementationAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.ExportTargetInterop.TargetSpecificTypeAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.HideFromCodeCompleterAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.IgnoreMainClassAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.ImportServices.FilenameAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.MainClassAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.ShaderGenerator.ShaderStageInlineAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.UxGeneratedAttribute.h: include/Uno.Attribute.h

include/Uno.Content.Fonts.BitmapFont.CharPair.h: include/Uno.Object.h

include/Uno.Content.Fonts.BitmapFont.GlyphInfo.h: include/Uno.Float2.h
include/Uno.Content.Fonts.BitmapFont.GlyphInfo.h: include/Uno.Object.h
include/Uno.Content.Fonts.BitmapFont.GlyphInfo.h: include/Uno.UShort2.h

include/Uno.Content.Fonts.BitmapFont.h: include/Uno.Content.Fonts.BitmapFont.CharPair.h
include/Uno.Content.Fonts.BitmapFont.h: include/Uno.Content.Fonts.BitmapFont.GlyphInfo.h
include/Uno.Content.Fonts.BitmapFont.h: include/Uno.Object.h

include/Uno.Content.Fonts.CppFontFace.h: include/Uno.Content.Fonts.FontFace.h
include/Uno.Content.Fonts.CppFontFace.h: include/Uno.IDisposable.h

include/Uno.Content.Fonts.CppFontFaceHandle.h: include/Uno.Object.h

include/Uno.Content.Fonts.DefaultTextTransform.h: include/Uno.Content.Fonts.TextTransform.h
include/Uno.Content.Fonts.DefaultTextTransform.h: include/Uno.Float4x4.h

include/Uno.Content.Fonts.FontFace.h: include/Uno.IDisposable.h
include/Uno.Content.Fonts.FontFace.h: include/Uno.Object.h
include/Uno.Content.Fonts.FontFace.h: include/Uno.Content.Fonts.RenderedGlyph.h

include/Uno.Content.Fonts.FontFaceHelpers.h: include/Uno.h

include/Uno.Content.Fonts.RenderedGlyph.h: include/Uno.Float2.h
include/Uno.Content.Fonts.RenderedGlyph.h: include/Uno.Object.h

include/Uno.Content.Fonts.SdfFontShader.h: include/Uno.Content.Fonts.TextShader.h
include/Uno.Content.Fonts.SdfFontShader.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Uno.Content.Fonts.SpriteFontShader.h: include/Uno.Content.Fonts.TextShader.h
include/Uno.Content.Fonts.SpriteFontShader.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Uno.Content.Fonts.TextRenderer.h: include/Uno.Byte4.h
include/Uno.Content.Fonts.TextRenderer.h: include/Uno.Object.h

include/Uno.Content.Fonts.TextShader.h: include/Uno.Object.h

include/Uno.Content.Fonts.TextShaderData.h: include/Uno.Float4x4.h
include/Uno.Content.Fonts.TextShaderData.h: include/Uno.Graphics.VertexAttributeInfo.h
include/Uno.Content.Fonts.TextShaderData.h: include/Uno.Object.h

include/Uno.Content.Fonts.TextTransform.h: include/Uno.Object.h
include/Uno.Content.Fonts.TextTransform.h: include/Uno.Float4x4.h

include/Uno.Content.Images.Bitmap.h: include/Uno.Int2.h
include/Uno.Content.Images.Bitmap.h: include/Uno.Object.h

include/Uno.Content.Models.IndexArray.h: include/Uno.Object.h

include/Uno.Content.Models.Model.h: include/Uno.Object.h

include/Uno.Content.Models.ModelDrawable.h: include/Uno.Object.h

include/Uno.Content.Models.ModelMaterial.h: include/Uno.Object.h

include/Uno.Content.Models.ModelMesh.h: include/Uno.Object.h

include/Uno.Content.Models.ModelNode.h: include/Uno.Float4x4.h
include/Uno.Content.Models.ModelNode.h: include/Uno.Object.h

include/Uno.Content.Models.ModelParameter-1.h: include/Uno.Object.h

include/Uno.Content.Models.VertexAttributeArray.h: include/Uno.Object.h

include/Uno.Content.Splines.KeyframedSpline-2.h: include/Uno.Content.Splines.KeyframedSpline-2.Key.h
include/Uno.Content.Splines.KeyframedSpline-2.h: include/Uno.Content.Splines.Spline-1.h
include/Uno.Content.Splines.KeyframedSpline-2.h: include/Uno.Object.h

include/Uno.Content.Splines.KeyframedSpline-2.Key.h: include/Uno.Object.h

include/Uno.Content.Splines.LinearSplineFloat.h: include/Uno.Content.Splines.KeyframedSpline-2.h
include/Uno.Content.Splines.LinearSplineFloat.h: include/Uno.Float.h

include/Uno.Content.Splines.LinearSplineFloat2.h: include/Uno.Content.Splines.KeyframedSpline-2.h
include/Uno.Content.Splines.LinearSplineFloat2.h: include/Uno.Float2.h

include/Uno.Content.Splines.LinearSplineFloat3.h: include/Uno.Content.Splines.KeyframedSpline-2.h
include/Uno.Content.Splines.LinearSplineFloat3.h: include/Uno.Float3.h

include/Uno.Content.Splines.LinearSplineFloat4.h: include/Uno.Content.Splines.KeyframedSpline-2.h
include/Uno.Content.Splines.LinearSplineFloat4.h: include/Uno.Float4.h

include/Uno.Content.Splines.LinearSplineFloat4x4.h: include/Uno.Content.Splines.KeyframedSpline-2.h
include/Uno.Content.Splines.LinearSplineFloat4x4.h: include/Uno.Float4x4.h

include/Uno.Content.Splines.Spline-1.h: include/Uno.Object.h

include/Uno.Data.Xml.AttributeHandleConverter.h: include/Uno.Object.h

include/Uno.Data.Xml.ParseOptions.h: include/Uno.UInt.h

include/Uno.Data.Xml.TargetSpecificXmlNode.h: include/Uno.Object.h

include/Uno.Data.Xml.ValidationHelper.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlAttribute.h: include/Uno.Data.Xml.XmlNode.h

include/Uno.Data.Xml.XmlAttributeCollection.h: include/Uno.Collections.ICollection-1.h
include/Uno.Data.Xml.XmlAttributeCollection.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Data.Xml.XmlAttributeCollection.h: include/Uno.Collections.IList-1.h
include/Uno.Data.Xml.XmlAttributeCollection.h: include/Uno.Data.Xml.XmlAttribute.h
include/Uno.Data.Xml.XmlAttributeCollection.h: include/Uno.Data.Xml.XmlNodeCollectionBase-1.h

include/Uno.Data.Xml.XmlAttributeHandle.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlCharacterData.h: include/Uno.Data.Xml.XmlLinkedNode.h

include/Uno.Data.Xml.XmlComment.h: include/Uno.Data.Xml.XmlLinkedNode.h

include/Uno.Data.Xml.XmlDeclaration.h: include/Uno.Data.Xml.XmlLinkedNode.h

include/Uno.Data.Xml.XmlDocument.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlDocumentElement.h: include/Uno.Data.Xml.XmlLinkedNode.h

include/Uno.Data.Xml.XmlElement.h: include/Uno.Data.Xml.XmlLinkedNode.h

include/Uno.Data.Xml.XmlEncoding.h: include/Uno.Int.h

include/Uno.Data.Xml.XmlEncodingHelper.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlException.h: include/Uno.Exception.h

include/Uno.Data.Xml.XmlLinkedNode.h: include/Uno.Data.Xml.XmlNode.h

include/Uno.Data.Xml.XmlLinkedNodeCollection.h: include/Uno.Collections.ICollection-1.h
include/Uno.Data.Xml.XmlLinkedNodeCollection.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Data.Xml.XmlLinkedNodeCollection.h: include/Uno.Collections.IList-1.h
include/Uno.Data.Xml.XmlLinkedNodeCollection.h: include/Uno.Data.Xml.XmlLinkedNode.h
include/Uno.Data.Xml.XmlLinkedNodeCollection.h: include/Uno.Data.Xml.XmlNodeCollectionBase-1.h

include/Uno.Data.Xml.XmlNode.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlNodeCollectionBase-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Data.Xml.XmlNodeCollectionBase-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Data.Xml.XmlNodeCollectionBase-1.h: include/Uno.Collections.IList-1.h
include/Uno.Data.Xml.XmlNodeCollectionBase-1.h: include/Uno.Data.Xml.XmlNode.h
include/Uno.Data.Xml.XmlNodeCollectionBase-1.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlNodeHandle.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlNodeHandleConverter.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlNodeImpl.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlNodeType.h: include/Uno.Int.h

include/Uno.Data.Xml.XmlProcessingInstruction.h: include/Uno.Data.Xml.XmlLinkedNode.h

include/Uno.Data.Xml.XmlText.h: include/Uno.Data.Xml.XmlLinkedNode.h

include/Uno.Data.Xml.XmlValue.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlValueType.h: include/Uno.Int.h

include/Uno.DateTime.h: include/Uno.Object.h

include/Uno.Delegate.h: include/Uno.Object.h

include/Uno.Diagnostics.AllocateEvent.h: include/Uno.Diagnostics.ProfileEvent.h

include/Uno.Diagnostics.AlwaysProfileAttribute.h: include/Uno.Attribute.h

include/Uno.Diagnostics.AssertionHandler.h: include/Uno.Delegate.h

include/Uno.Diagnostics.Clock.h: include/Uno.h

include/Uno.Diagnostics.Debug.h: include/Uno.h

include/Uno.Diagnostics.DebugMessageType.h: include/Uno.Int.h

include/Uno.Diagnostics.EnterEvent.h: include/Uno.Diagnostics.ProfileEvent.h

include/Uno.Diagnostics.EventType.h: include/Uno.Int.h

include/Uno.Diagnostics.ExitEvent.h: include/Uno.Diagnostics.ProfileEvent.h

include/Uno.Diagnostics.FreeEvent.h: include/Uno.Diagnostics.ProfileEvent.h

include/Uno.Diagnostics.IdMap-1.h: include/Uno.Object.h

include/Uno.Diagnostics.LogHandler.h: include/Uno.Delegate.h

include/Uno.Diagnostics.NeverProfileAttribute.h: include/Uno.Attribute.h

include/Uno.Diagnostics.Profile.h: include/Uno.h

include/Uno.Diagnostics.ProfileData.h: include/Uno.Object.h

include/Uno.Diagnostics.ProfileEvent.h: include/Uno.Object.h

include/Uno.Double.h: include/Uno.Object.h

include/Uno.Enum.h: include/Uno.h

include/Uno.EventArgs.h: include/Uno.Object.h

include/Uno.EventHandler.h: include/Uno.Delegate.h

include/Uno.EventHandler-1.h: include/Uno.Delegate.h

include/Uno.Exception.h: include/Uno.Object.h

include/Uno.FakeTime.h: include/Uno.Object.h

include/Uno.FlagsAttribute.h: include/Uno.Attribute.h

include/Uno.Float.h: include/Uno.Object.h

include/Uno.Float2.h: include/Uno.Object.h

include/Uno.Float2x2.h: include/Uno.Object.h

include/Uno.Float3.h: include/Uno.Object.h

include/Uno.Float3x3.h: include/Uno.Object.h

include/Uno.Float4.h: include/Uno.Object.h

include/Uno.Float4x4.h: include/Uno.Object.h

include/Uno.FormatException.h: include/Uno.Exception.h

include/Uno.Func-1.h: include/Uno.Delegate.h

include/Uno.Func-2.h: include/Uno.Delegate.h

include/Uno.Func-3.h: include/Uno.Delegate.h

include/Uno.Func-4.h: include/Uno.Delegate.h

include/Uno.Func-5.h: include/Uno.Delegate.h

include/Uno.GC.h: include/Uno.h

include/Uno.Generic.h: include/Uno.h

include/Uno.Geometry.Box.h: include/Uno.Float3.h
include/Uno.Geometry.Box.h: include/Uno.Object.h

include/Uno.Geometry.Collision.h: include/Uno.h

include/Uno.Geometry.Collision2D.h: include/Uno.h

include/Uno.Geometry.CubicBezier.h: include/Uno.Object.h

include/Uno.Geometry.Frustum.h: include/Uno.Geometry.Plane.h
include/Uno.Geometry.Frustum.h: include/Uno.Object.h

include/Uno.Geometry.Plane.h: include/Uno.Float3.h
include/Uno.Geometry.Plane.h: include/Uno.Object.h

include/Uno.Geometry.Ray.h: include/Uno.Float3.h
include/Uno.Geometry.Ray.h: include/Uno.Object.h

include/Uno.Geometry.Sphere.h: include/Uno.Float3.h
include/Uno.Geometry.Sphere.h: include/Uno.Object.h

include/Uno.Geometry.Triangle.h: include/Uno.Float3.h
include/Uno.Geometry.Triangle.h: include/Uno.Object.h

include/Uno.Geometry.Triangle2D.h: include/Uno.Float2.h
include/Uno.Geometry.Triangle2D.h: include/Uno.Object.h

include/Uno.Geometry.Vertex.h: include/Uno.Object.h

include/Uno.Geometry.VertexEnumerable.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Geometry.VertexEnumerable.h: include/Uno.Float2.h
include/Uno.Geometry.VertexEnumerable.h: include/Uno.Object.h

include/Uno.Geometry.VertexEnumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Geometry.VertexEnumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Geometry.VertexEnumerator.h: include/Uno.Float2.h
include/Uno.Geometry.VertexEnumerator.h: include/Uno.IDisposable.h
include/Uno.Geometry.VertexEnumerator.h: include/Uno.Object.h

include/Uno.Graphics.BlendEquation.h: include/Uno.Int.h

include/Uno.Graphics.BlendOperand.h: include/Uno.Int.h

include/Uno.Graphics.BufferUsage.h: include/Uno.Int.h

include/Uno.Graphics.CompareFunc.h: include/Uno.Int.h

include/Uno.Graphics.CubeFace.h: include/Uno.Int.h

include/Uno.Graphics.DeviceBuffer.h: include/Uno.IDisposable.h
include/Uno.Graphics.DeviceBuffer.h: include/Uno.Object.h

include/Uno.Graphics.Format.h: include/Uno.Int.h

include/Uno.Graphics.FormatHelpers.h: include/Uno.h

include/Uno.Graphics.Framebuffer.h: include/Uno.IDisposable.h
include/Uno.Graphics.Framebuffer.h: include/Uno.Object.h

include/Uno.Graphics.FramebufferFlags.h: include/Uno.Int.h

include/Uno.Graphics.GraphicsContext.h: include/Uno.Object.h
include/Uno.Graphics.GraphicsContext.h: include/Uno.Recti.h
include/Uno.Graphics.GraphicsContext.h: include/Uno/GraphicsContext.h

include/Uno.Graphics.IndexBuffer.h: include/Uno.Graphics.DeviceBuffer.h
include/Uno.Graphics.IndexBuffer.h: include/Uno.IDisposable.h

include/Uno.Graphics.IndexType.h: include/Uno.Int.h

include/Uno.Graphics.IndexTypeHelpers.h: include/Uno.h

include/Uno.Graphics.PolygonFace.h: include/Uno.Int.h

include/Uno.Graphics.PolygonWinding.h: include/Uno.Int.h

include/Uno.Graphics.PrimitiveType.h: include/Uno.Int.h

include/Uno.Graphics.RenderTarget.h: include/Uno.IDisposable.h
include/Uno.Graphics.RenderTarget.h: include/Uno.Int2.h
include/Uno.Graphics.RenderTarget.h: include/Uno.Object.h

include/Uno.Graphics.SamplerState.h: include/Uno.Object.h

include/Uno.Graphics.Texture2D.h: include/Uno.IDisposable.h
include/Uno.Graphics.Texture2D.h: include/Uno.Int2.h
include/Uno.Graphics.Texture2D.h: include/Uno.Object.h

include/Uno.Graphics.TextureAddressMode.h: include/Uno.Int.h

include/Uno.Graphics.TextureCube.h: include/Uno.IDisposable.h
include/Uno.Graphics.TextureCube.h: include/Uno.Object.h

include/Uno.Graphics.TextureFilter.h: include/Uno.Int.h

include/Uno.Graphics.TextureHelpers.h: include/Uno.h

include/Uno.Graphics.VertexAttributeInfo.h: include/Uno.Object.h

include/Uno.Graphics.VertexAttributeType.h: include/Uno.Int.h

include/Uno.Graphics.VertexAttributeTypeHelpers.h: include/Uno.h

include/Uno.Graphics.VertexBuffer.h: include/Uno.Graphics.DeviceBuffer.h
include/Uno.Graphics.VertexBuffer.h: include/Uno.IDisposable.h

include/Uno.Graphics.VideoTexture.h: include/Uno.IDisposable.h
include/Uno.Graphics.VideoTexture.h: include/Uno.Object.h

include/Uno.h: include/Uno/ObjectModel.h
include/Uno.h: include/Uno/Reflection.h

include/Uno.IDisposable.h: include/Uno.Object.h

include/Uno.IndexOutOfRangeException.h: include/Uno.Exception.h

include/Uno.Int.h: include/Uno.Object.h

include/Uno.Int2.h: include/Uno.Object.h

include/Uno.Int3.h: include/Uno.Object.h

include/Uno.Int4.h: include/Uno.Object.h

include/Uno.IntPtr.h: include/Uno.Object.h

include/Uno.InvalidCastException.h: include/Uno.Exception.h

include/Uno.InvalidOperationException.h: include/Uno.Exception.h

include/Uno.IO.BinaryReader.h: include/Uno.IDisposable.h
include/Uno.IO.BinaryReader.h: include/Uno.Object.h

include/Uno.IO.BinaryWriter.h: include/Uno.IDisposable.h
include/Uno.IO.BinaryWriter.h: include/Uno.Object.h

include/Uno.IO.CppXliStream.h: include/Uno.IDisposable.h
include/Uno.IO.CppXliStream.h: include/Uno.IO.Stream.h

include/Uno.IO.CppXliStreamHandle.h: include/Uno.Object.h

include/Uno.IO.Directory.h: include/Uno.h

include/Uno.IO.EndOfStreamException.h: include/Uno.IO.IOException.h

include/Uno.IO.File.h: include/Uno.h

include/Uno.IO.FileMode.h: include/Uno.Int.h

include/Uno.IO.FileSystemImpl.h: include/Uno.h

include/Uno.IO.IOException.h: include/Uno.Exception.h

include/Uno.IO.MemoryStream.h: include/Uno.IDisposable.h
include/Uno.IO.MemoryStream.h: include/Uno.IO.Stream.h

include/Uno.IO.Path.h: include/Uno.h

include/Uno.IO.SeekOrigin.h: include/Uno.Int.h

include/Uno.IO.Stream.h: include/Uno.IDisposable.h
include/Uno.IO.Stream.h: include/Uno.Object.h

include/Uno.IO.StreamReader.h: include/Uno.IDisposable.h
include/Uno.IO.StreamReader.h: include/Uno.IO.TextReader.h

include/Uno.IO.StreamWriter.h: include/Uno.IDisposable.h
include/Uno.IO.StreamWriter.h: include/Uno.IO.TextWriter.h

include/Uno.IO.StringWriter.h: include/Uno.IDisposable.h
include/Uno.IO.StringWriter.h: include/Uno.IO.TextWriter.h

include/Uno.IO.TextReader.h: include/Uno.IDisposable.h
include/Uno.IO.TextReader.h: include/Uno.Object.h

include/Uno.IO.TextWriter.h: include/Uno.IDisposable.h
include/Uno.IO.TextWriter.h: include/Uno.Object.h

include/Uno.IO.UserDirectory.h: include/Uno.Int.h

include/Uno.Long.h: include/Uno.Object.h

include/Uno.Math.h: include/Uno.h

include/Uno.Matrix.h: include/Uno.h

include/Uno.Net.EndPoint.h: include/Uno.Object.h

include/Uno.Net.Http.AbsolutePathParser.h: include/Uno.Object.h

include/Uno.Net.Http.HashParser.h: include/Uno.Object.h

include/Uno.Net.Http.HostInfo.h: include/Uno.Object.h

include/Uno.Net.Http.HostInfoParser.h: include/Uno.Object.h

include/Uno.Net.Http.HttpDefaultDispatcher.h: include/Uno.Object.h
include/Uno.Net.Http.HttpDefaultDispatcher.h: include/Uno.Threading.IDispatcher.h

include/Uno.Net.Http.HttpMessageCache.h: include/Uno.h

include/Uno.Net.Http.HttpMessageHandler.h: include/Uno.IDisposable.h
include/Uno.Net.Http.HttpMessageHandler.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMessageHandler.StaticData.h: include/Uno.h

include/Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure-1.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMessageHandlerRequest.h: include/Uno.IDisposable.h
include/Uno.Net.Http.HttpMessageHandlerRequest.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMessageHandlerRequest.ProgressClosure.h: include/Uno.Object.h

include/Uno.Net.Http.HttpRequestState.h: include/Uno.Int.h

include/Uno.Net.Http.HttpResponseType.h: include/Uno.Int.h

include/Uno.Net.Http.HttpStatusReasonPhrase.h: include/Uno.h

include/Uno.Net.Http.Implementation.AndroidHttpRequest.h: include/Android.Base.Wrappers.IJWrapper.h
include/Uno.Net.Http.Implementation.AndroidHttpRequest.h: include/Android.com.fuse.ExperimentalHttp.HttpRequest.h
include/Uno.Net.Http.Implementation.AndroidHttpRequest.h: include/Uno.IDisposable.h
include/Uno.Net.Http.Implementation.AndroidHttpRequest.h: include/Uno.Net.Http.Implementation.IHttpRequest.h

include/Uno.Net.Http.Implementation.IHttpRequest.h: include/Uno.IDisposable.h
include/Uno.Net.Http.Implementation.IHttpRequest.h: include/Uno.Object.h

include/Uno.Net.Http.InvalidResponseTypeException.h: include/Uno.Exception.h

include/Uno.Net.Http.InvalidStateException.h: include/Uno.Exception.h

include/Uno.Net.Http.QueryParser.h: include/Uno.Object.h

include/Uno.Net.Http.SchemeParser.h: include/Uno.Object.h

include/Uno.Net.Http.SchemeParserResult.h: include/Uno.Object.h

include/Uno.Net.Http.Uri.h: include/Uno.Object.h

include/Uno.Net.Http.UriFormatException.h: include/Uno.Exception.h

include/Uno.Net.Http.UriScheme.h: include/Uno.Object.h

include/Uno.Net.Http.UriSchemeType.h: include/Uno.Int.h

include/Uno.Net.Http.UserInfoParser.h: include/Uno.Object.h

include/Uno.Net.IPAddress.h: include/Uno.Object.h

include/Uno.Net.IPEndPoint.h: include/Uno.Net.EndPoint.h

include/Uno.Net.Sockets.AddressFamily.h: include/Uno.Int.h

include/Uno.Net.Sockets.Berkeley.bsd_socket.h: include/Uno.h

include/Uno.Net.Sockets.Berkeley.Socket.h: include/Uno.Net.Sockets.Socket.h

include/Uno.Net.Sockets.NetworkStream.h: include/Uno.IDisposable.h
include/Uno.Net.Sockets.NetworkStream.h: include/Uno.IO.Stream.h

include/Uno.Net.Sockets.ProtocolType.h: include/Uno.Int.h

include/Uno.Net.Sockets.SelectMode.h: include/Uno.Int.h

include/Uno.Net.Sockets.Socket.h: include/Uno.Object.h

include/Uno.Net.Sockets.SocketException.h: include/Uno.Exception.h

include/Uno.Net.Sockets.SocketShutdown.h: include/Uno.Int.h

include/Uno.Net.Sockets.SocketType.h: include/Uno.Int.h

include/Uno.NotImplementedException.h: include/Uno.Exception.h

include/Uno.NotSupportedException.h: include/Uno.Exception.h

include/Uno.NullReferenceException.h: include/Uno.Exception.h

include/Uno.Object.h: include/Uno.h

include/Uno.ObjectDisposedException.h: include/Uno.Exception.h

include/Uno.OverflowException.h: include/Uno.Exception.h

include/Uno.Platform.ClosingEventArgs.h: include/Uno.EventArgs.h

include/Uno.Platform.EventModifiers.h: include/Uno.Int.h

include/Uno.Platform.FrameChangedEventArgs.h: include/Uno.EventArgs.h
include/Uno.Platform.FrameChangedEventArgs.h: include/Uno.Rect.h

include/Uno.Platform.iOS.StatusBarAnimation.h: include/Uno.Int.h

include/Uno.Platform.iOS.StatusBarStyle.h: include/Uno.Int.h

include/Uno.Platform.Key.h: include/Uno.Int.h

include/Uno.Platform.KeyEventArgs.h: include/Uno.EventArgs.h

include/Uno.Platform.MouseButton.h: include/Uno.Int.h

include/Uno.Platform.PointerCursor.h: include/Uno.Int.h

include/Uno.Platform.PointerEventArgs.h: include/Uno.EventArgs.h
include/Uno.Platform.PointerEventArgs.h: include/Uno.Float2.h

include/Uno.Platform.PointerType.h: include/Uno.Int.h

include/Uno.Platform.SystemUI.h: include/Uno.h
include/Uno.Platform.SystemUI.h: include/Uno/Platform2.h

include/Uno.Platform.SystemUIID.h: include/Uno.Int.h

include/Uno.Platform.SystemUIResizeReason.h: include/Uno.Int.h

include/Uno.Platform.SystemUIWillResizeEventArgs.h: include/Uno.EventArgs.h
include/Uno.Platform.SystemUIWillResizeEventArgs.h: include/Uno.Rect.h

include/Uno.Platform.TextInputEventArgs.h: include/Uno.EventArgs.h

include/Uno.Platform.TextInputHint.h: include/Uno.Int.h

include/Uno.Platform.TimerEventArgs.h: include/Uno.EventArgs.h

include/Uno.Platform.ViewNativeHandle.h: include/Uno.Object.h
include/Uno.Platform.ViewNativeHandle.h: include/Uno/Platform2.h

include/Uno.Platform.WheelDeltaMode.h: include/Uno.Int.h

include/Uno.Platform.Window.h: include/Uno.Object.h

include/Uno.Platform2.Application.h: include/Uno.h
include/Uno.Platform2.Application.h: include/Uno/Platform2.h

include/Uno.Platform2.ApplicationState.h: include/Uno.Int.h

include/Uno.Platform2.ApplicationStateTransitionHandler.h: include/Uno.Delegate.h

include/Uno.Platform2.Display.h: include/Uno.Object.h
include/Uno.Platform2.Display.h: include/Uno.Rect.h
include/Uno.Platform2.Display.h: include/Uno/Platform2.h

include/Uno.Platform2.Display.PrivateState.h: include/Uno.Object.h
include/Uno.Platform2.Display.PrivateState.h: include/Uno/Platform2.h

include/Uno.Platform2.Implementation.InvokedFromNativeCodeAttribute.h: include/Uno.Attribute.h

include/Uno.Predicate-1.h: include/Uno.Delegate.h

include/Uno.Quaternion.h: include/Uno.h

include/Uno.Rect.h: include/Uno.Object.h

include/Uno.Recti.h: include/Uno.Object.h

include/Uno.Reflection.CppField.h: include/Uno.Object.h
include/Uno.Reflection.CppField.h: include/Uno.Reflection.IField.h

include/Uno.Reflection.CppFunction.h: include/Uno.Object.h
include/Uno.Reflection.CppFunction.h: include/Uno.Reflection.IFunction.h

include/Uno.Reflection.CppReflection.h: include/Uno.Object.h

include/Uno.Reflection.IField.h: include/Uno.Object.h

include/Uno.Reflection.IFunction.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.ArrayCopyImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.ArraySortImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.BufferImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.ClockImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.DebugImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.GenericEqualsImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.GraphicsContextHandle.h: include/Uno.Object.h
include/Uno.Runtime.Implementation.GraphicsContextHandle.h: include/Uno/GraphicsContext.h

include/Uno.Runtime.Implementation.GraphicsContextImpl.h: include/Uno.h
include/Uno.Runtime.Implementation.GraphicsContextImpl.h: include/Uno/GraphicsContext.h

include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.Internal.ArrayEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Uno.Runtime.Implementation.Internal.ArrayEnumerator-1.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Runtime.Implementation.Internal.ArrayEnumerator-1.h: include/Uno.IDisposable.h
include/Uno.Runtime.Implementation.Internal.ArrayEnumerator-1.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.Internal.ArrayList-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Runtime.Implementation.Internal.ArrayList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Runtime.Implementation.Internal.ArrayList-1.h: include/Uno.Collections.IList-1.h
include/Uno.Runtime.Implementation.Internal.ArrayList-1.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.Internal.BootstrapHints.h: include/Uno.h

include/Uno.Runtime.Implementation.Internal.Bootstrapper.h: include/Uno.h

include/Uno.Runtime.Implementation.Internal.BufferConverters.h: include/Uno.h

include/Uno.Runtime.Implementation.Internal.BufferReader.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.Internal.FormatSpecifier.h: include/Uno.Int.h

include/Uno.Runtime.Implementation.Internal.FormatStringItem.h: include/Uno.Runtime.Implementation.Internal.FormatStringToken.h

include/Uno.Runtime.Implementation.Internal.FormatStringLiteral.h: include/Uno.Runtime.Implementation.Internal.FormatStringToken.h

include/Uno.Runtime.Implementation.Internal.FormatStringToken.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State.h: include/Uno.Int.h

include/Uno.Runtime.Implementation.Internal.NumericFormatter.h: include/Uno.h

include/Uno.Runtime.Implementation.Internal.WindowHelpers.h: include/Uno.h

include/Uno.Runtime.Implementation.PlatformWindowHandle.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.PlatformWindowImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram.h: include/Uno.IDisposable.h
include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLException.h: include/Uno.Exception.h

include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers.h: include/Uno.h

include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop.h: include/Uno.h

include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.TextEncodingImpl.h: include/Uno.h

include/Uno.SByte.h: include/Uno.Object.h

include/Uno.SByte2.h: include/Uno.Object.h

include/Uno.SByte4.h: include/Uno.Object.h

include/Uno.Short.h: include/Uno.Object.h

include/Uno.Short2.h: include/Uno.Object.h

include/Uno.Short4.h: include/Uno.Object.h

include/Uno.String.h: include/Uno.Object.h

include/Uno.Text.Ascii.h: include/Uno.h

include/Uno.Text.Base64.h: include/Uno.h

include/Uno.Text.Decoder.h: include/Uno.Object.h

include/Uno.Text.Encoding.h: include/Uno.Object.h

include/Uno.Text.StringBuilder.h: include/Uno.Object.h

include/Uno.Text.StringBuilderElement.h: include/Uno.Object.h

include/Uno.Text.Utf8.h: include/Uno.h

include/Uno.Text.UTF8Decoder.h: include/Uno.Text.Decoder.h

include/Uno.Text.UTF8Encoding.h: include/Uno.Text.Encoding.h

include/Uno.Threading.ConcurrentQueue-1.h: include/Uno.IDisposable.h
include/Uno.Threading.ConcurrentQueue-1.h: include/Uno.Object.h

include/Uno.Threading.Future.h: include/Uno.Object.h

include/Uno.Threading.Future-1.Closure-1.h: include/Uno.Object.h

include/Uno.Threading.Future-1.h: include/Uno.Threading.Future.h

include/Uno.Threading.FutureState.h: include/Uno.Int.h

include/Uno.Threading.IDispatcher.h: include/Uno.Object.h

include/Uno.Threading.LockGuard.h: include/Uno.IDisposable.h
include/Uno.Threading.LockGuard.h: include/Uno.Object.h

include/Uno.Threading.Mutex.h: include/Uno.IDisposable.h
include/Uno.Threading.Mutex.h: include/Uno.Object.h

include/Uno.Threading.POSIXMutex.h: include/Uno.IDisposable.h
include/Uno.Threading.POSIXMutex.h: include/Uno.Threading.Mutex.h

include/Uno.Threading.POSIXThread.h: include/Uno.Threading.Thread.h

include/Uno.Threading.Promise-1.h: include/Uno.Object.h
include/Uno.Threading.Promise-1.h: include/Uno.Threading.Future-1.h

include/Uno.Threading.SyncDispatcher.h: include/Uno.Object.h
include/Uno.Threading.SyncDispatcher.h: include/Uno.Threading.IDispatcher.h

include/Uno.Threading.Tasks.CancellationToken.h: include/Uno.Object.h

include/Uno.Threading.Tasks.CancellationTokenSource.h: include/Uno.Object.h

include/Uno.Threading.Thread.h: include/Uno.Object.h

include/Uno.Time.Calendars.Era.h: include/Uno.Object.h

include/Uno.Time.Calendars.GregorianYearMonthDayCalculator.h: include/Uno.Time.Calendars.YearMonthDayCalculator.h

include/Uno.Time.Calendars.TimeOfDayCalculator.h: include/Uno.h

include/Uno.Time.Calendars.WeekYearCalculator.h: include/Uno.Object.h

include/Uno.Time.Calendars.YearMonthDayCalculator.h: include/Uno.Object.h
include/Uno.Time.Calendars.YearMonthDayCalculator.h: include/Uno.Time.Instant.h

include/Uno.Time.CalendarSystem.h: include/Uno.Object.h

include/Uno.Time.Converter.h: include/Uno.h

include/Uno.Time.DateTimeZone.h: include/Uno.Object.h
include/Uno.Time.DateTimeZone.h: include/Uno.Time.Offset.h

include/Uno.Time.DeviceTimeZone.h: include/Uno.Time.DateTimeZone.h

include/Uno.Time.Duration.h: include/Uno.Object.h

include/Uno.Time.FixedDateTimeZone.h: include/Uno.Time.DateTimeZone.h
include/Uno.Time.FixedDateTimeZone.h: include/Uno.Time.Offset.h

include/Uno.Time.HashCodeHelper.h: include/Uno.h

include/Uno.Time.Instant.h: include/Uno.Object.h

include/Uno.Time.LocalDate.h: include/Uno.Object.h

include/Uno.Time.LocalDateTime.h: include/Uno.Object.h
include/Uno.Time.LocalDateTime.h: include/Uno.Time.Instant.h

include/Uno.Time.LocalTime.h: include/Uno.Object.h

include/Uno.Time.Offset.h: include/Uno.Object.h

include/Uno.Time.OffsetDateTime.h: include/Uno.Object.h
include/Uno.Time.OffsetDateTime.h: include/Uno.Time.Offset.h

include/Uno.Time.Preconditions.h: include/Uno.h

include/Uno.Time.Text.FixedFormatPattern-1.h: include/Uno.Object.h

include/Uno.Time.Text.IPatternPart-1.h: include/Uno.Object.h

include/Uno.Time.Text.LocalDatePattern.h: include/Uno.Object.h

include/Uno.Time.Text.LocalDatePattern.LocalDateBucket.h: include/Uno.Object.h

include/Uno.Time.Text.LocalDateTimePattern.h: include/Uno.Object.h

include/Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket.h: include/Uno.Object.h

include/Uno.Time.Text.LocalTimePattern.h: include/Uno.Object.h

include/Uno.Time.Text.LocalTimePattern.LocalTimeBucket.h: include/Uno.Object.h

include/Uno.Time.Text.NumberPart-1.h: include/Uno.Int.h
include/Uno.Time.Text.NumberPart-1.h: include/Uno.Object.h
include/Uno.Time.Text.NumberPart-1.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.NumberPart-1.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.Time.Text.OffsetDateTimePattern.h: include/Uno.Object.h

include/Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket.h: include/Uno.Object.h
include/Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket.h: include/Uno.Time.Offset.h

include/Uno.Time.Text.OffsetPattern.h: include/Uno.Object.h

include/Uno.Time.Text.OffsetPattern.OffsetBucket.h: include/Uno.Object.h

include/Uno.Time.Text.OffsetPatternPart-1.h: include/Uno.Object.h
include/Uno.Time.Text.OffsetPatternPart-1.h: include/Uno.Time.Offset.h
include/Uno.Time.Text.OffsetPatternPart-1.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.OffsetPatternPart-1.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.Time.Text.ParseResult-1.h: include/Uno.Object.h

include/Uno.Time.Text.PatternPart-2.h: include/Uno.Object.h
include/Uno.Time.Text.PatternPart-2.h: include/Uno.Time.Text.IPatternPart-1.h

include/Uno.Time.Text.RangeNumberPart-1.h: include/Uno.Int.h
include/Uno.Time.Text.RangeNumberPart-1.h: include/Uno.Object.h
include/Uno.Time.Text.RangeNumberPart-1.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.RangeNumberPart-1.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Char.h
include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Object.h
include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.Time.Text.SignPart-1.h: include/Uno.Int.h
include/Uno.Time.Text.SignPart-1.h: include/Uno.Object.h
include/Uno.Time.Text.SignPart-1.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.SignPart-1.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.Time.ZonedDateTime.h: include/Uno.Object.h
include/Uno.Time.ZonedDateTime.h: include/Uno.Time.Offset.h

include/Uno.Type.h: include/Uno.Object.h

include/Uno.UInt.h: include/Uno.Object.h

include/Uno.ULong.h: include/Uno.Object.h

include/Uno.UShort.h: include/Uno.Object.h

include/Uno.UShort2.h: include/Uno.Object.h

include/Uno.UShort4.h: include/Uno.Object.h

include/Uno.UX.BundleFileSource.h: include/Uno.UX.FileSource.h

include/Uno.UX.Expression-1.h: include/Uno.Delegate.h

include/Uno.UX.FileSource.h: include/Uno.Object.h

include/Uno.UX.IFactory.h: include/Uno.Object.h

include/Uno.UX.ITemplate.h: include/Uno.Object.h

include/Uno.UX.Property-1.h: include/Uno.Object.h

include/Uno.UX.Resource.h: include/Uno.Object.h

include/Uno.UX.StreamExtensions.h: include/Uno.h

include/Uno.UX.Template-1.h: include/Uno.Object.h
include/Uno.UX.Template-1.h: include/Uno.UX.ITemplate.h

include/Uno.UX.UXComponentsAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXConstructorAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXContentAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXFileNameAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXGlobalResourceAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXLineNumberAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXNameAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXPrimaryAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXSourceFileNameAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXValueBindingArgumentAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXValueBindingTargetAttribute.h: include/Uno.Attribute.h

include/Uno.UX.ValueChangedArgs-1.h: include/Uno.EventArgs.h

include/Uno.UX.ValueChangedHandler-1.h: include/Uno.Delegate.h

include/Uno.Vector.h: include/Uno.h

include/Uno.WeakReference-1.h: include/Uno.Object.h

include/Uno.WeakReferenceAttribute.h: include/Uno.Attribute.h



include/Uno/_internal.h: include/Uno/ObjectModel.h
include/Uno/_internal.h: include/Uno/_gc.h


include/Uno/GraphicsContext.h: include/Uno/XliInterop.h

include/Uno/Memory.h: include/Uno/_config.h

include/Uno/ObjectModel.h: include/Uno/Memory.h
include/Uno/ObjectModel.h: include/Uno/Reflection.h

include/Uno/Platform2.h: include/Uno.Rect.h

include/Uno/Reflection.h: include/Uno/Memory.h

include/Uno/Support.h: include/Uno.Int2.h
include/Uno/Support.h: include/Uno.Float2.h

include/Uno/Uno.h: include/Uno.h
include/Uno/Uno.h: include/Uno/Support.h

include/Uno/XliInterop.h: include/Uno/Support.h

libs/$(ABI): | libs
	mkdir libs\$(ABI)

libs:
	mkdir libs

obj:
	mkdir obj

obj/Source/ActivityAndLifecycle: | obj/Source
	mkdir obj\Source\ActivityAndLifecycle

obj/Source: | obj
	mkdir obj\Source

obj/Source/Graphics: | obj/Source
	mkdir obj\Source\Graphics

obj/Uno: | obj
	mkdir obj\Uno
