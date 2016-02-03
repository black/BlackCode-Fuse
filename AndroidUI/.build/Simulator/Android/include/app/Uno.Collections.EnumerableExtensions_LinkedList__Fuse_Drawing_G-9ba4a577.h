// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__FUSE_DRAWING_G_9BA4A577_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__FUSE_DRAWING_G_9BA4A577_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop;

struct EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop__uType* EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop__typeof();

void EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop___ObjInit(EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Drawing::GradientStop* item, EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop* next);
EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop* EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop__New_1(::uStatic* __this, ::app::Fuse::Drawing::GradientStop* item, EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop* next);

struct EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::GradientStop*> Item;
    ::uStrong< EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop*> Next;

    void _ObjInit(::app::Fuse::Drawing::GradientStop* item, EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop* next) { EnumerableExtensions_LinkedList__Fuse_Drawing_GradientStop___ObjInit(this, item, next); }
};

}}}


#endif
