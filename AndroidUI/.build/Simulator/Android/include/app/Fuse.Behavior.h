// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BEHAVIOR_H__
#define __APP_FUSE_BEHAVIOR_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {

struct Behavior;

struct Behavior__uType : ::uClassType
{
    void(*__fp_OnRooted)(Behavior*, ::app::Fuse::Node*);
    void(*__fp_OnUnrooted)(Behavior*, ::app::Fuse::Node*);
};

Behavior__uType* Behavior__typeof();

void Behavior___ObjInit(Behavior* __this);
bool Behavior__get_IsRooted(Behavior* __this);
bool Behavior__get_OverridesDefault(Behavior* __this);
void Behavior__Rooted(Behavior* __this, ::app::Fuse::Node* e);
void Behavior__Unrooted(Behavior* __this, ::app::Fuse::Node* e);

struct Behavior : ::uObject
{
    bool AddedByStyle;
    bool _isRooted;

    void _ObjInit() { Behavior___ObjInit(this); }
    bool IsRooted() { return Behavior__get_IsRooted(this); }
    bool OverridesDefault() { return Behavior__get_OverridesDefault(this); }
    void OnRooted(::app::Fuse::Node* e) { (((Behavior__uType*)this->__obj_type)->__fp_OnRooted)(this, e); }
    void OnUnrooted(::app::Fuse::Node* e) { (((Behavior__uType*)this->__obj_type)->__fp_OnUnrooted)(this, e); }
    void Rooted(::app::Fuse::Node* e) { Behavior__Rooted(this, e); }
    void Unrooted(::app::Fuse::Node* e) { Behavior__Unrooted(this, e); }
};

}}


#endif
