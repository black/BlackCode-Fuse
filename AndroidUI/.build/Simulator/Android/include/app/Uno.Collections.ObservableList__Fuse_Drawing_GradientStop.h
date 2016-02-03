// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_DRAWING_GRADIENT_STOP_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_DRAWING_GRADIENT_STOP_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_GradientStop.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_GradientStop; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Drawing_GradientStop;

struct ObservableList__Fuse_Drawing_GradientStop__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Drawing_GradientStop __interface_0;
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_GradientStop __interface_1;
};

ObservableList__Fuse_Drawing_GradientStop__uType* ObservableList__Fuse_Drawing_GradientStop__typeof();

void ObservableList__Fuse_Drawing_GradientStop___ObjInit(ObservableList__Fuse_Drawing_GradientStop* __this, ::uDelegate* added, ::uDelegate* removed);
void ObservableList__Fuse_Drawing_GradientStop__Add(ObservableList__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* item);
void ObservableList__Fuse_Drawing_GradientStop__Clear(ObservableList__Fuse_Drawing_GradientStop* __this);
bool ObservableList__Fuse_Drawing_GradientStop__Contains(ObservableList__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* item);
int ObservableList__Fuse_Drawing_GradientStop__get_Count(ObservableList__Fuse_Drawing_GradientStop* __this);
::app::Fuse::Drawing::GradientStop* ObservableList__Fuse_Drawing_GradientStop__get_Item(ObservableList__Fuse_Drawing_GradientStop* __this, int index);
::uObject* ObservableList__Fuse_Drawing_GradientStop__GetEnumerator(ObservableList__Fuse_Drawing_GradientStop* __this);
void ObservableList__Fuse_Drawing_GradientStop__Insert(ObservableList__Fuse_Drawing_GradientStop* __this, int index, ::app::Fuse::Drawing::GradientStop* item);
ObservableList__Fuse_Drawing_GradientStop* ObservableList__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);
bool ObservableList__Fuse_Drawing_GradientStop__Remove(ObservableList__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* item);
void ObservableList__Fuse_Drawing_GradientStop__RemoveAt(ObservableList__Fuse_Drawing_GradientStop* __this, int index);
void ObservableList__Fuse_Drawing_GradientStop__ReplaceAt(ObservableList__Fuse_Drawing_GradientStop* __this, int index, ::app::Fuse::Drawing::GradientStop* item);

struct ObservableList__Fuse_Drawing_GradientStop : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Drawing_GradientStop*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Drawing_GradientStop___ObjInit(this, added, removed); }
    void Add(::app::Fuse::Drawing::GradientStop* item) { ObservableList__Fuse_Drawing_GradientStop__Add(this, item); }
    void Clear() { ObservableList__Fuse_Drawing_GradientStop__Clear(this); }
    bool Contains(::app::Fuse::Drawing::GradientStop* item) { return ObservableList__Fuse_Drawing_GradientStop__Contains(this, item); }
    int Count() { return ObservableList__Fuse_Drawing_GradientStop__get_Count(this); }
    ::app::Fuse::Drawing::GradientStop* Item(int index) { return ObservableList__Fuse_Drawing_GradientStop__get_Item(this, index); }
    ::uObject* GetEnumerator() { return ObservableList__Fuse_Drawing_GradientStop__GetEnumerator(this); }
    void Insert(int index, ::app::Fuse::Drawing::GradientStop* item) { ObservableList__Fuse_Drawing_GradientStop__Insert(this, index, item); }
    bool Remove(::app::Fuse::Drawing::GradientStop* item) { return ObservableList__Fuse_Drawing_GradientStop__Remove(this, item); }
    void RemoveAt(int index) { ObservableList__Fuse_Drawing_GradientStop__RemoveAt(this, index); }
    void ReplaceAt(int index, ::app::Fuse::Drawing::GradientStop* item) { ObservableList__Fuse_Drawing_GradientStop__ReplaceAt(this, index, item); }
};

}}}


#endif
