#include <app/Fuse.Resources.FileImageSourceImpl.h>
#include <app/Fuse.Resources.HttpImageSourceImpl.h>
#include <app/Uno.Bool.h>
#include <app/Uno.WeakReference__Fuse_Resources_FileImageSourceImpl.h>
#include <app/Uno.WeakReference__Fuse_Resources_HttpImageSourceImpl.h>
#include <app/Uno.WeakReference__object.h>

namespace app {
namespace Uno {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WeakReference__Fuse_Resources_FileImageSourceImpl__uType* WeakReference__Fuse_Resources_FileImageSourceImpl__typeof()
{
    static ::uStaticStrong<WeakReference__Fuse_Resources_FileImageSourceImpl__uType*> type;
    if (type != NULL) return type;

    type = (WeakReference__Fuse_Resources_FileImageSourceImpl__uType*)::uAllocClassType(sizeof(WeakReference__Fuse_Resources_FileImageSourceImpl__uType), "Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_target", offsetof(WeakReference__Fuse_Resources_FileImageSourceImpl, _target));

    type->SetFields(1,
        ::uNewField("_target", NULL, offsetof(WeakReference__Fuse_Resources_FileImageSourceImpl, _target), ::app::Fuse::Resources::FileImageSourceImpl__typeof()));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", WeakReference__Fuse_Resources_FileImageSourceImpl__New_1, 0, true, WeakReference__Fuse_Resources_FileImageSourceImpl__typeof(), ::app::Fuse::Resources::FileImageSourceImpl__typeof()),
        ::uNewFunctionVoid("SetTarget", WeakReference__Fuse_Resources_FileImageSourceImpl__SetTarget, 0, false, ::app::Fuse::Resources::FileImageSourceImpl__typeof()),
        ::uNewFunction("TryGetTarget", WeakReference__Fuse_Resources_FileImageSourceImpl__TryGetTarget, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Resources::FileImageSourceImpl__typeof()));

