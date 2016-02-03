// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DIAGNOSTICS_PROFILE_DATA_H__
#define __APP_UNO_DIAGNOSTICS_PROFILE_DATA_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__string; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Diagnostics_ProfileEvent; } } }
namespace app { namespace Uno { namespace Diagnostics { struct IdMap__string; } } }

namespace app {
namespace Uno {
namespace Diagnostics {

struct ProfileData;

struct ProfileData__uType : ::uClassType
{
};

ProfileData__uType* ProfileData__typeof();

void ProfileData___ObjInit(ProfileData* __this);
ProfileData* ProfileData__New_1(::uStatic* __this);

struct ProfileData : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__string*> FunctionIds;
    ::uStrong< ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent*> ProfileEvents;
    ::uStrong< ::app::Uno::Diagnostics::IdMap__string*> TypeMap;

    void _ObjInit() { ProfileData___ObjInit(this); }
};

}}}


#endif
