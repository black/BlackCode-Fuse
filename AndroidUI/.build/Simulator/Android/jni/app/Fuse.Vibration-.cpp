#include <app/Android.android.app.Activity.h>
#include <app/Android.android.content.Context.h>
#include <app/Android.android.os.Vibrator.h>
#include <app/Android.Base.Permissions.h>
#include <app/Android.Base.PlatPermission.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.String.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Vibration.Vibrate.h>
#include <app/Fuse.Vibration.Vibration.h>
#include <app/Uno.Double.h>
#include <app/Uno.Long.h>

namespace app {
namespace Fuse {
namespace Vibration {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Vibration\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Vibrate__uType* Vibrate__typeof()
{
    static ::uStaticStrong<Vibrate__uType*> type;
    if (type != NULL) return type;

    type = (Vibrate__uType*)::uAllocClassType(sizeof(Vibrate__uType), "Fuse.Vibration.Vibrate", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Vibrate__Perform;

    type->SetFunctions(3,
        ::uNewFunction("get_Duration", Vibrate__get_Duration, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction(".ctor", Vibrate__New_1, 0, true, Vibrate__typeof()),
        ::uNewFunctionVoid("set_Duration", Vibrate__set_Duration, 0, false, ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

void Vibrate___ObjInit_1(Vibrate* __this)
{
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);
}

double Vibrate__get_Duration(Vibrate* __this)
{
    return __this->_Duration;
}

Vibrate* Vibrate__New_1(::uStatic* __this)
{
    Vibrate* inst = (Vibrate*)::uAllocObject(sizeof(Vibrate), Vibrate__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Vibrate__Perform(Vibrate* __this, ::app::Fuse::Node* target)
{
    ::app::Fuse::Vibration::Vibration__Vibrate(NULL, __this->Duration());
}

void Vibrate__set_Duration(Vibrate* __this, double value)
{
    __this->_Duration = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Vibration\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Vibration__uType* Vibration__typeof()
{
    static ::uStaticStrong<Vibration__uType*> type;
    if (type != NULL) return type;

    type = (Vibration__uType*)::uAllocClassType(sizeof(Vibration__uType), "Fuse.Vibration.Vibration");

    type->SetFunctions(1,
        ::uNewFunctionVoid("Vibrate", Vibration__Vibrate, 0, true, ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

void Vibration__Vibrate(::uStatic* __this, double seconds)
{
    {
        ::app::Android::Base::Permissions__RequestPermission(NULL, ::app::Android::Base::Permissions__get_VIBRATE(NULL));
        ::app::Android::android::app::Activity* a = ::app::Android::android::app::Activity__GetAppActivity(NULL);
        ::app::Android::android::os::Vibrator* v = ::uCast< ::app::Android::android::os::Vibrator*>(::uPtr< ::app::Android::android::app::Activity*>(a)->getSystemService(::app::Android::android::content::Context__get_VIBRATOR_SERVICE(NULL)), ::app::Android::android::os::Vibrator__typeof());
        ::uPtr< ::app::Android::android::os::Vibrator*>(v)->vibrate((::uLong)(seconds * 1000.0));
    }
}

}}}
