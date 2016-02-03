// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Source\Uno\_delegate.h'.
// WARNING: Changes might be lost if you edit this file directly.

#define U_INVOKE_DELEGATE(FUNC_TYPE, ...) (_func ? \
    ((FUNC_TYPE)_func)((uByte*)_offset + (size_t)__VA_ARGS__) : \
    ((FUNC_TYPE)*(uByte**)((uByte*)_obj->__obj_type + _offset))(__VA_ARGS__))

void InvokeVoid()
{
    if (_prev) _prev->InvokeVoid();
    U_INVOKE_DELEGATE(void(*)(void*), _obj);
}

template <typename T0>
void InvokeVoid(T0 arg0)
{
    if (_prev) _prev->InvokeVoid<T0>(arg0);
    U_INVOKE_DELEGATE(void(*)(void*, T0), _obj, arg0);
}

template <typename T0, typename T1>
void InvokeVoid(T0 arg0, T1 arg1)
{
    if (_prev) _prev->InvokeVoid<T0, T1>(arg0, arg1);
    U_INVOKE_DELEGATE(void(*)(void*, T0, T1), _obj, arg0, arg1);
}

template <typename T0, typename T1, typename T2>
void InvokeVoid(T0 arg0, T1 arg1, T2 arg2)
{
    if (_prev) _prev->InvokeVoid<T0, T1, T2>(arg0, arg1, arg2);
    U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2), _obj, arg0, arg1, arg2);
}

template <typename T0, typename T1, typename T2, typename T3>
void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3)
{
    if (_prev) _prev->InvokeVoid<T0, T1, T2, T3>(arg0, arg1, arg2, arg3);
    U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3), _obj, arg0, arg1, arg2, arg3);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4>
void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
{
    if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4>(arg0, arg1, arg2, arg3, arg4);
    U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4), _obj, arg0, arg1, arg2, arg3, arg4);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
{
    if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5>(arg0, arg1, arg2, arg3, arg4, arg5);
    U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5), _obj, arg0, arg1, arg2, arg3, arg4, arg5);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6)
{
    if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6>(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7)
{
    if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6, T7>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8)
{
    if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6, T7, T8>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9)
{
    if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10)
{
    if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11)
{
    if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12)
{
    if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13)
{
    if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14)
{
    if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
    U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
}

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
void InvokeVoid(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14, T15 arg15)
{
    if (_prev) _prev->InvokeVoid<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
    U_INVOKE_DELEGATE(void(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
}

template <typename RT>
RT Invoke()
{
    if (_prev) _prev->Invoke<RT>();
    return U_INVOKE_DELEGATE(RT(*)(void*), _obj);
}

template <typename RT, typename T0>
RT Invoke(T0 arg0)
{
    if (_prev) _prev->Invoke<RT, T0>(arg0);
    return U_INVOKE_DELEGATE(RT(*)(void*, T0), _obj, arg0);
}

template <typename RT, typename T0, typename T1>
RT Invoke(T0 arg0, T1 arg1)
{
    if (_prev) _prev->Invoke<RT, T0, T1>(arg0, arg1);
    return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1), _obj, arg0, arg1);
}

template <typename RT, typename T0, typename T1, typename T2>
RT Invoke(T0 arg0, T1 arg1, T2 arg2)
{
    if (_prev) _prev->Invoke<RT, T0, T1, T2>(arg0, arg1, arg2);
    return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2), _obj, arg0, arg1, arg2);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3>
RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3)
{
    if (_prev) _prev->Invoke<RT, T0, T1, T2, T3>(arg0, arg1, arg2, arg3);
    return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3), _obj, arg0, arg1, arg2, arg3);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4>
RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
{
    if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4>(arg0, arg1, arg2, arg3, arg4);
    return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4), _obj, arg0, arg1, arg2, arg3, arg4);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
{
    if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5>(arg0, arg1, arg2, arg3, arg4, arg5);
    return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5), _obj, arg0, arg1, arg2, arg3, arg4, arg5);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6)
{
    if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6>(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7)
{
    if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6, T7>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8)
{
    if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9)
{
    if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10)
{
    if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11)
{
    if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12)
{
    if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13)
{
    if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14)
{
    if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
    return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
}

template <typename RT, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
RT Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14, T15 arg15)
{
    if (_prev) _prev->Invoke<RT, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
    return U_INVOKE_DELEGATE(RT(*)(void*, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15), _obj, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
}

#undef U_INVOKE_DELEGATE
