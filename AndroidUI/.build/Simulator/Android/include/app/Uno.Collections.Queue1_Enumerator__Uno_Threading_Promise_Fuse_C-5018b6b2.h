// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE1_ENUMERATOR__UNO_THREADING_PROMISE_FUSE_C_5018B6B2_H__
#define __APP_UNO_COLLECTIONS_QUEUE1_ENUMERATOR__UNO_THREADING_PROMISE_FUSE_C_5018B6B2_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_; } } }
namespace app { namespace Uno { namespace Threading { struct Promise__Fuse_Camera_PictureResult; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_;

struct Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___uType* Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___typeof();

void Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult____ObjInit(Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this, ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* source);
void Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___Dispose(Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this);
bool Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___MoveNext(Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this);
Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_ Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___New_1(::uStatic* __this, ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* source);
void Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___Uno_Collections_IEnumerator_Reset(Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this);

struct Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_
{
    ::uStrong< ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*> _source;
    int _version;
    int _index;
    ::uStrong< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*> _current;

    void _ObjInit(::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* source) { Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult____ObjInit(this, source); }
    void Dispose() { Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___Dispose(this); }
    bool MoveNext() { return Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___MoveNext(this); }
};

}}}


#endif
