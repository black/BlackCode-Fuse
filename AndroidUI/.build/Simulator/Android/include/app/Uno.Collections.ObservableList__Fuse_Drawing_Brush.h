// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_DRAWING_BRUSH_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_DRAWING_BRUSH_H__

#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_Brush; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Drawing_Brush;

struct ObservableList__Fuse_Drawing_Brush__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Drawing_Brush __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush __interface_2;
};

ObservableList__Fuse_Drawing_Brush__uType* ObservableList__Fuse_Drawing_Brush__typeof();

void ObservableList__Fuse_Drawing_Brush___ObjInit(ObservableList__Fuse_Drawing_Brush* __this, ::uDelegate* added, ::uDelegate* removed);
void ObservableList__Fuse_Drawing_Brush__Add(ObservableList__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* item);
void ObservableList__Fuse_Drawing_Brush__Clear(ObservableList__Fuse_Drawing_Brush* __this);
bool ObservableList__Fuse_Drawing_Brush__Contains(ObservableList__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* item);
int ObservableList__Fuse_Drawing_Brush__get_Count(ObservableList__Fuse_Drawing_Brush* __this);
::app::Fuse::Drawing::Brush* ObservableList__Fuse_Drawing_Brush__get_Item(ObservableList__Fuse_Drawing_Brush* __this, int index);
::uObject* ObservableList__Fuse_Drawing_Brush__GetEnumerator(ObservableList__Fuse_Drawing_Brush* __this);
void ObservableList__Fuse_Drawing_Brush__Insert(ObservableList__Fuse_Drawing_Brush* __this, int index, ::app::Fuse::Drawing::Brush* item);
ObservableList__Fuse_Drawing_Brush* ObservableList__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);
bool ObservableList__Fuse_Drawing_Brush__Remove(ObservableList__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* item);
void ObservableList__Fuse_Drawing_Brush__RemoveAt(ObservableList__Fuse_Drawing_Brush* __this, int index);
void ObservableList__Fuse_Drawing_Brush__ReplaceAt(ObservableList__Fuse_Drawing_Brush* __this, int index, ::app::Fuse::Drawing::Brush* item);

struct ObservableList__Fuse_Drawing_Brush : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Drawing_Brush*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Drawing_Brush___ObjInit(this, added, removed); }
    void Add(::app::Fuse::Drawing::Brush* item) { ObservableList__Fuse_Drawing_Brush__Add(this, item); }
    void Clear() { ObservableList__Fuse_Drawing_Brush__Clear(this); }
    bool Contains(::app::Fuse::Drawing::Brush* item) { return ObservableList__Fuse_Drawing_Brush__Contains(this, item); }
    int Count() { return ObservableList__Fuse_Drawing_Brush__get_Count(this); }
    ::app::Fuse::Drawing::Brush* Item(int index) { return ObservableList__Fuse_Drawing_Brush__get_Item(this, index); }
    ::uObject* GetEnumerator() { return ObservableList__Fuse_Drawing_Brush__GetEnumerator(this); }
    void Insert(int index, ::app::Fuse::Drawing::Brush* item) { ObservableList__Fuse_Drawing_Brush__Insert(this, index, item); }
    bool Remove(::app::Fuse::Drawing::Brush* item) { return ObservableList__Fuse_Drawing_Brush__Remove(this, item); }
    void RemoveAt(int index) { ObservableList__Fuse_Drawing_Brush__RemoveAt(this, index); }
    void ReplaceAt(int index, ::app::Fuse::Drawing::Brush* item) { ObservableList__Fuse_Drawing_Brush__ReplaceAt(this, index, item); }
};

}}}


#endif
