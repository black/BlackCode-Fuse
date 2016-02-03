#include <app/Fuse.Scripting.Callback.h>
#include <app/Fuse.Scripting.Context.h>
#include <app/Fuse.Scripting.Function.h>
#include <app/Fuse.Scripting.FutureFactory__bool.h>
#include <app/Fuse.Scripting.FutureFactory__Fuse_Camera_PictureResult.h>
#include <app/Fuse.Scripting.FutureFactory__string.h>
#include <app/Fuse.Scripting.NativePromise2_ContextClosure__bool__bool.h>
#include <app/Fuse.Scripting.NativePromise2_ContextClosure__Fuse_Camera_Pictu-4f9ced6d.h>
#include <app/Fuse.Scripting.NativePromise2_ContextClosure__string__string.h>
#include <app/Fuse.Scripting.NativePromise2_PromiseClosure__bool__bool.h>
#include <app/Fuse.Scripting.NativePromise2_PromiseClosure__Fuse_Camera_Pictu-68fe7780.h>
#include <app/Fuse.Scripting.NativePromise2_PromiseClosure__string__string.h>
#include <app/Fuse.Scripting.Object.h>
#include <app/Fuse.Scripting.ResultConverter__bool__bool.h>
#include <app/Fuse.Scripting.ResultConverter__Fuse_Camera_PictureResult__Fuse-a3f014a.h>
#include <app/Fuse.Scripting.ResultConverter__string__string.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.Future__bool.h>
#include <app/Uno.Threading.Future__Fuse_Camera_PictureResult.h>
#include <app/Uno.Threading.Future__string.h>

namespace app {
namespace Fuse {
namespace Scripting {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativePromise2_ContextClosure__bool__bool__uType* NativePromise2_ContextClosure__bool__bool__typeof()
{
    static ::uStaticStrong<NativePromise2_ContextClosure__bool__bool__uType*> type;
    if (type != NULL) return type;

    type = (NativePromise2_ContextClosure__bool__bool__uType*)::uAllocClassType(sizeof(NativePromise2_ContextClosure__bool__bool__uType), "Fuse.Scripting.NativePromise<bool,bool>.ContextClosure", false, 0, 3, 0);

    type->SetStrongRefs(
        "_c", offsetof(NativePromise2_ContextClosure__bool__bool, _c),
        "_converter", offsetof(NativePromise2_ContextClosure__bool__bool, _converter),
        "_factory", offsetof(NativePromise2_ContextClosure__bool__bool, _factory));

