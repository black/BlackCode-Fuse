// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__FRAMEBUFFER__INT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__FRAMEBUFFER__INT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__framebuffer__int;

struct Dictionary2_Bucket__framebuffer__int__uType : ::uStructType
{
};

Dictionary2_Bucket__framebuffer__int__uType* Dictionary2_Bucket__framebuffer__int__typeof();

struct Dictionary2_Bucket__framebuffer__int
{
    ::uStrong< ::app::Uno::Graphics::Framebuffer*> Key;
    int Value;
    int State;
};

}}}


#endif
