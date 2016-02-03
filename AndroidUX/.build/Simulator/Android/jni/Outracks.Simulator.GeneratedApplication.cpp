// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UX\.build\Simulator\Android\Preamble\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.GeneratedApplication.h>
#include <Outracks.Simulator.Reflection.Native.ITypeMap.h>
#include <Outracks.Simulator.Reflection.Native.NativeReflection.h>
#include <Outracks.Simulator.Reflection.Native.SimpleTypeMap.h>
#include <Outracks.Simulator.Runtime.IReflection.h>
#include <Uno.Int.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.String.h>
static uString* STRINGS[3];
static uType* TYPES[4];

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class GeneratedApplication :237
// {
::g::Outracks::Simulator::Application_type* GeneratedApplication_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Application_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GeneratedApplication);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Application_type);
    type = (::g::Outracks::Simulator::Application_type*)uClassType::New("Outracks.Simulator.GeneratedApplication", options);
    type->SetBase(::g::Outracks::Simulator::Application_typeof());
    type->fp_ctor_ = (void*)GeneratedApplication__New2_fn;
    type->interface0.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*))::g::Outracks::Simulator::Application__OnPointerPressed_fn;
    type->interface0.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*))::g::Outracks::Simulator::Application__OnPointerMoved_fn;
    type->interface0.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*))::g::Outracks::Simulator::Application__OnPointerReleased_fn;
    type->interface0.fp_OnPointerWheelMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerWheelMovedArgs*))::g::Outracks::Simulator::Application__OnPointerWheelMoved_fn;
    ::STRINGS[0] = uString::Const("127.0.0.1");
    ::STRINGS[1] = uString::Const("192.168.1.37");
    ::STRINGS[2] = uString::Const("C:\\Users\\Kuro\\Documents\\Fuse\\Android UX\\Android UX.unoproj");
    ::TYPES[0] = ::g::Uno::Net::IPEndPoint_typeof()->Array();
    ::TYPES[1] = ::g::Outracks::Simulator::Application_typeof();
    ::TYPES[2] = ::g::Outracks::Simulator::Runtime::IReflection_typeof();
    ::TYPES[3] = ::g::Outracks::Simulator::Reflection::Native::ITypeMap_typeof();
    type->SetInterfaces(
        ::g::Fuse::Input::IPointerEventResponder_typeof(), offsetof(::g::Outracks::Simulator::Application_type, interface0));
    type->SetFields(18);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GeneratedApplication__New2_fn, 0, true, GeneratedApplication_typeof(), 0));
    return type;
}

// public GeneratedApplication() :240
void GeneratedApplication__ctor_4_fn(GeneratedApplication* __this)
{
    __this->ctor_4();
}

// public GeneratedApplication New() :240
void GeneratedApplication__New2_fn(GeneratedApplication** __retval)
{
    *__retval = GeneratedApplication::New2();
}

// public GeneratedApplication() [instance] :240
void GeneratedApplication::ctor_4()
{
    ctor_3(uArray::Init< ::g::Uno::Net::IPEndPoint*>(::TYPES[0/*Uno.Net.IPEndPoint[]*/], 2, (::g::Uno::Net::IPEndPoint*)::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(::STRINGS[0/*"127.0.0.1"*/]), 12124), (::g::Uno::Net::IPEndPoint*)::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(::STRINGS[1/*"192.168.1.37"*/]), 12124)), ::STRINGS[2/*"C:\\Users\\...*/]);
    Reflection((uObject*)::g::Outracks::Simulator::Reflection::Native::NativeReflection::New1((uObject*)::g::Outracks::Simulator::Reflection::Native::SimpleTypeMap::New1()));
}

// public GeneratedApplication New() [static] :240
GeneratedApplication* GeneratedApplication::New2()
{
    GeneratedApplication* obj1 = (GeneratedApplication*)uNew(GeneratedApplication_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

}}} // ::g::Outracks::Simulator
