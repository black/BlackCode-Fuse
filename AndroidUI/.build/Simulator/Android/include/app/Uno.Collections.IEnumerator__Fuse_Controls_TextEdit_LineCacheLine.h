// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__FUSE_CONTROLS_TEXT_EDIT_LINE_CACHE_LINE_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__FUSE_CONTROLS_TEXT_EDIT_LINE_CACHE_LINE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct LineCacheLine; } } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Fuse_Controls_TextEdit_LineCacheLine__typeof();

struct IEnumerator__Fuse_Controls_TextEdit_LineCacheLine
{
    ::app::Fuse::Controls::TextEdit::LineCacheLine*(*__fp_get_Current)(void*);

    static ::app::Fuse::Controls::TextEdit::LineCacheLine* Current(::uObject* __this) { return ((IEnumerator__Fuse_Controls_TextEdit_LineCacheLine*)uGetInterfacePtr(__this, IEnumerator__Fuse_Controls_TextEdit_LineCacheLine__typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
