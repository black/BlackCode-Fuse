// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DIAGNOSTICS_PROFILE_H__
#define __APP_UNO_DIAGNOSTICS_PROFILE_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Diagnostics { struct ProfileData; } } }
namespace app { namespace Uno { namespace Platform { struct Window; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Uno {
namespace Diagnostics {

extern ::uStaticStrong< ::uString*> Profile___appName;
extern bool Profile___insideProfile;
extern bool Profile___isProfiling;
extern ::uStaticStrong< ::app::Uno::Diagnostics::ProfileData*> Profile___profileData;
extern bool Profile___registeredEvents;
extern ::uStaticStrong< ::uString*> Profile___timeStampString;
extern double Profile__StartTimeStamp;

struct Profile__uType : ::uClassType
{
};

Profile__uType* Profile__typeof();

void Profile__AddFunctionId(::uStatic* __this, ::uString* name);
void Profile__Allocate(::uStatic* __this, ::uString* type, ::uObject* obj, int weight);
void Profile__Enter(::uStatic* __this, int functionId);
void Profile__Exit(::uStatic* __this);
void Profile__Free(::uStatic* __this, ::uString* type, ::uObject* obj);
void Profile__Init(::uStatic* __this);
void Profile__RegisterClosingEvent(::uStatic* __this, ::app::Uno::Platform::Window* window, ::uString* appName);
void Profile__Serialize(::uStatic* __this, ::uString* filename);
void Profile__WindowClosed(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args);

}}}


#endif
