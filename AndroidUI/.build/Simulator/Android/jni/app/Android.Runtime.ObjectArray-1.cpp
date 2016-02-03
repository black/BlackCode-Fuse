#include <app/Android.android.graphics.drawable.Drawable.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Runtime.ObjectArray__Android_android_content_Intent.h>
#include <app/Android.Runtime.ObjectArray__Android_android_graphics_drawable_Drawable.h>
#include <app/Android.Runtime.ObjectArray__Android_android_text_InputFilter.h>
#include <app/Android.Runtime.ObjectArray__Android_android_view_MenuItem.h>
#include <app/Android.Runtime.ObjectArray__Android_java_lang_Object.h>
#include <app/Android.Runtime.ObjectArray__Android_java_lang_String.h>
#include <app/Android.Runtime.ObjectArrayAUX.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace Runtime {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObjectArray__Android_android_content_Intent__uType* ObjectArray__Android_android_content_Intent__typeof()
{
    static ::uStaticStrong<ObjectArray__Android_android_content_Intent__uType*> type;
    if (type != NULL) return type;

    type = (ObjectArray__Android_android_content_Intent__uType*)::uAllocClassType(sizeof(ObjectArray__Android_android_content_Intent__uType), "Android.Runtime.ObjectArray<Android.android.content.Intent>", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ObjectArray__Android_android_content_Intent__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ObjectArray__Android_android_content_Intent__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObjectArray__Android_android_graphics_drawable_Drawable__uType* ObjectArray__Android_android_graphics_drawable_Drawable__typeof()
{
    static ::uStaticStrong<ObjectArray__Android_android_graphics_drawable_Drawable__uType*> type;
    if (type != NULL) return type;

    type = (ObjectArray__Android_android_graphics_drawable_Drawable__uType*)::uAllocClassType(sizeof(ObjectArray__Android_android_graphics_drawable_Drawable__uType), "Android.Runtime.ObjectArray<Android.android.graphics.drawable.Drawable>", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ObjectArray__Android_android_graphics_drawable_Drawable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ObjectArray__Android_android_graphics_drawable_Drawable__uType, __interface_1));

    type->SetFunctions(3,
        ::uNewFunction("get_Item", ObjectArray__Android_android_graphics_drawable_Drawable__get_Item, 0, false, ::app::Android::android::graphics::drawable::Drawable__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", ObjectArray__Android_android_graphics_drawable_Drawable__New_5, 0, true, ObjectArray__Android_android_graphics_drawable_Drawable__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_Item", ObjectArray__Android_android_graphics_drawable_Drawable__set_Item, 0, false, ::app::Uno::Int__typeof(), ::app::Android::android::graphics::drawable::Drawable__typeof()));

    ::uRegisterType(type);
    return type;
}

void ObjectArray__Android_android_graphics_drawable_Drawable___ObjInit_4(ObjectArray__Android_android_graphics_drawable_Drawable* __this, int length)
{
    __this->_ObjInit_5(::app::Android::Runtime::ObjectArrayAUX__makeArrayJObject(NULL, ::app::Uno::String::Replace_1(::uPtr< ::uString*>(::app::Uno::String::Substring(::uPtr< ::uString*>(::uPtr< ::uType*>(::app::Android::android::graphics::drawable::Drawable__typeof())->ToString()), 8)), ::uGetConstString("."), ::uGetConstString("/")), length), ObjectArray__Android_android_graphics_drawable_Drawable__typeof(), false, false);
}

void ObjectArray__Android_android_graphics_drawable_Drawable___ObjInit_5(ObjectArray__Android_android_graphics_drawable_Drawable* __this, jobject obj, ::uType* typePtr, bool typeHasFallbackClass, bool resolveType)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, obj, typePtr, typeHasFallbackClass, false);
}

