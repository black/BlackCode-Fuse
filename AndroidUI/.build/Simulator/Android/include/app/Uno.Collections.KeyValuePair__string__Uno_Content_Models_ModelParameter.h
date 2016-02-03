// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__UNO_CONTENT_MODELS_MODEL_PARAMETER_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__UNO_CONTENT_MODELS_MODEL_PARAMETER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameter; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__string__Uno_Content_Models_ModelParameter;

struct KeyValuePair__string__Uno_Content_Models_ModelParameter__uType : ::uStructType
{
};

KeyValuePair__string__Uno_Content_Models_ModelParameter__uType* KeyValuePair__string__Uno_Content_Models_ModelParameter__typeof();

void KeyValuePair__string__Uno_Content_Models_ModelParameter___ObjInit(KeyValuePair__string__Uno_Content_Models_ModelParameter* __this, ::uString* key, ::app::Uno::Content::Models::ModelParameter* value);
::uString* KeyValuePair__string__Uno_Content_Models_ModelParameter__get_Key(KeyValuePair__string__Uno_Content_Models_ModelParameter* __this);
::app::Uno::Content::Models::ModelParameter* KeyValuePair__string__Uno_Content_Models_ModelParameter__get_Value(KeyValuePair__string__Uno_Content_Models_ModelParameter* __this);
KeyValuePair__string__Uno_Content_Models_ModelParameter KeyValuePair__string__Uno_Content_Models_ModelParameter__New_1(::uStatic* __this, ::uString* key, ::app::Uno::Content::Models::ModelParameter* value);

struct KeyValuePair__string__Uno_Content_Models_ModelParameter
{
    ::uStrong< ::uString*> _key;
    ::uStrong< ::app::Uno::Content::Models::ModelParameter*> _value;

    void _ObjInit(::uString* key, ::app::Uno::Content::Models::ModelParameter* value) { KeyValuePair__string__Uno_Content_Models_ModelParameter___ObjInit(this, key, value); }
    ::uString* Key() { return KeyValuePair__string__Uno_Content_Models_ModelParameter__get_Key(this); }
    ::app::Uno::Content::Models::ModelParameter* Value() { return KeyValuePair__string__Uno_Content_Models_ModelParameter__get_Value(this); }
};

}}}


#endif
