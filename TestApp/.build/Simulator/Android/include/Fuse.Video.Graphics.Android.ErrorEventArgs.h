// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Video\0.18.8\Graphics\Android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace Android{struct ErrorEventArgs;}}}}}

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace Android{

// internal sealed extern class ErrorEventArgs :233
// {
uType* ErrorEventArgs_typeof();
void ErrorEventArgs__ctor_1_fn(ErrorEventArgs* __this, int* errorReason, int* errorType);
void ErrorEventArgs__get_ErrorReason_fn(ErrorEventArgs* __this, int* __retval);
void ErrorEventArgs__set_ErrorReason_fn(ErrorEventArgs* __this, int* value);
void ErrorEventArgs__get_ErrorType_fn(ErrorEventArgs* __this, int* __retval);
void ErrorEventArgs__set_ErrorType_fn(ErrorEventArgs* __this, int* value);
void ErrorEventArgs__GetReason_fn(int* reason, uString** __retval);
void ErrorEventArgs__GetType1_fn(int* type, uString** __retval);
void ErrorEventArgs__New2_fn(int* errorReason, int* errorType, ErrorEventArgs** __retval);
void ErrorEventArgs__ToString_fn(ErrorEventArgs* __this, uString** __retval);

struct ErrorEventArgs : ::g::Uno::EventArgs
{
    int _ErrorReason;
    int _ErrorType;

    void ctor_1(int errorReason, int errorType);
    int ErrorReason();
    void ErrorReason(int value);
    int ErrorType();
    void ErrorType(int value);
    static uString* GetReason(int reason);
    static uString* GetType1(int type);
    static ErrorEventArgs* New2(int errorReason, int errorType);
};
// }

}}}}} // ::g::Fuse::Video::Graphics::Android
