// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Android{namespace Base{struct Versions;}}}

namespace g{
namespace Android{
namespace Base{

// public static extern class Versions :2478
// {
uClassType* Versions_typeof();
void Versions__get_ApiLevel_fn(int* __retval);
void Versions__Initialize_fn();

struct Versions : uObject
{
    static int _api_;
    static int& _api() { return Versions_typeof()->Init(), _api_; }
    static uSStrong<uString*> _release_;
    static uSStrong<uString*>& _release() { return Versions_typeof()->Init(), _release_; }

    static void Initialize();
    static int ApiLevel();
};
// }

}}} // ::g::Android::Base
