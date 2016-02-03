// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_DATA_JSON_VALUE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_DATA_JSON_VALUE_H__

#include <app/Uno.Collections.IEnumerable__Uno_Data_Json_Value.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Data_Json_Value; } } }
namespace app { namespace Uno { namespace Data { namespace Json { struct Value; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Data_Json_Value;

struct List__Uno_Data_Json_Value__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Data_Json_Value __interface_0;
};

List__Uno_Data_Json_Value__uType* List__Uno_Data_Json_Value__typeof();

::uObject* List__Uno_Data_Json_Value__GetEnumerator_boxed(List__Uno_Data_Json_Value* __this);
void List__Uno_Data_Json_Value___ObjInit(List__Uno_Data_Json_Value* __this);
void List__Uno_Data_Json_Value___ObjInit_1(List__Uno_Data_Json_Value* __this, int capacity);
void List__Uno_Data_Json_Value__Add(List__Uno_Data_Json_Value* __this, ::app::Uno::Data::Json::Value* item);
void List__Uno_Data_Json_Value__AddRange(List__Uno_Data_Json_Value* __this, ::uObject* items);
void List__Uno_Data_Json_Value__BoundsCheck(List__Uno_Data_Json_Value* __this, int index);
void List__Uno_Data_Json_Value__Clear(List__Uno_Data_Json_Value* __this);
bool List__Uno_Data_Json_Value__Contains(List__Uno_Data_Json_Value* __this, ::app::Uno::Data::Json::Value* item);
void List__Uno_Data_Json_Value__EnsureCapacity(List__Uno_Data_Json_Value* __this);
int List__Uno_Data_Json_Value__get_Count(List__Uno_Data_Json_Value* __this);
::app::Uno::Data::Json::Value* List__Uno_Data_Json_Value__get_Item(List__Uno_Data_Json_Value* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Data_Json_Value List__Uno_Data_Json_Value__GetEnumerator(List__Uno_Data_Json_Value* __this);
int List__Uno_Data_Json_Value__IndexOf(List__Uno_Data_Json_Value* __this, ::app::Uno::Data::Json::Value* item);
void List__Uno_Data_Json_Value__Insert(List__Uno_Data_Json_Value* __this, int index, ::app::Uno::Data::Json::Value* item);
List__Uno_Data_Json_Value* List__Uno_Data_Json_Value__New_1(::uStatic* __this);
List__Uno_Data_Json_Value* List__Uno_Data_Json_Value__New_2(::uStatic* __this, int capacity);
bool List__Uno_Data_Json_Value__Remove(List__Uno_Data_Json_Value* __this, ::app::Uno::Data::Json::Value* item);
void List__Uno_Data_Json_Value__RemoveAt(List__Uno_Data_Json_Value* __this, int index);
void List__Uno_Data_Json_Value__set_Item(List__Uno_Data_Json_Value* __this, int index, ::app::Uno::Data::Json::Value* value);
void List__Uno_Data_Json_Value__Sort(List__Uno_Data_Json_Value* __this, ::uDelegate* comparer);
::uArray* List__Uno_Data_Json_Value__ToArray(List__Uno_Data_Json_Value* __this);

struct List__Uno_Data_Json_Value : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Data_Json_Value__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Data_Json_Value___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Data_Json_Value___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Data::Json::Value* item) { List__Uno_Data_Json_Value__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Data_Json_Value__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Data_Json_Value__BoundsCheck(this, index); }
    void Clear() { List__Uno_Data_Json_Value__Clear(this); }
    bool Contains(::app::Uno::Data::Json::Value* item) { return List__Uno_Data_Json_Value__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Data_Json_Value__EnsureCapacity(this); }
    int Count() { return List__Uno_Data_Json_Value__get_Count(this); }
    ::app::Uno::Data::Json::Value* Item(int index) { return List__Uno_Data_Json_Value__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Data_Json_Value GetEnumerator();
    int IndexOf(::app::Uno::Data::Json::Value* item) { return List__Uno_Data_Json_Value__IndexOf(this, item); }
    void Insert(int index, ::app::Uno::Data::Json::Value* item) { List__Uno_Data_Json_Value__Insert(this, index, item); }
    bool Remove(::app::Uno::Data::Json::Value* item) { return List__Uno_Data_Json_Value__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Data_Json_Value__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Data::Json::Value* value) { List__Uno_Data_Json_Value__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Data_Json_Value__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Data_Json_Value__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Data_Json_Value.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Data_Json_Value List__Uno_Data_Json_Value::GetEnumerator() { return List__Uno_Data_Json_Value__GetEnumerator(this); }

}}}


#endif
