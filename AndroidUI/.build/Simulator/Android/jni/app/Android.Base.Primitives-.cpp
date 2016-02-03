#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.ConstCharPtr.h>
#include <app/Android.Base.Primitives.JavaVMPtr.h>
#include <app/Android.Base.Primitives.jfieldID.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.JNIEnvPtr.h>
#include <app/Android.Base.Primitives.JNINativeMethod.h>
#include <app/Android.Base.Primitives.jweak.h>
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
#include <app/Android.Base.Primitives.uweakptr.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Android {
namespace Base {
namespace Primitives {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ConstCharPtr__uType* ConstCharPtr__typeof()
{
    static ::uStaticStrong<ConstCharPtr__uType*> type;
    if (type != NULL) return type;

    type = (ConstCharPtr__uType*)::uAllocStructType(sizeof(ConstCharPtr__uType), "Android.Base.Primitives.ConstCharPtr", sizeof(const char*), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JavaVMPtr__uType* JavaVMPtr__typeof()
{
    static ::uStaticStrong<JavaVMPtr__uType*> type;
    if (type != NULL) return type;

    type = (JavaVMPtr__uType*)::uAllocStructType(sizeof(JavaVMPtr__uType), "Android.Base.Primitives.JavaVMPtr", sizeof(JavaVM*), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jfieldID__uType* jfieldID__typeof()
{
    static ::uStaticStrong<jfieldID__uType*> type;
    if (type != NULL) return type;

    type = (jfieldID__uType*)::uAllocStructType(sizeof(jfieldID__uType), "Android.Base.Primitives.jfieldID", sizeof(jfieldID), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID__uType* jmethodID__typeof()
{
    static ::uStaticStrong<jmethodID__uType*> type;
    if (type != NULL) return type;

    type = (jmethodID__uType*)::uAllocStructType(sizeof(jmethodID__uType), "Android.Base.Primitives.jmethodID", sizeof(jmethodID), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JNIEnvPtr__uType* JNIEnvPtr__typeof()
{
    static ::uStaticStrong<JNIEnvPtr__uType*> type;
    if (type != NULL) return type;

    type = (JNIEnvPtr__uType*)::uAllocStructType(sizeof(JNIEnvPtr__uType), "Android.Base.Primitives.JNIEnvPtr", sizeof(JNIEnv*), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JNINativeMethod__uType* JNINativeMethod__typeof()
{
    static ::uStaticStrong<JNINativeMethod__uType*> type;
    if (type != NULL) return type;

    type = (JNINativeMethod__uType*)::uAllocStructType(sizeof(JNINativeMethod__uType), "Android.Base.Primitives.JNINativeMethod", sizeof(JNINativeMethod), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jweak__uType* jweak__typeof()
{
    static ::uStaticStrong<jweak__uType*> type;
    if (type != NULL) return type;

    type = (jweak__uType*)::uAllocStructType(sizeof(jweak__uType), "Android.Base.Primitives.jweak", sizeof(jweak), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ujboolean__uType* ujboolean__typeof()
{
    static ::uStaticStrong<ujboolean__uType*> type;
    if (type != NULL) return type;

    type = (ujboolean__uType*)::uAllocStructType(sizeof(ujboolean__uType), "Android.Base.Primitives.ujboolean", sizeof(jboolean), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ujbyte__uType* ujbyte__typeof()
{
    static ::uStaticStrong<ujbyte__uType*> type;
    if (type != NULL) return type;

    type = (ujbyte__uType*)::uAllocStructType(sizeof(ujbyte__uType), "Android.Base.Primitives.ujbyte", sizeof(jbyte), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ujchar__uType* ujchar__typeof()
{
    static ::uStaticStrong<ujchar__uType*> type;
    if (type != NULL) return type;

    type = (ujchar__uType*)::uAllocStructType(sizeof(ujchar__uType), "Android.Base.Primitives.ujchar", sizeof(jchar), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ujclass__uType* ujclass__typeof()
{
    static ::uStaticStrong<ujclass__uType*> type;
    if (type != NULL) return type;

    type = (ujclass__uType*)::uAllocStructType(sizeof(ujclass__uType), "Android.Base.Primitives.ujclass", sizeof(jclass), 0, 0, 0);

    type->SetFunctions(1,
        ::uNewFunction("get_Null", ujclass__get_Null, 0, true, ujclass__typeof()));

    ::uRegisterType(type);
    return type;
}

jclass ujclass__get_Null(::uStatic* __this)
{
    return NULL;
}

bool ujclass__op_Equality(::uStatic* __this, jclass lhs, jclass rhs)
{
    return ::app::Android::Base::JNI__IsSameObject(NULL, ::app::Android::Base::Primitives::ujobject__op_Implicit(NULL, lhs), ::app::Android::Base::Primitives::ujobject__op_Implicit(NULL, rhs));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ujdouble__uType* ujdouble__typeof()
{
    static ::uStaticStrong<ujdouble__uType*> type;
    if (type != NULL) return type;

    type = (ujdouble__uType*)::uAllocStructType(sizeof(ujdouble__uType), "Android.Base.Primitives.ujdouble", sizeof(jdouble), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ujfloat__uType* ujfloat__typeof()
{
    static ::uStaticStrong<ujfloat__uType*> type;
    if (type != NULL) return type;

    type = (ujfloat__uType*)::uAllocStructType(sizeof(ujfloat__uType), "Android.Base.Primitives.ujfloat", sizeof(jfloat), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ujint__uType* ujint__typeof()
{
    static ::uStaticStrong<ujint__uType*> type;
    if (type != NULL) return type;

    type = (ujint__uType*)::uAllocStructType(sizeof(ujint__uType), "Android.Base.Primitives.ujint", sizeof(jint), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ujlong__uType* ujlong__typeof()
{
    static ::uStaticStrong<ujlong__uType*> type;
    if (type != NULL) return type;

    type = (ujlong__uType*)::uAllocStructType(sizeof(ujlong__uType), "Android.Base.Primitives.ujlong", sizeof(jlong), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ujobject__uType* ujobject__typeof()
{
    static ::uStaticStrong<ujobject__uType*> type;
    if (type != NULL) return type;

    type = (ujobject__uType*)::uAllocStructType(sizeof(ujobject__uType), "Android.Base.Primitives.ujobject", sizeof(jobject), 0, 0, 0);

    type->SetFunctions(1,
        ::uNewFunction("get_Null", ujobject__get_Null, 0, true, ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

jobject ujobject__get_Null(::uStatic* __this)
{
    return NULL;
}

bool ujobject__op_Equality(::uStatic* __this, jobject lhs, jobject rhs)
{
    return ::app::Android::Base::JNI__IsSameObject(NULL, lhs, rhs);
}

jobject ujobject__op_Implicit(::uStatic* __this, jclass v)
{
    return (jobject)v;
}

bool ujobject__op_Inequality(::uStatic* __this, jobject lhs, jobject rhs)
{
    return !ujobject__op_Equality(NULL, lhs, rhs);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ujshort__uType* ujshort__typeof()
{
    static ::uStaticStrong<ujshort__uType*> type;
    if (type != NULL) return type;

    type = (ujshort__uType*)::uAllocStructType(sizeof(ujshort__uType), "Android.Base.Primitives.ujshort", sizeof(jshort), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ujstring__uType* ujstring__typeof()
{
    static ::uStaticStrong<ujstring__uType*> type;
    if (type != NULL) return type;

    type = (ujstring__uType*)::uAllocStructType(sizeof(ujstring__uType), "Android.Base.Primitives.ujstring", sizeof(jstring), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ujvalue__uType* ujvalue__typeof()
{
    static ::uStaticStrong<ujvalue__uType*> type;
    if (type != NULL) return type;

    type = (ujvalue__uType*)::uAllocStructType(sizeof(ujvalue__uType), "Android.Base.Primitives.ujvalue", sizeof(jvalue), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

jvalue ujvalue__op_Implicit_16(::uStatic* __this, jlong v)
{
    jvalue r;;
    r.j = v;
    return r;
}

jvalue ujvalue__op_Implicit_17(::uStatic* __this, jobject v)
{
    jvalue r;;
    r.l = v;
    return r;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

uweakptr__uType* uweakptr__typeof()
{
    static ::uStaticStrong<uweakptr__uType*> type;
    if (type != NULL) return type;

    type = (uweakptr__uType*)::uAllocStructType(sizeof(uweakptr__uType), "Android.Base.Primitives.uweakptr", sizeof(uWeakObject*), 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

}}}}
