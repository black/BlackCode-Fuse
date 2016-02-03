// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Source\Uno\FunctionFactory.h'.
// WARNING: Changes might be lost if you edit this file directly.

// The original file was generated using Function.py.
#ifndef __UNO_FUNCTION_H__
#define __UNO_FUNCTION_H__

#include <Uno/Reflection.h>

/**
    \addtogroup Reflection
    @{
*/
struct _uFunctionVoidT0 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        (*(void(*)(void*))_Func(obj))(_This(obj));
        return NULL;
    }
};
template <typename OT>
uFunction* uNewFunctionVoid(const char* name, void(*func)(OT), size_t offset, bool isStatic) {
    return (new _uFunctionVoidT0())->_Init(name, (void*)func, offset, isStatic, uVoid__typeof(), 0);
}

template <typename RT>
struct _uFunctionT0 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        RT retval = (*(RT(*)(void*))_Func(obj))(_This(obj));
        return _Return(sizeof(RT), &retval);
    }
};
template <typename OT, typename RT>
uFunction* uNewFunction(const char* name, RT(*func)(OT), size_t offset, bool isStatic, uType* returnType) {
    return (new _uFunctionT0<RT>())->_Init(name, (void*)func, offset, isStatic, returnType, 0);
}

template <typename T0>
struct _uFunctionVoidT1 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        (*(void(*)(void*, T0))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)));
        return NULL;
    }
};
template <typename OT, typename T0>
uFunction* uNewFunctionVoid(const char* name, void(*func)(OT, T0), size_t offset, bool isStatic, uType* p0) {
    return (new _uFunctionVoidT1<T0>())->_Init(name, (void*)func, offset, isStatic, uVoid__typeof(), 1, p0);
}

template <typename RT, typename T0>
struct _uFunctionT1 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        RT retval = (*(RT(*)(void*, T0))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)));
        return _Return(sizeof(RT), &retval);
    }
};
template <typename OT, typename RT, typename T0>
uFunction* uNewFunction(const char* name, RT(*func)(OT, T0), size_t offset, bool isStatic, uType* returnType, uType* p0) {
    return (new _uFunctionT1<RT, T0>())->_Init(name, (void*)func, offset, isStatic, returnType, 1, p0);
}

template <typename T0, typename T1>
struct _uFunctionVoidT2 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        (*(void(*)(void*, T0, T1))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)));
        return NULL;
    }
};
template <typename OT, typename T0, typename T1>
uFunction* uNewFunctionVoid(const char* name, void(*func)(OT, T0, T1), size_t offset, bool isStatic, uType* p0, uType* p1) {
    return (new _uFunctionVoidT2<T0, T1>())->_Init(name, (void*)func, offset, isStatic, uVoid__typeof(), 2, p0, p1);
}

template <typename RT, typename T0, typename T1>
struct _uFunctionT2 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        RT retval = (*(RT(*)(void*, T0, T1))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)));
        return _Return(sizeof(RT), &retval);
    }
};
template <typename OT, typename RT, typename T0, typename T1>
uFunction* uNewFunction(const char* name, RT(*func)(OT, T0, T1), size_t offset, bool isStatic, uType* returnType, uType* p0, uType* p1) {
    return (new _uFunctionT2<RT, T0, T1>())->_Init(name, (void*)func, offset, isStatic, returnType, 2, p0, p1);
}

template <typename T0, typename T1, typename T2>
struct _uFunctionVoidT3 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        (*(void(*)(void*, T0, T1, T2))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)));
        return NULL;
    }
};
template <typename OT, typename T0, typename T1, typename T2>
uFunction* uNewFunctionVoid(const char* name, void(*func)(OT, T0, T1, T2), size_t offset, bool isStatic, uType* p0, uType* p1, uType* p2) {
    return (new _uFunctionVoidT3<T0, T1, T2>())->_Init(name, (void*)func, offset, isStatic, uVoid__typeof(), 3, p0, p1, p2);
}

