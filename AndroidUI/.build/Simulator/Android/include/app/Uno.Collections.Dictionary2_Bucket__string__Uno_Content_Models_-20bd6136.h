// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__UNO_CONTENT_MODELS__20BD6136_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__UNO_CONTENT_MODELS__20BD6136_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameter; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__string__Uno_Content_Models_ModelParameter;

struct Dictionary2_Bucket__string__Uno_Content_Models_ModelParameter__uType : ::uStructType
{
};

Dictionary2_Bucket__string__Uno_Content_Models_ModelParameter__uType* Dictionary2_Bucket__string__Uno_Content_Models_ModelParameter__typeof();

struct Dictionary2_Bucket__string__Uno_Content_Models_ModelParameter
{
    ::uStrong< ::uString*> Key;
    ::uStrong< ::app::Uno::Content::Models::ModelParameter*> Value;
    int State;
};

}}}


#endif
