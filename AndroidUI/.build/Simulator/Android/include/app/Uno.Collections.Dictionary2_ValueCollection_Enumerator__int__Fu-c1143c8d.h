// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__INT__FU_C1143C8D_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__INT__FU_C1143C8D_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_Capturer.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct Capturer; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Fuse_Input_Capturer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer;

struct Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Input_Capturer __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer__uType* Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer__typeof();

void Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer___ObjInit(Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer* source);
void Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer__Dispose(Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer* __this);
::app::Fuse::Input::Capturer* Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer__get_Current(Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer* __this);
bool Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer__MoveNext(Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer* __this);
Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer* source);
void Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer__Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer* __this);

struct Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer
{
    ::uStrong< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*> _source;
    ::uStrong< ::app::Fuse::Input::Capturer*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer* source) { Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer___ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer__Dispose(this); }
    ::app::Fuse::Input::Capturer* Current() { return Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer__get_Current(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Capturer__MoveNext(this); }
};

}}}


#endif
