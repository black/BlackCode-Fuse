#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ConcurrentCollection__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Collections.ConcurrentCollection__Uno_EventHandler.h>
#include <app/Uno.Collections.ConcurrentCollection1_DeferLockImpl__Fuse_Anima-274f2287.h>
#include <app/Uno.Collections.ConcurrentCollection1_DeferLockImpl__Uno_EventHandler.h>
#include <app/Uno.Collections.ConcurrentCollection1_ModItem__Fuse_Animations_-c46c43e5.h>
#include <app/Uno.Collections.ConcurrentCollection1_ModItem__Uno_EventHandler.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Collections.IEnumerator__Uno_EventHandler.h>
#include <app/Uno.Collections.List__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Collections.List__Uno_Collections_ConcurrentCollection1_Mod-2c2f5a91.h>
#include <app/Uno.Collections.List__Uno_Collections_ConcurrentCollection1_Mod-2fdc210.h>
#include <app/Uno.Collections.List__Uno_EventHandler.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_EventHandler.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ConcurrentCollection__Fuse_Animations_IMixerMaster__uType* ConcurrentCollection__Fuse_Animations_IMixerMaster__typeof()
{
    static ::uStaticStrong<ConcurrentCollection__Fuse_Animations_IMixerMaster__uType*> type;
    if (type != NULL) return type;

    type = (ConcurrentCollection__Fuse_Animations_IMixerMaster__uType*)::uAllocClassType(sizeof(ConcurrentCollection__Fuse_Animations_IMixerMaster__uType), "Uno.Collections.ConcurrentCollection<Fuse.Animations.IMixerMaster>", false, 1, 3, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ConcurrentCollection__Fuse_Animations_IMixerMaster__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Animations_IMixerMaster__typeof(), offsetof(ConcurrentCollection__Fuse_Animations_IMixerMaster__uType, __interface_0));

    type->SetStrongRefs(
        "_back", offsetof(ConcurrentCollection__Fuse_Animations_IMixerMaster, _back),
        "_lockImpl", offsetof(ConcurrentCollection__Fuse_Animations_IMixerMaster, _lockImpl),
        "_mod", offsetof(ConcurrentCollection__Fuse_Animations_IMixerMaster, _mod));

    return type;
}

void ConcurrentCollection__Fuse_Animations_IMixerMaster___ObjInit(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this)
{
    __this->_back = ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster__New_1(NULL);
}

void ConcurrentCollection__Fuse_Animations_IMixerMaster__Add(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this, ::uObject* item)
{
    ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster collection_123 = ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster();

    if (__this->_defer)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*>(__this->Mod())->Count(); ++i)
        {
            if (::app::Uno::Object__Equals_1(NULL, (::uObject*)::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*>(__this->Mod())->Item(i).Item, (::uObject*)item) && !::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*>(__this->Mod())->Item(i).Add)
            {
                ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*>(__this->Mod())->RemoveAt(i);
                return;
            }
        }

        ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*>(__this->Mod())->Add((collection_123 = ::uDefault< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster>(), collection_123.Item = item, collection_123.Add = true, collection_123));
    }
    else
    {
        ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_back)->Add(item);
    }
}

void ConcurrentCollection__Fuse_Animations_IMixerMaster__Clear(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_back)->Clear();

    if (__this->_mod != NULL)
    {
        ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*>(__this->_mod)->Clear();
    }
}

bool ConcurrentCollection__Fuse_Animations_IMixerMaster__Contains(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this, ::uObject* item)
{
    if (__this->_mod != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*>(__this->_mod)->Count(); ++i)
        {
            ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster m = ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*>(__this->_mod)->Item(i);

            if (!::app::Uno::Object__Equals_1(NULL, (::uObject*)m.Item, (::uObject*)item))
            {
                continue;
            }

            return m.Add;
        }
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_back)->Contains(item);
}

void ConcurrentCollection__Fuse_Animations_IMixerMaster__DeferChanges(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this)
{
    __this->_defer = true;
}

::uObject* ConcurrentCollection__Fuse_Animations_IMixerMaster__DeferLock(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this)
{
    if (__this->_lockImpl == NULL)
    {
        __this->_lockImpl = ::app::Uno::Collections::ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__New_1(NULL, __this);
    }

    __this->DeferChanges();
    return (::uObject*)__this->_lockImpl;
}

void ConcurrentCollection__Fuse_Animations_IMixerMaster__EndDefer(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this)
{
    __this->_defer = false;

    if (__this->_mod != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*>(__this->_mod)->Count(); ++i)
        {
            ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster a = ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*>(__this->_mod)->Item(i);

            if (a.Add)
            {
                ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_back)->Add(a.Item);
            }
            else
            {
                ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_back)->Remove(a.Item);
            }
        }

        ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*>(__this->_mod)->Clear();
    }
}

