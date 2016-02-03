// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_INTERNAL_WORD_WRAPPER_H__
#define __APP_FUSE_CONTROLS_INTERNAL_WORD_WRAPPER_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WordWrapInfo; } } } }
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WordWrapperWord; } } } }
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WrappedLine; } } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Controls_Internal_WordWrapperWord; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Controls_Internal_WrappedLine; } } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Internal {

struct WordWrapper__uType : ::uClassType
{
};

WordWrapper__uType* WordWrapper__typeof();

::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord* WordWrapper__GetWords(::uStatic* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::uString* text);
::app::Fuse::Controls::Internal::WordWrapperWord* WordWrapper__SplitWord(::uStatic* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine* wrappedLines, ::app::Fuse::Controls::Internal::WordWrapperWord* word, int* lineStartIndex);
::uArray* WordWrapper__WrapLine(::uStatic* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::uString* text);

}}}}


#endif
