// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Targets\CPlusPlus\Source\Uno\Platform2.h'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once

#include <Xli/Config.h>

#include <Uno.Rect.h>

#if XLI_PLATFORM_ANDROID
#include "Source/Common/AndroidCommon.h"
#include "Source/Graphics/GLHelper.h"
#include "JNIHelper.h"
#endif

#if XLI_PLATFORM_IOS
#if __OBJC__
#define uOBJC_CLASS @class
#else
#define uOBJC_CLASS struct
#endif

uOBJC_CLASS CADisplayLink;
uOBJC_CLASS UIView;
uOBJC_CLASS UIWindow;

#endif

namespace g{namespace Uno{namespace Platform2{struct Display;}}}

namespace uPlatform2
{
#if XLI_PLATFORM_ANDROID
    typedef ::jobject ViewNativeHandle;
#elif XLI_PLATFORM_IOS
    typedef ::UIView* ViewNativeHandle;
#endif

//#if !#{Uno.Platform2.Application:IsStripped}
    //
    // Uno.Platform2.Application
    //
    struct Application
    {
        static ViewNativeHandle GetRootView();
        static void SetRootView(ViewNativeHandle viewHandle);

        static bool GetIsStatusBarVisible();
        static void SetStatusBarVisible(bool visible);
        static void EnterFullscreen();
        static void Quit();

        static ::g::Uno::Rect GetStatusBarFrame();
    };
//#endif // !Uno.Platform2.Application:IsStripped

//#if !#{Uno.Platform2.Display:IsStripped}
    //
    // Uno.Platform2.Display
    //
    struct Display
    {
        typedef ::g::Uno::Platform2::Display* UnoDisplay;

        Display()
        {
            // Platform-specific initialization in Initialize()!
        }

    private:
        // Non-copyable
        Display(Display const &);
        void operator =(Display);

    public:
        void Destroy(UnoDisplay unoDisplay);
        void Initialize(UnoDisplay unoDisplay);

        void InitializeAsMainDisplay(UnoDisplay unoDisplay);

        void ResetGeometry(UnoDisplay unoDisplay);

        void SetFramesPerSecond(UnoDisplay unoDisplay, unsigned fps);

        void EnableTickNotifications(UnoDisplay unoDisplay);
        void DisableTickNotifications(UnoDisplay unoDisplay);

#if XLI_PLATFORM_IOS
        void SetNativeWindow(UnoDisplay unoDisplay, UIWindow *window_);

    private:
        UIWindow *window;
        CADisplayLink *displayLink;
#endif
    };
//#endif // !Uno.Platform2.Display:IsStripped

}
