// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRANSLATION_MODES_H__
#define __APP_FUSE_TRANSLATION_MODES_H__

#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {

extern ::uStaticStrong< ::uObject*> TranslationModes__Local;
extern ::uStaticStrong< ::uObject*> TranslationModes__ParentSize;
extern ::uStaticStrong< ::uObject*> TranslationModes__Size;

struct TranslationModes__uType : ::uClassType
{
};

TranslationModes__uType* TranslationModes__typeof();

void TranslationModes___TypeInit(::uStatic* __this);
::app::Uno::Float3 TranslationModes__RelativeToSize(::uStatic* __this, ::app::Uno::Float3 v, ::app::Fuse::Node* node);

}}


#endif
