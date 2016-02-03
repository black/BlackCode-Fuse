// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__UNO_WEAK_REFERENCE_FUSE_RE_E9892C74_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__UNO_WEAK_REFERENCE_FUSE_RE_E9892C74_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct WeakReference__Fuse_Resources_HttpImageSourceImpl; } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_;

struct KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType : ::uStructType
{
};

KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType* KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof();

void KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl____ObjInit(KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this, ::uString* key, ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl* value);
::uString* KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___get_Key(KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this);
::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl* KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___get_Value(KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this);
KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_ KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___New_1(::uStatic* __this, ::uString* key, ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl* value);

struct KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_
{
    ::uStrong< ::uString*> _key;
    ::uStrong< ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl*> _value;

    void _ObjInit(::uString* key, ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl* value) { KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl____ObjInit(this, key, value); }
    ::uString* Key() { return KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___get_Key(this); }
    ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl* Value() { return KeyValuePair__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___get_Value(this); }
};

}}}


#endif