int ConcurrentCollection__Fuse_Animations_IMixerMaster__get_Count(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this)
{
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_back)->Count();

    if (__this->_mod != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*>(__this->_mod)->Count(); ++i)
        {
            if (::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*>(__this->_mod)->Item(i).Add)
            {
                c++;
            }
            else
            {
                c--;
            }
        }
    }

    return c;
}

::uObject* ConcurrentCollection__Fuse_Animations_IMixerMaster__get_Item(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this, int index)
{
    return ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_back)->Item(index);
}

::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* ConcurrentCollection__Fuse_Animations_IMixerMaster__get_Mod(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this)
{
    if (__this->_mod == NULL)
    {
        __this->_mod = ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___New_1(NULL);
    }

    return __this->_mod;
}

::uObject* ConcurrentCollection__Fuse_Animations_IMixerMaster__GetEnumerator(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Animations_IMixerMaster__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_back)->GetEnumerator());
}

ConcurrentCollection__Fuse_Animations_IMixerMaster* ConcurrentCollection__Fuse_Animations_IMixerMaster__New_1(::uStatic* __this)
{
    ConcurrentCollection__Fuse_Animations_IMixerMaster* inst = (ConcurrentCollection__Fuse_Animations_IMixerMaster*)::uAllocObject(sizeof(ConcurrentCollection__Fuse_Animations_IMixerMaster), ConcurrentCollection__Fuse_Animations_IMixerMaster__typeof());
    inst->_ObjInit();
    return inst;
}

bool ConcurrentCollection__Fuse_Animations_IMixerMaster__Remove(ConcurrentCollection__Fuse_Animations_IMixerMaster* __this, ::uObject* item)
{
    ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster collection_124 = ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster();

    if (__this->_defer)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*>(__this->Mod())->Count(); ++i)
        {
            if (::app::Uno::Object__Equals_1(NULL, (::uObject*)::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*>(__this->Mod())->Item(i).Item, (::uObject*)item) && ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*>(__this->Mod())->Item(i).Add)
            {
                ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*>(__this->Mod())->RemoveAt(i);
                return true;
            }
        }

        if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_back)->Contains(item))
        {
            ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*>(__this->Mod())->Add((collection_124 = ::uDefault< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster>(), collection_124.Item = item, collection_124.Add = false, collection_124));
            return true;
        }

        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*>(__this->_back)->Remove(item);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ConcurrentCollection__Uno_EventHandler__uType* ConcurrentCollection__Uno_EventHandler__typeof()
{
    static ::uStaticStrong<ConcurrentCollection__Uno_EventHandler__uType*> type;
    if (type != NULL) return type;

    type = (ConcurrentCollection__Uno_EventHandler__uType*)::uAllocClassType(sizeof(ConcurrentCollection__Uno_EventHandler__uType), "Uno.Collections.ConcurrentCollection<Uno.EventHandler>", false, 1, 3, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ConcurrentCollection__Uno_EventHandler__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Uno_EventHandler__typeof(), offsetof(ConcurrentCollection__Uno_EventHandler__uType, __interface_0));

    type->SetStrongRefs(
        "_back", offsetof(ConcurrentCollection__Uno_EventHandler, _back),
        "_lockImpl", offsetof(ConcurrentCollection__Uno_EventHandler, _lockImpl),
        "_mod", offsetof(ConcurrentCollection__Uno_EventHandler, _mod));

    return type;
}

void ConcurrentCollection__Uno_EventHandler___ObjInit(ConcurrentCollection__Uno_EventHandler* __this)
{
    __this->_back = ::app::Uno::Collections::List__Uno_EventHandler__New_1(NULL);
}

void ConcurrentCollection__Uno_EventHandler__Add(ConcurrentCollection__Uno_EventHandler* __this, ::uDelegate* item)
{
    ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler collection_123 = ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler();

    if (__this->_defer)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*>(__this->Mod())->Count(); ++i)
        {
            if (::app::Uno::Object__Equals_1(NULL, (::uObject*)::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*>(__this->Mod())->Item(i).Item, (::uObject*)item) && !::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*>(__this->Mod())->Item(i).Add)
            {
                ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*>(__this->Mod())->RemoveAt(i);
                return;
            }
        }

        ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*>(__this->Mod())->Add((collection_123 = ::uDefault< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler>(), collection_123.Item = item, collection_123.Add = true, collection_123));
    }
    else
    {
        ::uPtr< ::app::Uno::Collections::List__Uno_EventHandler*>(__this->_back)->Add(item);
    }
}

void ConcurrentCollection__Uno_EventHandler__Clear(ConcurrentCollection__Uno_EventHandler* __this)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_EventHandler*>(__this->_back)->Clear();

    if (__this->_mod != NULL)
    {
        ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*>(__this->_mod)->Clear();
    }
}

