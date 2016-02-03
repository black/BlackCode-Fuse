#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Collections.List__string.h>
#include <app/Uno.Collections.List__Uno_Diagnostics_ProfileEvent.h>
#include <app/Uno.Collections.List1_Enumerator__string.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Diagnostics_ProfileEvent.h>
#include <app/Uno.DateTime.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.AllocateEvent.h>
#include <app/Uno.Diagnostics.AlwaysProfileAttribute.h>
#include <app/Uno.Diagnostics.AssertionHandler.h>
#include <app/Uno.Diagnostics.Clock.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Diagnostics.EnterEvent.h>
#include <app/Uno.Diagnostics.EventType.h>
#include <app/Uno.Diagnostics.ExitEvent.h>
#include <app/Uno.Diagnostics.FreeEvent.h>
#include <app/Uno.Diagnostics.IdMap__string.h>
#include <app/Uno.Diagnostics.LogHandler.h>
#include <app/Uno.Diagnostics.NeverProfileAttribute.h>
#include <app/Uno.Diagnostics.Profile.h>
#include <app/Uno.Diagnostics.ProfileData.h>
#include <app/Uno.Diagnostics.ProfileEvent.h>
#include <app/Uno.Diagnostics.ProfileSerializer.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.IO.BinaryWriter.h>
#include <app/Uno.IO.MemoryStream.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.Window.h>
#include <app/Uno.Runtime.Implementation.ClockImpl.h>
#include <app/Uno.Runtime.Implementation.DebugImpl.h>
#include <app/Uno.Runtime.Implementation.ProfileImpl.h>
#include <app/Uno.String.h>
#include <app/Uno.Time.ZonedDateTime.h>

namespace app {
namespace Uno {
namespace Diagnostics {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AllocateEvent__uType* AllocateEvent__typeof()
{
    static ::uStaticStrong<AllocateEvent__uType*> type;
    if (type != NULL) return type;

    type = (AllocateEvent__uType*)::uAllocClassType(sizeof(AllocateEvent__uType), "Uno.Diagnostics.AllocateEvent", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Diagnostics::ProfileEvent__typeof());
    type->__fp_get_Type = (int(*)(::app::Uno::Diagnostics::ProfileEvent*))AllocateEvent__get_Type;

