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
    type->fp_ctor_ = (void*)Vibrate__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Vibrate__Perform_fn;
    type->SetFields(7,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Vibration::Vibrate, _Duration), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Duration", NULL, (void*)Vibrate__get_Duration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Duration", NULL, (void*)Vibrate__set_Duration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction(".ctor", NULL, (void*)Vibrate__New1_fn, 0, true, Vibrate_typeof(), 0));
    return type;
}

// public generated Vibrate() :45
void Vibrate__ctor_1_fn(Vibrate* __this)
{
    __this->ctor_1();
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

// public generated Vibrate New() :45
void Vibrate__New1_fn(Vibrate** __retval)
{
    *__retval = Vibrate::New1();
}

// protected override sealed void Perform(Fuse.Node target) :49
void Vibrate__Perform_fn(Vibrate* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Vibration::Vibration::Vibrate(__this->Duration());
}

// public generated Vibrate() [instance] :45
void Vibrate::ctor_1()
{
    ctor_();
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

// public generated Vibrate New() [static] :45
Vibrate* Vibrate::New1()
{
    Vibrate* obj1 = (Vibrate*)uNew(Vibrate_typeof());
    obj1->ctor_1();
    return obj1;
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
    type->Reflection.SetFunctions(1,
        new uFunction("Vibrate", NULL, (void*)Vibration__Vibrate_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
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