    ::uRegisterType(type);
    return type;
}

void WeakReference__Fuse_Resources_FileImageSourceImpl___ObjInit(WeakReference__Fuse_Resources_FileImageSourceImpl* __this, ::app::Fuse::Resources::FileImageSourceImpl* target)
{
    __this->_target = target;
}

WeakReference__Fuse_Resources_FileImageSourceImpl* WeakReference__Fuse_Resources_FileImageSourceImpl__New_1(::uStatic* __this, ::app::Fuse::Resources::FileImageSourceImpl* target)
{
    WeakReference__Fuse_Resources_FileImageSourceImpl* inst = (WeakReference__Fuse_Resources_FileImageSourceImpl*)::uAllocObject(sizeof(WeakReference__Fuse_Resources_FileImageSourceImpl), WeakReference__Fuse_Resources_FileImageSourceImpl__typeof());
    inst->_ObjInit(target);
    return inst;
}

void WeakReference__Fuse_Resources_FileImageSourceImpl__SetTarget(WeakReference__Fuse_Resources_FileImageSourceImpl* __this, ::app::Fuse::Resources::FileImageSourceImpl* target)
{
    __this->_target = target;
}

bool WeakReference__Fuse_Resources_FileImageSourceImpl__TryGetTarget(WeakReference__Fuse_Resources_FileImageSourceImpl* __this, ::app::Fuse::Resources::FileImageSourceImpl** target)
{
    ::app::Fuse::Resources::FileImageSourceImpl* result = __this->_target;
    *target = result;
    return result != NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WeakReference__Fuse_Resources_HttpImageSourceImpl__uType* WeakReference__Fuse_Resources_HttpImageSourceImpl__typeof()
{
    static ::uStaticStrong<WeakReference__Fuse_Resources_HttpImageSourceImpl__uType*> type;
    if (type != NULL) return type;

    type = (WeakReference__Fuse_Resources_HttpImageSourceImpl__uType*)::uAllocClassType(sizeof(WeakReference__Fuse_Resources_HttpImageSourceImpl__uType), "Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_target", offsetof(WeakReference__Fuse_Resources_HttpImageSourceImpl, _target));

    type->SetFields(1,
        ::uNewField("_target", NULL, offsetof(WeakReference__Fuse_Resources_HttpImageSourceImpl, _target), ::app::Fuse::Resources::HttpImageSourceImpl__typeof()));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", WeakReference__Fuse_Resources_HttpImageSourceImpl__New_1, 0, true, WeakReference__Fuse_Resources_HttpImageSourceImpl__typeof(), ::app::Fuse::Resources::HttpImageSourceImpl__typeof()),
        ::uNewFunctionVoid("SetTarget", WeakReference__Fuse_Resources_HttpImageSourceImpl__SetTarget, 0, false, ::app::Fuse::Resources::HttpImageSourceImpl__typeof()),
        ::uNewFunction("TryGetTarget", WeakReference__Fuse_Resources_HttpImageSourceImpl__TryGetTarget, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Resources::HttpImageSourceImpl__typeof()));

    ::uRegisterType(type);
    return type;
}

void WeakReference__Fuse_Resources_HttpImageSourceImpl___ObjInit(WeakReference__Fuse_Resources_HttpImageSourceImpl* __this, ::app::Fuse::Resources::HttpImageSourceImpl* target)
{
    __this->_target = target;
}

WeakReference__Fuse_Resources_HttpImageSourceImpl* WeakReference__Fuse_Resources_HttpImageSourceImpl__New_1(::uStatic* __this, ::app::Fuse::Resources::HttpImageSourceImpl* target)
{
    WeakReference__Fuse_Resources_HttpImageSourceImpl* inst = (WeakReference__Fuse_Resources_HttpImageSourceImpl*)::uAllocObject(sizeof(WeakReference__Fuse_Resources_HttpImageSourceImpl), WeakReference__Fuse_Resources_HttpImageSourceImpl__typeof());
    inst->_ObjInit(target);
    return inst;
}

void WeakReference__Fuse_Resources_HttpImageSourceImpl__SetTarget(WeakReference__Fuse_Resources_HttpImageSourceImpl* __this, ::app::Fuse::Resources::HttpImageSourceImpl* target)
{
    __this->_target = target;
}

bool WeakReference__Fuse_Resources_HttpImageSourceImpl__TryGetTarget(WeakReference__Fuse_Resources_HttpImageSourceImpl* __this, ::app::Fuse::Resources::HttpImageSourceImpl** target)
{
    ::app::Fuse::Resources::HttpImageSourceImpl* result = __this->_target;
    *target = result;
    return result != NULL;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WeakReference__object__uType* WeakReference__object__typeof()
{
    static ::uStaticStrong<WeakReference__object__uType*> type;
    if (type != NULL) return type;

    type = (WeakReference__object__uType*)::uAllocClassType(sizeof(WeakReference__object__uType), "Uno.WeakReference<object>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_target", offsetof(WeakReference__object, _target));

    type->SetFields(1,
        ::uNewField("_target", NULL, offsetof(WeakReference__object, _target), ::uObject__typeof()));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", WeakReference__object__New_1, 0, true, WeakReference__object__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetTarget", WeakReference__object__SetTarget, 0, false, ::uObject__typeof()),
        ::uNewFunction("TryGetTarget", WeakReference__object__TryGetTarget, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void WeakReference__object___ObjInit(WeakReference__object* __this, ::uObject* target)
{
    __this->_target = target;
}

WeakReference__object* WeakReference__object__New_1(::uStatic* __this, ::uObject* target)
{
    WeakReference__object* inst = (WeakReference__object*)::uAllocObject(sizeof(WeakReference__object), WeakReference__object__typeof());
    inst->_ObjInit(target);
    return inst;
}

void WeakReference__object__SetTarget(WeakReference__object* __this, ::uObject* target)
{
    __this->_target = target;
}

bool WeakReference__object__TryGetTarget(WeakReference__object* __this, ::uObject** target)
{
    ::uObject* result = __this->_target;
    *target = result;
    return result != NULL;
}

}}
