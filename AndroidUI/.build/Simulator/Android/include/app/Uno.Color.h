// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLOR_H__
#define __APP_UNO_COLOR_H__

#include <Uno.h>
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float3x3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Int3; } }
namespace app { namespace Uno { struct Int4; } }

namespace app {
namespace Uno {

extern ::app::Uno::Float3x3 Color__ToYCbCrMat;
extern ::app::Uno::Float3x3 Color__ToYCbCrMatInv;

struct Color__uType : ::uClassType
{
};

Color__uType* Color__typeof();

void Color___TypeInit(::uStatic* __this);
::app::Uno::Float4 Color__FromHex(::uStatic* __this, ::uString* hex);
::app::Uno::Float3 Color__FromHsv(::uStatic* __this, ::app::Uno::Float3 hsv);
::app::Uno::Float4 Color__FromHsv_1(::uStatic* __this, ::app::Uno::Float4 hsva);
::app::Uno::Float3 Color__FromRgb24(::uStatic* __this, ::app::Uno::Int3 rgb);
::app::Uno::Float3 Color__FromRgb24_1(::uStatic* __this, ::uUInt rgb);
::app::Uno::Float4 Color__FromRgba32(::uStatic* __this, ::app::Uno::Int4 rgba);
::app::Uno::Float4 Color__FromRgba32_1(::uStatic* __this, ::uUInt rgba);
::app::Uno::Float3 Color__FromYCbCr(::uStatic* __this, ::app::Uno::Float3 ycbcr);
::app::Uno::Float4 Color__FromYCbCr_1(::uStatic* __this, ::app::Uno::Float4 ycbcra);
::app::Uno::Float3 Color__LhcFromYuv(::uStatic* __this, ::app::Uno::Float3 yuv);
::app::Uno::Float4 Color__Overlay(::uStatic* __this, ::app::Uno::Float4 dst, ::app::Uno::Float4 color);
::app::Uno::Int4 Color__Rgba32FromHex(::uStatic* __this, ::uString* hex);
::uString* Color__ToHex(::uStatic* __this, ::app::Uno::Float3 rgb);
::uString* Color__ToHex_1(::uStatic* __this, ::app::Uno::Int3 rgb);
::uString* Color__ToHex_2(::uStatic* __this, ::app::Uno::Int4 rgb);
::app::Uno::Float3 Color__ToHsv(::uStatic* __this, ::app::Uno::Float3 rgb);
::app::Uno::Float4 Color__ToHsv_1(::uStatic* __this, ::app::Uno::Float4 rgba);
::app::Uno::Int3 Color__ToRgb24(::uStatic* __this, ::app::Uno::Float3 rgb);
::app::Uno::Int4 Color__ToRgba32(::uStatic* __this, ::app::Uno::Float4 rgb);
::app::Uno::Float3 Color__ToYCbCr(::uStatic* __this, ::app::Uno::Float3 rgb);
::app::Uno::Float4 Color__ToYCbCr_1(::uStatic* __this, ::app::Uno::Float4 rgba);
::app::Uno::Float3 Color__YuvFromLhc(::uStatic* __this, ::app::Uno::Float3 lhc);

}}


#endif
