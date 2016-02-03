#include <app/Fuse.Drawing.Tesselation.Collections.PriorityQueue__Fuse_Drawin-b60a1789.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Uno.ArgumentException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PriorityQueue__Fuse_Drawing_Tesselation_Vertex__uType* PriorityQueue__Fuse_Drawing_Tesselation_Vertex__typeof()
{
    static ::uStaticStrong<PriorityQueue__Fuse_Drawing_Tesselation_Vertex__uType*> type;
    if (type != NULL) return type;

    type = (PriorityQueue__Fuse_Drawing_Tesselation_Vertex__uType*)::uAllocClassType(sizeof(PriorityQueue__Fuse_Drawing_Tesselation_Vertex__uType), "Fuse.Drawing.Tesselation.Collections.PriorityQueue<Fuse.Drawing.Tesselation.Vertex>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_elements", offsetof(PriorityQueue__Fuse_Drawing_Tesselation_Vertex, _elements),
        "_maxValue", offsetof(PriorityQueue__Fuse_Drawing_Tesselation_Vertex, _maxValue));

    return type;
}

void PriorityQueue__Fuse_Drawing_Tesselation_Vertex___ObjInit(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, ::app::Fuse::Drawing::Tesselation::Vertex* maxValue)
{
    __this->_maxValue = maxValue;
    __this->_elements = ::uNewArray(::app::Fuse::Drawing::Tesselation::Vertex__typeof(), 256);
    __this->_used = 0;
}

void PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Debug(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this)
{
    if (__this->silent)
    {
        return;
    }

    for (int i = 0; i < __this->_used; i++)
    {
        ::app::Uno::Diagnostics::Debug__Log_5(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("    pq["), ::uBox< int>(::app::Uno::Int__typeof(), i)), ::uGetConstString("] = ")), (::uObject*)::uPtr< ::uArray*>(__this->_elements)->Item< ::app::Fuse::Drawing::Tesselation::Vertex*>(i)), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Drawing.Polygons\\0.11.3\\Collections\\$.uno"), 641);
    }
}

::app::Fuse::Drawing::Tesselation::Vertex* PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Dequeue(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this)
{
    if (__this->IsEmpty())
    {
        return NULL;
    }

    ::app::Fuse::Drawing::Tesselation::Vertex* max = ::uPtr< ::uArray*>(__this->_elements)->Item< ::app::Fuse::Drawing::Tesselation::Vertex*>(0);
    __this->RemoveAt(0);
    return max;
}

void PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Enqueue(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, ::app::Fuse::Drawing::Tesselation::Vertex* newKey)
{
    __this->EnsureCapacity();
    __this->_used = __this->_used + 1;
    ::uPtr< ::uArray*>(__this->_elements)->ItemStrong< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->_used - 1) = __this->_maxValue;
    __this->HeapIncreaseKey(__this->_used - 1, newKey);
}

void PriorityQueue__Fuse_Drawing_Tesselation_Vertex__EnsureCapacity(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this)
{
    if (::uPtr< ::uArray*>(__this->_elements)->Length() == __this->_used)
    {
        ::uArray* oldElements = __this->_elements;
        __this->_elements = ::uNewArray(::app::Fuse::Drawing::Tesselation::Vertex__typeof(), ::uPtr< ::uArray*>(__this->_elements)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            ::uPtr< ::uArray*>(__this->_elements)->ItemStrong< ::app::Fuse::Drawing::Tesselation::Vertex*>(i) = ::uPtr< ::uArray*>(oldElements)->Item< ::app::Fuse::Drawing::Tesselation::Vertex*>(i);
        }
    }
}

bool PriorityQueue__Fuse_Drawing_Tesselation_Vertex__get_IsEmpty(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this)
{
    return __this->_used < 1;
}

::app::Fuse::Drawing::Tesselation::Vertex* PriorityQueue__Fuse_Drawing_Tesselation_Vertex__get_Peek(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this)
{
    return __this->IsEmpty() ? NULL : ::uPtr< ::uArray*>(__this->_elements)->Item< ::app::Fuse::Drawing::Tesselation::Vertex*>(0);
}

