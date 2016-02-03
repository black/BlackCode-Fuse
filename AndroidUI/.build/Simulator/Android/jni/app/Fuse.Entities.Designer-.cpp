#include <app/Fuse.Entities.Designer.AnimationHelpers.h>
#include <app/Fuse.Entities.Designer.PreloadedResources.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__string__object.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Entities {
namespace Designer {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\Designer\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AnimationHelpers__uType* AnimationHelpers__typeof()
{
    static ::uStaticStrong<AnimationHelpers__uType*> type;
    if (type != NULL) return type;

    type = (AnimationHelpers__uType*)::uAllocClassType(sizeof(AnimationHelpers__uType), "Fuse.Entities.Designer.AnimationHelpers");

    type->SetFunctions(1,
        ::uNewFunction("Sample", AnimationHelpers__Sample, 0, true, ::app::Uno::Float__typeof(), ::uGetArrayType(::app::Uno::Double__typeof()), ::uGetArrayType(::app::Uno::Float__typeof()), ::uGetArrayType(::app::Uno::Float__typeof()), ::uGetArrayType(::app::Uno::Int__typeof()), ::uGetArrayType(::app::Uno::Float__typeof()), ::uGetArrayType(::app::Uno::Float__typeof()), ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

float AnimationHelpers__Sample(::uStatic* __this, ::uArray* times, ::uArray* leftValues, ::uArray* rightValues, ::uArray* easing, ::uArray* leftTangents, ::uArray* rightTangents, double time)
{
    if (::uPtr< ::uArray*>(times)->Length() == 0)
    {
        return 0.0f;
    }

    for (int i = 0; i < ::uPtr< ::uArray*>(times)->Length(); i++)
    {
        double kTime = ::uPtr< ::uArray*>(times)->Item< double>(i);

        if (time >= kTime)
        {
            if (i == (::uPtr< ::uArray*>(times)->Length() - 1))
            {
                return ::uPtr< ::uArray*>(rightValues)->Item< float>(i);
            }

            double k2time = ::uPtr< ::uArray*>(times)->Item< double>(i + 1);

            if (time < k2time)
            {
                float f = (float)((time - kTime) / (k2time - kTime));

                switch (::uPtr< ::uArray*>(easing)->Item< int>(i))
                {
                    case 1:
                    {
                        f = f * f;
                        break;
                    }
                    case 2:
                    {
                        f = 1.0f - ::app::Uno::Math__Pow_1(NULL, 1.0f - f, 2.0f);
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
                        return (((::uPtr< ::uArray*>(rightValues)->Item< float>(i) * h1) + (::uPtr< ::uArray*>(leftValues)->Item< float>(i + 1) * h2)) + (::uPtr< ::uArray*>(rightTangents)->Item< float>(i) * h3)) + (::uPtr< ::uArray*>(leftTangents)->Item< float>(i + 1) * h4);
                    }
                }

                return (::uPtr< ::uArray*>(rightValues)->Item< float>(i) * (1.0f - f)) + (::uPtr< ::uArray*>(leftValues)->Item< float>(i + 1) * f);
            }
        }
        else if (i == 0)
        {
            return ::uPtr< ::uArray*>(leftValues)->Item< float>(i);
        }
    }

    return 0.0f;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\Designer\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__string__object*> PreloadedResources__resources;

PreloadedResources__uType* PreloadedResources__typeof()
{
    static ::uStaticStrong<PreloadedResources__uType*> type;
    if (type != NULL) return type;

    type = (PreloadedResources__uType*)::uAllocClassType(sizeof(PreloadedResources__uType), "Fuse.Entities.Designer.PreloadedResources");

    type->SetFields(1,
        ::uNewField("resources", &PreloadedResources__resources, 0, ::app::Uno::Collections::Dictionary__string__object__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("Get", PreloadedResources__Get, 0, true, ::uObject__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void PreloadedResources___TypeInit(::uStatic* __this)
{
    PreloadedResources__resources = ::app::Uno::Collections::Dictionary__string__object__New_1(NULL);
}

::uObject* PreloadedResources__Get(::uStatic* __this, ::uString* descriptor)
{
    ::uObject* resource;

    if (::uPtr< ::app::Uno::Collections::Dictionary__string__object*>(PreloadedResources__resources)->TryGetValue(descriptor, &resource))
    {
        return resource;
    }

    return NULL;
}

}}}}