::app::Android::android::graphics::drawable::Drawable* ObjectArray__Android_android_graphics_drawable_Drawable__get_Item(ObjectArray__Android_android_graphics_drawable_Drawable* __this, int i)
{
    int len = ::app::Android::Base::JNI__GetArrayLength(NULL, __this->_javaObject);

    if ((i >= 0) && (i < len))
    {
        jobject jobj = ::app::Android::Base::JNI__GetObjectArrayElement(NULL, (::uObject*)__this, i);
        return ::uAs< ::app::Android::android::graphics::drawable::Drawable*>((::uObject*)::app::Android::Base::Wrappers::JWrapper__New_1(NULL, jobj, ::app::Android::Base::JNI__GetDefaultType(NULL), false, true), ::app::Android::android::graphics::drawable::Drawable__typeof());
    }
    else
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Index ("), ::uBox< int>(::app::Uno::Int__typeof(), i)), ::uGetConstString(") out of bounds for array of length ")), ::uBox< int>(::app::Uno::Int__typeof(), len))));
    }
}

ObjectArray__Android_android_graphics_drawable_Drawable* ObjectArray__Android_android_graphics_drawable_Drawable__New_5(::uStatic* __this, int length)
{
    ObjectArray__Android_android_graphics_drawable_Drawable* inst = (ObjectArray__Android_android_graphics_drawable_Drawable*)::uAllocObject(sizeof(ObjectArray__Android_android_graphics_drawable_Drawable), ObjectArray__Android_android_graphics_drawable_Drawable__typeof());
    inst->_ObjInit_4(length);
    return inst;
}

void ObjectArray__Android_android_graphics_drawable_Drawable__set_Item(ObjectArray__Android_android_graphics_drawable_Drawable* __this, int i, ::app::Android::android::graphics::drawable::Drawable* value)
{
    int len = ::app::Android::Base::JNI__GetArrayLength(NULL, __this->_javaObject);

    if ((i >= 0) && (i < len))
    {
        ::uObject* obj = (::uObject*)value;
        ::app::Android::Base::JNI__SetObjectArrayElement(NULL, (::uObject*)__this, i, ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(::uPtr< ::uObject*>(obj)));
    }
    else
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Index ("), ::uBox< int>(::app::Uno::Int__typeof(), i)), ::uGetConstString(") out of bounds for array of length ")), ::uBox< int>(::app::Uno::Int__typeof(), len))));
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObjectArray__Android_android_text_InputFilter__uType* ObjectArray__Android_android_text_InputFilter__typeof()
{
    static ::uStaticStrong<ObjectArray__Android_android_text_InputFilter__uType*> type;
    if (type != NULL) return type;

    type = (ObjectArray__Android_android_text_InputFilter__uType*)::uAllocClassType(sizeof(ObjectArray__Android_android_text_InputFilter__uType), "Android.Runtime.ObjectArray<Android.android.text.InputFilter>", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ObjectArray__Android_android_text_InputFilter__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ObjectArray__Android_android_text_InputFilter__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObjectArray__Android_android_view_MenuItem__uType* ObjectArray__Android_android_view_MenuItem__typeof()
{
    static ::uStaticStrong<ObjectArray__Android_android_view_MenuItem__uType*> type;
    if (type != NULL) return type;

    type = (ObjectArray__Android_android_view_MenuItem__uType*)::uAllocClassType(sizeof(ObjectArray__Android_android_view_MenuItem__uType), "Android.Runtime.ObjectArray<Android.android.view.MenuItem>", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ObjectArray__Android_android_view_MenuItem__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ObjectArray__Android_android_view_MenuItem__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObjectArray__Android_java_lang_Object__uType* ObjectArray__Android_java_lang_Object__typeof()
{
    static ::uStaticStrong<ObjectArray__Android_java_lang_Object__uType*> type;
    if (type != NULL) return type;

    type = (ObjectArray__Android_java_lang_Object__uType*)::uAllocClassType(sizeof(ObjectArray__Android_java_lang_Object__uType), "Android.Runtime.ObjectArray<Android.java.lang.Object>", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ObjectArray__Android_java_lang_Object__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ObjectArray__Android_java_lang_Object__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObjectArray__Android_java_lang_String__uType* ObjectArray__Android_java_lang_String__typeof()
{
    static ::uStaticStrong<ObjectArray__Android_java_lang_String__uType*> type;
    if (type != NULL) return type;

    type = (ObjectArray__Android_java_lang_String__uType*)::uAllocClassType(sizeof(ObjectArray__Android_java_lang_String__uType), "Android.Runtime.ObjectArray<Android.java.lang.String>", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ObjectArray__Android_java_lang_String__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ObjectArray__Android_java_lang_String__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

}}}
