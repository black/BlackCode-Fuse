// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\Controls\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_CONTROLS_CONTROL_PROPERTIES_H__
#define __APP_FUSE_I_O_S_CONTROLS_CONTROL_PROPERTIES_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Control; } } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Control__float4; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace iOS {
namespace Controls {

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Control__float4*> ControlProperties__TintColorProperty;

struct ControlProperties__uType : ::uClassType
{
};

ControlProperties__uType* ControlProperties__typeof();

void ControlProperties___TypeInit(::uStatic* __this);
::app::Uno::Float4 ControlProperties__GetTintColor(::uStatic* __this, ::app::Fuse::Controls::Control* p);
void ControlProperties__OnTintColorChanged(::uStatic* __this, ::app::Fuse::Controls::Control* panel);
void ControlProperties__ResetTintColor(::uStatic* __this, ::app::Fuse::Controls::Control* p);
void ControlProperties__SetTintColor(::uStatic* __this, ::app::Fuse::Controls::Control* p, ::app::Uno::Float4 value);

}}}}


#endif
