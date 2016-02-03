// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Entities.Designer.AnimationHelpers.h>
#include <Fuse.Entities.Designer.PreloadedResources.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uType* TYPES[4];

namespace g{
namespace Fuse{
namespace Entities{
namespace Designer{

// C:\ProgramData\Uno\Packages\Fuse.Entities\0.19.3\Designer\$.uno(7)
// ------------------------------------------------------------------

// public static class AnimationHelpers :7
// {
uClassType* AnimationHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Entities.Designer.AnimationHelpers", options);
    ::TYPES[0] = ::g::Uno::Double_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Float_typeof();
    type->Reflection.SetFunctions(1,
        new uFunction("Sample", NULL, (void*)AnimationHelpers__Sample_fn, 0, true, ::g::Uno::Float_typeof(), 7, ::g::Uno::Double_typeof()->Array(), ::g::Uno::Float_typeof()->Array(), ::g::Uno::Float_typeof()->Array(), ::g::Uno::Int_typeof()->Array(), ::g::Uno::Float_typeof()->Array(), ::g::Uno::Float_typeof()->Array(), ::g::Uno::Double_typeof()));
    return type;
}

// public static float Sample(double[] times, float[] leftValues, float[] rightValues, int[] easing, float[] leftTangents, float[] rightTangents, double time) :10
void AnimationHelpers__Sample_fn(uArray* times, uArray* leftValues, uArray* rightValues, uArray* easing, uArray* leftTangents, uArray* rightTangents, double* time, float* __retval)
{
    *__retval = AnimationHelpers::Sample(times, leftValues, rightValues, easing, leftTangents, rightTangents, *time);
}

// public static float Sample(double[] times, float[] leftValues, float[] rightValues, int[] easing, float[] leftTangents, float[] rightTangents, double time) [static] :10
float AnimationHelpers::Sample(uArray* times, uArray* leftValues, uArray* rightValues, uArray* easing, uArray* leftTangents, uArray* rightTangents, double time)
{
    if (uPtr(times)->Length() == 0)
        return 0.0f;

    for (int i = 0; i < uPtr(times)->Length(); i++)
    {
        double kTime = uPtr(times)->Item<double>(i);

        if (time >= kTime)
        {
            if (i == (uPtr(times)->Length() - 1))
                return uPtr(rightValues)->Item<float>(i);

            double k2time = uPtr(times)->Item<double>(i + 1);

            if (time < k2time)
            {
                float f = (float)((time - kTime) / (k2time - kTime));

                switch (uPtr(easing)->Item<int>(i))
                {
                    case 1:
                    {
                        f = f * f;
                        break;
                    }
                    case 2:
                    {
                        f = 1.0f - ::g::Uno::Math::Pow1(1.0f - f, 2.0f);
                        break;
                    }
                    case 3:
                    {
                        float f2 = f * f;
                        float f3 = f2 * f;
                        float h1 = ((2.0f * f3) - (3.0f * f2)) + 1.0f;
                        float h2 = (-2.0f * f3) + (3.0f * f2);
                        float h3 = (f3 - (2.0f * f2)) + f;
                        float h4 = f3 - f2;
                        return (((uPtr(rightValues)->Item<float>(i) * h1) + (uPtr(leftValues)->Item<float>(i + 1) * h2)) + (uPtr(rightTangents)->Item<float>(i) * h3)) + (uPtr(leftTangents)->Item<float>(i + 1) * h4);
                    }
                }

                return (uPtr(rightValues)->Item<float>(i) * (1.0f - f)) + (uPtr(leftValues)->Item<float>(i + 1) * f);
            }
        }
        else if (i == 0)
            return uPtr(leftValues)->Item<float>(i);
    }

    return 0.0f;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Entities\0.19.3\Designer\$.uno(61)
// -------------------------------------------------------------------

// public static class PreloadedResources :61
// {
// static PreloadedResources() :61
static void PreloadedResources__cctor__fn(uType* __type)
{
    PreloadedResources::resources_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[2/*Uno.Collections.Dictionary<string, object>*/]));
}

uClassType* PreloadedResources_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Entities.Designer.PreloadedResources", options);
    type->fp_cctor_ = PreloadedResources__cctor__fn;
    ::TYPES[2] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[3] = uObject_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()), (uintptr_t)&::g::Fuse::Entities::Designer::PreloadedResources::resources_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("Add`1", type, (void*)PreloadedResources__Add_fn, 0, true, type->U(0), 2, ::g::Uno::String_typeof(), type->U(0)),
        new uFunction("Get", NULL, (void*)PreloadedResources__Get_fn, 0, true, uObject_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public static T Add<T>(string descriptor, T data) :65
void PreloadedResources__Add_fn(uType* __type, uString* descriptor, void* data, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
    };
    PreloadedResources_typeof()->Init();
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(PreloadedResources::resources()), descriptor, uBoxPtr(__types[0], data));
    return __retval.Store(__types[0], data), void();
}

// public static object Get(string descriptor) :71
void PreloadedResources__Get_fn(uString* descriptor, uObject** __retval)
{
    *__retval = PreloadedResources::Get(descriptor);
}

uSStrong< ::g::Uno::Collections::Dictionary*> PreloadedResources::resources_;

// public static object Get(string descriptor) [static] :71
uObject* PreloadedResources::Get(uString* descriptor)
{
    PreloadedResources_typeof()->Init();
    bool ret1;
    uObject* resource;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(PreloadedResources::resources()), descriptor, (void**)(&resource), &ret1), ret1))
        return resource;

    return NULL;
}
// }

}}}} // ::g::Fuse::Entities::Designer
