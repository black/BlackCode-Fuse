// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.app.Activity.h>
#include <Android.android.content.Context.h>
#include <Android.android.os.Vibrator.h>
#include <Android.Base.Permissions.h>
#include <Android.Base.PlatPermission.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Fuse.Node.h>
#include <Fuse.Vibration.Vibrate.h>
#include <Fuse.Vibration.Vibration.h>
#include <Uno.Double.h>
#include <Uno.Long.h>
static uType* TYPES[4];

namespace g{
namespace Fuse{
namespace Vibration{

// C:\ProgramData\Uno\Packages\Fuse.Vibration\0.19.3\$.uno(45)
// -----------------------------------------------------------

// public sealed class Vibrate :45
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Vibrate_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Vibrate);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Vibration.Vibrate", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Vibrate__Perform_fn;
    type->SetFields(7,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Vibration::Vibrate, _Duration), 0);
    return type;
}

// public generated double get_Duration() :47
void Vibrate__get_Duration_fn(Vibrate* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public generated void set_Duration(double value) :47
void Vibrate__set_Duration_fn(Vibrate* __this, double* value)
{
    __this->Duration(*value);
}

// protected override sealed void Perform(Fuse.Node target) :49
void Vibrate__Perform_fn(Vibrate* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Vibration::Vibration::Vibrate(__this->Duration());
}

// public generated double get_Duration() [instance] :47
double Vibrate::Duration()
{
    return _Duration;
}

// public generated void set_Duration(double value) [instance] :47
void Vibrate::Duration(double value)
{
    _Duration = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Vibration\0.19.3\$.uno(13)
// -----------------------------------------------------------

// public static class Vibration :13
// {
uClassType* Vibration_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Vibration.Vibration", options);
    ::TYPES[0] = ::g::Android::Base::Permissions_typeof();
    ::TYPES[1] = ::g::Android::android::os::Vibrator_typeof();
    ::TYPES[2] = ::g::Android::android::content::Context_typeof();
    ::TYPES[3] = ::g::Uno::Long_typeof();
    return type;
}

// public static void Vibrate(double seconds) :15
void Vibration__Vibrate_fn(double* seconds)
{
    Vibration::Vibrate(*seconds);
}

// public static void Vibrate(double seconds) [static] :15
void Vibration::Vibrate(double seconds)
{
    ::g::Android::Base::Permissions::RequestPermission(::g::Android::Base::Permissions::VIBRATE());
    ::g::Android::android::app::Activity* a = ::g::Android::android::app::Activity::GetAppActivity();
    ::g::Android::android::os::Vibrator* v = uCast< ::g::Android::android::os::Vibrator*>(uPtr(a)->getSystemService(::g::Android::android::content::Context::VIBRATOR_SERVICE()), ::TYPES[1/*Android.android.os.Vibrator*/]);
    uPtr(v)->vibrate1((int64_t)(seconds * 1000.0));
}
// }

}}} // ::g::Fuse::Vibration