bool ConcurrentCollection__Uno_EventHandler__Contains(ConcurrentCollection__Uno_EventHandler* __this, ::uDelegate* item)
{
    if (__this->_mod != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*>(__this->_mod)->Count(); ++i)
        {
            ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler m = ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*>(__this->_mod)->Item(i);

            if (!::app::Uno::Object__Equals_1(NULL, (::uObject*)m.Item, (::uObject*)item))
            {
                continue;
            }

            return m.Add;
        }
    }

    return ::uPtr< ::app::Uno::Collections::List__Uno_EventHandler*>(__this->_back)->Contains(item);
}

void ConcurrentCollection__Uno_EventHandler__DeferChanges(ConcurrentCollection__Uno_EventHandler* __this)
{
    __this->_defer = true;
}

::uObject* ConcurrentCollection__Uno_EventHandler__DeferLock(ConcurrentCollection__Uno_EventHandler* __this)
{
    if (__this->_lockImpl == NULL)
    {
        __this->_lockImpl = ::app::Uno::Collections::ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__New_1(NULL, __this);
    }

    __this->DeferChanges();
    return (::uObject*)__this->_lockImpl;
}

void ConcurrentCollection__Uno_EventHandler__EndDefer(ConcurrentCollection__Uno_EventHandler* __this)
{
    __this->_defer = false;

    if (__this->_mod != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*>(__this->_mod)->Count(); ++i)
        {
            ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler a = ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*>(__this->_mod)->Item(i);

            if (a.Add)
            {
                ::uPtr< ::app::Uno::Collections::List__Uno_EventHandler*>(__this->_back)->Add(a.Item);
            }
            else
            {
                ::uPtr< ::app::Uno::Collections::List__Uno_EventHandler*>(__this->_back)->Remove(a.Item);
            }
        }

        ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*>(__this->_mod)->Clear();
    }
}

int ConcurrentCollection__Uno_EventHandler__get_Count(ConcurrentCollection__Uno_EventHandler* __this)
{
    int c = ::uPtr< ::app::Uno::Collections::List__Uno_EventHandler*>(__this->_back)->Count();

    if (__this->_mod != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*>(__this->_mod)->Count(); ++i)
        {
            if (::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*>(__this->_mod)->Item(i).Add)
            {
                c++;
            }
            else
            {
                c--;
            }
        }
    }

    return c;
}

::uDelegate* ConcurrentCollection__Uno_EventHandler__get_Item(ConcurrentCollection__Uno_EventHandler* __this, int index)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_EventHandler*>(__this->_back)->Item(index);
}

::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* ConcurrentCollection__Uno_EventHandler__get_Mod(ConcurrentCollection__Uno_EventHandler* __this)
{
    if (__this->_mod == NULL)
    {
        __this->_mod = ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___New_1(NULL);
    }

    return __this->_mod;
}

::uObject* ConcurrentCollection__Uno_EventHandler__GetEnumerator(ConcurrentCollection__Uno_EventHandler* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Uno_EventHandler__typeof(), ::uPtr< ::app::Uno::Collections::List__Uno_EventHandler*>(__this->_back)->GetEnumerator());
}

ConcurrentCollection__Uno_EventHandler* ConcurrentCollection__Uno_EventHandler__New_1(::uStatic* __this)
{
    ConcurrentCollection__Uno_EventHandler* inst = (ConcurrentCollection__Uno_EventHandler*)::uAllocObject(sizeof(ConcurrentCollection__Uno_EventHandler), ConcurrentCollection__Uno_EventHandler__typeof());
    inst->_ObjInit();
    return inst;
}

bool ConcurrentCollection__Uno_EventHandler__Remove(ConcurrentCollection__Uno_EventHandler* __this, ::uDelegate* item)
{
    ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler collection_124 = ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler();

    if (__this->_defer)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*>(__this->Mod())->Count(); ++i)
        {
            if (::app::Uno::Object__Equals_1(NULL, (::uObject*)::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*>(__this->Mod())->Item(i).Item, (::uObject*)item) && ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*>(__this->Mod())->Item(i).Add)
            {
                ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*>(__this->Mod())->RemoveAt(i);
                return true;
            }
        }

        if (::uPtr< ::app::Uno::Collections::List__Uno_EventHandler*>(__this->_back)->Contains(item))
        {
            ::uPtr< ::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*>(__this->Mod())->Add((collection_124 = ::uDefault< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler>(), collection_124.Item = item, collection_124.Add = false, collection_124));
            return true;
        }

        return false;
    }

    return ::uPtr< ::app::Uno::Collections::List__Uno_EventHandler*>(__this->_back)->Remove(item);
}

}}}
