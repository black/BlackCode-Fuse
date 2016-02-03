// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.UserEvents\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct UserEventArg;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class UserEventArg :129
// {
uType* UserEventArg_typeof();
void UserEventArg__ctor__fn(UserEventArg* __this, uString* name);
void UserEventArg__get_BoolValue_fn(UserEventArg* __this, bool* __retval);
void UserEventArg__set_BoolValue_fn(UserEventArg* __this, bool* value);
void UserEventArg__get_FloatValue_fn(UserEventArg* __this, float* __retval);
void UserEventArg__set_FloatValue_fn(UserEventArg* __this, float* value);
void UserEventArg__get_IntValue_fn(UserEventArg* __this, int* __retval);
void UserEventArg__set_IntValue_fn(UserEventArg* __this, int* value);
void UserEventArg__get_Name_fn(UserEventArg* __this, uString** __retval);
void UserEventArg__set_Name_fn(UserEventArg* __this, uString* value);
void UserEventArg__New1_fn(uString* name, UserEventArg** __retval);
void UserEventArg__get_StringValue_fn(UserEventArg* __this, uString** __retval);
void UserEventArg__set_StringValue_fn(UserEventArg* __this, uString* value);
void UserEventArg__get_Value_fn(UserEventArg* __this, uObject** __retval);
void UserEventArg__set_Value_fn(UserEventArg* __this, uObject* value);

struct UserEventArg : uObject
{
    uStrong<uString*> _Name;
    uStrong<uObject*> _Value;

    void ctor_(uString* name);
    bool BoolValue();
    void BoolValue(bool value);
    float FloatValue();
    void FloatValue(float value);
    int IntValue();
    void IntValue(int value);
    uString* Name();
    void Name(uString* value);
    uString* StringValue();
    void StringValue(uString* value);
    uObject* Value();
    void Value(uObject* value);
    static UserEventArg* New1(uString* name);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