void PriorityQueue__Fuse_Drawing_Tesselation_Vertex__HeapIncreaseKey(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, int i, ::app::Fuse::Drawing::Tesselation::Vertex* key)
{
    ::uPtr< ::uArray*>(__this->_elements)->ItemStrong< ::app::Fuse::Drawing::Tesselation::Vertex*>(i) = key;

    while ((i > 0) && __this->Leq(__this->Parent(i), i))
    {
        __this->Swap(i, __this->Parent(i));
        i = __this->Parent(i);
    }
}

int PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Left(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, int i)
{
    return 2 * i;
}

bool PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Leq(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, int ai, int bi)
{
    return __this->Leq_1(::uPtr< ::uArray*>(__this->_elements)->Item< ::app::Fuse::Drawing::Tesselation::Vertex*>(ai), ::uPtr< ::uArray*>(__this->_elements)->Item< ::app::Fuse::Drawing::Tesselation::Vertex*>(bi));
}

void PriorityQueue__Fuse_Drawing_Tesselation_Vertex__MaxHeapify(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, int i)
{
    int l = __this->Left(i);
    int r = __this->Right(i);
    int largest = -1;

    if ((l < __this->_used) && !__this->Leq_1(::uPtr< ::uArray*>(__this->_elements)->Item< ::app::Fuse::Drawing::Tesselation::Vertex*>(l), ::uPtr< ::uArray*>(__this->_elements)->Item< ::app::Fuse::Drawing::Tesselation::Vertex*>(i)))
    {
        largest = l;
    }
    else
    {
        largest = i;
    }

    if ((r < __this->_used) && !__this->Leq_1(::uPtr< ::uArray*>(__this->_elements)->Item< ::app::Fuse::Drawing::Tesselation::Vertex*>(r), ::uPtr< ::uArray*>(__this->_elements)->Item< ::app::Fuse::Drawing::Tesselation::Vertex*>(largest)))
    {
        largest = r;
    }

    if (largest != i)
    {
        __this->Swap(i, largest);
        __this->MaxHeapify(largest);
    }
}

int PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Parent(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, int i)
{
    return i / 2;
}

void PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Remove(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, ::app::Fuse::Drawing::Tesselation::Vertex* item)
{
    for (int index = 0; index < __this->_used; ++index)
    {
        if (::app::Uno::Object::Equals(::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(item), (::uObject*)::uPtr< ::uArray*>(__this->_elements)->Item< ::app::Fuse::Drawing::Tesselation::Vertex*>(index)))
        {
            __this->RemoveAt(index);
            return;
        }
    }

    U_THROW(::app::Uno::ArgumentException__New_4(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("item "), (::uObject*)item), ::uGetConstString(" not found in queue")), ::uGetConstString("item")));
}

void PriorityQueue__Fuse_Drawing_Tesselation_Vertex__RemoveAt(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, int index)
{
    __this->_used--;
    ::uPtr< ::uArray*>(__this->_elements)->ItemStrong< ::app::Fuse::Drawing::Tesselation::Vertex*>(index) = ::uPtr< ::uArray*>(__this->_elements)->Item< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->_used);
    ::uPtr< ::uArray*>(__this->_elements)->ItemStrong< ::app::Fuse::Drawing::Tesselation::Vertex*>(__this->_used) = NULL;
    __this->MaxHeapify(index);
}

int PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Right(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, int i)
{
    return (2 * i) + 1;
}

void PriorityQueue__Fuse_Drawing_Tesselation_Vertex__Swap(PriorityQueue__Fuse_Drawing_Tesselation_Vertex* __this, int a, int b)
{
    ::app::Fuse::Drawing::Tesselation::Vertex* tmp = ::uPtr< ::uArray*>(__this->_elements)->Item< ::app::Fuse::Drawing::Tesselation::Vertex*>(a);
    ::uPtr< ::uArray*>(__this->_elements)->ItemStrong< ::app::Fuse::Drawing::Tesselation::Vertex*>(a) = ::uPtr< ::uArray*>(__this->_elements)->Item< ::app::Fuse::Drawing::Tesselation::Vertex*>(b);
    ::uPtr< ::uArray*>(__this->_elements)->ItemStrong< ::app::Fuse::Drawing::Tesselation::Vertex*>(b) = tmp;
}

}}}}}
