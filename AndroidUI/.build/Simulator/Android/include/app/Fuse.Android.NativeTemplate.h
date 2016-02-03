// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_NATIVE_TEMPLATE_H__
#define __APP_FUSE_ANDROID_NATIVE_TEMPLATE_H__

#include <app/Uno.Object.h>
#include <app/Uno.UX.ITemplate.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Android {

struct NativeTemplate;

struct NativeTemplate__uType : ::uClassType
{
    ::app::Uno::UX::ITemplate __interface_0;
};

NativeTemplate__uType* NativeTemplate__typeof();

void NativeTemplate___ObjInit(NativeTemplate* __this);
bool NativeTemplate__Apply(NativeTemplate* __this, ::uObject* obj);
bool NativeTemplate__HasGraphicsView(NativeTemplate* __this, ::app::Fuse::Node* node);
bool NativeTemplate__HaveGraphicsViewAncestor(NativeTemplate* __this, ::app::Fuse::Node* node);
NativeTemplate* NativeTemplate__New_1(::uStatic* __this);

struct NativeTemplate : ::uObject
{
    void _ObjInit() { NativeTemplate___ObjInit(this); }
    bool Apply(::uObject* obj) { return NativeTemplate__Apply(this, obj); }
    bool HasGraphicsView(::app::Fuse::Node* node) { return NativeTemplate__HasGraphicsView(this, node); }
    bool HaveGraphicsViewAncestor(::app::Fuse::Node* node) { return NativeTemplate__HaveGraphicsViewAncestor(this, node); }
};

}}}


#endif
