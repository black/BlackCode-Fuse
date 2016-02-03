// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_I_LIGHT_VISITOR_H__
#define __APP_FUSE_ENTITIES_I_LIGHT_VISITOR_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct DirectionalLight; } } }
namespace app { namespace Fuse { namespace Entities { struct EnvironmentLight; } } }
namespace app { namespace Fuse { namespace Entities { struct Light; } } }
namespace app { namespace Fuse { namespace Entities { struct PointLight; } } }
namespace app { namespace Fuse { namespace Entities { struct SpotLight; } } }

namespace app {
namespace Fuse {
namespace Entities {

::uInterfaceType* ILightVisitor__typeof();

struct ILightVisitor
{
    void(*__fp_Visit)(void*, ::app::Fuse::Entities::DirectionalLight*);
    void(*__fp_Visit_1)(void*, ::app::Fuse::Entities::EnvironmentLight*);
    void(*__fp_Visit_2)(void*, ::app::Fuse::Entities::Light*);
    void(*__fp_Visit_3)(void*, ::app::Fuse::Entities::PointLight*);
    void(*__fp_Visit_4)(void*, ::app::Fuse::Entities::SpotLight*);

    static void Visit(::uObject* __this, ::app::Fuse::Entities::DirectionalLight* light) { ((ILightVisitor*)uGetInterfacePtr(__this, ILightVisitor__typeof()))->__fp_Visit((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), light); }
    static void Visit_1(::uObject* __this, ::app::Fuse::Entities::EnvironmentLight* light) { ((ILightVisitor*)uGetInterfacePtr(__this, ILightVisitor__typeof()))->__fp_Visit_1((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), light); }
    static void Visit_2(::uObject* __this, ::app::Fuse::Entities::Light* light) { ((ILightVisitor*)uGetInterfacePtr(__this, ILightVisitor__typeof()))->__fp_Visit_2((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), light); }
    static void Visit_3(::uObject* __this, ::app::Fuse::Entities::PointLight* light) { ((ILightVisitor*)uGetInterfacePtr(__this, ILightVisitor__typeof()))->__fp_Visit_3((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), light); }
    static void Visit_4(::uObject* __this, ::app::Fuse::Entities::SpotLight* light) { ((ILightVisitor*)uGetInterfacePtr(__this, ILightVisitor__typeof()))->__fp_Visit_4((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), light); }
};

}}}


#endif
