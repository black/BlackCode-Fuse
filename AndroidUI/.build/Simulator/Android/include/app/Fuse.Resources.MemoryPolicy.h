// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_MEMORY_POLICY_H__
#define __APP_FUSE_RESOURCES_MEMORY_POLICY_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Resources {

struct MemoryPolicy;

extern ::uStaticStrong< MemoryPolicy*> MemoryPolicy__PreloadRetain;
extern ::uStaticStrong< MemoryPolicy*> MemoryPolicy__UnloadUnused;

struct MemoryPolicy__uType : ::uClassType
{
};

MemoryPolicy__uType* MemoryPolicy__typeof();

void MemoryPolicy___ObjInit(MemoryPolicy* __this);
void MemoryPolicy___TypeInit(::uStatic* __this);
bool MemoryPolicy__get_AllowPinnedFree(MemoryPolicy* __this);
bool MemoryPolicy__get_BundlePreload(MemoryPolicy* __this);
bool MemoryPolicy__get_UnloadInBackground(MemoryPolicy* __this);
bool MemoryPolicy__get_UnpinInvisible(MemoryPolicy* __this);
double MemoryPolicy__get_UnusedTimeout(MemoryPolicy* __this);
MemoryPolicy* MemoryPolicy__New_1(::uStatic* __this);
void MemoryPolicy__set_AllowPinnedFree(MemoryPolicy* __this, bool value);
void MemoryPolicy__set_BundlePreload(MemoryPolicy* __this, bool value);
void MemoryPolicy__set_UnloadInBackground(MemoryPolicy* __this, bool value);
void MemoryPolicy__set_UnpinInvisible(MemoryPolicy* __this, bool value);
void MemoryPolicy__set_UnusedTimeout(MemoryPolicy* __this, double value);
bool MemoryPolicy__ShouldSoftDispose(MemoryPolicy* __this, int dr, ::uObject* resource);

struct MemoryPolicy : ::uObject
{
    bool _BundlePreload;
    bool _UnloadInBackground;
    double _UnusedTimeout;
    bool _AllowPinnedFree;
    bool _UnpinInvisible;

    void _ObjInit() { MemoryPolicy___ObjInit(this); }
    bool AllowPinnedFree() { return MemoryPolicy__get_AllowPinnedFree(this); }
    bool BundlePreload() { return MemoryPolicy__get_BundlePreload(this); }
    bool UnloadInBackground() { return MemoryPolicy__get_UnloadInBackground(this); }
    bool UnpinInvisible() { return MemoryPolicy__get_UnpinInvisible(this); }
    double UnusedTimeout() { return MemoryPolicy__get_UnusedTimeout(this); }
    void AllowPinnedFree(bool value) { MemoryPolicy__set_AllowPinnedFree(this, value); }
    void BundlePreload(bool value) { MemoryPolicy__set_BundlePreload(this, value); }
    void UnloadInBackground(bool value) { MemoryPolicy__set_UnloadInBackground(this, value); }
    void UnpinInvisible(bool value) { MemoryPolicy__set_UnpinInvisible(this, value); }
    void UnusedTimeout(double value) { MemoryPolicy__set_UnusedTimeout(this, value); }
    bool ShouldSoftDispose(int dr, ::uObject* resource) { return MemoryPolicy__ShouldSoftDispose(this, dr, resource); }
};

}}}


#endif
