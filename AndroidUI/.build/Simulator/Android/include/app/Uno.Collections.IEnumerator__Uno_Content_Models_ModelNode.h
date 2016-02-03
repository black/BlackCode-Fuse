// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_CONTENT_MODELS_MODEL_NODE_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__UNO_CONTENT_MODELS_MODEL_NODE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelNode; } } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Uno_Content_Models_ModelNode__typeof();

struct IEnumerator__Uno_Content_Models_ModelNode
{
    ::app::Uno::Content::Models::ModelNode*(*__fp_get_Current)(void*);

    static ::app::Uno::Content::Models::ModelNode* Current(::uObject* __this) { return ((IEnumerator__Uno_Content_Models_ModelNode*)uGetInterfacePtr(__this, IEnumerator__Uno_Content_Models_ModelNode__typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