    return type;
}

void NativePromise2_ContextClosure__bool__bool___ObjInit(NativePromise2_ContextClosure__bool__bool* __this, ::app::Fuse::Scripting::Context* c, ::uDelegate* factory, ::uDelegate* converter)
{
    __this->_c = c;
    __this->_factory = factory;
    __this->_converter = converter;
}

::uObject* NativePromise2_ContextClosure__bool__bool__CreatePromise(NativePromise2_ContextClosure__bool__bool* __this, ::uArray* args)
{
    ::uArray* array_123;
    ::app::Fuse::Scripting::Function* promise = ::uCast< ::app::Fuse::Scripting::Function*>(::uPtr< ::app::Fuse::Scripting::Object*>(::uPtr< ::app::Fuse::Scripting::Context*>(__this->_c)->GlobalObject())->Item(::uGetConstString("Promise")), ::app::Fuse::Scripting::Function__typeof());
    ::app::Uno::Threading::Future__bool* future = ::uPtr< ::uDelegate*>(__this->_factory)->Invoke< ::app::Uno::Threading::Future__bool*, ::uArray*>(args);
    return (::uObject*)::uPtr< ::app::Fuse::Scripting::Function*>(promise)->Construct((array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)::uNewDelegateNonVirt(::app::Fuse::Scripting::Callback__typeof(), (const void*)::app::Fuse::Scripting::NativePromise2_PromiseClosure__bool__bool__Run, ::app::Fuse::Scripting::NativePromise2_PromiseClosure__bool__bool__New_1(NULL, __this->_c, future, __this->_converter)), array_123));
}

NativePromise2_ContextClosure__bool__bool* NativePromise2_ContextClosure__bool__bool__New_1(::uStatic* __this, ::app::Fuse::Scripting::Context* c, ::uDelegate* factory, ::uDelegate* converter)
{
    NativePromise2_ContextClosure__bool__bool* inst = (NativePromise2_ContextClosure__bool__bool*)::uAllocObject(sizeof(NativePromise2_ContextClosure__bool__bool), NativePromise2_ContextClosure__bool__bool__typeof());
    inst->_ObjInit(c, factory, converter);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType* NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof()
{
    static ::uStaticStrong<NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType*> type;
    if (type != NULL) return type;

    type = (NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType*)::uAllocClassType(sizeof(NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType), "Fuse.Scripting.NativePromise<Fuse.Camera.PictureResult,Fuse.Scripting.Object>.ContextClosure", false, 0, 3, 0);

    type->SetStrongRefs(
        "_c", offsetof(NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object, _c),
        "_converter", offsetof(NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object, _converter),
        "_factory", offsetof(NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object, _factory));

    return type;
}

void NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object___ObjInit(NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this, ::app::Fuse::Scripting::Context* c, ::uDelegate* factory, ::uDelegate* converter)
{
    __this->_c = c;
    __this->_factory = factory;
    __this->_converter = converter;
}

::uObject* NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__CreatePromise(NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this, ::uArray* args)
{
    ::uArray* array_123;
    ::app::Fuse::Scripting::Function* promise = ::uCast< ::app::Fuse::Scripting::Function*>(::uPtr< ::app::Fuse::Scripting::Object*>(::uPtr< ::app::Fuse::Scripting::Context*>(__this->_c)->GlobalObject())->Item(::uGetConstString("Promise")), ::app::Fuse::Scripting::Function__typeof());
    ::app::Uno::Threading::Future__Fuse_Camera_PictureResult* future = ::uPtr< ::uDelegate*>(__this->_factory)->Invoke< ::app::Uno::Threading::Future__Fuse_Camera_PictureResult*, ::uArray*>(args);
    return (::uObject*)::uPtr< ::app::Fuse::Scripting::Function*>(promise)->Construct((array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)::uNewDelegateNonVirt(::app::Fuse::Scripting::Callback__typeof(), (const void*)::app::Fuse::Scripting::NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__Run, ::app::Fuse::Scripting::NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__New_1(NULL, __this->_c, future, __this->_converter)), array_123));
}

NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object* NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__New_1(::uStatic* __this, ::app::Fuse::Scripting::Context* c, ::uDelegate* factory, ::uDelegate* converter)
{
    NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object* inst = (NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object*)::uAllocObject(sizeof(NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object), NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof());
    inst->_ObjInit(c, factory, converter);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativePromise2_ContextClosure__string__string__uType* NativePromise2_ContextClosure__string__string__typeof()
{
    static ::uStaticStrong<NativePromise2_ContextClosure__string__string__uType*> type;
    if (type != NULL) return type;

    type = (NativePromise2_ContextClosure__string__string__uType*)::uAllocClassType(sizeof(NativePromise2_ContextClosure__string__string__uType), "Fuse.Scripting.NativePromise<string,string>.ContextClosure", false, 0, 3, 0);

    type->SetStrongRefs(
        "_c", offsetof(NativePromise2_ContextClosure__string__string, _c),
        "_converter", offsetof(NativePromise2_ContextClosure__string__string, _converter),
        "_factory", offsetof(NativePromise2_ContextClosure__string__string, _factory));

    return type;
}

void NativePromise2_ContextClosure__string__string___ObjInit(NativePromise2_ContextClosure__string__string* __this, ::app::Fuse::Scripting::Context* c, ::uDelegate* factory, ::uDelegate* converter)
{
    __this->_c = c;
    __this->_factory = factory;
    __this->_converter = converter;
}

::uObject* NativePromise2_ContextClosure__string__string__CreatePromise(NativePromise2_ContextClosure__string__string* __this, ::uArray* args)
{
    ::uArray* array_123;
    ::app::Fuse::Scripting::Function* promise = ::uCast< ::app::Fuse::Scripting::Function*>(::uPtr< ::app::Fuse::Scripting::Object*>(::uPtr< ::app::Fuse::Scripting::Context*>(__this->_c)->GlobalObject())->Item(::uGetConstString("Promise")), ::app::Fuse::Scripting::Function__typeof());
    ::app::Uno::Threading::Future__string* future = ::uPtr< ::uDelegate*>(__this->_factory)->Invoke< ::app::Uno::Threading::Future__string*, ::uArray*>(args);
    return (::uObject*)::uPtr< ::app::Fuse::Scripting::Function*>(promise)->Construct((array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)::uNewDelegateNonVirt(::app::Fuse::Scripting::Callback__typeof(), (const void*)::app::Fuse::Scripting::NativePromise2_PromiseClosure__string__string__Run, ::app::Fuse::Scripting::NativePromise2_PromiseClosure__string__string__New_1(NULL, __this->_c, future, __this->_converter)), array_123));
}

NativePromise2_ContextClosure__string__string* NativePromise2_ContextClosure__string__string__New_1(::uStatic* __this, ::app::Fuse::Scripting::Context* c, ::uDelegate* factory, ::uDelegate* converter)
{
    NativePromise2_ContextClosure__string__string* inst = (NativePromise2_ContextClosure__string__string*)::uAllocObject(sizeof(NativePromise2_ContextClosure__string__string), NativePromise2_ContextClosure__string__string__typeof());
    inst->_ObjInit(c, factory, converter);
    return inst;
}

}}}
