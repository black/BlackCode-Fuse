#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.JNI_RefType.h>
#include <app/Android.Base.Permissions.h>
#include <app/Android.Base.PlatPermission.h>
#include <app/Android.Base.Primitives.ConstCharPtr.h>
#include <app/Android.Base.Primitives.JavaVMPtr.h>
#include <app/Android.Base.Primitives.jfieldID.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.JNIEnvPtr.h>
#include <app/Android.Base.Primitives.ujboolean.h>
#include <app/Android.Base.Primitives.ujbyte.h>
#include <app/Android.Base.Primitives.ujchar.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujdouble.h>
#include <app/Android.Base.Primitives.ujfloat.h>
#include <app/Android.Base.Primitives.ujint.h>
#include <app/Android.Base.Primitives.ujlong.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Primitives.ujshort.h>
#include <app/Android.Base.Primitives.ujstring.h>
#include <app/Android.Base.Primitives.ujvalue.h>
#include <app/Android.Base.Types.String.h>
#include <app/Android.Base.Versions.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.SByte.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace Base {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AndroidBindingMacros__uType* AndroidBindingMacros__typeof()
{
    static ::uStaticStrong<AndroidBindingMacros__uType*> type;
    if (type != NULL) return type;

    type = (AndroidBindingMacros__uType*)::uAllocClassType(sizeof(AndroidBindingMacros__uType), "Android.Base.AndroidBindingMacros");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID JNI___getUnoRefMid;
jclass JNI___helperCls;
bool JNI___inited;
::uStaticStrong< ::app::Android::Base::Wrappers::JWrapper*> JNI___rootActivityWrapped;
jmethodID JNI__Activity_getClassLoader;
jmethodID JNI__ClassLoader_loadClass;
jclass JNI__exceptionClass;

JNI__uType* JNI__typeof()
{
    static ::uStaticStrong<JNI__uType*> type;
    if (type != NULL) return type;

    type = (JNI__uType*)::uAllocClassType(sizeof(JNI__uType), "Android.Base.JNI");

    type->SetFields(7,
        ::uNewField("_getUnoRefMid", &JNI___getUnoRefMid, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("_helperCls", &JNI___helperCls, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("_inited", &JNI___inited, 0, ::app::Uno::Bool__typeof()),
        ::uNewField("_rootActivityWrapped", &JNI___rootActivityWrapped, 0, ::app::Android::Base::Wrappers::JWrapper__typeof()),
        ::uNewField("Activity_getClassLoader", &JNI__Activity_getClassLoader, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("ClassLoader_loadClass", &JNI__ClassLoader_loadClass, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("exceptionClass", &JNI__exceptionClass, 0, ::app::Android::Base::Primitives::ujclass__typeof()));

    type->SetFunctions(457,
        ::uNewFunction("CallBooleanMethod", JNI__CallBooleanMethod, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallBooleanMethod", JNI__CallBooleanMethod_1, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallBooleanMethod", JNI__CallBooleanMethod_10, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallBooleanMethod", JNI__CallBooleanMethod_11, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallBooleanMethod", JNI__CallBooleanMethod_2, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallBooleanMethod", JNI__CallBooleanMethod_3, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallBooleanMethod", JNI__CallBooleanMethod_4, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallBooleanMethod", JNI__CallBooleanMethod_5, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallBooleanMethod", JNI__CallBooleanMethod_6, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallBooleanMethod", JNI__CallBooleanMethod_7, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallBooleanMethod", JNI__CallBooleanMethod_8, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallBooleanMethod", JNI__CallBooleanMethod_9, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallByteMethod", JNI__CallByteMethod, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallByteMethod", JNI__CallByteMethod_1, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallByteMethod", JNI__CallByteMethod_10, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallByteMethod", JNI__CallByteMethod_11, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallByteMethod", JNI__CallByteMethod_2, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallByteMethod", JNI__CallByteMethod_3, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallByteMethod", JNI__CallByteMethod_4, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallByteMethod", JNI__CallByteMethod_5, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallByteMethod", JNI__CallByteMethod_6, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallByteMethod", JNI__CallByteMethod_7, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallByteMethod", JNI__CallByteMethod_8, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallByteMethod", JNI__CallByteMethod_9, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallCharMethod", JNI__CallCharMethod, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallCharMethod", JNI__CallCharMethod_1, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallCharMethod", JNI__CallCharMethod_10, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallCharMethod", JNI__CallCharMethod_11, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallCharMethod", JNI__CallCharMethod_2, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallCharMethod", JNI__CallCharMethod_3, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallCharMethod", JNI__CallCharMethod_4, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallCharMethod", JNI__CallCharMethod_5, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallCharMethod", JNI__CallCharMethod_6, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallCharMethod", JNI__CallCharMethod_7, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallCharMethod", JNI__CallCharMethod_8, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallCharMethod", JNI__CallCharMethod_9, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallDoubleMethod", JNI__CallDoubleMethod, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallDoubleMethod", JNI__CallDoubleMethod_1, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallDoubleMethod", JNI__CallDoubleMethod_10, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallDoubleMethod", JNI__CallDoubleMethod_11, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallDoubleMethod", JNI__CallDoubleMethod_2, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallDoubleMethod", JNI__CallDoubleMethod_3, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallDoubleMethod", JNI__CallDoubleMethod_4, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallDoubleMethod", JNI__CallDoubleMethod_5, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallDoubleMethod", JNI__CallDoubleMethod_6, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallDoubleMethod", JNI__CallDoubleMethod_7, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallDoubleMethod", JNI__CallDoubleMethod_8, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallDoubleMethod", JNI__CallDoubleMethod_9, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallFloatMethod", JNI__CallFloatMethod, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallFloatMethod", JNI__CallFloatMethod_1, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallFloatMethod", JNI__CallFloatMethod_10, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallFloatMethod", JNI__CallFloatMethod_11, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallFloatMethod", JNI__CallFloatMethod_2, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallFloatMethod", JNI__CallFloatMethod_3, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallFloatMethod", JNI__CallFloatMethod_4, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallFloatMethod", JNI__CallFloatMethod_5, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallFloatMethod", JNI__CallFloatMethod_6, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallFloatMethod", JNI__CallFloatMethod_7, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallFloatMethod", JNI__CallFloatMethod_8, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallFloatMethod", JNI__CallFloatMethod_9, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallIntMethod", JNI__CallIntMethod, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallIntMethod", JNI__CallIntMethod_1, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallIntMethod", JNI__CallIntMethod_10, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallIntMethod", JNI__CallIntMethod_11, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallIntMethod", JNI__CallIntMethod_2, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallIntMethod", JNI__CallIntMethod_3, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallIntMethod", JNI__CallIntMethod_4, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallIntMethod", JNI__CallIntMethod_5, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallIntMethod", JNI__CallIntMethod_6, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallIntMethod", JNI__CallIntMethod_7, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallIntMethod", JNI__CallIntMethod_8, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallIntMethod", JNI__CallIntMethod_9, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallLongMethod", JNI__CallLongMethod, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallLongMethod", JNI__CallLongMethod_1, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallLongMethod", JNI__CallLongMethod_10, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallLongMethod", JNI__CallLongMethod_11, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallLongMethod", JNI__CallLongMethod_2, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallLongMethod", JNI__CallLongMethod_3, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallLongMethod", JNI__CallLongMethod_4, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallLongMethod", JNI__CallLongMethod_5, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallLongMethod", JNI__CallLongMethod_6, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallLongMethod", JNI__CallLongMethod_7, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallLongMethod", JNI__CallLongMethod_8, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallLongMethod", JNI__CallLongMethod_9, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualBooleanMethod", JNI__CallNonvirtualBooleanMethod, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallNonvirtualBooleanMethod", JNI__CallNonvirtualBooleanMethod_1, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualBooleanMethod", JNI__CallNonvirtualBooleanMethod_10, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualBooleanMethod", JNI__CallNonvirtualBooleanMethod_11, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualBooleanMethod", JNI__CallNonvirtualBooleanMethod_2, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualBooleanMethod", JNI__CallNonvirtualBooleanMethod_3, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualBooleanMethod", JNI__CallNonvirtualBooleanMethod_4, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualBooleanMethod", JNI__CallNonvirtualBooleanMethod_5, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualBooleanMethod", JNI__CallNonvirtualBooleanMethod_6, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualBooleanMethod", JNI__CallNonvirtualBooleanMethod_7, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualBooleanMethod", JNI__CallNonvirtualBooleanMethod_8, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualBooleanMethod", JNI__CallNonvirtualBooleanMethod_9, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualByteMethod", JNI__CallNonvirtualByteMethod, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallNonvirtualByteMethod", JNI__CallNonvirtualByteMethod_1, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualByteMethod", JNI__CallNonvirtualByteMethod_10, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualByteMethod", JNI__CallNonvirtualByteMethod_11, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualByteMethod", JNI__CallNonvirtualByteMethod_2, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualByteMethod", JNI__CallNonvirtualByteMethod_3, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualByteMethod", JNI__CallNonvirtualByteMethod_4, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualByteMethod", JNI__CallNonvirtualByteMethod_5, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualByteMethod", JNI__CallNonvirtualByteMethod_6, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualByteMethod", JNI__CallNonvirtualByteMethod_7, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualByteMethod", JNI__CallNonvirtualByteMethod_8, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualByteMethod", JNI__CallNonvirtualByteMethod_9, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualCharMethod", JNI__CallNonvirtualCharMethod, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallNonvirtualCharMethod", JNI__CallNonvirtualCharMethod_1, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualCharMethod", JNI__CallNonvirtualCharMethod_10, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualCharMethod", JNI__CallNonvirtualCharMethod_11, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualCharMethod", JNI__CallNonvirtualCharMethod_2, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualCharMethod", JNI__CallNonvirtualCharMethod_3, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualCharMethod", JNI__CallNonvirtualCharMethod_4, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualCharMethod", JNI__CallNonvirtualCharMethod_5, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualCharMethod", JNI__CallNonvirtualCharMethod_6, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualCharMethod", JNI__CallNonvirtualCharMethod_7, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualCharMethod", JNI__CallNonvirtualCharMethod_8, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualCharMethod", JNI__CallNonvirtualCharMethod_9, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualDoubleMethod", JNI__CallNonvirtualDoubleMethod, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallNonvirtualDoubleMethod", JNI__CallNonvirtualDoubleMethod_1, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualDoubleMethod", JNI__CallNonvirtualDoubleMethod_10, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualDoubleMethod", JNI__CallNonvirtualDoubleMethod_11, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualDoubleMethod", JNI__CallNonvirtualDoubleMethod_2, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualDoubleMethod", JNI__CallNonvirtualDoubleMethod_3, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualDoubleMethod", JNI__CallNonvirtualDoubleMethod_4, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualDoubleMethod", JNI__CallNonvirtualDoubleMethod_5, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualDoubleMethod", JNI__CallNonvirtualDoubleMethod_6, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualDoubleMethod", JNI__CallNonvirtualDoubleMethod_7, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualDoubleMethod", JNI__CallNonvirtualDoubleMethod_8, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualDoubleMethod", JNI__CallNonvirtualDoubleMethod_9, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualFloatMethod", JNI__CallNonvirtualFloatMethod, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallNonvirtualFloatMethod", JNI__CallNonvirtualFloatMethod_1, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualFloatMethod", JNI__CallNonvirtualFloatMethod_10, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualFloatMethod", JNI__CallNonvirtualFloatMethod_11, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualFloatMethod", JNI__CallNonvirtualFloatMethod_2, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualFloatMethod", JNI__CallNonvirtualFloatMethod_3, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualFloatMethod", JNI__CallNonvirtualFloatMethod_4, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualFloatMethod", JNI__CallNonvirtualFloatMethod_5, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualFloatMethod", JNI__CallNonvirtualFloatMethod_6, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualFloatMethod", JNI__CallNonvirtualFloatMethod_7, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualFloatMethod", JNI__CallNonvirtualFloatMethod_8, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualFloatMethod", JNI__CallNonvirtualFloatMethod_9, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualIntMethod", JNI__CallNonvirtualIntMethod, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallNonvirtualIntMethod", JNI__CallNonvirtualIntMethod_1, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualIntMethod", JNI__CallNonvirtualIntMethod_10, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualIntMethod", JNI__CallNonvirtualIntMethod_11, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualIntMethod", JNI__CallNonvirtualIntMethod_2, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualIntMethod", JNI__CallNonvirtualIntMethod_3, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualIntMethod", JNI__CallNonvirtualIntMethod_4, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualIntMethod", JNI__CallNonvirtualIntMethod_5, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualIntMethod", JNI__CallNonvirtualIntMethod_6, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualIntMethod", JNI__CallNonvirtualIntMethod_7, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualIntMethod", JNI__CallNonvirtualIntMethod_8, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualIntMethod", JNI__CallNonvirtualIntMethod_9, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualLongMethod", JNI__CallNonvirtualLongMethod, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallNonvirtualLongMethod", JNI__CallNonvirtualLongMethod_1, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualLongMethod", JNI__CallNonvirtualLongMethod_10, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualLongMethod", JNI__CallNonvirtualLongMethod_11, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualLongMethod", JNI__CallNonvirtualLongMethod_2, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualLongMethod", JNI__CallNonvirtualLongMethod_3, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualLongMethod", JNI__CallNonvirtualLongMethod_4, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualLongMethod", JNI__CallNonvirtualLongMethod_5, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualLongMethod", JNI__CallNonvirtualLongMethod_6, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualLongMethod", JNI__CallNonvirtualLongMethod_7, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualLongMethod", JNI__CallNonvirtualLongMethod_8, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualLongMethod", JNI__CallNonvirtualLongMethod_9, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualObjectMethod", JNI__CallNonvirtualObjectMethod, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallNonvirtualObjectMethod", JNI__CallNonvirtualObjectMethod_1, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualObjectMethod", JNI__CallNonvirtualObjectMethod_10, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualObjectMethod", JNI__CallNonvirtualObjectMethod_11, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualObjectMethod", JNI__CallNonvirtualObjectMethod_2, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualObjectMethod", JNI__CallNonvirtualObjectMethod_3, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualObjectMethod", JNI__CallNonvirtualObjectMethod_4, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualObjectMethod", JNI__CallNonvirtualObjectMethod_5, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualObjectMethod", JNI__CallNonvirtualObjectMethod_6, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualObjectMethod", JNI__CallNonvirtualObjectMethod_7, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualObjectMethod", JNI__CallNonvirtualObjectMethod_8, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualObjectMethod", JNI__CallNonvirtualObjectMethod_9, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualShortMethod", JNI__CallNonvirtualShortMethod, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallNonvirtualShortMethod", JNI__CallNonvirtualShortMethod_1, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualShortMethod", JNI__CallNonvirtualShortMethod_10, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualShortMethod", JNI__CallNonvirtualShortMethod_11, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualShortMethod", JNI__CallNonvirtualShortMethod_2, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualShortMethod", JNI__CallNonvirtualShortMethod_3, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualShortMethod", JNI__CallNonvirtualShortMethod_4, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualShortMethod", JNI__CallNonvirtualShortMethod_5, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualShortMethod", JNI__CallNonvirtualShortMethod_6, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualShortMethod", JNI__CallNonvirtualShortMethod_7, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualShortMethod", JNI__CallNonvirtualShortMethod_8, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallNonvirtualShortMethod", JNI__CallNonvirtualShortMethod_9, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallNonvirtualVoidMethod", JNI__CallNonvirtualVoidMethod, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunctionVoid("CallNonvirtualVoidMethod", JNI__CallNonvirtualVoidMethod_1, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallNonvirtualVoidMethod", JNI__CallNonvirtualVoidMethod_10, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallNonvirtualVoidMethod", JNI__CallNonvirtualVoidMethod_11, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallNonvirtualVoidMethod", JNI__CallNonvirtualVoidMethod_2, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallNonvirtualVoidMethod", JNI__CallNonvirtualVoidMethod_3, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallNonvirtualVoidMethod", JNI__CallNonvirtualVoidMethod_4, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallNonvirtualVoidMethod", JNI__CallNonvirtualVoidMethod_5, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallNonvirtualVoidMethod", JNI__CallNonvirtualVoidMethod_6, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallNonvirtualVoidMethod", JNI__CallNonvirtualVoidMethod_7, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallNonvirtualVoidMethod", JNI__CallNonvirtualVoidMethod_8, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallNonvirtualVoidMethod", JNI__CallNonvirtualVoidMethod_9, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallObjectMethod", JNI__CallObjectMethod, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallObjectMethod", JNI__CallObjectMethod_1, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallObjectMethod", JNI__CallObjectMethod_10, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallObjectMethod", JNI__CallObjectMethod_11, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallObjectMethod", JNI__CallObjectMethod_2, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallObjectMethod", JNI__CallObjectMethod_3, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallObjectMethod", JNI__CallObjectMethod_4, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallObjectMethod", JNI__CallObjectMethod_5, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallObjectMethod", JNI__CallObjectMethod_6, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallObjectMethod", JNI__CallObjectMethod_7, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallObjectMethod", JNI__CallObjectMethod_8, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallObjectMethod", JNI__CallObjectMethod_9, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallShortMethod", JNI__CallShortMethod, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallShortMethod", JNI__CallShortMethod_1, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallShortMethod", JNI__CallShortMethod_10, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallShortMethod", JNI__CallShortMethod_11, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallShortMethod", JNI__CallShortMethod_2, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallShortMethod", JNI__CallShortMethod_3, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallShortMethod", JNI__CallShortMethod_4, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallShortMethod", JNI__CallShortMethod_5, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallShortMethod", JNI__CallShortMethod_6, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallShortMethod", JNI__CallShortMethod_7, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallShortMethod", JNI__CallShortMethod_8, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallShortMethod", JNI__CallShortMethod_9, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticBooleanMethod", JNI__CallStaticBooleanMethod, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallStaticBooleanMethod", JNI__CallStaticBooleanMethod_1, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticBooleanMethod", JNI__CallStaticBooleanMethod_10, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticBooleanMethod", JNI__CallStaticBooleanMethod_11, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticBooleanMethod", JNI__CallStaticBooleanMethod_2, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticBooleanMethod", JNI__CallStaticBooleanMethod_3, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticBooleanMethod", JNI__CallStaticBooleanMethod_4, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticBooleanMethod", JNI__CallStaticBooleanMethod_5, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticBooleanMethod", JNI__CallStaticBooleanMethod_6, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticBooleanMethod", JNI__CallStaticBooleanMethod_7, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticBooleanMethod", JNI__CallStaticBooleanMethod_8, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticBooleanMethod", JNI__CallStaticBooleanMethod_9, 0, true, ::app::Android::Base::Primitives::ujboolean__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticByteMethod", JNI__CallStaticByteMethod, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallStaticByteMethod", JNI__CallStaticByteMethod_1, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticByteMethod", JNI__CallStaticByteMethod_10, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticByteMethod", JNI__CallStaticByteMethod_11, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticByteMethod", JNI__CallStaticByteMethod_2, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticByteMethod", JNI__CallStaticByteMethod_3, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticByteMethod", JNI__CallStaticByteMethod_4, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticByteMethod", JNI__CallStaticByteMethod_5, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticByteMethod", JNI__CallStaticByteMethod_6, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticByteMethod", JNI__CallStaticByteMethod_7, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticByteMethod", JNI__CallStaticByteMethod_8, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticByteMethod", JNI__CallStaticByteMethod_9, 0, true, ::app::Android::Base::Primitives::ujbyte__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticCharMethod", JNI__CallStaticCharMethod, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallStaticCharMethod", JNI__CallStaticCharMethod_1, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticCharMethod", JNI__CallStaticCharMethod_10, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticCharMethod", JNI__CallStaticCharMethod_11, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticCharMethod", JNI__CallStaticCharMethod_2, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticCharMethod", JNI__CallStaticCharMethod_3, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticCharMethod", JNI__CallStaticCharMethod_4, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticCharMethod", JNI__CallStaticCharMethod_5, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticCharMethod", JNI__CallStaticCharMethod_6, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticCharMethod", JNI__CallStaticCharMethod_7, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticCharMethod", JNI__CallStaticCharMethod_8, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticCharMethod", JNI__CallStaticCharMethod_9, 0, true, ::app::Android::Base::Primitives::ujchar__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticDoubleMethod", JNI__CallStaticDoubleMethod, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallStaticDoubleMethod", JNI__CallStaticDoubleMethod_1, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticDoubleMethod", JNI__CallStaticDoubleMethod_10, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticDoubleMethod", JNI__CallStaticDoubleMethod_11, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticDoubleMethod", JNI__CallStaticDoubleMethod_2, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticDoubleMethod", JNI__CallStaticDoubleMethod_3, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticDoubleMethod", JNI__CallStaticDoubleMethod_4, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticDoubleMethod", JNI__CallStaticDoubleMethod_5, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticDoubleMethod", JNI__CallStaticDoubleMethod_6, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticDoubleMethod", JNI__CallStaticDoubleMethod_7, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticDoubleMethod", JNI__CallStaticDoubleMethod_8, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticDoubleMethod", JNI__CallStaticDoubleMethod_9, 0, true, ::app::Android::Base::Primitives::ujdouble__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticFloatMethod", JNI__CallStaticFloatMethod, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallStaticFloatMethod", JNI__CallStaticFloatMethod_1, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticFloatMethod", JNI__CallStaticFloatMethod_10, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticFloatMethod", JNI__CallStaticFloatMethod_11, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticFloatMethod", JNI__CallStaticFloatMethod_2, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticFloatMethod", JNI__CallStaticFloatMethod_3, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticFloatMethod", JNI__CallStaticFloatMethod_4, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticFloatMethod", JNI__CallStaticFloatMethod_5, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticFloatMethod", JNI__CallStaticFloatMethod_6, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticFloatMethod", JNI__CallStaticFloatMethod_7, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticFloatMethod", JNI__CallStaticFloatMethod_8, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticFloatMethod", JNI__CallStaticFloatMethod_9, 0, true, ::app::Android::Base::Primitives::ujfloat__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticIntMethod", JNI__CallStaticIntMethod, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallStaticIntMethod", JNI__CallStaticIntMethod_1, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticIntMethod", JNI__CallStaticIntMethod_10, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticIntMethod", JNI__CallStaticIntMethod_11, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticIntMethod", JNI__CallStaticIntMethod_2, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticIntMethod", JNI__CallStaticIntMethod_3, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticIntMethod", JNI__CallStaticIntMethod_4, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticIntMethod", JNI__CallStaticIntMethod_5, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticIntMethod", JNI__CallStaticIntMethod_6, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticIntMethod", JNI__CallStaticIntMethod_7, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticIntMethod", JNI__CallStaticIntMethod_8, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticIntMethod", JNI__CallStaticIntMethod_9, 0, true, ::app::Android::Base::Primitives::ujint__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticLongMethod", JNI__CallStaticLongMethod, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallStaticLongMethod", JNI__CallStaticLongMethod_1, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticLongMethod", JNI__CallStaticLongMethod_10, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticLongMethod", JNI__CallStaticLongMethod_11, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticLongMethod", JNI__CallStaticLongMethod_2, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticLongMethod", JNI__CallStaticLongMethod_3, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticLongMethod", JNI__CallStaticLongMethod_4, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticLongMethod", JNI__CallStaticLongMethod_5, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticLongMethod", JNI__CallStaticLongMethod_6, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticLongMethod", JNI__CallStaticLongMethod_7, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticLongMethod", JNI__CallStaticLongMethod_8, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticLongMethod", JNI__CallStaticLongMethod_9, 0, true, ::app::Android::Base::Primitives::ujlong__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticObjectMethod", JNI__CallStaticObjectMethod, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallStaticObjectMethod", JNI__CallStaticObjectMethod_1, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticObjectMethod", JNI__CallStaticObjectMethod_10, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticObjectMethod", JNI__CallStaticObjectMethod_11, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticObjectMethod", JNI__CallStaticObjectMethod_2, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticObjectMethod", JNI__CallStaticObjectMethod_3, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticObjectMethod", JNI__CallStaticObjectMethod_4, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticObjectMethod", JNI__CallStaticObjectMethod_5, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticObjectMethod", JNI__CallStaticObjectMethod_6, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticObjectMethod", JNI__CallStaticObjectMethod_7, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticObjectMethod", JNI__CallStaticObjectMethod_8, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticObjectMethod", JNI__CallStaticObjectMethod_9, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticShortMethod", JNI__CallStaticShortMethod, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("CallStaticShortMethod", JNI__CallStaticShortMethod_1, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticShortMethod", JNI__CallStaticShortMethod_10, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticShortMethod", JNI__CallStaticShortMethod_11, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticShortMethod", JNI__CallStaticShortMethod_2, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticShortMethod", JNI__CallStaticShortMethod_3, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticShortMethod", JNI__CallStaticShortMethod_4, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticShortMethod", JNI__CallStaticShortMethod_5, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticShortMethod", JNI__CallStaticShortMethod_6, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticShortMethod", JNI__CallStaticShortMethod_7, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticShortMethod", JNI__CallStaticShortMethod_8, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("CallStaticShortMethod", JNI__CallStaticShortMethod_9, 0, true, ::app::Android::Base::Primitives::ujshort__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallStaticVoidMethod", JNI__CallStaticVoidMethod, 0, true, ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunctionVoid("CallStaticVoidMethod", JNI__CallStaticVoidMethod_1, 0, true, ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallStaticVoidMethod", JNI__CallStaticVoidMethod_10, 0, true, ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallStaticVoidMethod", JNI__CallStaticVoidMethod_11, 0, true, ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallStaticVoidMethod", JNI__CallStaticVoidMethod_2, 0, true, ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallStaticVoidMethod", JNI__CallStaticVoidMethod_3, 0, true, ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallStaticVoidMethod", JNI__CallStaticVoidMethod_4, 0, true, ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallStaticVoidMethod", JNI__CallStaticVoidMethod_5, 0, true, ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallStaticVoidMethod", JNI__CallStaticVoidMethod_6, 0, true, ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallStaticVoidMethod", JNI__CallStaticVoidMethod_7, 0, true, ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallStaticVoidMethod", JNI__CallStaticVoidMethod_8, 0, true, ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallStaticVoidMethod", JNI__CallStaticVoidMethod_9, 0, true, ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallVoidMethod", JNI__CallVoidMethod, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunctionVoid("CallVoidMethod", JNI__CallVoidMethod_1, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallVoidMethod", JNI__CallVoidMethod_10, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallVoidMethod", JNI__CallVoidMethod_11, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallVoidMethod", JNI__CallVoidMethod_2, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallVoidMethod", JNI__CallVoidMethod_3, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallVoidMethod", JNI__CallVoidMethod_4, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallVoidMethod", JNI__CallVoidMethod_5, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallVoidMethod", JNI__CallVoidMethod_6, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallVoidMethod", JNI__CallVoidMethod_7, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallVoidMethod", JNI__CallVoidMethod_8, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CallVoidMethod", JNI__CallVoidMethod_9, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunctionVoid("CheckException", JNI__CheckException, 0, true),
        ::uNewFunctionVoid("CheckException", JNI__CheckException_1, 0, true, ::app::Android::Base::Primitives::JNIEnvPtr__typeof()),
        ::uNewFunctionVoid("CheckException", JNI__CheckException_2, 0, true, ::app::Android::Base::Primitives::JNIEnvPtr__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("DeleteGlobalRef", JNI__DeleteGlobalRef, 0, true, ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("DeleteLocalRef", JNI__DeleteLocalRef, 0, true, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewFunctionVoid("DeleteLocalRef", JNI__DeleteLocalRef_1, 0, true, ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("DeleteLocalRef", JNI__DeleteLocalRef_2, 0, true, ::app::Android::Base::Primitives::ujstring__typeof()),
        ::uNewFunctionVoid("DeleteWeakGlobalRef", JNI__DeleteWeakGlobalRef, 0, true, ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("GetActivityClass", JNI__GetActivityClass, 0, true, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewFunction("GetActivityObject", JNI__GetActivityObject, 0, true, ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("GetArrayLength", JNI__GetArrayLength, 0, true, ::app::Uno::Int__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("GetBooleanArrayElement", JNI__GetBooleanArrayElement, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetBooleanField", JNI__GetBooleanField, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetByteArrayElement", JNI__GetByteArrayElement, 0, true, ::app::Uno::SByte__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetByteField", JNI__GetByteField, 0, true, ::app::Uno::SByte__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetCharArrayElement", JNI__GetCharArrayElement, 0, true, ::app::Uno::Char__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetCharField", JNI__GetCharField, 0, true, ::app::Uno::Char__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetDefaultObject", JNI__GetDefaultObject, 0, true, ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("GetDefaultType", JNI__GetDefaultType, 0, true, ::uType__typeof()),
        ::uNewFunction("GetDoubleArrayElement", JNI__GetDoubleArrayElement, 0, true, ::app::Uno::Double__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetDoubleField", JNI__GetDoubleField, 0, true, ::app::Uno::Double__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetEnvPtr", JNI__GetEnvPtr, 0, true, ::app::Android::Base::Primitives::JNIEnvPtr__typeof()),
        ::uNewFunction("GetFieldID", JNI__GetFieldID, 0, true, ::app::Android::Base::Primitives::jfieldID__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("GetFloatArrayElement", JNI__GetFloatArrayElement, 0, true, ::app::Uno::Float__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetFloatField", JNI__GetFloatField, 0, true, ::app::Uno::Float__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetIntArrayElement", JNI__GetIntArrayElement, 0, true, ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetIntField", JNI__GetIntField, 0, true, ::app::Uno::Int__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetLongArrayElement", JNI__GetLongArrayElement, 0, true, ::app::Uno::Long__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetLongField", JNI__GetLongField, 0, true, ::app::Uno::Long__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetMethodID", JNI__GetMethodID, 0, true, ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("GetObjectArrayElement", JNI__GetObjectArrayElement, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetObjectField", JNI__GetObjectField, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetObjectFieldWrapped", JNI__GetObjectFieldWrapped, 0, true, ::app::Android::Base::Wrappers::JWrapper__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetRefType", JNI__GetRefType, 0, true, ::app::Android::Base::JNI_RefType__typeof(), ::app::Android::Base::Primitives::JNIEnvPtr__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("GetRefType", JNI__GetRefType_1, 0, true, ::app::Android::Base::JNI_RefType__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("GetShortArrayElement", JNI__GetShortArrayElement, 0, true, ::app::Uno::Short__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetShortField", JNI__GetShortField, 0, true, ::app::Uno::Short__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetStaticBooleanField", JNI__GetStaticBooleanField, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetStaticByteField", JNI__GetStaticByteField, 0, true, ::app::Uno::SByte__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetStaticCharField", JNI__GetStaticCharField, 0, true, ::app::Uno::Char__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetStaticDoubleField", JNI__GetStaticDoubleField, 0, true, ::app::Uno::Double__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetStaticFieldID", JNI__GetStaticFieldID, 0, true, ::app::Android::Base::Primitives::jfieldID__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("GetStaticFloatField", JNI__GetStaticFloatField, 0, true, ::app::Uno::Float__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetStaticIntField", JNI__GetStaticIntField, 0, true, ::app::Uno::Int__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetStaticLongField", JNI__GetStaticLongField, 0, true, ::app::Uno::Long__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetStaticMethodID", JNI__GetStaticMethodID, 0, true, ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("GetStaticObjectField", JNI__GetStaticObjectField, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetStaticObjectFieldWrapped", JNI__GetStaticObjectFieldWrapped, 0, true, ::app::Android::Base::Wrappers::JWrapper__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetStaticShortField", JNI__GetStaticShortField, 0, true, ::app::Uno::Short__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewFunction("GetUnoRef", JNI__GetUnoRef, 0, true, ::app::Uno::Long__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("GetVM", JNI__GetVM, 0, true, ::app::Android::Base::Primitives::JavaVMPtr__typeof()),
        ::uNewFunction("GetWrappedActivityObject", JNI__GetWrappedActivityObject, 0, true, ::app::Android::Base::Wrappers::JWrapper__typeof()),
        ::uNewFunctionVoid("Init", JNI__Init, 0, true),
        ::uNewFunction("IsSameObject", JNI__IsSameObject, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("LoadClass", JNI__LoadClass, 0, true, ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::JNIEnvPtr__typeof(), ::app::Android::Base::Primitives::ConstCharPtr__typeof()),
        ::uNewFunction("LoadClass", JNI__LoadClass_1, 0, true, ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::JNIEnvPtr__typeof(), ::app::Android::Base::Primitives::ConstCharPtr__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("LoadClass", JNI__LoadClass_2, 0, true, ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::JNIEnvPtr__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("LoadClass", JNI__LoadClass_3, 0, true, ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("LocalToGlobalRef", JNI__LocalToGlobalRef, 0, true, ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewFunction("LocalToGlobalRef", JNI__LocalToGlobalRef_1, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("LocalToGlobalRef", JNI__LocalToGlobalRef_2, 0, true, ::app::Android::Base::Primitives::ujstring__typeof(), ::app::Android::Base::Primitives::ujstring__typeof()),
        ::uNewFunction("NewBooleanArray", JNI__NewBooleanArray, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("NewByteArray", JNI__NewByteArray, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("NewCharArray", JNI__NewCharArray, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("NewDoubleArray", JNI__NewDoubleArray, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("NewFloatArray", JNI__NewFloatArray, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("NewGlobalRef", JNI__NewGlobalRef, 0, true, ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewFunction("NewGlobalRef", JNI__NewGlobalRef_1, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("NewGlobalRef", JNI__NewGlobalRef_2, 0, true, ::app::Android::Base::Primitives::ujstring__typeof(), ::app::Android::Base::Primitives::ujstring__typeof()),
        ::uNewFunction("NewIntArray", JNI__NewIntArray, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("NewLongArray", JNI__NewLongArray, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("NewObject", JNI__NewObject, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewFunction("NewObject", JNI__NewObject_1, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("NewObject", JNI__NewObject_10, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("NewObject", JNI__NewObject_11, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("NewObject", JNI__NewObject_2, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("NewObject", JNI__NewObject_3, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("NewObject", JNI__NewObject_4, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("NewObject", JNI__NewObject_5, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("NewObject", JNI__NewObject_6, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("NewObject", JNI__NewObject_7, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("NewObject", JNI__NewObject_8, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("NewObject", JNI__NewObject_9, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Android::Base::Primitives::jmethodID__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof(), ::app::Android::Base::Primitives::ujvalue__typeof()),
        ::uNewFunction("NewObjectArray", JNI__NewObjectArray, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujclass__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("NewShortArray", JNI__NewShortArray, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("NewWeakGlobalRef", JNI__NewWeakGlobalRef, 0, true, ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("SetBooleanArrayElement", JNI__SetBooleanArrayElement, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SetByteArrayElement", JNI__SetByteArrayElement, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::SByte__typeof()),
        ::uNewFunctionVoid("SetCharArrayElement", JNI__SetCharArrayElement, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunctionVoid("SetDoubleArrayElement", JNI__SetDoubleArrayElement, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("SetFloatArrayElement", JNI__SetFloatArrayElement, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("SetIntArrayElement", JNI__SetIntArrayElement, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("SetLongArrayElement", JNI__SetLongArrayElement, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunctionVoid("SetObjectArrayElement", JNI__SetObjectArrayElement, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("SetShortArrayElement", JNI__SetShortArrayElement, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Short__typeof()),
        ::uNewFunctionVoid("ThrowNewException", JNI__ThrowNewException, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunction("TryGetException", JNI__TryGetException, 0, true, ::app::Uno::Exception__typeof(), ::app::Android::Base::Primitives::JNIEnvPtr__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

jboolean JNI__CallBooleanMethod(::uStatic* __this, jobject obj, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallBooleanMethod(obj,mtd);
}

jboolean JNI__CallBooleanMethod_1(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallBooleanMethod(obj,mtd,arg0);
}

jboolean JNI__CallBooleanMethod_10(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallBooleanMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jboolean JNI__CallBooleanMethod_11(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallBooleanMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

jboolean JNI__CallBooleanMethod_2(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallBooleanMethod(obj,mtd,arg0,arg1);
}

jboolean JNI__CallBooleanMethod_3(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallBooleanMethod(obj,mtd,arg0,arg1,arg2);
}

jboolean JNI__CallBooleanMethod_4(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallBooleanMethod(obj,mtd,arg0,arg1,arg2,arg3);
}

jboolean JNI__CallBooleanMethod_5(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallBooleanMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4);
}

jboolean JNI__CallBooleanMethod_6(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallBooleanMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jboolean JNI__CallBooleanMethod_7(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallBooleanMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jboolean JNI__CallBooleanMethod_8(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallBooleanMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jboolean JNI__CallBooleanMethod_9(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallBooleanMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jbyte JNI__CallByteMethod(::uStatic* __this, jobject obj, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallByteMethod(obj,mtd);
}

jbyte JNI__CallByteMethod_1(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallByteMethod(obj,mtd,arg0);
}

jbyte JNI__CallByteMethod_10(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallByteMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jbyte JNI__CallByteMethod_11(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallByteMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

jbyte JNI__CallByteMethod_2(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallByteMethod(obj,mtd,arg0,arg1);
}

jbyte JNI__CallByteMethod_3(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallByteMethod(obj,mtd,arg0,arg1,arg2);
}

jbyte JNI__CallByteMethod_4(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallByteMethod(obj,mtd,arg0,arg1,arg2,arg3);
}

jbyte JNI__CallByteMethod_5(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallByteMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4);
}

jbyte JNI__CallByteMethod_6(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallByteMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jbyte JNI__CallByteMethod_7(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallByteMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jbyte JNI__CallByteMethod_8(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallByteMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jbyte JNI__CallByteMethod_9(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallByteMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jchar JNI__CallCharMethod(::uStatic* __this, jobject obj, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallCharMethod(obj,mtd);
}

jchar JNI__CallCharMethod_1(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallCharMethod(obj,mtd,arg0);
}

jchar JNI__CallCharMethod_10(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallCharMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jchar JNI__CallCharMethod_11(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallCharMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

jchar JNI__CallCharMethod_2(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallCharMethod(obj,mtd,arg0,arg1);
}

jchar JNI__CallCharMethod_3(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallCharMethod(obj,mtd,arg0,arg1,arg2);
}

jchar JNI__CallCharMethod_4(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallCharMethod(obj,mtd,arg0,arg1,arg2,arg3);
}

jchar JNI__CallCharMethod_5(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallCharMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4);
}

jchar JNI__CallCharMethod_6(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallCharMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jchar JNI__CallCharMethod_7(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallCharMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jchar JNI__CallCharMethod_8(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallCharMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jchar JNI__CallCharMethod_9(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallCharMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jdouble JNI__CallDoubleMethod(::uStatic* __this, jobject obj, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallDoubleMethod(obj,mtd);
}

jdouble JNI__CallDoubleMethod_1(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallDoubleMethod(obj,mtd,arg0);
}

jdouble JNI__CallDoubleMethod_10(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallDoubleMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jdouble JNI__CallDoubleMethod_11(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallDoubleMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

jdouble JNI__CallDoubleMethod_2(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallDoubleMethod(obj,mtd,arg0,arg1);
}

jdouble JNI__CallDoubleMethod_3(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallDoubleMethod(obj,mtd,arg0,arg1,arg2);
}

jdouble JNI__CallDoubleMethod_4(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallDoubleMethod(obj,mtd,arg0,arg1,arg2,arg3);
}

jdouble JNI__CallDoubleMethod_5(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallDoubleMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4);
}

jdouble JNI__CallDoubleMethod_6(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallDoubleMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jdouble JNI__CallDoubleMethod_7(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallDoubleMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jdouble JNI__CallDoubleMethod_8(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallDoubleMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jdouble JNI__CallDoubleMethod_9(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallDoubleMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jfloat JNI__CallFloatMethod(::uStatic* __this, jobject obj, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallFloatMethod(obj,mtd);
}

jfloat JNI__CallFloatMethod_1(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallFloatMethod(obj,mtd,arg0);
}

jfloat JNI__CallFloatMethod_10(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallFloatMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jfloat JNI__CallFloatMethod_11(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallFloatMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

jfloat JNI__CallFloatMethod_2(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallFloatMethod(obj,mtd,arg0,arg1);
}

jfloat JNI__CallFloatMethod_3(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallFloatMethod(obj,mtd,arg0,arg1,arg2);
}

jfloat JNI__CallFloatMethod_4(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallFloatMethod(obj,mtd,arg0,arg1,arg2,arg3);
}

jfloat JNI__CallFloatMethod_5(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallFloatMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4);
}

jfloat JNI__CallFloatMethod_6(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallFloatMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jfloat JNI__CallFloatMethod_7(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallFloatMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jfloat JNI__CallFloatMethod_8(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallFloatMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jfloat JNI__CallFloatMethod_9(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallFloatMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jint JNI__CallIntMethod(::uStatic* __this, jobject obj, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallIntMethod(obj,mtd);
}

jint JNI__CallIntMethod_1(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallIntMethod(obj,mtd,arg0);
}

jint JNI__CallIntMethod_10(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallIntMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jint JNI__CallIntMethod_11(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallIntMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

jint JNI__CallIntMethod_2(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallIntMethod(obj,mtd,arg0,arg1);
}

jint JNI__CallIntMethod_3(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallIntMethod(obj,mtd,arg0,arg1,arg2);
}

jint JNI__CallIntMethod_4(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallIntMethod(obj,mtd,arg0,arg1,arg2,arg3);
}

jint JNI__CallIntMethod_5(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallIntMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4);
}

jint JNI__CallIntMethod_6(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallIntMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jint JNI__CallIntMethod_7(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallIntMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jint JNI__CallIntMethod_8(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallIntMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jint JNI__CallIntMethod_9(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallIntMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jlong JNI__CallLongMethod(::uStatic* __this, jobject obj, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallLongMethod(obj,mtd);
}

jlong JNI__CallLongMethod_1(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallLongMethod(obj,mtd,arg0);
}

jlong JNI__CallLongMethod_10(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallLongMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jlong JNI__CallLongMethod_11(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallLongMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

jlong JNI__CallLongMethod_2(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallLongMethod(obj,mtd,arg0,arg1);
}

jlong JNI__CallLongMethod_3(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallLongMethod(obj,mtd,arg0,arg1,arg2);
}

jlong JNI__CallLongMethod_4(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallLongMethod(obj,mtd,arg0,arg1,arg2,arg3);
}

jlong JNI__CallLongMethod_5(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallLongMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4);
}

jlong JNI__CallLongMethod_6(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallLongMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jlong JNI__CallLongMethod_7(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallLongMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jlong JNI__CallLongMethod_8(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallLongMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jlong JNI__CallLongMethod_9(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallLongMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jboolean JNI__CallNonvirtualBooleanMethod(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualBooleanMethod(obj,cls,mtd);
}

jboolean JNI__CallNonvirtualBooleanMethod_1(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualBooleanMethod(obj,cls,mtd,arg0);
}

jboolean JNI__CallNonvirtualBooleanMethod_10(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualBooleanMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jboolean JNI__CallNonvirtualBooleanMethod_11(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualBooleanMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg9);
}

jboolean JNI__CallNonvirtualBooleanMethod_2(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualBooleanMethod(obj,cls,mtd,arg0,arg1);
}

jboolean JNI__CallNonvirtualBooleanMethod_3(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualBooleanMethod(obj,cls,mtd,arg0,arg1,arg2);
}

jboolean JNI__CallNonvirtualBooleanMethod_4(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualBooleanMethod(obj,cls,mtd,arg0,arg1,arg2,arg3);
}

jboolean JNI__CallNonvirtualBooleanMethod_5(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualBooleanMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

jboolean JNI__CallNonvirtualBooleanMethod_6(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualBooleanMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jboolean JNI__CallNonvirtualBooleanMethod_7(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualBooleanMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jboolean JNI__CallNonvirtualBooleanMethod_8(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualBooleanMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jboolean JNI__CallNonvirtualBooleanMethod_9(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualBooleanMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jbyte JNI__CallNonvirtualByteMethod(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualByteMethod(obj,cls,mtd);
}

jbyte JNI__CallNonvirtualByteMethod_1(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualByteMethod(obj,cls,mtd,arg0);
}

jbyte JNI__CallNonvirtualByteMethod_10(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualByteMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jbyte JNI__CallNonvirtualByteMethod_11(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualByteMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg9);
}

jbyte JNI__CallNonvirtualByteMethod_2(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualByteMethod(obj,cls,mtd,arg0,arg1);
}

jbyte JNI__CallNonvirtualByteMethod_3(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualByteMethod(obj,cls,mtd,arg0,arg1,arg2);
}

jbyte JNI__CallNonvirtualByteMethod_4(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualByteMethod(obj,cls,mtd,arg0,arg1,arg2,arg3);
}

jbyte JNI__CallNonvirtualByteMethod_5(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualByteMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

jbyte JNI__CallNonvirtualByteMethod_6(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualByteMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jbyte JNI__CallNonvirtualByteMethod_7(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualByteMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jbyte JNI__CallNonvirtualByteMethod_8(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualByteMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jbyte JNI__CallNonvirtualByteMethod_9(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualByteMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jchar JNI__CallNonvirtualCharMethod(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualCharMethod(obj,cls,mtd);
}

jchar JNI__CallNonvirtualCharMethod_1(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualCharMethod(obj,cls,mtd,arg0);
}

jchar JNI__CallNonvirtualCharMethod_10(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualCharMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jchar JNI__CallNonvirtualCharMethod_11(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualCharMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg9);
}

jchar JNI__CallNonvirtualCharMethod_2(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualCharMethod(obj,cls,mtd,arg0,arg1);
}

jchar JNI__CallNonvirtualCharMethod_3(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualCharMethod(obj,cls,mtd,arg0,arg1,arg2);
}

jchar JNI__CallNonvirtualCharMethod_4(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualCharMethod(obj,cls,mtd,arg0,arg1,arg2,arg3);
}

jchar JNI__CallNonvirtualCharMethod_5(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualCharMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

jchar JNI__CallNonvirtualCharMethod_6(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualCharMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jchar JNI__CallNonvirtualCharMethod_7(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualCharMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jchar JNI__CallNonvirtualCharMethod_8(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualCharMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jchar JNI__CallNonvirtualCharMethod_9(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualCharMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jdouble JNI__CallNonvirtualDoubleMethod(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualDoubleMethod(obj,cls,mtd);
}

jdouble JNI__CallNonvirtualDoubleMethod_1(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualDoubleMethod(obj,cls,mtd,arg0);
}

jdouble JNI__CallNonvirtualDoubleMethod_10(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualDoubleMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jdouble JNI__CallNonvirtualDoubleMethod_11(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualDoubleMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg9);
}

jdouble JNI__CallNonvirtualDoubleMethod_2(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualDoubleMethod(obj,cls,mtd,arg0,arg1);
}

jdouble JNI__CallNonvirtualDoubleMethod_3(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualDoubleMethod(obj,cls,mtd,arg0,arg1,arg2);
}

jdouble JNI__CallNonvirtualDoubleMethod_4(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualDoubleMethod(obj,cls,mtd,arg0,arg1,arg2,arg3);
}

jdouble JNI__CallNonvirtualDoubleMethod_5(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualDoubleMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

jdouble JNI__CallNonvirtualDoubleMethod_6(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualDoubleMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jdouble JNI__CallNonvirtualDoubleMethod_7(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualDoubleMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jdouble JNI__CallNonvirtualDoubleMethod_8(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualDoubleMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jdouble JNI__CallNonvirtualDoubleMethod_9(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualDoubleMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jfloat JNI__CallNonvirtualFloatMethod(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualFloatMethod(obj,cls,mtd);
}

jfloat JNI__CallNonvirtualFloatMethod_1(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualFloatMethod(obj,cls,mtd,arg0);
}

jfloat JNI__CallNonvirtualFloatMethod_10(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualFloatMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jfloat JNI__CallNonvirtualFloatMethod_11(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualFloatMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg9);
}

jfloat JNI__CallNonvirtualFloatMethod_2(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualFloatMethod(obj,cls,mtd,arg0,arg1);
}

jfloat JNI__CallNonvirtualFloatMethod_3(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualFloatMethod(obj,cls,mtd,arg0,arg1,arg2);
}

jfloat JNI__CallNonvirtualFloatMethod_4(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualFloatMethod(obj,cls,mtd,arg0,arg1,arg2,arg3);
}

jfloat JNI__CallNonvirtualFloatMethod_5(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualFloatMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

jfloat JNI__CallNonvirtualFloatMethod_6(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualFloatMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jfloat JNI__CallNonvirtualFloatMethod_7(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualFloatMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jfloat JNI__CallNonvirtualFloatMethod_8(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualFloatMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jfloat JNI__CallNonvirtualFloatMethod_9(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualFloatMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jint JNI__CallNonvirtualIntMethod(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualIntMethod(obj,cls,mtd);
}

jint JNI__CallNonvirtualIntMethod_1(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualIntMethod(obj,cls,mtd,arg0);
}

jint JNI__CallNonvirtualIntMethod_10(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualIntMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jint JNI__CallNonvirtualIntMethod_11(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualIntMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg9);
}

jint JNI__CallNonvirtualIntMethod_2(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualIntMethod(obj,cls,mtd,arg0,arg1);
}

jint JNI__CallNonvirtualIntMethod_3(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualIntMethod(obj,cls,mtd,arg0,arg1,arg2);
}

jint JNI__CallNonvirtualIntMethod_4(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualIntMethod(obj,cls,mtd,arg0,arg1,arg2,arg3);
}

jint JNI__CallNonvirtualIntMethod_5(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualIntMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

jint JNI__CallNonvirtualIntMethod_6(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualIntMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jint JNI__CallNonvirtualIntMethod_7(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualIntMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jint JNI__CallNonvirtualIntMethod_8(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualIntMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jint JNI__CallNonvirtualIntMethod_9(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualIntMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jlong JNI__CallNonvirtualLongMethod(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualLongMethod(obj,cls,mtd);
}

jlong JNI__CallNonvirtualLongMethod_1(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualLongMethod(obj,cls,mtd,arg0);
}

jlong JNI__CallNonvirtualLongMethod_10(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualLongMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jlong JNI__CallNonvirtualLongMethod_11(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualLongMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg9);
}

jlong JNI__CallNonvirtualLongMethod_2(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualLongMethod(obj,cls,mtd,arg0,arg1);
}

jlong JNI__CallNonvirtualLongMethod_3(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualLongMethod(obj,cls,mtd,arg0,arg1,arg2);
}

jlong JNI__CallNonvirtualLongMethod_4(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualLongMethod(obj,cls,mtd,arg0,arg1,arg2,arg3);
}

jlong JNI__CallNonvirtualLongMethod_5(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualLongMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

jlong JNI__CallNonvirtualLongMethod_6(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualLongMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jlong JNI__CallNonvirtualLongMethod_7(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualLongMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jlong JNI__CallNonvirtualLongMethod_8(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualLongMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jlong JNI__CallNonvirtualLongMethod_9(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualLongMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jobject JNI__CallNonvirtualObjectMethod(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualObjectMethod(obj,cls,mtd);
}

jobject JNI__CallNonvirtualObjectMethod_1(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualObjectMethod(obj,cls,mtd,arg0);
}

jobject JNI__CallNonvirtualObjectMethod_10(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualObjectMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jobject JNI__CallNonvirtualObjectMethod_11(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualObjectMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg9);
}

jobject JNI__CallNonvirtualObjectMethod_2(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualObjectMethod(obj,cls,mtd,arg0,arg1);
}

jobject JNI__CallNonvirtualObjectMethod_3(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualObjectMethod(obj,cls,mtd,arg0,arg1,arg2);
}

jobject JNI__CallNonvirtualObjectMethod_4(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualObjectMethod(obj,cls,mtd,arg0,arg1,arg2,arg3);
}

jobject JNI__CallNonvirtualObjectMethod_5(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualObjectMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

jobject JNI__CallNonvirtualObjectMethod_6(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualObjectMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jobject JNI__CallNonvirtualObjectMethod_7(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualObjectMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jobject JNI__CallNonvirtualObjectMethod_8(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualObjectMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jobject JNI__CallNonvirtualObjectMethod_9(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualObjectMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jshort JNI__CallNonvirtualShortMethod(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualShortMethod(obj,cls,mtd);
}

jshort JNI__CallNonvirtualShortMethod_1(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualShortMethod(obj,cls,mtd,arg0);
}

jshort JNI__CallNonvirtualShortMethod_10(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualShortMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jshort JNI__CallNonvirtualShortMethod_11(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualShortMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg9);
}

jshort JNI__CallNonvirtualShortMethod_2(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualShortMethod(obj,cls,mtd,arg0,arg1);
}

jshort JNI__CallNonvirtualShortMethod_3(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualShortMethod(obj,cls,mtd,arg0,arg1,arg2);
}

jshort JNI__CallNonvirtualShortMethod_4(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualShortMethod(obj,cls,mtd,arg0,arg1,arg2,arg3);
}

jshort JNI__CallNonvirtualShortMethod_5(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualShortMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

jshort JNI__CallNonvirtualShortMethod_6(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualShortMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jshort JNI__CallNonvirtualShortMethod_7(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualShortMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jshort JNI__CallNonvirtualShortMethod_8(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualShortMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jshort JNI__CallNonvirtualShortMethod_9(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallNonvirtualShortMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

void JNI__CallNonvirtualVoidMethod(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd)
{
    JNI__GetEnvPtr(NULL)->CallNonvirtualVoidMethod(obj,cls,mtd);
}

void JNI__CallNonvirtualVoidMethod_1(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0)
{
    JNI__GetEnvPtr(NULL)->CallNonvirtualVoidMethod(obj,cls,mtd,arg0);
}

void JNI__CallNonvirtualVoidMethod_10(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    JNI__GetEnvPtr(NULL)->CallNonvirtualVoidMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

void JNI__CallNonvirtualVoidMethod_11(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    JNI__GetEnvPtr(NULL)->CallNonvirtualVoidMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg9);
}

void JNI__CallNonvirtualVoidMethod_2(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    JNI__GetEnvPtr(NULL)->CallNonvirtualVoidMethod(obj,cls,mtd,arg0,arg1);
}

void JNI__CallNonvirtualVoidMethod_3(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    JNI__GetEnvPtr(NULL)->CallNonvirtualVoidMethod(obj,cls,mtd,arg0,arg1,arg2);
}

void JNI__CallNonvirtualVoidMethod_4(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    JNI__GetEnvPtr(NULL)->CallNonvirtualVoidMethod(obj,cls,mtd,arg0,arg1,arg2,arg3);
}

void JNI__CallNonvirtualVoidMethod_5(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    JNI__GetEnvPtr(NULL)->CallNonvirtualVoidMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

void JNI__CallNonvirtualVoidMethod_6(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    JNI__GetEnvPtr(NULL)->CallNonvirtualVoidMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

void JNI__CallNonvirtualVoidMethod_7(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    JNI__GetEnvPtr(NULL)->CallNonvirtualVoidMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

void JNI__CallNonvirtualVoidMethod_8(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    JNI__GetEnvPtr(NULL)->CallNonvirtualVoidMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

void JNI__CallNonvirtualVoidMethod_9(::uStatic* __this, jobject obj, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    JNI__GetEnvPtr(NULL)->CallNonvirtualVoidMethod(obj,cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jobject JNI__CallObjectMethod(::uStatic* __this, jobject obj, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallObjectMethod(obj,mtd);
}

jobject JNI__CallObjectMethod_1(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallObjectMethod(obj,mtd,arg0);
}

jobject JNI__CallObjectMethod_10(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallObjectMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jobject JNI__CallObjectMethod_11(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallObjectMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

jobject JNI__CallObjectMethod_2(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallObjectMethod(obj,mtd,arg0,arg1);
}

jobject JNI__CallObjectMethod_3(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallObjectMethod(obj,mtd,arg0,arg1,arg2);
}

jobject JNI__CallObjectMethod_4(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallObjectMethod(obj,mtd,arg0,arg1,arg2,arg3);
}

jobject JNI__CallObjectMethod_5(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallObjectMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4);
}

jobject JNI__CallObjectMethod_6(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallObjectMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jobject JNI__CallObjectMethod_7(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallObjectMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jobject JNI__CallObjectMethod_8(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallObjectMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jobject JNI__CallObjectMethod_9(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallObjectMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jshort JNI__CallShortMethod(::uStatic* __this, jobject obj, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallShortMethod(obj,mtd);
}

jshort JNI__CallShortMethod_1(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallShortMethod(obj,mtd,arg0);
}

jshort JNI__CallShortMethod_10(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallShortMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jshort JNI__CallShortMethod_11(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallShortMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

jshort JNI__CallShortMethod_2(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallShortMethod(obj,mtd,arg0,arg1);
}

jshort JNI__CallShortMethod_3(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallShortMethod(obj,mtd,arg0,arg1,arg2);
}

jshort JNI__CallShortMethod_4(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallShortMethod(obj,mtd,arg0,arg1,arg2,arg3);
}

jshort JNI__CallShortMethod_5(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallShortMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4);
}

jshort JNI__CallShortMethod_6(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallShortMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jshort JNI__CallShortMethod_7(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallShortMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jshort JNI__CallShortMethod_8(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallShortMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jshort JNI__CallShortMethod_9(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallShortMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jboolean JNI__CallStaticBooleanMethod(::uStatic* __this, jclass cls, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallStaticBooleanMethod(cls,mtd);
}

jboolean JNI__CallStaticBooleanMethod_1(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallStaticBooleanMethod(cls,mtd,arg0);
}

jboolean JNI__CallStaticBooleanMethod_10(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallStaticBooleanMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jboolean JNI__CallStaticBooleanMethod_11(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallStaticBooleanMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

jboolean JNI__CallStaticBooleanMethod_2(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallStaticBooleanMethod(cls,mtd,arg0,arg1);
}

jboolean JNI__CallStaticBooleanMethod_3(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallStaticBooleanMethod(cls,mtd,arg0,arg1,arg2);
}

jboolean JNI__CallStaticBooleanMethod_4(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallStaticBooleanMethod(cls,mtd,arg0,arg1,arg2,arg3);
}

jboolean JNI__CallStaticBooleanMethod_5(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallStaticBooleanMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

jboolean JNI__CallStaticBooleanMethod_6(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallStaticBooleanMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jboolean JNI__CallStaticBooleanMethod_7(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallStaticBooleanMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jboolean JNI__CallStaticBooleanMethod_8(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallStaticBooleanMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jboolean JNI__CallStaticBooleanMethod_9(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallStaticBooleanMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jbyte JNI__CallStaticByteMethod(::uStatic* __this, jclass cls, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallStaticByteMethod(cls,mtd);
}

jbyte JNI__CallStaticByteMethod_1(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallStaticByteMethod(cls,mtd,arg0);
}

jbyte JNI__CallStaticByteMethod_10(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallStaticByteMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jbyte JNI__CallStaticByteMethod_11(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallStaticByteMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

jbyte JNI__CallStaticByteMethod_2(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallStaticByteMethod(cls,mtd,arg0,arg1);
}

jbyte JNI__CallStaticByteMethod_3(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallStaticByteMethod(cls,mtd,arg0,arg1,arg2);
}

jbyte JNI__CallStaticByteMethod_4(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallStaticByteMethod(cls,mtd,arg0,arg1,arg2,arg3);
}

jbyte JNI__CallStaticByteMethod_5(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallStaticByteMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

jbyte JNI__CallStaticByteMethod_6(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallStaticByteMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jbyte JNI__CallStaticByteMethod_7(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallStaticByteMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jbyte JNI__CallStaticByteMethod_8(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallStaticByteMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jbyte JNI__CallStaticByteMethod_9(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallStaticByteMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jchar JNI__CallStaticCharMethod(::uStatic* __this, jclass cls, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallStaticCharMethod(cls,mtd);
}

jchar JNI__CallStaticCharMethod_1(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallStaticCharMethod(cls,mtd,arg0);
}

jchar JNI__CallStaticCharMethod_10(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallStaticCharMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jchar JNI__CallStaticCharMethod_11(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallStaticCharMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

jchar JNI__CallStaticCharMethod_2(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallStaticCharMethod(cls,mtd,arg0,arg1);
}

jchar JNI__CallStaticCharMethod_3(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallStaticCharMethod(cls,mtd,arg0,arg1,arg2);
}

jchar JNI__CallStaticCharMethod_4(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallStaticCharMethod(cls,mtd,arg0,arg1,arg2,arg3);
}

jchar JNI__CallStaticCharMethod_5(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallStaticCharMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

jchar JNI__CallStaticCharMethod_6(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallStaticCharMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jchar JNI__CallStaticCharMethod_7(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallStaticCharMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jchar JNI__CallStaticCharMethod_8(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallStaticCharMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jchar JNI__CallStaticCharMethod_9(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallStaticCharMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jdouble JNI__CallStaticDoubleMethod(::uStatic* __this, jclass cls, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallStaticDoubleMethod(cls,mtd);
}

jdouble JNI__CallStaticDoubleMethod_1(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallStaticDoubleMethod(cls,mtd,arg0);
}

jdouble JNI__CallStaticDoubleMethod_10(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallStaticDoubleMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jdouble JNI__CallStaticDoubleMethod_11(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallStaticDoubleMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

jdouble JNI__CallStaticDoubleMethod_2(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallStaticDoubleMethod(cls,mtd,arg0,arg1);
}

jdouble JNI__CallStaticDoubleMethod_3(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallStaticDoubleMethod(cls,mtd,arg0,arg1,arg2);
}

jdouble JNI__CallStaticDoubleMethod_4(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallStaticDoubleMethod(cls,mtd,arg0,arg1,arg2,arg3);
}

jdouble JNI__CallStaticDoubleMethod_5(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallStaticDoubleMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

jdouble JNI__CallStaticDoubleMethod_6(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallStaticDoubleMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jdouble JNI__CallStaticDoubleMethod_7(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallStaticDoubleMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jdouble JNI__CallStaticDoubleMethod_8(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallStaticDoubleMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jdouble JNI__CallStaticDoubleMethod_9(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallStaticDoubleMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jfloat JNI__CallStaticFloatMethod(::uStatic* __this, jclass cls, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallStaticFloatMethod(cls,mtd);
}

jfloat JNI__CallStaticFloatMethod_1(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallStaticFloatMethod(cls,mtd,arg0);
}

jfloat JNI__CallStaticFloatMethod_10(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallStaticFloatMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jfloat JNI__CallStaticFloatMethod_11(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallStaticFloatMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

jfloat JNI__CallStaticFloatMethod_2(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallStaticFloatMethod(cls,mtd,arg0,arg1);
}

jfloat JNI__CallStaticFloatMethod_3(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallStaticFloatMethod(cls,mtd,arg0,arg1,arg2);
}

jfloat JNI__CallStaticFloatMethod_4(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallStaticFloatMethod(cls,mtd,arg0,arg1,arg2,arg3);
}

jfloat JNI__CallStaticFloatMethod_5(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallStaticFloatMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

jfloat JNI__CallStaticFloatMethod_6(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallStaticFloatMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jfloat JNI__CallStaticFloatMethod_7(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallStaticFloatMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jfloat JNI__CallStaticFloatMethod_8(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallStaticFloatMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jfloat JNI__CallStaticFloatMethod_9(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallStaticFloatMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jint JNI__CallStaticIntMethod(::uStatic* __this, jclass cls, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallStaticIntMethod(cls,mtd);
}

jint JNI__CallStaticIntMethod_1(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallStaticIntMethod(cls,mtd,arg0);
}

jint JNI__CallStaticIntMethod_10(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallStaticIntMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jint JNI__CallStaticIntMethod_11(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallStaticIntMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

jint JNI__CallStaticIntMethod_2(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallStaticIntMethod(cls,mtd,arg0,arg1);
}

jint JNI__CallStaticIntMethod_3(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallStaticIntMethod(cls,mtd,arg0,arg1,arg2);
}

jint JNI__CallStaticIntMethod_4(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallStaticIntMethod(cls,mtd,arg0,arg1,arg2,arg3);
}

jint JNI__CallStaticIntMethod_5(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallStaticIntMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

jint JNI__CallStaticIntMethod_6(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallStaticIntMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jint JNI__CallStaticIntMethod_7(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallStaticIntMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jint JNI__CallStaticIntMethod_8(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallStaticIntMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jint JNI__CallStaticIntMethod_9(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallStaticIntMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jlong JNI__CallStaticLongMethod(::uStatic* __this, jclass cls, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallStaticLongMethod(cls,mtd);
}

jlong JNI__CallStaticLongMethod_1(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallStaticLongMethod(cls,mtd,arg0);
}

jlong JNI__CallStaticLongMethod_10(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallStaticLongMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jlong JNI__CallStaticLongMethod_11(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallStaticLongMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

jlong JNI__CallStaticLongMethod_2(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallStaticLongMethod(cls,mtd,arg0,arg1);
}

jlong JNI__CallStaticLongMethod_3(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallStaticLongMethod(cls,mtd,arg0,arg1,arg2);
}

jlong JNI__CallStaticLongMethod_4(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallStaticLongMethod(cls,mtd,arg0,arg1,arg2,arg3);
}

jlong JNI__CallStaticLongMethod_5(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallStaticLongMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

jlong JNI__CallStaticLongMethod_6(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallStaticLongMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jlong JNI__CallStaticLongMethod_7(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallStaticLongMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jlong JNI__CallStaticLongMethod_8(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallStaticLongMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jlong JNI__CallStaticLongMethod_9(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallStaticLongMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jobject JNI__CallStaticObjectMethod(::uStatic* __this, jclass cls, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallStaticObjectMethod(cls,mtd);
}

jobject JNI__CallStaticObjectMethod_1(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallStaticObjectMethod(cls,mtd,arg0);
}

jobject JNI__CallStaticObjectMethod_10(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallStaticObjectMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jobject JNI__CallStaticObjectMethod_11(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallStaticObjectMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

jobject JNI__CallStaticObjectMethod_2(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallStaticObjectMethod(cls,mtd,arg0,arg1);
}

jobject JNI__CallStaticObjectMethod_3(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallStaticObjectMethod(cls,mtd,arg0,arg1,arg2);
}

jobject JNI__CallStaticObjectMethod_4(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallStaticObjectMethod(cls,mtd,arg0,arg1,arg2,arg3);
}

jobject JNI__CallStaticObjectMethod_5(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallStaticObjectMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

jobject JNI__CallStaticObjectMethod_6(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallStaticObjectMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jobject JNI__CallStaticObjectMethod_7(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallStaticObjectMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jobject JNI__CallStaticObjectMethod_8(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallStaticObjectMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jobject JNI__CallStaticObjectMethod_9(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallStaticObjectMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jshort JNI__CallStaticShortMethod(::uStatic* __this, jclass cls, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->CallStaticShortMethod(cls,mtd);
}

jshort JNI__CallStaticShortMethod_1(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->CallStaticShortMethod(cls,mtd,arg0);
}

jshort JNI__CallStaticShortMethod_10(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->CallStaticShortMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jshort JNI__CallStaticShortMethod_11(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->CallStaticShortMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

jshort JNI__CallStaticShortMethod_2(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->CallStaticShortMethod(cls,mtd,arg0,arg1);
}

jshort JNI__CallStaticShortMethod_3(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->CallStaticShortMethod(cls,mtd,arg0,arg1,arg2);
}

jshort JNI__CallStaticShortMethod_4(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->CallStaticShortMethod(cls,mtd,arg0,arg1,arg2,arg3);
}

jshort JNI__CallStaticShortMethod_5(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->CallStaticShortMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

jshort JNI__CallStaticShortMethod_6(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->CallStaticShortMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jshort JNI__CallStaticShortMethod_7(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->CallStaticShortMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jshort JNI__CallStaticShortMethod_8(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->CallStaticShortMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jshort JNI__CallStaticShortMethod_9(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->CallStaticShortMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

void JNI__CallStaticVoidMethod(::uStatic* __this, jclass cls, jmethodID mtd)
{
    JNI__GetEnvPtr(NULL)->CallStaticVoidMethod(cls,mtd);
}

void JNI__CallStaticVoidMethod_1(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0)
{
    JNI__GetEnvPtr(NULL)->CallStaticVoidMethod(cls,mtd,arg0);
}

void JNI__CallStaticVoidMethod_10(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    JNI__GetEnvPtr(NULL)->CallStaticVoidMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

void JNI__CallStaticVoidMethod_11(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    JNI__GetEnvPtr(NULL)->CallStaticVoidMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

void JNI__CallStaticVoidMethod_2(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    JNI__GetEnvPtr(NULL)->CallStaticVoidMethod(cls,mtd,arg0,arg1);
}

void JNI__CallStaticVoidMethod_3(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    JNI__GetEnvPtr(NULL)->CallStaticVoidMethod(cls,mtd,arg0,arg1,arg2);
}

void JNI__CallStaticVoidMethod_4(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    JNI__GetEnvPtr(NULL)->CallStaticVoidMethod(cls,mtd,arg0,arg1,arg2,arg3);
}

void JNI__CallStaticVoidMethod_5(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    JNI__GetEnvPtr(NULL)->CallStaticVoidMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

void JNI__CallStaticVoidMethod_6(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    JNI__GetEnvPtr(NULL)->CallStaticVoidMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

void JNI__CallStaticVoidMethod_7(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    JNI__GetEnvPtr(NULL)->CallStaticVoidMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

void JNI__CallStaticVoidMethod_8(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    JNI__GetEnvPtr(NULL)->CallStaticVoidMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

void JNI__CallStaticVoidMethod_9(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    JNI__GetEnvPtr(NULL)->CallStaticVoidMethod(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

void JNI__CallVoidMethod(::uStatic* __this, jobject obj, jmethodID mtd)
{
    JNI__GetEnvPtr(NULL)->CallVoidMethod(obj,mtd);
}

void JNI__CallVoidMethod_1(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0)
{
    JNI__GetEnvPtr(NULL)->CallVoidMethod(obj,mtd,arg0);
}

void JNI__CallVoidMethod_10(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    JNI__GetEnvPtr(NULL)->CallVoidMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

void JNI__CallVoidMethod_11(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    JNI__GetEnvPtr(NULL)->CallVoidMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

void JNI__CallVoidMethod_2(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    JNI__GetEnvPtr(NULL)->CallVoidMethod(obj,mtd,arg0,arg1);
}

void JNI__CallVoidMethod_3(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    JNI__GetEnvPtr(NULL)->CallVoidMethod(obj,mtd,arg0,arg1,arg2);
}

void JNI__CallVoidMethod_4(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    JNI__GetEnvPtr(NULL)->CallVoidMethod(obj,mtd,arg0,arg1,arg2,arg3);
}

void JNI__CallVoidMethod_5(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    JNI__GetEnvPtr(NULL)->CallVoidMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4);
}

void JNI__CallVoidMethod_6(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    JNI__GetEnvPtr(NULL)->CallVoidMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

void JNI__CallVoidMethod_7(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    JNI__GetEnvPtr(NULL)->CallVoidMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

void JNI__CallVoidMethod_8(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    JNI__GetEnvPtr(NULL)->CallVoidMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

void JNI__CallVoidMethod_9(::uStatic* __this, jobject obj, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    JNI__GetEnvPtr(NULL)->CallVoidMethod(obj,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

void JNI__CheckException(::uStatic* __this)
{
    JNI__CheckException_1(NULL, JNI__GetEnvPtr(NULL));
}

void JNI__CheckException_1(::uStatic* __this, JNIEnv* jni)
{
    JNI__CheckException_2(NULL, jni, NULL);
}

void JNI__CheckException_2(::uStatic* __this, JNIEnv* jni, ::uString* appendMessage)
{
    ::app::Uno::Exception* excep = JNI__TryGetException(NULL, jni, appendMessage);

    if (excep != NULL)
    {
        U_THROW(excep);
    }
}

void JNI__DeleteGlobalRef(::uStatic* __this, jobject obj_)
{
    ::app::Android::Base::JNI__GetEnvPtr(NULL)->DeleteGlobalRef(obj_);
}

void JNI__DeleteLocalRef(::uStatic* __this, jclass obj)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jni->DeleteLocalRef(obj);
}

void JNI__DeleteLocalRef_1(::uStatic* __this, jobject obj)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jni->DeleteLocalRef(obj);
}

void JNI__DeleteLocalRef_2(::uStatic* __this, jstring obj)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jni->DeleteLocalRef(obj);
}

void JNI__DeleteWeakGlobalRef(::uStatic* __this, jobject obj_)
{
    ::app::Android::Base::JNI__GetEnvPtr(NULL)->DeleteWeakGlobalRef(obj_);
}

jclass JNI__GetActivityClass(::uStatic* __this)
{
    JniHelper jni;
    return JniHelper::GetActivityClass();
}

jobject JNI__GetActivityObject(::uStatic* __this)
{
    JniHelper jni;
    return JniHelper::GetActivity();
}

int JNI__GetArrayLength(::uStatic* __this, jobject array_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    return (int)jni->GetArrayLength((jarray)array_);
}

bool JNI__GetBooleanArrayElement(::uStatic* __this, ::uObject* obj_, int i_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jboolean result;
    jni->GetBooleanArrayRegion((jbooleanArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, 1, &result);
    return (bool)result;
}

bool JNI__GetBooleanField(::uStatic* __this, jobject obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetBooleanField(obj,fld);
}

::uSByte JNI__GetByteArrayElement(::uStatic* __this, ::uObject* obj_, int i_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jbyte result;
    jni->GetByteArrayRegion((jbyteArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, 1, &result);
    return (::uSByte)result;
}

::uSByte JNI__GetByteField(::uStatic* __this, jobject obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetByteField(obj,fld);
}

::uChar JNI__GetCharArrayElement(::uStatic* __this, ::uObject* obj_, int i_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jchar result;
    jni->GetCharArrayRegion((jcharArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, 1, &result);
    return (::uChar)result;
}

::uChar JNI__GetCharField(::uStatic* __this, jobject obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetCharField(obj,fld);
}

jobject JNI__GetDefaultObject(::uStatic* __this)
{
    return (jobject)0;
}

::uType* JNI__GetDefaultType(::uStatic* __this)
{
    return (::uType*)0;
}

double JNI__GetDoubleArrayElement(::uStatic* __this, ::uObject* obj_, int i_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jdouble result;
    jni->GetDoubleArrayRegion((jdoubleArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, 1, &result);
    return (double)result;
}

double JNI__GetDoubleField(::uStatic* __this, jobject obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetDoubleField(obj,fld);
}

JNIEnv* JNI__GetEnvPtr(::uStatic* __this)
{
    JNIEnv* jni;
    JniHelper::GetVM()->AttachCurrentThread(&jni, NULL);
    return jni;
}

jfieldID JNI__GetFieldID(::uStatic* __this, jclass cls, ::uString* fieldName, ::uString* fieldSig)
{
    JNIEnv* env = JNI__GetEnvPtr(NULL);
    const char* cFieldName = ::uStringToCStr(fieldName);
    const char* cFieldSig = ::uStringToCStr(fieldSig);
    jfieldID fid = env->GetFieldID(cls,cFieldName,cFieldSig);
    uFreeCStr(cFieldName);
    uFreeCStr(cFieldSig);
    JNI__CheckException_1(NULL, env);
    return fid;
}

float JNI__GetFloatArrayElement(::uStatic* __this, ::uObject* obj_, int i_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jfloat result;
    jni->GetFloatArrayRegion((jfloatArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, 1, &result);
    return (float)result;
}

float JNI__GetFloatField(::uStatic* __this, jobject obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetFloatField(obj,fld);
}

int JNI__GetIntArrayElement(::uStatic* __this, ::uObject* obj_, int i_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jint result;
    jni->GetIntArrayRegion((jintArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, 1, &result);
    return (int)result;
}

int JNI__GetIntField(::uStatic* __this, jobject obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetIntField(obj,fld);
}

::uLong JNI__GetLongArrayElement(::uStatic* __this, ::uObject* obj_, int i_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jlong result;
    jni->GetLongArrayRegion((jlongArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, 1, &result);
    return (::uLong)result;
}

::uLong JNI__GetLongField(::uStatic* __this, jobject obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetLongField(obj,fld);
}

jmethodID JNI__GetMethodID(::uStatic* __this, jclass cls, ::uString* methodName, ::uString* methodSig)
{
    const char* cMethodName = ::uStringToCStr(methodName);
    const char* cMethodSig = ::uStringToCStr(methodSig);
    jmethodID mid = JNI__GetEnvPtr(NULL)->GetMethodID(cls,cMethodName,cMethodSig);
    uFreeCStr(cMethodName);
    uFreeCStr(cMethodSig);
    return mid;
}

jobject JNI__GetObjectArrayElement(::uStatic* __this, ::uObject* obj_, int i_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    return reinterpret_cast<jobject>(jni->NewGlobalRef(jni->GetObjectArrayElement((jobjectArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_)));
}

jobject JNI__GetObjectField(::uStatic* __this, jobject obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetObjectField(obj,fld);
}

::app::Android::Base::Wrappers::JWrapper* JNI__GetObjectFieldWrapped(::uStatic* __this, jobject obj, jfieldID fld)
{
    return ::app::Android::Base::Wrappers::JWrapper__Wrap(NULL, JNI__GetEnvPtr(NULL)->GetObjectField(obj,fld), false, false);
}

int JNI__GetRefType(::uStatic* __this, JNIEnv* jni, jobject obj)
{
    return (int)jni->GetObjectRefType(obj);
}

int JNI__GetRefType_1(::uStatic* __this, jobject obj)
{
    return JNI__GetRefType(NULL, JNI__GetEnvPtr(NULL), obj);
}

::uShort JNI__GetShortArrayElement(::uStatic* __this, ::uObject* obj_, int i_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jshort result;
    jni->GetShortArrayRegion((jshortArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, 1, &result);
    return (::uShort)result;
}

::uShort JNI__GetShortField(::uStatic* __this, jobject obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetShortField(obj,fld);
}

bool JNI__GetStaticBooleanField(::uStatic* __this, jclass obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetStaticBooleanField(obj,fld);
}

::uSByte JNI__GetStaticByteField(::uStatic* __this, jclass obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetStaticByteField(obj,fld);
}

::uChar JNI__GetStaticCharField(::uStatic* __this, jclass obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetStaticCharField(obj,fld);
}

double JNI__GetStaticDoubleField(::uStatic* __this, jclass obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetStaticDoubleField(obj,fld);
}

jfieldID JNI__GetStaticFieldID(::uStatic* __this, jclass cls, ::uString* fieldName, ::uString* fieldSig)
{
    JNIEnv* env = JNI__GetEnvPtr(NULL);
    const char* cFieldName = ::uStringToCStr(fieldName);
    const char* cFieldSig = ::uStringToCStr(fieldSig);
    jfieldID fid = env->GetStaticFieldID(cls,cFieldName,cFieldSig);
    uFreeCStr(cFieldName);
    uFreeCStr(cFieldSig);
    JNI__CheckException_1(NULL, env);
    return fid;
}

float JNI__GetStaticFloatField(::uStatic* __this, jclass obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetStaticFloatField(obj,fld);
}

int JNI__GetStaticIntField(::uStatic* __this, jclass obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetStaticIntField(obj,fld);
}

::uLong JNI__GetStaticLongField(::uStatic* __this, jclass obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetStaticLongField(obj,fld);
}

jmethodID JNI__GetStaticMethodID(::uStatic* __this, jclass cls, ::uString* methodName, ::uString* methodSig)
{
    const char* cMethodName = ::uStringToCStr(methodName);
    const char* cMethodSig = ::uStringToCStr(methodSig);
    jmethodID mid = JNI__GetEnvPtr(NULL)->GetStaticMethodID(cls,cMethodName,cMethodSig);
    uFreeCStr(cMethodName);
    uFreeCStr(cMethodSig);
    return mid;
}

jobject JNI__GetStaticObjectField(::uStatic* __this, jclass obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetStaticObjectField(obj,fld);
}

::app::Android::Base::Wrappers::JWrapper* JNI__GetStaticObjectFieldWrapped(::uStatic* __this, jclass obj, jfieldID fld)
{
    return ::app::Android::Base::Wrappers::JWrapper__Wrap(NULL, JNI__GetEnvPtr(NULL)->GetStaticObjectField(obj,fld), false, false);
}

::uShort JNI__GetStaticShortField(::uStatic* __this, jclass obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetStaticShortField(obj,fld);
}

::uLong JNI__GetUnoRef(::uStatic* __this, jobject obj_)
{
    if (obj_) {
        JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
        return (::uLong)jni->CallStaticLongMethod(::app::Android::Base::JNI___helperCls, ::app::Android::Base::JNI___getUnoRefMid, obj_);
    } else {
        return 0;
    }
}

JavaVM* JNI__GetVM(::uStatic* __this)
{
    return JniHelper::GetVM();
}

::app::Android::Base::Wrappers::JWrapper* JNI__GetWrappedActivityObject(::uStatic* __this)
{
    jobject activityObj = JNI__GetActivityObject(NULL);

    if (::app::Android::Base::Wrappers::JWrapper__op_Equality(NULL, JNI___rootActivityWrapped, NULL) || !JNI__IsSameObject(NULL, ::uPtr< ::app::Android::Base::Wrappers::JWrapper*>(JNI___rootActivityWrapped)->_GetJavaObject(), activityObj))
    {
        JNI___rootActivityWrapped = ::app::Android::Base::Wrappers::JWrapper__New_1(NULL, activityObj, NULL, false, false);
    }

    return JNI___rootActivityWrapped;
}

void JNI__Init(::uStatic* __this)
{
    if (!::app::Android::Base::JNI___inited)
    {
    ::app::Android::Base::JNI___inited = true;
        JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
        ::app::Android::Base::JNI__Activity_getClassLoader = jni->GetMethodID(jni->FindClass("android/app/NativeActivity"), "getClassLoader", "()Ljava/lang/ClassLoader;");
        ::app::Android::Base::JNI__ClassLoader_loadClass = jni->GetMethodID(jni->FindClass("java/lang/ClassLoader"), "loadClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        ::app::Android::Base::JNI__CheckException_1(NULL, jni);
        ::app::Android::Base::JNI___helperCls = reinterpret_cast<jclass>(jni->NewGlobalRef(::app::Android::Base::JNI__LoadClass_1(NULL, ::app::Android::Base::JNI__GetEnvPtr(NULL), "com.Bindings.UnoHelper", false)));
        if (!::app::Android::Base::JNI___helperCls) {
            U_THROW(::app::Uno::Exception__New_2(NULL, uNewStringUtf8("Could not cache class for UnoHelper",35)));
        }
        ::app::Android::Base::JNI__exceptionClass = reinterpret_cast<jclass>(jni->NewGlobalRef(jni->FindClass("java/lang/RuntimeException")));
        ::app::Android::Base::JNI___getUnoRefMid = jni->GetStaticMethodID(::app::Android::Base::JNI___helperCls, "GetUnoObjectRef", "(Ljava/lang/Object;)J");
        if (!::app::Android::Base::JNI___getUnoRefMid) {
            U_THROW(::app::Uno::Exception__New_2(NULL, uNewStringUtf8("Could not cache getUnoRefMid", 37)));
        }
    }
}

bool JNI__IsSameObject(::uStatic* __this, jobject objA_, jobject objB_)
{
    return (bool)::app::Android::Base::JNI__GetEnvPtr(NULL)->IsSameObject(objA_,objB_);
}

jclass JNI__LoadClass(::uStatic* __this, JNIEnv* jni, const char* name)
{
    return JNI__LoadClass_1(NULL, jni, name, false);
}

jclass JNI__LoadClass_1(::uStatic* __this, JNIEnv* jni, const char* name, bool systemClass)
{
    jclass result = jclass();
    jstring jname = jni->NewStringUTF(name);

    if (systemClass)
    {
        result = jni->FindClass(name);
    }
    else
    {
        result = (jclass)jni->CallObjectMethod(jni->CallObjectMethod(JNI__GetActivityObject(NULL), JNI__Activity_getClassLoader),JNI__ClassLoader_loadClass,jname);
    }

    jni->DeleteLocalRef(jname);
    JNI__CheckException_1(NULL, jni);
    return result;
}

jclass JNI__LoadClass_2(::uStatic* __this, JNIEnv* jni, ::uString* name, bool systemClass)
{
    const char* cname = (const char*)::uStringToCStr(name);
    jclass result = JNI__LoadClass_1(NULL, JNI__GetEnvPtr(NULL), cname, systemClass);
    uFreeCStr(cname);
    return result;
}

jclass JNI__LoadClass_3(::uStatic* __this, ::uString* name, bool systemClass)
{
    return JNI__LoadClass_2(NULL, JNI__GetEnvPtr(NULL), name, systemClass);
}

jclass JNI__LocalToGlobalRef(::uStatic* __this, jclass obj)
{
    jclass res = JNI__NewGlobalRef(NULL, obj);
    JNI__DeleteLocalRef(NULL, obj);
    return res;
}

jobject JNI__LocalToGlobalRef_1(::uStatic* __this, jobject obj)
{
    jobject res = JNI__NewGlobalRef_1(NULL, obj);
    JNI__DeleteLocalRef_1(NULL, obj);
    return res;
}

jstring JNI__LocalToGlobalRef_2(::uStatic* __this, jstring obj)
{
    jstring res = JNI__NewGlobalRef_2(NULL, obj);
    JNI__DeleteLocalRef_2(NULL, obj);
    return res;
}

jobject JNI__NewBooleanArray(::uStatic* __this, int len_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jobject rtn = jni->NewBooleanArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

jobject JNI__NewByteArray(::uStatic* __this, int len_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jobject rtn = jni->NewByteArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

jobject JNI__NewCharArray(::uStatic* __this, int len_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jobject rtn = jni->NewCharArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

jobject JNI__NewDoubleArray(::uStatic* __this, int len_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jobject rtn = jni->NewDoubleArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

jobject JNI__NewFloatArray(::uStatic* __this, int len_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jobject rtn = jni->NewFloatArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

jclass JNI__NewGlobalRef(::uStatic* __this, jclass obj)
{
    return reinterpret_cast<jclass>(JNI__GetEnvPtr(NULL)->NewGlobalRef(obj));
}

jobject JNI__NewGlobalRef_1(::uStatic* __this, jobject obj_)
{
    return reinterpret_cast<jobject>(::app::Android::Base::JNI__GetEnvPtr(NULL)->NewGlobalRef(obj_));
}

jstring JNI__NewGlobalRef_2(::uStatic* __this, jstring obj)
{
    return reinterpret_cast<jstring>(JNI__GetEnvPtr(NULL)->NewGlobalRef(obj));
}

jobject JNI__NewIntArray(::uStatic* __this, int len_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jobject rtn = jni->NewIntArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

jobject JNI__NewLongArray(::uStatic* __this, int len_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jobject rtn = jni->NewLongArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

jobject JNI__NewObject(::uStatic* __this, jclass cls, jmethodID mtd)
{
    return JNI__GetEnvPtr(NULL)->NewObject(cls,mtd);
}

jobject JNI__NewObject_1(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->NewObject(cls,mtd,arg0);
}

jobject JNI__NewObject_10(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9)
{
    return JNI__GetEnvPtr(NULL)->NewObject(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9);
}

jobject JNI__NewObject_11(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8, jvalue arg9, jvalue arg10)
{
    return JNI__GetEnvPtr(NULL)->NewObject(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10);
}

jobject JNI__NewObject_2(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->NewObject(cls,mtd,arg0,arg1);
}

jobject JNI__NewObject_3(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2)
{
    return JNI__GetEnvPtr(NULL)->NewObject(cls,mtd,arg0,arg1,arg2);
}

jobject JNI__NewObject_4(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3)
{
    return JNI__GetEnvPtr(NULL)->NewObject(cls,mtd,arg0,arg1,arg2,arg3);
}

jobject JNI__NewObject_5(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4)
{
    return JNI__GetEnvPtr(NULL)->NewObject(cls,mtd,arg0,arg1,arg2,arg3,arg4);
}

jobject JNI__NewObject_6(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5)
{
    return JNI__GetEnvPtr(NULL)->NewObject(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5);
}

jobject JNI__NewObject_7(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6)
{
    return JNI__GetEnvPtr(NULL)->NewObject(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6);
}

jobject JNI__NewObject_8(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7)
{
    return JNI__GetEnvPtr(NULL)->NewObject(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7);
}

jobject JNI__NewObject_9(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1, jvalue arg2, jvalue arg3, jvalue arg4, jvalue arg5, jvalue arg6, jvalue arg7, jvalue arg8)
{
    return JNI__GetEnvPtr(NULL)->NewObject(cls,mtd,arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
}

jobject JNI__NewObjectArray(::uStatic* __this, jclass cls_, int len_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jobject rtn = jni->NewObjectArray((jsize)len_, cls_, NULL);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

jobject JNI__NewShortArray(::uStatic* __this, int len_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jobject rtn = jni->NewShortArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

jobject JNI__NewWeakGlobalRef(::uStatic* __this, jobject obj_)
{
    return (jobject)reinterpret_cast<jweak>(::app::Android::Base::JNI__GetEnvPtr(NULL)->NewWeakGlobalRef(obj_));
}

void JNI__SetBooleanArrayElement(::uStatic* __this, ::uObject* obj_, int i_, bool val_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jboolean val = (jboolean)val_;
    jni->SetBooleanArrayRegion((jbooleanArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, 1, &val);
}

void JNI__SetByteArrayElement(::uStatic* __this, ::uObject* obj_, int i_, ::uSByte val_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jbyte val = (jbyte)val_;
    jni->SetByteArrayRegion((jbyteArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, 1, &val);
}

void JNI__SetCharArrayElement(::uStatic* __this, ::uObject* obj_, int i_, ::uChar val_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jchar val = (jchar)val_;
    jni->SetCharArrayRegion((jcharArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, 1, &val);
}

void JNI__SetDoubleArrayElement(::uStatic* __this, ::uObject* obj_, int i_, double val_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jdouble val = (jdouble)val_;
    jni->SetDoubleArrayRegion((jdoubleArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, 1, &val);
}

void JNI__SetFloatArrayElement(::uStatic* __this, ::uObject* obj_, int i_, float val_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jfloat val = (jfloat)val_;
    jni->SetFloatArrayRegion((jfloatArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, 1, &val);
}

void JNI__SetIntArrayElement(::uStatic* __this, ::uObject* obj_, int i_, int val_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jint val = (jint)val_;
    jni->SetIntArrayRegion((jintArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, 1, &val);
}

void JNI__SetLongArrayElement(::uStatic* __this, ::uObject* obj_, int i_, ::uLong val_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jlong val = (jlong)val_;
    jni->SetLongArrayRegion((jlongArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, 1, &val);
}

void JNI__SetObjectArrayElement(::uStatic* __this, ::uObject* obj_, int i_, jobject val_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jni->SetObjectArrayElement((jobjectArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, val_);
}

void JNI__SetShortArrayElement(::uStatic* __this, ::uObject* obj_, int i_, ::uShort val_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jshort val = (jshort)val_;
    jni->SetShortArrayRegion((jshortArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, 1, &val);
}

void JNI__ThrowNewException(::uStatic* __this, ::uString* message_)
{
    const char* message = ::uStringToCStr(message_);
    LOGD("%s", message);
    ::app::Android::Base::JNI__GetEnvPtr(NULL)->ThrowNew(::app::Android::Base::JNI__exceptionClass, message);
    ::uFreeCStr(message);
}

::app::Uno::Exception* JNI__TryGetException(::uStatic* __this, JNIEnv* jni, ::uString* appendMessage)
{
    jthrowable err = jni->ExceptionOccurred();

    if ((err != NULL))
    {
        jni->ExceptionDescribe();
        jni->ExceptionClear();
        jmethodID toString = jni->GetMethodID(jni->FindClass("java/lang/Object"), "toString", "()Ljava/lang/String;");
        jobject estring = (jobject)jni->CallObjectMethod(err, toString);
        ::uString* x = ::app::Android::Base::Types::String__JavaToUno_2(NULL, estring);

        if (::app::Uno::String__op_Inequality(NULL, appendMessage, NULL))
        {
            x = ::app::Uno::String__op_Addition_2(NULL, x, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, x, ::uGetConstString("\n")), appendMessage));
        }

        return ::app::Uno::Exception__New_2(NULL, x);
    }

    return NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* JNI_RefType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Android.Base.JNI.RefType", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "Invalid", 0LL,
        "Local", 1LL,
        "Global", 2LL,
        "WeakGlobal", 3LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Permissions__uType* Permissions__typeof()
{
    static ::uStaticStrong<Permissions__uType*> type;
    if (type != NULL) return type;

    type = (Permissions__uType*)::uAllocClassType(sizeof(Permissions__uType), "Android.Base.Permissions", false, 0, 0, 0);

    type->SetFunctions(7,
        ::uNewFunction("_call_phone", Permissions___call_phone, 0, true, ::app::Android::Base::PlatPermission__typeof()),
        ::uNewFunction("_internet", Permissions___internet, 0, true, ::app::Android::Base::PlatPermission__typeof()),
        ::uNewFunction("_vibrate", Permissions___vibrate, 0, true, ::app::Android::Base::PlatPermission__typeof()),
        ::uNewFunction("get_CALL_PHONE", Permissions__get_CALL_PHONE, 0, true, ::app::Android::Base::PlatPermission__typeof()),
        ::uNewFunction("get_INTERNET", Permissions__get_INTERNET, 0, true, ::app::Android::Base::PlatPermission__typeof()),
        ::uNewFunction("get_VIBRATE", Permissions__get_VIBRATE, 0, true, ::app::Android::Base::PlatPermission__typeof()),
        ::uNewFunctionVoid("RequestPermission", Permissions__RequestPermission, 0, true, ::app::Android::Base::PlatPermission__typeof()));

    ::uRegisterType(type);
    return type;
}

void* Permissions___call_phone(::uStatic* __this)
{
    return NULL;
}

void* Permissions___internet(::uStatic* __this)
{
    return NULL;
}

void* Permissions___vibrate(::uStatic* __this)
{
    return NULL;
}

void* Permissions__get_CALL_PHONE(::uStatic* __this)
{
    return Permissions___call_phone(NULL);
}

void* Permissions__get_INTERNET(::uStatic* __this)
{
    return Permissions___internet(NULL);
}

void* Permissions__get_VIBRATE(::uStatic* __this)
{
    return Permissions___vibrate(NULL);
}

void Permissions__RequestPermission(::uStatic* __this, void* x)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PlatPermission__uType* PlatPermission__typeof()
{
    static ::uStaticStrong<PlatPermission__uType*> type;
    if (type != NULL) return type;

    type = (PlatPermission__uType*)::uAllocClassType(sizeof(PlatPermission__uType), "Android.Base.PlatPermission", false, 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

int Versions___api;
::uStaticStrong< ::uString*> Versions___release;

Versions__uType* Versions__typeof()
{
    static ::uStaticStrong<Versions__uType*> type;
    if (type != NULL) return type;

    type = (Versions__uType*)::uAllocClassType(sizeof(Versions__uType), "Android.Base.Versions");

    type->SetFields(2,
        ::uNewField("_api", &Versions___api, 0, ::app::Uno::Int__typeof()),
        ::uNewField("_release", &Versions___release, 0, ::app::Uno::String__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_ApiLevel", Versions__get_ApiLevel, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Release", Versions__get_Release, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Initialize", Versions__Initialize, 0, true));

    ::uRegisterType(type);
    return type;
}

void Versions___TypeInit(::uStatic* __this)
{
    Versions___api = -1;
    Versions___release = ::uGetConstString("<unknown>");
}

int Versions__get_ApiLevel(::uStatic* __this)
{
    if (Versions___api == -1)
    {
        Versions__Initialize(NULL);
    }

    return Versions___api;
}

::uString* Versions__get_Release(::uStatic* __this)
{
    if (Versions___api == -1)
    {
        Versions__Initialize(NULL);
    }

    return Versions___release;
}

void Versions__Initialize(::uStatic* __this)
{
    if (Versions___api == -1)
    {
        jclass tmpCls = ::app::Android::Base::JNI__LoadClass_3(NULL, ::uGetConstString("android/os/Build$VERSION"), false);
        jfieldID sdk = ::app::Android::Base::JNI__GetStaticFieldID(NULL, tmpCls, ::uGetConstString("SDK_INT"), ::uGetConstString("I"));
        jfieldID release = ::app::Android::Base::JNI__GetStaticFieldID(NULL, tmpCls, ::uGetConstString("RELEASE"), ::uGetConstString("Ljava/lang/String;"));
        Versions___api = ::app::Android::Base::JNI__GetStaticIntField(NULL, tmpCls, sdk);
        Versions___release = ::app::Android::Base::Types::String__JavaToUno_2(NULL, ::app::Android::Base::JNI__GetStaticObjectField(NULL, tmpCls, release));
    }
}

}}}