    type->SetFields(3,
        ::uNewField("Class", NULL, offsetof(AllocateEvent, Class), ::app::Uno::Int__typeof()),
        ::uNewField("Id", NULL, offsetof(AllocateEvent, Id), ::app::Uno::Int__typeof()),
        ::uNewField("Weight", NULL, offsetof(AllocateEvent, Weight), ::app::Uno::Int__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", AllocateEvent__New_1, 0, true, AllocateEvent__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void AllocateEvent___ObjInit_1(AllocateEvent* __this, int cls, int id, int weight)
{
    ::app::Uno::Diagnostics::ProfileEvent___ObjInit(__this);
    __this->Class = cls;
    __this->Id = id;
    __this->Weight = weight;
}

int AllocateEvent__get_Type(AllocateEvent* __this)
{
    return 2;
}

AllocateEvent* AllocateEvent__New_1(::uStatic* __this, int cls, int id, int weight)
{
    AllocateEvent* inst = (AllocateEvent*)::uAllocObject(sizeof(AllocateEvent), AllocateEvent__typeof());
    inst->_ObjInit_1(cls, id, weight);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AlwaysProfileAttribute__uType* AlwaysProfileAttribute__typeof()
{
    static ::uStaticStrong<AlwaysProfileAttribute__uType*> type;
    if (type != NULL) return type;

    type = (AlwaysProfileAttribute__uType*)::uAllocClassType(sizeof(AlwaysProfileAttribute__uType), "Uno.Diagnostics.AlwaysProfileAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", AlwaysProfileAttribute__New_1, 0, true, AlwaysProfileAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void AlwaysProfileAttribute___ObjInit_1(AlwaysProfileAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

AlwaysProfileAttribute* AlwaysProfileAttribute__New_1(::uStatic* __this)
{
    AlwaysProfileAttribute* inst = (AlwaysProfileAttribute*)::uAllocObject(sizeof(AlwaysProfileAttribute), AlwaysProfileAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* AssertionHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Diagnostics.AssertionHandler", 5);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::Bool__typeof(),
        ::app::Uno::String__typeof(),
        ::app::Uno::String__typeof(),
        ::app::Uno::Int__typeof(),
        ::uGetArrayType(::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Clock__uType* Clock__typeof()
{
    static ::uStaticStrong<Clock__uType*> type;
    if (type != NULL) return type;

    type = (Clock__uType*)::uAllocClassType(sizeof(Clock__uType), "Uno.Diagnostics.Clock");

    type->SetFunctions(3,
        ::uNewFunction("GetSeconds", Clock__GetSeconds, 0, true, ::app::Uno::Double__typeof()),
        ::uNewFunction("GetTicks", Clock__GetTicks, 0, true, ::app::Uno::Long__typeof()),
        ::uNewFunction("GetTimezoneOffset", Clock__GetTimezoneOffset, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

double Clock__GetSeconds(::uStatic* __this)
{
    return ::app::Uno::Runtime::Implementation::ClockImpl__GetSeconds(NULL);
}

::uLong Clock__GetTicks(::uStatic* __this)
{
    return ::app::Uno::Runtime::Implementation::ClockImpl__GetTicks(NULL);
}

int Clock__GetTimezoneOffset(::uStatic* __this, int year, int month, int day)
{
    return ::app::Uno::Runtime::Implementation::ClockImpl__GetTimezoneOffset(NULL, year, month, day);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uDelegate*> Debug___assertionHandler;
::uStaticStrong< ::uString*> Debug___indentStr;
::uStaticStrong< ::uDelegate*> Debug___logHandler;

Debug__uType* Debug__typeof()
{
    static ::uStaticStrong<Debug__uType*> type;
    if (type != NULL) return type;

    type = (Debug__uType*)::uAllocClassType(sizeof(Debug__uType), "Uno.Diagnostics.Debug");

    type->SetFields(3,
        ::uNewField("_assertionHandler", &Debug___assertionHandler, 0, ::app::Uno::Diagnostics::AssertionHandler__typeof()),
        ::uNewField("_indentStr", &Debug___indentStr, 0, ::app::Uno::String__typeof()),
        ::uNewField("_logHandler", &Debug___logHandler, 0, ::app::Uno::Diagnostics::LogHandler__typeof()));

    type->SetFunctions(16,
        ::uNewFunctionVoid("Alert", Debug__Alert, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Alert", Debug__Alert_1, 0, true, ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Diagnostics::DebugMessageType__typeof()),
        ::uNewFunctionVoid("Assert", Debug__Assert, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("Confirm", Debug__Confirm, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Confirm", Debug__Confirm_1, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Diagnostics::DebugMessageType__typeof()),
        ::uNewFunctionVoid("EmitLog", Debug__EmitLog, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Diagnostics::DebugMessageType__typeof()),
        ::uNewFunctionVoid("IndentLog", Debug__IndentLog, 0, true),
        ::uNewFunctionVoid("Log", Debug__Log, 0, true, ::uObject__typeof()),
        ::uNewFunctionVoid("Log", Debug__Log_1, 0, true, ::uObject__typeof(), ::app::Uno::Diagnostics::DebugMessageType__typeof()),
        ::uNewFunctionVoid("Log", Debug__Log_2, 0, true, ::uObject__typeof(), ::app::Uno::Diagnostics::DebugMessageType__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Log", Debug__Log_3, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Log", Debug__Log_4, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Diagnostics::DebugMessageType__typeof()),
        ::uNewFunctionVoid("Log", Debug__Log_5, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Diagnostics::DebugMessageType__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("SetAssertionHandler", Debug__SetAssertionHandler, 0, true, ::app::Uno::Diagnostics::AssertionHandler__typeof()),
        ::uNewFunctionVoid("SetLogHandler", Debug__SetLogHandler, 0, true, ::app::Uno::Diagnostics::LogHandler__typeof()),
        ::uNewFunctionVoid("UnindentLog", Debug__UnindentLog, 0, true));

    ::uRegisterType(type);
    return type;
}

void Debug___TypeInit(::uStatic* __this)
{
    Debug___indentStr = ::uGetConstString("");
}

void Debug__Alert(::uStatic* __this, ::uString* message)
{
    ::app::Uno::Runtime::Implementation::DebugImpl__Alert(NULL, message, ::uGetConstString("Alert"), 0);
}

void Debug__Alert_1(::uStatic* __this, ::uString* message, ::uString* caption, int type)
{
    ::app::Uno::Runtime::Implementation::DebugImpl__Alert(NULL, message, caption, type);
}

void Debug__Assert(::uStatic* __this, bool value, ::uString* expression, ::uString* filename, int line, ::uArray* operands)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)Debug___assertionHandler, NULL))
    {
        ::uPtr< ::uDelegate*>(Debug___assertionHandler)->InvokeVoid< bool, ::uString*, ::uString*, int, ::uArray*>(value, expression, filename, line, operands);
    }

    if (!value)
    {
        Debug__EmitLog(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Assertion Failed: '"), expression), ::uGetConstString("' in ")), filename), ::uGetConstString("(")), ::uBox< int>(::app::Uno::Int__typeof(), line)), ::uGetConstString(")")), 3);
    }
}

bool Debug__Confirm(::uStatic* __this, ::uString* message)
{
    return ::app::Uno::Runtime::Implementation::DebugImpl__Confirm(NULL, message, ::uGetConstString("Confirm"), 0);
}

bool Debug__Confirm_1(::uStatic* __this, ::uString* message, ::uString* caption, int type)
{
    return ::app::Uno::Runtime::Implementation::DebugImpl__Confirm(NULL, message, caption, type);
}

void Debug__EmitLog(::uStatic* __this, ::uString* message, int type)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)Debug___logHandler, NULL))
    {
        ::uPtr< ::uDelegate*>(Debug___logHandler)->InvokeVoid< ::uString*, int>(::app::Uno::String__op_Addition_2(NULL, Debug___indentStr, message), type);
    }

    ::app::Uno::Runtime::Implementation::DebugImpl__Log(NULL, ::app::Uno::String__op_Addition_2(NULL, Debug___indentStr, message), type);
}

void Debug__IndentLog(::uStatic* __this)
{
    Debug___indentStr = ::app::Uno::String__op_Addition_2(NULL, Debug___indentStr, ::uGetConstString("\t"));
}

void Debug__Log(::uStatic* __this, ::uObject* message)
{
    Debug__EmitLog(NULL, ::app::Uno::Object::ToString(::uPtr< ::uObject*>(message)), 0);
}

void Debug__Log_1(::uStatic* __this, ::uObject* message, int type)
{
    Debug__EmitLog(NULL, ::app::Uno::Object::ToString(::uPtr< ::uObject*>(message)), type);
}

void Debug__Log_2(::uStatic* __this, ::uObject* message, int type, ::uString* filename, int line)
{
    Debug__EmitLog(NULL, ::app::Uno::Object::ToString(::uPtr< ::uObject*>((message != NULL) ? message : (::uObject*)::app::Uno::String__Empty)), type);
}

void Debug__Log_3(::uStatic* __this, ::uString* message)
{
    Debug__EmitLog(NULL, message, 0);
}

void Debug__Log_4(::uStatic* __this, ::uString* message, int type)
{
    Debug__EmitLog(NULL, message, type);
}

void Debug__Log_5(::uStatic* __this, ::uString* message, int type, ::uString* filename, int line)
{
    Debug__EmitLog(NULL, message, type);
}

void Debug__SetAssertionHandler(::uStatic* __this, ::uDelegate* handler)
{
    Debug___assertionHandler = handler;
}

void Debug__SetLogHandler(::uStatic* __this, ::uDelegate* handler)
{
    Debug___logHandler = handler;
}

void Debug__UnindentLog(::uStatic* __this)
{
    Debug___indentStr = ::app::Uno::String::Substring_1(::uPtr< ::uString*>(Debug___indentStr), 0, ::uPtr< ::uString*>(Debug___indentStr)->Length() - 1);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* DebugMessageType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Diagnostics.DebugMessageType", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "Undefined", 0LL,
        "Debug", 1LL,
        "Information", 2LL,
        "Error", 3LL,
        "Warning", 4LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnterEvent__uType* EnterEvent__typeof()
{
    static ::uStaticStrong<EnterEvent__uType*> type;
    if (type != NULL) return type;

    type = (EnterEvent__uType*)::uAllocClassType(sizeof(EnterEvent__uType), "Uno.Diagnostics.EnterEvent", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Diagnostics::ProfileEvent__typeof());
    type->__fp_get_Type = (int(*)(::app::Uno::Diagnostics::ProfileEvent*))EnterEvent__get_Type;

    type->SetFields(1,
        ::uNewField("Id", NULL, offsetof(EnterEvent, Id), ::app::Uno::Int__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", EnterEvent__New_1, 0, true, EnterEvent__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void EnterEvent___ObjInit_1(EnterEvent* __this, int id)
{
    ::app::Uno::Diagnostics::ProfileEvent___ObjInit(__this);
    __this->Id = id;
}

int EnterEvent__get_Type(EnterEvent* __this)
{
    return 0;
}

EnterEvent* EnterEvent__New_1(::uStatic* __this, int id)
{
    EnterEvent* inst = (EnterEvent*)::uAllocObject(sizeof(EnterEvent), EnterEvent__typeof());
    inst->_ObjInit_1(id);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* EventType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Diagnostics.EventType", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "Enter", 0LL,
        "Exit", 1LL,
        "Allocate", 2LL,
        "Free", 3LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ExitEvent__uType* ExitEvent__typeof()
{
    static ::uStaticStrong<ExitEvent__uType*> type;
    if (type != NULL) return type;

    type = (ExitEvent__uType*)::uAllocClassType(sizeof(ExitEvent__uType), "Uno.Diagnostics.ExitEvent", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Diagnostics::ProfileEvent__typeof());
    type->__fp_get_Type = (int(*)(::app::Uno::Diagnostics::ProfileEvent*))ExitEvent__get_Type;

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ExitEvent__New_1, 0, true, ExitEvent__typeof()));

    ::uRegisterType(type);
    return type;
}

void ExitEvent___ObjInit_1(ExitEvent* __this)
{
    ::app::Uno::Diagnostics::ProfileEvent___ObjInit(__this);
}

int ExitEvent__get_Type(ExitEvent* __this)
{
    return 1;
}

ExitEvent* ExitEvent__New_1(::uStatic* __this)
{
    ExitEvent* inst = (ExitEvent*)::uAllocObject(sizeof(ExitEvent), ExitEvent__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FreeEvent__uType* FreeEvent__typeof()
{
    static ::uStaticStrong<FreeEvent__uType*> type;
    if (type != NULL) return type;

    type = (FreeEvent__uType*)::uAllocClassType(sizeof(FreeEvent__uType), "Uno.Diagnostics.FreeEvent", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Diagnostics::ProfileEvent__typeof());
    type->__fp_get_Type = (int(*)(::app::Uno::Diagnostics::ProfileEvent*))FreeEvent__get_Type;

    type->SetFields(2,
        ::uNewField("Class", NULL, offsetof(FreeEvent, Class), ::app::Uno::Int__typeof()),
        ::uNewField("Id", NULL, offsetof(FreeEvent, Id), ::app::Uno::Int__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", FreeEvent__New_1, 0, true, FreeEvent__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void FreeEvent___ObjInit_1(FreeEvent* __this, int cls, int id)
{
    ::app::Uno::Diagnostics::ProfileEvent___ObjInit(__this);
    __this->Class = cls;
    __this->Id = id;
}

int FreeEvent__get_Type(FreeEvent* __this)
{
    return 3;
}

FreeEvent* FreeEvent__New_1(::uStatic* __this, int cls, int id)
{
    FreeEvent* inst = (FreeEvent*)::uAllocObject(sizeof(FreeEvent), FreeEvent__typeof());
    inst->_ObjInit_1(cls, id);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* LogHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Diagnostics.LogHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::String__typeof(),
        ::app::Uno::Diagnostics::DebugMessageType__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NeverProfileAttribute__uType* NeverProfileAttribute__typeof()
{
    static ::uStaticStrong<NeverProfileAttribute__uType*> type;
    if (type != NULL) return type;

    type = (NeverProfileAttribute__uType*)::uAllocClassType(sizeof(NeverProfileAttribute__uType), "Uno.Diagnostics.NeverProfileAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", NeverProfileAttribute__New_1, 0, true, NeverProfileAttribute__typeof()));

    ::uRegisterType(type);
    return type;
}

void NeverProfileAttribute___ObjInit_1(NeverProfileAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

NeverProfileAttribute* NeverProfileAttribute__New_1(::uStatic* __this)
{
    NeverProfileAttribute* inst = (NeverProfileAttribute*)::uAllocObject(sizeof(NeverProfileAttribute), NeverProfileAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uString*> Profile___appName;
bool Profile___insideProfile;
bool Profile___isProfiling;
::uStaticStrong< ::app::Uno::Diagnostics::ProfileData*> Profile___profileData;
bool Profile___registeredEvents;
::uStaticStrong< ::uString*> Profile___timeStampString;
double Profile__StartTimeStamp;

Profile__uType* Profile__typeof()
{
    static ::uStaticStrong<Profile__uType*> type;
    if (type != NULL) return type;

    type = (Profile__uType*)::uAllocClassType(sizeof(Profile__uType), "Uno.Diagnostics.Profile");

    type->SetFields(7,
        ::uNewField("_appName", &Profile___appName, 0, ::app::Uno::String__typeof()),
        ::uNewField("_insideProfile", &Profile___insideProfile, 0, ::app::Uno::Bool__typeof()),
        ::uNewField("_isProfiling", &Profile___isProfiling, 0, ::app::Uno::Bool__typeof()),
        ::uNewField("_profileData", &Profile___profileData, 0, ::app::Uno::Diagnostics::ProfileData__typeof()),
        ::uNewField("_registeredEvents", &Profile___registeredEvents, 0, ::app::Uno::Bool__typeof()),
        ::uNewField("_timeStampString", &Profile___timeStampString, 0, ::app::Uno::String__typeof()),
        ::uNewField("StartTimeStamp", &Profile__StartTimeStamp, 0, ::app::Uno::Double__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("AddFunctionId", Profile__AddFunctionId, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Allocate", Profile__Allocate, 0, true, ::app::Uno::String__typeof(), ::uObject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Enter", Profile__Enter, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Exit", Profile__Exit, 0, true),
        ::uNewFunctionVoid("Free", Profile__Free, 0, true, ::app::Uno::String__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("Init", Profile__Init, 0, true),
        ::uNewFunctionVoid("RegisterClosingEvent", Profile__RegisterClosingEvent, 0, true, ::app::Uno::Platform::Window__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Serialize", Profile__Serialize, 0, true, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("WindowClosed", Profile__WindowClosed, 0, true, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()));

    ::uRegisterType(type);
    return type;
}

void Profile__AddFunctionId(::uStatic* __this, ::uString* name)
{
    ::uPtr< ::app::Uno::Collections::List__string*>(::uPtr< ::app::Uno::Diagnostics::ProfileData*>(Profile___profileData)->FunctionIds)->Add(name);
}

void Profile__Allocate(::uStatic* __this, ::uString* type, ::uObject* obj, int weight)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent*>(::uPtr< ::app::Uno::Diagnostics::ProfileData*>(Profile___profileData)->ProfileEvents)->Add((::app::Uno::Diagnostics::ProfileEvent*)::app::Uno::Diagnostics::AllocateEvent__New_1(NULL, ::uPtr< ::app::Uno::Diagnostics::IdMap__string*>(::uPtr< ::app::Uno::Diagnostics::ProfileData*>(Profile___profileData)->TypeMap)->IdFor(type), 0, weight));
}

void Profile__Enter(::uStatic* __this, int functionId)
{
    if (!Profile___isProfiling || Profile___insideProfile)
    {
        return;
    }

    Profile___insideProfile = true;
    ::uPtr< ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent*>(::uPtr< ::app::Uno::Diagnostics::ProfileData*>(Profile___profileData)->ProfileEvents)->Add((::app::Uno::Diagnostics::ProfileEvent*)::app::Uno::Diagnostics::EnterEvent__New_1(NULL, functionId));
    Profile___insideProfile = false;
}

void Profile__Exit(::uStatic* __this)
{
    if (!Profile___isProfiling || Profile___insideProfile)
    {
        return;
    }

    Profile___insideProfile = true;
    ::uPtr< ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent*>(::uPtr< ::app::Uno::Diagnostics::ProfileData*>(Profile___profileData)->ProfileEvents)->Add((::app::Uno::Diagnostics::ProfileEvent*)::app::Uno::Diagnostics::ExitEvent__New_1(NULL));
    Profile___insideProfile = false;
}

void Profile__Free(::uStatic* __this, ::uString* type, ::uObject* obj)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent*>(::uPtr< ::app::Uno::Diagnostics::ProfileData*>(Profile___profileData)->ProfileEvents)->Add((::app::Uno::Diagnostics::ProfileEvent*)::app::Uno::Diagnostics::FreeEvent__New_1(NULL, ::uPtr< ::app::Uno::Diagnostics::IdMap__string*>(::uPtr< ::app::Uno::Diagnostics::ProfileData*>(Profile___profileData)->TypeMap)->IdFor(type), 0));
}

void Profile__Init(::uStatic* __this)
{
    ::uArray* array_123;
    Profile___profileData = ::app::Uno::Diagnostics::ProfileData__New_1(NULL);
    Profile___isProfiling = true;
    ::app::Uno::Time::ZonedDateTime* now = ::app::Uno::DateTime__get_Now(NULL);
    Profile___timeStampString = ::app::Uno::String__Format(NULL, ::uGetConstString("{0:D4}{1:D2}{2:D2}-{3:D2}{4:D2}"), (array_123 = ::uNewArray(::uObject__typeof(), 5), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), ::uPtr< ::app::Uno::Time::ZonedDateTime*>(now)->Year()), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(1) = ::uBox< int>(::app::Uno::Int__typeof(), ::uPtr< ::app::Uno::Time::ZonedDateTime*>(now)->Month()), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(2) = ::uBox< int>(::app::Uno::Int__typeof(), ::uPtr< ::app::Uno::Time::ZonedDateTime*>(now)->Day()), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(3) = ::uBox< int>(::app::Uno::Int__typeof(), ::uPtr< ::app::Uno::Time::ZonedDateTime*>(now)->Hour()), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(4) = ::uBox< int>(::app::Uno::Int__typeof(), ::uPtr< ::app::Uno::Time::ZonedDateTime*>(now)->Minute()), array_123));
    Profile__StartTimeStamp = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL);
}

void Profile__RegisterClosingEvent(::uStatic* __this, ::app::Uno::Platform::Window* window, ::uString* appName)
{
    if (Profile___registeredEvents)
    {
        return;
    }

    Profile___appName = appName;
    ::uPtr< ::app::Uno::Platform::Window*>(window)->add_Closed(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Profile__WindowClosed));
    Profile___registeredEvents = true;
}

void Profile__Serialize(::uStatic* __this, ::uString* filename)
{
    Profile___isProfiling = false;
    ::app::Uno::IO::MemoryStream* stream = ::app::Uno::IO::MemoryStream__New_1(NULL);
    ::app::Uno::Diagnostics::ProfileSerializer__Serialize_4(NULL, Profile___profileData, stream);
    filename = ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, filename, ::uGetConstString(".")), Profile___timeStampString), ::uGetConstString(".data"));
    ::app::Uno::Runtime::Implementation::ProfileImpl__Write(NULL, filename, ::uPtr< ::app::Uno::IO::MemoryStream*>(stream)->GetBuffer(), 0, (int)::uPtr< ::app::Uno::IO::MemoryStream*>(stream)->Length());
}

void Profile__WindowClosed(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    Profile__Serialize(NULL, Profile___appName);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ProfileData__uType* ProfileData__typeof()
{
    static ::uStaticStrong<ProfileData__uType*> type;
    if (type != NULL) return type;

    type = (ProfileData__uType*)::uAllocClassType(sizeof(ProfileData__uType), "Uno.Diagnostics.ProfileData", false, 0, 3, 0);

    type->SetStrongRefs(
        "FunctionIds", offsetof(ProfileData, FunctionIds),
        "ProfileEvents", offsetof(ProfileData, ProfileEvents),
        "TypeMap", offsetof(ProfileData, TypeMap));

    type->SetFields(3,
        ::uNewField("FunctionIds", NULL, offsetof(ProfileData, FunctionIds), ::app::Uno::Collections::List__string__typeof()),
        ::uNewField("ProfileEvents", NULL, offsetof(ProfileData, ProfileEvents), ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent__typeof()),
        ::uNewField("TypeMap", NULL, offsetof(ProfileData, TypeMap), ::app::Uno::Diagnostics::IdMap__string__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ProfileData__New_1, 0, true, ProfileData__typeof()));

    ::uRegisterType(type);
    return type;
}

void ProfileData___ObjInit(ProfileData* __this)
{
    __this->FunctionIds = ::app::Uno::Collections::List__string__New_1(NULL);
    __this->ProfileEvents = ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent__New_1(NULL);
    __this->TypeMap = ::app::Uno::Diagnostics::IdMap__string__New_1(NULL, true);
}

ProfileData* ProfileData__New_1(::uStatic* __this)
{
    ProfileData* inst = (ProfileData*)::uAllocObject(sizeof(ProfileData), ProfileData__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ProfileEvent__uType* ProfileEvent__typeof()
{
    static ::uStaticStrong<ProfileEvent__uType*> type;
    if (type != NULL) return type;

    type = (ProfileEvent__uType*)::uAllocClassType(sizeof(ProfileEvent__uType), "Uno.Diagnostics.ProfileEvent", false, 0, 0, 0);

    type->SetFields(1,
        ::uNewField("TimeStamp", NULL, offsetof(ProfileEvent, TimeStamp), ::app::Uno::Double__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("get_Type", type->__fp_get_Type, offsetof(ProfileEvent__uType, __fp_get_Type), false, ::app::Uno::Diagnostics::EventType__typeof()));

    ::uRegisterType(type);
    return type;
}

void ProfileEvent___ObjInit(ProfileEvent* __this)
{
    __this->TimeStamp = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL) - ::app::Uno::Diagnostics::Profile__StartTimeStamp;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ProfileSerializer__uType* ProfileSerializer__typeof()
{
    static ::uStaticStrong<ProfileSerializer__uType*> type;
    if (type != NULL) return type;

    type = (ProfileSerializer__uType*)::uAllocClassType(sizeof(ProfileSerializer__uType), "Uno.Diagnostics.ProfileSerializer");

    type->SetFunctions(5,
        ::uNewFunctionVoid("Serialize", ProfileSerializer__Serialize, 0, true, ::app::Uno::IO::BinaryWriter__typeof(), ::app::Uno::Diagnostics::AllocateEvent__typeof()),
        ::uNewFunctionVoid("Serialize", ProfileSerializer__Serialize_1, 0, true, ::app::Uno::IO::BinaryWriter__typeof(), ::app::Uno::Diagnostics::EnterEvent__typeof()),
        ::uNewFunctionVoid("Serialize", ProfileSerializer__Serialize_2, 0, true, ::app::Uno::IO::BinaryWriter__typeof(), ::app::Uno::Diagnostics::ExitEvent__typeof()),
        ::uNewFunctionVoid("Serialize", ProfileSerializer__Serialize_3, 0, true, ::app::Uno::IO::BinaryWriter__typeof(), ::app::Uno::Diagnostics::FreeEvent__typeof()),
        ::uNewFunctionVoid("Serialize", ProfileSerializer__Serialize_4, 0, true, ::app::Uno::Diagnostics::ProfileData__typeof(), ::app::Uno::IO::MemoryStream__typeof()));

    ::uRegisterType(type);
    return type;
}

void ProfileSerializer__Serialize(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Uno::Diagnostics::AllocateEvent* allocate)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_2((::uByte)::uPtr< ::app::Uno::Diagnostics::AllocateEvent*>(allocate)->Type());
    writer->Write_6(allocate->TimeStamp);
    writer->Write_13(allocate->Class);
    writer->Write_13(allocate->Id);
    writer->Write_13(allocate->Weight);
}

void ProfileSerializer__Serialize_1(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Uno::Diagnostics::EnterEvent* enter)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_2((::uByte)::uPtr< ::app::Uno::Diagnostics::EnterEvent*>(enter)->Type());
    writer->Write_6(enter->TimeStamp);
    writer->Write_13(enter->Id);
}

void ProfileSerializer__Serialize_2(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Uno::Diagnostics::ExitEvent* exit)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_2((::uByte)::uPtr< ::app::Uno::Diagnostics::ExitEvent*>(exit)->Type());
    writer->Write_6(exit->TimeStamp);
}

void ProfileSerializer__Serialize_3(::uStatic* __this, ::app::Uno::IO::BinaryWriter* writer, ::app::Uno::Diagnostics::FreeEvent* free)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_2((::uByte)::uPtr< ::app::Uno::Diagnostics::FreeEvent*>(free)->Type());
    writer->Write_6(free->TimeStamp);
    writer->Write_13(free->Class);
    writer->Write_13(free->Id);
}

void ProfileSerializer__Serialize_4(::uStatic* __this, ::app::Uno::Diagnostics::ProfileData* data, ::app::Uno::IO::MemoryStream* stream)
{
    ::app::Uno::IO::BinaryWriter* writer = ::app::Uno::IO::BinaryWriter__New_1(NULL, (::app::Uno::IO::Stream*)stream);
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_13(::uPtr< ::app::Uno::Collections::List__string*>(::uPtr< ::app::Uno::Diagnostics::ProfileData*>(data)->FunctionIds)->Count());

    for (::app::Uno::Collections::List1_Enumerator__string enum_123 = ::uPtr< ::app::Uno::Collections::List__string*>(data->FunctionIds)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::uString* functionId = enum_123.Current();
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(writer)->Write_24(functionId);
    }

    writer->Write_13(::uPtr< ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent*>(data->ProfileEvents)->Count());

    for (::app::Uno::Collections::List1_Enumerator__Uno_Diagnostics_ProfileEvent enum_124 = ::uPtr< ::app::Uno::Collections::List__Uno_Diagnostics_ProfileEvent*>(data->ProfileEvents)->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Uno::Diagnostics::ProfileEvent* profileEvent = enum_124.Current();

        switch (::uPtr< ::app::Uno::Diagnostics::ProfileEvent*>(profileEvent)->Type())
        {
            case 0:
            {
                ProfileSerializer__Serialize_1(NULL, writer, ::uAs< ::app::Uno::Diagnostics::EnterEvent*>(profileEvent, ::app::Uno::Diagnostics::EnterEvent__typeof()));
                break;
            }
            case 1:
            {
                ProfileSerializer__Serialize_2(NULL, writer, ::uAs< ::app::Uno::Diagnostics::ExitEvent*>(profileEvent, ::app::Uno::Diagnostics::ExitEvent__typeof()));
                break;
            }
            case 2:
            {
                ProfileSerializer__Serialize(NULL, writer, ::uAs< ::app::Uno::Diagnostics::AllocateEvent*>(profileEvent, ::app::Uno::Diagnostics::AllocateEvent__typeof()));
                break;
            }
            case 3:
            {
                ProfileSerializer__Serialize_3(NULL, writer, ::uAs< ::app::Uno::Diagnostics::FreeEvent*>(profileEvent, ::app::Uno::Diagnostics::FreeEvent__typeof()));
                break;
            }
            default:
            {
                U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Internal error: Could not serialize event of type "), ::uBox< int>(::app::Uno::Diagnostics::EventType__typeof(), ::uPtr< ::app::Uno::Diagnostics::ProfileEvent*>(profileEvent)->Type()))));
            }
        }
    }
}

}}}
