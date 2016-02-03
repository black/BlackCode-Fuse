// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_TRIGGER_ACTION_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_TRIGGER_ACTION_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct TriggerAction;

struct TriggerAction__uType : ::uClassType
{
    void(*__fp_Perform)(TriggerAction*, ::app::Fuse::Node*);
};

TriggerAction__uType* TriggerAction__typeof();

void TriggerAction___ObjInit(TriggerAction* __this);
float TriggerAction__get_AtProgress(TriggerAction* __this);
float TriggerAction__get_Delay(TriggerAction* __this);
int TriggerAction__get_Direction(TriggerAction* __this);
bool TriggerAction__get_IsActive(TriggerAction* __this);
bool TriggerAction__get_IsProgressTriggered(TriggerAction* __this);
::app::Fuse::Node* TriggerAction__get_TargetNode(TriggerAction* __this);
void TriggerAction__PerformFromNode(TriggerAction* __this, ::app::Fuse::Node* target);
float TriggerAction__ProgressWhen(TriggerAction* __this, float totalDuration);
void TriggerAction__set_AtProgress(TriggerAction* __this, float value);
void TriggerAction__set_Delay(TriggerAction* __this, float value);
void TriggerAction__set_Direction(TriggerAction* __this, int value);
void TriggerAction__set_IsActive(TriggerAction* __this, bool value);
void TriggerAction__set_TargetNode(TriggerAction* __this, ::app::Fuse::Node* value);

struct TriggerAction : ::uObject
{
    float _progress;
    bool _hasProgress;
    float _delay;
    bool _hasDelay;
    bool _isActive;
    int _direction;
    ::uStrong< ::app::Fuse::Node*> _TargetNode;

    void _ObjInit() { TriggerAction___ObjInit(this); }
    float AtProgress() { return TriggerAction__get_AtProgress(this); }
    float Delay() { return TriggerAction__get_Delay(this); }
    int Direction() { return TriggerAction__get_Direction(this); }
    bool IsActive() { return TriggerAction__get_IsActive(this); }
    bool IsProgressTriggered() { return TriggerAction__get_IsProgressTriggered(this); }
    ::app::Fuse::Node* TargetNode() { return TriggerAction__get_TargetNode(this); }
    void Perform(::app::Fuse::Node* target) { (((TriggerAction__uType*)this->__obj_type)->__fp_Perform)(this, target); }
    void PerformFromNode(::app::Fuse::Node* target) { TriggerAction__PerformFromNode(this, target); }
    float ProgressWhen(float totalDuration) { return TriggerAction__ProgressWhen(this, totalDuration); }
    void AtProgress(float value) { TriggerAction__set_AtProgress(this, value); }
    void Delay(float value) { TriggerAction__set_Delay(this, value); }
    void Direction(int value) { TriggerAction__set_Direction(this, value); }
    void IsActive(bool value) { TriggerAction__set_IsActive(this, value); }
    void TargetNode(::app::Fuse::Node* value) { TriggerAction__set_TargetNode(this, value); }
};

}}}}


#endif
