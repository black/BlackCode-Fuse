// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_ELEMENTS_ELEMENT_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_ELEMENTS_ELEMENT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_Element.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_Element; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Elements_Element;

struct MasterProperty__Fuse_Elements_Element__uType : ::app::Fuse::Animations::MasterBase__Fuse_Elements_Element__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Elements_Element__uType* MasterProperty__Fuse_Elements_Element__typeof();

void MasterProperty__Fuse_Elements_Element___ObjInit_1(MasterProperty__Fuse_Elements_Element* __this, ::app::Uno::UX::Property__Fuse_Elements_Element* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Elements::Element* MasterProperty__Fuse_Elements_Element__get_RestValue(MasterProperty__Fuse_Elements_Element* __this);
::uObject* MasterProperty__Fuse_Elements_Element__GetPropertyObject(MasterProperty__Fuse_Elements_Element* __this);
void MasterProperty__Fuse_Elements_Element__OnInactive(MasterProperty__Fuse_Elements_Element* __this);

struct MasterProperty__Fuse_Elements_Element : ::app::Fuse::Animations::MasterBase__Fuse_Elements_Element
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Elements_Element*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Elements_Element* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Elements_Element___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Elements_Element__GetPropertyObject(this); }
};

}}}


#endif