template <typename RT, typename T0, typename T1, typename T2>
struct _uFunctionT3 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        RT retval = (*(RT(*)(void*, T0, T1, T2))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)));
        return _Return(sizeof(RT), &retval);
    }
};
template <typename OT, typename RT, typename T0, typename T1, typename T2>
uFunction* uNewFunction(const char* name, RT(*func)(OT, T0, T1, T2), size_t offset, bool isStatic, uType* returnType, uType* p0, uType* p1, uType* p2) {
    return (new _uFunctionT3<RT, T0, T1, T2>())->_Init(name, (void*)func, offset, isStatic, returnType, 3, p0, p1, p2);
}

template <typename T0, typename T1, typename T2, typename T3>
struct _uFunctionVoidT4 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        (*(void(*)(void*, T0, T1, T2, T3))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)));
        return NULL;
    }
};
template <typename OT, typename T0, typename T1, typename T2, typename T3>
uFunction* uNewFunctionVoid(const char* name, void(*func)(OT, T0, T1, T2, T3), size_t offset, bool isStatic, uType* p0, uType* p1, uType* p2, uType* p3) {
    return (new _uFunctionVoidT4<T0, T1, T2, T3>())->_Init(name, (void*)func, offset, isStatic, uVoid__typeof(), 4, p0, p1, p2, p3);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3>
struct _uFunctionT4 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        RT retval = (*(RT(*)(void*, T0, T1, T2, T3))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)));
        return _Return(sizeof(RT), &retval);
    }
};
template <typename OT, typename RT, typename T0, typename T1, typename T2, typename T3>
uFunction* uNewFunction(const char* name, RT(*func)(OT, T0, T1, T2, T3), size_t offset, bool isStatic, uType* returnType, uType* p0, uType* p1, uType* p2, uType* p3) {
    return (new _uFunctionT4<RT, T0, T1, T2, T3>())->_Init(name, (void*)func, offset, isStatic, returnType, 4, p0, p1, p2, p3);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4>
struct _uFunctionVoidT5 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        (*(void(*)(void*, T0, T1, T2, T3, T4))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)));
        return NULL;
    }
};
template <typename OT, typename T0, typename T1, typename T2, typename T3, typename T4>
uFunction* uNewFunctionVoid(const char* name, void(*func)(OT, T0, T1, T2, T3, T4), size_t offset, bool isStatic, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4) {
    return (new _uFunctionVoidT5<T0, T1, T2, T3, T4>())->_Init(name, (void*)func, offset, isStatic, uVoid__typeof(), 5, p0, p1, p2, p3, p4);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4>
struct _uFunctionT5 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        RT retval = (*(RT(*)(void*, T0, T1, T2, T3, T4))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)));
        return _Return(sizeof(RT), &retval);
    }
};
template <typename OT, typename RT, typename T0, typename T1, typename T2, typename T3, typename T4>
uFunction* uNewFunction(const char* name, RT(*func)(OT, T0, T1, T2, T3, T4), size_t offset, bool isStatic, uType* returnType, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4) {
    return (new _uFunctionT5<RT, T0, T1, T2, T3, T4>())->_Init(name, (void*)func, offset, isStatic, returnType, 5, p0, p1, p2, p3, p4);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
struct _uFunctionVoidT6 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        (*(void(*)(void*, T0, T1, T2, T3, T4, T5))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)));
        return NULL;
    }
};
template <typename OT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
uFunction* uNewFunctionVoid(const char* name, void(*func)(OT, T0, T1, T2, T3, T4, T5), size_t offset, bool isStatic, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5) {
    return (new _uFunctionVoidT6<T0, T1, T2, T3, T4, T5>())->_Init(name, (void*)func, offset, isStatic, uVoid__typeof(), 6, p0, p1, p2, p3, p4, p5);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
struct _uFunctionT6 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        RT retval = (*(RT(*)(void*, T0, T1, T2, T3, T4, T5))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)));
        return _Return(sizeof(RT), &retval);
    }
};
template <typename OT, typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
uFunction* uNewFunction(const char* name, RT(*func)(OT, T0, T1, T2, T3, T4, T5), size_t offset, bool isStatic, uType* returnType, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5) {
    return (new _uFunctionT6<RT, T0, T1, T2, T3, T4, T5>())->_Init(name, (void*)func, offset, isStatic, returnType, 6, p0, p1, p2, p3, p4, p5);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct _uFunctionVoidT7 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        (*(void(*)(void*, T0, T1, T2, T3, T4, T5, T6))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)));
        return NULL;
    }
};
template <typename OT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
uFunction* uNewFunctionVoid(const char* name, void(*func)(OT, T0, T1, T2, T3, T4, T5, T6), size_t offset, bool isStatic, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6) {
    return (new _uFunctionVoidT7<T0, T1, T2, T3, T4, T5, T6>())->_Init(name, (void*)func, offset, isStatic, uVoid__typeof(), 7, p0, p1, p2, p3, p4, p5, p6);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct _uFunctionT7 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        RT retval = (*(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)));
        return _Return(sizeof(RT), &retval);
    }
};
template <typename OT, typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
uFunction* uNewFunction(const char* name, RT(*func)(OT, T0, T1, T2, T3, T4, T5, T6), size_t offset, bool isStatic, uType* returnType, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6) {
    return (new _uFunctionT7<RT, T0, T1, T2, T3, T4, T5, T6>())->_Init(name, (void*)func, offset, isStatic, returnType, 7, p0, p1, p2, p3, p4, p5, p6);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct _uFunctionVoidT8 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        (*(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)),
            uUnbox<T7>(ParameterTypes->UnsafeItem<uType*>(7), args->UnsafeItem<uObject*>(7)));
        return NULL;
    }
};
template <typename OT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
uFunction* uNewFunctionVoid(const char* name, void(*func)(OT, T0, T1, T2, T3, T4, T5, T6, T7), size_t offset, bool isStatic, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6, uType* p7) {
    return (new _uFunctionVoidT8<T0, T1, T2, T3, T4, T5, T6, T7>())->_Init(name, (void*)func, offset, isStatic, uVoid__typeof(), 8, p0, p1, p2, p3, p4, p5, p6, p7);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct _uFunctionT8 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        RT retval = (*(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)),
            uUnbox<T7>(ParameterTypes->UnsafeItem<uType*>(7), args->UnsafeItem<uObject*>(7)));
        return _Return(sizeof(RT), &retval);
    }
};
template <typename OT, typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
uFunction* uNewFunction(const char* name, RT(*func)(OT, T0, T1, T2, T3, T4, T5, T6, T7), size_t offset, bool isStatic, uType* returnType, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6, uType* p7) {
    return (new _uFunctionT8<RT, T0, T1, T2, T3, T4, T5, T6, T7>())->_Init(name, (void*)func, offset, isStatic, returnType, 8, p0, p1, p2, p3, p4, p5, p6, p7);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct _uFunctionVoidT9 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        (*(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)),
            uUnbox<T7>(ParameterTypes->UnsafeItem<uType*>(7), args->UnsafeItem<uObject*>(7)),
            uUnbox<T8>(ParameterTypes->UnsafeItem<uType*>(8), args->UnsafeItem<uObject*>(8)));
        return NULL;
    }
};
template <typename OT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
uFunction* uNewFunctionVoid(const char* name, void(*func)(OT, T0, T1, T2, T3, T4, T5, T6, T7, T8), size_t offset, bool isStatic, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6, uType* p7, uType* p8) {
    return (new _uFunctionVoidT9<T0, T1, T2, T3, T4, T5, T6, T7, T8>())->_Init(name, (void*)func, offset, isStatic, uVoid__typeof(), 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct _uFunctionT9 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        RT retval = (*(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)),
            uUnbox<T7>(ParameterTypes->UnsafeItem<uType*>(7), args->UnsafeItem<uObject*>(7)),
            uUnbox<T8>(ParameterTypes->UnsafeItem<uType*>(8), args->UnsafeItem<uObject*>(8)));
        return _Return(sizeof(RT), &retval);
    }
};
template <typename OT, typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
uFunction* uNewFunction(const char* name, RT(*func)(OT, T0, T1, T2, T3, T4, T5, T6, T7, T8), size_t offset, bool isStatic, uType* returnType, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6, uType* p7, uType* p8) {
    return (new _uFunctionT9<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8>())->_Init(name, (void*)func, offset, isStatic, returnType, 9, p0, p1, p2, p3, p4, p5, p6, p7, p8);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct _uFunctionVoidT10 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        (*(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)),
            uUnbox<T7>(ParameterTypes->UnsafeItem<uType*>(7), args->UnsafeItem<uObject*>(7)),
            uUnbox<T8>(ParameterTypes->UnsafeItem<uType*>(8), args->UnsafeItem<uObject*>(8)),
            uUnbox<T9>(ParameterTypes->UnsafeItem<uType*>(9), args->UnsafeItem<uObject*>(9)));
        return NULL;
    }
};
template <typename OT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
uFunction* uNewFunctionVoid(const char* name, void(*func)(OT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9), size_t offset, bool isStatic, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6, uType* p7, uType* p8, uType* p9) {
    return (new _uFunctionVoidT10<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>())->_Init(name, (void*)func, offset, isStatic, uVoid__typeof(), 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct _uFunctionT10 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        RT retval = (*(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)),
            uUnbox<T7>(ParameterTypes->UnsafeItem<uType*>(7), args->UnsafeItem<uObject*>(7)),
            uUnbox<T8>(ParameterTypes->UnsafeItem<uType*>(8), args->UnsafeItem<uObject*>(8)),
            uUnbox<T9>(ParameterTypes->UnsafeItem<uType*>(9), args->UnsafeItem<uObject*>(9)));
        return _Return(sizeof(RT), &retval);
    }
};
template <typename OT, typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
uFunction* uNewFunction(const char* name, RT(*func)(OT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9), size_t offset, bool isStatic, uType* returnType, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6, uType* p7, uType* p8, uType* p9) {
    return (new _uFunctionT10<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>())->_Init(name, (void*)func, offset, isStatic, returnType, 10, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct _uFunctionVoidT11 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        (*(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)),
            uUnbox<T7>(ParameterTypes->UnsafeItem<uType*>(7), args->UnsafeItem<uObject*>(7)),
            uUnbox<T8>(ParameterTypes->UnsafeItem<uType*>(8), args->UnsafeItem<uObject*>(8)),
            uUnbox<T9>(ParameterTypes->UnsafeItem<uType*>(9), args->UnsafeItem<uObject*>(9)),
            uUnbox<T10>(ParameterTypes->UnsafeItem<uType*>(10), args->UnsafeItem<uObject*>(10)));
        return NULL;
    }
};
template <typename OT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
uFunction* uNewFunctionVoid(const char* name, void(*func)(OT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10), size_t offset, bool isStatic, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6, uType* p7, uType* p8, uType* p9, uType* p10) {
    return (new _uFunctionVoidT11<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>())->_Init(name, (void*)func, offset, isStatic, uVoid__typeof(), 11, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct _uFunctionT11 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        RT retval = (*(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)),
            uUnbox<T7>(ParameterTypes->UnsafeItem<uType*>(7), args->UnsafeItem<uObject*>(7)),
            uUnbox<T8>(ParameterTypes->UnsafeItem<uType*>(8), args->UnsafeItem<uObject*>(8)),
            uUnbox<T9>(ParameterTypes->UnsafeItem<uType*>(9), args->UnsafeItem<uObject*>(9)),
            uUnbox<T10>(ParameterTypes->UnsafeItem<uType*>(10), args->UnsafeItem<uObject*>(10)));
        return _Return(sizeof(RT), &retval);
    }
};
template <typename OT, typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
uFunction* uNewFunction(const char* name, RT(*func)(OT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10), size_t offset, bool isStatic, uType* returnType, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6, uType* p7, uType* p8, uType* p9, uType* p10) {
    return (new _uFunctionT11<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>())->_Init(name, (void*)func, offset, isStatic, returnType, 11, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct _uFunctionVoidT12 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        (*(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)),
            uUnbox<T7>(ParameterTypes->UnsafeItem<uType*>(7), args->UnsafeItem<uObject*>(7)),
            uUnbox<T8>(ParameterTypes->UnsafeItem<uType*>(8), args->UnsafeItem<uObject*>(8)),
            uUnbox<T9>(ParameterTypes->UnsafeItem<uType*>(9), args->UnsafeItem<uObject*>(9)),
            uUnbox<T10>(ParameterTypes->UnsafeItem<uType*>(10), args->UnsafeItem<uObject*>(10)),
            uUnbox<T11>(ParameterTypes->UnsafeItem<uType*>(11), args->UnsafeItem<uObject*>(11)));
        return NULL;
    }
};
template <typename OT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
uFunction* uNewFunctionVoid(const char* name, void(*func)(OT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11), size_t offset, bool isStatic, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6, uType* p7, uType* p8, uType* p9, uType* p10, uType* p11) {
    return (new _uFunctionVoidT12<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>())->_Init(name, (void*)func, offset, isStatic, uVoid__typeof(), 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct _uFunctionT12 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        RT retval = (*(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)),
            uUnbox<T7>(ParameterTypes->UnsafeItem<uType*>(7), args->UnsafeItem<uObject*>(7)),
            uUnbox<T8>(ParameterTypes->UnsafeItem<uType*>(8), args->UnsafeItem<uObject*>(8)),
            uUnbox<T9>(ParameterTypes->UnsafeItem<uType*>(9), args->UnsafeItem<uObject*>(9)),
            uUnbox<T10>(ParameterTypes->UnsafeItem<uType*>(10), args->UnsafeItem<uObject*>(10)),
            uUnbox<T11>(ParameterTypes->UnsafeItem<uType*>(11), args->UnsafeItem<uObject*>(11)));
        return _Return(sizeof(RT), &retval);
    }
};
template <typename OT, typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
uFunction* uNewFunction(const char* name, RT(*func)(OT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11), size_t offset, bool isStatic, uType* returnType, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6, uType* p7, uType* p8, uType* p9, uType* p10, uType* p11) {
    return (new _uFunctionT12<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>())->_Init(name, (void*)func, offset, isStatic, returnType, 12, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct _uFunctionVoidT13 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        (*(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)),
            uUnbox<T7>(ParameterTypes->UnsafeItem<uType*>(7), args->UnsafeItem<uObject*>(7)),
            uUnbox<T8>(ParameterTypes->UnsafeItem<uType*>(8), args->UnsafeItem<uObject*>(8)),
            uUnbox<T9>(ParameterTypes->UnsafeItem<uType*>(9), args->UnsafeItem<uObject*>(9)),
            uUnbox<T10>(ParameterTypes->UnsafeItem<uType*>(10), args->UnsafeItem<uObject*>(10)),
            uUnbox<T11>(ParameterTypes->UnsafeItem<uType*>(11), args->UnsafeItem<uObject*>(11)),
            uUnbox<T12>(ParameterTypes->UnsafeItem<uType*>(12), args->UnsafeItem<uObject*>(12)));
        return NULL;
    }
};
template <typename OT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
uFunction* uNewFunctionVoid(const char* name, void(*func)(OT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12), size_t offset, bool isStatic, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6, uType* p7, uType* p8, uType* p9, uType* p10, uType* p11, uType* p12) {
    return (new _uFunctionVoidT13<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>())->_Init(name, (void*)func, offset, isStatic, uVoid__typeof(), 13, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct _uFunctionT13 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        RT retval = (*(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)),
            uUnbox<T7>(ParameterTypes->UnsafeItem<uType*>(7), args->UnsafeItem<uObject*>(7)),
            uUnbox<T8>(ParameterTypes->UnsafeItem<uType*>(8), args->UnsafeItem<uObject*>(8)),
            uUnbox<T9>(ParameterTypes->UnsafeItem<uType*>(9), args->UnsafeItem<uObject*>(9)),
            uUnbox<T10>(ParameterTypes->UnsafeItem<uType*>(10), args->UnsafeItem<uObject*>(10)),
            uUnbox<T11>(ParameterTypes->UnsafeItem<uType*>(11), args->UnsafeItem<uObject*>(11)),
            uUnbox<T12>(ParameterTypes->UnsafeItem<uType*>(12), args->UnsafeItem<uObject*>(12)));
        return _Return(sizeof(RT), &retval);
    }
};
template <typename OT, typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
uFunction* uNewFunction(const char* name, RT(*func)(OT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12), size_t offset, bool isStatic, uType* returnType, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6, uType* p7, uType* p8, uType* p9, uType* p10, uType* p11, uType* p12) {
    return (new _uFunctionT13<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>())->_Init(name, (void*)func, offset, isStatic, returnType, 13, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
struct _uFunctionVoidT14 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        (*(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)),
            uUnbox<T7>(ParameterTypes->UnsafeItem<uType*>(7), args->UnsafeItem<uObject*>(7)),
            uUnbox<T8>(ParameterTypes->UnsafeItem<uType*>(8), args->UnsafeItem<uObject*>(8)),
            uUnbox<T9>(ParameterTypes->UnsafeItem<uType*>(9), args->UnsafeItem<uObject*>(9)),
            uUnbox<T10>(ParameterTypes->UnsafeItem<uType*>(10), args->UnsafeItem<uObject*>(10)),
            uUnbox<T11>(ParameterTypes->UnsafeItem<uType*>(11), args->UnsafeItem<uObject*>(11)),
            uUnbox<T12>(ParameterTypes->UnsafeItem<uType*>(12), args->UnsafeItem<uObject*>(12)),
            uUnbox<T13>(ParameterTypes->UnsafeItem<uType*>(13), args->UnsafeItem<uObject*>(13)));
        return NULL;
    }
};
template <typename OT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
uFunction* uNewFunctionVoid(const char* name, void(*func)(OT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13), size_t offset, bool isStatic, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6, uType* p7, uType* p8, uType* p9, uType* p10, uType* p11, uType* p12, uType* p13) {
    return (new _uFunctionVoidT14<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>())->_Init(name, (void*)func, offset, isStatic, uVoid__typeof(), 14, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
struct _uFunctionT14 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        RT retval = (*(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)),
            uUnbox<T7>(ParameterTypes->UnsafeItem<uType*>(7), args->UnsafeItem<uObject*>(7)),
            uUnbox<T8>(ParameterTypes->UnsafeItem<uType*>(8), args->UnsafeItem<uObject*>(8)),
            uUnbox<T9>(ParameterTypes->UnsafeItem<uType*>(9), args->UnsafeItem<uObject*>(9)),
            uUnbox<T10>(ParameterTypes->UnsafeItem<uType*>(10), args->UnsafeItem<uObject*>(10)),
            uUnbox<T11>(ParameterTypes->UnsafeItem<uType*>(11), args->UnsafeItem<uObject*>(11)),
            uUnbox<T12>(ParameterTypes->UnsafeItem<uType*>(12), args->UnsafeItem<uObject*>(12)),
            uUnbox<T13>(ParameterTypes->UnsafeItem<uType*>(13), args->UnsafeItem<uObject*>(13)));
        return _Return(sizeof(RT), &retval);
    }
};
template <typename OT, typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
uFunction* uNewFunction(const char* name, RT(*func)(OT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13), size_t offset, bool isStatic, uType* returnType, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6, uType* p7, uType* p8, uType* p9, uType* p10, uType* p11, uType* p12, uType* p13) {
    return (new _uFunctionT14<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>())->_Init(name, (void*)func, offset, isStatic, returnType, 14, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
struct _uFunctionVoidT15 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        (*(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)),
            uUnbox<T7>(ParameterTypes->UnsafeItem<uType*>(7), args->UnsafeItem<uObject*>(7)),
            uUnbox<T8>(ParameterTypes->UnsafeItem<uType*>(8), args->UnsafeItem<uObject*>(8)),
            uUnbox<T9>(ParameterTypes->UnsafeItem<uType*>(9), args->UnsafeItem<uObject*>(9)),
            uUnbox<T10>(ParameterTypes->UnsafeItem<uType*>(10), args->UnsafeItem<uObject*>(10)),
            uUnbox<T11>(ParameterTypes->UnsafeItem<uType*>(11), args->UnsafeItem<uObject*>(11)),
            uUnbox<T12>(ParameterTypes->UnsafeItem<uType*>(12), args->UnsafeItem<uObject*>(12)),
            uUnbox<T13>(ParameterTypes->UnsafeItem<uType*>(13), args->UnsafeItem<uObject*>(13)),
            uUnbox<T14>(ParameterTypes->UnsafeItem<uType*>(14), args->UnsafeItem<uObject*>(14)));
        return NULL;
    }
};
template <typename OT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
uFunction* uNewFunctionVoid(const char* name, void(*func)(OT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14), size_t offset, bool isStatic, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6, uType* p7, uType* p8, uType* p9, uType* p10, uType* p11, uType* p12, uType* p13, uType* p14) {
    return (new _uFunctionVoidT15<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>())->_Init(name, (void*)func, offset, isStatic, uVoid__typeof(), 15, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
struct _uFunctionT15 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        RT retval = (*(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)),
            uUnbox<T7>(ParameterTypes->UnsafeItem<uType*>(7), args->UnsafeItem<uObject*>(7)),
            uUnbox<T8>(ParameterTypes->UnsafeItem<uType*>(8), args->UnsafeItem<uObject*>(8)),
            uUnbox<T9>(ParameterTypes->UnsafeItem<uType*>(9), args->UnsafeItem<uObject*>(9)),
            uUnbox<T10>(ParameterTypes->UnsafeItem<uType*>(10), args->UnsafeItem<uObject*>(10)),
            uUnbox<T11>(ParameterTypes->UnsafeItem<uType*>(11), args->UnsafeItem<uObject*>(11)),
            uUnbox<T12>(ParameterTypes->UnsafeItem<uType*>(12), args->UnsafeItem<uObject*>(12)),
            uUnbox<T13>(ParameterTypes->UnsafeItem<uType*>(13), args->UnsafeItem<uObject*>(13)),
            uUnbox<T14>(ParameterTypes->UnsafeItem<uType*>(14), args->UnsafeItem<uObject*>(14)));
        return _Return(sizeof(RT), &retval);
    }
};
template <typename OT, typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
uFunction* uNewFunction(const char* name, RT(*func)(OT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14), size_t offset, bool isStatic, uType* returnType, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6, uType* p7, uType* p8, uType* p9, uType* p10, uType* p11, uType* p12, uType* p13, uType* p14) {
    return (new _uFunctionT15<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>())->_Init(name, (void*)func, offset, isStatic, returnType, 15, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
struct _uFunctionVoidT16 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        (*(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)),
            uUnbox<T7>(ParameterTypes->UnsafeItem<uType*>(7), args->UnsafeItem<uObject*>(7)),
            uUnbox<T8>(ParameterTypes->UnsafeItem<uType*>(8), args->UnsafeItem<uObject*>(8)),
            uUnbox<T9>(ParameterTypes->UnsafeItem<uType*>(9), args->UnsafeItem<uObject*>(9)),
            uUnbox<T10>(ParameterTypes->UnsafeItem<uType*>(10), args->UnsafeItem<uObject*>(10)),
            uUnbox<T11>(ParameterTypes->UnsafeItem<uType*>(11), args->UnsafeItem<uObject*>(11)),
            uUnbox<T12>(ParameterTypes->UnsafeItem<uType*>(12), args->UnsafeItem<uObject*>(12)),
            uUnbox<T13>(ParameterTypes->UnsafeItem<uType*>(13), args->UnsafeItem<uObject*>(13)),
            uUnbox<T14>(ParameterTypes->UnsafeItem<uType*>(14), args->UnsafeItem<uObject*>(14)),
            uUnbox<T15>(ParameterTypes->UnsafeItem<uType*>(15), args->UnsafeItem<uObject*>(15)));
        return NULL;
    }
};
template <typename OT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
uFunction* uNewFunctionVoid(const char* name, void(*func)(OT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15), size_t offset, bool isStatic, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6, uType* p7, uType* p8, uType* p9, uType* p10, uType* p11, uType* p12, uType* p13, uType* p14, uType* p15) {
    return (new _uFunctionVoidT16<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>())->_Init(name, (void*)func, offset, isStatic, uVoid__typeof(), 16, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
struct _uFunctionT16 : uFunction
{
    uObject* Invoke(uObject* obj, uArray* args) {
        _CheckArgs(obj, args);
        RT retval = (*(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15))_Func(obj))(_This(obj),
            uUnbox<T0>(ParameterTypes->UnsafeItem<uType*>(0), args->UnsafeItem<uObject*>(0)),
            uUnbox<T1>(ParameterTypes->UnsafeItem<uType*>(1), args->UnsafeItem<uObject*>(1)),
            uUnbox<T2>(ParameterTypes->UnsafeItem<uType*>(2), args->UnsafeItem<uObject*>(2)),
            uUnbox<T3>(ParameterTypes->UnsafeItem<uType*>(3), args->UnsafeItem<uObject*>(3)),
            uUnbox<T4>(ParameterTypes->UnsafeItem<uType*>(4), args->UnsafeItem<uObject*>(4)),
            uUnbox<T5>(ParameterTypes->UnsafeItem<uType*>(5), args->UnsafeItem<uObject*>(5)),
            uUnbox<T6>(ParameterTypes->UnsafeItem<uType*>(6), args->UnsafeItem<uObject*>(6)),
            uUnbox<T7>(ParameterTypes->UnsafeItem<uType*>(7), args->UnsafeItem<uObject*>(7)),
            uUnbox<T8>(ParameterTypes->UnsafeItem<uType*>(8), args->UnsafeItem<uObject*>(8)),
            uUnbox<T9>(ParameterTypes->UnsafeItem<uType*>(9), args->UnsafeItem<uObject*>(9)),
            uUnbox<T10>(ParameterTypes->UnsafeItem<uType*>(10), args->UnsafeItem<uObject*>(10)),
            uUnbox<T11>(ParameterTypes->UnsafeItem<uType*>(11), args->UnsafeItem<uObject*>(11)),
            uUnbox<T12>(ParameterTypes->UnsafeItem<uType*>(12), args->UnsafeItem<uObject*>(12)),
            uUnbox<T13>(ParameterTypes->UnsafeItem<uType*>(13), args->UnsafeItem<uObject*>(13)),
            uUnbox<T14>(ParameterTypes->UnsafeItem<uType*>(14), args->UnsafeItem<uObject*>(14)),
            uUnbox<T15>(ParameterTypes->UnsafeItem<uType*>(15), args->UnsafeItem<uObject*>(15)));
        return _Return(sizeof(RT), &retval);
    }
};
template <typename OT, typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
uFunction* uNewFunction(const char* name, RT(*func)(OT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15), size_t offset, bool isStatic, uType* returnType, uType* p0, uType* p1, uType* p2, uType* p3, uType* p4, uType* p5, uType* p6, uType* p7, uType* p8, uType* p9, uType* p10, uType* p11, uType* p12, uType* p13, uType* p14, uType* p15) {
    return (new _uFunctionT16<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>())->_Init(name, (void*)func, offset, isStatic, returnType, 16, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15);
}

/** @} */

#endif
