// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__UNO_U_X_FILE_SOURCE__UNO_WEAK_REFERE_103E5354_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__UNO_U_X_FILE_SOURCE__UNO_WEAK_REFERE_103E5354_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace UX { struct FileSource; } } }
namespace app { namespace Uno { struct WeakReference__Fuse_Resources_FileImageSourceImpl; } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_;

struct KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType : ::uStructType
{
};

KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType* KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof();

void KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl____ObjInit(KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this, ::app::Uno::UX::FileSource* key, ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl* value);
::app::Uno::UX::FileSource* KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___get_Key(KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this);
::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl* KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___get_Value(KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this);
KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_ KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___New_1(::uStatic* __this, ::app::Uno::UX::FileSource* key, ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl* value);

struct KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_
{
    ::uStrong< ::app::Uno::UX::FileSource*> _key;
    ::uStrong< ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl*> _value;

    void _ObjInit(::app::Uno::UX::FileSource* key, ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl* value) { KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl____ObjInit(this, key, value); }
    ::app::Uno::UX::FileSource* Key() { return KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___get_Key(this); }
    ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl* Value() { return KeyValuePair__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___get_Value(this); }
};

}}}


#endif
